// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/bailian_20231229.hpp>
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

using namespace Alibabacloud_Bailian20231229;

Alibabacloud_Bailian20231229::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("bailian"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Bailian20231229::Client::getEndpoint(shared_ptr<string> productId,
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

AddCategoryResponse Alibabacloud_Bailian20231229::Client::addCategoryWithOptions(shared_ptr<string> WorkspaceId,
                                                                                 shared_ptr<AddCategoryRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryName)) {
    body->insert(pair<string, string>("CategoryName", *request->categoryName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryType)) {
    body->insert(pair<string, string>("CategoryType", *request->categoryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentCategoryId)) {
    body->insert(pair<string, string>("ParentCategoryId", *request->parentCategoryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddCategory"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/datacenter/category/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddCategoryResponse(callApi(params, req, runtime));
}

AddCategoryResponse Alibabacloud_Bailian20231229::Client::addCategory(shared_ptr<string> WorkspaceId, shared_ptr<AddCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addCategoryWithOptions(WorkspaceId, request, headers, runtime);
}

AddFileResponse Alibabacloud_Bailian20231229::Client::addFileWithOptions(shared_ptr<string> WorkspaceId,
                                                                         shared_ptr<AddFileRequest> tmpReq,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddFileShrinkRequest> request = make_shared<AddFileShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryId)) {
    body->insert(pair<string, string>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryType)) {
    body->insert(pair<string, string>("CategoryType", *request->categoryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->leaseId)) {
    body->insert(pair<string, string>("LeaseId", *request->leaseId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalFileUrl)) {
    body->insert(pair<string, string>("OriginalFileUrl", *request->originalFileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parser)) {
    body->insert(pair<string, string>("Parser", *request->parser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    body->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFile"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/datacenter/file"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddFileResponse(callApi(params, req, runtime));
}

AddFileResponse Alibabacloud_Bailian20231229::Client::addFile(shared_ptr<string> WorkspaceId, shared_ptr<AddFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addFileWithOptions(WorkspaceId, request, headers, runtime);
}

AddFilesFromAuthorizedOssResponse Alibabacloud_Bailian20231229::Client::addFilesFromAuthorizedOssWithOptions(shared_ptr<string> WorkspaceId,
                                                                                                             shared_ptr<AddFilesFromAuthorizedOssRequest> tmpReq,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddFilesFromAuthorizedOssShrinkRequest> request = make_shared<AddFilesFromAuthorizedOssShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<AddFilesFromAuthorizedOssRequestFileDetails>>(tmpReq->fileDetails)) {
    request->fileDetailsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->fileDetails, make_shared<string>("FileDetails"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryId)) {
    body->insert(pair<string, string>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryType)) {
    body->insert(pair<string, string>("CategoryType", *request->categoryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileDetailsShrink)) {
    body->insert(pair<string, string>("FileDetails", *request->fileDetailsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucketName)) {
    body->insert(pair<string, string>("OssBucketName", *request->ossBucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossRegionId)) {
    body->insert(pair<string, string>("OssRegionId", *request->ossRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    body->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFilesFromAuthorizedOss"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/datacenter/file/fromoss"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddFilesFromAuthorizedOssResponse(callApi(params, req, runtime));
}

AddFilesFromAuthorizedOssResponse Alibabacloud_Bailian20231229::Client::addFilesFromAuthorizedOss(shared_ptr<string> WorkspaceId, shared_ptr<AddFilesFromAuthorizedOssRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addFilesFromAuthorizedOssWithOptions(WorkspaceId, request, headers, runtime);
}

ApplyFileUploadLeaseResponse Alibabacloud_Bailian20231229::Client::applyFileUploadLeaseWithOptions(shared_ptr<string> CategoryId,
                                                                                                   shared_ptr<string> WorkspaceId,
                                                                                                   shared_ptr<ApplyFileUploadLeaseRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryType)) {
    body->insert(pair<string, string>("CategoryType", *request->categoryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->md5)) {
    body->insert(pair<string, string>("Md5", *request->md5));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sizeInBytes)) {
    body->insert(pair<string, string>("SizeInBytes", *request->sizeInBytes));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useInternalEndpoint)) {
    body->insert(pair<string, bool>("UseInternalEndpoint", *request->useInternalEndpoint));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyFileUploadLease"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/datacenter/category/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(CategoryId)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyFileUploadLeaseResponse(callApi(params, req, runtime));
}

ApplyFileUploadLeaseResponse Alibabacloud_Bailian20231229::Client::applyFileUploadLease(shared_ptr<string> CategoryId, shared_ptr<string> WorkspaceId, shared_ptr<ApplyFileUploadLeaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return applyFileUploadLeaseWithOptions(CategoryId, WorkspaceId, request, headers, runtime);
}

CreateAndPulishAgentResponse Alibabacloud_Bailian20231229::Client::createAndPulishAgentWithOptions(shared_ptr<string> workspaceId,
                                                                                                   shared_ptr<CreateAndPulishAgentRequest> tmpReq,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAndPulishAgentShrinkRequest> request = make_shared<CreateAndPulishAgentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateAndPulishAgentRequestApplicationConfig>(tmpReq->applicationConfig)) {
    request->applicationConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->applicationConfig, make_shared<string>("applicationConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAndPulishAgentRequestSampleLibrary>(tmpReq->sampleLibrary)) {
    request->sampleLibraryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sampleLibrary, make_shared<string>("sampleLibrary"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationConfigShrink)) {
    body->insert(pair<string, string>("applicationConfig", *request->applicationConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instructions)) {
    body->insert(pair<string, string>("instructions", *request->instructions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sampleLibraryShrink)) {
    body->insert(pair<string, string>("sampleLibrary", *request->sampleLibraryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAndPulishAgent"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/application/agents"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAndPulishAgentResponse(callApi(params, req, runtime));
}

CreateAndPulishAgentResponse Alibabacloud_Bailian20231229::Client::createAndPulishAgent(shared_ptr<string> workspaceId, shared_ptr<CreateAndPulishAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAndPulishAgentWithOptions(workspaceId, request, headers, runtime);
}

CreateIndexResponse Alibabacloud_Bailian20231229::Client::createIndexWithOptions(shared_ptr<string> WorkspaceId,
                                                                                 shared_ptr<CreateIndexRequest> tmpReq,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateIndexShrinkRequest> request = make_shared<CreateIndexShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->categoryIds)) {
    request->categoryIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->categoryIds, make_shared<string>("CategoryIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateIndexRequestColumns>>(tmpReq->columns)) {
    request->columnsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->columns, make_shared<string>("Columns"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateIndexRequestDataSource>(tmpReq->dataSource)) {
    request->dataSourceShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dataSource, make_shared<string>("DataSource"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->documentIds)) {
    request->documentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->documentIds, make_shared<string>("DocumentIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tableIds)) {
    request->tableIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tableIds, make_shared<string>("TableIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateIndexRequestMetaExtractColumns>>(tmpReq->metaExtractColumns)) {
    request->metaExtractColumnsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->metaExtractColumns, make_shared<string>("metaExtractColumns"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryIdsShrink)) {
    query->insert(pair<string, string>("CategoryIds", *request->categoryIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->chunkSize)) {
    query->insert(pair<string, long>("ChunkSize", *request->chunkSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->columnsShrink)) {
    query->insert(pair<string, string>("Columns", *request->columnsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createIndexType)) {
    query->insert(pair<string, string>("CreateIndexType", *request->createIndexType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceShrink)) {
    query->insert(pair<string, string>("DataSource", *request->dataSourceShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->documentIdsShrink)) {
    query->insert(pair<string, string>("DocumentIds", *request->documentIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->embeddingModelName)) {
    query->insert(pair<string, string>("EmbeddingModelName", *request->embeddingModelName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableRewrite)) {
    query->insert(pair<string, bool>("EnableRewrite", *request->enableRewrite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->overlapSize)) {
    query->insert(pair<string, long>("OverlapSize", *request->overlapSize));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->rerankMinScore)) {
    query->insert(pair<string, double>("RerankMinScore", *request->rerankMinScore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rerankModelName)) {
    query->insert(pair<string, string>("RerankModelName", *request->rerankModelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->separator)) {
    query->insert(pair<string, string>("Separator", *request->separator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sinkInstanceId)) {
    query->insert(pair<string, string>("SinkInstanceId", *request->sinkInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sinkRegion)) {
    query->insert(pair<string, string>("SinkRegion", *request->sinkRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sinkType)) {
    query->insert(pair<string, string>("SinkType", *request->sinkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->structureType)) {
    query->insert(pair<string, string>("StructureType", *request->structureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableIdsShrink)) {
    query->insert(pair<string, string>("TableIds", *request->tableIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chunkMode)) {
    query->insert(pair<string, string>("chunkMode", *request->chunkMode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableHeaders)) {
    query->insert(pair<string, bool>("enableHeaders", *request->enableHeaders));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metaExtractColumnsShrink)) {
    query->insert(pair<string, string>("metaExtractColumns", *request->metaExtractColumnsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIndex"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIndexResponse(callApi(params, req, runtime));
}

CreateIndexResponse Alibabacloud_Bailian20231229::Client::createIndex(shared_ptr<string> WorkspaceId, shared_ptr<CreateIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createIndexWithOptions(WorkspaceId, request, headers, runtime);
}

CreateMemoryResponse Alibabacloud_Bailian20231229::Client::createMemoryWithOptions(shared_ptr<string> workspaceId,
                                                                                   shared_ptr<CreateMemoryRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMemory"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/memories"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMemoryResponse(callApi(params, req, runtime));
}

CreateMemoryResponse Alibabacloud_Bailian20231229::Client::createMemory(shared_ptr<string> workspaceId, shared_ptr<CreateMemoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createMemoryWithOptions(workspaceId, request, headers, runtime);
}

CreateMemoryNodeResponse Alibabacloud_Bailian20231229::Client::createMemoryNodeWithOptions(shared_ptr<string> workspaceId,
                                                                                           shared_ptr<string> memoryId,
                                                                                           shared_ptr<CreateMemoryNodeRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("content", *request->content));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMemoryNode"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/memories/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(memoryId)) + string("/memoryNodes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMemoryNodeResponse(callApi(params, req, runtime));
}

CreateMemoryNodeResponse Alibabacloud_Bailian20231229::Client::createMemoryNode(shared_ptr<string> workspaceId, shared_ptr<string> memoryId, shared_ptr<CreateMemoryNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createMemoryNodeWithOptions(workspaceId, memoryId, request, headers, runtime);
}

CreatePromptTemplateResponse Alibabacloud_Bailian20231229::Client::createPromptTemplateWithOptions(shared_ptr<string> workspaceId,
                                                                                                   shared_ptr<CreatePromptTemplateRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePromptTemplate"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/promptTemplates"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePromptTemplateResponse(callApi(params, req, runtime));
}

CreatePromptTemplateResponse Alibabacloud_Bailian20231229::Client::createPromptTemplate(shared_ptr<string> workspaceId, shared_ptr<CreatePromptTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createPromptTemplateWithOptions(workspaceId, request, headers, runtime);
}

DeleteAgentResponse Alibabacloud_Bailian20231229::Client::deleteAgentWithOptions(shared_ptr<string> workspaceId,
                                                                                 shared_ptr<string> appCode,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAgent"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/application/agents/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appCode)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAgentResponse(callApi(params, req, runtime));
}

DeleteAgentResponse Alibabacloud_Bailian20231229::Client::deleteAgent(shared_ptr<string> workspaceId, shared_ptr<string> appCode) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteAgentWithOptions(workspaceId, appCode, headers, runtime);
}

DeleteCategoryResponse Alibabacloud_Bailian20231229::Client::deleteCategoryWithOptions(shared_ptr<string> CategoryId,
                                                                                       shared_ptr<string> WorkspaceId,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCategory"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/datacenter/category/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(CategoryId)) + string("/"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCategoryResponse(callApi(params, req, runtime));
}

DeleteCategoryResponse Alibabacloud_Bailian20231229::Client::deleteCategory(shared_ptr<string> CategoryId, shared_ptr<string> WorkspaceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteCategoryWithOptions(CategoryId, WorkspaceId, headers, runtime);
}

DeleteFileResponse Alibabacloud_Bailian20231229::Client::deleteFileWithOptions(shared_ptr<string> FileId,
                                                                               shared_ptr<string> WorkspaceId,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFile"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/datacenter/file/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FileId)) + string("/"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFileResponse(callApi(params, req, runtime));
}

DeleteFileResponse Alibabacloud_Bailian20231229::Client::deleteFile(shared_ptr<string> FileId, shared_ptr<string> WorkspaceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFileWithOptions(FileId, WorkspaceId, headers, runtime);
}

DeleteIndexResponse Alibabacloud_Bailian20231229::Client::deleteIndexWithOptions(shared_ptr<string> WorkspaceId,
                                                                                 shared_ptr<DeleteIndexRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIndex"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIndexResponse(callApi(params, req, runtime));
}

DeleteIndexResponse Alibabacloud_Bailian20231229::Client::deleteIndex(shared_ptr<string> WorkspaceId, shared_ptr<DeleteIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteIndexWithOptions(WorkspaceId, request, headers, runtime);
}

DeleteIndexDocumentResponse Alibabacloud_Bailian20231229::Client::deleteIndexDocumentWithOptions(shared_ptr<string> WorkspaceId,
                                                                                                 shared_ptr<DeleteIndexDocumentRequest> tmpReq,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteIndexDocumentShrinkRequest> request = make_shared<DeleteIndexDocumentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->documentIds)) {
    request->documentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->documentIds, make_shared<string>("DocumentIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->documentIdsShrink)) {
    query->insert(pair<string, string>("DocumentIds", *request->documentIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIndexDocument"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/delete_index_document"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIndexDocumentResponse(callApi(params, req, runtime));
}

DeleteIndexDocumentResponse Alibabacloud_Bailian20231229::Client::deleteIndexDocument(shared_ptr<string> WorkspaceId, shared_ptr<DeleteIndexDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteIndexDocumentWithOptions(WorkspaceId, request, headers, runtime);
}

DeleteMemoryResponse Alibabacloud_Bailian20231229::Client::deleteMemoryWithOptions(shared_ptr<string> workspaceId,
                                                                                   shared_ptr<string> memoryId,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMemory"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/memories/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(memoryId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMemoryResponse(callApi(params, req, runtime));
}

DeleteMemoryResponse Alibabacloud_Bailian20231229::Client::deleteMemory(shared_ptr<string> workspaceId, shared_ptr<string> memoryId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteMemoryWithOptions(workspaceId, memoryId, headers, runtime);
}

DeleteMemoryNodeResponse Alibabacloud_Bailian20231229::Client::deleteMemoryNodeWithOptions(shared_ptr<string> workspaceId,
                                                                                           shared_ptr<string> memoryId,
                                                                                           shared_ptr<string> memoryNodeId,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMemoryNode"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/memories/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(memoryId)) + string("/memoryNodes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(memoryNodeId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMemoryNodeResponse(callApi(params, req, runtime));
}

DeleteMemoryNodeResponse Alibabacloud_Bailian20231229::Client::deleteMemoryNode(shared_ptr<string> workspaceId, shared_ptr<string> memoryId, shared_ptr<string> memoryNodeId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteMemoryNodeWithOptions(workspaceId, memoryId, memoryNodeId, headers, runtime);
}

DeletePromptTemplateResponse Alibabacloud_Bailian20231229::Client::deletePromptTemplateWithOptions(shared_ptr<string> workspaceId,
                                                                                                   shared_ptr<string> promptTemplateId,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePromptTemplate"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/promptTemplates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(promptTemplateId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePromptTemplateResponse(callApi(params, req, runtime));
}

DeletePromptTemplateResponse Alibabacloud_Bailian20231229::Client::deletePromptTemplate(shared_ptr<string> workspaceId, shared_ptr<string> promptTemplateId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deletePromptTemplateWithOptions(workspaceId, promptTemplateId, headers, runtime);
}

DescribeFileResponse Alibabacloud_Bailian20231229::Client::describeFileWithOptions(shared_ptr<string> WorkspaceId,
                                                                                   shared_ptr<string> FileId,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFile"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/datacenter/file/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FileId)) + string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFileResponse(callApi(params, req, runtime));
}

DescribeFileResponse Alibabacloud_Bailian20231229::Client::describeFile(shared_ptr<string> WorkspaceId, shared_ptr<string> FileId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeFileWithOptions(WorkspaceId, FileId, headers, runtime);
}

GetIndexJobStatusResponse Alibabacloud_Bailian20231229::Client::getIndexJobStatusWithOptions(shared_ptr<string> WorkspaceId,
                                                                                             shared_ptr<GetIndexJobStatusRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIndexJobStatus"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/job/status"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIndexJobStatusResponse(callApi(params, req, runtime));
}

GetIndexJobStatusResponse Alibabacloud_Bailian20231229::Client::getIndexJobStatus(shared_ptr<string> WorkspaceId, shared_ptr<GetIndexJobStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIndexJobStatusWithOptions(WorkspaceId, request, headers, runtime);
}

GetMemoryResponse Alibabacloud_Bailian20231229::Client::getMemoryWithOptions(shared_ptr<string> workspaceId,
                                                                             shared_ptr<string> memoryId,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMemory"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/memories/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(memoryId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMemoryResponse(callApi(params, req, runtime));
}

GetMemoryResponse Alibabacloud_Bailian20231229::Client::getMemory(shared_ptr<string> workspaceId, shared_ptr<string> memoryId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMemoryWithOptions(workspaceId, memoryId, headers, runtime);
}

GetMemoryNodeResponse Alibabacloud_Bailian20231229::Client::getMemoryNodeWithOptions(shared_ptr<string> workspaceId,
                                                                                     shared_ptr<string> memoryId,
                                                                                     shared_ptr<string> memoryNodeId,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMemoryNode"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/memories/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(memoryId)) + string("/memoryNodes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(memoryNodeId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMemoryNodeResponse(callApi(params, req, runtime));
}

GetMemoryNodeResponse Alibabacloud_Bailian20231229::Client::getMemoryNode(shared_ptr<string> workspaceId, shared_ptr<string> memoryId, shared_ptr<string> memoryNodeId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMemoryNodeWithOptions(workspaceId, memoryId, memoryNodeId, headers, runtime);
}

GetPromptTemplateResponse Alibabacloud_Bailian20231229::Client::getPromptTemplateWithOptions(shared_ptr<string> workspaceId,
                                                                                             shared_ptr<string> promptTemplateId,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPromptTemplate"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/promptTemplates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(promptTemplateId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPromptTemplateResponse(callApi(params, req, runtime));
}

GetPromptTemplateResponse Alibabacloud_Bailian20231229::Client::getPromptTemplate(shared_ptr<string> workspaceId, shared_ptr<string> promptTemplateId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPromptTemplateWithOptions(workspaceId, promptTemplateId, headers, runtime);
}

GetPublishedAgentResponse Alibabacloud_Bailian20231229::Client::getPublishedAgentWithOptions(shared_ptr<string> workspaceId,
                                                                                             shared_ptr<string> appCode,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPublishedAgent"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/application/agents/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appCode)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPublishedAgentResponse(callApi(params, req, runtime));
}

GetPublishedAgentResponse Alibabacloud_Bailian20231229::Client::getPublishedAgent(shared_ptr<string> workspaceId, shared_ptr<string> appCode) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPublishedAgentWithOptions(workspaceId, appCode, headers, runtime);
}

ListCategoryResponse Alibabacloud_Bailian20231229::Client::listCategoryWithOptions(shared_ptr<string> WorkspaceId,
                                                                                   shared_ptr<ListCategoryRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryName)) {
    body->insert(pair<string, string>("CategoryName", *request->categoryName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryType)) {
    body->insert(pair<string, string>("CategoryType", *request->categoryType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentCategoryId)) {
    body->insert(pair<string, string>("ParentCategoryId", *request->parentCategoryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCategory"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/datacenter/categories"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCategoryResponse(callApi(params, req, runtime));
}

ListCategoryResponse Alibabacloud_Bailian20231229::Client::listCategory(shared_ptr<string> WorkspaceId, shared_ptr<ListCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listCategoryWithOptions(WorkspaceId, request, headers, runtime);
}

ListChunksResponse Alibabacloud_Bailian20231229::Client::listChunksWithOptions(shared_ptr<string> WorkspaceId,
                                                                               shared_ptr<ListChunksRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->fields)) {
    body->insert(pair<string, vector<string>>("Fields", *request->fields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileId)) {
    body->insert(pair<string, string>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filed)) {
    body->insert(pair<string, string>("Filed", *request->filed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    body->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChunks"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/list_chunks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListChunksResponse(callApi(params, req, runtime));
}

ListChunksResponse Alibabacloud_Bailian20231229::Client::listChunks(shared_ptr<string> WorkspaceId, shared_ptr<ListChunksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listChunksWithOptions(WorkspaceId, request, headers, runtime);
}

ListFileResponse Alibabacloud_Bailian20231229::Client::listFileWithOptions(shared_ptr<string> WorkspaceId,
                                                                           shared_ptr<ListFileRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryId)) {
    query->insert(pair<string, string>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFile"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/datacenter/files"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFileResponse(callApi(params, req, runtime));
}

ListFileResponse Alibabacloud_Bailian20231229::Client::listFile(shared_ptr<string> WorkspaceId, shared_ptr<ListFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFileWithOptions(WorkspaceId, request, headers, runtime);
}

ListIndexDocumentsResponse Alibabacloud_Bailian20231229::Client::listIndexDocumentsWithOptions(shared_ptr<string> WorkspaceId,
                                                                                               shared_ptr<ListIndexDocumentsRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->documentName)) {
    query->insert(pair<string, string>("DocumentName", *request->documentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->documentStatus)) {
    query->insert(pair<string, string>("DocumentStatus", *request->documentStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enableNameLike)) {
    query->insert(pair<string, string>("EnableNameLike", *request->enableNameLike));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIndexDocuments"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/list_index_documents"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIndexDocumentsResponse(callApi(params, req, runtime));
}

ListIndexDocumentsResponse Alibabacloud_Bailian20231229::Client::listIndexDocuments(shared_ptr<string> WorkspaceId, shared_ptr<ListIndexDocumentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIndexDocumentsWithOptions(WorkspaceId, request, headers, runtime);
}

ListIndexFileDetailsResponse Alibabacloud_Bailian20231229::Client::listIndexFileDetailsWithOptions(shared_ptr<string> WorkspaceId,
                                                                                                   shared_ptr<ListIndexFileDetailsRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->documentName)) {
    query->insert(pair<string, string>("DocumentName", *request->documentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->documentStatus)) {
    query->insert(pair<string, string>("DocumentStatus", *request->documentStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enableNameLike)) {
    query->insert(pair<string, string>("EnableNameLike", *request->enableNameLike));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIndexFileDetails"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/list_index_file_detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIndexFileDetailsResponse(callApi(params, req, runtime));
}

ListIndexFileDetailsResponse Alibabacloud_Bailian20231229::Client::listIndexFileDetails(shared_ptr<string> WorkspaceId, shared_ptr<ListIndexFileDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIndexFileDetailsWithOptions(WorkspaceId, request, headers, runtime);
}

ListIndicesResponse Alibabacloud_Bailian20231229::Client::listIndicesWithOptions(shared_ptr<string> WorkspaceId,
                                                                                 shared_ptr<ListIndicesRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexName)) {
    query->insert(pair<string, string>("IndexName", *request->indexName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIndices"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/list_indices"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIndicesResponse(callApi(params, req, runtime));
}

ListIndicesResponse Alibabacloud_Bailian20231229::Client::listIndices(shared_ptr<string> WorkspaceId, shared_ptr<ListIndicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIndicesWithOptions(WorkspaceId, request, headers, runtime);
}

ListMemoriesResponse Alibabacloud_Bailian20231229::Client::listMemoriesWithOptions(shared_ptr<string> workspaceId,
                                                                                   shared_ptr<ListMemoriesRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMemories"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/memories"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMemoriesResponse(callApi(params, req, runtime));
}

ListMemoriesResponse Alibabacloud_Bailian20231229::Client::listMemories(shared_ptr<string> workspaceId, shared_ptr<ListMemoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMemoriesWithOptions(workspaceId, request, headers, runtime);
}

ListMemoryNodesResponse Alibabacloud_Bailian20231229::Client::listMemoryNodesWithOptions(shared_ptr<string> workspaceId,
                                                                                         shared_ptr<string> memoryId,
                                                                                         shared_ptr<ListMemoryNodesRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMemoryNodes"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/memories/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(memoryId)) + string("/memoryNodes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMemoryNodesResponse(callApi(params, req, runtime));
}

ListMemoryNodesResponse Alibabacloud_Bailian20231229::Client::listMemoryNodes(shared_ptr<string> workspaceId, shared_ptr<string> memoryId, shared_ptr<ListMemoryNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMemoryNodesWithOptions(workspaceId, memoryId, request, headers, runtime);
}

ListPromptTemplatesResponse Alibabacloud_Bailian20231229::Client::listPromptTemplatesWithOptions(shared_ptr<string> workspaceId,
                                                                                                 shared_ptr<ListPromptTemplatesRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPromptTemplates"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/promptTemplates"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPromptTemplatesResponse(callApi(params, req, runtime));
}

ListPromptTemplatesResponse Alibabacloud_Bailian20231229::Client::listPromptTemplates(shared_ptr<string> workspaceId, shared_ptr<ListPromptTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPromptTemplatesWithOptions(workspaceId, request, headers, runtime);
}

ListPublishedAgentResponse Alibabacloud_Bailian20231229::Client::listPublishedAgentWithOptions(shared_ptr<string> workspaceId,
                                                                                               shared_ptr<ListPublishedAgentRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("pageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPublishedAgent"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/application/agents"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPublishedAgentResponse(callApi(params, req, runtime));
}

ListPublishedAgentResponse Alibabacloud_Bailian20231229::Client::listPublishedAgent(shared_ptr<string> workspaceId, shared_ptr<ListPublishedAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPublishedAgentWithOptions(workspaceId, request, headers, runtime);
}

RetrieveResponse Alibabacloud_Bailian20231229::Client::retrieveWithOptions(shared_ptr<string> WorkspaceId,
                                                                           shared_ptr<RetrieveRequest> tmpReq,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RetrieveShrinkRequest> request = make_shared<RetrieveShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->images)) {
    request->imagesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->images, make_shared<string>("Images"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RetrieveRequestQueryHistory>>(tmpReq->queryHistory)) {
    request->queryHistoryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->queryHistory, make_shared<string>("QueryHistory"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RetrieveRequestRerank>>(tmpReq->rerank)) {
    request->rerankShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->rerank, make_shared<string>("Rerank"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RetrieveRequestRewrite>>(tmpReq->rewrite)) {
    request->rewriteShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->rewrite, make_shared<string>("Rewrite"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<map<string, string>>>(tmpReq->searchFilters)) {
    request->searchFiltersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->searchFilters, make_shared<string>("SearchFilters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->denseSimilarityTopK)) {
    query->insert(pair<string, long>("DenseSimilarityTopK", *request->denseSimilarityTopK));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableReranking)) {
    query->insert(pair<string, bool>("EnableReranking", *request->enableReranking));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableRewrite)) {
    query->insert(pair<string, bool>("EnableRewrite", *request->enableRewrite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imagesShrink)) {
    query->insert(pair<string, string>("Images", *request->imagesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryHistoryShrink)) {
    query->insert(pair<string, string>("QueryHistory", *request->queryHistoryShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rerankShrink)) {
    query->insert(pair<string, string>("Rerank", *request->rerankShrink));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->rerankMinScore)) {
    query->insert(pair<string, double>("RerankMinScore", *request->rerankMinScore));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rerankTopN)) {
    query->insert(pair<string, long>("RerankTopN", *request->rerankTopN));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rewriteShrink)) {
    query->insert(pair<string, string>("Rewrite", *request->rewriteShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->saveRetrieverHistory)) {
    query->insert(pair<string, bool>("SaveRetrieverHistory", *request->saveRetrieverHistory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchFiltersShrink)) {
    query->insert(pair<string, string>("SearchFilters", *request->searchFiltersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sparseSimilarityTopK)) {
    query->insert(pair<string, long>("SparseSimilarityTopK", *request->sparseSimilarityTopK));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Retrieve"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/retrieve"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RetrieveResponse(callApi(params, req, runtime));
}

RetrieveResponse Alibabacloud_Bailian20231229::Client::retrieve(shared_ptr<string> WorkspaceId, shared_ptr<RetrieveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return retrieveWithOptions(WorkspaceId, request, headers, runtime);
}

SubmitIndexAddDocumentsJobResponse Alibabacloud_Bailian20231229::Client::submitIndexAddDocumentsJobWithOptions(shared_ptr<string> WorkspaceId,
                                                                                                               shared_ptr<SubmitIndexAddDocumentsJobRequest> tmpReq,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitIndexAddDocumentsJobShrinkRequest> request = make_shared<SubmitIndexAddDocumentsJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->categoryIds)) {
    request->categoryIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->categoryIds, make_shared<string>("CategoryIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->documentIds)) {
    request->documentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->documentIds, make_shared<string>("DocumentIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryIdsShrink)) {
    query->insert(pair<string, string>("CategoryIds", *request->categoryIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chunkMode)) {
    query->insert(pair<string, string>("ChunkMode", *request->chunkMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->chunkSize)) {
    query->insert(pair<string, long>("ChunkSize", *request->chunkSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->documentIdsShrink)) {
    query->insert(pair<string, string>("DocumentIds", *request->documentIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableHeaders)) {
    query->insert(pair<string, bool>("EnableHeaders", *request->enableHeaders));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->overlapSize)) {
    query->insert(pair<string, long>("OverlapSize", *request->overlapSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->separator)) {
    query->insert(pair<string, string>("Separator", *request->separator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitIndexAddDocumentsJob"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/add_documents_to_index"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitIndexAddDocumentsJobResponse(callApi(params, req, runtime));
}

SubmitIndexAddDocumentsJobResponse Alibabacloud_Bailian20231229::Client::submitIndexAddDocumentsJob(shared_ptr<string> WorkspaceId, shared_ptr<SubmitIndexAddDocumentsJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitIndexAddDocumentsJobWithOptions(WorkspaceId, request, headers, runtime);
}

SubmitIndexJobResponse Alibabacloud_Bailian20231229::Client::submitIndexJobWithOptions(shared_ptr<string> WorkspaceId,
                                                                                       shared_ptr<SubmitIndexJobRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitIndexJob"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/submit_index_job"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitIndexJobResponse(callApi(params, req, runtime));
}

SubmitIndexJobResponse Alibabacloud_Bailian20231229::Client::submitIndexJob(shared_ptr<string> WorkspaceId, shared_ptr<SubmitIndexJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitIndexJobWithOptions(WorkspaceId, request, headers, runtime);
}

UpdateAndPublishAgentResponse Alibabacloud_Bailian20231229::Client::updateAndPublishAgentWithOptions(shared_ptr<string> workspaceId,
                                                                                                     shared_ptr<string> appCode,
                                                                                                     shared_ptr<UpdateAndPublishAgentRequest> tmpReq,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateAndPublishAgentShrinkRequest> request = make_shared<UpdateAndPublishAgentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateAndPublishAgentRequestApplicationConfig>(tmpReq->applicationConfig)) {
    request->applicationConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->applicationConfig, make_shared<string>("applicationConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateAndPublishAgentRequestSampleLibrary>(tmpReq->sampleLibrary)) {
    request->sampleLibraryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sampleLibrary, make_shared<string>("sampleLibrary"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationConfigShrink)) {
    body->insert(pair<string, string>("applicationConfig", *request->applicationConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instructions)) {
    body->insert(pair<string, string>("instructions", *request->instructions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sampleLibraryShrink)) {
    body->insert(pair<string, string>("sampleLibrary", *request->sampleLibraryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAndPublishAgent"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/application/agents/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appCode)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAndPublishAgentResponse(callApi(params, req, runtime));
}

UpdateAndPublishAgentResponse Alibabacloud_Bailian20231229::Client::updateAndPublishAgent(shared_ptr<string> workspaceId, shared_ptr<string> appCode, shared_ptr<UpdateAndPublishAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAndPublishAgentWithOptions(workspaceId, appCode, request, headers, runtime);
}

UpdateAndPublishAgentSelectiveResponse Alibabacloud_Bailian20231229::Client::updateAndPublishAgentSelectiveWithOptions(shared_ptr<string> workspaceId,
                                                                                                                       shared_ptr<string> appCode,
                                                                                                                       shared_ptr<UpdateAndPublishAgentSelectiveRequest> tmpReq,
                                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateAndPublishAgentSelectiveShrinkRequest> request = make_shared<UpdateAndPublishAgentSelectiveShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateAndPublishAgentSelectiveRequestApplicationConfig>(tmpReq->applicationConfig)) {
    request->applicationConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->applicationConfig, make_shared<string>("applicationConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateAndPublishAgentSelectiveRequestSampleLibrary>(tmpReq->sampleLibrary)) {
    request->sampleLibraryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sampleLibrary, make_shared<string>("sampleLibrary"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationConfigShrink)) {
    body->insert(pair<string, string>("applicationConfig", *request->applicationConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instructions)) {
    body->insert(pair<string, string>("instructions", *request->instructions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sampleLibraryShrink)) {
    body->insert(pair<string, string>("sampleLibrary", *request->sampleLibraryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAndPublishAgentSelective"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/application/agents/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appCode)) + string("/updateAndPublishAgentSelective"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAndPublishAgentSelectiveResponse(callApi(params, req, runtime));
}

UpdateAndPublishAgentSelectiveResponse Alibabacloud_Bailian20231229::Client::updateAndPublishAgentSelective(shared_ptr<string> workspaceId, shared_ptr<string> appCode, shared_ptr<UpdateAndPublishAgentSelectiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAndPublishAgentSelectiveWithOptions(workspaceId, appCode, request, headers, runtime);
}

UpdateChunkResponse Alibabacloud_Bailian20231229::Client::updateChunkWithOptions(shared_ptr<string> WorkspaceId,
                                                                                 shared_ptr<UpdateChunkRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chunkId)) {
    query->insert(pair<string, string>("ChunkId", *request->chunkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDisplayedChunkContent)) {
    query->insert(pair<string, bool>("IsDisplayedChunkContent", *request->isDisplayedChunkContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateChunk"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/chunk/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateChunkResponse(callApi(params, req, runtime));
}

UpdateChunkResponse Alibabacloud_Bailian20231229::Client::updateChunk(shared_ptr<string> WorkspaceId, shared_ptr<UpdateChunkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateChunkWithOptions(WorkspaceId, request, headers, runtime);
}

UpdateFileTagResponse Alibabacloud_Bailian20231229::Client::updateFileTagWithOptions(shared_ptr<string> WorkspaceId,
                                                                                     shared_ptr<string> FileId,
                                                                                     shared_ptr<UpdateFileTagRequest> tmpReq,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateFileTagShrinkRequest> request = make_shared<UpdateFileTagShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    body->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFileTag"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/datacenter/file/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FileId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFileTagResponse(callApi(params, req, runtime));
}

UpdateFileTagResponse Alibabacloud_Bailian20231229::Client::updateFileTag(shared_ptr<string> WorkspaceId, shared_ptr<string> FileId, shared_ptr<UpdateFileTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFileTagWithOptions(WorkspaceId, FileId, request, headers, runtime);
}

UpdateMemoryResponse Alibabacloud_Bailian20231229::Client::updateMemoryWithOptions(shared_ptr<string> workspaceId,
                                                                                   shared_ptr<string> memoryId,
                                                                                   shared_ptr<UpdateMemoryRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMemory"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/memories/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(memoryId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMemoryResponse(callApi(params, req, runtime));
}

UpdateMemoryResponse Alibabacloud_Bailian20231229::Client::updateMemory(shared_ptr<string> workspaceId, shared_ptr<string> memoryId, shared_ptr<UpdateMemoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateMemoryWithOptions(workspaceId, memoryId, request, headers, runtime);
}

UpdateMemoryNodeResponse Alibabacloud_Bailian20231229::Client::updateMemoryNodeWithOptions(shared_ptr<string> workspaceId,
                                                                                           shared_ptr<string> memoryId,
                                                                                           shared_ptr<string> memoryNodeId,
                                                                                           shared_ptr<UpdateMemoryNodeRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("content", *request->content));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMemoryNode"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/memories/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(memoryId)) + string("/memoryNodes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(memoryNodeId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMemoryNodeResponse(callApi(params, req, runtime));
}

UpdateMemoryNodeResponse Alibabacloud_Bailian20231229::Client::updateMemoryNode(shared_ptr<string> workspaceId,
                                                                                shared_ptr<string> memoryId,
                                                                                shared_ptr<string> memoryNodeId,
                                                                                shared_ptr<UpdateMemoryNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateMemoryNodeWithOptions(workspaceId, memoryId, memoryNodeId, request, headers, runtime);
}

UpdatePromptTemplateResponse Alibabacloud_Bailian20231229::Client::updatePromptTemplateWithOptions(shared_ptr<string> workspaceId,
                                                                                                   shared_ptr<string> promptTemplateId,
                                                                                                   shared_ptr<UpdatePromptTemplateRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePromptTemplate"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/promptTemplates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(promptTemplateId)))},
    {"method", boost::any(string("PATCH"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePromptTemplateResponse(callApi(params, req, runtime));
}

UpdatePromptTemplateResponse Alibabacloud_Bailian20231229::Client::updatePromptTemplate(shared_ptr<string> workspaceId, shared_ptr<string> promptTemplateId, shared_ptr<UpdatePromptTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePromptTemplateWithOptions(workspaceId, promptTemplateId, request, headers, runtime);
}

