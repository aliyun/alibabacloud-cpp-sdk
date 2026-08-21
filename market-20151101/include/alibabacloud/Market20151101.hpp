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
       * @summary Retrieves the API quota data of a user, including the remaining quota, total quota, and usage.
       *
       * @description ### **Note: This operation supports both Alibaba Cloud accounts and RAM users to retrieve API remaining quota, total quota, and usage information.**.
       *
       * @param request DescribeApiMeteringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiMeteringResponse
       */
      Models::DescribeApiMeteringResponse describeApiMeteringWithOptions(const Models::DescribeApiMeteringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the API quota data of a user, including the remaining quota, total quota, and usage.
       *
       * @description ### **Note: This operation supports both Alibaba Cloud accounts and RAM users to retrieve API remaining quota, total quota, and usage information.**.
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
       * @summary Queries the invoice information of a supplier store in Alibaba Cloud Marketplace.
       *
       * @description Queries business information based on an authorization code. The system first verifies whether the authorization code is valid.
       * - If the authorization code is invalid, an error message is returned.
       * - If the authorization code is valid, the authorization information is returned.
       *
       * @param request DescribeInvoiceForIsvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvoiceForIsvResponse
       */
      Models::DescribeInvoiceForIsvResponse describeInvoiceForIsvWithOptions(const Models::DescribeInvoiceForIsvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the invoice information of a supplier store in Alibaba Cloud Marketplace.
       *
       * @description Queries business information based on an authorization code. The system first verifies whether the authorization code is valid.
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
       * @summary Queries the details of a specified product by calling DescribeProduct.
       *
       * @param request DescribeProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProductResponse
       */
      Models::DescribeProductResponse describeProductWithOptions(const Models::DescribeProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified product by calling DescribeProduct.
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
       * @summary Calls DescribeProjectAttachments to retrieve the list of project attachments.
       *
       * @param request DescribeProjectAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProjectAttachmentsResponse
       */
      Models::DescribeProjectAttachmentsResponse describeProjectAttachmentsWithOptions(const Models::DescribeProjectAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeProjectAttachments to retrieve the list of project attachments.
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
       * @summary Calls DescribeProjectMessages to retrieve the list of project workflow messages.
       *
       * @param request DescribeProjectMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProjectMessagesResponse
       */
      Models::DescribeProjectMessagesResponse describeProjectMessagesWithOptions(const Models::DescribeProjectMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeProjectMessages to retrieve the list of project workflow messages.
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
       * @summary Call PushMeteringData to push metering data.
       *
       * @description ### Encoding and Format Requirements
       * - All request parameters must be URLEncoded.
       * - The Metering field in the parameters must strictly follow the format in the example in this document. It has been found that many submissions are not valid JSON. Please verify the format with a JSON formatting tool before submission, otherwise the API call will fail.
       * ### Request Frequency and Single Write Volume Limits
       * - For hourly/daily metering: Cloud Marketplace limits requests for each InstanceId to once per 60 seconds, and each request supports writing up to 100 metering data entries.
       * - For real-time metering (for large model usage scenarios): Cloud Marketplace has no frequency limit for each InstanceId, and each request supports writing up to 10 metering data entries.
       * ### Batch Push Limits for Metering Data
       * - Cross-product InstanceId batch pushing is not supported. When batch pushing, ensure all InstanceIds belong to the same product.
       * - When batch pushing metering data, the "InstanceId" attribute must belong to instances generated by the same product. Pushing instances from multiple products simultaneously is currently not supported.
       * ### Time Requirements for Metering Data Push
       * - For products billed by the hour, the billing deadline is the next hour, and metering data must be pushed on time. For example, if the metering data is for 8:10-08:20, it must be pushed before 9:59, otherwise billing will not occur. The rule for daily billing is similar: the previous day\\"s data must be pushed before 1:59 of the next day, otherwise the metering push will return an error and billing will not occur.
       * - For products billed by the minute, real-time pushed data is aggregated by the minute and billed by the minute.
       * - If the product is set to real-time billing, StartTime and EndTime can have any time span, but EndTime must be greater than StartTime.
       * - If the product is set to non-real-time billing (i.e., hourly, daily, etc.), the interval between StartTime and EndTime must be greater than 5 minutes.
       * ### Timeliness of Pushing and Billing
       * - If the instance status has expired, metering data pushed after the instance expiration will not be billed. For example, if the instance expired at 2025-07-09 12:20:00, metering data pushed for the period 2025-07-09 13:00:00-2025-07-09 14:00:00 will not be billed. Metering data for the period 2025-07-09 12:00:00-2025-07-09 13:00:00 can still be billed normally.
       * - After pushing metering data, billing does not occur immediately. For hourly billing, bills are generated in the next time interval. For example, for hourly billing, the bill for 8:00-9:00 is generated after 10:00. For daily billing, bills are generated the next day. After billing, customers can view the bills in [Alibaba Cloud Bill Details](https://billing-cost.console.aliyun.com/finance/expense-report/expense-detail-by-instance).
       * ### Amount Rounding to Zero
       * - If the bill amount is too small and the single bill amount is less than 0.01 CNY, the bill amount on the buyer\\"s side will be 0. For example, if the product unit price is 0.001 CNY/count and is billed by the minute with 9 uses per minute, the bill amount per minute is 0. If billed by the hour and the single hourly bill amount is less than 0.01, the buyer\\"s bill amount will be 0. The probability of minute-level billing amounts being rounded to zero may be higher than that of hourly billing.
       *
       * @param request PushMeteringDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushMeteringDataResponse
       */
      Models::PushMeteringDataResponse pushMeteringDataWithOptions(const Models::PushMeteringDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call PushMeteringData to push metering data.
       *
       * @description ### Encoding and Format Requirements
       * - All request parameters must be URLEncoded.
       * - The Metering field in the parameters must strictly follow the format in the example in this document. It has been found that many submissions are not valid JSON. Please verify the format with a JSON formatting tool before submission, otherwise the API call will fail.
       * ### Request Frequency and Single Write Volume Limits
       * - For hourly/daily metering: Cloud Marketplace limits requests for each InstanceId to once per 60 seconds, and each request supports writing up to 100 metering data entries.
       * - For real-time metering (for large model usage scenarios): Cloud Marketplace has no frequency limit for each InstanceId, and each request supports writing up to 10 metering data entries.
       * ### Batch Push Limits for Metering Data
       * - Cross-product InstanceId batch pushing is not supported. When batch pushing, ensure all InstanceIds belong to the same product.
       * - When batch pushing metering data, the "InstanceId" attribute must belong to instances generated by the same product. Pushing instances from multiple products simultaneously is currently not supported.
       * ### Time Requirements for Metering Data Push
       * - For products billed by the hour, the billing deadline is the next hour, and metering data must be pushed on time. For example, if the metering data is for 8:10-08:20, it must be pushed before 9:59, otherwise billing will not occur. The rule for daily billing is similar: the previous day\\"s data must be pushed before 1:59 of the next day, otherwise the metering push will return an error and billing will not occur.
       * - For products billed by the minute, real-time pushed data is aggregated by the minute and billed by the minute.
       * - If the product is set to real-time billing, StartTime and EndTime can have any time span, but EndTime must be greater than StartTime.
       * - If the product is set to non-real-time billing (i.e., hourly, daily, etc.), the interval between StartTime and EndTime must be greater than 5 minutes.
       * ### Timeliness of Pushing and Billing
       * - If the instance status has expired, metering data pushed after the instance expiration will not be billed. For example, if the instance expired at 2025-07-09 12:20:00, metering data pushed for the period 2025-07-09 13:00:00-2025-07-09 14:00:00 will not be billed. Metering data for the period 2025-07-09 12:00:00-2025-07-09 13:00:00 can still be billed normally.
       * - After pushing metering data, billing does not occur immediately. For hourly billing, bills are generated in the next time interval. For example, for hourly billing, the bill for 8:00-9:00 is generated after 10:00. For daily billing, bills are generated the next day. After billing, customers can view the bills in [Alibaba Cloud Bill Details](https://billing-cost.console.aliyun.com/finance/expense-report/expense-detail-by-instance).
       * ### Amount Rounding to Zero
       * - If the bill amount is too small and the single bill amount is less than 0.01 CNY, the bill amount on the buyer\\"s side will be 0. For example, if the product unit price is 0.001 CNY/count and is billed by the minute with 9 uses per minute, the bill amount per minute is 0. If billed by the hour and the single hourly bill amount is less than 0.01, the buyer\\"s bill amount will be 0. The probability of minute-level billing amounts being rounded to zero may be higher than that of hourly billing.
       *
       * @param request PushMeteringDataRequest
       * @return PushMeteringDataResponse
       */
      Models::PushMeteringDataResponse pushMeteringData(const Models::PushMeteringDataRequest &request);

      /**
       * @summary Pushes usage deduction for a prepaid per-use product to Alibaba Cloud Marketplace on behalf of a service provider.
       *
       * @description ## Operation description
       * - This operation applies to prepaid per-use products. Service providers can call this operation to push usage deductions to Alibaba Cloud Marketplace.
       * - The operation uses a forced update mode that directly deducts the specified number of uses. The caller must determine whether the user\\"s usage exceeds the quota.
       * - All request parameters must be URL-encoded.
       * - Use the `ClientToken` parameter for idempotency control. The same `ClientToken` cannot be submitted more than once within 24 hours.
       * - Retries for the same deduction operation must use the same `ClientToken`. Use a new `ClientToken` for new business operations.
       * - If the previous request succeeded (even if no response was received due to a gateway timeout), retrying with the same `ClientToken` returns a success response idempotently without duplicate deductions.
       * - If the result of the previous request is undetermined (in PROCESSING state), retrying with the same `ClientToken` returns a `DuplicateClientToken` error. Retry later or contact Alibaba Cloud Marketplace to confirm the push status.
       * - Only one operation can be executed at a time for the same `InstanceId`. Concurrent requests return a `Throttling` error. Retry later.
       * - You can run this operation in [OpenAPI Explorer](https://api.aliyun.com/#product=Market&api=PushTimesUsage&type=RPC&version=2015-11-01) without calculating signatures.
       *
       * @param request PushTimesUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushTimesUsageResponse
       */
      Models::PushTimesUsageResponse pushTimesUsageWithOptions(const Models::PushTimesUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pushes usage deduction for a prepaid per-use product to Alibaba Cloud Marketplace on behalf of a service provider.
       *
       * @description ## Operation description
       * - This operation applies to prepaid per-use products. Service providers can call this operation to push usage deductions to Alibaba Cloud Marketplace.
       * - The operation uses a forced update mode that directly deducts the specified number of uses. The caller must determine whether the user\\"s usage exceeds the quota.
       * - All request parameters must be URL-encoded.
       * - Use the `ClientToken` parameter for idempotency control. The same `ClientToken` cannot be submitted more than once within 24 hours.
       * - Retries for the same deduction operation must use the same `ClientToken`. Use a new `ClientToken` for new business operations.
       * - If the previous request succeeded (even if no response was received due to a gateway timeout), retrying with the same `ClientToken` returns a success response idempotently without duplicate deductions.
       * - If the result of the previous request is undetermined (in PROCESSING state), retrying with the same `ClientToken` returns a `DuplicateClientToken` error. Retry later or contact Alibaba Cloud Marketplace to confirm the push status.
       * - Only one operation can be executed at a time for the same `InstanceId`. Concurrent requests return a `Throttling` error. Retry later.
       * - You can run this operation in [OpenAPI Explorer](https://api.aliyun.com/#product=Market&api=PushTimesUsage&type=RPC&version=2015-11-01) without calculating signatures.
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
