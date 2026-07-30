#include <darabonba/Core.hpp>
#include <alibabacloud/Yike20260707.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Yike20260707::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Yike20260707
{

AlibabaCloud::Yike20260707::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-shanghai" , "yike.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-1" , "yike.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("yike", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Retrieves information about multiple media assets in a batch.
 *
 * @description ## Request description.
 *
 * @param request BatchGetMediasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetMediasResponse
 */
BatchGetMediasResponse Client::batchGetMediasWithOptions(const BatchGetMediasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.getAuthTimeout();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchGetMedias"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetMediasResponse>();
}

/**
 * @summary Retrieves information about multiple media assets in a batch.
 *
 * @description ## Request description.
 *
 * @param request BatchGetMediasRequest
 * @return BatchGetMediasResponse
 */
BatchGetMediasResponse Client::batchGetMedias(const BatchGetMediasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetMediasWithOptions(request, runtime);
}

/**
 * @summary Creates a media asset category.
 *
 * @description Categories support up to three levels, and each level supports up to 100 subcategories.
 *
 * @param request CreateAssetCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAssetCategoryResponse
 */
CreateAssetCategoryResponse Client::createAssetCategoryWithOptions(const CreateAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryName()) {
    query["CategoryName"] = request.getCategoryName();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAssetCategory"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAssetCategoryResponse>();
}

/**
 * @summary Creates a media asset category.
 *
 * @description Categories support up to three levels, and each level supports up to 100 subcategories.
 *
 * @param request CreateAssetCategoryRequest
 * @return CreateAssetCategoryResponse
 */
CreateAssetCategoryResponse Client::createAssetCategory(const CreateAssetCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAssetCategoryWithOptions(request, runtime);
}

/**
 * @summary Deletes a media asset category.
 *
 * @description This operation also deletes all subcategories (including second-level and third-level categories). Proceed with caution.
 *
 * @param request DeleteAssetCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAssetCategoryResponse
 */
DeleteAssetCategoryResponse Client::deleteAssetCategoryWithOptions(const DeleteAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAssetCategory"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAssetCategoryResponse>();
}

/**
 * @summary Deletes a media asset category.
 *
 * @description This operation also deletes all subcategories (including second-level and third-level categories). Proceed with caution.
 *
 * @param request DeleteAssetCategoryRequest
 * @return DeleteAssetCategoryResponse
 */
DeleteAssetCategoryResponse Client::deleteAssetCategory(const DeleteAssetCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAssetCategoryWithOptions(request, runtime);
}

/**
 * @summary Deletes media asset information.
 *
 * @param request DeleteMediasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMediasResponse
 */
DeleteMediasResponse Client::deleteMediasWithOptions(const DeleteMediasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeletePhysicalFiles()) {
    query["DeletePhysicalFiles"] = request.getDeletePhysicalFiles();
  }

  if (!!request.hasInputURLs()) {
    query["InputURLs"] = request.getInputURLs();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMedias"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMediasResponse>();
}

/**
 * @summary Deletes media asset information.
 *
 * @param request DeleteMediasRequest
 * @return DeleteMediasResponse
 */
DeleteMediasResponse Client::deleteMedias(const DeleteMediasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMediasWithOptions(request, runtime);
}

/**
 * @summary Retrieves the information of a specified category and the list of its subcategories (immediate child categories).
 *
 * @param request GetAssetCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAssetCategoryResponse
 */
GetAssetCategoryResponse Client::getAssetCategoryWithOptions(const GetAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAssetCategory"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAssetCategoryResponse>();
}

/**
 * @summary Retrieves the information of a specified category and the list of its subcategories (immediate child categories).
 *
 * @param request GetAssetCategoryRequest
 * @return GetAssetCategoryResponse
 */
GetAssetCategoryResponse Client::getAssetCategory(const GetAssetCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAssetCategoryWithOptions(request, runtime);
}

/**
 * @summary Queries an image generation task.
 *
 * @param request GetImageGenerationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageGenerationJobResponse
 */
GetImageGenerationJobResponse Client::getImageGenerationJobWithOptions(const GetImageGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImageGenerationJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageGenerationJobResponse>();
}

/**
 * @summary Queries an image generation task.
 *
 * @param request GetImageGenerationJobRequest
 * @return GetImageGenerationJobResponse
 */
GetImageGenerationJobResponse Client::getImageGenerationJob(const GetImageGenerationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageGenerationJobWithOptions(request, runtime);
}

/**
 * @summary 查询媒资
 *
 * @description ## 请求说明
 * 该API用于查询媒资内容理解作业。
 *
 * @param request GetMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaResponse
 */
GetMediaResponse Client::getMediaWithOptions(const GetMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.getAuthTimeout();
  }

  if (!!request.hasInputURL()) {
    query["InputURL"] = request.getInputURL();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMedia"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaResponse>();
}

/**
 * @summary 查询媒资
 *
 * @description ## 请求说明
 * 该API用于查询媒资内容理解作业。
 *
 * @param request GetMediaRequest
 * @return GetMediaResponse
 */
GetMediaResponse Client::getMedia(const GetMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaWithOptions(request, runtime);
}

/**
 * @summary Queries a media asset content understanding job.
 *
 * @description ## Description
 * This API is used to query a media asset content understanding job.
 *
 * @param request GetMediaComprehensionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaComprehensionJobResponse
 */
GetMediaComprehensionJobResponse Client::getMediaComprehensionJobWithOptions(const GetMediaComprehensionJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaComprehensionJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaComprehensionJobResponse>();
}

/**
 * @summary Queries a media asset content understanding job.
 *
 * @description ## Description
 * This API is used to query a media asset content understanding job.
 *
 * @param request GetMediaComprehensionJobRequest
 * @return GetMediaComprehensionJobResponse
 */
GetMediaComprehensionJobResponse Client::getMediaComprehensionJob(const GetMediaComprehensionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaComprehensionJobWithOptions(request, runtime);
}

/**
 * @summary Queries a creative script generation task.
 *
 * @param request GetRemakeScriptJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRemakeScriptJobResponse
 */
GetRemakeScriptJobResponse Client::getRemakeScriptJobWithOptions(const GetRemakeScriptJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRemakeScriptJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRemakeScriptJobResponse>();
}

/**
 * @summary Queries a creative script generation task.
 *
 * @param request GetRemakeScriptJobRequest
 * @return GetRemakeScriptJobResponse
 */
GetRemakeScriptJobResponse Client::getRemakeScriptJob(const GetRemakeScriptJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRemakeScriptJobWithOptions(request, runtime);
}

/**
 * @summary Queries a video generation task.
 *
 * @param request GetVideoGenerationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoGenerationJobResponse
 */
GetVideoGenerationJobResponse Client::getVideoGenerationJobWithOptions(const GetVideoGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoGenerationJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoGenerationJobResponse>();
}

/**
 * @summary Queries a video generation task.
 *
 * @param request GetVideoGenerationJobRequest
 * @return GetVideoGenerationJobResponse
 */
GetVideoGenerationJobResponse Client::getVideoGenerationJob(const GetVideoGenerationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoGenerationJobWithOptions(request, runtime);
}

/**
 * @summary 查询爆款新视频渲染任务
 *
 * @param request GetVideoRenderJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoRenderJobResponse
 */
GetVideoRenderJobResponse Client::getVideoRenderJobWithOptions(const GetVideoRenderJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoRenderJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoRenderJobResponse>();
}

/**
 * @summary 查询爆款新视频渲染任务
 *
 * @param request GetVideoRenderJobRequest
 * @return GetVideoRenderJobResponse
 */
GetVideoRenderJobResponse Client::getVideoRenderJob(const GetVideoRenderJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoRenderJobWithOptions(request, runtime);
}

/**
 * @summary Retrieves the membership plan and credit information for a Yike primary account.
 *
 * @param request GetYikeAccountCreditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYikeAccountCreditResponse
 */
GetYikeAccountCreditResponse Client::getYikeAccountCreditWithOptions(const GetYikeAccountCreditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetYikeAccountCredit"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYikeAccountCreditResponse>();
}

/**
 * @summary Retrieves the membership plan and credit information for a Yike primary account.
 *
 * @param request GetYikeAccountCreditRequest
 * @return GetYikeAccountCreditResponse
 */
GetYikeAccountCreditResponse Client::getYikeAccountCredit(const GetYikeAccountCreditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeAccountCreditWithOptions(request, runtime);
}

/**
 * @summary Queries the actual credit consumption of a task.
 *
 * @param request GetYikeJobCreditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYikeJobCreditResponse
 */
GetYikeJobCreditResponse Client::getYikeJobCreditWithOptions(const GetYikeJobCreditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetYikeJobCredit"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYikeJobCreditResponse>();
}

/**
 * @summary Queries the actual credit consumption of a task.
 *
 * @param request GetYikeJobCreditRequest
 * @return GetYikeJobCreditResponse
 */
GetYikeJobCreditResponse Client::getYikeJobCredit(const GetYikeJobCreditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeJobCreditWithOptions(request, runtime);
}

/**
 * @summary Imports a media asset.
 *
 * @description ## Operation description
 * This API is used to query media content understanding jobs.
 *
 * @param request ImportMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportMediaResponse
 */
ImportMediaResponse Client::importMediaWithOptions(const ImportMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.getCoverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDynamicMetaData()) {
    query["DynamicMetaData"] = request.getDynamicMetaData();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasImportSource()) {
    query["ImportSource"] = request.getImportSource();
  }

  if (!!request.hasInputURL()) {
    query["InputURL"] = request.getInputURL();
  }

  if (!!request.hasMediaTags()) {
    query["MediaTags"] = request.getMediaTags();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasOverwrite()) {
    query["Overwrite"] = request.getOverwrite();
  }

  if (!!request.hasRegisterConfig()) {
    query["RegisterConfig"] = request.getRegisterConfig();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportMedia"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportMediaResponse>();
}

/**
 * @summary Imports a media asset.
 *
 * @description ## Operation description
 * This API is used to query media content understanding jobs.
 *
 * @param request ImportMediaRequest
 * @return ImportMediaResponse
 */
ImportMediaResponse Client::importMedia(const ImportMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importMediaWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of categories.
 *
 * @param request ListAssetCategoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAssetCategoriesResponse
 */
ListAssetCategoriesResponse Client::listAssetCategoriesWithOptions(const ListAssetCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAssetCategories"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAssetCategoriesResponse>();
}

/**
 * @summary Retrieves a paginated list of categories.
 *
 * @param request ListAssetCategoriesRequest
 * @return ListAssetCategoriesResponse
 */
ListAssetCategoriesResponse Client::listAssetCategories(const ListAssetCategoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAssetCategoriesWithOptions(request, runtime);
}

/**
 * @summary Returns media asset information that matches the specified filter conditions.
 *
 * @param request SearchMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMediaResponse
 */
SearchMediaResponse Client::searchMediaWithOptions(const SearchMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasMatch()) {
    query["Match"] = request.getMatch();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScrollToken()) {
    query["ScrollToken"] = request.getScrollToken();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchMedia"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchMediaResponse>();
}

/**
 * @summary Returns media asset information that matches the specified filter conditions.
 *
 * @param request SearchMediaRequest
 * @return SearchMediaResponse
 */
SearchMediaResponse Client::searchMedia(const SearchMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMediaWithOptions(request, runtime);
}

/**
 * @summary Submits an image generation task.
 *
 * @param request SubmitImageGenerationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitImageGenerationJobResponse
 */
SubmitImageGenerationJobResponse Client::submitImageGenerationJobWithOptions(const SubmitImageGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAspectRatio()) {
    query["AspectRatio"] = request.getAspectRatio();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.getInput();
  }

  if (!!request.hasJobParameters()) {
    query["JobParameters"] = request.getJobParameters();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.getJobType();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasN()) {
    query["N"] = request.getN();
  }

  if (!!request.hasResolution()) {
    query["Resolution"] = request.getResolution();
  }

  if (!!request.hasScene()) {
    query["Scene"] = request.getScene();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitImageGenerationJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitImageGenerationJobResponse>();
}

/**
 * @summary Submits an image generation task.
 *
 * @param request SubmitImageGenerationJobRequest
 * @return SubmitImageGenerationJobResponse
 */
SubmitImageGenerationJobResponse Client::submitImageGenerationJob(const SubmitImageGenerationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitImageGenerationJobWithOptions(request, runtime);
}

/**
 * @summary 提交媒资内容理解作业
 *
 * @description ## 请求说明
 * 该API用于根据提供的媒资文件（比如视频链接）进行内容理解。此外，支持通过`UserData`字段传递自定义参数，在回调时原样返回。
 *
 * @param request SubmitMediaComprehensionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitMediaComprehensionJobResponse
 */
SubmitMediaComprehensionJobResponse Client::submitMediaComprehensionJobWithOptions(const SubmitMediaComprehensionJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInput()) {
    query["Input"] = request.getInput();
  }

  if (!!request.hasJobParams()) {
    query["JobParams"] = request.getJobParams();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.getJobType();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitMediaComprehensionJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitMediaComprehensionJobResponse>();
}

/**
 * @summary 提交媒资内容理解作业
 *
 * @description ## 请求说明
 * 该API用于根据提供的媒资文件（比如视频链接）进行内容理解。此外，支持通过`UserData`字段传递自定义参数，在回调时原样返回。
 *
 * @param request SubmitMediaComprehensionJobRequest
 * @return SubmitMediaComprehensionJobResponse
 */
SubmitMediaComprehensionJobResponse Client::submitMediaComprehensionJob(const SubmitMediaComprehensionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMediaComprehensionJobWithOptions(request, runtime);
}

/**
 * @summary 提交爆款复刻新脚本生成任务
 *
 * @description 该 API 用于根据内容理解的结果与新商品/模特信息，仿写生成新的口播脚本。此外，支持通过UserData字段传递自定义参数，在回调时原样返回。
 *
 * @param request SubmitRemakeScriptJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitRemakeScriptJobResponse
 */
SubmitRemakeScriptJobResponse Client::submitRemakeScriptJobWithOptions(const SubmitRemakeScriptJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRemakeParams()) {
    query["RemakeParams"] = request.getRemakeParams();
  }

  if (!!request.hasRemakeType()) {
    query["RemakeType"] = request.getRemakeType();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitRemakeScriptJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitRemakeScriptJobResponse>();
}

/**
 * @summary 提交爆款复刻新脚本生成任务
 *
 * @description 该 API 用于根据内容理解的结果与新商品/模特信息，仿写生成新的口播脚本。此外，支持通过UserData字段传递自定义参数，在回调时原样返回。
 *
 * @param request SubmitRemakeScriptJobRequest
 * @return SubmitRemakeScriptJobResponse
 */
SubmitRemakeScriptJobResponse Client::submitRemakeScriptJob(const SubmitRemakeScriptJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitRemakeScriptJobWithOptions(request, runtime);
}

/**
 * @summary Submits a video generation task.
 *
 * @param request SubmitVideoGenerationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitVideoGenerationJobResponse
 */
SubmitVideoGenerationJobResponse Client::submitVideoGenerationJobWithOptions(const SubmitVideoGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAspectRatio()) {
    query["AspectRatio"] = request.getAspectRatio();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.getInput();
  }

  if (!!request.hasJobParameters()) {
    query["JobParameters"] = request.getJobParameters();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.getJobType();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasN()) {
    query["N"] = request.getN();
  }

  if (!!request.hasResolution()) {
    query["Resolution"] = request.getResolution();
  }

  if (!!request.hasScene()) {
    query["Scene"] = request.getScene();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitVideoGenerationJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitVideoGenerationJobResponse>();
}

/**
 * @summary Submits a video generation task.
 *
 * @param request SubmitVideoGenerationJobRequest
 * @return SubmitVideoGenerationJobResponse
 */
SubmitVideoGenerationJobResponse Client::submitVideoGenerationJob(const SubmitVideoGenerationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitVideoGenerationJobWithOptions(request, runtime);
}

/**
 * @summary 提交爆款新视频渲染任务
 *
 * @param request SubmitVideoRenderJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitVideoRenderJobResponse
 */
SubmitVideoRenderJobResponse Client::submitVideoRenderJobWithOptions(const SubmitVideoRenderJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasScript()) {
    query["Script"] = request.getScript();
  }

  if (!!request.hasSettings()) {
    query["Settings"] = request.getSettings();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitVideoRenderJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitVideoRenderJobResponse>();
}

/**
 * @summary 提交爆款新视频渲染任务
 *
 * @param request SubmitVideoRenderJobRequest
 * @return SubmitVideoRenderJobResponse
 */
SubmitVideoRenderJobResponse Client::submitVideoRenderJob(const SubmitVideoRenderJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitVideoRenderJobWithOptions(request, runtime);
}

/**
 * @summary Submits a video translation task that supports subtitle translation, voice translation, and on-screen text translation.
 *
 * @description ## Request description
 * - This API supports multiple video translation features, including subtitle translation and voice translation.
 * - The `JobType` parameter defines the task type, such as `SubtitleTranslate` and `VoiceTranslate`.
 * - The `Input` and `Output` parameters specify the input resource and output path, respectively.
 * - `JobParameters` contains language configuration and other feature switches, such as `SourceLanguage`, `TargetLanguage`, `NeedDetext`, and `NeedVisualTranslate`.
 * - `EditingConfig` can be used to specify the style configuration for the final editing and compositing.
 * - `ClientToken` is an optional parameter used to ensure the idempotence of the request.
 * - Ensure that all required fields are correctly filled in. Otherwise, the request may fail.
 *
 * @param request SubmitVideoTranslationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitVideoTranslationJobResponse
 */
SubmitVideoTranslationJobResponse Client::submitVideoTranslationJobWithOptions(const SubmitVideoTranslationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInput()) {
    body["Input"] = request.getInput();
  }

  if (!!request.hasJobParameters()) {
    body["JobParameters"] = request.getJobParameters();
  }

  if (!!request.hasJobType()) {
    body["JobType"] = request.getJobType();
  }

  if (!!request.hasOutput()) {
    body["Output"] = request.getOutput();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  if (!!request.hasUserData()) {
    body["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitVideoTranslationJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitVideoTranslationJobResponse>();
}

/**
 * @summary Submits a video translation task that supports subtitle translation, voice translation, and on-screen text translation.
 *
 * @description ## Request description
 * - This API supports multiple video translation features, including subtitle translation and voice translation.
 * - The `JobType` parameter defines the task type, such as `SubtitleTranslate` and `VoiceTranslate`.
 * - The `Input` and `Output` parameters specify the input resource and output path, respectively.
 * - `JobParameters` contains language configuration and other feature switches, such as `SourceLanguage`, `TargetLanguage`, `NeedDetext`, and `NeedVisualTranslate`.
 * - `EditingConfig` can be used to specify the style configuration for the final editing and compositing.
 * - `ClientToken` is an optional parameter used to ensure the idempotence of the request.
 * - Ensure that all required fields are correctly filled in. Otherwise, the request may fail.
 *
 * @param request SubmitVideoTranslationJobRequest
 * @return SubmitVideoTranslationJobResponse
 */
SubmitVideoTranslationJobResponse Client::submitVideoTranslationJob(const SubmitVideoTranslationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitVideoTranslationJobWithOptions(request, runtime);
}

/**
 * @summary Updates a media asset category.
 *
 * @description After you create a media asset category, you can call this operation to locate and update the name of the media asset category by category ID.
 *
 * @param request UpdateAssetCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAssetCategoryResponse
 */
UpdateAssetCategoryResponse Client::updateAssetCategoryWithOptions(const UpdateAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasCategoryName()) {
    query["CategoryName"] = request.getCategoryName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAssetCategory"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAssetCategoryResponse>();
}

/**
 * @summary Updates a media asset category.
 *
 * @description After you create a media asset category, you can call this operation to locate and update the name of the media asset category by category ID.
 *
 * @param request UpdateAssetCategoryRequest
 * @return UpdateAssetCategoryResponse
 */
UpdateAssetCategoryResponse Client::updateAssetCategory(const UpdateAssetCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAssetCategoryWithOptions(request, runtime);
}

/**
 * @summary Updates media asset information.
 *
 * @description ## Request description
 * This API is used to query media content understanding jobs.
 *
 * @param request UpdateMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaResponse
 */
UpdateMediaResponse Client::updateMediaWithOptions(const UpdateMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppendTags()) {
    query["AppendTags"] = request.getAppendTags();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.getCoverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDynamicMetaData()) {
    query["DynamicMetaData"] = request.getDynamicMetaData();
  }

  if (!!request.hasInputURL()) {
    query["InputURL"] = request.getInputURL();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasMediaTags()) {
    query["MediaTags"] = request.getMediaTags();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMedia"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMediaResponse>();
}

/**
 * @summary Updates media asset information.
 *
 * @description ## Request description
 * This API is used to query media content understanding jobs.
 *
 * @param request UpdateMediaRequest
 * @return UpdateMediaResponse
 */
UpdateMediaResponse Client::updateMedia(const UpdateMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Yike20260707