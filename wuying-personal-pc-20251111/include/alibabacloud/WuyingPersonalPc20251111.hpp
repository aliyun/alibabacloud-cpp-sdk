// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_WUYINGPERSONALPC20251111_HPP_
#define ALIBABACLOUD_WUYINGPERSONALPC20251111_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/WuyingPersonalPc20251111Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/WuyingPersonalPc20251111.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建桌面镜像
       *
       * @param tmpReq CreateDesktopImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDesktopImageResponse
       */
      Models::CreateDesktopImageResponse createDesktopImageWithOptions(const Models::CreateDesktopImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建桌面镜像
       *
       * @param request CreateDesktopImageRequest
       * @return CreateDesktopImageResponse
       */
      Models::CreateDesktopImageResponse createDesktopImage(const Models::CreateDesktopImageRequest &request);

      /**
       * @summary 下单套餐包和核时包
       *
       * @param tmpReq CreateOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrderResponse
       */
      Models::CreateOrderResponse createOrderWithOptions(const Models::CreateOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下单套餐包和核时包
       *
       * @param request CreateOrderRequest
       * @return CreateOrderResponse
       */
      Models::CreateOrderResponse createOrder(const Models::CreateOrderRequest &request);

      /**
       * @summary 删除云桌面
       *
       * @param request DeleteDesktopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDesktopResponse
       */
      Models::DeleteDesktopResponse deleteDesktopWithOptions(const Models::DeleteDesktopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除云桌面
       *
       * @param request DeleteDesktopRequest
       * @return DeleteDesktopResponse
       */
      Models::DeleteDesktopResponse deleteDesktop(const Models::DeleteDesktopRequest &request);

      /**
       * @summary 删除桌面镜像
       *
       * @param request DeleteDesktopImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDesktopImageResponse
       */
      Models::DeleteDesktopImageResponse deleteDesktopImageWithOptions(const Models::DeleteDesktopImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除桌面镜像
       *
       * @param request DeleteDesktopImageRequest
       * @return DeleteDesktopImageResponse
       */
      Models::DeleteDesktopImageResponse deleteDesktopImage(const Models::DeleteDesktopImageRequest &request);

      /**
       * @summary 查询用户可变更的镜像
       *
       * @param request DescribeAccessibleImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessibleImagesResponse
       */
      Models::DescribeAccessibleImagesResponse describeAccessibleImagesWithOptions(const Models::DescribeAccessibleImagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户可变更的镜像
       *
       * @param request DescribeAccessibleImagesRequest
       * @return DescribeAccessibleImagesResponse
       */
      Models::DescribeAccessibleImagesResponse describeAccessibleImages(const Models::DescribeAccessibleImagesRequest &request);

      /**
       * @summary 查询核时包包列表
       *
       * @param request DescribeCorePackageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCorePackageListResponse
       */
      Models::DescribeCorePackageListResponse describeCorePackageListWithOptions(const Models::DescribeCorePackageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询核时包包列表
       *
       * @param request DescribeCorePackageListRequest
       * @return DescribeCorePackageListResponse
       */
      Models::DescribeCorePackageListResponse describeCorePackageList(const Models::DescribeCorePackageListRequest &request);

      /**
       * @summary 软终端分tab查询云桌面列表 & 组织信息
       *
       * @param request DescribeDesktopsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDesktopsResponse
       */
      Models::DescribeDesktopsResponse describeDesktopsWithOptions(const Models::DescribeDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 软终端分tab查询云桌面列表 & 组织信息
       *
       * @param request DescribeDesktopsRequest
       * @return DescribeDesktopsResponse
       */
      Models::DescribeDesktopsResponse describeDesktops(const Models::DescribeDesktopsRequest &request);

      /**
       * @summary 根据分享码查询镜像
       *
       * @param request DescribeImageDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageDetailResponse
       */
      Models::DescribeImageDetailResponse describeImageDetailWithOptions(const Models::DescribeImageDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据分享码查询镜像
       *
       * @param request DescribeImageDetailRequest
       * @return DescribeImageDetailResponse
       */
      Models::DescribeImageDetailResponse describeImageDetail(const Models::DescribeImageDetailRequest &request);

      /**
       * @summary 查询套餐包订单列表
       *
       * @param tmpReq DescribePackageOrdersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePackageOrdersResponse
       */
      Models::DescribePackageOrdersResponse describePackageOrdersWithOptions(const Models::DescribePackageOrdersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询套餐包订单列表
       *
       * @param request DescribePackageOrdersRequest
       * @return DescribePackageOrdersResponse
       */
      Models::DescribePackageOrdersResponse describePackageOrders(const Models::DescribePackageOrdersRequest &request);

      /**
       * @summary 生成无影工作站的场景url
       *
       * @param request GenerateWuyingServerSceneUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateWuyingServerSceneUrlResponse
       */
      Models::GenerateWuyingServerSceneUrlResponse generateWuyingServerSceneUrlWithOptions(const Models::GenerateWuyingServerSceneUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成无影工作站的场景url
       *
       * @param request GenerateWuyingServerSceneUrlRequest
       * @return GenerateWuyingServerSceneUrlResponse
       */
      Models::GenerateWuyingServerSceneUrlResponse generateWuyingServerSceneUrl(const Models::GenerateWuyingServerSceneUrlRequest &request);

      /**
       * @summary 查询展示商品列表
       *
       * @param request GetProductListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProductListResponse
       */
      Models::GetProductListResponse getProductListWithOptions(const Models::GetProductListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询展示商品列表
       *
       * @param request GetProductListRequest
       * @return GetProductListResponse
       */
      Models::GetProductListResponse getProductList(const Models::GetProductListRequest &request);

      /**
       * @summary 获取用户信息
       *
       * @param request GetUserInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserInfoResponse
       */
      Models::GetUserInfoResponse getUserInfoWithOptions(const Models::GetUserInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户信息
       *
       * @param request GetUserInfoRequest
       * @return GetUserInfoResponse
       */
      Models::GetUserInfoResponse getUserInfo(const Models::GetUserInfoRequest &request);

      /**
       * @summary 开机
       *
       * @param request StartDesktopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDesktopResponse
       */
      Models::StartDesktopResponse startDesktopWithOptions(const Models::StartDesktopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开机
       *
       * @param request StartDesktopRequest
       * @return StartDesktopResponse
       */
      Models::StartDesktopResponse startDesktop(const Models::StartDesktopRequest &request);

      /**
       * @summary 关机
       *
       * @param request StopDesktopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDesktopResponse
       */
      Models::StopDesktopResponse stopDesktopWithOptions(const Models::StopDesktopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关机
       *
       * @param request StopDesktopRequest
       * @return StopDesktopResponse
       */
      Models::StopDesktopResponse stopDesktop(const Models::StopDesktopRequest &request);
  };
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
