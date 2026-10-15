// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_BSSOPENAPI20230930_HPP_
#define ALIBABACLOUD_BSSOPENAPI20230930_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/BssOpenApi20230930Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/BssOpenApi20230930.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 添加优惠券抵扣标签
       *
       * @param tmpReq AddCouponDeductTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCouponDeductTagResponse
       */
      Models::AddCouponDeductTagResponse addCouponDeductTagWithOptions(const Models::AddCouponDeductTagRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加优惠券抵扣标签
       *
       * @param request AddCouponDeductTagRequest
       * @return AddCouponDeductTagResponse
       */
      Models::AddCouponDeductTagResponse addCouponDeductTag(const Models::AddCouponDeductTagRequest &request);

      /**
       * @summary 席位新增
       *
       * @param request AddCreditSeatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCreditSeatsResponse
       */
      Models::AddCreditSeatsResponse addCreditSeatsWithOptions(const Models::AddCreditSeatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 席位新增
       *
       * @param request AddCreditSeatsRequest
       * @return AddCreditSeatsResponse
       */
      Models::AddCreditSeatsResponse addCreditSeats(const Models::AddCreditSeatsRequest &request);

      /**
       * @summary Allocates resource instances (instance-based and attached-resource-based) from a source cost center to a destination cost center.
       *
       * @param tmpReq AllocateCostCenterResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateCostCenterResourceResponse
       */
      Models::AllocateCostCenterResourceResponse allocateCostCenterResourceWithOptions(const Models::AllocateCostCenterResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Allocates resource instances (instance-based and attached-resource-based) from a source cost center to a destination cost center.
       *
       * @param request AllocateCostCenterResourceRequest
       * @return AllocateCostCenterResourceResponse
       */
      Models::AllocateCostCenterResourceResponse allocateCostCenterResource(const Models::AllocateCostCenterResourceRequest &request);

      /**
       * @summary Cancels the low balance alert for a fund account.
       *
       * @description Cancels the low balance alert for a fund account.
       *
       * @param request CancelFundAccountLowAvailableAmountAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelFundAccountLowAvailableAmountAlarmResponse
       */
      Models::CancelFundAccountLowAvailableAmountAlarmResponse cancelFundAccountLowAvailableAmountAlarmWithOptions(const Models::CancelFundAccountLowAvailableAmountAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the low balance alert for a fund account.
       *
       * @description Cancels the low balance alert for a fund account.
       *
       * @param request CancelFundAccountLowAvailableAmountAlarmRequest
       * @return CancelFundAccountLowAvailableAmountAlarmResponse
       */
      Models::CancelFundAccountLowAvailableAmountAlarmResponse cancelFundAccountLowAvailableAmountAlarm(const Models::CancelFundAccountLowAvailableAmountAlarmRequest &request);

      /**
       * @summary 提货券账户检查是否存在
       *
       * @param request CheckAccountExistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckAccountExistResponse
       */
      Models::CheckAccountExistResponse checkAccountExistWithOptions(const Models::CheckAccountExistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提货券账户检查是否存在
       *
       * @param request CheckAccountExistRequest
       * @return CheckAccountExistResponse
       */
      Models::CheckAccountExistResponse checkAccountExist(const Models::CheckAccountExistRequest &request);

      /**
       * @summary Creates cost centers.
       *
       * @description Creates one or more cost centers.
       *
       * @param tmpReq CreateCostCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCostCenterResponse
       */
      Models::CreateCostCenterResponse createCostCenterWithOptions(const Models::CreateCostCenterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates cost centers.
       *
       * @description Creates one or more cost centers.
       *
       * @param request CreateCostCenterRequest
       * @return CreateCostCenterResponse
       */
      Models::CreateCostCenterResponse createCostCenter(const Models::CreateCostCenterRequest &request);

      /**
       * @summary Creates an automatic allocation rule for a financial unit.
       *
       * @param tmpReq CreateCostCenterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCostCenterRuleResponse
       */
      Models::CreateCostCenterRuleResponse createCostCenterRuleWithOptions(const Models::CreateCostCenterRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an automatic allocation rule for a financial unit.
       *
       * @param request CreateCostCenterRuleRequest
       * @return CreateCostCenterRuleResponse
       */
      Models::CreateCostCenterRuleResponse createCostCenterRule(const Models::CreateCostCenterRuleRequest &request);

      /**
       * @summary 创建坐席
       *
       * @param request CreateCreditSeatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCreditSeatResponse
       */
      Models::CreateCreditSeatResponse createCreditSeatWithOptions(const Models::CreateCreditSeatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建坐席
       *
       * @param request CreateCreditSeatRequest
       * @return CreateCreditSeatResponse
       */
      Models::CreateCreditSeatResponse createCreditSeat(const Models::CreateCreditSeatRequest &request);

      /**
       * @summary Create payment relationships for a fund account
       *
       * @param tmpReq CreateFundAccountPayRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFundAccountPayRelationResponse
       */
      Models::CreateFundAccountPayRelationResponse createFundAccountPayRelationWithOptions(const Models::CreateFundAccountPayRelationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create payment relationships for a fund account
       *
       * @param request CreateFundAccountPayRelationRequest
       * @return CreateFundAccountPayRelationResponse
       */
      Models::CreateFundAccountPayRelationResponse createFundAccountPayRelation(const Models::CreateFundAccountPayRelationRequest &request);

      /**
       * @summary Creates a fund allocation or revocation for an account.
       *
       * @param request CreateFundAccountTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFundAccountTransferResponse
       */
      Models::CreateFundAccountTransferResponse createFundAccountTransferWithOptions(const Models::CreateFundAccountTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a fund allocation or revocation for an account.
       *
       * @param request CreateFundAccountTransferRequest
       * @return CreateFundAccountTransferResponse
       */
      Models::CreateFundAccountTransferResponse createFundAccountTransfer(const Models::CreateFundAccountTransferRequest &request);

      /**
       * @summary Applies for an invoice.
       *
       * @param tmpReq CreateInvoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInvoiceResponse
       */
      Models::CreateInvoiceResponse createInvoiceWithOptions(const Models::CreateInvoiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for an invoice.
       *
       * @param request CreateInvoiceRequest
       * @return CreateInvoiceResponse
       */
      Models::CreateInvoiceResponse createInvoice(const Models::CreateInvoiceRequest &request);

      /**
       * @summary Creates a billing report subscription.
       *
       * @description When you call this operation, note the following items:
       * - You can subscribe to only one type of billing file at a time.
       * - Except for monthly billing PDFs, starting from the day after the subscription is created, a billing file containing all detailed data from the beginning of the current month to the current day is pushed daily. A full billing file for the entire previous billing cycle is pushed before the 4th day of each month.
       * - Monthly billing PDFs for the previous month are pushed before the 4th day of each month.
       * - Billing files generated on a daily basis may be delayed. Delayed bills are pushed on the day after they are generated and may include bills that were delayed and generated on the previous day. Pull the full files for the previous month at the beginning of each month.
       * > Apply for the billing subscription permissions as described in the documentation: [Billing subscription](https://www.alibabacloud.com/help/en/user-center/user-guide/billing-subscription).
       * - This subscription and the billing subscription in the Expenses and Costs console are the same feature, and subscriptions are interoperable.
       * - When you subscribe to a directory under a bucket, make sure that the directory naming conventions are met:
       *     - Emojis are not allowed. Use valid UTF-8 characters.
       *     - The forward slash (/) is used to separate paths and create subdirectories. Do not start the path with a forward slash (/) or a backslash (\\), and do not use consecutive forward slashes.
       *     - Subdirectories named .. are not allowed.
       *     - The total length must be 1 to 254 characters.
       * - File names:
       *     - Example: **consumeDetailBillV2** (billing item details)
       *     
       *         - Format of the file name pushed daily: `{Account UID}_{Site ID}_{Bill type}_{YYYYMM|YYYYMMDD}`. Example: `169**_2688801000001_consumeDetailBillV2_20190312`.
       *     
       *         - Format of the complete file name pushed at the beginning of the next month: `{Account UID}_{Site ID}_{Bill type}_{YYYYMM|YYYYMM}`. Example: `169**_2688801000001_consumeDetailBillV2_201903`.
       * - Monthly billing PDF files are in the .pdf format, and other files are in the .csv format. When the data volume is large, the system automatically splits an exported bill into multiple files and compresses them into one or more ZIP files. The ZIP file names follow the same format.
       *
       * @param tmpReq CreateReportDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReportDefinitionResponse
       */
      Models::CreateReportDefinitionResponse createReportDefinitionWithOptions(const Models::CreateReportDefinitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a billing report subscription.
       *
       * @description When you call this operation, note the following items:
       * - You can subscribe to only one type of billing file at a time.
       * - Except for monthly billing PDFs, starting from the day after the subscription is created, a billing file containing all detailed data from the beginning of the current month to the current day is pushed daily. A full billing file for the entire previous billing cycle is pushed before the 4th day of each month.
       * - Monthly billing PDFs for the previous month are pushed before the 4th day of each month.
       * - Billing files generated on a daily basis may be delayed. Delayed bills are pushed on the day after they are generated and may include bills that were delayed and generated on the previous day. Pull the full files for the previous month at the beginning of each month.
       * > Apply for the billing subscription permissions as described in the documentation: [Billing subscription](https://www.alibabacloud.com/help/en/user-center/user-guide/billing-subscription).
       * - This subscription and the billing subscription in the Expenses and Costs console are the same feature, and subscriptions are interoperable.
       * - When you subscribe to a directory under a bucket, make sure that the directory naming conventions are met:
       *     - Emojis are not allowed. Use valid UTF-8 characters.
       *     - The forward slash (/) is used to separate paths and create subdirectories. Do not start the path with a forward slash (/) or a backslash (\\), and do not use consecutive forward slashes.
       *     - Subdirectories named .. are not allowed.
       *     - The total length must be 1 to 254 characters.
       * - File names:
       *     - Example: **consumeDetailBillV2** (billing item details)
       *     
       *         - Format of the file name pushed daily: `{Account UID}_{Site ID}_{Bill type}_{YYYYMM|YYYYMMDD}`. Example: `169**_2688801000001_consumeDetailBillV2_20190312`.
       *     
       *         - Format of the complete file name pushed at the beginning of the next month: `{Account UID}_{Site ID}_{Bill type}_{YYYYMM|YYYYMM}`. Example: `169**_2688801000001_consumeDetailBillV2_201903`.
       * - Monthly billing PDF files are in the .pdf format, and other files are in the .csv format. When the data volume is large, the system automatically splits an exported bill into multiple files and compresses them into one or more ZIP files. The ZIP file names follow the same format.
       *
       * @param request CreateReportDefinitionRequest
       * @return CreateReportDefinitionResponse
       */
      Models::CreateReportDefinitionResponse createReportDefinition(const Models::CreateReportDefinitionRequest &request);

      /**
       * @summary Deletes a cost center.
       *
       * @description This operation is in canary release and is available only to specific whitelisted users. Calling this operation too frequently may cause performance issues such as response timeouts.
       *
       * @param request DeleteCostCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCostCenterResponse
       */
      Models::DeleteCostCenterResponse deleteCostCenterWithOptions(const Models::DeleteCostCenterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cost center.
       *
       * @description This operation is in canary release and is available only to specific whitelisted users. Calling this operation too frequently may cause performance issues such as response timeouts.
       *
       * @param request DeleteCostCenterRequest
       * @return DeleteCostCenterResponse
       */
      Models::DeleteCostCenterResponse deleteCostCenter(const Models::DeleteCostCenterRequest &request);

      /**
       * @summary Deletes an automatic allocation rule for a cost center.
       *
       * @description This API is in canary release and is available only to specific whitelisted users. Calling this API too frequently may cause performance issues such as response timeouts.
       *
       * @param tmpReq DeleteCostCenterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCostCenterRuleResponse
       */
      Models::DeleteCostCenterRuleResponse deleteCostCenterRuleWithOptions(const Models::DeleteCostCenterRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an automatic allocation rule for a cost center.
       *
       * @description This API is in canary release and is available only to specific whitelisted users. Calling this API too frequently may cause performance issues such as response timeouts.
       *
       * @param request DeleteCostCenterRuleRequest
       * @return DeleteCostCenterRuleResponse
       */
      Models::DeleteCostCenterRuleResponse deleteCostCenterRule(const Models::DeleteCostCenterRuleRequest &request);

      /**
       * @summary 删除优惠券的抵扣标签
       *
       * @param tmpReq DeleteCouponDeductTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCouponDeductTagResponse
       */
      Models::DeleteCouponDeductTagResponse deleteCouponDeductTagWithOptions(const Models::DeleteCouponDeductTagRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除优惠券的抵扣标签
       *
       * @param request DeleteCouponDeductTagRequest
       * @return DeleteCouponDeductTagResponse
       */
      Models::DeleteCouponDeductTagResponse deleteCouponDeductTag(const Models::DeleteCouponDeductTagRequest &request);

      /**
       * @summary Deletes a bill report export subscription.
       *
       * @param request DeleteReportDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteReportDefinitionResponse
       */
      Models::DeleteReportDefinitionResponse deleteReportDefinitionWithOptions(const Models::DeleteReportDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a bill report export subscription.
       *
       * @param request DeleteReportDefinitionRequest
       * @return DeleteReportDefinitionResponse
       */
      Models::DeleteReportDefinitionResponse deleteReportDefinition(const Models::DeleteReportDefinitionRequest &request);

      /**
       * @summary Queries a list of coupons.
       *
       * @param tmpReq DescribeCouponRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCouponResponse
       */
      Models::DescribeCouponResponse describeCouponWithOptions(const Models::DescribeCouponRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of coupons.
       *
       * @param request DescribeCouponRequest
       * @return DescribeCouponResponse
       */
      Models::DescribeCouponResponse describeCoupon(const Models::DescribeCouponRequest &request);

      /**
       * @summary Queries the list of products available for a coupon.
       *
       * @param tmpReq DescribeCouponItemListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCouponItemListResponse
       */
      Models::DescribeCouponItemListResponse describeCouponItemListWithOptions(const Models::DescribeCouponItemListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of products available for a coupon.
       *
       * @param request DescribeCouponItemListRequest
       * @return DescribeCouponItemListResponse
       */
      Models::DescribeCouponItemListResponse describeCouponItemList(const Models::DescribeCouponItemListRequest &request);

      /**
       * @summary Queries resource plan deduction records.
       *
       * @param tmpReq DescribeDeductLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeductLogsResponse
       */
      Models::DescribeDeductLogsResponse describeDeductLogsWithOptions(const Models::DescribeDeductLogsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resource plan deduction records.
       *
       * @param request DescribeDeductLogsRequest
       * @return DescribeDeductLogsResponse
       */
      Models::DescribeDeductLogsResponse describeDeductLogs(const Models::DescribeDeductLogsRequest &request);

      /**
       * @summary Queries resource plan instances.
       *
       * @param tmpReq DescribeFrInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFrInstancesResponse
       */
      Models::DescribeFrInstancesResponse describeFrInstancesWithOptions(const Models::DescribeFrInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resource plan instances.
       *
       * @param request DescribeFrInstancesRequest
       * @return DescribeFrInstancesResponse
       */
      Models::DescribeFrInstancesResponse describeFrInstances(const Models::DescribeFrInstancesRequest &request);

      /**
       * @summary 获取客户使用SPN的概述信息
       *
       * @param tmpReq DescribeUserSpnSummaryInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserSpnSummaryInfoResponse
       */
      Models::DescribeUserSpnSummaryInfoResponse describeUserSpnSummaryInfoWithOptions(const Models::DescribeUserSpnSummaryInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取客户使用SPN的概述信息
       *
       * @param request DescribeUserSpnSummaryInfoRequest
       * @return DescribeUserSpnSummaryInfoResponse
       */
      Models::DescribeUserSpnSummaryInfoResponse describeUserSpnSummaryInfo(const Models::DescribeUserSpnSummaryInfoRequest &request);

      /**
       * @summary Query available balance of fund account
       *
       * @param request GetFundAccountAvailableAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFundAccountAvailableAmountResponse
       */
      Models::GetFundAccountAvailableAmountResponse getFundAccountAvailableAmountWithOptions(const Models::GetFundAccountAvailableAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query available balance of fund account
       *
       * @param request GetFundAccountAvailableAmountRequest
       * @return GetFundAccountAvailableAmountResponse
       */
      Models::GetFundAccountAvailableAmountResponse getFundAccountAvailableAmount(const Models::GetFundAccountAvailableAmountRequest &request);

      /**
       * @summary Query allocatable credit limit of a fund account
       *
       * @param request GetFundAccountCanAllocateCreditAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFundAccountCanAllocateCreditAmountResponse
       */
      Models::GetFundAccountCanAllocateCreditAmountResponse getFundAccountCanAllocateCreditAmountWithOptions(const Models::GetFundAccountCanAllocateCreditAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query allocatable credit limit of a fund account
       *
       * @param request GetFundAccountCanAllocateCreditAmountRequest
       * @return GetFundAccountCanAllocateCreditAmountResponse
       */
      Models::GetFundAccountCanAllocateCreditAmountResponse getFundAccountCanAllocateCreditAmount(const Models::GetFundAccountCanAllocateCreditAmountRequest &request);

      /**
       * @summary Queries the reclaimable amount of a fund account.
       *
       * @param request GetFundAccountCanRecycleAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFundAccountCanRecycleAmountResponse
       */
      Models::GetFundAccountCanRecycleAmountResponse getFundAccountCanRecycleAmountWithOptions(const Models::GetFundAccountCanRecycleAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the reclaimable amount of a fund account.
       *
       * @param request GetFundAccountCanRecycleAmountRequest
       * @return GetFundAccountCanRecycleAmountResponse
       */
      Models::GetFundAccountCanRecycleAmountResponse getFundAccountCanRecycleAmount(const Models::GetFundAccountCanRecycleAmountRequest &request);

      /**
       * @summary Query the transferable amount of a fund account
       *
       * @param request GetFundAccountCanTransferAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFundAccountCanTransferAmountResponse
       */
      Models::GetFundAccountCanTransferAmountResponse getFundAccountCanTransferAmountWithOptions(const Models::GetFundAccountCanTransferAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the transferable amount of a fund account
       *
       * @param request GetFundAccountCanTransferAmountRequest
       * @return GetFundAccountCanTransferAmountResponse
       */
      Models::GetFundAccountCanTransferAmountResponse getFundAccountCanTransferAmount(const Models::GetFundAccountCanTransferAmountRequest &request);

      /**
       * @summary Query Withdrawable Amount of Fund Account
       *
       * @param request GetFundAccountCanWithdrawAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFundAccountCanWithdrawAmountResponse
       */
      Models::GetFundAccountCanWithdrawAmountResponse getFundAccountCanWithdrawAmountWithOptions(const Models::GetFundAccountCanWithdrawAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Withdrawable Amount of Fund Account
       *
       * @param request GetFundAccountCanWithdrawAmountRequest
       * @return GetFundAccountCanWithdrawAmountResponse
       */
      Models::GetFundAccountCanWithdrawAmountResponse getFundAccountCanWithdrawAmount(const Models::GetFundAccountCanWithdrawAmountRequest &request);

      /**
       * @summary Query Fund Account Low Balance Alert
       *
       * @param request GetFundAccountLowAvailableAmountAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFundAccountLowAvailableAmountAlarmResponse
       */
      Models::GetFundAccountLowAvailableAmountAlarmResponse getFundAccountLowAvailableAmountAlarmWithOptions(const Models::GetFundAccountLowAvailableAmountAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Fund Account Low Balance Alert
       *
       * @param request GetFundAccountLowAvailableAmountAlarmRequest
       * @return GetFundAccountLowAvailableAmountAlarmResponse
       */
      Models::GetFundAccountLowAvailableAmountAlarmResponse getFundAccountLowAvailableAmountAlarm(const Models::GetFundAccountLowAvailableAmountAlarmRequest &request);

      /**
       * @summary Queries the transaction details of a fund account.
       *
       * @param tmpReq GetFundAccountTransactionDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFundAccountTransactionDetailsResponse
       */
      Models::GetFundAccountTransactionDetailsResponse getFundAccountTransactionDetailsWithOptions(const Models::GetFundAccountTransactionDetailsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the transaction details of a fund account.
       *
       * @param request GetFundAccountTransactionDetailsRequest
       * @return GetFundAccountTransactionDetailsResponse
       */
      Models::GetFundAccountTransactionDetailsResponse getFundAccountTransactionDetails(const Models::GetFundAccountTransactionDetailsRequest &request);

      /**
       * @summary Queries the details of a specific order for a user or a distribution customer.
       *
       * @param request GetOrderDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrderDetailResponse
       */
      Models::GetOrderDetailResponse getOrderDetailWithOptions(const Models::GetOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific order for a user or a distribution customer.
       *
       * @param request GetOrderDetailRequest
       * @return GetOrderDetailResponse
       */
      Models::GetOrderDetailResponse getOrderDetail(const Models::GetOrderDetailRequest &request);

      /**
       * @summary Queries the order list of a user or a distribution customer. By default, this operation queries orders created within the last hour. To query orders within a longer time range, specify the CreateTimeStart and CreateTimeEnd parameters.
       *
       * @param request GetOrdersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrdersResponse
       */
      Models::GetOrdersResponse getOrdersWithOptions(const Models::GetOrdersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the order list of a user or a distribution customer. By default, this operation queries orders created within the last hour. To query orders within a longer time range, specify the CreateTimeStart and CreateTimeEnd parameters.
       *
       * @param request GetOrdersRequest
       * @return GetOrdersResponse
       */
      Models::GetOrdersResponse getOrders(const Models::GetOrdersRequest &request);

      /**
       * @summary 获取节省计划及可抵扣商品信息
       *
       * @param tmpReq GetSavingPlanDeductableCommodityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSavingPlanDeductableCommodityResponse
       */
      Models::GetSavingPlanDeductableCommodityResponse getSavingPlanDeductableCommodityWithOptions(const Models::GetSavingPlanDeductableCommodityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取节省计划及可抵扣商品信息
       *
       * @param request GetSavingPlanDeductableCommodityRequest
       * @return GetSavingPlanDeductableCommodityResponse
       */
      Models::GetSavingPlanDeductableCommodityResponse getSavingPlanDeductableCommodity(const Models::GetSavingPlanDeductableCommodityRequest &request);

      /**
       * @summary 获取节省计划实例共享账号信息
       *
       * @param tmpReq GetSavingPlanShareAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSavingPlanShareAccountsResponse
       */
      Models::GetSavingPlanShareAccountsResponse getSavingPlanShareAccountsWithOptions(const Models::GetSavingPlanShareAccountsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取节省计划实例共享账号信息
       *
       * @param request GetSavingPlanShareAccountsRequest
       * @return GetSavingPlanShareAccountsResponse
       */
      Models::GetSavingPlanShareAccountsResponse getSavingPlanShareAccounts(const Models::GetSavingPlanShareAccountsRequest &request);

      /**
       * @summary 获取节省计划实例客户自定义规则
       *
       * @param tmpReq GetSavingPlanUserDeductRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSavingPlanUserDeductRuleResponse
       */
      Models::GetSavingPlanUserDeductRuleResponse getSavingPlanUserDeductRuleWithOptions(const Models::GetSavingPlanUserDeductRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取节省计划实例客户自定义规则
       *
       * @param request GetSavingPlanUserDeductRuleRequest
       * @return GetSavingPlanUserDeductRuleResponse
       */
      Models::GetSavingPlanUserDeductRuleResponse getSavingPlanUserDeductRule(const Models::GetSavingPlanUserDeductRuleRequest &request);

      /**
       * @summary 查询优惠券设置的抵扣标签
       *
       * @param tmpReq ListCouponDeductTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCouponDeductTagResponse
       */
      Models::ListCouponDeductTagResponse listCouponDeductTagWithOptions(const Models::ListCouponDeductTagRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询优惠券设置的抵扣标签
       *
       * @param request ListCouponDeductTagRequest
       * @return ListCouponDeductTagResponse
       */
      Models::ListCouponDeductTagResponse listCouponDeductTag(const Models::ListCouponDeductTagRequest &request);

      /**
       * @summary Queries the list of fund accounts.
       *
       * @param request ListFundAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFundAccountResponse
       */
      Models::ListFundAccountResponse listFundAccountWithOptions(const Models::ListFundAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of fund accounts.
       *
       * @param request ListFundAccountRequest
       * @return ListFundAccountResponse
       */
      Models::ListFundAccountResponse listFundAccount(const Models::ListFundAccountRequest &request);

      /**
       * @summary Queries the payment relationships of an account.
       *
       * @param request ListFundAccountPayRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFundAccountPayRelationResponse
       */
      Models::ListFundAccountPayRelationResponse listFundAccountPayRelationWithOptions(const Models::ListFundAccountPayRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the payment relationships of an account.
       *
       * @param request ListFundAccountPayRelationRequest
       * @return ListFundAccountPayRelationResponse
       */
      Models::ListFundAccountPayRelationResponse listFundAccountPayRelation(const Models::ListFundAccountPayRelationRequest &request);

      /**
       * @summary Queries invoice object data that can be used for invoicing.
       *
       * @param tmpReq ListInvoiceCandidateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInvoiceCandidateResponse
       */
      Models::ListInvoiceCandidateResponse listInvoiceCandidateWithOptions(const Models::ListInvoiceCandidateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries invoice object data that can be used for invoicing.
       *
       * @param request ListInvoiceCandidateRequest
       * @return ListInvoiceCandidateResponse
       */
      Models::ListInvoiceCandidateResponse listInvoiceCandidate(const Models::ListInvoiceCandidateRequest &request);

      /**
       * @summary Queries available invoice titles.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInvoiceTitleResponse
       */
      Models::ListInvoiceTitleResponse listInvoiceTitleWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available invoice titles.
       *
       * @return ListInvoiceTitleResponse
       */
      Models::ListInvoiceTitleResponse listInvoiceTitle();

      /**
       * @summary View subscribed report list
       *
       * @param request ListReportDefinitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListReportDefinitionsResponse
       */
      Models::ListReportDefinitionsResponse listReportDefinitionsWithOptions(const Models::ListReportDefinitionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View subscribed report list
       *
       * @param request ListReportDefinitionsRequest
       * @return ListReportDefinitionsResponse
       */
      Models::ListReportDefinitionsResponse listReportDefinitions(const Models::ListReportDefinitionsRequest &request);

      /**
       * @summary Modifies one or more cost centers.
       *
       * @description Modifies one or more cost centers.
       *
       * @param tmpReq ModifyCostCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCostCenterResponse
       */
      Models::ModifyCostCenterResponse modifyCostCenterWithOptions(const Models::ModifyCostCenterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies one or more cost centers.
       *
       * @description Modifies one or more cost centers.
       *
       * @param request ModifyCostCenterRequest
       * @return ModifyCostCenterResponse
       */
      Models::ModifyCostCenterResponse modifyCostCenter(const Models::ModifyCostCenterRequest &request);

      /**
       * @summary Modifies the automatic allocation rule of a financial unit.
       *
       * @description Modifies one or more financial units.
       *
       * @param tmpReq ModifyCostCenterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCostCenterRuleResponse
       */
      Models::ModifyCostCenterRuleResponse modifyCostCenterRuleWithOptions(const Models::ModifyCostCenterRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the automatic allocation rule of a financial unit.
       *
       * @description Modifies one or more financial units.
       *
       * @param request ModifyCostCenterRuleRequest
       * @return ModifyCostCenterRuleResponse
       */
      Models::ModifyCostCenterRuleResponse modifyCostCenterRule(const Models::ModifyCostCenterRuleRequest &request);

      /**
       * @summary 对客订单支付接口
       *
       * @param request PayOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PayOrderResponse
       */
      Models::PayOrderResponse payOrderWithOptions(const Models::PayOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对客订单支付接口
       *
       * @param request PayOrderRequest
       * @return PayOrderResponse
       */
      Models::PayOrderResponse payOrder(const Models::PayOrderRequest &request);

      /**
       * @summary Queries the cost overview of financial units.
       *
       * @description Queries the cost overview results of a financial unit for a specified billing cycle.
       *
       * @param request QueryCostByCostCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCostByCostCenterResponse
       */
      Models::QueryCostByCostCenterResponse queryCostByCostCenterWithOptions(const Models::QueryCostByCostCenterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cost overview of financial units.
       *
       * @description Queries the cost overview results of a financial unit for a specified billing cycle.
       *
       * @param request QueryCostByCostCenterRequest
       * @return QueryCostByCostCenterResponse
       */
      Models::QueryCostByCostCenterResponse queryCostByCostCenter(const Models::QueryCostByCostCenterRequest &request);

      /**
       * @summary Queries cost centers.
       *
       * @description Queries parent cost centers and their child cost centers.
       *
       * @param tmpReq QueryCostCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCostCenterResponse
       */
      Models::QueryCostCenterResponse queryCostCenterWithOptions(const Models::QueryCostCenterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cost centers.
       *
       * @description Queries parent cost centers and their child cost centers.
       *
       * @param request QueryCostCenterRequest
       * @return QueryCostCenterResponse
       */
      Models::QueryCostCenterResponse queryCostCenter(const Models::QueryCostCenterRequest &request);

      /**
       * @summary Queries the resource instances associated with a financial unit. If CostCenterId is set to 0, the operation queries unassigned parent and child resource instances.
       *
       * @param request QueryCostCenterResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCostCenterResourceResponse
       */
      Models::QueryCostCenterResourceResponse queryCostCenterResourceWithOptions(const Models::QueryCostCenterResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource instances associated with a financial unit. If CostCenterId is set to 0, the operation queries unassigned parent and child resource instances.
       *
       * @param request QueryCostCenterResourceRequest
       * @return QueryCostCenterResourceResponse
       */
      Models::QueryCostCenterResourceResponse queryCostCenterResource(const Models::QueryCostCenterResourceRequest &request);

      /**
       * @summary Queries the automatic allocation rules of a cost center.
       *
       * @description Queries a parent cost center and its child cost centers.
       *
       * @param request QueryCostCenterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCostCenterRuleResponse
       */
      Models::QueryCostCenterRuleResponse queryCostCenterRuleWithOptions(const Models::QueryCostCenterRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the automatic allocation rules of a cost center.
       *
       * @description Queries a parent cost center and its child cost centers.
       *
       * @param request QueryCostCenterRuleRequest
       * @return QueryCostCenterRuleResponse
       */
      Models::QueryCostCenterRuleResponse queryCostCenterRule(const Models::QueryCostCenterRuleRequest &request);

      /**
       * @summary Queries the cost allocation rules of financial units.
       *
       * @description Queries the cost allocation rules of a user\\"s financial units.
       *
       * @param request QueryCostCenterShareRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCostCenterShareRuleResponse
       */
      Models::QueryCostCenterShareRuleResponse queryCostCenterShareRuleWithOptions(const Models::QueryCostCenterShareRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cost allocation rules of financial units.
       *
       * @description Queries the cost allocation rules of a user\\"s financial units.
       *
       * @param request QueryCostCenterShareRuleRequest
       * @return QueryCostCenterShareRuleResponse
       */
      Models::QueryCostCenterShareRuleResponse queryCostCenterShareRule(const Models::QueryCostCenterShareRuleRequest &request);

      /**
       * @summary Queries the SLA compensation list for a user.
       *
       * @description Queries the SLA compensation details list for a user. Only data from the last two months is available.
       *
       * @param request QueryMonthlySlaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMonthlySlaListResponse
       */
      Models::QueryMonthlySlaListResponse queryMonthlySlaListWithOptions(const Models::QueryMonthlySlaListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SLA compensation list for a user.
       *
       * @description Queries the SLA compensation details list for a user. Only data from the last two months is available.
       *
       * @param request QueryMonthlySlaListRequest
       * @return QueryMonthlySlaListResponse
       */
      Models::QueryMonthlySlaListResponse queryMonthlySlaList(const Models::QueryMonthlySlaListRequest &request);

      /**
       * @summary 减席位
       *
       * @param request ReduceCreditSeatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReduceCreditSeatsResponse
       */
      Models::ReduceCreditSeatsResponse reduceCreditSeatsWithOptions(const Models::ReduceCreditSeatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 减席位
       *
       * @param request ReduceCreditSeatsRequest
       * @return ReduceCreditSeatsResponse
       */
      Models::ReduceCreditSeatsResponse reduceCreditSeats(const Models::ReduceCreditSeatsRequest &request);

      /**
       * @summary 整体续费席位
       *
       * @param request RenewCreditSeatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewCreditSeatResponse
       */
      Models::RenewCreditSeatResponse renewCreditSeatWithOptions(const Models::RenewCreditSeatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 整体续费席位
       *
       * @param request RenewCreditSeatRequest
       * @return RenewCreditSeatResponse
       */
      Models::RenewCreditSeatResponse renewCreditSeat(const Models::RenewCreditSeatRequest &request);

      /**
       * @summary Modifies cost allocation rules for financial units, including creating, updating, and deleting allocation rules.
       *
       * @param tmpReq SaveCostCenterShareRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveCostCenterShareRuleResponse
       */
      Models::SaveCostCenterShareRuleResponse saveCostCenterShareRuleWithOptions(const Models::SaveCostCenterShareRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies cost allocation rules for financial units, including creating, updating, and deleting allocation rules.
       *
       * @param request SaveCostCenterShareRuleRequest
       * @return SaveCostCenterShareRuleResponse
       */
      Models::SaveCostCenterShareRuleResponse saveCostCenterShareRule(const Models::SaveCostCenterShareRuleRequest &request);

      /**
       * @summary Sets the credit limit for a fund account.
       *
       * @param request SetFundAccountCreditAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetFundAccountCreditAmountResponse
       */
      Models::SetFundAccountCreditAmountResponse setFundAccountCreditAmountWithOptions(const Models::SetFundAccountCreditAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the credit limit for a fund account.
       *
       * @param request SetFundAccountCreditAmountRequest
       * @return SetFundAccountCreditAmountResponse
       */
      Models::SetFundAccountCreditAmountResponse setFundAccountCreditAmount(const Models::SetFundAccountCreditAmountRequest &request);

      /**
       * @summary Set Fund Account Low Balance Alert
       *
       * @param request SetFundAccountLowAvailableAmountAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetFundAccountLowAvailableAmountAlarmResponse
       */
      Models::SetFundAccountLowAvailableAmountAlarmResponse setFundAccountLowAvailableAmountAlarmWithOptions(const Models::SetFundAccountLowAvailableAmountAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set Fund Account Low Balance Alert
       *
       * @param request SetFundAccountLowAvailableAmountAlarmRequest
       * @return SetFundAccountLowAvailableAmountAlarmResponse
       */
      Models::SetFundAccountLowAvailableAmountAlarmResponse setFundAccountLowAvailableAmountAlarm(const Models::SetFundAccountLowAvailableAmountAlarmRequest &request);

      /**
       * @summary 设置节省计划用户级抵扣规则
       *
       * @param tmpReq SetSavingPlanUserDeductRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSavingPlanUserDeductRuleResponse
       */
      Models::SetSavingPlanUserDeductRuleResponse setSavingPlanUserDeductRuleWithOptions(const Models::SetSavingPlanUserDeductRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置节省计划用户级抵扣规则
       *
       * @param request SetSavingPlanUserDeductRuleRequest
       * @return SetSavingPlanUserDeductRuleResponse
       */
      Models::SetSavingPlanUserDeductRuleResponse setSavingPlanUserDeductRule(const Models::SetSavingPlanUserDeductRuleRequest &request);

      /**
       * @summary Claims SLA compensation coupons for the recent two months.
       *
       * @description 1. Call QueryMonthlySlaList to obtain the claimable months and records.
       * 2. Claim by month or by record.
       * Note: You can only claim compensation for the recent two months. Historical compensation has been automatically issued.
       *
       * @param request SubmitSlaCouponApplyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSlaCouponApplyResponse
       */
      Models::SubmitSlaCouponApplyResponse submitSlaCouponApplyWithOptions(const Models::SubmitSlaCouponApplyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Claims SLA compensation coupons for the recent two months.
       *
       * @description 1. Call QueryMonthlySlaList to obtain the claimable months and records.
       * 2. Claim by month or by record.
       * Note: You can only claim compensation for the recent two months. Historical compensation has been automatically issued.
       *
       * @param request SubmitSlaCouponApplyRequest
       * @return SubmitSlaCouponApplyResponse
       */
      Models::SubmitSlaCouponApplyResponse submitSlaCouponApply(const Models::SubmitSlaCouponApplyRequest &request);

      /**
       * @summary 升级席位
       *
       * @param request UpgradeCreditSeatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeCreditSeatResponse
       */
      Models::UpgradeCreditSeatResponse upgradeCreditSeatWithOptions(const Models::UpgradeCreditSeatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 升级席位
       *
       * @param request UpgradeCreditSeatRequest
       * @return UpgradeCreditSeatResponse
       */
      Models::UpgradeCreditSeatResponse upgradeCreditSeat(const Models::UpgradeCreditSeatRequest &request);
  };
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
