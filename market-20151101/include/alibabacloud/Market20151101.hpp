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
       * @summary Activates an authorization code by calling ActivateLicense.
       *
       * @param request ActivateLicenseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateLicenseResponse
       */
      Models::ActivateLicenseResponse activateLicenseWithOptions(const Models::ActivateLicenseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates an authorization code by calling ActivateLicense.
       *
       * @param request ActivateLicenseRequest
       * @return ActivateLicenseResponse
       */
      Models::ActivateLicenseResponse activateLicense(const Models::ActivateLicenseRequest &request);

      /**
       * @summary Sets auto-renewal.
       *
       * @param request AutoRenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AutoRenewInstanceResponse
       */
      Models::AutoRenewInstanceResponse autoRenewInstanceWithOptions(const Models::AutoRenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets auto-renewal.
       *
       * @param request AutoRenewInstanceRequest
       * @return AutoRenewInstanceResponse
       */
      Models::AutoRenewInstanceResponse autoRenewInstance(const Models::AutoRenewInstanceRequest &request);

      /**
       * @summary Confirms that the merchant has received and processed a notification message. After this call, the message will no longer be returned in subsequent queries.
       *
       * @description Confirms the receipt of a subscription notification failure message.
       * - After a successful call, the message will no longer be returned in subsequent queries. The platform considers that the merchant has correctly processed the message.
       *
       * @param request ConfirmNotificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmNotificationResponse
       */
      Models::ConfirmNotificationResponse confirmNotificationWithOptions(const Models::ConfirmNotificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Confirms that the merchant has received and processed a notification message. After this call, the message will no longer be returned in subsequent queries.
       *
       * @description Confirms the receipt of a subscription notification failure message.
       * - After a successful call, the message will no longer be returned in subsequent queries. The platform considers that the merchant has correctly processed the message.
       *
       * @param request ConfirmNotificationRequest
       * @return ConfirmNotificationResponse
       */
      Models::ConfirmNotificationResponse confirmNotification(const Models::ConfirmNotificationRequest &request);

      /**
       * @summary Calls the CreateOrder operation to create an order.
       * Before calling this operation, make sure that you fully understand the billing method and pricing of Alibaba Cloud Marketplace products.
       * To create an order for a commercial image, refer to [CreateInstance](https://help.aliyun.com/document_detail/25499.html).
       *
       * @description Before calling this operation, make sure that you fully understand the billing method and [pricing](https://market.aliyun.com/) of Alibaba Cloud Marketplace products.
       * To create an order for a commercial image, refer to [CreateInstance](https://help.aliyun.com/document_detail/25499.html).
       *
       * @param request CreateOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrderResponse
       */
      Models::CreateOrderResponse createOrderWithOptions(const Models::CreateOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateOrder operation to create an order.
       * Before calling this operation, make sure that you fully understand the billing method and pricing of Alibaba Cloud Marketplace products.
       * To create an order for a commercial image, refer to [CreateInstance](https://help.aliyun.com/document_detail/25499.html).
       *
       * @description Before calling this operation, make sure that you fully understand the billing method and [pricing](https://market.aliyun.com/) of Alibaba Cloud Marketplace products.
       * To create an order for a commercial image, refer to [CreateInstance](https://help.aliyun.com/document_detail/25499.html).
       *
       * @param request CreateOrderRequest
       * @return CreateOrderResponse
       */
      Models::CreateOrderResponse createOrder(const Models::CreateOrderRequest &request);

      /**
       * @summary Query cross-account role authorization information, including the authorized user\\"s Alibaba Cloud account UID, name, authorization time, and authorized role name.
       *
       * @param request CrossAccountVerifyTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CrossAccountVerifyTokenResponse
       */
      Models::CrossAccountVerifyTokenResponse crossAccountVerifyTokenWithOptions(const Models::CrossAccountVerifyTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query cross-account role authorization information, including the authorized user\\"s Alibaba Cloud account UID, name, authorization time, and authorized role name.
       *
       * @param request CrossAccountVerifyTokenRequest
       * @return CrossAccountVerifyTokenResponse
       */
      Models::CrossAccountVerifyTokenResponse crossAccountVerifyToken(const Models::CrossAccountVerifyTokenRequest &request);

      /**
       * @summary Retrieves the API quota, total capacity, and usage data of a user.
       *
       * @description ### **Note: This API operation supports Alibaba Cloud accounts and RAM users in retrieving API quota, total capacity, and usage information.**
       *
       * @param request DescribeApiMeteringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiMeteringResponse
       */
      Models::DescribeApiMeteringResponse describeApiMeteringWithOptions(const Models::DescribeApiMeteringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the API quota, total capacity, and usage data of a user.
       *
       * @description ### **Note: This API operation supports Alibaba Cloud accounts and RAM users in retrieving API quota, total capacity, and usage information.**
       *
       * @param request DescribeApiMeteringRequest
       * @return DescribeApiMeteringResponse
       */
      Models::DescribeApiMeteringResponse describeApiMetering(const Models::DescribeApiMeteringRequest &request);

      /**
       * @summary Calls DescribeCurrentNodeInfo to retrieve the process information of the current node.
       *
       * @description **
       * **.
       *
       * @param request DescribeCurrentNodeInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCurrentNodeInfoResponse
       */
      Models::DescribeCurrentNodeInfoResponse describeCurrentNodeInfoWithOptions(const Models::DescribeCurrentNodeInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeCurrentNodeInfo to retrieve the process information of the current node.
       *
       * @description **
       * **.
       *
       * @param request DescribeCurrentNodeInfoRequest
       * @return DescribeCurrentNodeInfoResponse
       */
      Models::DescribeCurrentNodeInfoResponse describeCurrentNodeInfo(const Models::DescribeCurrentNodeInfoRequest &request);

      /**
       * @summary Retrieves a paginated list of promotional products with detailed information.
       *
       * @description Call this operation by using a promotion service provider account.
       *
       * @param request DescribeDistributionProductsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDistributionProductsResponse
       */
      Models::DescribeDistributionProductsResponse describeDistributionProductsWithOptions(const Models::DescribeDistributionProductsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of promotional products with detailed information.
       *
       * @description Call this operation by using a promotion service provider account.
       *
       * @param request DescribeDistributionProductsRequest
       * @return DescribeDistributionProductsResponse
       */
      Models::DescribeDistributionProductsResponse describeDistributionProducts(const Models::DescribeDistributionProductsRequest &request);

      /**
       * @summary Retrieves promotion links for promoted products.
       *
       * @description Call this operation by using a promotion service provider account. Calls from non-promotion service provider accounts will fail.
       *
       * @param tmpReq DescribeDistributionProductsLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDistributionProductsLinkResponse
       */
      Models::DescribeDistributionProductsLinkResponse describeDistributionProductsLinkWithOptions(const Models::DescribeDistributionProductsLinkRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves promotion links for promoted products.
       *
       * @description Call this operation by using a promotion service provider account. Calls from non-promotion service provider accounts will fail.
       *
       * @param request DescribeDistributionProductsLinkRequest
       * @return DescribeDistributionProductsLinkResponse
       */
      Models::DescribeDistributionProductsLinkResponse describeDistributionProductsLink(const Models::DescribeDistributionProductsLinkRequest &request);

      /**
       * @summary Queries the list of failed subscription notifications. After Alibaba Cloud Marketplace fails to call a service provider\\"s message SPI, the service provider can use this operation to proactively query the failed notification information.
       *
       * @description Queries the information about failed subscription notifications for a service provider.
       * - If no unconfirmed failed notifications exist, TotalCount returns 0.
       *
       * @param request DescribeFailedNotificationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFailedNotificationsResponse
       */
      Models::DescribeFailedNotificationsResponse describeFailedNotificationsWithOptions(const Models::DescribeFailedNotificationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of failed subscription notifications. After Alibaba Cloud Marketplace fails to call a service provider\\"s message SPI, the service provider can use this operation to proactively query the failed notification information.
       *
       * @description Queries the information about failed subscription notifications for a service provider.
       * - If no unconfirmed failed notifications exist, TotalCount returns 0.
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
       * @summary Calls the DescribeInstance operation to query instance information.
       *
       * @param request DescribeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstanceWithOptions(const Models::DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeInstance operation to query instance information.
       *
       * @param request DescribeInstanceRequest
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstance(const Models::DescribeInstanceRequest &request);

      /**
       * @summary Queries instance information from the service provider side.
       *
       * @param request DescribeInstanceForIsvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceForIsvResponse
       */
      Models::DescribeInstanceForIsvResponse describeInstanceForIsvWithOptions(const Models::DescribeInstanceForIsvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instance information from the service provider side.
       *
       * @param request DescribeInstanceForIsvRequest
       * @return DescribeInstanceForIsvResponse
       */
      Models::DescribeInstanceForIsvResponse describeInstanceForIsv(const Models::DescribeInstanceForIsvRequest &request);

      /**
       * @summary Queries the list of services purchased by the user.
       *
       * @param request DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of services purchased by the user.
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary Queries the invoice information of a Cloud Marketplace vendor store.
       *
       * @description Queries business information based on an authorization code and first verifies whether the authorization code is valid.
       * - If the authorization code is invalid, an error message is returned.
       * - If the authorization code is valid, the authorization information is returned.
       *
       * @param request DescribeInvoiceForIsvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvoiceForIsvResponse
       */
      Models::DescribeInvoiceForIsvResponse describeInvoiceForIsvWithOptions(const Models::DescribeInvoiceForIsvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the invoice information of a Cloud Marketplace vendor store.
       *
       * @description Queries business information based on an authorization code and first verifies whether the authorization code is valid.
       * - If the authorization code is invalid, an error message is returned.
       * - If the authorization code is valid, the authorization information is returned.
       *
       * @param request DescribeInvoiceForIsvRequest
       * @return DescribeInvoiceForIsvResponse
       */
      Models::DescribeInvoiceForIsvResponse describeInvoiceForIsv(const Models::DescribeInvoiceForIsvRequest &request);

      /**
       * @summary Calls DescribeLicense to query license information.
       *
       * @param request DescribeLicenseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLicenseResponse
       */
      Models::DescribeLicenseResponse describeLicenseWithOptions(const Models::DescribeLicenseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeLicense to query license information.
       *
       * @param request DescribeLicenseRequest
       * @return DescribeLicenseResponse
       */
      Models::DescribeLicenseResponse describeLicense(const Models::DescribeLicenseRequest &request);

      /**
       * @summary Queries the details of a specified order.
       *
       * @param request DescribeOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOrderResponse
       */
      Models::DescribeOrderResponse describeOrderWithOptions(const Models::DescribeOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified order.
       *
       * @param request DescribeOrderRequest
       * @return DescribeOrderResponse
       */
      Models::DescribeOrderResponse describeOrder(const Models::DescribeOrderRequest &request);

      /**
       * @summary Queries order details from the service provider side.
       *
       * @param request DescribeOrderForIsvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOrderForIsvResponse
       */
      Models::DescribeOrderForIsvResponse describeOrderForIsvWithOptions(const Models::DescribeOrderForIsvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries order details from the service provider side.
       *
       * @param request DescribeOrderForIsvRequest
       * @return DescribeOrderForIsvResponse
       */
      Models::DescribeOrderForIsvResponse describeOrderForIsv(const Models::DescribeOrderForIsvRequest &request);

      /**
       * @summary Calls DescribePrice to query the price information of the corresponding product.
       *
       * @param request DescribePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePriceWithOptions(const Models::DescribePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribePrice to query the price information of the corresponding product.
       *
       * @param request DescribePriceRequest
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePrice(const Models::DescribePriceRequest &request);

      /**
       * @summary Queries the details of a specified product.
       *
       * @param request DescribeProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProductResponse
       */
      Models::DescribeProductResponse describeProductWithOptions(const Models::DescribeProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified product.
       *
       * @param request DescribeProductRequest
       * @return DescribeProductResponse
       */
      Models::DescribeProductResponse describeProduct(const Models::DescribeProductRequest &request);

      /**
       * @summary Retrieves a list of products that meet the specified conditions along with their details.
       *
       * @param request DescribeProductsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProductsResponse
       */
      Models::DescribeProductsResponse describeProductsWithOptions(const Models::DescribeProductsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of products that meet the specified conditions along with their details.
       *
       * @param request DescribeProductsRequest
       * @return DescribeProductsResponse
       */
      Models::DescribeProductsResponse describeProducts(const Models::DescribeProductsRequest &request);

      /**
       * @summary Queries a list of project attachments.
       *
       * @param request DescribeProjectAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProjectAttachmentsResponse
       */
      Models::DescribeProjectAttachmentsResponse describeProjectAttachmentsWithOptions(const Models::DescribeProjectAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of project attachments.
       *
       * @param request DescribeProjectAttachmentsRequest
       * @return DescribeProjectAttachmentsResponse
       */
      Models::DescribeProjectAttachmentsResponse describeProjectAttachments(const Models::DescribeProjectAttachmentsRequest &request);

      /**
       * @summary Calls DescribeProjectInfo to query project information.
       *
       * @param request DescribeProjectInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProjectInfoResponse
       */
      Models::DescribeProjectInfoResponse describeProjectInfoWithOptions(const Models::DescribeProjectInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeProjectInfo to query project information.
       *
       * @param request DescribeProjectInfoRequest
       * @return DescribeProjectInfoResponse
       */
      Models::DescribeProjectInfoResponse describeProjectInfo(const Models::DescribeProjectInfoRequest &request);

      /**
       * @summary Queries the list of messages for a project workflow.
       *
       * @param request DescribeProjectMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProjectMessagesResponse
       */
      Models::DescribeProjectMessagesResponse describeProjectMessagesWithOptions(const Models::DescribeProjectMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of messages for a project workflow.
       *
       * @param request DescribeProjectMessagesRequest
       * @return DescribeProjectMessagesResponse
       */
      Models::DescribeProjectMessagesResponse describeProjectMessages(const Models::DescribeProjectMessagesRequest &request);

      /**
       * @summary Queries the list of project flow nodes by calling DescribeProjectNodes.
       *
       * @description **
       * **.
       *
       * @param request DescribeProjectNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProjectNodesResponse
       */
      Models::DescribeProjectNodesResponse describeProjectNodesWithOptions(const Models::DescribeProjectNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of project flow nodes by calling DescribeProjectNodes.
       *
       * @description **
       * **.
       *
       * @param request DescribeProjectNodesRequest
       * @return DescribeProjectNodesResponse
       */
      Models::DescribeProjectNodesResponse describeProjectNodes(const Models::DescribeProjectNodesRequest &request);

      /**
       * @summary Calls DescribeProjectOperateLogs to retrieve the operation logs of a project flow.
       *
       * @description **
       * **.
       *
       * @param request DescribeProjectOperateLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProjectOperateLogsResponse
       */
      Models::DescribeProjectOperateLogsResponse describeProjectOperateLogsWithOptions(const Models::DescribeProjectOperateLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeProjectOperateLogs to retrieve the operation logs of a project flow.
       *
       * @description **
       * **.
       *
       * @param request DescribeProjectOperateLogsRequest
       * @return DescribeProjectOperateLogsResponse
       */
      Models::DescribeProjectOperateLogsResponse describeProjectOperateLogs(const Models::DescribeProjectOperateLogsRequest &request);

      /**
       * @summary Completes the current process by calling FinishCurrentProjectNode.
       *
       * @description **
       * **.
       *
       * @param request FinishCurrentProjectNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FinishCurrentProjectNodeResponse
       */
      Models::FinishCurrentProjectNodeResponse finishCurrentProjectNodeWithOptions(const Models::FinishCurrentProjectNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Completes the current process by calling FinishCurrentProjectNode.
       *
       * @description **
       * **.
       *
       * @param request FinishCurrentProjectNodeRequest
       * @return FinishCurrentProjectNodeResponse
       */
      Models::FinishCurrentProjectNodeResponse finishCurrentProjectNode(const Models::FinishCurrentProjectNodeRequest &request);

      /**
       * @summary Processes invoice acceptance requests.
       *
       * @description Queries information about failed subscription notifications for merchants.
       * - If no unconfirmed notification failure information exists, TotalCount returns 0.
       *
       * @param request ModifyInvoiceForIsvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInvoiceForIsvResponse
       */
      Models::ModifyInvoiceForIsvResponse modifyInvoiceForIsvWithOptions(const Models::ModifyInvoiceForIsvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Processes invoice acceptance requests.
       *
       * @description Queries information about failed subscription notifications for merchants.
       * - If no unconfirmed notification failure information exists, TotalCount returns 0.
       *
       * @param request ModifyInvoiceForIsvRequest
       * @return ModifyInvoiceForIsvResponse
       */
      Models::ModifyInvoiceForIsvResponse modifyInvoiceForIsv(const Models::ModifyInvoiceForIsvRequest &request);

      /**
       * @summary Calls PauseProject to pause a project.
       *
       * @description **
       * **.
       *
       * @param request PauseProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseProjectResponse
       */
      Models::PauseProjectResponse pauseProjectWithOptions(const Models::PauseProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls PauseProject to pause a project.
       *
       * @description **
       * **.
       *
       * @param request PauseProjectRequest
       * @return PauseProjectResponse
       */
      Models::PauseProjectResponse pauseProject(const Models::PauseProjectRequest &request);

      /**
       * @summary Pushes metering data.
       *
       * @description ### Encoding and format requirements
       * - All request parameters must be URL-encoded.
       * - Ensure that the Metering field in the parameters is submitted strictly according to the examples in the documentation. In the past, many submissions were not valid JSON fields. You can use a JSON formatting tool to check the field before submission. Otherwise, the API call will fail.
       * ### Request frequency and single write volume limits
       * - For hourly or daily metering: Alibaba Cloud Marketplace limits requests to once every 60 seconds per InstanceId, and each request supports writing up to 100 metering data records.
       * - For real-time metering (for large model scenarios): Alibaba Cloud Marketplace has no frequency limit for requests per InstanceId, and each request supports writing up to 10 metering data records.
       * ### Limits on batch pushing of metering data
       * - Batch pushing across InstanceIds of different products is not supported. When pushing in batches, ensure that all InstanceIds belong to the same product.
       * - When pushing metering data in batches, the InstanceId attribute must belong to instances generated by the same product. Pushing instances of multiple products at the same time is not supported.
       * ### Time requirements for pushing metering data
       * - For products billed hourly, the billing cutoff time is the next hour, and metering data must be pushed on time. For example, if the metering data is for 08:10 to 08:20, it must be pushed before 09:59. Otherwise, no bill will be generated. The rule for daily billing is similar: the data for the previous day must be pushed before 01:59 the next day. Otherwise, an error will be reported when pushing the metering data, and no bill will be generated.
       * - For products billed by the minute, real-time pushed data is aggregated by the minute, and bills are generated by the minute.
       * - If a product is set to real-time billing, StartTime and EndTime can be of any time width, but EndTime must be greater than StartTime.
       * - If a product is set to non-real-time billing (such as hourly or daily), the interval between StartTime and EndTime must be greater than 5 minutes.
       * ### Timeliness of pushing data and billing
       * - If the instance status is expired, metering data pushed after the expiration will not be billed. For example, if an instance expires at 2025-07-09 12:20:00, the metering data pushed for the hour from 2025-07-09 13:00:00 to 2025-07-09 14:00:00 will not be billed. However, the metering data for the hour from 2025-07-09 12:00:00 to 2025-07-09 13:00:00 can still be billed normally.
       * - After metering data is pushed, bills are not generated immediately. For hourly billing, the bill is generated in the next time interval. For example, the bill for 08:00 to 09:00 is generated after 10:00. For daily billing, the bill is generated the next day. After the bill is generated, customers can view it in [Alibaba Cloud Bill Details](https://billing-cost.console.aliyun.com/finance/expense-report/expense-detail-by-instance).
       * ### Rounding down of amounts
       * - If the bill amount is too small and a single bill amount is less than 0.01 CNY, the bill amount for the buyer is 0. For example, if the unit price of a product is 0.001 CNY per time and it is billed by the minute, and 9 times are consumed every minute, the bill amount per minute is 0. If it is billed hourly and the bill amount for a single hour is less than 0.01 CNY, the bill amount for the buyer is 0. The probability of rounding down to zero for minute-level billing may be higher than that for hourly billing.
       *
       * @param request PushMeteringDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushMeteringDataResponse
       */
      Models::PushMeteringDataResponse pushMeteringDataWithOptions(const Models::PushMeteringDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pushes metering data.
       *
       * @description ### Encoding and format requirements
       * - All request parameters must be URL-encoded.
       * - Ensure that the Metering field in the parameters is submitted strictly according to the examples in the documentation. In the past, many submissions were not valid JSON fields. You can use a JSON formatting tool to check the field before submission. Otherwise, the API call will fail.
       * ### Request frequency and single write volume limits
       * - For hourly or daily metering: Alibaba Cloud Marketplace limits requests to once every 60 seconds per InstanceId, and each request supports writing up to 100 metering data records.
       * - For real-time metering (for large model scenarios): Alibaba Cloud Marketplace has no frequency limit for requests per InstanceId, and each request supports writing up to 10 metering data records.
       * ### Limits on batch pushing of metering data
       * - Batch pushing across InstanceIds of different products is not supported. When pushing in batches, ensure that all InstanceIds belong to the same product.
       * - When pushing metering data in batches, the InstanceId attribute must belong to instances generated by the same product. Pushing instances of multiple products at the same time is not supported.
       * ### Time requirements for pushing metering data
       * - For products billed hourly, the billing cutoff time is the next hour, and metering data must be pushed on time. For example, if the metering data is for 08:10 to 08:20, it must be pushed before 09:59. Otherwise, no bill will be generated. The rule for daily billing is similar: the data for the previous day must be pushed before 01:59 the next day. Otherwise, an error will be reported when pushing the metering data, and no bill will be generated.
       * - For products billed by the minute, real-time pushed data is aggregated by the minute, and bills are generated by the minute.
       * - If a product is set to real-time billing, StartTime and EndTime can be of any time width, but EndTime must be greater than StartTime.
       * - If a product is set to non-real-time billing (such as hourly or daily), the interval between StartTime and EndTime must be greater than 5 minutes.
       * ### Timeliness of pushing data and billing
       * - If the instance status is expired, metering data pushed after the expiration will not be billed. For example, if an instance expires at 2025-07-09 12:20:00, the metering data pushed for the hour from 2025-07-09 13:00:00 to 2025-07-09 14:00:00 will not be billed. However, the metering data for the hour from 2025-07-09 12:00:00 to 2025-07-09 13:00:00 can still be billed normally.
       * - After metering data is pushed, bills are not generated immediately. For hourly billing, the bill is generated in the next time interval. For example, the bill for 08:00 to 09:00 is generated after 10:00. For daily billing, the bill is generated the next day. After the bill is generated, customers can view it in [Alibaba Cloud Bill Details](https://billing-cost.console.aliyun.com/finance/expense-report/expense-detail-by-instance).
       * ### Rounding down of amounts
       * - If the bill amount is too small and a single bill amount is less than 0.01 CNY, the bill amount for the buyer is 0. For example, if the unit price of a product is 0.001 CNY per time and it is billed by the minute, and 9 times are consumed every minute, the bill amount per minute is 0. If it is billed hourly and the bill amount for a single hour is less than 0.01 CNY, the bill amount for the buyer is 0. The probability of rounding down to zero for minute-level billing may be higher than that for hourly billing.
       *
       * @param request PushMeteringDataRequest
       * @return PushMeteringDataResponse
       */
      Models::PushMeteringDataResponse pushMeteringData(const Models::PushMeteringDataRequest &request);

      /**
       * @summary Pushes usage deductions for prepaid pay-per-use products to Alibaba Cloud Marketplace.
       *
       * @description ## Request description
       * - This operation applies to prepaid pay-per-use products. Service providers can use this operation to push user usage deductions to Alibaba Cloud Marketplace.
       * - This operation uses a forced update mode to directly deduct the specified number of uses. The caller must determine whether the user\\"s usage exceeds the limit.
       * - All request parameters must be URL-encoded.
       * - Use the `ClientToken` parameter to ensure idempotence. The same `ClientToken` cannot be submitted repeatedly within 24 hours.
       * - Retries for the same deduction operation must use the same `ClientToken`. New operations must use a new `ClientToken`.
       * - If the previous request succeeded, even if no response was received due to a gateway timeout, a retry with the same `ClientToken` returns a success response idempotently without duplicate deductions.
       * - If the result of the previous request is undetermined and the request is in the PROCESSING state, a retry with the same `ClientToken` returns a `DuplicateClientToken` error. Retry later or contact Alibaba Cloud Marketplace to confirm the push status.
       * - Only one operation can be executed for the same `InstanceId` at a time. Concurrent requests return a `Throttling` error. Retry later.
       * - You can directly call this operation in [OpenAPI Explorer](https://api.aliyun.com/#product=Market&api=PushTimesUsage&type=RPC&version=2015-11-01) without the need to manually calculate the signature.
       *
       * @param request PushTimesUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushTimesUsageResponse
       */
      Models::PushTimesUsageResponse pushTimesUsageWithOptions(const Models::PushTimesUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pushes usage deductions for prepaid pay-per-use products to Alibaba Cloud Marketplace.
       *
       * @description ## Request description
       * - This operation applies to prepaid pay-per-use products. Service providers can use this operation to push user usage deductions to Alibaba Cloud Marketplace.
       * - This operation uses a forced update mode to directly deduct the specified number of uses. The caller must determine whether the user\\"s usage exceeds the limit.
       * - All request parameters must be URL-encoded.
       * - Use the `ClientToken` parameter to ensure idempotence. The same `ClientToken` cannot be submitted repeatedly within 24 hours.
       * - Retries for the same deduction operation must use the same `ClientToken`. New operations must use a new `ClientToken`.
       * - If the previous request succeeded, even if no response was received due to a gateway timeout, a retry with the same `ClientToken` returns a success response idempotently without duplicate deductions.
       * - If the result of the previous request is undetermined and the request is in the PROCESSING state, a retry with the same `ClientToken` returns a `DuplicateClientToken` error. Retry later or contact Alibaba Cloud Marketplace to confirm the push status.
       * - Only one operation can be executed for the same `InstanceId` at a time. Concurrent requests return a `Throttling` error. Retry later.
       * - You can directly call this operation in [OpenAPI Explorer](https://api.aliyun.com/#product=Market&api=PushTimesUsage&type=RPC&version=2015-11-01) without the need to manually calculate the signature.
       *
       * @param request PushTimesUsageRequest
       * @return PushTimesUsageResponse
       */
      Models::PushTimesUsageResponse pushTimesUsage(const Models::PushTimesUsageRequest &request);

      /**
       * @summary Calls ResumeProject to resume a paused project.
       *
       * @description **
       * **.
       *
       * @param request ResumeProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeProjectResponse
       */
      Models::ResumeProjectResponse resumeProjectWithOptions(const Models::ResumeProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls ResumeProject to resume a paused project.
       *
       * @description **
       * **.
       *
       * @param request ResumeProjectRequest
       * @return ResumeProjectResponse
       */
      Models::ResumeProjectResponse resumeProject(const Models::ResumeProjectRequest &request);

      /**
       * @summary Triggers a rejection of the current process node by calling RollbackCurrentProjectNode.
       *
       * @description **
       * **.
       *
       * @param request RollbackCurrentProjectNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackCurrentProjectNodeResponse
       */
      Models::RollbackCurrentProjectNodeResponse rollbackCurrentProjectNodeWithOptions(const Models::RollbackCurrentProjectNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers a rejection of the current process node by calling RollbackCurrentProjectNode.
       *
       * @description **
       * **.
       *
       * @param request RollbackCurrentProjectNodeRequest
       * @return RollbackCurrentProjectNodeResponse
       */
      Models::RollbackCurrentProjectNodeResponse rollbackCurrentProjectNode(const Models::RollbackCurrentProjectNodeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
