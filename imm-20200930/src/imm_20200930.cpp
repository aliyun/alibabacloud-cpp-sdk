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

ListBindingsResponse Alibabacloud_Imm20200930::Client::listBindingsWithOptions(shared_ptr<ListBindingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListBindingsResponse(doRPCRequest(make_shared<string>("ListBindings"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListBindingsResponse Alibabacloud_Imm20200930::Client::listBindings(shared_ptr<ListBindingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBindingsWithOptions(request, runtime);
}

DeleteFileMetaResponse Alibabacloud_Imm20200930::Client::deleteFileMetaWithOptions(shared_ptr<DeleteFileMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteFileMetaResponse(doRPCRequest(make_shared<string>("DeleteFileMeta"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteFileMetaResponse Alibabacloud_Imm20200930::Client::deleteFileMeta(shared_ptr<DeleteFileMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFileMetaWithOptions(request, runtime);
}

BatchIndexFileMetaResponse Alibabacloud_Imm20200930::Client::batchIndexFileMetaWithOptions(shared_ptr<BatchIndexFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchIndexFileMetaShrinkRequest> request = make_shared<BatchIndexFileMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<FileForReq>>(tmpReq->files)) {
    request->filesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->files, make_shared<string>("Files"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchIndexFileMetaResponse(doRPCRequest(make_shared<string>("BatchIndexFileMeta"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchIndexFileMetaResponse Alibabacloud_Imm20200930::Client::batchIndexFileMeta(shared_ptr<BatchIndexFileMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchIndexFileMetaWithOptions(request, runtime);
}

SimpleQueryResponse Alibabacloud_Imm20200930::Client::simpleQueryWithOptions(shared_ptr<SimpleQueryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SimpleQueryShrinkRequest> request = make_shared<SimpleQueryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SimpleQuery>(tmpReq->query)) {
    request->queryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->query->toMap()), make_shared<string>("Query"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SimpleQueryRequestAggregations>>(tmpReq->aggregations)) {
    request->aggregationsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->aggregations, make_shared<string>("Aggregations"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SimpleQueryResponse(doRPCRequest(make_shared<string>("SimpleQuery"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SimpleQueryResponse Alibabacloud_Imm20200930::Client::simpleQuery(shared_ptr<SimpleQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return simpleQueryWithOptions(request, runtime);
}

GetBindingResponse Alibabacloud_Imm20200930::Client::getBindingWithOptions(shared_ptr<GetBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetBindingResponse(doRPCRequest(make_shared<string>("GetBinding"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetBindingResponse Alibabacloud_Imm20200930::Client::getBinding(shared_ptr<GetBindingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBindingWithOptions(request, runtime);
}

ListProjectsResponse Alibabacloud_Imm20200930::Client::listProjectsWithOptions(shared_ptr<ListProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListProjectsResponse(doRPCRequest(make_shared<string>("ListProjects"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListProjectsResponse Alibabacloud_Imm20200930::Client::listProjects(shared_ptr<ListProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectsWithOptions(request, runtime);
}

GetDatasetResponse Alibabacloud_Imm20200930::Client::getDatasetWithOptions(shared_ptr<GetDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDatasetResponse(doRPCRequest(make_shared<string>("GetDataset"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDatasetResponse Alibabacloud_Imm20200930::Client::getDataset(shared_ptr<GetDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDatasetWithOptions(request, runtime);
}

BatchUpdateFileMetaResponse Alibabacloud_Imm20200930::Client::batchUpdateFileMetaWithOptions(shared_ptr<BatchUpdateFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchUpdateFileMetaShrinkRequest> request = make_shared<BatchUpdateFileMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<FileForReq>>(tmpReq->files)) {
    request->filesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->files, make_shared<string>("Files"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchUpdateFileMetaResponse(doRPCRequest(make_shared<string>("BatchUpdateFileMeta"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchUpdateFileMetaResponse Alibabacloud_Imm20200930::Client::batchUpdateFileMeta(shared_ptr<BatchUpdateFileMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUpdateFileMetaWithOptions(request, runtime);
}

CreateOfficeConversionTaskResponse Alibabacloud_Imm20200930::Client::createOfficeConversionTaskWithOptions(shared_ptr<CreateOfficeConversionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateOfficeConversionTaskResponse(doRPCRequest(make_shared<string>("CreateOfficeConversionTask"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateOfficeConversionTaskResponse Alibabacloud_Imm20200930::Client::createOfficeConversionTask(shared_ptr<CreateOfficeConversionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOfficeConversionTaskWithOptions(request, runtime);
}

GetWebofficeURLResponse Alibabacloud_Imm20200930::Client::getWebofficeURLWithOptions(shared_ptr<GetWebofficeURLRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetWebofficeURLShrinkRequest> request = make_shared<GetWebofficeURLShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<WebofficePermission>(tmpReq->permission)) {
    request->permissionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->permission->toMap()), make_shared<string>("Permission"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<WebofficeUser>(tmpReq->user)) {
    request->userShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->user->toMap()), make_shared<string>("User"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<WebofficeWatermark>(tmpReq->watermark)) {
    request->watermarkShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->watermark->toMap()), make_shared<string>("Watermark"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AssumeRoleChain>(tmpReq->assumeRoleChain)) {
    request->assumeRoleChainShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->assumeRoleChain->toMap()), make_shared<string>("AssumeRoleChain"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetWebofficeURLResponse(doRPCRequest(make_shared<string>("GetWebofficeURL"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetWebofficeURLResponse Alibabacloud_Imm20200930::Client::getWebofficeURL(shared_ptr<GetWebofficeURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWebofficeURLWithOptions(request, runtime);
}

CreateProjectResponse Alibabacloud_Imm20200930::Client::createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateProjectResponse(doRPCRequest(make_shared<string>("CreateProject"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateProjectResponse Alibabacloud_Imm20200930::Client::createProject(shared_ptr<CreateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProjectWithOptions(request, runtime);
}

ListDatasetsResponse Alibabacloud_Imm20200930::Client::listDatasetsWithOptions(shared_ptr<ListDatasetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDatasetsResponse(doRPCRequest(make_shared<string>("ListDatasets"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDatasetsResponse Alibabacloud_Imm20200930::Client::listDatasets(shared_ptr<ListDatasetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDatasetsWithOptions(request, runtime);
}

DeleteBindingResponse Alibabacloud_Imm20200930::Client::deleteBindingWithOptions(shared_ptr<DeleteBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteBindingResponse(doRPCRequest(make_shared<string>("DeleteBinding"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteBindingResponse Alibabacloud_Imm20200930::Client::deleteBinding(shared_ptr<DeleteBindingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBindingWithOptions(request, runtime);
}

RefreshWebofficeTokenResponse Alibabacloud_Imm20200930::Client::refreshWebofficeTokenWithOptions(shared_ptr<RefreshWebofficeTokenRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RefreshWebofficeTokenShrinkRequest> request = make_shared<RefreshWebofficeTokenShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AssumeRoleChain>(tmpReq->assumeRoleChain)) {
    request->assumeRoleChainShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->assumeRoleChain->toMap()), make_shared<string>("AssumeRoleChain"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefreshWebofficeTokenResponse(doRPCRequest(make_shared<string>("RefreshWebofficeToken"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefreshWebofficeTokenResponse Alibabacloud_Imm20200930::Client::refreshWebofficeToken(shared_ptr<RefreshWebofficeTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshWebofficeTokenWithOptions(request, runtime);
}

CreateBindingResponse Alibabacloud_Imm20200930::Client::createBindingWithOptions(shared_ptr<CreateBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateBindingResponse(doRPCRequest(make_shared<string>("CreateBinding"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateBindingResponse Alibabacloud_Imm20200930::Client::createBinding(shared_ptr<CreateBindingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBindingWithOptions(request, runtime);
}

DeleteDatasetResponse Alibabacloud_Imm20200930::Client::deleteDatasetWithOptions(shared_ptr<DeleteDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDatasetResponse(doRPCRequest(make_shared<string>("DeleteDataset"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDatasetResponse Alibabacloud_Imm20200930::Client::deleteDataset(shared_ptr<DeleteDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDatasetWithOptions(request, runtime);
}

GetOfficeConversionTaskResponse Alibabacloud_Imm20200930::Client::getOfficeConversionTaskWithOptions(shared_ptr<GetOfficeConversionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetOfficeConversionTaskResponse(doRPCRequest(make_shared<string>("GetOfficeConversionTask"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOfficeConversionTaskResponse Alibabacloud_Imm20200930::Client::getOfficeConversionTask(shared_ptr<GetOfficeConversionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOfficeConversionTaskWithOptions(request, runtime);
}

GetFileMetaResponse Alibabacloud_Imm20200930::Client::getFileMetaWithOptions(shared_ptr<GetFileMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetFileMetaResponse(doRPCRequest(make_shared<string>("GetFileMeta"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetFileMetaResponse Alibabacloud_Imm20200930::Client::getFileMeta(shared_ptr<GetFileMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileMetaWithOptions(request, runtime);
}

BatchDeleteFileMetaResponse Alibabacloud_Imm20200930::Client::batchDeleteFileMetaWithOptions(shared_ptr<BatchDeleteFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchDeleteFileMetaShrinkRequest> request = make_shared<BatchDeleteFileMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->URIs)) {
    request->URIsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->URIs, make_shared<string>("URIs"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchDeleteFileMetaResponse(doRPCRequest(make_shared<string>("BatchDeleteFileMeta"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchGetFileMetaResponse(doRPCRequest(make_shared<string>("BatchGetFileMeta"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchGetFileMetaResponse Alibabacloud_Imm20200930::Client::batchGetFileMeta(shared_ptr<BatchGetFileMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetFileMetaWithOptions(request, runtime);
}

StopBindingResponse Alibabacloud_Imm20200930::Client::stopBindingWithOptions(shared_ptr<StopBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopBindingResponse(doRPCRequest(make_shared<string>("StopBinding"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopBindingResponse Alibabacloud_Imm20200930::Client::stopBinding(shared_ptr<StopBindingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopBindingWithOptions(request, runtime);
}

ResumeBindingResponse Alibabacloud_Imm20200930::Client::resumeBindingWithOptions(shared_ptr<ResumeBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResumeBindingResponse(doRPCRequest(make_shared<string>("ResumeBinding"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResumeBindingResponse Alibabacloud_Imm20200930::Client::resumeBinding(shared_ptr<ResumeBindingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeBindingWithOptions(request, runtime);
}

UpdateFileMetaResponse Alibabacloud_Imm20200930::Client::updateFileMetaWithOptions(shared_ptr<UpdateFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateFileMetaShrinkRequest> request = make_shared<UpdateFileMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<FileForReq>(tmpReq->file)) {
    request->fileShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->file->toMap()), make_shared<string>("File"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateFileMetaResponse(doRPCRequest(make_shared<string>("UpdateFileMeta"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateFileMetaResponse Alibabacloud_Imm20200930::Client::updateFileMeta(shared_ptr<UpdateFileMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFileMetaWithOptions(request, runtime);
}

IndexFileMetaResponse Alibabacloud_Imm20200930::Client::indexFileMetaWithOptions(shared_ptr<IndexFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<IndexFileMetaShrinkRequest> request = make_shared<IndexFileMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<FileForReq>(tmpReq->file)) {
    request->fileShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->file->toMap()), make_shared<string>("File"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return IndexFileMetaResponse(doRPCRequest(make_shared<string>("IndexFileMeta"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

IndexFileMetaResponse Alibabacloud_Imm20200930::Client::indexFileMeta(shared_ptr<IndexFileMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return indexFileMetaWithOptions(request, runtime);
}

DetectImageLabelsResponse Alibabacloud_Imm20200930::Client::detectImageLabelsWithOptions(shared_ptr<DetectImageLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetectImageLabelsResponse(doRPCRequest(make_shared<string>("DetectImageLabels"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetectImageLabelsResponse Alibabacloud_Imm20200930::Client::detectImageLabels(shared_ptr<DetectImageLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageLabelsWithOptions(request, runtime);
}

GetProjectResponse Alibabacloud_Imm20200930::Client::getProjectWithOptions(shared_ptr<GetProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetProjectResponse(doRPCRequest(make_shared<string>("GetProject"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetProjectResponse Alibabacloud_Imm20200930::Client::getProject(shared_ptr<GetProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectWithOptions(request, runtime);
}

CreateDatasetResponse Alibabacloud_Imm20200930::Client::createDatasetWithOptions(shared_ptr<CreateDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDatasetResponse(doRPCRequest(make_shared<string>("CreateDataset"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDatasetResponse Alibabacloud_Imm20200930::Client::createDataset(shared_ptr<CreateDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDatasetWithOptions(request, runtime);
}

DeleteProjectResponse Alibabacloud_Imm20200930::Client::deleteProjectWithOptions(shared_ptr<DeleteProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteProjectResponse(doRPCRequest(make_shared<string>("DeleteProject"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteProjectResponse Alibabacloud_Imm20200930::Client::deleteProject(shared_ptr<DeleteProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProjectWithOptions(request, runtime);
}

GetFileSignedURIResponse Alibabacloud_Imm20200930::Client::getFileSignedURIWithOptions(shared_ptr<GetFileSignedURIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetFileSignedURIResponse(doRPCRequest(make_shared<string>("GetFileSignedURI"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetFileSignedURIResponse Alibabacloud_Imm20200930::Client::getFileSignedURI(shared_ptr<GetFileSignedURIRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileSignedURIWithOptions(request, runtime);
}

UpdateProjectResponse Alibabacloud_Imm20200930::Client::updateProjectWithOptions(shared_ptr<UpdateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateProjectResponse(doRPCRequest(make_shared<string>("UpdateProject"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateProjectResponse Alibabacloud_Imm20200930::Client::updateProject(shared_ptr<UpdateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProjectWithOptions(request, runtime);
}

UpdateDatasetResponse Alibabacloud_Imm20200930::Client::updateDatasetWithOptions(shared_ptr<UpdateDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDatasetResponse(doRPCRequest(make_shared<string>("UpdateDataset"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDatasetResponse Alibabacloud_Imm20200930::Client::updateDataset(shared_ptr<UpdateDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDatasetWithOptions(request, runtime);
}

FuzzyQueryResponse Alibabacloud_Imm20200930::Client::fuzzyQueryWithOptions(shared_ptr<FuzzyQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FuzzyQueryResponse(doRPCRequest(make_shared<string>("FuzzyQuery"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FuzzyQueryResponse Alibabacloud_Imm20200930::Client::fuzzyQuery(shared_ptr<FuzzyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fuzzyQueryWithOptions(request, runtime);
}

ListOfficeConversionTaskResponse Alibabacloud_Imm20200930::Client::listOfficeConversionTaskWithOptions(shared_ptr<ListOfficeConversionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListOfficeConversionTaskResponse(doRPCRequest(make_shared<string>("ListOfficeConversionTask"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOfficeConversionTaskResponse Alibabacloud_Imm20200930::Client::listOfficeConversionTask(shared_ptr<ListOfficeConversionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOfficeConversionTaskWithOptions(request, runtime);
}

