// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_METASPACE20221014_HPP_
#define ALIBABACLOUD_METASPACE20221014_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Metaspace20221014Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Metaspace20221014.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Metaspace20221014
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 协同者发起流协同请求并获取协同ticket的API接口。
       *
       * @description ## 请求说明
       * - 该API为内部使用，主要用于协同者发起流协同。
       * - `DependOnMainStream`参数指定了是否依赖主流的状态来建立或断开协同流。
       * - 当`InitiatorType`设置为强制协同类型时（如`ADMIN_INITIATE_FORCE`或`COORDINATOR_INITIATE_FORCE`），将返回一个`CoordinateTicket`。
       * - 协同资源列表`CoordinationResourceCandidates`中必须包含至少一项资源信息，并且所有提供的资源ID、类型和地区等信息需准确无误。
       * - 确保`OwnerAliUid`与协同者的租户ID相同，否则可能无法成功发起协同请求。
       * - 对于AD用户，请务必填写`AdDomainName`字段。
       *
       * @param request ApplyCoordinationForCoordinatorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyCoordinationForCoordinatorResponse
       */
      Models::ApplyCoordinationForCoordinatorResponse applyCoordinationForCoordinatorWithOptions(const Models::ApplyCoordinationForCoordinatorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 协同者发起流协同请求并获取协同ticket的API接口。
       *
       * @description ## 请求说明
       * - 该API为内部使用，主要用于协同者发起流协同。
       * - `DependOnMainStream`参数指定了是否依赖主流的状态来建立或断开协同流。
       * - 当`InitiatorType`设置为强制协同类型时（如`ADMIN_INITIATE_FORCE`或`COORDINATOR_INITIATE_FORCE`），将返回一个`CoordinateTicket`。
       * - 协同资源列表`CoordinationResourceCandidates`中必须包含至少一项资源信息，并且所有提供的资源ID、类型和地区等信息需准确无误。
       * - 确保`OwnerAliUid`与协同者的租户ID相同，否则可能无法成功发起协同请求。
       * - 对于AD用户，请务必填写`AdDomainName`字段。
       *
       * @param request ApplyCoordinationForCoordinatorRequest
       * @return ApplyCoordinationForCoordinatorResponse
       */
      Models::ApplyCoordinationForCoordinatorResponse applyCoordinationForCoordinator(const Models::ApplyCoordinationForCoordinatorRequest &request);

      /**
       * @summary 取消协同请求
       *
       * @param request CancelCoordinationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCoordinationResponse
       */
      Models::CancelCoordinationResponse cancelCoordinationWithOptions(const Models::CancelCoordinationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消协同请求
       *
       * @param request CancelCoordinationRequest
       * @return CancelCoordinationResponse
       */
      Models::CancelCoordinationResponse cancelCoordination(const Models::CancelCoordinationRequest &request);

      /**
       * @summary 获取协同流连接ticket
       *
       * @param request GetCoordinationTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCoordinationTicketResponse
       */
      Models::GetCoordinationTicketResponse getCoordinationTicketWithOptions(const Models::GetCoordinationTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取协同流连接ticket
       *
       * @param request GetCoordinationTicketRequest
       * @return GetCoordinationTicketResponse
       */
      Models::GetCoordinationTicketResponse getCoordinationTicket(const Models::GetCoordinationTicketRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Metaspace20221014
#endif
