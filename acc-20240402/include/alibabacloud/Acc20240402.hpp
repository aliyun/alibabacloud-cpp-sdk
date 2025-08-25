// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ACC20240402_HPP_
#define ALIBABACLOUD_ACC20240402_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Acc20240402Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Acc20240402.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Acc20240402
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建镜像缓存
       *
       * @param tmpReq CreateImageCacheRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageCacheResponse
       */
      Models::CreateImageCacheResponse createImageCacheWithOptions(const Models::CreateImageCacheRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建镜像缓存
       *
       * @param request CreateImageCacheRequest
       * @return CreateImageCacheResponse
       */
      Models::CreateImageCacheResponse createImageCache(const Models::CreateImageCacheRequest &request);

      /**
       * @summary 删除镜像缓存
       *
       * @param request DeleteImageCacheRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageCacheResponse
       */
      Models::DeleteImageCacheResponse deleteImageCacheWithOptions(const Models::DeleteImageCacheRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除镜像缓存
       *
       * @param request DeleteImageCacheRequest
       * @return DeleteImageCacheResponse
       */
      Models::DeleteImageCacheResponse deleteImageCache(const Models::DeleteImageCacheRequest &request);

      /**
       * @summary 查询镜像缓存
       *
       * @param request GetImageCacheRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageCacheResponse
       */
      Models::GetImageCacheResponse getImageCacheWithOptions(const Models::GetImageCacheRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询镜像缓存
       *
       * @param request GetImageCacheRequest
       * @return GetImageCacheResponse
       */
      Models::GetImageCacheResponse getImageCache(const Models::GetImageCacheRequest &request);

      /**
       * @summary 查询镜像缓存
       *
       * @param request ListImageCachesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImageCachesResponse
       */
      Models::ListImageCachesResponse listImageCachesWithOptions(const Models::ListImageCachesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询镜像缓存
       *
       * @param request ListImageCachesRequest
       * @return ListImageCachesResponse
       */
      Models::ListImageCachesResponse listImageCaches(const Models::ListImageCachesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
