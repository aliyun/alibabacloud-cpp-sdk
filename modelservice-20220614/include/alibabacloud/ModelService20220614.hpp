// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELSERVICE20220614_HPP_
#define ALIBABACLOUD_MODELSERVICE20220614_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ModelService20220614Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ModelService20220614.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelService20220614
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 获取当月的使用量
       *
       * @param request GetMonthAmountRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMonthAmountResponse
       */
      Models::GetMonthAmountResponse getMonthAmountWithOptions(const Models::GetMonthAmountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取当月的使用量
       *
       * @param request GetMonthAmountRequest
       * @return GetMonthAmountResponse
       */
      Models::GetMonthAmountResponse getMonthAmount(const Models::GetMonthAmountRequest &request);

      /**
       * @summary 获取user相关的appid, token等信息
       *
       * @param request GetUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取user相关的appid, token等信息
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const Models::GetUserRequest &request);

      /**
       * @summary 每天的调用量列表
       *
       * @param request ListDayAmountRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDayAmountResponse
       */
      Models::ListDayAmountResponse listDayAmountWithOptions(const Models::ListDayAmountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 每天的调用量列表
       *
       * @param request ListDayAmountRequest
       * @return ListDayAmountResponse
       */
      Models::ListDayAmountResponse listDayAmount(const Models::ListDayAmountRequest &request);

      /**
       * @summary 用户充值列表
       *
       * @param request ListRechargeBillsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRechargeBillsResponse
       */
      Models::ListRechargeBillsResponse listRechargeBillsWithOptions(const Models::ListRechargeBillsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用户充值列表
       *
       * @param request ListRechargeBillsRequest
       * @return ListRechargeBillsResponse
       */
      Models::ListRechargeBillsResponse listRechargeBills(const Models::ListRechargeBillsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ModelService20220614
#endif
