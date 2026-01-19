#include <darabonba/Core.hpp>
#include <alibabacloud/Acc20240402.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Acc20240402::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Acc20240402
{

AlibabaCloud::Acc20240402::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-2-pop" , "acc.aliyuncs.com"},
    {"ap-south-1" , "acc.aliyuncs.com"},
    {"ap-southeast-2" , "acc.aliyuncs.com"},
    {"cn-beijing-finance-1" , "acc.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "acc.aliyuncs.com"},
    {"cn-beijing-gov-1" , "acc.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "acc.aliyuncs.com"},
    {"cn-edge-1" , "acc.aliyuncs.com"},
    {"cn-fujian" , "acc.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "acc.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "acc.aliyuncs.com"},
    {"cn-hangzhou-finance" , "acc.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "acc.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "acc.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "acc.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "acc.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "acc.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "acc.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "acc.aliyuncs.com"},
    {"cn-qingdao-nebula" , "acc.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "acc.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "acc.aliyuncs.com"},
    {"cn-shanghai-inner" , "acc.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "acc.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "acc.aliyuncs.com"},
    {"cn-shenzhen-inner" , "acc.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "acc.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "acc.aliyuncs.com"},
    {"cn-wuhan" , "acc.aliyuncs.com"},
    {"cn-yushanfang" , "acc.aliyuncs.com"},
    {"cn-zhangbei" , "acc.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "acc.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "acc.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "acc.aliyuncs.com"},
    {"eu-west-1-oxs" , "acc.aliyuncs.com"},
    {"rus-west-1-pop" , "acc.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("acc", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建镜像缓存
 *
 * @param tmpReq CreateImageCacheRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageCacheResponse
 */
CreateImageCacheResponse Client::createImageCacheWithOptions(const CreateImageCacheRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateImageCacheShrinkRequest request = CreateImageCacheShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNetworkConfig()) {
    request.setNetworkConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNetworkConfig(), "NetworkConfig", "json"));
  }

  json query = {};
  if (!!request.hasAcrRegistryInfos()) {
    query["AcrRegistryInfos"] = request.getAcrRegistryInfos();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasImageCacheName()) {
    query["ImageCacheName"] = request.getImageCacheName();
  }

  if (!!request.hasImageRegistryCredentials()) {
    query["ImageRegistryCredentials"] = request.getImageRegistryCredentials();
  }

  if (!!request.hasImages()) {
    query["Images"] = request.getImages();
  }

  if (!!request.hasNetworkConfigShrink()) {
    query["NetworkConfig"] = request.getNetworkConfigShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateImageCache"},
    {"version" , "2024-04-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImageCacheResponse>();
}

/**
 * @summary 创建镜像缓存
 *
 * @param request CreateImageCacheRequest
 * @return CreateImageCacheResponse
 */
CreateImageCacheResponse Client::createImageCache(const CreateImageCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageCacheWithOptions(request, runtime);
}

/**
 * @summary 删除镜像缓存
 *
 * @param request DeleteImageCacheRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteImageCacheResponse
 */
DeleteImageCacheResponse Client::deleteImageCacheWithOptions(const DeleteImageCacheRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasImageCacheId()) {
    query["ImageCacheId"] = request.getImageCacheId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteImageCache"},
    {"version" , "2024-04-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteImageCacheResponse>();
}

/**
 * @summary 删除镜像缓存
 *
 * @param request DeleteImageCacheRequest
 * @return DeleteImageCacheResponse
 */
DeleteImageCacheResponse Client::deleteImageCache(const DeleteImageCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteImageCacheWithOptions(request, runtime);
}

/**
 * @summary 查询镜像缓存
 *
 * @param request GetImageCacheRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageCacheResponse
 */
GetImageCacheResponse Client::getImageCacheWithOptions(const GetImageCacheRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageCacheId()) {
    query["ImageCacheId"] = request.getImageCacheId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImageCache"},
    {"version" , "2024-04-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageCacheResponse>();
}

/**
 * @summary 查询镜像缓存
 *
 * @param request GetImageCacheRequest
 * @return GetImageCacheResponse
 */
GetImageCacheResponse Client::getImageCache(const GetImageCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageCacheWithOptions(request, runtime);
}

/**
 * @summary 查询镜像缓存
 *
 * @param request ListImageCachesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImageCachesResponse
 */
ListImageCachesResponse Client::listImageCachesWithOptions(const ListImageCachesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageCacheName()) {
    query["ImageCacheName"] = request.getImageCacheName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListImageCaches"},
    {"version" , "2024-04-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImageCachesResponse>();
}

/**
 * @summary 查询镜像缓存
 *
 * @param request ListImageCachesRequest
 * @return ListImageCachesResponse
 */
ListImageCachesResponse Client::listImageCaches(const ListImageCachesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listImageCachesWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Acc20240402