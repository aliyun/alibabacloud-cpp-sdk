// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/imm_20200930.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
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

AddImageMosaicResponse Alibabacloud_Imm20200930::Client::addImageMosaicWithOptions(shared_ptr<AddImageMosaicRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddImageMosaicShrinkRequest> request = make_shared<AddImageMosaicShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddImageMosaicRequestTargets>>(tmpReq->targets)) {
    request->targetsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->targets, make_shared<string>("Targets"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageFormat)) {
    query->insert(pair<string, string>("ImageFormat", *request->imageFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->quality)) {
    query->insert(pair<string, long>("Quality", *request->quality));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceURI)) {
    query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetURI)) {
    query->insert(pair<string, string>("TargetURI", *request->targetURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetsShrink)) {
    query->insert(pair<string, string>("Targets", *request->targetsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddImageMosaic"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddImageMosaicResponse(callApi(params, req, runtime));
}

AddImageMosaicResponse Alibabacloud_Imm20200930::Client::addImageMosaic(shared_ptr<AddImageMosaicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addImageMosaicWithOptions(request, runtime);
}

AddStoryFilesResponse Alibabacloud_Imm20200930::Client::addStoryFilesWithOptions(shared_ptr<AddStoryFilesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddStoryFilesShrinkRequest> request = make_shared<AddStoryFilesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<AddStoryFilesRequestFiles>>(tmpReq->files)) {
    request->filesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->files, make_shared<string>("Files"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    body->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filesShrink)) {
    body->insert(pair<string, string>("Files", *request->filesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectId)) {
    body->insert(pair<string, string>("ObjectId", *request->objectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddStoryFiles"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddStoryFilesResponse(callApi(params, req, runtime));
}

AddStoryFilesResponse Alibabacloud_Imm20200930::Client::addStoryFiles(shared_ptr<AddStoryFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addStoryFilesWithOptions(request, runtime);
}

AttachOSSBucketResponse Alibabacloud_Imm20200930::Client::attachOSSBucketWithOptions(shared_ptr<AttachOSSBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
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

BatchGetFigureClusterResponse Alibabacloud_Imm20200930::Client::batchGetFigureClusterWithOptions(shared_ptr<BatchGetFigureClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchGetFigureClusterShrinkRequest> request = make_shared<BatchGetFigureClusterShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->objectIds)) {
    request->objectIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->objectIds, make_shared<string>("ObjectIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectIdsShrink)) {
    query->insert(pair<string, string>("ObjectIds", *request->objectIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetFigureCluster"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchGetFigureClusterResponse(callApi(params, req, runtime));
}

BatchGetFigureClusterResponse Alibabacloud_Imm20200930::Client::batchGetFigureCluster(shared_ptr<BatchGetFigureClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetFigureClusterWithOptions(request, runtime);
}

BatchGetFileMetaResponse Alibabacloud_Imm20200930::Client::batchGetFileMetaWithOptions(shared_ptr<BatchGetFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchGetFileMetaShrinkRequest> request = make_shared<BatchGetFileMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->URIs)) {
    request->URIsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->URIs, make_shared<string>("URIs"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->withFields)) {
    request->withFieldsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->withFields, make_shared<string>("WithFields"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->withFieldsShrink)) {
    query->insert(pair<string, string>("WithFields", *request->withFieldsShrink));
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
  if (!Darabonba_Util::Client::isUnset<vector<InputFile>>(tmpReq->files)) {
    request->filesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->files, make_shared<string>("Files"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filesShrink)) {
    query->insert(pair<string, string>("Files", *request->filesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
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
  if (!Darabonba_Util::Client::isUnset<vector<InputFile>>(tmpReq->files)) {
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

CompareImageFacesResponse Alibabacloud_Imm20200930::Client::compareImageFacesWithOptions(shared_ptr<CompareImageFacesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CompareImageFacesShrinkRequest> request = make_shared<CompareImageFacesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CompareImageFacesRequestSource>(tmpReq->source)) {
    request->sourceShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->source, make_shared<string>("Source"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceShrink)) {
    query->insert(pair<string, string>("Source", *request->sourceShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CompareImageFaces"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CompareImageFacesResponse(callApi(params, req, runtime));
}

CompareImageFacesResponse Alibabacloud_Imm20200930::Client::compareImageFaces(shared_ptr<CompareImageFacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return compareImageFacesWithOptions(request, runtime);
}

ContextualAnswerResponse Alibabacloud_Imm20200930::Client::contextualAnswerWithOptions(shared_ptr<ContextualAnswerRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ContextualAnswerShrinkRequest> request = make_shared<ContextualAnswerShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ContextualFile>>(tmpReq->files)) {
    request->filesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->files, make_shared<string>("Files"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ContextualMessage>>(tmpReq->messages)) {
    request->messagesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->messages, make_shared<string>("Messages"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filesShrink)) {
    body->insert(pair<string, string>("Files", *request->filesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messagesShrink)) {
    body->insert(pair<string, string>("Messages", *request->messagesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ContextualAnswer"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ContextualAnswerResponse(callApi(params, req, runtime));
}

ContextualAnswerResponse Alibabacloud_Imm20200930::Client::contextualAnswer(shared_ptr<ContextualAnswerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return contextualAnswerWithOptions(request, runtime);
}

ContextualRetrievalResponse Alibabacloud_Imm20200930::Client::contextualRetrievalWithOptions(shared_ptr<ContextualRetrievalRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ContextualRetrievalShrinkRequest> request = make_shared<ContextualRetrievalShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ContextualMessage>>(tmpReq->messages)) {
    request->messagesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->messages, make_shared<string>("Messages"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->smartClusterIds)) {
    request->smartClusterIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->smartClusterIds, make_shared<string>("SmartClusterIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->recallOnly)) {
    query->insert(pair<string, bool>("RecallOnly", *request->recallOnly));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->messagesShrink)) {
    body->insert(pair<string, string>("Messages", *request->messagesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smartClusterIdsShrink)) {
    body->insert(pair<string, string>("SmartClusterIds", *request->smartClusterIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ContextualRetrieval"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ContextualRetrievalResponse(callApi(params, req, runtime));
}

ContextualRetrievalResponse Alibabacloud_Imm20200930::Client::contextualRetrieval(shared_ptr<ContextualRetrievalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return contextualRetrievalWithOptions(request, runtime);
}

CreateArchiveFileInspectionTaskResponse Alibabacloud_Imm20200930::Client::createArchiveFileInspectionTaskWithOptions(shared_ptr<CreateArchiveFileInspectionTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateArchiveFileInspectionTaskShrinkRequest> request = make_shared<CreateArchiveFileInspectionTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceURI)) {
    query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateArchiveFileInspectionTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateArchiveFileInspectionTaskResponse(callApi(params, req, runtime));
}

CreateArchiveFileInspectionTaskResponse Alibabacloud_Imm20200930::Client::createArchiveFileInspectionTask(shared_ptr<CreateArchiveFileInspectionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createArchiveFileInspectionTaskWithOptions(request, runtime);
}

CreateBatchResponse Alibabacloud_Imm20200930::Client::createBatchWithOptions(shared_ptr<CreateBatchRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateBatchShrinkRequest> request = make_shared<CreateBatchShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateBatchRequestActions>>(tmpReq->actions)) {
    request->actionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->actions, make_shared<string>("Actions"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Input>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateBatchRequestNotification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionsShrink)) {
    body->insert(pair<string, string>("Actions", *request->actionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    body->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    body->insert(pair<string, string>("Notification", *request->notificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceRole)) {
    body->insert(pair<string, string>("ServiceRole", *request->serviceRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    body->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBatch"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBatchResponse(callApi(params, req, runtime));
}

CreateBatchResponse Alibabacloud_Imm20200930::Client::createBatch(shared_ptr<CreateBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBatchWithOptions(request, runtime);
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

CreateCompressPointCloudTaskResponse Alibabacloud_Imm20200930::Client::createCompressPointCloudTaskWithOptions(shared_ptr<CreateCompressPointCloudTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateCompressPointCloudTaskShrinkRequest> request = make_shared<CreateCompressPointCloudTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<KdtreeOption>(tmpReq->kdtreeOption)) {
    request->kdtreeOptionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->kdtreeOption, make_shared<string>("KdtreeOption"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<OctreeOption>(tmpReq->octreeOption)) {
    request->octreeOptionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->octreeOption, make_shared<string>("OctreeOption"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->pointCloudFields)) {
    request->pointCloudFieldsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->pointCloudFields, make_shared<string>("PointCloudFields"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->compressMethod)) {
    query->insert(pair<string, string>("CompressMethod", *request->compressMethod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kdtreeOptionShrink)) {
    query->insert(pair<string, string>("KdtreeOption", *request->kdtreeOptionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->octreeOptionShrink)) {
    query->insert(pair<string, string>("OctreeOption", *request->octreeOptionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pointCloudFieldsShrink)) {
    query->insert(pair<string, string>("PointCloudFields", *request->pointCloudFieldsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pointCloudFileFormat)) {
    query->insert(pair<string, string>("PointCloudFileFormat", *request->pointCloudFileFormat));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->targetURI)) {
    query->insert(pair<string, string>("TargetURI", *request->targetURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCompressPointCloudTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCompressPointCloudTaskResponse(callApi(params, req, runtime));
}

CreateCompressPointCloudTaskResponse Alibabacloud_Imm20200930::Client::createCompressPointCloudTask(shared_ptr<CreateCompressPointCloudTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCompressPointCloudTaskWithOptions(request, runtime);
}

CreateCustomizedStoryResponse Alibabacloud_Imm20200930::Client::createCustomizedStoryWithOptions(shared_ptr<CreateCustomizedStoryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateCustomizedStoryShrinkRequest> request = make_shared<CreateCustomizedStoryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateCustomizedStoryRequestCover>(tmpReq->cover)) {
    request->coverShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->cover, make_shared<string>("Cover"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->customLabels)) {
    request->customLabelsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customLabels, make_shared<string>("CustomLabels"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateCustomizedStoryRequestFiles>>(tmpReq->files)) {
    request->filesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->files, make_shared<string>("Files"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coverShrink)) {
    body->insert(pair<string, string>("Cover", *request->coverShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customLabelsShrink)) {
    body->insert(pair<string, string>("CustomLabels", *request->customLabelsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    body->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filesShrink)) {
    body->insert(pair<string, string>("Files", *request->filesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storyName)) {
    body->insert(pair<string, string>("StoryName", *request->storyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storySubType)) {
    body->insert(pair<string, string>("StorySubType", *request->storySubType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storyType)) {
    body->insert(pair<string, string>("StoryType", *request->storyType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustomizedStory"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCustomizedStoryResponse(callApi(params, req, runtime));
}

CreateCustomizedStoryResponse Alibabacloud_Imm20200930::Client::createCustomizedStory(shared_ptr<CreateCustomizedStoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomizedStoryWithOptions(request, runtime);
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

CreateDecodeBlindWatermarkTaskResponse Alibabacloud_Imm20200930::Client::createDecodeBlindWatermarkTaskWithOptions(shared_ptr<CreateDecodeBlindWatermarkTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDecodeBlindWatermarkTaskShrinkRequest> request = make_shared<CreateDecodeBlindWatermarkTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->imageQuality)) {
    query->insert(pair<string, long>("ImageQuality", *request->imageQuality));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    query->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalImageURI)) {
    query->insert(pair<string, string>("OriginalImageURI", *request->originalImageURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceURI)) {
    query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->strengthLevel)) {
    query->insert(pair<string, string>("StrengthLevel", *request->strengthLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetURI)) {
    query->insert(pair<string, string>("TargetURI", *request->targetURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkType)) {
    query->insert(pair<string, string>("WatermarkType", *request->watermarkType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDecodeBlindWatermarkTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDecodeBlindWatermarkTaskResponse(callApi(params, req, runtime));
}

CreateDecodeBlindWatermarkTaskResponse Alibabacloud_Imm20200930::Client::createDecodeBlindWatermarkTask(shared_ptr<CreateDecodeBlindWatermarkTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDecodeBlindWatermarkTaskWithOptions(request, runtime);
}

CreateFacesSearchingTaskResponse Alibabacloud_Imm20200930::Client::createFacesSearchingTaskWithOptions(shared_ptr<CreateFacesSearchingTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateFacesSearchingTaskShrinkRequest> request = make_shared<CreateFacesSearchingTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateFacesSearchingTaskRequestSources>>(tmpReq->sources)) {
    request->sourcesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sources, make_shared<string>("Sources"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResult)) {
    query->insert(pair<string, long>("MaxResult", *request->maxResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourcesShrink)) {
    query->insert(pair<string, string>("Sources", *request->sourcesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFacesSearchingTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFacesSearchingTaskResponse(callApi(params, req, runtime));
}

CreateFacesSearchingTaskResponse Alibabacloud_Imm20200930::Client::createFacesSearchingTask(shared_ptr<CreateFacesSearchingTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFacesSearchingTaskWithOptions(request, runtime);
}

CreateFigureClusteringTaskResponse Alibabacloud_Imm20200930::Client::createFigureClusteringTaskWithOptions(shared_ptr<CreateFigureClusteringTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateFigureClusteringTaskShrinkRequest> request = make_shared<CreateFigureClusteringTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->froms)) {
    request->fromsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->froms, make_shared<string>("Froms"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->fromsShrink)) {
    query->insert(pair<string, string>("Froms", *request->fromsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
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

CreateFileCompressionTaskResponse Alibabacloud_Imm20200930::Client::createFileCompressionTaskWithOptions(shared_ptr<CreateFileCompressionTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateFileCompressionTaskShrinkRequest> request = make_shared<CreateFileCompressionTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateFileCompressionTaskRequestSources>>(tmpReq->sources)) {
    request->sourcesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sources, make_shared<string>("Sources"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->compressedFormat)) {
    query->insert(pair<string, string>("CompressedFormat", *request->compressedFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceManifestURI)) {
    query->insert(pair<string, string>("SourceManifestURI", *request->sourceManifestURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourcesShrink)) {
    query->insert(pair<string, string>("Sources", *request->sourcesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetURI)) {
    query->insert(pair<string, string>("TargetURI", *request->targetURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFileCompressionTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFileCompressionTaskResponse(callApi(params, req, runtime));
}

CreateFileCompressionTaskResponse Alibabacloud_Imm20200930::Client::createFileCompressionTask(shared_ptr<CreateFileCompressionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFileCompressionTaskWithOptions(request, runtime);
}

CreateFileUncompressionTaskResponse Alibabacloud_Imm20200930::Client::createFileUncompressionTaskWithOptions(shared_ptr<CreateFileUncompressionTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateFileUncompressionTaskShrinkRequest> request = make_shared<CreateFileUncompressionTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->selectedFiles)) {
    request->selectedFilesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->selectedFiles, make_shared<string>("SelectedFiles"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->selectedFilesShrink)) {
    query->insert(pair<string, string>("SelectedFiles", *request->selectedFilesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceURI)) {
    query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetURI)) {
    query->insert(pair<string, string>("TargetURI", *request->targetURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFileUncompressionTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFileUncompressionTaskResponse(callApi(params, req, runtime));
}

CreateFileUncompressionTaskResponse Alibabacloud_Imm20200930::Client::createFileUncompressionTask(shared_ptr<CreateFileUncompressionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFileUncompressionTaskWithOptions(request, runtime);
}

CreateImageModerationTaskResponse Alibabacloud_Imm20200930::Client::createImageModerationTaskWithOptions(shared_ptr<CreateImageModerationTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateImageModerationTaskShrinkRequest> request = make_shared<CreateImageModerationTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
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

CreateImageSplicingTaskResponse Alibabacloud_Imm20200930::Client::createImageSplicingTaskWithOptions(shared_ptr<CreateImageSplicingTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateImageSplicingTaskShrinkRequest> request = make_shared<CreateImageSplicingTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateImageSplicingTaskRequestSources>>(tmpReq->sources)) {
    request->sourcesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sources, make_shared<string>("Sources"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->align)) {
    query->insert(pair<string, long>("Align", *request->align));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backgroundColor)) {
    query->insert(pair<string, string>("BackgroundColor", *request->backgroundColor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageFormat)) {
    query->insert(pair<string, string>("ImageFormat", *request->imageFormat));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->margin)) {
    query->insert(pair<string, long>("Margin", *request->margin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->padding)) {
    query->insert(pair<string, long>("Padding", *request->padding));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->quality)) {
    query->insert(pair<string, long>("Quality", *request->quality));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scaleType)) {
    query->insert(pair<string, string>("ScaleType", *request->scaleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourcesShrink)) {
    query->insert(pair<string, string>("Sources", *request->sourcesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetURI)) {
    query->insert(pair<string, string>("TargetURI", *request->targetURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateImageSplicingTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateImageSplicingTaskResponse(callApi(params, req, runtime));
}

CreateImageSplicingTaskResponse Alibabacloud_Imm20200930::Client::createImageSplicingTask(shared_ptr<CreateImageSplicingTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImageSplicingTaskWithOptions(request, runtime);
}

CreateImageToPDFTaskResponse Alibabacloud_Imm20200930::Client::createImageToPDFTaskWithOptions(shared_ptr<CreateImageToPDFTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateImageToPDFTaskShrinkRequest> request = make_shared<CreateImageToPDFTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateImageToPDFTaskRequestSources>>(tmpReq->sources)) {
    request->sourcesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sources, make_shared<string>("Sources"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->targetURI)) {
    query->insert(pair<string, string>("TargetURI", *request->targetURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateImageToPDFTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateImageToPDFTaskResponse(callApi(params, req, runtime));
}

CreateImageToPDFTaskResponse Alibabacloud_Imm20200930::Client::createImageToPDFTask(shared_ptr<CreateImageToPDFTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImageToPDFTaskWithOptions(request, runtime);
}

CreateLocationDateClusteringTaskResponse Alibabacloud_Imm20200930::Client::createLocationDateClusteringTaskWithOptions(shared_ptr<CreateLocationDateClusteringTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateLocationDateClusteringTaskShrinkRequest> request = make_shared<CreateLocationDateClusteringTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateLocationDateClusteringTaskRequestDateOptions>(tmpReq->dateOptions)) {
    request->dateOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dateOptions, make_shared<string>("DateOptions"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateLocationDateClusteringTaskRequestLocationOptions>(tmpReq->locationOptions)) {
    request->locationOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->locationOptions, make_shared<string>("LocationOptions"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dateOptionsShrink)) {
    query->insert(pair<string, string>("DateOptions", *request->dateOptionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationOptionsShrink)) {
    query->insert(pair<string, string>("LocationOptions", *request->locationOptionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
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
    {"action", boost::any(string("CreateLocationDateClusteringTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLocationDateClusteringTaskResponse(callApi(params, req, runtime));
}

CreateLocationDateClusteringTaskResponse Alibabacloud_Imm20200930::Client::createLocationDateClusteringTask(shared_ptr<CreateLocationDateClusteringTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLocationDateClusteringTaskWithOptions(request, runtime);
}

CreateMediaConvertTaskResponse Alibabacloud_Imm20200930::Client::createMediaConvertTaskWithOptions(shared_ptr<CreateMediaConvertTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateMediaConvertTaskShrinkRequest> request = make_shared<CreateMediaConvertTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->alignmentIndex)) {
    query->insert(pair<string, long>("AlignmentIndex", *request->alignmentIndex));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
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
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateOfficeConversionTaskRequestSources>>(tmpReq->sources)) {
    request->sourcesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sources, make_shared<string>("Sources"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<TrimPolicy>(tmpReq->trimPolicy)) {
    request->trimPolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->trimPolicy, make_shared<string>("TrimPolicy"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
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
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sourcesShrink)) {
    body->insert(pair<string, string>("Sources", *request->sourcesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
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

CreateProjectResponse Alibabacloud_Imm20200930::Client::createProjectWithOptions(shared_ptr<CreateProjectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateProjectShrinkRequest> request = make_shared<CreateProjectShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateProjectRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
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
  if (!Darabonba_Util::Client::isUnset<long>(request->projectMaxDatasetCount)) {
    query->insert(pair<string, long>("ProjectMaxDatasetCount", *request->projectMaxDatasetCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceRole)) {
    query->insert(pair<string, string>("ServiceRole", *request->serviceRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("Tag", *request->tagShrink));
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

CreateSimilarImageClusteringTaskResponse Alibabacloud_Imm20200930::Client::createSimilarImageClusteringTaskWithOptions(shared_ptr<CreateSimilarImageClusteringTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSimilarImageClusteringTaskShrinkRequest> request = make_shared<CreateSimilarImageClusteringTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
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
    {"action", boost::any(string("CreateSimilarImageClusteringTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSimilarImageClusteringTaskResponse(callApi(params, req, runtime));
}

CreateSimilarImageClusteringTaskResponse Alibabacloud_Imm20200930::Client::createSimilarImageClusteringTask(shared_ptr<CreateSimilarImageClusteringTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSimilarImageClusteringTaskWithOptions(request, runtime);
}

CreateStoryResponse Alibabacloud_Imm20200930::Client::createStoryWithOptions(shared_ptr<CreateStoryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateStoryShrinkRequest> request = make_shared<CreateStoryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AddressForStory>(tmpReq->address)) {
    request->addressShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->address, make_shared<string>("Address"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->customLabels)) {
    request->customLabelsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customLabels, make_shared<string>("CustomLabels"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addressShrink)) {
    body->insert(pair<string, string>("Address", *request->addressShrink));
  }
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

CreateTriggerResponse Alibabacloud_Imm20200930::Client::createTriggerWithOptions(shared_ptr<CreateTriggerRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateTriggerShrinkRequest> request = make_shared<CreateTriggerShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateTriggerRequestActions>>(tmpReq->actions)) {
    request->actionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->actions, make_shared<string>("Actions"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Input>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTriggerRequestNotification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionsShrink)) {
    body->insert(pair<string, string>("Actions", *request->actionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    body->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    body->insert(pair<string, string>("Notification", *request->notificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceRole)) {
    body->insert(pair<string, string>("ServiceRole", *request->serviceRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    body->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrigger"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTriggerResponse(callApi(params, req, runtime));
}

CreateTriggerResponse Alibabacloud_Imm20200930::Client::createTrigger(shared_ptr<CreateTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTriggerWithOptions(request, runtime);
}

CreateVideoLabelClassificationTaskResponse Alibabacloud_Imm20200930::Client::createVideoLabelClassificationTaskWithOptions(shared_ptr<CreateVideoLabelClassificationTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateVideoLabelClassificationTaskShrinkRequest> request = make_shared<CreateVideoLabelClassificationTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
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
    {"action", boost::any(string("CreateVideoLabelClassificationTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVideoLabelClassificationTaskResponse(callApi(params, req, runtime));
}

CreateVideoLabelClassificationTaskResponse Alibabacloud_Imm20200930::Client::createVideoLabelClassificationTask(shared_ptr<CreateVideoLabelClassificationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVideoLabelClassificationTaskWithOptions(request, runtime);
}

CreateVideoModerationTaskResponse Alibabacloud_Imm20200930::Client::createVideoModerationTaskWithOptions(shared_ptr<CreateVideoModerationTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateVideoModerationTaskShrinkRequest> request = make_shared<CreateVideoModerationTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
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

DeleteBatchResponse Alibabacloud_Imm20200930::Client::deleteBatchWithOptions(shared_ptr<DeleteBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBatch"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBatchResponse(callApi(params, req, runtime));
}

DeleteBatchResponse Alibabacloud_Imm20200930::Client::deleteBatch(shared_ptr<DeleteBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBatchWithOptions(request, runtime);
}

DeleteBindingResponse Alibabacloud_Imm20200930::Client::deleteBindingWithOptions(shared_ptr<DeleteBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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

DeleteLocationDateClusterResponse Alibabacloud_Imm20200930::Client::deleteLocationDateClusterWithOptions(shared_ptr<DeleteLocationDateClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->objectId)) {
    body->insert(pair<string, string>("ObjectId", *request->objectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLocationDateCluster"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLocationDateClusterResponse(callApi(params, req, runtime));
}

DeleteLocationDateClusterResponse Alibabacloud_Imm20200930::Client::deleteLocationDateCluster(shared_ptr<DeleteLocationDateClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLocationDateClusterWithOptions(request, runtime);
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

DeleteTriggerResponse Alibabacloud_Imm20200930::Client::deleteTriggerWithOptions(shared_ptr<DeleteTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrigger"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTriggerResponse(callApi(params, req, runtime));
}

DeleteTriggerResponse Alibabacloud_Imm20200930::Client::deleteTrigger(shared_ptr<DeleteTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTriggerWithOptions(request, runtime);
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

DetectImageBodiesResponse Alibabacloud_Imm20200930::Client::detectImageBodiesWithOptions(shared_ptr<DetectImageBodiesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DetectImageBodiesShrinkRequest> request = make_shared<DetectImageBodiesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->sensitivity)) {
    query->insert(pair<string, double>("Sensitivity", *request->sensitivity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceURI)) {
    query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectImageBodies"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectImageBodiesResponse(callApi(params, req, runtime));
}

DetectImageBodiesResponse Alibabacloud_Imm20200930::Client::detectImageBodies(shared_ptr<DetectImageBodiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageBodiesWithOptions(request, runtime);
}

DetectImageCarsResponse Alibabacloud_Imm20200930::Client::detectImageCarsWithOptions(shared_ptr<DetectImageCarsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DetectImageCarsShrinkRequest> request = make_shared<DetectImageCarsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
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
    {"action", boost::any(string("DetectImageCars"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectImageCarsResponse(callApi(params, req, runtime));
}

DetectImageCarsResponse Alibabacloud_Imm20200930::Client::detectImageCars(shared_ptr<DetectImageCarsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageCarsWithOptions(request, runtime);
}

DetectImageCodesResponse Alibabacloud_Imm20200930::Client::detectImageCodesWithOptions(shared_ptr<DetectImageCodesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DetectImageCodesShrinkRequest> request = make_shared<DetectImageCodesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
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
    {"action", boost::any(string("DetectImageCodes"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectImageCodesResponse(callApi(params, req, runtime));
}

DetectImageCodesResponse Alibabacloud_Imm20200930::Client::detectImageCodes(shared_ptr<DetectImageCodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageCodesWithOptions(request, runtime);
}

DetectImageCroppingResponse Alibabacloud_Imm20200930::Client::detectImageCroppingWithOptions(shared_ptr<DetectImageCroppingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DetectImageCroppingShrinkRequest> request = make_shared<DetectImageCroppingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
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
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
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
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
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
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
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

DetectImageTextsResponse Alibabacloud_Imm20200930::Client::detectImageTextsWithOptions(shared_ptr<DetectImageTextsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DetectImageTextsShrinkRequest> request = make_shared<DetectImageTextsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
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
    {"action", boost::any(string("DetectImageTexts"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectImageTextsResponse(callApi(params, req, runtime));
}

DetectImageTextsResponse Alibabacloud_Imm20200930::Client::detectImageTexts(shared_ptr<DetectImageTextsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageTextsWithOptions(request, runtime);
}

DetectMediaMetaResponse Alibabacloud_Imm20200930::Client::detectMediaMetaWithOptions(shared_ptr<DetectMediaMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DetectMediaMetaShrinkRequest> request = make_shared<DetectMediaMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
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
    {"action", boost::any(string("DetectMediaMeta"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectMediaMetaResponse(callApi(params, req, runtime));
}

DetectMediaMetaResponse Alibabacloud_Imm20200930::Client::detectMediaMeta(shared_ptr<DetectMediaMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectMediaMetaWithOptions(request, runtime);
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

EncodeBlindWatermarkResponse Alibabacloud_Imm20200930::Client::encodeBlindWatermarkWithOptions(shared_ptr<EncodeBlindWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->imageQuality)) {
    query->insert(pair<string, long>("ImageQuality", *request->imageQuality));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceURI)) {
    query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->strengthLevel)) {
    query->insert(pair<string, string>("StrengthLevel", *request->strengthLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetURI)) {
    query->insert(pair<string, string>("TargetURI", *request->targetURI));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EncodeBlindWatermark"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EncodeBlindWatermarkResponse(callApi(params, req, runtime));
}

EncodeBlindWatermarkResponse Alibabacloud_Imm20200930::Client::encodeBlindWatermark(shared_ptr<EncodeBlindWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return encodeBlindWatermarkWithOptions(request, runtime);
}

ExtractDocumentTextResponse Alibabacloud_Imm20200930::Client::extractDocumentTextWithOptions(shared_ptr<ExtractDocumentTextRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ExtractDocumentTextShrinkRequest> request = make_shared<ExtractDocumentTextShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceURI)) {
    query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExtractDocumentText"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExtractDocumentTextResponse(callApi(params, req, runtime));
}

ExtractDocumentTextResponse Alibabacloud_Imm20200930::Client::extractDocumentText(shared_ptr<ExtractDocumentTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return extractDocumentTextWithOptions(request, runtime);
}

FuzzyQueryResponse Alibabacloud_Imm20200930::Client::fuzzyQueryWithOptions(shared_ptr<FuzzyQueryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FuzzyQueryShrinkRequest> request = make_shared<FuzzyQueryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->withFields)) {
    request->withFieldsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->withFields, make_shared<string>("WithFields"), make_shared<string>("json")));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
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

GenerateVideoPlaylistResponse Alibabacloud_Imm20200930::Client::generateVideoPlaylistWithOptions(shared_ptr<GenerateVideoPlaylistRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GenerateVideoPlaylistShrinkRequest> request = make_shared<GenerateVideoPlaylistShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<GenerateVideoPlaylistRequestSourceSubtitles>>(tmpReq->sourceSubtitles)) {
    request->sourceSubtitlesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceSubtitles, make_shared<string>("SourceSubtitles"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<GenerateVideoPlaylistRequestTargets>>(tmpReq->targets)) {
    request->targetsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->targets, make_shared<string>("Targets"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterURI)) {
    query->insert(pair<string, string>("MasterURI", *request->masterURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->overwritePolicy)) {
    query->insert(pair<string, string>("OverwritePolicy", *request->overwritePolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->sourceDuration)) {
    query->insert(pair<string, double>("SourceDuration", *request->sourceDuration));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->sourceStartTime)) {
    query->insert(pair<string, double>("SourceStartTime", *request->sourceStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceSubtitlesShrink)) {
    query->insert(pair<string, string>("SourceSubtitles", *request->sourceSubtitlesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceURI)) {
    query->insert(pair<string, string>("SourceURI", *request->sourceURI));
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
    {"action", boost::any(string("GenerateVideoPlaylist"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateVideoPlaylistResponse(callApi(params, req, runtime));
}

GenerateVideoPlaylistResponse Alibabacloud_Imm20200930::Client::generateVideoPlaylist(shared_ptr<GenerateVideoPlaylistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateVideoPlaylistWithOptions(request, runtime);
}

GenerateWebofficeTokenResponse Alibabacloud_Imm20200930::Client::generateWebofficeTokenWithOptions(shared_ptr<GenerateWebofficeTokenRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GenerateWebofficeTokenShrinkRequest> request = make_shared<GenerateWebofficeTokenShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<WebofficePermission>(tmpReq->permission)) {
    request->permissionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->permission, make_shared<string>("Permission"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<WebofficeUser>(tmpReq->user)) {
    request->userShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->user, make_shared<string>("User"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<WebofficeWatermark>(tmpReq->watermark)) {
    request->watermarkShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->watermark, make_shared<string>("Watermark"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
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
    {"action", boost::any(string("GenerateWebofficeToken"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateWebofficeTokenResponse(callApi(params, req, runtime));
}

GenerateWebofficeTokenResponse Alibabacloud_Imm20200930::Client::generateWebofficeToken(shared_ptr<GenerateWebofficeTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateWebofficeTokenWithOptions(request, runtime);
}

GetBatchResponse Alibabacloud_Imm20200930::Client::getBatchWithOptions(shared_ptr<GetBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBatch"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBatchResponse(callApi(params, req, runtime));
}

GetBatchResponse Alibabacloud_Imm20200930::Client::getBatch(shared_ptr<GetBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBatchWithOptions(request, runtime);
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

GetDRMLicenseResponse Alibabacloud_Imm20200930::Client::getDRMLicenseWithOptions(shared_ptr<GetDRMLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->protectionSystem)) {
    query->insert(pair<string, string>("ProtectionSystem", *request->protectionSystem));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDRMLicense"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDRMLicenseResponse(callApi(params, req, runtime));
}

GetDRMLicenseResponse Alibabacloud_Imm20200930::Client::getDRMLicense(shared_ptr<GetDRMLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDRMLicenseWithOptions(request, runtime);
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

GetDecodeBlindWatermarkResultResponse Alibabacloud_Imm20200930::Client::getDecodeBlindWatermarkResultWithOptions(shared_ptr<GetDecodeBlindWatermarkResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("GetDecodeBlindWatermarkResult"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDecodeBlindWatermarkResultResponse(callApi(params, req, runtime));
}

GetDecodeBlindWatermarkResultResponse Alibabacloud_Imm20200930::Client::getDecodeBlindWatermarkResult(shared_ptr<GetDecodeBlindWatermarkResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDecodeBlindWatermarkResultWithOptions(request, runtime);
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

GetFileMetaResponse Alibabacloud_Imm20200930::Client::getFileMetaWithOptions(shared_ptr<GetFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetFileMetaShrinkRequest> request = make_shared<GetFileMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->withFields)) {
    request->withFieldsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->withFields, make_shared<string>("WithFields"), make_shared<string>("json")));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->withFieldsShrink)) {
    query->insert(pair<string, string>("WithFields", *request->withFieldsShrink));
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

GetImageModerationResultResponse Alibabacloud_Imm20200930::Client::getImageModerationResultWithOptions(shared_ptr<GetImageModerationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("GetImageModerationResult"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetImageModerationResultResponse(callApi(params, req, runtime));
}

GetImageModerationResultResponse Alibabacloud_Imm20200930::Client::getImageModerationResult(shared_ptr<GetImageModerationResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getImageModerationResultWithOptions(request, runtime);
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->requestDefinition)) {
    query->insert(pair<string, bool>("RequestDefinition", *request->requestDefinition));
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

GetTriggerResponse Alibabacloud_Imm20200930::Client::getTriggerWithOptions(shared_ptr<GetTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTrigger"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTriggerResponse(callApi(params, req, runtime));
}

GetTriggerResponse Alibabacloud_Imm20200930::Client::getTrigger(shared_ptr<GetTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTriggerWithOptions(request, runtime);
}

GetVideoLabelClassificationResultResponse Alibabacloud_Imm20200930::Client::getVideoLabelClassificationResultWithOptions(shared_ptr<GetVideoLabelClassificationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("GetVideoLabelClassificationResult"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVideoLabelClassificationResultResponse(callApi(params, req, runtime));
}

GetVideoLabelClassificationResultResponse Alibabacloud_Imm20200930::Client::getVideoLabelClassificationResult(shared_ptr<GetVideoLabelClassificationResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVideoLabelClassificationResultWithOptions(request, runtime);
}

GetVideoModerationResultResponse Alibabacloud_Imm20200930::Client::getVideoModerationResultWithOptions(shared_ptr<GetVideoModerationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("GetVideoModerationResult"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVideoModerationResultResponse(callApi(params, req, runtime));
}

GetVideoModerationResultResponse Alibabacloud_Imm20200930::Client::getVideoModerationResult(shared_ptr<GetVideoModerationResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVideoModerationResultWithOptions(request, runtime);
}

IndexFileMetaResponse Alibabacloud_Imm20200930::Client::indexFileMetaWithOptions(shared_ptr<IndexFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<IndexFileMetaShrinkRequest> request = make_shared<IndexFileMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<InputFile>(tmpReq->file)) {
    request->fileShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->file, make_shared<string>("File"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Notification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileShrink)) {
    query->insert(pair<string, string>("File", *request->fileShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
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

ListBatchesResponse Alibabacloud_Imm20200930::Client::listBatchesWithOptions(shared_ptr<ListBatchesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagSelector)) {
    query->insert(pair<string, string>("TagSelector", *request->tagSelector));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBatches"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBatchesResponse(callApi(params, req, runtime));
}

ListBatchesResponse Alibabacloud_Imm20200930::Client::listBatches(shared_ptr<ListBatchesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBatchesWithOptions(request, runtime);
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

ListProjectsResponse Alibabacloud_Imm20200930::Client::listProjectsWithOptions(shared_ptr<ListProjectsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListProjectsShrinkRequest> request = make_shared<ListProjectsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListProjectsRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("Tag", *request->tagShrink));
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

ListRegionsResponse Alibabacloud_Imm20200930::Client::listRegionsWithOptions(shared_ptr<ListRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRegions"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRegionsResponse(callApi(params, req, runtime));
}

ListRegionsResponse Alibabacloud_Imm20200930::Client::listRegions(shared_ptr<ListRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRegionsWithOptions(request, runtime);
}

ListTasksResponse Alibabacloud_Imm20200930::Client::listTasksWithOptions(shared_ptr<ListTasksRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTasksShrinkRequest> request = make_shared<ListTasksShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<TimeRange>(tmpReq->endTimeRange)) {
    request->endTimeRangeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->endTimeRange, make_shared<string>("EndTimeRange"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<TimeRange>(tmpReq->startTimeRange)) {
    request->startTimeRangeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->startTimeRange, make_shared<string>("StartTimeRange"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->requestDefinition)) {
    query->insert(pair<string, bool>("RequestDefinition", *request->requestDefinition));
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

ListTriggersResponse Alibabacloud_Imm20200930::Client::listTriggersWithOptions(shared_ptr<ListTriggersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagSelector)) {
    query->insert(pair<string, string>("TagSelector", *request->tagSelector));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTriggers"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTriggersResponse(callApi(params, req, runtime));
}

ListTriggersResponse Alibabacloud_Imm20200930::Client::listTriggers(shared_ptr<ListTriggersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTriggersWithOptions(request, runtime);
}

QueryFigureClustersResponse Alibabacloud_Imm20200930::Client::queryFigureClustersWithOptions(shared_ptr<QueryFigureClustersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryFigureClustersShrinkRequest> request = make_shared<QueryFigureClustersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<TimeRange>(tmpReq->createTimeRange)) {
    request->createTimeRangeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createTimeRange, make_shared<string>("CreateTimeRange"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<TimeRange>(tmpReq->updateTimeRange)) {
    request->updateTimeRangeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateTimeRange, make_shared<string>("UpdateTimeRange"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->updateTimeRangeShrink)) {
    query->insert(pair<string, string>("UpdateTimeRange", *request->updateTimeRangeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withTotalCount)) {
    query->insert(pair<string, bool>("WithTotalCount", *request->withTotalCount));
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

QueryLocationDateClustersResponse Alibabacloud_Imm20200930::Client::queryLocationDateClustersWithOptions(shared_ptr<QueryLocationDateClustersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryLocationDateClustersShrinkRequest> request = make_shared<QueryLocationDateClustersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<Address>(tmpReq->address)) {
    request->addressShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->address, make_shared<string>("Address"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<TimeRange>(tmpReq->createTimeRange)) {
    request->createTimeRangeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createTimeRange, make_shared<string>("CreateTimeRange"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<TimeRange>(tmpReq->locationDateClusterEndTimeRange)) {
    request->locationDateClusterEndTimeRangeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->locationDateClusterEndTimeRange, make_shared<string>("LocationDateClusterEndTimeRange"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->locationDateClusterLevels)) {
    request->locationDateClusterLevelsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->locationDateClusterLevels, make_shared<string>("LocationDateClusterLevels"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<TimeRange>(tmpReq->locationDateClusterStartTimeRange)) {
    request->locationDateClusterStartTimeRangeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->locationDateClusterStartTimeRange, make_shared<string>("LocationDateClusterStartTimeRange"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<TimeRange>(tmpReq->updateTimeRange)) {
    request->updateTimeRangeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateTimeRange, make_shared<string>("UpdateTimeRange"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addressShrink)) {
    query->insert(pair<string, string>("Address", *request->addressShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeRangeShrink)) {
    query->insert(pair<string, string>("CreateTimeRange", *request->createTimeRangeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customLabels)) {
    query->insert(pair<string, string>("CustomLabels", *request->customLabels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationDateClusterEndTimeRangeShrink)) {
    query->insert(pair<string, string>("LocationDateClusterEndTimeRange", *request->locationDateClusterEndTimeRangeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationDateClusterLevelsShrink)) {
    query->insert(pair<string, string>("LocationDateClusterLevels", *request->locationDateClusterLevelsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationDateClusterStartTimeRangeShrink)) {
    query->insert(pair<string, string>("LocationDateClusterStartTimeRange", *request->locationDateClusterStartTimeRangeShrink));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateTimeRangeShrink)) {
    query->insert(pair<string, string>("UpdateTimeRange", *request->updateTimeRangeShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryLocationDateClusters"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryLocationDateClustersResponse(callApi(params, req, runtime));
}

QueryLocationDateClustersResponse Alibabacloud_Imm20200930::Client::queryLocationDateClusters(shared_ptr<QueryLocationDateClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryLocationDateClustersWithOptions(request, runtime);
}

QuerySimilarImageClustersResponse Alibabacloud_Imm20200930::Client::querySimilarImageClustersWithOptions(shared_ptr<QuerySimilarImageClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("QuerySimilarImageClusters"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySimilarImageClustersResponse(callApi(params, req, runtime));
}

QuerySimilarImageClustersResponse Alibabacloud_Imm20200930::Client::querySimilarImageClusters(shared_ptr<QuerySimilarImageClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySimilarImageClustersWithOptions(request, runtime);
}

QueryStoriesResponse Alibabacloud_Imm20200930::Client::queryStoriesWithOptions(shared_ptr<QueryStoriesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryStoriesShrinkRequest> request = make_shared<QueryStoriesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<TimeRange>(tmpReq->createTimeRange)) {
    request->createTimeRangeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createTimeRange, make_shared<string>("CreateTimeRange"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->figureClusterIds)) {
    request->figureClusterIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->figureClusterIds, make_shared<string>("FigureClusterIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<TimeRange>(tmpReq->storyEndTimeRange)) {
    request->storyEndTimeRangeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->storyEndTimeRange, make_shared<string>("StoryEndTimeRange"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<TimeRange>(tmpReq->storyStartTimeRange)) {
    request->storyStartTimeRangeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->storyStartTimeRange, make_shared<string>("StoryStartTimeRange"), make_shared<string>("json")));
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
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
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

RemoveStoryFilesResponse Alibabacloud_Imm20200930::Client::removeStoryFilesWithOptions(shared_ptr<RemoveStoryFilesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveStoryFilesShrinkRequest> request = make_shared<RemoveStoryFilesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<RemoveStoryFilesRequestFiles>>(tmpReq->files)) {
    request->filesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->files, make_shared<string>("Files"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    body->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filesShrink)) {
    body->insert(pair<string, string>("Files", *request->filesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectId)) {
    body->insert(pair<string, string>("ObjectId", *request->objectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveStoryFiles"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveStoryFilesResponse(callApi(params, req, runtime));
}

RemoveStoryFilesResponse Alibabacloud_Imm20200930::Client::removeStoryFiles(shared_ptr<RemoveStoryFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeStoryFilesWithOptions(request, runtime);
}

ResumeBatchResponse Alibabacloud_Imm20200930::Client::resumeBatchWithOptions(shared_ptr<ResumeBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeBatch"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeBatchResponse(callApi(params, req, runtime));
}

ResumeBatchResponse Alibabacloud_Imm20200930::Client::resumeBatch(shared_ptr<ResumeBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeBatchWithOptions(request, runtime);
}

ResumeTriggerResponse Alibabacloud_Imm20200930::Client::resumeTriggerWithOptions(shared_ptr<ResumeTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeTrigger"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeTriggerResponse(callApi(params, req, runtime));
}

ResumeTriggerResponse Alibabacloud_Imm20200930::Client::resumeTrigger(shared_ptr<ResumeTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeTriggerWithOptions(request, runtime);
}

SearchImageFigureClusterResponse Alibabacloud_Imm20200930::Client::searchImageFigureClusterWithOptions(shared_ptr<SearchImageFigureClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SearchImageFigureClusterShrinkRequest> request = make_shared<SearchImageFigureClusterShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->credentialConfig, make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
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
    {"action", boost::any(string("SearchImageFigureCluster"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchImageFigureClusterResponse(callApi(params, req, runtime));
}

SearchImageFigureClusterResponse Alibabacloud_Imm20200930::Client::searchImageFigureCluster(shared_ptr<SearchImageFigureClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchImageFigureClusterWithOptions(request, runtime);
}

SemanticQueryResponse Alibabacloud_Imm20200930::Client::semanticQueryWithOptions(shared_ptr<SemanticQueryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SemanticQueryShrinkRequest> request = make_shared<SemanticQueryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->mediaTypes)) {
    request->mediaTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->mediaTypes, make_shared<string>("MediaTypes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->withFields)) {
    request->withFieldsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->withFields, make_shared<string>("WithFields"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaTypesShrink)) {
    query->insert(pair<string, string>("MediaTypes", *request->mediaTypesShrink));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->withFieldsShrink)) {
    query->insert(pair<string, string>("WithFields", *request->withFieldsShrink));
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
    request->queryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->query, make_shared<string>("Query"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->withoutTotalHits)) {
    query->insert(pair<string, bool>("WithoutTotalHits", *request->withoutTotalHits));
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

SuspendBatchResponse Alibabacloud_Imm20200930::Client::suspendBatchWithOptions(shared_ptr<SuspendBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendBatch"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SuspendBatchResponse(callApi(params, req, runtime));
}

SuspendBatchResponse Alibabacloud_Imm20200930::Client::suspendBatch(shared_ptr<SuspendBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendBatchWithOptions(request, runtime);
}

SuspendTriggerResponse Alibabacloud_Imm20200930::Client::suspendTriggerWithOptions(shared_ptr<SuspendTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendTrigger"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SuspendTriggerResponse(callApi(params, req, runtime));
}

SuspendTriggerResponse Alibabacloud_Imm20200930::Client::suspendTrigger(shared_ptr<SuspendTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendTriggerWithOptions(request, runtime);
}

UpdateBatchResponse Alibabacloud_Imm20200930::Client::updateBatchWithOptions(shared_ptr<UpdateBatchRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateBatchShrinkRequest> request = make_shared<UpdateBatchShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateBatchRequestActions>>(tmpReq->actions)) {
    request->actionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->actions, make_shared<string>("Actions"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Input>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionsShrink)) {
    body->insert(pair<string, string>("Actions", *request->actionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    body->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    body->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBatch"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBatchResponse(callApi(params, req, runtime));
}

UpdateBatchResponse Alibabacloud_Imm20200930::Client::updateBatch(shared_ptr<UpdateBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBatchWithOptions(request, runtime);
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
    request->figureClusterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->figureCluster, make_shared<string>("FigureCluster"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<InputFile>(tmpReq->file)) {
    request->fileShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->file, make_shared<string>("File"), make_shared<string>("json")));
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

UpdateLocationDateClusterResponse Alibabacloud_Imm20200930::Client::updateLocationDateClusterWithOptions(shared_ptr<UpdateLocationDateClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateLocationDateClusterShrinkRequest> request = make_shared<UpdateLocationDateClusterShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->customLabels)) {
    request->customLabelsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customLabels, make_shared<string>("CustomLabels"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customId)) {
    query->insert(pair<string, string>("CustomId", *request->customId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customLabelsShrink)) {
    query->insert(pair<string, string>("CustomLabels", *request->customLabelsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectId)) {
    query->insert(pair<string, string>("ObjectId", *request->objectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLocationDateCluster"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLocationDateClusterResponse(callApi(params, req, runtime));
}

UpdateLocationDateClusterResponse Alibabacloud_Imm20200930::Client::updateLocationDateCluster(shared_ptr<UpdateLocationDateClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLocationDateClusterWithOptions(request, runtime);
}

UpdateProjectResponse Alibabacloud_Imm20200930::Client::updateProjectWithOptions(shared_ptr<UpdateProjectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateProjectShrinkRequest> request = make_shared<UpdateProjectShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateProjectRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
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
  if (!Darabonba_Util::Client::isUnset<long>(request->projectMaxDatasetCount)) {
    query->insert(pair<string, long>("ProjectMaxDatasetCount", *request->projectMaxDatasetCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceRole)) {
    query->insert(pair<string, string>("ServiceRole", *request->serviceRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("Tag", *request->tagShrink));
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
  if (!Darabonba_Util::Client::isUnset<UpdateStoryRequestCover>(tmpReq->cover)) {
    request->coverShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->cover, make_shared<string>("Cover"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->customLabels)) {
    request->customLabelsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customLabels, make_shared<string>("CustomLabels"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coverShrink)) {
    body->insert(pair<string, string>("Cover", *request->coverShrink));
  }
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

UpdateTriggerResponse Alibabacloud_Imm20200930::Client::updateTriggerWithOptions(shared_ptr<UpdateTriggerRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateTriggerShrinkRequest> request = make_shared<UpdateTriggerShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTriggerRequestActions>>(tmpReq->actions)) {
    request->actionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->actions, make_shared<string>("Actions"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<Input>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionsShrink)) {
    body->insert(pair<string, string>("Actions", *request->actionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    body->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    body->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTrigger"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTriggerResponse(callApi(params, req, runtime));
}

UpdateTriggerResponse Alibabacloud_Imm20200930::Client::updateTrigger(shared_ptr<UpdateTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTriggerWithOptions(request, runtime);
}

