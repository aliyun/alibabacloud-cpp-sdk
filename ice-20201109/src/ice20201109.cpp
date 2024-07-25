// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ice20201109.hpp>
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

using namespace Alibabacloud_ICE20201109;

Alibabacloud_ICE20201109::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
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

AddCategoryResponse Alibabacloud_ICE20201109::Client::addCategoryWithOptions(shared_ptr<AddCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cateName)) {
    query->insert(pair<string, string>("CateName", *request->cateName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentId)) {
    query->insert(pair<string, long>("ParentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddCategory"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddCategoryResponse(callApi(params, req, runtime));
}

AddCategoryResponse Alibabacloud_ICE20201109::Client::addCategory(shared_ptr<AddCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCategoryWithOptions(request, runtime);
}

AddEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::addEditingProjectMaterialsWithOptions(shared_ptr<AddEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->materialMaps)) {
    query->insert(pair<string, string>("MaterialMaps", *request->materialMaps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddEditingProjectMaterials"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddEditingProjectMaterialsResponse(callApi(params, req, runtime));
}

AddEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::addEditingProjectMaterials(shared_ptr<AddEditingProjectMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addEditingProjectMaterialsWithOptions(request, runtime);
}

AddFavoritePublicMediaResponse Alibabacloud_ICE20201109::Client::addFavoritePublicMediaWithOptions(shared_ptr<AddFavoritePublicMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaIds)) {
    query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFavoritePublicMedia"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddFavoritePublicMediaResponse(callApi(params, req, runtime));
}

AddFavoritePublicMediaResponse Alibabacloud_ICE20201109::Client::addFavoritePublicMedia(shared_ptr<AddFavoritePublicMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addFavoritePublicMediaWithOptions(request, runtime);
}

AddMediaMarksResponse Alibabacloud_ICE20201109::Client::addMediaMarksWithOptions(shared_ptr<AddMediaMarksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaMarks)) {
    query->insert(pair<string, string>("MediaMarks", *request->mediaMarks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddMediaMarks"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddMediaMarksResponse(callApi(params, req, runtime));
}

AddMediaMarksResponse Alibabacloud_ICE20201109::Client::addMediaMarks(shared_ptr<AddMediaMarksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMediaMarksWithOptions(request, runtime);
}

AddTemplateResponse Alibabacloud_ICE20201109::Client::addTemplateWithOptions(shared_ptr<AddTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coverUrl)) {
    query->insert(pair<string, string>("CoverUrl", *request->coverUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->previewMedia)) {
    query->insert(pair<string, string>("PreviewMedia", *request->previewMedia));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedMediaids)) {
    query->insert(pair<string, string>("RelatedMediaids", *request->relatedMediaids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddTemplateResponse(callApi(params, req, runtime));
}

AddTemplateResponse Alibabacloud_ICE20201109::Client::addTemplate(shared_ptr<AddTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTemplateWithOptions(request, runtime);
}

AlterSearchIndexResponse Alibabacloud_ICE20201109::Client::alterSearchIndexWithOptions(shared_ptr<AlterSearchIndexRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexConfig)) {
    query->insert(pair<string, string>("IndexConfig", *request->indexConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexStatus)) {
    query->insert(pair<string, string>("IndexStatus", *request->indexStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexType)) {
    query->insert(pair<string, string>("IndexType", *request->indexType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AlterSearchIndex"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AlterSearchIndexResponse(callApi(params, req, runtime));
}

AlterSearchIndexResponse Alibabacloud_ICE20201109::Client::alterSearchIndex(shared_ptr<AlterSearchIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return alterSearchIndexWithOptions(request, runtime);
}

BatchGetMediaInfosResponse Alibabacloud_ICE20201109::Client::batchGetMediaInfosWithOptions(shared_ptr<BatchGetMediaInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->additionType)) {
    query->insert(pair<string, string>("AdditionType", *request->additionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaIds)) {
    query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetMediaInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchGetMediaInfosResponse(callApi(params, req, runtime));
}

BatchGetMediaInfosResponse Alibabacloud_ICE20201109::Client::batchGetMediaInfos(shared_ptr<BatchGetMediaInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetMediaInfosWithOptions(request, runtime);
}

CancelDNAJobResponse Alibabacloud_ICE20201109::Client::cancelDNAJobWithOptions(shared_ptr<CancelDNAJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelDNAJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelDNAJobResponse(callApi(params, req, runtime));
}

CancelDNAJobResponse Alibabacloud_ICE20201109::Client::cancelDNAJob(shared_ptr<CancelDNAJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelDNAJobWithOptions(request, runtime);
}

CancelFavoritePublicMediaResponse Alibabacloud_ICE20201109::Client::cancelFavoritePublicMediaWithOptions(shared_ptr<CancelFavoritePublicMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaIds)) {
    query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelFavoritePublicMedia"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelFavoritePublicMediaResponse(callApi(params, req, runtime));
}

CancelFavoritePublicMediaResponse Alibabacloud_ICE20201109::Client::cancelFavoritePublicMedia(shared_ptr<CancelFavoritePublicMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelFavoritePublicMediaWithOptions(request, runtime);
}

CreateAuditResponse Alibabacloud_ICE20201109::Client::createAuditWithOptions(shared_ptr<CreateAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->auditContent)) {
    query->insert(pair<string, string>("AuditContent", *request->auditContent));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAudit"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAuditResponse(callApi(params, req, runtime));
}

CreateAuditResponse Alibabacloud_ICE20201109::Client::createAudit(shared_ptr<CreateAuditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAuditWithOptions(request, runtime);
}

CreateAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::createAvatarTrainingJobWithOptions(shared_ptr<CreateAvatarTrainingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarDescription)) {
    query->insert(pair<string, string>("AvatarDescription", *request->avatarDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarName)) {
    query->insert(pair<string, string>("AvatarName", *request->avatarName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarType)) {
    query->insert(pair<string, string>("AvatarType", *request->avatarType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portrait)) {
    query->insert(pair<string, string>("Portrait", *request->portrait));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thumbnail)) {
    query->insert(pair<string, string>("Thumbnail", *request->thumbnail));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->transparent)) {
    query->insert(pair<string, bool>("Transparent", *request->transparent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->video)) {
    query->insert(pair<string, string>("Video", *request->video));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAvatarTrainingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAvatarTrainingJobResponse(callApi(params, req, runtime));
}

CreateAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::createAvatarTrainingJob(shared_ptr<CreateAvatarTrainingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAvatarTrainingJobWithOptions(request, runtime);
}

CreateCustomTemplateResponse Alibabacloud_ICE20201109::Client::createCustomTemplateWithOptions(shared_ptr<CreateCustomTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subtype)) {
    query->insert(pair<string, long>("Subtype", *request->subtype));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfig)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustomTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCustomTemplateResponse(callApi(params, req, runtime));
}

CreateCustomTemplateResponse Alibabacloud_ICE20201109::Client::createCustomTemplate(shared_ptr<CreateCustomTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomTemplateWithOptions(request, runtime);
}

CreateCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::createCustomizedVoiceJobWithOptions(shared_ptr<CreateCustomizedVoiceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gender)) {
    query->insert(pair<string, string>("Gender", *request->gender));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    query->insert(pair<string, string>("Scenario", *request->scenario));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceDesc)) {
    query->insert(pair<string, string>("VoiceDesc", *request->voiceDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceId)) {
    query->insert(pair<string, string>("VoiceId", *request->voiceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceName)) {
    query->insert(pair<string, string>("VoiceName", *request->voiceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustomizedVoiceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCustomizedVoiceJobResponse(callApi(params, req, runtime));
}

CreateCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::createCustomizedVoiceJob(shared_ptr<CreateCustomizedVoiceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomizedVoiceJobWithOptions(request, runtime);
}

CreateDNADBResponse Alibabacloud_ICE20201109::Client::createDNADBWithOptions(shared_ptr<CreateDNADBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    query->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDNADB"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDNADBResponse(callApi(params, req, runtime));
}

CreateDNADBResponse Alibabacloud_ICE20201109::Client::createDNADB(shared_ptr<CreateDNADBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDNADBWithOptions(request, runtime);
}

CreateEditingProjectResponse Alibabacloud_ICE20201109::Client::createEditingProjectWithOptions(shared_ptr<CreateEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessConfig)) {
    query->insert(pair<string, string>("BusinessConfig", *request->businessConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clipsParam)) {
    query->insert(pair<string, string>("ClipsParam", *request->clipsParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverURL)) {
    query->insert(pair<string, string>("CoverURL", *request->coverURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialMaps)) {
    query->insert(pair<string, string>("MaterialMaps", *request->materialMaps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectType)) {
    query->insert(pair<string, string>("ProjectType", *request->projectType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->timeline)) {
    body->insert(pair<string, string>("Timeline", *request->timeline));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEditingProject"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEditingProjectResponse(callApi(params, req, runtime));
}

CreateEditingProjectResponse Alibabacloud_ICE20201109::Client::createEditingProject(shared_ptr<CreateEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEditingProjectWithOptions(request, runtime);
}

CreateLiveRecordTemplateResponse Alibabacloud_ICE20201109::Client::createLiveRecordTemplateWithOptions(shared_ptr<CreateLiveRecordTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateLiveRecordTemplateShrinkRequest> request = make_shared<CreateLiveRecordTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateLiveRecordTemplateRequestRecordFormat>>(tmpReq->recordFormat)) {
    request->recordFormatShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->recordFormat, make_shared<string>("RecordFormat"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordFormatShrink)) {
    body->insert(pair<string, string>("RecordFormat", *request->recordFormatShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLiveRecordTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLiveRecordTemplateResponse(callApi(params, req, runtime));
}

CreateLiveRecordTemplateResponse Alibabacloud_ICE20201109::Client::createLiveRecordTemplate(shared_ptr<CreateLiveRecordTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLiveRecordTemplateWithOptions(request, runtime);
}

CreateLiveSnapshotTemplateResponse Alibabacloud_ICE20201109::Client::createLiveSnapshotTemplateWithOptions(shared_ptr<CreateLiveSnapshotTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->overwriteFormat)) {
    body->insert(pair<string, string>("OverwriteFormat", *request->overwriteFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sequenceFormat)) {
    body->insert(pair<string, string>("SequenceFormat", *request->sequenceFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    body->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeInterval)) {
    body->insert(pair<string, long>("TimeInterval", *request->timeInterval));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLiveSnapshotTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLiveSnapshotTemplateResponse(callApi(params, req, runtime));
}

CreateLiveSnapshotTemplateResponse Alibabacloud_ICE20201109::Client::createLiveSnapshotTemplate(shared_ptr<CreateLiveSnapshotTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLiveSnapshotTemplateWithOptions(request, runtime);
}

CreateLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::createLiveTranscodeTemplateWithOptions(shared_ptr<CreateLiveTranscodeTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateLiveTranscodeTemplateShrinkRequest> request = make_shared<CreateLiveTranscodeTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateLiveTranscodeTemplateRequestTemplateConfig>(tmpReq->templateConfig)) {
    request->templateConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->templateConfig, make_shared<string>("TemplateConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfigShrink)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLiveTranscodeTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLiveTranscodeTemplateResponse(callApi(params, req, runtime));
}

CreateLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::createLiveTranscodeTemplate(shared_ptr<CreateLiveTranscodeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLiveTranscodeTemplateWithOptions(request, runtime);
}

CreatePipelineResponse Alibabacloud_ICE20201109::Client::createPipelineWithOptions(shared_ptr<CreatePipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->speed)) {
    query->insert(pair<string, string>("Speed", *request->speed));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePipeline"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePipelineResponse(callApi(params, req, runtime));
}

CreatePipelineResponse Alibabacloud_ICE20201109::Client::createPipeline(shared_ptr<CreatePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPipelineWithOptions(request, runtime);
}

CreateSearchIndexResponse Alibabacloud_ICE20201109::Client::createSearchIndexWithOptions(shared_ptr<CreateSearchIndexRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexConfig)) {
    query->insert(pair<string, string>("IndexConfig", *request->indexConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexStatus)) {
    query->insert(pair<string, string>("IndexStatus", *request->indexStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexType)) {
    query->insert(pair<string, string>("IndexType", *request->indexType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSearchIndex"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSearchIndexResponse(callApi(params, req, runtime));
}

CreateSearchIndexResponse Alibabacloud_ICE20201109::Client::createSearchIndex(shared_ptr<CreateSearchIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSearchIndexWithOptions(request, runtime);
}

CreateSearchLibResponse Alibabacloud_ICE20201109::Client::createSearchLibWithOptions(shared_ptr<CreateSearchLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSearchLib"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSearchLibResponse(callApi(params, req, runtime));
}

CreateSearchLibResponse Alibabacloud_ICE20201109::Client::createSearchLib(shared_ptr<CreateSearchLibRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSearchLibWithOptions(request, runtime);
}

CreateUploadMediaResponse Alibabacloud_ICE20201109::Client::createUploadMediaWithOptions(shared_ptr<CreateUploadMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileInfo)) {
    query->insert(pair<string, string>("FileInfo", *request->fileInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaMetaData)) {
    query->insert(pair<string, string>("MediaMetaData", *request->mediaMetaData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postProcessConfig)) {
    query->insert(pair<string, string>("PostProcessConfig", *request->postProcessConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadTargetConfig)) {
    query->insert(pair<string, string>("UploadTargetConfig", *request->uploadTargetConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUploadMedia"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUploadMediaResponse(callApi(params, req, runtime));
}

CreateUploadMediaResponse Alibabacloud_ICE20201109::Client::createUploadMedia(shared_ptr<CreateUploadMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUploadMediaWithOptions(request, runtime);
}

CreateUploadStreamResponse Alibabacloud_ICE20201109::Client::createUploadStreamWithOptions(shared_ptr<CreateUploadStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->definition)) {
    query->insert(pair<string, string>("Definition", *request->definition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileExtension)) {
    query->insert(pair<string, string>("FileExtension", *request->fileExtension));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->HDRType)) {
    query->insert(pair<string, string>("HDRType", *request->HDRType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUploadStream"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUploadStreamResponse(callApi(params, req, runtime));
}

CreateUploadStreamResponse Alibabacloud_ICE20201109::Client::createUploadStream(shared_ptr<CreateUploadStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUploadStreamWithOptions(request, runtime);
}

DecryptKMSDataKeyResponse Alibabacloud_ICE20201109::Client::decryptKMSDataKeyWithOptions(shared_ptr<DecryptKMSDataKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ciphertextBlob)) {
    query->insert(pair<string, string>("CiphertextBlob", *request->ciphertextBlob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DecryptKMSDataKey"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DecryptKMSDataKeyResponse(callApi(params, req, runtime));
}

DecryptKMSDataKeyResponse Alibabacloud_ICE20201109::Client::decryptKMSDataKey(shared_ptr<DecryptKMSDataKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return decryptKMSDataKeyWithOptions(request, runtime);
}

DeleteAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::deleteAvatarTrainingJobWithOptions(shared_ptr<DeleteAvatarTrainingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAvatarTrainingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAvatarTrainingJobResponse(callApi(params, req, runtime));
}

DeleteAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::deleteAvatarTrainingJob(shared_ptr<DeleteAvatarTrainingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAvatarTrainingJobWithOptions(request, runtime);
}

DeleteCategoryResponse Alibabacloud_ICE20201109::Client::deleteCategoryWithOptions(shared_ptr<DeleteCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cateId)) {
    query->insert(pair<string, long>("CateId", *request->cateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCategory"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCategoryResponse(callApi(params, req, runtime));
}

DeleteCategoryResponse Alibabacloud_ICE20201109::Client::deleteCategory(shared_ptr<DeleteCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCategoryWithOptions(request, runtime);
}

DeleteCustomTemplateResponse Alibabacloud_ICE20201109::Client::deleteCustomTemplateWithOptions(shared_ptr<DeleteCustomTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCustomTemplateResponse(callApi(params, req, runtime));
}

DeleteCustomTemplateResponse Alibabacloud_ICE20201109::Client::deleteCustomTemplate(shared_ptr<DeleteCustomTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomTemplateWithOptions(request, runtime);
}

DeleteCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::deleteCustomizedVoiceJobWithOptions(shared_ptr<DeleteCustomizedVoiceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomizedVoiceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCustomizedVoiceJobResponse(callApi(params, req, runtime));
}

DeleteCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::deleteCustomizedVoiceJob(shared_ptr<DeleteCustomizedVoiceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomizedVoiceJobWithOptions(request, runtime);
}

DeleteDNADBResponse Alibabacloud_ICE20201109::Client::deleteDNADBWithOptions(shared_ptr<DeleteDNADBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBId)) {
    query->insert(pair<string, string>("DBId", *request->DBId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDNADB"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDNADBResponse(callApi(params, req, runtime));
}

DeleteDNADBResponse Alibabacloud_ICE20201109::Client::deleteDNADB(shared_ptr<DeleteDNADBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDNADBWithOptions(request, runtime);
}

DeleteDNAFilesResponse Alibabacloud_ICE20201109::Client::deleteDNAFilesWithOptions(shared_ptr<DeleteDNAFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBId)) {
    query->insert(pair<string, string>("DBId", *request->DBId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->primaryKeys)) {
    query->insert(pair<string, string>("PrimaryKeys", *request->primaryKeys));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDNAFiles"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDNAFilesResponse(callApi(params, req, runtime));
}

DeleteDNAFilesResponse Alibabacloud_ICE20201109::Client::deleteDNAFiles(shared_ptr<DeleteDNAFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDNAFilesWithOptions(request, runtime);
}

DeleteEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::deleteEditingProjectMaterialsWithOptions(shared_ptr<DeleteEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->materialIds)) {
    query->insert(pair<string, string>("MaterialIds", *request->materialIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialType)) {
    query->insert(pair<string, string>("MaterialType", *request->materialType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEditingProjectMaterials"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEditingProjectMaterialsResponse(callApi(params, req, runtime));
}

DeleteEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::deleteEditingProjectMaterials(shared_ptr<DeleteEditingProjectMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEditingProjectMaterialsWithOptions(request, runtime);
}

DeleteEditingProjectsResponse Alibabacloud_ICE20201109::Client::deleteEditingProjectsWithOptions(shared_ptr<DeleteEditingProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIds)) {
    query->insert(pair<string, string>("ProjectIds", *request->projectIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEditingProjects"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEditingProjectsResponse(callApi(params, req, runtime));
}

DeleteEditingProjectsResponse Alibabacloud_ICE20201109::Client::deleteEditingProjects(shared_ptr<DeleteEditingProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEditingProjectsWithOptions(request, runtime);
}

DeleteLiveRecordFilesResponse Alibabacloud_ICE20201109::Client::deleteLiveRecordFilesWithOptions(shared_ptr<DeleteLiveRecordFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->recordIds)) {
    query->insert(pair<string, vector<string>>("RecordIds", *request->recordIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->removeFile)) {
    query->insert(pair<string, bool>("RemoveFile", *request->removeFile));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveRecordFiles"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveRecordFilesResponse(callApi(params, req, runtime));
}

DeleteLiveRecordFilesResponse Alibabacloud_ICE20201109::Client::deleteLiveRecordFiles(shared_ptr<DeleteLiveRecordFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveRecordFilesWithOptions(request, runtime);
}

DeleteLiveRecordTemplateResponse Alibabacloud_ICE20201109::Client::deleteLiveRecordTemplateWithOptions(shared_ptr<DeleteLiveRecordTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveRecordTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveRecordTemplateResponse(callApi(params, req, runtime));
}

DeleteLiveRecordTemplateResponse Alibabacloud_ICE20201109::Client::deleteLiveRecordTemplate(shared_ptr<DeleteLiveRecordTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveRecordTemplateWithOptions(request, runtime);
}

DeleteLiveSnapshotFilesResponse Alibabacloud_ICE20201109::Client::deleteLiveSnapshotFilesWithOptions(shared_ptr<DeleteLiveSnapshotFilesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteLiveSnapshotFilesShrinkRequest> request = make_shared<DeleteLiveSnapshotFilesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->createTimestampList)) {
    request->createTimestampListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createTimestampList, make_shared<string>("CreateTimestampList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimestampListShrink)) {
    query->insert(pair<string, string>("CreateTimestampList", *request->createTimestampListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deleteOriginalFile)) {
    query->insert(pair<string, bool>("DeleteOriginalFile", *request->deleteOriginalFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveSnapshotFiles"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveSnapshotFilesResponse(callApi(params, req, runtime));
}

DeleteLiveSnapshotFilesResponse Alibabacloud_ICE20201109::Client::deleteLiveSnapshotFiles(shared_ptr<DeleteLiveSnapshotFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveSnapshotFilesWithOptions(request, runtime);
}

DeleteLiveSnapshotTemplateResponse Alibabacloud_ICE20201109::Client::deleteLiveSnapshotTemplateWithOptions(shared_ptr<DeleteLiveSnapshotTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveSnapshotTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveSnapshotTemplateResponse(callApi(params, req, runtime));
}

DeleteLiveSnapshotTemplateResponse Alibabacloud_ICE20201109::Client::deleteLiveSnapshotTemplate(shared_ptr<DeleteLiveSnapshotTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveSnapshotTemplateWithOptions(request, runtime);
}

DeleteLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::deleteLiveTranscodeJobWithOptions(shared_ptr<DeleteLiveTranscodeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveTranscodeJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveTranscodeJobResponse(callApi(params, req, runtime));
}

DeleteLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::deleteLiveTranscodeJob(shared_ptr<DeleteLiveTranscodeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveTranscodeJobWithOptions(request, runtime);
}

DeleteLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::deleteLiveTranscodeTemplateWithOptions(shared_ptr<DeleteLiveTranscodeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveTranscodeTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveTranscodeTemplateResponse(callApi(params, req, runtime));
}

DeleteLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::deleteLiveTranscodeTemplate(shared_ptr<DeleteLiveTranscodeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveTranscodeTemplateWithOptions(request, runtime);
}

DeleteMediaFromSearchLibResponse Alibabacloud_ICE20201109::Client::deleteMediaFromSearchLibWithOptions(shared_ptr<DeleteMediaFromSearchLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->msgBody)) {
    query->insert(pair<string, string>("MsgBody", *request->msgBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMediaFromSearchLib"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMediaFromSearchLibResponse(callApi(params, req, runtime));
}

DeleteMediaFromSearchLibResponse Alibabacloud_ICE20201109::Client::deleteMediaFromSearchLib(shared_ptr<DeleteMediaFromSearchLibRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaFromSearchLibWithOptions(request, runtime);
}

DeleteMediaInfosResponse Alibabacloud_ICE20201109::Client::deleteMediaInfosWithOptions(shared_ptr<DeleteMediaInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->deletePhysicalFiles)) {
    query->insert(pair<string, bool>("DeletePhysicalFiles", *request->deletePhysicalFiles));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputURLs)) {
    query->insert(pair<string, string>("InputURLs", *request->inputURLs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaIds)) {
    query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMediaInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMediaInfosResponse(callApi(params, req, runtime));
}

DeleteMediaInfosResponse Alibabacloud_ICE20201109::Client::deleteMediaInfos(shared_ptr<DeleteMediaInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaInfosWithOptions(request, runtime);
}

DeleteMediaMarksResponse Alibabacloud_ICE20201109::Client::deleteMediaMarksWithOptions(shared_ptr<DeleteMediaMarksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaMarkIds)) {
    query->insert(pair<string, string>("MediaMarkIds", *request->mediaMarkIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMediaMarks"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMediaMarksResponse(callApi(params, req, runtime));
}

DeleteMediaMarksResponse Alibabacloud_ICE20201109::Client::deleteMediaMarks(shared_ptr<DeleteMediaMarksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaMarksWithOptions(request, runtime);
}

DeletePipelineResponse Alibabacloud_ICE20201109::Client::deletePipelineWithOptions(shared_ptr<DeletePipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePipeline"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePipelineResponse(callApi(params, req, runtime));
}

DeletePipelineResponse Alibabacloud_ICE20201109::Client::deletePipeline(shared_ptr<DeletePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePipelineWithOptions(request, runtime);
}

DeletePlayInfoResponse Alibabacloud_ICE20201109::Client::deletePlayInfoWithOptions(shared_ptr<DeletePlayInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->deletePhysicalFiles)) {
    query->insert(pair<string, bool>("DeletePhysicalFiles", *request->deletePhysicalFiles));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileURLs)) {
    query->insert(pair<string, string>("FileURLs", *request->fileURLs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePlayInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePlayInfoResponse(callApi(params, req, runtime));
}

DeletePlayInfoResponse Alibabacloud_ICE20201109::Client::deletePlayInfo(shared_ptr<DeletePlayInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePlayInfoWithOptions(request, runtime);
}

DeleteSmartJobResponse Alibabacloud_ICE20201109::Client::deleteSmartJobWithOptions(shared_ptr<DeleteSmartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSmartJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSmartJobResponse(callApi(params, req, runtime));
}

DeleteSmartJobResponse Alibabacloud_ICE20201109::Client::deleteSmartJob(shared_ptr<DeleteSmartJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSmartJobWithOptions(request, runtime);
}

DeleteTemplateResponse Alibabacloud_ICE20201109::Client::deleteTemplateWithOptions(shared_ptr<DeleteTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTemplateResponse(callApi(params, req, runtime));
}

DeleteTemplateResponse Alibabacloud_ICE20201109::Client::deleteTemplate(shared_ptr<DeleteTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTemplateWithOptions(request, runtime);
}

DescribeMeterImsEditUsageResponse Alibabacloud_ICE20201109::Client::describeMeterImsEditUsageWithOptions(shared_ptr<DescribeMeterImsEditUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMeterImsEditUsage"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMeterImsEditUsageResponse(callApi(params, req, runtime));
}

DescribeMeterImsEditUsageResponse Alibabacloud_ICE20201109::Client::describeMeterImsEditUsage(shared_ptr<DescribeMeterImsEditUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMeterImsEditUsageWithOptions(request, runtime);
}

DescribeMeterImsMediaConvertUHDUsageResponse Alibabacloud_ICE20201109::Client::describeMeterImsMediaConvertUHDUsageWithOptions(shared_ptr<DescribeMeterImsMediaConvertUHDUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMeterImsMediaConvertUHDUsage"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMeterImsMediaConvertUHDUsageResponse(callApi(params, req, runtime));
}

DescribeMeterImsMediaConvertUHDUsageResponse Alibabacloud_ICE20201109::Client::describeMeterImsMediaConvertUHDUsage(shared_ptr<DescribeMeterImsMediaConvertUHDUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMeterImsMediaConvertUHDUsageWithOptions(request, runtime);
}

DescribeMeterImsMediaConvertUsageResponse Alibabacloud_ICE20201109::Client::describeMeterImsMediaConvertUsageWithOptions(shared_ptr<DescribeMeterImsMediaConvertUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMeterImsMediaConvertUsage"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMeterImsMediaConvertUsageResponse(callApi(params, req, runtime));
}

DescribeMeterImsMediaConvertUsageResponse Alibabacloud_ICE20201109::Client::describeMeterImsMediaConvertUsage(shared_ptr<DescribeMeterImsMediaConvertUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMeterImsMediaConvertUsageWithOptions(request, runtime);
}

DescribeMeterImsMpsAiUsageResponse Alibabacloud_ICE20201109::Client::describeMeterImsMpsAiUsageWithOptions(shared_ptr<DescribeMeterImsMpsAiUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMeterImsMpsAiUsage"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMeterImsMpsAiUsageResponse(callApi(params, req, runtime));
}

DescribeMeterImsMpsAiUsageResponse Alibabacloud_ICE20201109::Client::describeMeterImsMpsAiUsage(shared_ptr<DescribeMeterImsMpsAiUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMeterImsMpsAiUsageWithOptions(request, runtime);
}

DescribeMeterImsSummaryResponse Alibabacloud_ICE20201109::Client::describeMeterImsSummaryWithOptions(shared_ptr<DescribeMeterImsSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMeterImsSummary"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMeterImsSummaryResponse(callApi(params, req, runtime));
}

DescribeMeterImsSummaryResponse Alibabacloud_ICE20201109::Client::describeMeterImsSummary(shared_ptr<DescribeMeterImsSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMeterImsSummaryWithOptions(request, runtime);
}

DescribePlayListResponse Alibabacloud_ICE20201109::Client::describePlayListWithOptions(shared_ptr<DescribePlayListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->beginTs)) {
    query->insert(pair<string, string>("BeginTs", *request->beginTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTs)) {
    query->insert(pair<string, string>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderName)) {
    query->insert(pair<string, string>("OrderName", *request->orderName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playType)) {
    query->insert(pair<string, string>("PlayType", *request->playType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceId)) {
    query->insert(pair<string, string>("TraceId", *request->traceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlayList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePlayListResponse(callApi(params, req, runtime));
}

DescribePlayListResponse Alibabacloud_ICE20201109::Client::describePlayList(shared_ptr<DescribePlayListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlayListWithOptions(request, runtime);
}

DetectAudioForCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::detectAudioForCustomizedVoiceJobWithOptions(shared_ptr<DetectAudioForCustomizedVoiceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->audioRecordId)) {
    query->insert(pair<string, long>("AudioRecordId", *request->audioRecordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordUrl)) {
    query->insert(pair<string, string>("RecordUrl", *request->recordUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceId)) {
    query->insert(pair<string, string>("VoiceId", *request->voiceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectAudioForCustomizedVoiceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectAudioForCustomizedVoiceJobResponse(callApi(params, req, runtime));
}

DetectAudioForCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::detectAudioForCustomizedVoiceJob(shared_ptr<DetectAudioForCustomizedVoiceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectAudioForCustomizedVoiceJobWithOptions(request, runtime);
}

DropSearchIndexResponse Alibabacloud_ICE20201109::Client::dropSearchIndexWithOptions(shared_ptr<DropSearchIndexRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexType)) {
    query->insert(pair<string, string>("IndexType", *request->indexType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DropSearchIndex"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DropSearchIndexResponse(callApi(params, req, runtime));
}

DropSearchIndexResponse Alibabacloud_ICE20201109::Client::dropSearchIndex(shared_ptr<DropSearchIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dropSearchIndexWithOptions(request, runtime);
}

DropSearchLibResponse Alibabacloud_ICE20201109::Client::dropSearchLibWithOptions(shared_ptr<DropSearchLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DropSearchLib"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DropSearchLibResponse(callApi(params, req, runtime));
}

DropSearchLibResponse Alibabacloud_ICE20201109::Client::dropSearchLib(shared_ptr<DropSearchLibRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dropSearchLibWithOptions(request, runtime);
}

GenerateKMSDataKeyResponse Alibabacloud_ICE20201109::Client::generateKMSDataKeyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateKMSDataKey"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateKMSDataKeyResponse(callApi(params, req, runtime));
}

GenerateKMSDataKeyResponse Alibabacloud_ICE20201109::Client::generateKMSDataKey() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateKMSDataKeyWithOptions(runtime);
}

GetAvatarResponse Alibabacloud_ICE20201109::Client::getAvatarWithOptions(shared_ptr<GetAvatarRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarId)) {
    query->insert(pair<string, string>("AvatarId", *request->avatarId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAvatar"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAvatarResponse(callApi(params, req, runtime));
}

GetAvatarResponse Alibabacloud_ICE20201109::Client::getAvatar(shared_ptr<GetAvatarRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAvatarWithOptions(request, runtime);
}

GetAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::getAvatarTrainingJobWithOptions(shared_ptr<GetAvatarTrainingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAvatarTrainingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAvatarTrainingJobResponse(callApi(params, req, runtime));
}

GetAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::getAvatarTrainingJob(shared_ptr<GetAvatarTrainingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAvatarTrainingJobWithOptions(request, runtime);
}

GetBatchMediaProducingJobResponse Alibabacloud_ICE20201109::Client::getBatchMediaProducingJobWithOptions(shared_ptr<GetBatchMediaProducingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBatchMediaProducingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBatchMediaProducingJobResponse(callApi(params, req, runtime));
}

GetBatchMediaProducingJobResponse Alibabacloud_ICE20201109::Client::getBatchMediaProducingJob(shared_ptr<GetBatchMediaProducingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBatchMediaProducingJobWithOptions(request, runtime);
}

GetCategoriesResponse Alibabacloud_ICE20201109::Client::getCategoriesWithOptions(shared_ptr<GetCategoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cateId)) {
    query->insert(pair<string, long>("CateId", *request->cateId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCategories"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCategoriesResponse(callApi(params, req, runtime));
}

GetCategoriesResponse Alibabacloud_ICE20201109::Client::getCategories(shared_ptr<GetCategoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCategoriesWithOptions(request, runtime);
}

GetContentAnalyzeConfigResponse Alibabacloud_ICE20201109::Client::getContentAnalyzeConfigWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetContentAnalyzeConfig"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetContentAnalyzeConfigResponse(callApi(params, req, runtime));
}

GetContentAnalyzeConfigResponse Alibabacloud_ICE20201109::Client::getContentAnalyzeConfig() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getContentAnalyzeConfigWithOptions(runtime);
}

GetCustomTemplateResponse Alibabacloud_ICE20201109::Client::getCustomTemplateWithOptions(shared_ptr<GetCustomTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->subtype)) {
    query->insert(pair<string, long>("Subtype", *request->subtype));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCustomTemplateResponse(callApi(params, req, runtime));
}

GetCustomTemplateResponse Alibabacloud_ICE20201109::Client::getCustomTemplate(shared_ptr<GetCustomTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomTemplateWithOptions(request, runtime);
}

GetCustomizedVoiceResponse Alibabacloud_ICE20201109::Client::getCustomizedVoiceWithOptions(shared_ptr<GetCustomizedVoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceId)) {
    query->insert(pair<string, string>("VoiceId", *request->voiceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomizedVoice"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCustomizedVoiceResponse(callApi(params, req, runtime));
}

GetCustomizedVoiceResponse Alibabacloud_ICE20201109::Client::getCustomizedVoice(shared_ptr<GetCustomizedVoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomizedVoiceWithOptions(request, runtime);
}

GetCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::getCustomizedVoiceJobWithOptions(shared_ptr<GetCustomizedVoiceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomizedVoiceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCustomizedVoiceJobResponse(callApi(params, req, runtime));
}

GetCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::getCustomizedVoiceJob(shared_ptr<GetCustomizedVoiceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomizedVoiceJobWithOptions(request, runtime);
}

GetDefaultStorageLocationResponse Alibabacloud_ICE20201109::Client::getDefaultStorageLocationWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDefaultStorageLocation"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDefaultStorageLocationResponse(callApi(params, req, runtime));
}

GetDefaultStorageLocationResponse Alibabacloud_ICE20201109::Client::getDefaultStorageLocation() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDefaultStorageLocationWithOptions(runtime);
}

GetDemonstrationForCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::getDemonstrationForCustomizedVoiceJobWithOptions(shared_ptr<GetDemonstrationForCustomizedVoiceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    query->insert(pair<string, string>("Scenario", *request->scenario));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDemonstrationForCustomizedVoiceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDemonstrationForCustomizedVoiceJobResponse(callApi(params, req, runtime));
}

GetDemonstrationForCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::getDemonstrationForCustomizedVoiceJob(shared_ptr<GetDemonstrationForCustomizedVoiceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDemonstrationForCustomizedVoiceJobWithOptions(request, runtime);
}

GetDynamicImageJobResponse Alibabacloud_ICE20201109::Client::getDynamicImageJobWithOptions(shared_ptr<GetDynamicImageJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDynamicImageJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDynamicImageJobResponse(callApi(params, req, runtime));
}

GetDynamicImageJobResponse Alibabacloud_ICE20201109::Client::getDynamicImageJob(shared_ptr<GetDynamicImageJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDynamicImageJobWithOptions(request, runtime);
}

GetEditingProjectResponse Alibabacloud_ICE20201109::Client::getEditingProjectWithOptions(shared_ptr<GetEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestSource)) {
    query->insert(pair<string, string>("RequestSource", *request->requestSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEditingProject"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEditingProjectResponse(callApi(params, req, runtime));
}

GetEditingProjectResponse Alibabacloud_ICE20201109::Client::getEditingProject(shared_ptr<GetEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEditingProjectWithOptions(request, runtime);
}

GetEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::getEditingProjectMaterialsWithOptions(shared_ptr<GetEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEditingProjectMaterials"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEditingProjectMaterialsResponse(callApi(params, req, runtime));
}

GetEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::getEditingProjectMaterials(shared_ptr<GetEditingProjectMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEditingProjectMaterialsWithOptions(request, runtime);
}

GetEventCallbackResponse Alibabacloud_ICE20201109::Client::getEventCallbackWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEventCallback"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEventCallbackResponse(callApi(params, req, runtime));
}

GetEventCallbackResponse Alibabacloud_ICE20201109::Client::getEventCallback() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEventCallbackWithOptions(runtime);
}

GetLiveEditingIndexFileResponse Alibabacloud_ICE20201109::Client::getLiveEditingIndexFileWithOptions(shared_ptr<GetLiveEditingIndexFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveEditingIndexFile"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLiveEditingIndexFileResponse(callApi(params, req, runtime));
}

GetLiveEditingIndexFileResponse Alibabacloud_ICE20201109::Client::getLiveEditingIndexFile(shared_ptr<GetLiveEditingIndexFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveEditingIndexFileWithOptions(request, runtime);
}

GetLiveEditingJobResponse Alibabacloud_ICE20201109::Client::getLiveEditingJobWithOptions(shared_ptr<GetLiveEditingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveEditingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLiveEditingJobResponse(callApi(params, req, runtime));
}

GetLiveEditingJobResponse Alibabacloud_ICE20201109::Client::getLiveEditingJob(shared_ptr<GetLiveEditingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveEditingJobWithOptions(request, runtime);
}

GetLiveRecordJobResponse Alibabacloud_ICE20201109::Client::getLiveRecordJobWithOptions(shared_ptr<GetLiveRecordJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveRecordJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLiveRecordJobResponse(callApi(params, req, runtime));
}

GetLiveRecordJobResponse Alibabacloud_ICE20201109::Client::getLiveRecordJob(shared_ptr<GetLiveRecordJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveRecordJobWithOptions(request, runtime);
}

GetLiveRecordTemplateResponse Alibabacloud_ICE20201109::Client::getLiveRecordTemplateWithOptions(shared_ptr<GetLiveRecordTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveRecordTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLiveRecordTemplateResponse(callApi(params, req, runtime));
}

GetLiveRecordTemplateResponse Alibabacloud_ICE20201109::Client::getLiveRecordTemplate(shared_ptr<GetLiveRecordTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveRecordTemplateWithOptions(request, runtime);
}

GetLiveSnapshotJobResponse Alibabacloud_ICE20201109::Client::getLiveSnapshotJobWithOptions(shared_ptr<GetLiveSnapshotJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveSnapshotJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLiveSnapshotJobResponse(callApi(params, req, runtime));
}

GetLiveSnapshotJobResponse Alibabacloud_ICE20201109::Client::getLiveSnapshotJob(shared_ptr<GetLiveSnapshotJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveSnapshotJobWithOptions(request, runtime);
}

GetLiveSnapshotTemplateResponse Alibabacloud_ICE20201109::Client::getLiveSnapshotTemplateWithOptions(shared_ptr<GetLiveSnapshotTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveSnapshotTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLiveSnapshotTemplateResponse(callApi(params, req, runtime));
}

GetLiveSnapshotTemplateResponse Alibabacloud_ICE20201109::Client::getLiveSnapshotTemplate(shared_ptr<GetLiveSnapshotTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveSnapshotTemplateWithOptions(request, runtime);
}

GetLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::getLiveTranscodeJobWithOptions(shared_ptr<GetLiveTranscodeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveTranscodeJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLiveTranscodeJobResponse(callApi(params, req, runtime));
}

GetLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::getLiveTranscodeJob(shared_ptr<GetLiveTranscodeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveTranscodeJobWithOptions(request, runtime);
}

GetLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::getLiveTranscodeTemplateWithOptions(shared_ptr<GetLiveTranscodeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveTranscodeTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLiveTranscodeTemplateResponse(callApi(params, req, runtime));
}

GetLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::getLiveTranscodeTemplate(shared_ptr<GetLiveTranscodeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveTranscodeTemplateWithOptions(request, runtime);
}

GetMediaInfoResponse Alibabacloud_ICE20201109::Client::getMediaInfoWithOptions(shared_ptr<GetMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputURL)) {
    query->insert(pair<string, string>("InputURL", *request->inputURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputType)) {
    query->insert(pair<string, string>("OutputType", *request->outputType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->returnDetailedInfo)) {
    query->insert(pair<string, string>("ReturnDetailedInfo", *request->returnDetailedInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaInfoResponse(callApi(params, req, runtime));
}

GetMediaInfoResponse Alibabacloud_ICE20201109::Client::getMediaInfo(shared_ptr<GetMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaInfoWithOptions(request, runtime);
}

GetMediaInfoJobResponse Alibabacloud_ICE20201109::Client::getMediaInfoJobWithOptions(shared_ptr<GetMediaInfoJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaInfoJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaInfoJobResponse(callApi(params, req, runtime));
}

GetMediaInfoJobResponse Alibabacloud_ICE20201109::Client::getMediaInfoJob(shared_ptr<GetMediaInfoJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaInfoJobWithOptions(request, runtime);
}

GetMediaMarksResponse Alibabacloud_ICE20201109::Client::getMediaMarksWithOptions(shared_ptr<GetMediaMarksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaMarkIds)) {
    query->insert(pair<string, string>("MediaMarkIds", *request->mediaMarkIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaMarks"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaMarksResponse(callApi(params, req, runtime));
}

GetMediaMarksResponse Alibabacloud_ICE20201109::Client::getMediaMarks(shared_ptr<GetMediaMarksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaMarksWithOptions(request, runtime);
}

GetMediaProducingJobResponse Alibabacloud_ICE20201109::Client::getMediaProducingJobWithOptions(shared_ptr<GetMediaProducingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaProducingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaProducingJobResponse(callApi(params, req, runtime));
}

GetMediaProducingJobResponse Alibabacloud_ICE20201109::Client::getMediaProducingJob(shared_ptr<GetMediaProducingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaProducingJobWithOptions(request, runtime);
}

GetPackageJobResponse Alibabacloud_ICE20201109::Client::getPackageJobWithOptions(shared_ptr<GetPackageJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPackageJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPackageJobResponse(callApi(params, req, runtime));
}

GetPackageJobResponse Alibabacloud_ICE20201109::Client::getPackageJob(shared_ptr<GetPackageJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPackageJobWithOptions(request, runtime);
}

GetPipelineResponse Alibabacloud_ICE20201109::Client::getPipelineWithOptions(shared_ptr<GetPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPipeline"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPipelineResponse(callApi(params, req, runtime));
}

GetPipelineResponse Alibabacloud_ICE20201109::Client::getPipeline(shared_ptr<GetPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPipelineWithOptions(request, runtime);
}

GetPlayInfoResponse Alibabacloud_ICE20201109::Client::getPlayInfoWithOptions(shared_ptr<GetPlayInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputURL)) {
    query->insert(pair<string, string>("InputURL", *request->inputURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPlayInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPlayInfoResponse(callApi(params, req, runtime));
}

GetPlayInfoResponse Alibabacloud_ICE20201109::Client::getPlayInfo(shared_ptr<GetPlayInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPlayInfoWithOptions(request, runtime);
}

GetPublicMediaInfoResponse Alibabacloud_ICE20201109::Client::getPublicMediaInfoWithOptions(shared_ptr<GetPublicMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPublicMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPublicMediaInfoResponse(callApi(params, req, runtime));
}

GetPublicMediaInfoResponse Alibabacloud_ICE20201109::Client::getPublicMediaInfo(shared_ptr<GetPublicMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPublicMediaInfoWithOptions(request, runtime);
}

GetSmartHandleJobResponse Alibabacloud_ICE20201109::Client::getSmartHandleJobWithOptions(shared_ptr<GetSmartHandleJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSmartHandleJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSmartHandleJobResponse(callApi(params, req, runtime));
}

GetSmartHandleJobResponse Alibabacloud_ICE20201109::Client::getSmartHandleJob(shared_ptr<GetSmartHandleJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSmartHandleJobWithOptions(request, runtime);
}

GetSnapshotJobResponse Alibabacloud_ICE20201109::Client::getSnapshotJobWithOptions(shared_ptr<GetSnapshotJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSnapshotJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSnapshotJobResponse(callApi(params, req, runtime));
}

GetSnapshotJobResponse Alibabacloud_ICE20201109::Client::getSnapshotJob(shared_ptr<GetSnapshotJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSnapshotJobWithOptions(request, runtime);
}

GetSnapshotUrlsResponse Alibabacloud_ICE20201109::Client::getSnapshotUrlsWithOptions(shared_ptr<GetSnapshotUrlsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSnapshotUrls"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSnapshotUrlsResponse(callApi(params, req, runtime));
}

GetSnapshotUrlsResponse Alibabacloud_ICE20201109::Client::getSnapshotUrls(shared_ptr<GetSnapshotUrlsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSnapshotUrlsWithOptions(request, runtime);
}

GetStorageListResponse Alibabacloud_ICE20201109::Client::getStorageListWithOptions(shared_ptr<GetStorageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageType)) {
    query->insert(pair<string, string>("StorageType", *request->storageType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStorageList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStorageListResponse(callApi(params, req, runtime));
}

GetStorageListResponse Alibabacloud_ICE20201109::Client::getStorageList(shared_ptr<GetStorageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStorageListWithOptions(request, runtime);
}

GetSystemTemplateResponse Alibabacloud_ICE20201109::Client::getSystemTemplateWithOptions(shared_ptr<GetSystemTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSystemTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSystemTemplateResponse(callApi(params, req, runtime));
}

GetSystemTemplateResponse Alibabacloud_ICE20201109::Client::getSystemTemplate(shared_ptr<GetSystemTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSystemTemplateWithOptions(request, runtime);
}

GetTemplateResponse Alibabacloud_ICE20201109::Client::getTemplateWithOptions(shared_ptr<GetTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedMediaidFlag)) {
    query->insert(pair<string, string>("RelatedMediaidFlag", *request->relatedMediaidFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateResponse(callApi(params, req, runtime));
}

GetTemplateResponse Alibabacloud_ICE20201109::Client::getTemplate(shared_ptr<GetTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateWithOptions(request, runtime);
}

GetTemplateMaterialsResponse Alibabacloud_ICE20201109::Client::getTemplateMaterialsWithOptions(shared_ptr<GetTemplateMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileList)) {
    query->insert(pair<string, string>("FileList", *request->fileList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplateMaterials"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateMaterialsResponse(callApi(params, req, runtime));
}

GetTemplateMaterialsResponse Alibabacloud_ICE20201109::Client::getTemplateMaterials(shared_ptr<GetTemplateMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateMaterialsWithOptions(request, runtime);
}

GetTemplateParamsResponse Alibabacloud_ICE20201109::Client::getTemplateParamsWithOptions(shared_ptr<GetTemplateParamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplateParams"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateParamsResponse(callApi(params, req, runtime));
}

GetTemplateParamsResponse Alibabacloud_ICE20201109::Client::getTemplateParams(shared_ptr<GetTemplateParamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateParamsWithOptions(request, runtime);
}

GetTranscodeJobResponse Alibabacloud_ICE20201109::Client::getTranscodeJobWithOptions(shared_ptr<GetTranscodeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->parentJobId)) {
    query->insert(pair<string, string>("ParentJobId", *request->parentJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTranscodeJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTranscodeJobResponse(callApi(params, req, runtime));
}

GetTranscodeJobResponse Alibabacloud_ICE20201109::Client::getTranscodeJob(shared_ptr<GetTranscodeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTranscodeJobWithOptions(request, runtime);
}

GetUrlUploadInfosResponse Alibabacloud_ICE20201109::Client::getUrlUploadInfosWithOptions(shared_ptr<GetUrlUploadInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobIds)) {
    query->insert(pair<string, string>("JobIds", *request->jobIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadURLs)) {
    query->insert(pair<string, string>("UploadURLs", *request->uploadURLs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUrlUploadInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUrlUploadInfosResponse(callApi(params, req, runtime));
}

GetUrlUploadInfosResponse Alibabacloud_ICE20201109::Client::getUrlUploadInfos(shared_ptr<GetUrlUploadInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUrlUploadInfosWithOptions(request, runtime);
}

GetVideoListResponse Alibabacloud_ICE20201109::Client::getVideoListWithOptions(shared_ptr<GetVideoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cateId)) {
    query->insert(pair<string, long>("CateId", *request->cateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVideoList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVideoListResponse(callApi(params, req, runtime));
}

GetVideoListResponse Alibabacloud_ICE20201109::Client::getVideoList(shared_ptr<GetVideoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVideoListWithOptions(request, runtime);
}

GetWorkflowTaskResponse Alibabacloud_ICE20201109::Client::getWorkflowTaskWithOptions(shared_ptr<GetWorkflowTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkflowTask"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWorkflowTaskResponse(callApi(params, req, runtime));
}

GetWorkflowTaskResponse Alibabacloud_ICE20201109::Client::getWorkflowTask(shared_ptr<GetWorkflowTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWorkflowTaskWithOptions(request, runtime);
}

InsertMediaToSearchLibResponse Alibabacloud_ICE20201109::Client::insertMediaToSearchLibWithOptions(shared_ptr<InsertMediaToSearchLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->input)) {
    query->insert(pair<string, string>("Input", *request->input));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    query->insert(pair<string, string>("MediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->msgBody)) {
    query->insert(pair<string, string>("MsgBody", *request->msgBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertMediaToSearchLib"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertMediaToSearchLibResponse(callApi(params, req, runtime));
}

InsertMediaToSearchLibResponse Alibabacloud_ICE20201109::Client::insertMediaToSearchLib(shared_ptr<InsertMediaToSearchLibRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return insertMediaToSearchLibWithOptions(request, runtime);
}

ListAllPublicMediaTagsResponse Alibabacloud_ICE20201109::Client::listAllPublicMediaTagsWithOptions(shared_ptr<ListAllPublicMediaTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAllPublicMediaTags"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAllPublicMediaTagsResponse(callApi(params, req, runtime));
}

ListAllPublicMediaTagsResponse Alibabacloud_ICE20201109::Client::listAllPublicMediaTags(shared_ptr<ListAllPublicMediaTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAllPublicMediaTagsWithOptions(request, runtime);
}

ListAvatarTrainingJobsResponse Alibabacloud_ICE20201109::Client::listAvatarTrainingJobsWithOptions(shared_ptr<ListAvatarTrainingJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAvatarTrainingJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAvatarTrainingJobsResponse(callApi(params, req, runtime));
}

ListAvatarTrainingJobsResponse Alibabacloud_ICE20201109::Client::listAvatarTrainingJobs(shared_ptr<ListAvatarTrainingJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAvatarTrainingJobsWithOptions(request, runtime);
}

ListAvatarsResponse Alibabacloud_ICE20201109::Client::listAvatarsWithOptions(shared_ptr<ListAvatarsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarType)) {
    query->insert(pair<string, string>("AvatarType", *request->avatarType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAvatars"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAvatarsResponse(callApi(params, req, runtime));
}

ListAvatarsResponse Alibabacloud_ICE20201109::Client::listAvatars(shared_ptr<ListAvatarsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAvatarsWithOptions(request, runtime);
}

ListBatchMediaProducingJobsResponse Alibabacloud_ICE20201109::Client::listBatchMediaProducingJobsWithOptions(shared_ptr<ListBatchMediaProducingJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    query->insert(pair<string, string>("JobType", *request->jobType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBatchMediaProducingJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBatchMediaProducingJobsResponse(callApi(params, req, runtime));
}

ListBatchMediaProducingJobsResponse Alibabacloud_ICE20201109::Client::listBatchMediaProducingJobs(shared_ptr<ListBatchMediaProducingJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBatchMediaProducingJobsWithOptions(request, runtime);
}

ListCustomTemplatesResponse Alibabacloud_ICE20201109::Client::listCustomTemplatesWithOptions(shared_ptr<ListCustomTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subtype)) {
    query->insert(pair<string, string>("Subtype", *request->subtype));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCustomTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCustomTemplatesResponse(callApi(params, req, runtime));
}

ListCustomTemplatesResponse Alibabacloud_ICE20201109::Client::listCustomTemplates(shared_ptr<ListCustomTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCustomTemplatesWithOptions(request, runtime);
}

ListCustomizedVoiceJobsResponse Alibabacloud_ICE20201109::Client::listCustomizedVoiceJobsWithOptions(shared_ptr<ListCustomizedVoiceJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCustomizedVoiceJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCustomizedVoiceJobsResponse(callApi(params, req, runtime));
}

ListCustomizedVoiceJobsResponse Alibabacloud_ICE20201109::Client::listCustomizedVoiceJobs(shared_ptr<ListCustomizedVoiceJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCustomizedVoiceJobsWithOptions(request, runtime);
}

ListCustomizedVoicesResponse Alibabacloud_ICE20201109::Client::listCustomizedVoicesWithOptions(shared_ptr<ListCustomizedVoicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCustomizedVoices"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCustomizedVoicesResponse(callApi(params, req, runtime));
}

ListCustomizedVoicesResponse Alibabacloud_ICE20201109::Client::listCustomizedVoices(shared_ptr<ListCustomizedVoicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCustomizedVoicesWithOptions(request, runtime);
}

ListDNADBResponse Alibabacloud_ICE20201109::Client::listDNADBWithOptions(shared_ptr<ListDNADBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBIds)) {
    query->insert(pair<string, string>("DBIds", *request->DBIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDNADB"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDNADBResponse(callApi(params, req, runtime));
}

ListDNADBResponse Alibabacloud_ICE20201109::Client::listDNADB(shared_ptr<ListDNADBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDNADBWithOptions(request, runtime);
}

ListDNAFilesResponse Alibabacloud_ICE20201109::Client::listDNAFilesWithOptions(shared_ptr<ListDNAFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBId)) {
    query->insert(pair<string, string>("DBId", *request->DBId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDNAFiles"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDNAFilesResponse(callApi(params, req, runtime));
}

ListDNAFilesResponse Alibabacloud_ICE20201109::Client::listDNAFiles(shared_ptr<ListDNAFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDNAFilesWithOptions(request, runtime);
}

ListDynamicImageJobsResponse Alibabacloud_ICE20201109::Client::listDynamicImageJobsWithOptions(shared_ptr<ListDynamicImageJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endOfCreateTime)) {
    query->insert(pair<string, string>("EndOfCreateTime", *request->endOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startOfCreateTime)) {
    query->insert(pair<string, string>("StartOfCreateTime", *request->startOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDynamicImageJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDynamicImageJobsResponse(callApi(params, req, runtime));
}

ListDynamicImageJobsResponse Alibabacloud_ICE20201109::Client::listDynamicImageJobs(shared_ptr<ListDynamicImageJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDynamicImageJobsWithOptions(request, runtime);
}

ListLiveRecordFilesResponse Alibabacloud_ICE20201109::Client::listLiveRecordFilesWithOptions(shared_ptr<ListLiveRecordFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveRecordFiles"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLiveRecordFilesResponse(callApi(params, req, runtime));
}

ListLiveRecordFilesResponse Alibabacloud_ICE20201109::Client::listLiveRecordFiles(shared_ptr<ListLiveRecordFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveRecordFilesWithOptions(request, runtime);
}

ListLiveRecordJobsResponse Alibabacloud_ICE20201109::Client::listLiveRecordJobsWithOptions(shared_ptr<ListLiveRecordJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveRecordJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLiveRecordJobsResponse(callApi(params, req, runtime));
}

ListLiveRecordJobsResponse Alibabacloud_ICE20201109::Client::listLiveRecordJobs(shared_ptr<ListLiveRecordJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveRecordJobsWithOptions(request, runtime);
}

ListLiveRecordTemplatesResponse Alibabacloud_ICE20201109::Client::listLiveRecordTemplatesWithOptions(shared_ptr<ListLiveRecordTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveRecordTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLiveRecordTemplatesResponse(callApi(params, req, runtime));
}

ListLiveRecordTemplatesResponse Alibabacloud_ICE20201109::Client::listLiveRecordTemplates(shared_ptr<ListLiveRecordTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveRecordTemplatesWithOptions(request, runtime);
}

ListLiveSnapshotFilesResponse Alibabacloud_ICE20201109::Client::listLiveSnapshotFilesWithOptions(shared_ptr<ListLiveSnapshotFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveSnapshotFiles"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLiveSnapshotFilesResponse(callApi(params, req, runtime));
}

ListLiveSnapshotFilesResponse Alibabacloud_ICE20201109::Client::listLiveSnapshotFiles(shared_ptr<ListLiveSnapshotFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveSnapshotFilesWithOptions(request, runtime);
}

ListLiveSnapshotJobsResponse Alibabacloud_ICE20201109::Client::listLiveSnapshotJobsWithOptions(shared_ptr<ListLiveSnapshotJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveSnapshotJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLiveSnapshotJobsResponse(callApi(params, req, runtime));
}

ListLiveSnapshotJobsResponse Alibabacloud_ICE20201109::Client::listLiveSnapshotJobs(shared_ptr<ListLiveSnapshotJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveSnapshotJobsWithOptions(request, runtime);
}

ListLiveSnapshotTemplatesResponse Alibabacloud_ICE20201109::Client::listLiveSnapshotTemplatesWithOptions(shared_ptr<ListLiveSnapshotTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveSnapshotTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLiveSnapshotTemplatesResponse(callApi(params, req, runtime));
}

ListLiveSnapshotTemplatesResponse Alibabacloud_ICE20201109::Client::listLiveSnapshotTemplates(shared_ptr<ListLiveSnapshotTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveSnapshotTemplatesWithOptions(request, runtime);
}

ListLiveTranscodeJobsResponse Alibabacloud_ICE20201109::Client::listLiveTranscodeJobsWithOptions(shared_ptr<ListLiveTranscodeJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWord)) {
    query->insert(pair<string, string>("KeyWord", *request->keyWord));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startMode)) {
    query->insert(pair<string, long>("StartMode", *request->startMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveTranscodeJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLiveTranscodeJobsResponse(callApi(params, req, runtime));
}

ListLiveTranscodeJobsResponse Alibabacloud_ICE20201109::Client::listLiveTranscodeJobs(shared_ptr<ListLiveTranscodeJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveTranscodeJobsWithOptions(request, runtime);
}

ListLiveTranscodeTemplatesResponse Alibabacloud_ICE20201109::Client::listLiveTranscodeTemplatesWithOptions(shared_ptr<ListLiveTranscodeTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWord)) {
    query->insert(pair<string, string>("KeyWord", *request->keyWord));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoCodec)) {
    query->insert(pair<string, string>("VideoCodec", *request->videoCodec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveTranscodeTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLiveTranscodeTemplatesResponse(callApi(params, req, runtime));
}

ListLiveTranscodeTemplatesResponse Alibabacloud_ICE20201109::Client::listLiveTranscodeTemplates(shared_ptr<ListLiveTranscodeTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveTranscodeTemplatesWithOptions(request, runtime);
}

ListMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listMediaBasicInfosWithOptions(shared_ptr<ListMediaBasicInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeFileBasicInfo)) {
    query->insert(pair<string, bool>("IncludeFileBasicInfo", *request->includeFileBasicInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    query->insert(pair<string, string>("MediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMediaBasicInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMediaBasicInfosResponse(callApi(params, req, runtime));
}

ListMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listMediaBasicInfos(shared_ptr<ListMediaBasicInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaBasicInfosWithOptions(request, runtime);
}

ListMediaInfoJobsResponse Alibabacloud_ICE20201109::Client::listMediaInfoJobsWithOptions(shared_ptr<ListMediaInfoJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endOfCreateTime)) {
    query->insert(pair<string, string>("EndOfCreateTime", *request->endOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startOfCreateTime)) {
    query->insert(pair<string, string>("StartOfCreateTime", *request->startOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMediaInfoJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMediaInfoJobsResponse(callApi(params, req, runtime));
}

ListMediaInfoJobsResponse Alibabacloud_ICE20201109::Client::listMediaInfoJobs(shared_ptr<ListMediaInfoJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaInfoJobsWithOptions(request, runtime);
}

ListMediaMarksResponse Alibabacloud_ICE20201109::Client::listMediaMarksWithOptions(shared_ptr<ListMediaMarksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaMarkIds)) {
    query->insert(pair<string, string>("MediaMarkIds", *request->mediaMarkIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMediaMarks"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMediaMarksResponse(callApi(params, req, runtime));
}

ListMediaMarksResponse Alibabacloud_ICE20201109::Client::listMediaMarks(shared_ptr<ListMediaMarksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaMarksWithOptions(request, runtime);
}

ListMediaProducingJobsResponse Alibabacloud_ICE20201109::Client::listMediaProducingJobsWithOptions(shared_ptr<ListMediaProducingJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    query->insert(pair<string, string>("JobType", *request->jobType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterJobId)) {
    query->insert(pair<string, string>("MasterJobId", *request->masterJobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMediaProducingJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMediaProducingJobsResponse(callApi(params, req, runtime));
}

ListMediaProducingJobsResponse Alibabacloud_ICE20201109::Client::listMediaProducingJobs(shared_ptr<ListMediaProducingJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaProducingJobsWithOptions(request, runtime);
}

ListPackageJobsResponse Alibabacloud_ICE20201109::Client::listPackageJobsWithOptions(shared_ptr<ListPackageJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endOfCreateTime)) {
    query->insert(pair<string, string>("EndOfCreateTime", *request->endOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startOfCreateTime)) {
    query->insert(pair<string, string>("StartOfCreateTime", *request->startOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPackageJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPackageJobsResponse(callApi(params, req, runtime));
}

ListPackageJobsResponse Alibabacloud_ICE20201109::Client::listPackageJobs(shared_ptr<ListPackageJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPackageJobsWithOptions(request, runtime);
}

ListPipelinesResponse Alibabacloud_ICE20201109::Client::listPipelinesWithOptions(shared_ptr<ListPipelinesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->speed)) {
    query->insert(pair<string, string>("Speed", *request->speed));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPipelines"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPipelinesResponse(callApi(params, req, runtime));
}

ListPipelinesResponse Alibabacloud_ICE20201109::Client::listPipelines(shared_ptr<ListPipelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPipelinesWithOptions(request, runtime);
}

ListPublicMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listPublicMediaBasicInfosWithOptions(shared_ptr<ListPublicMediaBasicInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeFileBasicInfo)) {
    query->insert(pair<string, bool>("IncludeFileBasicInfo", *request->includeFileBasicInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaTagId)) {
    query->insert(pair<string, string>("MediaTagId", *request->mediaTagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPublicMediaBasicInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPublicMediaBasicInfosResponse(callApi(params, req, runtime));
}

ListPublicMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listPublicMediaBasicInfos(shared_ptr<ListPublicMediaBasicInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPublicMediaBasicInfosWithOptions(request, runtime);
}

ListSmartJobsResponse Alibabacloud_ICE20201109::Client::listSmartJobsWithOptions(shared_ptr<ListSmartJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSmartJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSmartJobsResponse(callApi(params, req, runtime));
}

ListSmartJobsResponse Alibabacloud_ICE20201109::Client::listSmartJobs(shared_ptr<ListSmartJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSmartJobsWithOptions(request, runtime);
}

ListSmartSysAvatarModelsResponse Alibabacloud_ICE20201109::Client::listSmartSysAvatarModelsWithOptions(shared_ptr<ListSmartSysAvatarModelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sdkVersion)) {
    query->insert(pair<string, string>("SdkVersion", *request->sdkVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSmartSysAvatarModels"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSmartSysAvatarModelsResponse(callApi(params, req, runtime));
}

ListSmartSysAvatarModelsResponse Alibabacloud_ICE20201109::Client::listSmartSysAvatarModels(shared_ptr<ListSmartSysAvatarModelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSmartSysAvatarModelsWithOptions(request, runtime);
}

ListSmartVoiceGroupsResponse Alibabacloud_ICE20201109::Client::listSmartVoiceGroupsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSmartVoiceGroups"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSmartVoiceGroupsResponse(callApi(params, req, runtime));
}

ListSmartVoiceGroupsResponse Alibabacloud_ICE20201109::Client::listSmartVoiceGroups() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSmartVoiceGroupsWithOptions(runtime);
}

ListSnapshotJobsResponse Alibabacloud_ICE20201109::Client::listSnapshotJobsWithOptions(shared_ptr<ListSnapshotJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endOfCreateTime)) {
    query->insert(pair<string, string>("EndOfCreateTime", *request->endOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startOfCreateTime)) {
    query->insert(pair<string, string>("StartOfCreateTime", *request->startOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSnapshotJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSnapshotJobsResponse(callApi(params, req, runtime));
}

ListSnapshotJobsResponse Alibabacloud_ICE20201109::Client::listSnapshotJobs(shared_ptr<ListSnapshotJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSnapshotJobsWithOptions(request, runtime);
}

ListSystemTemplatesResponse Alibabacloud_ICE20201109::Client::listSystemTemplatesWithOptions(shared_ptr<ListSystemTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subtype)) {
    query->insert(pair<string, string>("Subtype", *request->subtype));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSystemTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSystemTemplatesResponse(callApi(params, req, runtime));
}

ListSystemTemplatesResponse Alibabacloud_ICE20201109::Client::listSystemTemplates(shared_ptr<ListSystemTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSystemTemplatesWithOptions(request, runtime);
}

ListTemplatesResponse Alibabacloud_ICE20201109::Client::listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createSource)) {
    query->insert(pair<string, string>("CreateSource", *request->createSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortType)) {
    query->insert(pair<string, string>("SortType", *request->sortType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTemplatesResponse(callApi(params, req, runtime));
}

ListTemplatesResponse Alibabacloud_ICE20201109::Client::listTemplates(shared_ptr<ListTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTemplatesWithOptions(request, runtime);
}

ListTranscodeJobsResponse Alibabacloud_ICE20201109::Client::listTranscodeJobsWithOptions(shared_ptr<ListTranscodeJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endOfCreateTime)) {
    query->insert(pair<string, string>("EndOfCreateTime", *request->endOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentJobId)) {
    query->insert(pair<string, string>("ParentJobId", *request->parentJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startOfCreateTime)) {
    query->insert(pair<string, string>("StartOfCreateTime", *request->startOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTranscodeJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTranscodeJobsResponse(callApi(params, req, runtime));
}

ListTranscodeJobsResponse Alibabacloud_ICE20201109::Client::listTranscodeJobs(shared_ptr<ListTranscodeJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTranscodeJobsWithOptions(request, runtime);
}

QueryDNAJobListResponse Alibabacloud_ICE20201109::Client::queryDNAJobListWithOptions(shared_ptr<QueryDNAJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobIds)) {
    query->insert(pair<string, string>("JobIds", *request->jobIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDNAJobList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDNAJobListResponse(callApi(params, req, runtime));
}

QueryDNAJobListResponse Alibabacloud_ICE20201109::Client::queryDNAJobList(shared_ptr<QueryDNAJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDNAJobListWithOptions(request, runtime);
}

QueryIProductionJobResponse Alibabacloud_ICE20201109::Client::queryIProductionJobWithOptions(shared_ptr<QueryIProductionJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryIProductionJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryIProductionJobResponse(callApi(params, req, runtime));
}

QueryIProductionJobResponse Alibabacloud_ICE20201109::Client::queryIProductionJob(shared_ptr<QueryIProductionJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryIProductionJobWithOptions(request, runtime);
}

QueryMediaCensorJobDetailResponse Alibabacloud_ICE20201109::Client::queryMediaCensorJobDetailWithOptions(shared_ptr<QueryMediaCensorJobDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maximumPageSize)) {
    query->insert(pair<string, long>("MaximumPageSize", *request->maximumPageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMediaCensorJobDetail"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMediaCensorJobDetailResponse(callApi(params, req, runtime));
}

QueryMediaCensorJobDetailResponse Alibabacloud_ICE20201109::Client::queryMediaCensorJobDetail(shared_ptr<QueryMediaCensorJobDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMediaCensorJobDetailWithOptions(request, runtime);
}

QueryMediaCensorJobListResponse Alibabacloud_ICE20201109::Client::queryMediaCensorJobListWithOptions(shared_ptr<QueryMediaCensorJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endOfJobCreatedTimeRange)) {
    query->insert(pair<string, string>("EndOfJobCreatedTimeRange", *request->endOfJobCreatedTimeRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobIds)) {
    query->insert(pair<string, string>("JobIds", *request->jobIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maximumPageSize)) {
    query->insert(pair<string, long>("MaximumPageSize", *request->maximumPageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startOfJobCreatedTimeRange)) {
    query->insert(pair<string, string>("StartOfJobCreatedTimeRange", *request->startOfJobCreatedTimeRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMediaCensorJobList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMediaCensorJobListResponse(callApi(params, req, runtime));
}

QueryMediaCensorJobListResponse Alibabacloud_ICE20201109::Client::queryMediaCensorJobList(shared_ptr<QueryMediaCensorJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMediaCensorJobListWithOptions(request, runtime);
}

QueryMediaIndexJobResponse Alibabacloud_ICE20201109::Client::queryMediaIndexJobWithOptions(shared_ptr<QueryMediaIndexJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMediaIndexJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMediaIndexJobResponse(callApi(params, req, runtime));
}

QueryMediaIndexJobResponse Alibabacloud_ICE20201109::Client::queryMediaIndexJob(shared_ptr<QueryMediaIndexJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMediaIndexJobWithOptions(request, runtime);
}

QuerySearchIndexResponse Alibabacloud_ICE20201109::Client::querySearchIndexWithOptions(shared_ptr<QuerySearchIndexRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexType)) {
    query->insert(pair<string, string>("IndexType", *request->indexType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySearchIndex"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySearchIndexResponse(callApi(params, req, runtime));
}

QuerySearchIndexResponse Alibabacloud_ICE20201109::Client::querySearchIndex(shared_ptr<QuerySearchIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySearchIndexWithOptions(request, runtime);
}

QuerySearchLibResponse Alibabacloud_ICE20201109::Client::querySearchLibWithOptions(shared_ptr<QuerySearchLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySearchLib"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySearchLibResponse(callApi(params, req, runtime));
}

QuerySearchLibResponse Alibabacloud_ICE20201109::Client::querySearchLib(shared_ptr<QuerySearchLibRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySearchLibWithOptions(request, runtime);
}

QuerySmarttagJobResponse Alibabacloud_ICE20201109::Client::querySmarttagJobWithOptions(shared_ptr<QuerySmarttagJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySmarttagJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySmarttagJobResponse(callApi(params, req, runtime));
}

QuerySmarttagJobResponse Alibabacloud_ICE20201109::Client::querySmarttagJob(shared_ptr<QuerySmarttagJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySmarttagJobWithOptions(request, runtime);
}

RefreshUploadMediaResponse Alibabacloud_ICE20201109::Client::refreshUploadMediaWithOptions(shared_ptr<RefreshUploadMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshUploadMedia"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshUploadMediaResponse(callApi(params, req, runtime));
}

RefreshUploadMediaResponse Alibabacloud_ICE20201109::Client::refreshUploadMedia(shared_ptr<RefreshUploadMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshUploadMediaWithOptions(request, runtime);
}

RegisterMediaInfoResponse Alibabacloud_ICE20201109::Client::registerMediaInfoWithOptions(shared_ptr<RegisterMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cateId)) {
    query->insert(pair<string, long>("CateId", *request->cateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverURL)) {
    query->insert(pair<string, string>("CoverURL", *request->coverURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputURL)) {
    query->insert(pair<string, string>("InputURL", *request->inputURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaTags)) {
    query->insert(pair<string, string>("MediaTags", *request->mediaTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    query->insert(pair<string, string>("MediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->overwrite)) {
    query->insert(pair<string, bool>("Overwrite", *request->overwrite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceId)) {
    query->insert(pair<string, string>("ReferenceId", *request->referenceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerConfig)) {
    query->insert(pair<string, string>("RegisterConfig", *request->registerConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smartTagTemplateId)) {
    query->insert(pair<string, string>("SmartTagTemplateId", *request->smartTagTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowId)) {
    query->insert(pair<string, string>("WorkflowId", *request->workflowId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterMediaInfoResponse(callApi(params, req, runtime));
}

RegisterMediaInfoResponse Alibabacloud_ICE20201109::Client::registerMediaInfo(shared_ptr<RegisterMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerMediaInfoWithOptions(request, runtime);
}

RegisterMediaStreamResponse Alibabacloud_ICE20201109::Client::registerMediaStreamWithOptions(shared_ptr<RegisterMediaStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputURL)) {
    query->insert(pair<string, string>("InputURL", *request->inputURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterMediaStream"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterMediaStreamResponse(callApi(params, req, runtime));
}

RegisterMediaStreamResponse Alibabacloud_ICE20201109::Client::registerMediaStream(shared_ptr<RegisterMediaStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerMediaStreamWithOptions(request, runtime);
}

SearchEditingProjectResponse Alibabacloud_ICE20201109::Client::searchEditingProjectWithOptions(shared_ptr<SearchEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createSource)) {
    query->insert(pair<string, string>("CreateSource", *request->createSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectType)) {
    query->insert(pair<string, string>("ProjectType", *request->projectType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchEditingProject"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchEditingProjectResponse(callApi(params, req, runtime));
}

SearchEditingProjectResponse Alibabacloud_ICE20201109::Client::searchEditingProject(shared_ptr<SearchEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchEditingProjectWithOptions(request, runtime);
}

SearchMediaResponse Alibabacloud_ICE20201109::Client::searchMediaWithOptions(shared_ptr<SearchMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->match)) {
    query->insert(pair<string, string>("Match", *request->match));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scrollToken)) {
    query->insert(pair<string, string>("ScrollToken", *request->scrollToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchMedia"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchMediaResponse(callApi(params, req, runtime));
}

SearchMediaResponse Alibabacloud_ICE20201109::Client::searchMedia(shared_ptr<SearchMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMediaWithOptions(request, runtime);
}

SearchMediaByAILabelResponse Alibabacloud_ICE20201109::Client::searchMediaByAILabelWithOptions(shared_ptr<SearchMediaByAILabelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    query->insert(pair<string, string>("MediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->multimodalSearchType)) {
    query->insert(pair<string, string>("MultimodalSearchType", *request->multimodalSearchType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->specificSearch)) {
    query->insert(pair<string, bool>("SpecificSearch", *request->specificSearch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchMediaByAILabel"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchMediaByAILabelResponse(callApi(params, req, runtime));
}

SearchMediaByAILabelResponse Alibabacloud_ICE20201109::Client::searchMediaByAILabel(shared_ptr<SearchMediaByAILabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMediaByAILabelWithOptions(request, runtime);
}

SearchMediaByFaceResponse Alibabacloud_ICE20201109::Client::searchMediaByFaceWithOptions(shared_ptr<SearchMediaByFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceSearchToken)) {
    query->insert(pair<string, string>("FaceSearchToken", *request->faceSearchToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    query->insert(pair<string, string>("MediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->personImageUrl)) {
    query->insert(pair<string, string>("PersonImageUrl", *request->personImageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchMediaByFace"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchMediaByFaceResponse(callApi(params, req, runtime));
}

SearchMediaByFaceResponse Alibabacloud_ICE20201109::Client::searchMediaByFace(shared_ptr<SearchMediaByFaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMediaByFaceWithOptions(request, runtime);
}

SearchMediaByHybridResponse Alibabacloud_ICE20201109::Client::searchMediaByHybridWithOptions(shared_ptr<SearchMediaByHybridRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    query->insert(pair<string, string>("MediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchMediaByHybrid"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchMediaByHybridResponse(callApi(params, req, runtime));
}

SearchMediaByHybridResponse Alibabacloud_ICE20201109::Client::searchMediaByHybrid(shared_ptr<SearchMediaByHybridRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMediaByHybridWithOptions(request, runtime);
}

SearchMediaByMultimodalResponse Alibabacloud_ICE20201109::Client::searchMediaByMultimodalWithOptions(shared_ptr<SearchMediaByMultimodalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    query->insert(pair<string, string>("MediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchMediaByMultimodal"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchMediaByMultimodalResponse(callApi(params, req, runtime));
}

SearchMediaByMultimodalResponse Alibabacloud_ICE20201109::Client::searchMediaByMultimodal(shared_ptr<SearchMediaByMultimodalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMediaByMultimodalWithOptions(request, runtime);
}

SearchMediaClipByFaceResponse Alibabacloud_ICE20201109::Client::searchMediaClipByFaceWithOptions(shared_ptr<SearchMediaClipByFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceSearchToken)) {
    query->insert(pair<string, string>("FaceSearchToken", *request->faceSearchToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchMediaClipByFace"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchMediaClipByFaceResponse(callApi(params, req, runtime));
}

SearchMediaClipByFaceResponse Alibabacloud_ICE20201109::Client::searchMediaClipByFace(shared_ptr<SearchMediaClipByFaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMediaClipByFaceWithOptions(request, runtime);
}

SearchPublicMediaInfoResponse Alibabacloud_ICE20201109::Client::searchPublicMediaInfoWithOptions(shared_ptr<SearchPublicMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->authorized)) {
    query->insert(pair<string, bool>("Authorized", *request->authorized));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dynamicMetaDataMatchFields)) {
    query->insert(pair<string, string>("DynamicMetaDataMatchFields", *request->dynamicMetaDataMatchFields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->favorite)) {
    query->insert(pair<string, bool>("Favorite", *request->favorite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaIds)) {
    query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchPublicMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchPublicMediaInfoResponse(callApi(params, req, runtime));
}

SearchPublicMediaInfoResponse Alibabacloud_ICE20201109::Client::searchPublicMediaInfo(shared_ptr<SearchPublicMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchPublicMediaInfoWithOptions(request, runtime);
}

SendLiveSnapshotJobCommandResponse Alibabacloud_ICE20201109::Client::sendLiveSnapshotJobCommandWithOptions(shared_ptr<SendLiveSnapshotJobCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    body->insert(pair<string, string>("Command", *request->command));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendLiveSnapshotJobCommand"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendLiveSnapshotJobCommandResponse(callApi(params, req, runtime));
}

SendLiveSnapshotJobCommandResponse Alibabacloud_ICE20201109::Client::sendLiveSnapshotJobCommand(shared_ptr<SendLiveSnapshotJobCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendLiveSnapshotJobCommandWithOptions(request, runtime);
}

SendLiveTranscodeJobCommandResponse Alibabacloud_ICE20201109::Client::sendLiveTranscodeJobCommandWithOptions(shared_ptr<SendLiveTranscodeJobCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    query->insert(pair<string, string>("Command", *request->command));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendLiveTranscodeJobCommand"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendLiveTranscodeJobCommandResponse(callApi(params, req, runtime));
}

SendLiveTranscodeJobCommandResponse Alibabacloud_ICE20201109::Client::sendLiveTranscodeJobCommand(shared_ptr<SendLiveTranscodeJobCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendLiveTranscodeJobCommandWithOptions(request, runtime);
}

SetContentAnalyzeConfigResponse Alibabacloud_ICE20201109::Client::setContentAnalyzeConfigWithOptions(shared_ptr<SetContentAnalyzeConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->auto_)) {
    query->insert(pair<string, bool>("Auto_", *request->auto_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saveType)) {
    query->insert(pair<string, string>("SaveType", *request->saveType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetContentAnalyzeConfig"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetContentAnalyzeConfigResponse(callApi(params, req, runtime));
}

SetContentAnalyzeConfigResponse Alibabacloud_ICE20201109::Client::setContentAnalyzeConfig(shared_ptr<SetContentAnalyzeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setContentAnalyzeConfigWithOptions(request, runtime);
}

SetDefaultCustomTemplateResponse Alibabacloud_ICE20201109::Client::setDefaultCustomTemplateWithOptions(shared_ptr<SetDefaultCustomTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDefaultCustomTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDefaultCustomTemplateResponse(callApi(params, req, runtime));
}

SetDefaultCustomTemplateResponse Alibabacloud_ICE20201109::Client::setDefaultCustomTemplate(shared_ptr<SetDefaultCustomTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDefaultCustomTemplateWithOptions(request, runtime);
}

SetDefaultStorageLocationResponse Alibabacloud_ICE20201109::Client::setDefaultStorageLocationWithOptions(shared_ptr<SetDefaultStorageLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucket)) {
    query->insert(pair<string, string>("Bucket", *request->bucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageType)) {
    query->insert(pair<string, string>("StorageType", *request->storageType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDefaultStorageLocation"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDefaultStorageLocationResponse(callApi(params, req, runtime));
}

SetDefaultStorageLocationResponse Alibabacloud_ICE20201109::Client::setDefaultStorageLocation(shared_ptr<SetDefaultStorageLocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDefaultStorageLocationWithOptions(request, runtime);
}

SetEventCallbackResponse Alibabacloud_ICE20201109::Client::setEventCallbackWithOptions(shared_ptr<SetEventCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    query->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSwitch)) {
    query->insert(pair<string, string>("AuthSwitch", *request->authSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackQueueName)) {
    query->insert(pair<string, string>("CallbackQueueName", *request->callbackQueueName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackType)) {
    query->insert(pair<string, string>("CallbackType", *request->callbackType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackURL)) {
    query->insert(pair<string, string>("CallbackURL", *request->callbackURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventTypeList)) {
    query->insert(pair<string, string>("EventTypeList", *request->eventTypeList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetEventCallback"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetEventCallbackResponse(callApi(params, req, runtime));
}

SetEventCallbackResponse Alibabacloud_ICE20201109::Client::setEventCallback(shared_ptr<SetEventCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setEventCallbackWithOptions(request, runtime);
}

StartWorkflowResponse Alibabacloud_ICE20201109::Client::startWorkflowWithOptions(shared_ptr<StartWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskInput)) {
    query->insert(pair<string, string>("TaskInput", *request->taskInput));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowId)) {
    query->insert(pair<string, string>("WorkflowId", *request->workflowId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartWorkflow"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartWorkflowResponse(callApi(params, req, runtime));
}

StartWorkflowResponse Alibabacloud_ICE20201109::Client::startWorkflow(shared_ptr<StartWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startWorkflowWithOptions(request, runtime);
}

SubmitASRJobResponse Alibabacloud_ICE20201109::Client::submitASRJobWithOptions(shared_ptr<SubmitASRJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->duration)) {
    query->insert(pair<string, string>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputFile)) {
    query->insert(pair<string, string>("InputFile", *request->inputFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitASRJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitASRJobResponse(callApi(params, req, runtime));
}

SubmitASRJobResponse Alibabacloud_ICE20201109::Client::submitASRJob(shared_ptr<SubmitASRJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitASRJobWithOptions(request, runtime);
}

SubmitAudioProduceJobResponse Alibabacloud_ICE20201109::Client::submitAudioProduceJobWithOptions(shared_ptr<SubmitAudioProduceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->editingConfig)) {
    query->insert(pair<string, string>("EditingConfig", *request->editingConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputConfig)) {
    query->insert(pair<string, string>("InputConfig", *request->inputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->overwrite)) {
    query->insert(pair<string, bool>("Overwrite", *request->overwrite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitAudioProduceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitAudioProduceJobResponse(callApi(params, req, runtime));
}

SubmitAudioProduceJobResponse Alibabacloud_ICE20201109::Client::submitAudioProduceJob(shared_ptr<SubmitAudioProduceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAudioProduceJobWithOptions(request, runtime);
}

SubmitAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::submitAvatarTrainingJobWithOptions(shared_ptr<SubmitAvatarTrainingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitAvatarTrainingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitAvatarTrainingJobResponse(callApi(params, req, runtime));
}

SubmitAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::submitAvatarTrainingJob(shared_ptr<SubmitAvatarTrainingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAvatarTrainingJobWithOptions(request, runtime);
}

SubmitAvatarVideoJobResponse Alibabacloud_ICE20201109::Client::submitAvatarVideoJobWithOptions(shared_ptr<SubmitAvatarVideoJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->editingConfig)) {
    query->insert(pair<string, string>("EditingConfig", *request->editingConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputConfig)) {
    query->insert(pair<string, string>("InputConfig", *request->inputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitAvatarVideoJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitAvatarVideoJobResponse(callApi(params, req, runtime));
}

SubmitAvatarVideoJobResponse Alibabacloud_ICE20201109::Client::submitAvatarVideoJob(shared_ptr<SubmitAvatarVideoJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAvatarVideoJobWithOptions(request, runtime);
}

SubmitBatchMediaProducingJobResponse Alibabacloud_ICE20201109::Client::submitBatchMediaProducingJobWithOptions(shared_ptr<SubmitBatchMediaProducingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->editingConfig)) {
    body->insert(pair<string, string>("EditingConfig", *request->editingConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputConfig)) {
    body->insert(pair<string, string>("InputConfig", *request->inputConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitBatchMediaProducingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitBatchMediaProducingJobResponse(callApi(params, req, runtime));
}

SubmitBatchMediaProducingJobResponse Alibabacloud_ICE20201109::Client::submitBatchMediaProducingJob(shared_ptr<SubmitBatchMediaProducingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitBatchMediaProducingJobWithOptions(request, runtime);
}

SubmitCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::submitCustomizedVoiceJobWithOptions(shared_ptr<SubmitCustomizedVoiceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->demoAudioMediaURL)) {
    query->insert(pair<string, string>("DemoAudioMediaURL", *request->demoAudioMediaURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceId)) {
    query->insert(pair<string, string>("VoiceId", *request->voiceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitCustomizedVoiceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitCustomizedVoiceJobResponse(callApi(params, req, runtime));
}

SubmitCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::submitCustomizedVoiceJob(shared_ptr<SubmitCustomizedVoiceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitCustomizedVoiceJobWithOptions(request, runtime);
}

SubmitDNAJobResponse Alibabacloud_ICE20201109::Client::submitDNAJobWithOptions(shared_ptr<SubmitDNAJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitDNAJobShrinkRequest> request = make_shared<SubmitDNAJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitDNAJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    query->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBId)) {
    query->insert(pair<string, string>("DBId", *request->DBId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->primaryKey)) {
    query->insert(pair<string, string>("PrimaryKey", *request->primaryKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDNAJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitDNAJobResponse(callApi(params, req, runtime));
}

SubmitDNAJobResponse Alibabacloud_ICE20201109::Client::submitDNAJob(shared_ptr<SubmitDNAJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitDNAJobWithOptions(request, runtime);
}

SubmitDynamicChartJobResponse Alibabacloud_ICE20201109::Client::submitDynamicChartJobWithOptions(shared_ptr<SubmitDynamicChartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->axisParams)) {
    query->insert(pair<string, string>("AxisParams", *request->axisParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->background)) {
    query->insert(pair<string, string>("Background", *request->background));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chartConfig)) {
    query->insert(pair<string, string>("ChartConfig", *request->chartConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chartTitle)) {
    query->insert(pair<string, string>("ChartTitle", *request->chartTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chartType)) {
    query->insert(pair<string, string>("ChartType", *request->chartType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSource)) {
    query->insert(pair<string, string>("DataSource", *request->dataSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->input)) {
    query->insert(pair<string, string>("Input", *request->input));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subtitle)) {
    query->insert(pair<string, string>("Subtitle", *request->subtitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unit)) {
    query->insert(pair<string, string>("Unit", *request->unit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDynamicChartJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitDynamicChartJobResponse(callApi(params, req, runtime));
}

SubmitDynamicChartJobResponse Alibabacloud_ICE20201109::Client::submitDynamicChartJob(shared_ptr<SubmitDynamicChartJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitDynamicChartJobWithOptions(request, runtime);
}

SubmitDynamicImageJobResponse Alibabacloud_ICE20201109::Client::submitDynamicImageJobWithOptions(shared_ptr<SubmitDynamicImageJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitDynamicImageJobShrinkRequest> request = make_shared<SubmitDynamicImageJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitDynamicImageJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitDynamicImageJobRequestOutput>(tmpReq->output)) {
    request->outputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->output, make_shared<string>("Output"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitDynamicImageJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfig, make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitDynamicImageJobRequestTemplateConfig>(tmpReq->templateConfig)) {
    request->templateConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->templateConfig, make_shared<string>("TemplateConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputShrink)) {
    query->insert(pair<string, string>("Output", *request->outputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfigShrink)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDynamicImageJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitDynamicImageJobResponse(callApi(params, req, runtime));
}

SubmitDynamicImageJobResponse Alibabacloud_ICE20201109::Client::submitDynamicImageJob(shared_ptr<SubmitDynamicImageJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitDynamicImageJobWithOptions(request, runtime);
}

SubmitIProductionJobResponse Alibabacloud_ICE20201109::Client::submitIProductionJobWithOptions(shared_ptr<SubmitIProductionJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitIProductionJobShrinkRequest> request = make_shared<SubmitIProductionJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitIProductionJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitIProductionJobRequestOutput>(tmpReq->output)) {
    request->outputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->output, make_shared<string>("Output"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitIProductionJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfig, make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionName)) {
    query->insert(pair<string, string>("FunctionName", *request->functionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobParams)) {
    query->insert(pair<string, string>("JobParams", *request->jobParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputShrink)) {
    query->insert(pair<string, string>("Output", *request->outputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitIProductionJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitIProductionJobResponse(callApi(params, req, runtime));
}

SubmitIProductionJobResponse Alibabacloud_ICE20201109::Client::submitIProductionJob(shared_ptr<SubmitIProductionJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitIProductionJobWithOptions(request, runtime);
}

SubmitLiveEditingJobResponse Alibabacloud_ICE20201109::Client::submitLiveEditingJobWithOptions(shared_ptr<SubmitLiveEditingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clips)) {
    query->insert(pair<string, string>("Clips", *request->clips));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveStreamConfig)) {
    query->insert(pair<string, string>("LiveStreamConfig", *request->liveStreamConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaProduceConfig)) {
    query->insert(pair<string, string>("MediaProduceConfig", *request->mediaProduceConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputMediaConfig)) {
    query->insert(pair<string, string>("OutputMediaConfig", *request->outputMediaConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputMediaTarget)) {
    query->insert(pair<string, string>("OutputMediaTarget", *request->outputMediaTarget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitLiveEditingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitLiveEditingJobResponse(callApi(params, req, runtime));
}

SubmitLiveEditingJobResponse Alibabacloud_ICE20201109::Client::submitLiveEditingJob(shared_ptr<SubmitLiveEditingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitLiveEditingJobWithOptions(request, runtime);
}

SubmitLiveRecordJobResponse Alibabacloud_ICE20201109::Client::submitLiveRecordJobWithOptions(shared_ptr<SubmitLiveRecordJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitLiveRecordJobShrinkRequest> request = make_shared<SubmitLiveRecordJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitLiveRecordJobRequestRecordOutput>(tmpReq->recordOutput)) {
    request->recordOutputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->recordOutput, make_shared<string>("RecordOutput"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitLiveRecordJobRequestStreamInput>(tmpReq->streamInput)) {
    request->streamInputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->streamInput, make_shared<string>("StreamInput"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyUrl)) {
    body->insert(pair<string, string>("NotifyUrl", *request->notifyUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordOutputShrink)) {
    body->insert(pair<string, string>("RecordOutput", *request->recordOutputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamInputShrink)) {
    body->insert(pair<string, string>("StreamInput", *request->streamInputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitLiveRecordJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitLiveRecordJobResponse(callApi(params, req, runtime));
}

SubmitLiveRecordJobResponse Alibabacloud_ICE20201109::Client::submitLiveRecordJob(shared_ptr<SubmitLiveRecordJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitLiveRecordJobWithOptions(request, runtime);
}

SubmitLiveSnapshotJobResponse Alibabacloud_ICE20201109::Client::submitLiveSnapshotJobWithOptions(shared_ptr<SubmitLiveSnapshotJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitLiveSnapshotJobShrinkRequest> request = make_shared<SubmitLiveSnapshotJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitLiveSnapshotJobRequestSnapshotOutput>(tmpReq->snapshotOutput)) {
    request->snapshotOutputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->snapshotOutput, make_shared<string>("SnapshotOutput"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitLiveSnapshotJobRequestStreamInput>(tmpReq->streamInput)) {
    request->streamInputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->streamInput, make_shared<string>("StreamInput"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackUrl)) {
    body->insert(pair<string, string>("CallbackUrl", *request->callbackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobName)) {
    body->insert(pair<string, string>("JobName", *request->jobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotOutputShrink)) {
    body->insert(pair<string, string>("SnapshotOutput", *request->snapshotOutputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamInputShrink)) {
    body->insert(pair<string, string>("StreamInput", *request->streamInputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitLiveSnapshotJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitLiveSnapshotJobResponse(callApi(params, req, runtime));
}

SubmitLiveSnapshotJobResponse Alibabacloud_ICE20201109::Client::submitLiveSnapshotJob(shared_ptr<SubmitLiveSnapshotJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitLiveSnapshotJobWithOptions(request, runtime);
}

SubmitLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::submitLiveTranscodeJobWithOptions(shared_ptr<SubmitLiveTranscodeJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitLiveTranscodeJobShrinkRequest> request = make_shared<SubmitLiveTranscodeJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitLiveTranscodeJobRequestStreamInput>(tmpReq->streamInput)) {
    request->streamInputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->streamInput, make_shared<string>("StreamInput"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitLiveTranscodeJobRequestTimedConfig>(tmpReq->timedConfig)) {
    request->timedConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->timedConfig, make_shared<string>("TimedConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitLiveTranscodeJobRequestTranscodeOutput>(tmpReq->transcodeOutput)) {
    request->transcodeOutputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->transcodeOutput, make_shared<string>("TranscodeOutput"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startMode)) {
    query->insert(pair<string, long>("StartMode", *request->startMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamInputShrink)) {
    query->insert(pair<string, string>("StreamInput", *request->streamInputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timedConfigShrink)) {
    query->insert(pair<string, string>("TimedConfig", *request->timedConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transcodeOutputShrink)) {
    query->insert(pair<string, string>("TranscodeOutput", *request->transcodeOutputShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitLiveTranscodeJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitLiveTranscodeJobResponse(callApi(params, req, runtime));
}

SubmitLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::submitLiveTranscodeJob(shared_ptr<SubmitLiveTranscodeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitLiveTranscodeJobWithOptions(request, runtime);
}

SubmitMediaAiAnalysisJobResponse Alibabacloud_ICE20201109::Client::submitMediaAiAnalysisJobWithOptions(shared_ptr<SubmitMediaAiAnalysisJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->analysisParams)) {
    query->insert(pair<string, string>("AnalysisParams", *request->analysisParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->input)) {
    query->insert(pair<string, string>("Input", *request->input));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitMediaAiAnalysisJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitMediaAiAnalysisJobResponse(callApi(params, req, runtime));
}

SubmitMediaAiAnalysisJobResponse Alibabacloud_ICE20201109::Client::submitMediaAiAnalysisJob(shared_ptr<SubmitMediaAiAnalysisJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaAiAnalysisJobWithOptions(request, runtime);
}

SubmitMediaCensorJobResponse Alibabacloud_ICE20201109::Client::submitMediaCensorJobWithOptions(shared_ptr<SubmitMediaCensorJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitMediaCensorJobShrinkRequest> request = make_shared<SubmitMediaCensorJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitMediaCensorJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitMediaCensorJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfig, make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->barrages)) {
    query->insert(pair<string, string>("Barrages", *request->barrages));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverImages)) {
    query->insert(pair<string, string>("CoverImages", *request->coverImages));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyUrl)) {
    query->insert(pair<string, string>("NotifyUrl", *request->notifyUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->output)) {
    query->insert(pair<string, string>("Output", *request->output));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitMediaCensorJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitMediaCensorJobResponse(callApi(params, req, runtime));
}

SubmitMediaCensorJobResponse Alibabacloud_ICE20201109::Client::submitMediaCensorJob(shared_ptr<SubmitMediaCensorJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaCensorJobWithOptions(request, runtime);
}

SubmitMediaInfoJobResponse Alibabacloud_ICE20201109::Client::submitMediaInfoJobWithOptions(shared_ptr<SubmitMediaInfoJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitMediaInfoJobShrinkRequest> request = make_shared<SubmitMediaInfoJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitMediaInfoJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitMediaInfoJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfig, make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitMediaInfoJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitMediaInfoJobResponse(callApi(params, req, runtime));
}

SubmitMediaInfoJobResponse Alibabacloud_ICE20201109::Client::submitMediaInfoJob(shared_ptr<SubmitMediaInfoJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaInfoJobWithOptions(request, runtime);
}

SubmitMediaProducingJobResponse Alibabacloud_ICE20201109::Client::submitMediaProducingJobWithOptions(shared_ptr<SubmitMediaProducingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clipsParam)) {
    query->insert(pair<string, string>("ClipsParam", *request->clipsParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->editingProduceConfig)) {
    query->insert(pair<string, string>("EditingProduceConfig", *request->editingProduceConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaMetadata)) {
    query->insert(pair<string, string>("MediaMetadata", *request->mediaMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputMediaConfig)) {
    query->insert(pair<string, string>("OutputMediaConfig", *request->outputMediaConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputMediaTarget)) {
    query->insert(pair<string, string>("OutputMediaTarget", *request->outputMediaTarget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectMetadata)) {
    query->insert(pair<string, string>("ProjectMetadata", *request->projectMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->timeline)) {
    body->insert(pair<string, string>("Timeline", *request->timeline));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitMediaProducingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitMediaProducingJobResponse(callApi(params, req, runtime));
}

SubmitMediaProducingJobResponse Alibabacloud_ICE20201109::Client::submitMediaProducingJob(shared_ptr<SubmitMediaProducingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaProducingJobWithOptions(request, runtime);
}

SubmitPackageJobResponse Alibabacloud_ICE20201109::Client::submitPackageJobWithOptions(shared_ptr<SubmitPackageJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitPackageJobShrinkRequest> request = make_shared<SubmitPackageJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SubmitPackageJobRequestInputs>>(tmpReq->inputs)) {
    request->inputsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inputs, make_shared<string>("Inputs"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitPackageJobRequestOutput>(tmpReq->output)) {
    request->outputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->output, make_shared<string>("Output"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitPackageJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfig, make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputsShrink)) {
    query->insert(pair<string, string>("Inputs", *request->inputsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputShrink)) {
    query->insert(pair<string, string>("Output", *request->outputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitPackageJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitPackageJobResponse(callApi(params, req, runtime));
}

SubmitPackageJobResponse Alibabacloud_ICE20201109::Client::submitPackageJob(shared_ptr<SubmitPackageJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitPackageJobWithOptions(request, runtime);
}

SubmitSmarttagJobResponse Alibabacloud_ICE20201109::Client::submitSmarttagJobWithOptions(shared_ptr<SubmitSmarttagJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitSmarttagJobShrinkRequest> request = make_shared<SubmitSmarttagJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitSmarttagJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitSmarttagJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfig, make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentAddr)) {
    query->insert(pair<string, string>("ContentAddr", *request->contentAddr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentType)) {
    query->insert(pair<string, string>("ContentType", *request->contentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyUrl)) {
    query->insert(pair<string, string>("NotifyUrl", *request->notifyUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSmarttagJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitSmarttagJobResponse(callApi(params, req, runtime));
}

SubmitSmarttagJobResponse Alibabacloud_ICE20201109::Client::submitSmarttagJob(shared_ptr<SubmitSmarttagJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSmarttagJobWithOptions(request, runtime);
}

SubmitSnapshotJobResponse Alibabacloud_ICE20201109::Client::submitSnapshotJobWithOptions(shared_ptr<SubmitSnapshotJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitSnapshotJobShrinkRequest> request = make_shared<SubmitSnapshotJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitSnapshotJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitSnapshotJobRequestOutput>(tmpReq->output)) {
    request->outputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->output, make_shared<string>("Output"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitSnapshotJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfig, make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitSnapshotJobRequestTemplateConfig>(tmpReq->templateConfig)) {
    request->templateConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->templateConfig, make_shared<string>("TemplateConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputShrink)) {
    query->insert(pair<string, string>("Output", *request->outputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfigShrink)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSnapshotJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitSnapshotJobResponse(callApi(params, req, runtime));
}

SubmitSnapshotJobResponse Alibabacloud_ICE20201109::Client::submitSnapshotJob(shared_ptr<SubmitSnapshotJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSnapshotJobWithOptions(request, runtime);
}

SubmitStandardCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::submitStandardCustomizedVoiceJobWithOptions(shared_ptr<SubmitStandardCustomizedVoiceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->audios)) {
    query->insert(pair<string, string>("Audios", *request->audios));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authentication)) {
    query->insert(pair<string, string>("Authentication", *request->authentication));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->demoAudioMediaURL)) {
    query->insert(pair<string, string>("DemoAudioMediaURL", *request->demoAudioMediaURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gender)) {
    query->insert(pair<string, string>("Gender", *request->gender));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceName)) {
    query->insert(pair<string, string>("VoiceName", *request->voiceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitStandardCustomizedVoiceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitStandardCustomizedVoiceJobResponse(callApi(params, req, runtime));
}

SubmitStandardCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::submitStandardCustomizedVoiceJob(shared_ptr<SubmitStandardCustomizedVoiceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitStandardCustomizedVoiceJobWithOptions(request, runtime);
}

SubmitSyncMediaInfoJobResponse Alibabacloud_ICE20201109::Client::submitSyncMediaInfoJobWithOptions(shared_ptr<SubmitSyncMediaInfoJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitSyncMediaInfoJobShrinkRequest> request = make_shared<SubmitSyncMediaInfoJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitSyncMediaInfoJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitSyncMediaInfoJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfig, make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSyncMediaInfoJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitSyncMediaInfoJobResponse(callApi(params, req, runtime));
}

SubmitSyncMediaInfoJobResponse Alibabacloud_ICE20201109::Client::submitSyncMediaInfoJob(shared_ptr<SubmitSyncMediaInfoJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSyncMediaInfoJobWithOptions(request, runtime);
}

SubmitTextGenerateJobResponse Alibabacloud_ICE20201109::Client::submitTextGenerateJobWithOptions(shared_ptr<SubmitTextGenerateJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->generateConfig)) {
    query->insert(pair<string, string>("GenerateConfig", *request->generateConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTextGenerateJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitTextGenerateJobResponse(callApi(params, req, runtime));
}

SubmitTextGenerateJobResponse Alibabacloud_ICE20201109::Client::submitTextGenerateJob(shared_ptr<SubmitTextGenerateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTextGenerateJobWithOptions(request, runtime);
}

SubmitTranscodeJobResponse Alibabacloud_ICE20201109::Client::submitTranscodeJobWithOptions(shared_ptr<SubmitTranscodeJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitTranscodeJobShrinkRequest> request = make_shared<SubmitTranscodeJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SubmitTranscodeJobRequestInputGroup>>(tmpReq->inputGroup)) {
    request->inputGroupShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inputGroup, make_shared<string>("InputGroup"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SubmitTranscodeJobRequestOutputGroup>>(tmpReq->outputGroup)) {
    request->outputGroupShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->outputGroup, make_shared<string>("OutputGroup"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitTranscodeJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfig, make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputGroupShrink)) {
    query->insert(pair<string, string>("InputGroup", *request->inputGroupShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputGroupShrink)) {
    query->insert(pair<string, string>("OutputGroup", *request->outputGroupShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTranscodeJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitTranscodeJobResponse(callApi(params, req, runtime));
}

SubmitTranscodeJobResponse Alibabacloud_ICE20201109::Client::submitTranscodeJob(shared_ptr<SubmitTranscodeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTranscodeJobWithOptions(request, runtime);
}

SubmitVideoTranslationJobResponse Alibabacloud_ICE20201109::Client::submitVideoTranslationJobWithOptions(shared_ptr<SubmitVideoTranslationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->editingConfig)) {
    query->insert(pair<string, string>("EditingConfig", *request->editingConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputConfig)) {
    query->insert(pair<string, string>("InputConfig", *request->inputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitVideoTranslationJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitVideoTranslationJobResponse(callApi(params, req, runtime));
}

SubmitVideoTranslationJobResponse Alibabacloud_ICE20201109::Client::submitVideoTranslationJob(shared_ptr<SubmitVideoTranslationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitVideoTranslationJobWithOptions(request, runtime);
}

UpdateAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::updateAvatarTrainingJobWithOptions(shared_ptr<UpdateAvatarTrainingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarDescription)) {
    query->insert(pair<string, string>("AvatarDescription", *request->avatarDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarName)) {
    query->insert(pair<string, string>("AvatarName", *request->avatarName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portrait)) {
    query->insert(pair<string, string>("Portrait", *request->portrait));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thumbnail)) {
    query->insert(pair<string, string>("Thumbnail", *request->thumbnail));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->transparent)) {
    query->insert(pair<string, bool>("Transparent", *request->transparent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->video)) {
    query->insert(pair<string, string>("Video", *request->video));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAvatarTrainingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAvatarTrainingJobResponse(callApi(params, req, runtime));
}

UpdateAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::updateAvatarTrainingJob(shared_ptr<UpdateAvatarTrainingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAvatarTrainingJobWithOptions(request, runtime);
}

UpdateCategoryResponse Alibabacloud_ICE20201109::Client::updateCategoryWithOptions(shared_ptr<UpdateCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cateId)) {
    query->insert(pair<string, long>("CateId", *request->cateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cateName)) {
    query->insert(pair<string, string>("CateName", *request->cateName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCategory"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCategoryResponse(callApi(params, req, runtime));
}

UpdateCategoryResponse Alibabacloud_ICE20201109::Client::updateCategory(shared_ptr<UpdateCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCategoryWithOptions(request, runtime);
}

UpdateCustomTemplateResponse Alibabacloud_ICE20201109::Client::updateCustomTemplateWithOptions(shared_ptr<UpdateCustomTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfig)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCustomTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCustomTemplateResponse(callApi(params, req, runtime));
}

UpdateCustomTemplateResponse Alibabacloud_ICE20201109::Client::updateCustomTemplate(shared_ptr<UpdateCustomTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCustomTemplateWithOptions(request, runtime);
}

UpdateCustomizedVoiceResponse Alibabacloud_ICE20201109::Client::updateCustomizedVoiceWithOptions(shared_ptr<UpdateCustomizedVoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->demoAudioMediaId)) {
    query->insert(pair<string, string>("DemoAudioMediaId", *request->demoAudioMediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceId)) {
    query->insert(pair<string, string>("VoiceId", *request->voiceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCustomizedVoice"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCustomizedVoiceResponse(callApi(params, req, runtime));
}

UpdateCustomizedVoiceResponse Alibabacloud_ICE20201109::Client::updateCustomizedVoice(shared_ptr<UpdateCustomizedVoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCustomizedVoiceWithOptions(request, runtime);
}

UpdateEditingProjectResponse Alibabacloud_ICE20201109::Client::updateEditingProjectWithOptions(shared_ptr<UpdateEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessStatus)) {
    query->insert(pair<string, string>("BusinessStatus", *request->businessStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clipsParam)) {
    query->insert(pair<string, string>("ClipsParam", *request->clipsParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverURL)) {
    query->insert(pair<string, string>("CoverURL", *request->coverURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->timeline)) {
    body->insert(pair<string, string>("Timeline", *request->timeline));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEditingProject"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEditingProjectResponse(callApi(params, req, runtime));
}

UpdateEditingProjectResponse Alibabacloud_ICE20201109::Client::updateEditingProject(shared_ptr<UpdateEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEditingProjectWithOptions(request, runtime);
}

UpdateLiveRecordTemplateResponse Alibabacloud_ICE20201109::Client::updateLiveRecordTemplateWithOptions(shared_ptr<UpdateLiveRecordTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateLiveRecordTemplateShrinkRequest> request = make_shared<UpdateLiveRecordTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateLiveRecordTemplateRequestRecordFormat>>(tmpReq->recordFormat)) {
    request->recordFormatShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->recordFormat, make_shared<string>("RecordFormat"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordFormatShrink)) {
    body->insert(pair<string, string>("RecordFormat", *request->recordFormatShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveRecordTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveRecordTemplateResponse(callApi(params, req, runtime));
}

UpdateLiveRecordTemplateResponse Alibabacloud_ICE20201109::Client::updateLiveRecordTemplate(shared_ptr<UpdateLiveRecordTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveRecordTemplateWithOptions(request, runtime);
}

UpdateLiveSnapshotTemplateResponse Alibabacloud_ICE20201109::Client::updateLiveSnapshotTemplateWithOptions(shared_ptr<UpdateLiveSnapshotTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->overwriteFormat)) {
    body->insert(pair<string, string>("OverwriteFormat", *request->overwriteFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sequenceFormat)) {
    body->insert(pair<string, string>("SequenceFormat", *request->sequenceFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    body->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeInterval)) {
    body->insert(pair<string, long>("TimeInterval", *request->timeInterval));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveSnapshotTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveSnapshotTemplateResponse(callApi(params, req, runtime));
}

UpdateLiveSnapshotTemplateResponse Alibabacloud_ICE20201109::Client::updateLiveSnapshotTemplate(shared_ptr<UpdateLiveSnapshotTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveSnapshotTemplateWithOptions(request, runtime);
}

UpdateLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::updateLiveTranscodeJobWithOptions(shared_ptr<UpdateLiveTranscodeJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateLiveTranscodeJobShrinkRequest> request = make_shared<UpdateLiveTranscodeJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateLiveTranscodeJobRequestStreamInput>(tmpReq->streamInput)) {
    request->streamInputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->streamInput, make_shared<string>("StreamInput"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateLiveTranscodeJobRequestTimedConfig>(tmpReq->timedConfig)) {
    request->timedConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->timedConfig, make_shared<string>("TimedConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateLiveTranscodeJobRequestTranscodeOutput>(tmpReq->transcodeOutput)) {
    request->transcodeOutputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->transcodeOutput, make_shared<string>("TranscodeOutput"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamInputShrink)) {
    query->insert(pair<string, string>("StreamInput", *request->streamInputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timedConfigShrink)) {
    query->insert(pair<string, string>("TimedConfig", *request->timedConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transcodeOutputShrink)) {
    query->insert(pair<string, string>("TranscodeOutput", *request->transcodeOutputShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveTranscodeJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveTranscodeJobResponse(callApi(params, req, runtime));
}

UpdateLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::updateLiveTranscodeJob(shared_ptr<UpdateLiveTranscodeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveTranscodeJobWithOptions(request, runtime);
}

UpdateLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::updateLiveTranscodeTemplateWithOptions(shared_ptr<UpdateLiveTranscodeTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateLiveTranscodeTemplateShrinkRequest> request = make_shared<UpdateLiveTranscodeTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateLiveTranscodeTemplateRequestTemplateConfig>(tmpReq->templateConfig)) {
    request->templateConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->templateConfig, make_shared<string>("TemplateConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfigShrink)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveTranscodeTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveTranscodeTemplateResponse(callApi(params, req, runtime));
}

UpdateLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::updateLiveTranscodeTemplate(shared_ptr<UpdateLiveTranscodeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveTranscodeTemplateWithOptions(request, runtime);
}

UpdateMediaInfoResponse Alibabacloud_ICE20201109::Client::updateMediaInfoWithOptions(shared_ptr<UpdateMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->appendTags)) {
    query->insert(pair<string, bool>("AppendTags", *request->appendTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cateId)) {
    query->insert(pair<string, long>("CateId", *request->cateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverURL)) {
    query->insert(pair<string, string>("CoverURL", *request->coverURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputURL)) {
    query->insert(pair<string, string>("InputURL", *request->inputURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaTags)) {
    query->insert(pair<string, string>("MediaTags", *request->mediaTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceId)) {
    query->insert(pair<string, string>("ReferenceId", *request->referenceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMediaInfoResponse(callApi(params, req, runtime));
}

UpdateMediaInfoResponse Alibabacloud_ICE20201109::Client::updateMediaInfo(shared_ptr<UpdateMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaInfoWithOptions(request, runtime);
}

UpdateMediaMarksResponse Alibabacloud_ICE20201109::Client::updateMediaMarksWithOptions(shared_ptr<UpdateMediaMarksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaMarks)) {
    query->insert(pair<string, string>("MediaMarks", *request->mediaMarks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMediaMarks"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMediaMarksResponse(callApi(params, req, runtime));
}

UpdateMediaMarksResponse Alibabacloud_ICE20201109::Client::updateMediaMarks(shared_ptr<UpdateMediaMarksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaMarksWithOptions(request, runtime);
}

UpdateMediaToSearchLibResponse Alibabacloud_ICE20201109::Client::updateMediaToSearchLibWithOptions(shared_ptr<UpdateMediaToSearchLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->msgBody)) {
    query->insert(pair<string, string>("MsgBody", *request->msgBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMediaToSearchLib"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMediaToSearchLibResponse(callApi(params, req, runtime));
}

UpdateMediaToSearchLibResponse Alibabacloud_ICE20201109::Client::updateMediaToSearchLib(shared_ptr<UpdateMediaToSearchLibRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaToSearchLibWithOptions(request, runtime);
}

UpdatePipelineResponse Alibabacloud_ICE20201109::Client::updatePipelineWithOptions(shared_ptr<UpdatePipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePipeline"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePipelineResponse(callApi(params, req, runtime));
}

UpdatePipelineResponse Alibabacloud_ICE20201109::Client::updatePipeline(shared_ptr<UpdatePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePipelineWithOptions(request, runtime);
}

UpdateTemplateResponse Alibabacloud_ICE20201109::Client::updateTemplateWithOptions(shared_ptr<UpdateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coverUrl)) {
    query->insert(pair<string, string>("CoverUrl", *request->coverUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->previewMedia)) {
    query->insert(pair<string, string>("PreviewMedia", *request->previewMedia));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedMediaids)) {
    query->insert(pair<string, string>("RelatedMediaids", *request->relatedMediaids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTemplateResponse(callApi(params, req, runtime));
}

UpdateTemplateResponse Alibabacloud_ICE20201109::Client::updateTemplate(shared_ptr<UpdateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTemplateWithOptions(request, runtime);
}

UploadMediaByURLResponse Alibabacloud_ICE20201109::Client::uploadMediaByURLWithOptions(shared_ptr<UploadMediaByURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaMetaData)) {
    query->insert(pair<string, string>("MediaMetaData", *request->mediaMetaData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postProcessConfig)) {
    query->insert(pair<string, string>("PostProcessConfig", *request->postProcessConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadTargetConfig)) {
    query->insert(pair<string, string>("UploadTargetConfig", *request->uploadTargetConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadURLs)) {
    query->insert(pair<string, string>("UploadURLs", *request->uploadURLs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadMediaByURL"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadMediaByURLResponse(callApi(params, req, runtime));
}

UploadMediaByURLResponse Alibabacloud_ICE20201109::Client::uploadMediaByURL(shared_ptr<UploadMediaByURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadMediaByURLWithOptions(request, runtime);
}

UploadStreamByURLResponse Alibabacloud_ICE20201109::Client::uploadStreamByURLWithOptions(shared_ptr<UploadStreamByURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->definition)) {
    query->insert(pair<string, string>("Definition", *request->definition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileExtension)) {
    query->insert(pair<string, string>("FileExtension", *request->fileExtension));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->HDRType)) {
    query->insert(pair<string, string>("HDRType", *request->HDRType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamURL)) {
    query->insert(pair<string, string>("StreamURL", *request->streamURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadStreamByURL"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadStreamByURLResponse(callApi(params, req, runtime));
}

UploadStreamByURLResponse Alibabacloud_ICE20201109::Client::uploadStreamByURL(shared_ptr<UploadStreamByURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadStreamByURLWithOptions(request, runtime);
}

