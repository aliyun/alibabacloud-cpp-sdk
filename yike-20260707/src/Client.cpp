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
 * @summary 批量获取媒资信息
 *
 * @description ## 请求说明
 * 该API用于查询媒资内容理解作业。
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
 * @summary 批量获取媒资信息
 *
 * @description ## 请求说明
 * 该API用于查询媒资内容理解作业。
 *
 * @param request BatchGetMediasRequest
 * @return BatchGetMediasResponse
 */
BatchGetMediasResponse Client::batchGetMedias(const BatchGetMediasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetMediasWithOptions(request, runtime);
}

/**
 * @summary 创建分类
 *
 * @description 分类最多支持三级分类，每级分类最多支持创建 100 个子分类。
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
 * @summary 创建分类
 *
 * @description 分类最多支持三级分类，每级分类最多支持创建 100 个子分类。
 *
 * @param request CreateAssetCategoryRequest
 * @return CreateAssetCategoryResponse
 */
CreateAssetCategoryResponse Client::createAssetCategory(const CreateAssetCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAssetCategoryWithOptions(request, runtime);
}

/**
 * @summary 删除分类
 *
 * @description 此接口会同时删除其子分类（包括二级分类和三级分类），请慎重操作。
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
 * @summary 删除分类
 *
 * @description 此接口会同时删除其子分类（包括二级分类和三级分类），请慎重操作。
 *
 * @param request DeleteAssetCategoryRequest
 * @return DeleteAssetCategoryResponse
 */
DeleteAssetCategoryResponse Client::deleteAssetCategory(const DeleteAssetCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAssetCategoryWithOptions(request, runtime);
}

/**
 * @summary 删除媒资信息
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
 * @summary 删除媒资信息
 *
 * @param request DeleteMediasRequest
 * @return DeleteMediasResponse
 */
DeleteMediasResponse Client::deleteMedias(const DeleteMediasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMediasWithOptions(request, runtime);
}

/**
 * @summary 查询分类
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
 * @summary 查询分类
 *
 * @param request GetAssetCategoryRequest
 * @return GetAssetCategoryResponse
 */
GetAssetCategoryResponse Client::getAssetCategory(const GetAssetCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAssetCategoryWithOptions(request, runtime);
}

/**
 * @summary 查询图片生成任务
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
 * @summary 查询图片生成任务
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
 * @summary 查询媒资内容理解作业
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
 * @summary 查询媒资内容理解作业
 *
 * @param request GetMediaComprehensionJobRequest
 * @return GetMediaComprehensionJobResponse
 */
GetMediaComprehensionJobResponse Client::getMediaComprehensionJob(const GetMediaComprehensionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaComprehensionJobWithOptions(request, runtime);
}

/**
 * @summary 查询视频生成任务
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
 * @summary 查询视频生成任务
 *
 * @param request GetVideoGenerationJobRequest
 * @return GetVideoGenerationJobResponse
 */
GetVideoGenerationJobResponse Client::getVideoGenerationJob(const GetVideoGenerationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoGenerationJobWithOptions(request, runtime);
}

/**
 * @summary 导入媒资
 *
 * @description ## 请求说明
 * 该API用于查询媒资内容理解作业。
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
 * @summary 导入媒资
 *
 * @description ## 请求说明
 * 该API用于查询媒资内容理解作业。
 *
 * @param request ImportMediaRequest
 * @return ImportMediaResponse
 */
ImportMediaResponse Client::importMedia(const ImportMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importMediaWithOptions(request, runtime);
}

/**
 * @summary 列出分类
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
 * @summary 列出分类
 *
 * @param request ListAssetCategoriesRequest
 * @return ListAssetCategoriesResponse
 */
ListAssetCategoriesResponse Client::listAssetCategories(const ListAssetCategoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAssetCategoriesWithOptions(request, runtime);
}

/**
 * @summary 搜索媒资
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

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
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

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
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
 * @summary 搜索媒资
 *
 * @param request SearchMediaRequest
 * @return SearchMediaResponse
 */
SearchMediaResponse Client::searchMedia(const SearchMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMediaWithOptions(request, runtime);
}

/**
 * @summary 提交图像生成接口
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
 * @summary 提交图像生成接口
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
 * @param request SubmitMediaComprehensionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitMediaComprehensionJobResponse
 */
SubmitMediaComprehensionJobResponse Client::submitMediaComprehensionJobWithOptions(const SubmitMediaComprehensionJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobParams()) {
    query["JobParams"] = request.getJobParams();
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
 * @param request SubmitMediaComprehensionJobRequest
 * @return SubmitMediaComprehensionJobResponse
 */
SubmitMediaComprehensionJobResponse Client::submitMediaComprehensionJob(const SubmitMediaComprehensionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMediaComprehensionJobWithOptions(request, runtime);
}

/**
 * @summary 提交视频生成接口
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
 * @summary 提交视频生成接口
 *
 * @param request SubmitVideoGenerationJobRequest
 * @return SubmitVideoGenerationJobResponse
 */
SubmitVideoGenerationJobResponse Client::submitVideoGenerationJob(const SubmitVideoGenerationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitVideoGenerationJobWithOptions(request, runtime);
}

/**
 * @summary 更新媒资分类
 *
 * @description 创建媒资分类后，可调用本接口通过分类 ID 来定位并更新媒资分类的名称。
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
 * @summary 更新媒资分类
 *
 * @description 创建媒资分类后，可调用本接口通过分类 ID 来定位并更新媒资分类的名称。
 *
 * @param request UpdateAssetCategoryRequest
 * @return UpdateAssetCategoryResponse
 */
UpdateAssetCategoryResponse Client::updateAssetCategory(const UpdateAssetCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAssetCategoryWithOptions(request, runtime);
}

/**
 * @summary UpdateMedia
 *
 * @description ## 请求说明
 * 该API用于查询媒资内容理解作业。
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
 * @summary UpdateMedia
 *
 * @description ## 请求说明
 * 该API用于查询媒资内容理解作业。
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