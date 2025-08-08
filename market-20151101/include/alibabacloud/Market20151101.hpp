// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MARKET20151101_HPP_
#define ALIBABACLOUD_MARKET20151101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Market20151101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Market20151101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 增加STS支持
       *
       * @param request ActivateLicenseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateLicenseResponse
       */
      Models::ActivateLicenseResponse activateLicenseWithOptions(const Models::ActivateLicenseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 增加STS支持
       *
       * @param request ActivateLicenseRequest
       * @return ActivateLicenseResponse
       */
      Models::ActivateLicenseResponse activateLicense(const Models::ActivateLicenseRequest &request);

      /**
       * @param request AutoRenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AutoRenewInstanceResponse
       */
      Models::AutoRenewInstanceResponse autoRenewInstanceWithOptions(const Models::AutoRenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AutoRenewInstanceRequest
       * @return AutoRenewInstanceResponse
       */
      Models::AutoRenewInstanceResponse autoRenewInstance(const Models::AutoRenewInstanceRequest &request);

      /**
       * @summary 确认查收订阅通知
       *
       * @param request ConfirmNotificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmNotificationResponse
       */
      Models::ConfirmNotificationResponse confirmNotificationWithOptions(const Models::ConfirmNotificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 确认查收订阅通知
       *
       * @param request ConfirmNotificationRequest
       * @return ConfirmNotificationResponse
       */
      Models::ConfirmNotificationResponse confirmNotification(const Models::ConfirmNotificationRequest &request);

      /**
       * @param request CreateOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrderResponse
       */
      Models::CreateOrderResponse createOrderWithOptions(const Models::CreateOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateOrderRequest
       * @return CreateOrderResponse
       */
      Models::CreateOrderResponse createOrder(const Models::CreateOrderRequest &request);

      /**
       * @param request CrossAccountVerifyTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CrossAccountVerifyTokenResponse
       */
      Models::CrossAccountVerifyTokenResponse crossAccountVerifyTokenWithOptions(const Models::CrossAccountVerifyTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CrossAccountVerifyTokenRequest
       * @return CrossAccountVerifyTokenResponse
       */
      Models::CrossAccountVerifyTokenResponse crossAccountVerifyToken(const Models::CrossAccountVerifyTokenRequest &request);

      /**
       * @summary 查询API用量
       *
       * @param request DescribeApiMeteringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiMeteringResponse
       */
      Models::DescribeApiMeteringResponse describeApiMeteringWithOptions(const Models::DescribeApiMeteringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询API用量
       *
       * @param request DescribeApiMeteringRequest
       * @return DescribeApiMeteringResponse
       */
      Models::DescribeApiMeteringResponse describeApiMetering(const Models::DescribeApiMeteringRequest &request);

      /**
       * @param request DescribeCurrentNodeInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCurrentNodeInfoResponse
       */
      Models::DescribeCurrentNodeInfoResponse describeCurrentNodeInfoWithOptions(const Models::DescribeCurrentNodeInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeCurrentNodeInfoRequest
       * @return DescribeCurrentNodeInfoResponse
       */
      Models::DescribeCurrentNodeInfoResponse describeCurrentNodeInfo(const Models::DescribeCurrentNodeInfoRequest &request);

      /**
       * @summary 分页获取推广商品
       *
       * @param request DescribeDistributionProductsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDistributionProductsResponse
       */
      Models::DescribeDistributionProductsResponse describeDistributionProductsWithOptions(const Models::DescribeDistributionProductsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页获取推广商品
       *
       * @param request DescribeDistributionProductsRequest
       * @return DescribeDistributionProductsResponse
       */
      Models::DescribeDistributionProductsResponse describeDistributionProducts(const Models::DescribeDistributionProductsRequest &request);

      /**
       * @summary 获取并生成推广商品-链接
       *
       * @param tmpReq DescribeDistributionProductsLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDistributionProductsLinkResponse
       */
      Models::DescribeDistributionProductsLinkResponse describeDistributionProductsLinkWithOptions(const Models::DescribeDistributionProductsLinkRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取并生成推广商品-链接
       *
       * @param request DescribeDistributionProductsLinkRequest
       * @return DescribeDistributionProductsLinkResponse
       */
      Models::DescribeDistributionProductsLinkResponse describeDistributionProductsLink(const Models::DescribeDistributionProductsLinkRequest &request);

      /**
       * @summary 查询订阅通知失败列表
       *
       * @param request DescribeFailedNotificationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFailedNotificationsResponse
       */
      Models::DescribeFailedNotificationsResponse describeFailedNotificationsWithOptions(const Models::DescribeFailedNotificationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询订阅通知失败列表
       *
       * @param request DescribeFailedNotificationsRequest
       * @return DescribeFailedNotificationsResponse
       */
      Models::DescribeFailedNotificationsResponse describeFailedNotifications(const Models::DescribeFailedNotificationsRequest &request);

      /**
       * @summary 服务商侧查询镜像实例信息
       *
       * @param request DescribeImageInstanceForIsvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageInstanceForIsvResponse
       */
      Models::DescribeImageInstanceForIsvResponse describeImageInstanceForIsvWithOptions(const Models::DescribeImageInstanceForIsvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 服务商侧查询镜像实例信息
       *
       * @param request DescribeImageInstanceForIsvRequest
       * @return DescribeImageInstanceForIsvResponse
       */
      Models::DescribeImageInstanceForIsvResponse describeImageInstanceForIsv(const Models::DescribeImageInstanceForIsvRequest &request);

      /**
       * @param request DescribeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstanceWithOptions(const Models::DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeInstanceRequest
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstance(const Models::DescribeInstanceRequest &request);

      /**
       * @summary 服务商侧查询实例信息
       *
       * @param request DescribeInstanceForIsvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceForIsvResponse
       */
      Models::DescribeInstanceForIsvResponse describeInstanceForIsvWithOptions(const Models::DescribeInstanceForIsvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 服务商侧查询实例信息
       *
       * @param request DescribeInstanceForIsvRequest
       * @return DescribeInstanceForIsvResponse
       */
      Models::DescribeInstanceForIsvResponse describeInstanceForIsv(const Models::DescribeInstanceForIsvRequest &request);

      /**
       * @param request DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary 查询供应商下的发票信息
       *
       * @param request DescribeInvoiceForIsvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvoiceForIsvResponse
       */
      Models::DescribeInvoiceForIsvResponse describeInvoiceForIsvWithOptions(const Models::DescribeInvoiceForIsvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询供应商下的发票信息
       *
       * @param request DescribeInvoiceForIsvRequest
       * @return DescribeInvoiceForIsvResponse
       */
      Models::DescribeInvoiceForIsvResponse describeInvoiceForIsv(const Models::DescribeInvoiceForIsvRequest &request);

      /**
       * @summary 获取License
       *
       * @param request DescribeLicenseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLicenseResponse
       */
      Models::DescribeLicenseResponse describeLicenseWithOptions(const Models::DescribeLicenseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取License
       *
       * @param request DescribeLicenseRequest
       * @return DescribeLicenseResponse
       */
      Models::DescribeLicenseResponse describeLicense(const Models::DescribeLicenseRequest &request);

      /**
       * @param request DescribeOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOrderResponse
       */
      Models::DescribeOrderResponse describeOrderWithOptions(const Models::DescribeOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeOrderRequest
       * @return DescribeOrderResponse
       */
      Models::DescribeOrderResponse describeOrder(const Models::DescribeOrderRequest &request);

      /**
       * @summary 服务商侧查询订单详情
       *
       * @param request DescribeOrderForIsvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOrderForIsvResponse
       */
      Models::DescribeOrderForIsvResponse describeOrderForIsvWithOptions(const Models::DescribeOrderForIsvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 服务商侧查询订单详情
       *
       * @param request DescribeOrderForIsvRequest
       * @return DescribeOrderForIsvResponse
       */
      Models::DescribeOrderForIsvResponse describeOrderForIsv(const Models::DescribeOrderForIsvRequest &request);

      /**
       * @param request DescribePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePriceWithOptions(const Models::DescribePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribePriceRequest
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePrice(const Models::DescribePriceRequest &request);

      /**
       * @param request DescribeProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProductResponse
       */
      Models::DescribeProductResponse describeProductWithOptions(const Models::DescribeProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeProductRequest
       * @return DescribeProductResponse
       */
      Models::DescribeProductResponse describeProduct(const Models::DescribeProductRequest &request);

      /**
       * @param request DescribeProductsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProductsResponse
       */
      Models::DescribeProductsResponse describeProductsWithOptions(const Models::DescribeProductsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeProductsRequest
       * @return DescribeProductsResponse
       */
      Models::DescribeProductsResponse describeProducts(const Models::DescribeProductsRequest &request);

      /**
       * @param request DescribeProjectAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProjectAttachmentsResponse
       */
      Models::DescribeProjectAttachmentsResponse describeProjectAttachmentsWithOptions(const Models::DescribeProjectAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeProjectAttachmentsRequest
       * @return DescribeProjectAttachmentsResponse
       */
      Models::DescribeProjectAttachmentsResponse describeProjectAttachments(const Models::DescribeProjectAttachmentsRequest &request);

      /**
       * @param request DescribeProjectInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProjectInfoResponse
       */
      Models::DescribeProjectInfoResponse describeProjectInfoWithOptions(const Models::DescribeProjectInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeProjectInfoRequest
       * @return DescribeProjectInfoResponse
       */
      Models::DescribeProjectInfoResponse describeProjectInfo(const Models::DescribeProjectInfoRequest &request);

      /**
       * @param request DescribeProjectMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProjectMessagesResponse
       */
      Models::DescribeProjectMessagesResponse describeProjectMessagesWithOptions(const Models::DescribeProjectMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeProjectMessagesRequest
       * @return DescribeProjectMessagesResponse
       */
      Models::DescribeProjectMessagesResponse describeProjectMessages(const Models::DescribeProjectMessagesRequest &request);

      /**
       * @description **
       * **
       *
       * @param request DescribeProjectNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProjectNodesResponse
       */
      Models::DescribeProjectNodesResponse describeProjectNodesWithOptions(const Models::DescribeProjectNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description **
       * **
       *
       * @param request DescribeProjectNodesRequest
       * @return DescribeProjectNodesResponse
       */
      Models::DescribeProjectNodesResponse describeProjectNodes(const Models::DescribeProjectNodesRequest &request);

      /**
       * @param request DescribeProjectOperateLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProjectOperateLogsResponse
       */
      Models::DescribeProjectOperateLogsResponse describeProjectOperateLogsWithOptions(const Models::DescribeProjectOperateLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeProjectOperateLogsRequest
       * @return DescribeProjectOperateLogsResponse
       */
      Models::DescribeProjectOperateLogsResponse describeProjectOperateLogs(const Models::DescribeProjectOperateLogsRequest &request);

      /**
       * @param request FinishCurrentProjectNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FinishCurrentProjectNodeResponse
       */
      Models::FinishCurrentProjectNodeResponse finishCurrentProjectNodeWithOptions(const Models::FinishCurrentProjectNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request FinishCurrentProjectNodeRequest
       * @return FinishCurrentProjectNodeResponse
       */
      Models::FinishCurrentProjectNodeResponse finishCurrentProjectNode(const Models::FinishCurrentProjectNodeRequest &request);

      /**
       * @summary 发票受理接口
       *
       * @param request ModifyInvoiceForIsvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInvoiceForIsvResponse
       */
      Models::ModifyInvoiceForIsvResponse modifyInvoiceForIsvWithOptions(const Models::ModifyInvoiceForIsvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发票受理接口
       *
       * @param request ModifyInvoiceForIsvRequest
       * @return ModifyInvoiceForIsvResponse
       */
      Models::ModifyInvoiceForIsvResponse modifyInvoiceForIsv(const Models::ModifyInvoiceForIsvRequest &request);

      /**
       * @param request PauseProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseProjectResponse
       */
      Models::PauseProjectResponse pauseProjectWithOptions(const Models::PauseProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PauseProjectRequest
       * @return PauseProjectResponse
       */
      Models::PauseProjectResponse pauseProject(const Models::PauseProjectRequest &request);

      /**
       * @param request PushMeteringDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushMeteringDataResponse
       */
      Models::PushMeteringDataResponse pushMeteringDataWithOptions(const Models::PushMeteringDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PushMeteringDataRequest
       * @return PushMeteringDataResponse
       */
      Models::PushMeteringDataResponse pushMeteringData(const Models::PushMeteringDataRequest &request);

      /**
       * @param request ResumeProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeProjectResponse
       */
      Models::ResumeProjectResponse resumeProjectWithOptions(const Models::ResumeProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ResumeProjectRequest
       * @return ResumeProjectResponse
       */
      Models::ResumeProjectResponse resumeProject(const Models::ResumeProjectRequest &request);

      /**
       * @param request RollbackCurrentProjectNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackCurrentProjectNodeResponse
       */
      Models::RollbackCurrentProjectNodeResponse rollbackCurrentProjectNodeWithOptions(const Models::RollbackCurrentProjectNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RollbackCurrentProjectNodeRequest
       * @return RollbackCurrentProjectNodeResponse
       */
      Models::RollbackCurrentProjectNodeResponse rollbackCurrentProjectNode(const Models::RollbackCurrentProjectNodeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
