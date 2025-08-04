// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CIOMARKETPOP20250709_HPP_
#define ALIBABACLOUD_CIOMARKETPOP20250709_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/CioMarketPop20250709Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/CioMarketPop20250709.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CioMarketPop20250709
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 全员营销
       *
       * @param request GetEveryOneSellsFormListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEveryOneSellsFormListResponse
       */
      Models::GetEveryOneSellsFormListResponse getEveryOneSellsFormListWithOptions(const Models::GetEveryOneSellsFormListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 全员营销
       *
       * @param request GetEveryOneSellsFormListRequest
       * @return GetEveryOneSellsFormListResponse
       */
      Models::GetEveryOneSellsFormListResponse getEveryOneSellsFormList(const Models::GetEveryOneSellsFormListRequest &request);

      /**
       * @summary 推送钉钉消息
       *
       * @param tmpReq PushEveryOneSellMsgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushEveryOneSellMsgResponse
       */
      Models::PushEveryOneSellMsgResponse pushEveryOneSellMsgWithOptions(const Models::PushEveryOneSellMsgRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推送钉钉消息
       *
       * @param request PushEveryOneSellMsgRequest
       * @return PushEveryOneSellMsgResponse
       */
      Models::PushEveryOneSellMsgResponse pushEveryOneSellMsg(const Models::PushEveryOneSellMsgRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CioMarketPop20250709
#endif
