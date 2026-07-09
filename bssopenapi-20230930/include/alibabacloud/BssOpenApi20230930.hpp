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
       * @summary Checks whether a specified budgetName exists.
       *
       * @param request CheckBudgetNameExistsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckBudgetNameExistsResponse
       */
      Models::CheckBudgetNameExistsResponse checkBudgetNameExistsWithOptions(const Models::CheckBudgetNameExistsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a specified budgetName exists.
       *
       * @param request CheckBudgetNameExistsRequest
       * @return CheckBudgetNameExistsResponse
       */
      Models::CheckBudgetNameExistsResponse checkBudgetNameExists(const Models::CheckBudgetNameExistsRequest &request);

      /**
       * @summary Creates a budget.
       *
       * @param tmpReq CreateBudgetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBudgetResponse
       */
      Models::CreateBudgetResponse createBudgetWithOptions(const Models::CreateBudgetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a budget.
       *
       * @param request CreateBudgetRequest
       * @return CreateBudgetResponse
       */
      Models::CreateBudgetResponse createBudget(const Models::CreateBudgetRequest &request);

      /**
       * @summary Create Cost Center
       *
       * @description Creates one or more cost centers.
       *
       * @param tmpReq CreateCostCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCostCenterResponse
       */
      Models::CreateCostCenterResponse createCostCenterWithOptions(const Models::CreateCostCenterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Cost Center
       *
       * @description Creates one or more cost centers.
       *
       * @param request CreateCostCenterRequest
       * @return CreateCostCenterResponse
       */
      Models::CreateCostCenterResponse createCostCenter(const Models::CreateCostCenterRequest &request);

      /**
       * @summary Create a financial unit auto-allocation rule
       *
       * @param tmpReq CreateCostCenterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCostCenterRuleResponse
       */
      Models::CreateCostCenterRuleResponse createCostCenterRuleWithOptions(const Models::CreateCostCenterRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a financial unit auto-allocation rule
       *
       * @param request CreateCostCenterRuleRequest
       * @return CreateCostCenterRuleResponse
       */
      Models::CreateCostCenterRuleResponse createCostCenterRule(const Models::CreateCostCenterRuleRequest &request);

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
       * @summary Creates an account transfer or revocation.
       *
       * @param request CreateFundAccountTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFundAccountTransferResponse
       */
      Models::CreateFundAccountTransferResponse createFundAccountTransferWithOptions(const Models::CreateFundAccountTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an account transfer or revocation.
       *
       * @param request CreateFundAccountTransferRequest
       * @return CreateFundAccountTransferResponse
       */
      Models::CreateFundAccountTransferResponse createFundAccountTransfer(const Models::CreateFundAccountTransferRequest &request);

      /**
       * @summary Apply for Invoice
       *
       * @param tmpReq CreateInvoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInvoiceResponse
       */
      Models::CreateInvoiceResponse createInvoiceWithOptions(const Models::CreateInvoiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Apply for Invoice
       *
       * @param request CreateInvoiceRequest
       * @return CreateInvoiceResponse
       */
      Models::CreateInvoiceResponse createInvoice(const Models::CreateInvoiceRequest &request);

      /**
       * @summary Creates a billing report subscription.
       *
       * @description When you call this API operation, note the following information:
       * - You can subscribe to one type of billing file at a time.
       * - Except for monthly bill PDFs, starting from the day after the subscription, the system pushes daily billing files that contain full detailed data from the beginning of the current month to the present. Before the 4th of each month, the system pushes full billing files for the complete billing cycle of the previous month.
       * - Monthly bill PDFs are pushed before the 4th of each month for the previous month.
       * - Billing files generated on a daily basis may have delays. Delayed billing files are pushed on the day after they are generated and may also contain bills that were delayed from before the previous day and generated on the previous day. We recommend that you pull the full files for the previous month at the beginning of each month.
       * > Apply for the required permissions by following the procedure described in the documentation: [Billing Subscription](https://help.aliyun.com/zh/user-center/user-guide/billing-subscription?spm=5176.21213303.J_v8LsmxMG6alneH-O7TCPa.1.3ef82f3d5ZIf08&scm=20140722.S_help@@%E6%96%87%E6%A1%A3@@2861820._.ID_help@@%E6%96%87%E6%A1%A3@@2861820-RL_%E8%B4%A6%E5%8D%95%E8%AE%A2%E9%98%85-LOC_2024SPHelpResult-OR_ser-PAR1_2150419517478292121114501eaee8-V_4-RE_new5-P0_0-P1_0)
       * - This subscription and the Expenses and Costs - Billing Subscription are the same feature, and subscriptions are interchangeable.
       * - When subscribing to a directory under a bucket, follow the directory naming conventions:
       *     - Emojis are not allowed. Use compliant UTF-8 characters.
       *     - Forward slashes (/) are used to separate paths and can quickly create subdirectories. However, do not start with / or \\, and do not use consecutive forward slashes (/).
       *     - Subdirectories named .. are not allowed.
       *     - The total length must be 1 to 254 characters.
       * - File names:
       *     - Example: **consumeDetailBillV2** (billing item details)
       *     
       *         - Daily push file name format: `{Account UID}_{Site ID}_{Bill type}_{YYYYMM|YYYYMMDD}`, for example: `169**_2688801000001_consumeDetailBillV2_20190312`.
       *     
       *         - Full file name format at the beginning of the next month: `{Account UID}_{Site ID}_{Bill type}_{YYYYMM|YYYYMM}`, for example: `169**_2688801000001_consumeDetailBillV2_201903`.
       * - Monthly bill PDF files are in .pdf format, and other file types are in .csv format. When the data volume is large, the system automatically splits the exported bills into multiple files and compresses them into one or more .zip files. The .zip file name format is the same.
       *
       * @param request CreateReportDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReportDefinitionResponse
       */
      Models::CreateReportDefinitionResponse createReportDefinitionWithOptions(const Models::CreateReportDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a billing report subscription.
       *
       * @description When you call this API operation, note the following information:
       * - You can subscribe to one type of billing file at a time.
       * - Except for monthly bill PDFs, starting from the day after the subscription, the system pushes daily billing files that contain full detailed data from the beginning of the current month to the present. Before the 4th of each month, the system pushes full billing files for the complete billing cycle of the previous month.
       * - Monthly bill PDFs are pushed before the 4th of each month for the previous month.
       * - Billing files generated on a daily basis may have delays. Delayed billing files are pushed on the day after they are generated and may also contain bills that were delayed from before the previous day and generated on the previous day. We recommend that you pull the full files for the previous month at the beginning of each month.
       * > Apply for the required permissions by following the procedure described in the documentation: [Billing Subscription](https://help.aliyun.com/zh/user-center/user-guide/billing-subscription?spm=5176.21213303.J_v8LsmxMG6alneH-O7TCPa.1.3ef82f3d5ZIf08&scm=20140722.S_help@@%E6%96%87%E6%A1%A3@@2861820._.ID_help@@%E6%96%87%E6%A1%A3@@2861820-RL_%E8%B4%A6%E5%8D%95%E8%AE%A2%E9%98%85-LOC_2024SPHelpResult-OR_ser-PAR1_2150419517478292121114501eaee8-V_4-RE_new5-P0_0-P1_0)
       * - This subscription and the Expenses and Costs - Billing Subscription are the same feature, and subscriptions are interchangeable.
       * - When subscribing to a directory under a bucket, follow the directory naming conventions:
       *     - Emojis are not allowed. Use compliant UTF-8 characters.
       *     - Forward slashes (/) are used to separate paths and can quickly create subdirectories. However, do not start with / or \\, and do not use consecutive forward slashes (/).
       *     - Subdirectories named .. are not allowed.
       *     - The total length must be 1 to 254 characters.
       * - File names:
       *     - Example: **consumeDetailBillV2** (billing item details)
       *     
       *         - Daily push file name format: `{Account UID}_{Site ID}_{Bill type}_{YYYYMM|YYYYMMDD}`, for example: `169**_2688801000001_consumeDetailBillV2_20190312`.
       *     
       *         - Full file name format at the beginning of the next month: `{Account UID}_{Site ID}_{Bill type}_{YYYYMM|YYYYMM}`, for example: `169**_2688801000001_consumeDetailBillV2_201903`.
       * - Monthly bill PDF files are in .pdf format, and other file types are in .csv format. When the data volume is large, the system automatically splits the exported bills into multiple files and compresses them into one or more .zip files. The .zip file name format is the same.
       *
       * @param request CreateReportDefinitionRequest
       * @return CreateReportDefinitionResponse
       */
      Models::CreateReportDefinitionResponse createReportDefinition(const Models::CreateReportDefinitionRequest &request);

      /**
       * @summary Deletes a budget.
       *
       * @param request DeleteBudgetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBudgetResponse
       */
      Models::DeleteBudgetResponse deleteBudgetWithOptions(const Models::DeleteBudgetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a budget.
       *
       * @param request DeleteBudgetRequest
       * @return DeleteBudgetResponse
       */
      Models::DeleteBudgetResponse deleteBudget(const Models::DeleteBudgetRequest &request);

      /**
       * @summary Delete Cost Center
       *
       * @description This API is in canary release and is only available to whitelisted users. Excessive calls may cause performance issues such as response timeouts.
       *
       * @param request DeleteCostCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCostCenterResponse
       */
      Models::DeleteCostCenterResponse deleteCostCenterWithOptions(const Models::DeleteCostCenterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Cost Center
       *
       * @description This API is in canary release and is only available to whitelisted users. Excessive calls may cause performance issues such as response timeouts.
       *
       * @param request DeleteCostCenterRequest
       * @return DeleteCostCenterResponse
       */
      Models::DeleteCostCenterResponse deleteCostCenter(const Models::DeleteCostCenterRequest &request);

      /**
       * @summary Delete financial unit automatic allocation rule
       *
       * @description This API is in canary release and is only available to whitelisted users. Excessive calls may cause performance issues such as response timeouts.
       *
       * @param tmpReq DeleteCostCenterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCostCenterRuleResponse
       */
      Models::DeleteCostCenterRuleResponse deleteCostCenterRuleWithOptions(const Models::DeleteCostCenterRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete financial unit automatic allocation rule
       *
       * @description This API is in canary release and is only available to whitelisted users. Excessive calls may cause performance issues such as response timeouts.
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
       * @summary Query a Single Budget
       *
       * @param request DescribeBudgetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBudgetResponse
       */
      Models::DescribeBudgetResponse describeBudgetWithOptions(const Models::DescribeBudgetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query a Single Budget
       *
       * @param request DescribeBudgetRequest
       * @return DescribeBudgetResponse
       */
      Models::DescribeBudgetResponse describeBudget(const Models::DescribeBudgetRequest &request);

      /**
       * @summary Query budget list
       *
       * @param request DescribeBudgetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBudgetsResponse
       */
      Models::DescribeBudgetsResponse describeBudgetsWithOptions(const Models::DescribeBudgetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query budget list
       *
       * @param request DescribeBudgetsRequest
       * @return DescribeBudgetsResponse
       */
      Models::DescribeBudgetsResponse describeBudgets(const Models::DescribeBudgetsRequest &request);

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
       * @summary Query fund account transaction details
       *
       * @param tmpReq GetFundAccountTransactionDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFundAccountTransactionDetailsResponse
       */
      Models::GetFundAccountTransactionDetailsResponse getFundAccountTransactionDetailsWithOptions(const Models::GetFundAccountTransactionDetailsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query fund account transaction details
       *
       * @param request GetFundAccountTransactionDetailsRequest
       * @return GetFundAccountTransactionDetailsResponse
       */
      Models::GetFundAccountTransactionDetailsResponse getFundAccountTransactionDetails(const Models::GetFundAccountTransactionDetailsRequest &request);

      /**
       * @summary Queries the details of a specific order for a user or a reseller\\"s customer.
       *
       * @param request GetOrderDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrderDetailResponse
       */
      Models::GetOrderDetailResponse getOrderDetailWithOptions(const Models::GetOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific order for a user or a reseller\\"s customer.
       *
       * @param request GetOrderDetailRequest
       * @return GetOrderDetailResponse
       */
      Models::GetOrderDetailResponse getOrderDetail(const Models::GetOrderDetailRequest &request);

      /**
       * @summary Queries the order list of a user or a reseller customer. By default, this operation queries orders created within the most recent hour. To query orders over a longer time range, set the CreateTimeStart and CreateTimeEnd parameters.
       *
       * @param request GetOrdersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrdersResponse
       */
      Models::GetOrdersResponse getOrdersWithOptions(const Models::GetOrdersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the order list of a user or a reseller customer. By default, this operation queries orders created within the most recent hour. To query orders over a longer time range, set the CreateTimeStart and CreateTimeEnd parameters.
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
       * @summary Query fund account list
       *
       * @param request ListFundAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFundAccountResponse
       */
      Models::ListFundAccountResponse listFundAccountWithOptions(const Models::ListFundAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query fund account list
       *
       * @param request ListFundAccountRequest
       * @return ListFundAccountResponse
       */
      Models::ListFundAccountResponse listFundAccount(const Models::ListFundAccountRequest &request);

      /**
       * @summary Query payment relationships of an account
       *
       * @param request ListFundAccountPayRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFundAccountPayRelationResponse
       */
      Models::ListFundAccountPayRelationResponse listFundAccountPayRelationWithOptions(const Models::ListFundAccountPayRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query payment relationships of an account
       *
       * @param request ListFundAccountPayRelationRequest
       * @return ListFundAccountPayRelationResponse
       */
      Models::ListFundAccountPayRelationResponse listFundAccountPayRelation(const Models::ListFundAccountPayRelationRequest &request);

      /**
       * @summary Query invoice candidate data, which can be used for invoicing.
       *
       * @param tmpReq ListInvoiceCandidateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInvoiceCandidateResponse
       */
      Models::ListInvoiceCandidateResponse listInvoiceCandidateWithOptions(const Models::ListInvoiceCandidateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query invoice candidate data, which can be used for invoicing.
       *
       * @param request ListInvoiceCandidateRequest
       * @return ListInvoiceCandidateResponse
       */
      Models::ListInvoiceCandidateResponse listInvoiceCandidate(const Models::ListInvoiceCandidateRequest &request);

      /**
       * @summary Query the list of available invoice titles
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInvoiceTitleResponse
       */
      Models::ListInvoiceTitleResponse listInvoiceTitleWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of available invoice titles
       *
       * @return ListInvoiceTitleResponse
       */
      Models::ListInvoiceTitleResponse listInvoiceTitle();

      /**
       * @summary Queries the list of subscribed reports.
       *
       * @param request ListReportDefinitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListReportDefinitionsResponse
       */
      Models::ListReportDefinitionsResponse listReportDefinitionsWithOptions(const Models::ListReportDefinitionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of subscribed reports.
       *
       * @param request ListReportDefinitionsRequest
       * @return ListReportDefinitionsResponse
       */
      Models::ListReportDefinitionsResponse listReportDefinitions(const Models::ListReportDefinitionsRequest &request);

      /**
       * @summary Modify cost centers
       *
       * @description Modifies one or more cost centers.
       *
       * @param tmpReq ModifyCostCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCostCenterResponse
       */
      Models::ModifyCostCenterResponse modifyCostCenterWithOptions(const Models::ModifyCostCenterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify cost centers
       *
       * @description Modifies one or more cost centers.
       *
       * @param request ModifyCostCenterRequest
       * @return ModifyCostCenterResponse
       */
      Models::ModifyCostCenterResponse modifyCostCenter(const Models::ModifyCostCenterRequest &request);

      /**
       * @summary Modify financial unit rules
       *
       * @description Modify one or more financial units
       *
       * @param tmpReq ModifyCostCenterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCostCenterRuleResponse
       */
      Models::ModifyCostCenterRuleResponse modifyCostCenterRuleWithOptions(const Models::ModifyCostCenterRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify financial unit rules
       *
       * @description Modify one or more financial units
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
       * @summary Query cost center expense overview
       *
       * @description Query cost center expense overview results for a specified billing period
       *
       * @param request QueryCostByCostCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCostByCostCenterResponse
       */
      Models::QueryCostByCostCenterResponse queryCostByCostCenterWithOptions(const Models::QueryCostByCostCenterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query cost center expense overview
       *
       * @description Query cost center expense overview results for a specified billing period
       *
       * @param request QueryCostByCostCenterRequest
       * @return QueryCostByCostCenterResponse
       */
      Models::QueryCostByCostCenterResponse queryCostByCostCenter(const Models::QueryCostByCostCenterRequest &request);

      /**
       * @summary Queries financial units.
       *
       * @description Queries a parent financial unit and its child financial units.
       *
       * @param tmpReq QueryCostCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCostCenterResponse
       */
      Models::QueryCostCenterResponse queryCostCenterWithOptions(const Models::QueryCostCenterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries financial units.
       *
       * @description Queries a parent financial unit and its child financial units.
       *
       * @param request QueryCostCenterRequest
       * @return QueryCostCenterResponse
       */
      Models::QueryCostCenterResponse queryCostCenter(const Models::QueryCostCenterRequest &request);

      /**
       * @summary Queries the list of resource instances that belong to a cost center of the user. When CostCenterId is 0, it queries unallocated primary and sub-resource instances.
       *
       * @param request QueryCostCenterResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCostCenterResourceResponse
       */
      Models::QueryCostCenterResourceResponse queryCostCenterResourceWithOptions(const Models::QueryCostCenterResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of resource instances that belong to a cost center of the user. When CostCenterId is 0, it queries unallocated primary and sub-resource instances.
       *
       * @param request QueryCostCenterResourceRequest
       * @return QueryCostCenterResourceResponse
       */
      Models::QueryCostCenterResourceResponse queryCostCenterResource(const Models::QueryCostCenterResourceRequest &request);

      /**
       * @summary Query cost center rules
       *
       * @description Query parent cost center and its child cost centers.
       *
       * @param request QueryCostCenterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCostCenterRuleResponse
       */
      Models::QueryCostCenterRuleResponse queryCostCenterRuleWithOptions(const Models::QueryCostCenterRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query cost center rules
       *
       * @description Query parent cost center and its child cost centers.
       *
       * @param request QueryCostCenterRuleRequest
       * @return QueryCostCenterRuleResponse
       */
      Models::QueryCostCenterRuleResponse queryCostCenterRule(const Models::QueryCostCenterRuleRequest &request);

      /**
       * @summary Query cost center sharing rules
       *
       * @description Queries the sharing rules of user cost centers.
       *
       * @param request QueryCostCenterShareRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCostCenterShareRuleResponse
       */
      Models::QueryCostCenterShareRuleResponse queryCostCenterShareRuleWithOptions(const Models::QueryCostCenterShareRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query cost center sharing rules
       *
       * @description Queries the sharing rules of user cost centers.
       *
       * @param request QueryCostCenterShareRuleRequest
       * @return QueryCostCenterShareRuleResponse
       */
      Models::QueryCostCenterShareRuleResponse queryCostCenterShareRule(const Models::QueryCostCenterShareRuleRequest &request);

      /**
       * @summary Queries the SLA compensation list of a user.
       *
       * @description Queries the SLA compensation details list of a user. Only data from the last two months is available.
       *
       * @param request QueryMonthlySlaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMonthlySlaListResponse
       */
      Models::QueryMonthlySlaListResponse queryMonthlySlaListWithOptions(const Models::QueryMonthlySlaListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SLA compensation list of a user.
       *
       * @description Queries the SLA compensation details list of a user. Only data from the last two months is available.
       *
       * @param request QueryMonthlySlaListRequest
       * @return QueryMonthlySlaListResponse
       */
      Models::QueryMonthlySlaListResponse queryMonthlySlaList(const Models::QueryMonthlySlaListRequest &request);

      /**
       * @summary Modifies cost center sharing rules, including creating, modifying, and deleting sharing rules.
       *
       * @param tmpReq SaveCostCenterShareRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveCostCenterShareRuleResponse
       */
      Models::SaveCostCenterShareRuleResponse saveCostCenterShareRuleWithOptions(const Models::SaveCostCenterShareRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies cost center sharing rules, including creating, modifying, and deleting sharing rules.
       *
       * @param request SaveCostCenterShareRuleRequest
       * @return SaveCostCenterShareRuleResponse
       */
      Models::SaveCostCenterShareRuleResponse saveCostCenterShareRule(const Models::SaveCostCenterShareRuleRequest &request);

      /**
       * @summary Set the credit control limit for a fund account
       *
       * @param request SetFundAccountCreditAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetFundAccountCreditAmountResponse
       */
      Models::SetFundAccountCreditAmountResponse setFundAccountCreditAmountWithOptions(const Models::SetFundAccountCreditAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set the credit control limit for a fund account
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
       * @summary User claims coupons for the last two months.
       *
       * @description 1. Call QueryMonthlySlaList to obtain the claimable months and records.
       * 2. Claim by month or by record.
       * Note: Only compensation for the last two months can be claimed. Historical compensation has been automatically issued.
       *
       * @param request SubmitSlaCouponApplyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSlaCouponApplyResponse
       */
      Models::SubmitSlaCouponApplyResponse submitSlaCouponApplyWithOptions(const Models::SubmitSlaCouponApplyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary User claims coupons for the last two months.
       *
       * @description 1. Call QueryMonthlySlaList to obtain the claimable months and records.
       * 2. Claim by month or by record.
       * Note: Only compensation for the last two months can be claimed. Historical compensation has been automatically issued.
       *
       * @param request SubmitSlaCouponApplyRequest
       * @return SubmitSlaCouponApplyResponse
       */
      Models::SubmitSlaCouponApplyResponse submitSlaCouponApply(const Models::SubmitSlaCouponApplyRequest &request);

      /**
       * @summary Updates a budget.
       *
       * @param tmpReq UpdateBudgetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBudgetResponse
       */
      Models::UpdateBudgetResponse updateBudgetWithOptions(const Models::UpdateBudgetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a budget.
       *
       * @param request UpdateBudgetRequest
       * @return UpdateBudgetResponse
       */
      Models::UpdateBudgetResponse updateBudget(const Models::UpdateBudgetRequest &request);
  };
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
