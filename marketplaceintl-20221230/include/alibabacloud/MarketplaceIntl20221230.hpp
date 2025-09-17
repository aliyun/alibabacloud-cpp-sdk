// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MARKETPLACEINTL20221230_HPP_
#define ALIBABACLOUD_MARKETPLACEINTL20221230_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/MarketplaceIntl20221230Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/MarketplaceIntl20221230.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketplaceIntl20221230
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 获取推送计量数据结果
       *
       * @param request DescribePushMeteringDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePushMeteringDataResponse
       */
      Models::DescribePushMeteringDataResponse describePushMeteringDataWithOptions(const Models::DescribePushMeteringDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取推送计量数据结果
       *
       * @param request DescribePushMeteringDataRequest
       * @return DescribePushMeteringDataResponse
       */
      Models::DescribePushMeteringDataResponse describePushMeteringData(const Models::DescribePushMeteringDataRequest &request);

      /**
       * @summary 卖家查询实例列表
       *
       * @param request DescribeSellerInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSellerInstancesResponse
       */
      Models::DescribeSellerInstancesResponse describeSellerInstancesWithOptions(const Models::DescribeSellerInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 卖家查询实例列表
       *
       * @param request DescribeSellerInstancesRequest
       * @return DescribeSellerInstancesResponse
       */
      Models::DescribeSellerInstancesResponse describeSellerInstances(const Models::DescribeSellerInstancesRequest &request);

      /**
       * @summary isv推送实例消息给用户
       *
       * @param request NoticeInstanceUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return NoticeInstanceUserResponse
       */
      Models::NoticeInstanceUserResponse noticeInstanceUserWithOptions(const Models::NoticeInstanceUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary isv推送实例消息给用户
       *
       * @param request NoticeInstanceUserRequest
       * @return NoticeInstanceUserResponse
       */
      Models::NoticeInstanceUserResponse noticeInstanceUser(const Models::NoticeInstanceUserRequest &request);

      /**
       * @summary 国际云市场推送计量数据
       *
       * @param request PushMeteringDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushMeteringDataResponse
       */
      Models::PushMeteringDataResponse pushMeteringDataWithOptions(const Models::PushMeteringDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际云市场推送计量数据
       *
       * @param request PushMeteringDataRequest
       * @return PushMeteringDataResponse
       */
      Models::PushMeteringDataResponse pushMeteringData(const Models::PushMeteringDataRequest &request);
  };
} // namespace AlibabaCloud
} // namespace MarketplaceIntl20221230
#endif
