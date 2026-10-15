// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_BSSOPENAPI20171214_HPP_
#define ALIBABACLOUD_BSSOPENAPI20171214_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/BssOpenApi20171214Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/BssOpenApi20171214.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates a financial relationship.
       *
       * @description For more information about a financial relationship, see <props="intl">[Usage notes on the trusteeship]( https://www.alibabacloud.com/help/doc-detail/116383.html). 
       * If enterprise names used by the management account and a member for real-name verification are the same, you do not need to call an API operation for confirmation. Otherwise, you must call the ConfirmRelation operation for confirmation.
       *
       * @param request AddAccountRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAccountRelationResponse
       */
      Models::AddAccountRelationResponse addAccountRelationWithOptions(const Models::AddAccountRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a financial relationship.
       *
       * @description For more information about a financial relationship, see <props="intl">[Usage notes on the trusteeship]( https://www.alibabacloud.com/help/doc-detail/116383.html). 
       * If enterprise names used by the management account and a member for real-name verification are the same, you do not need to call an API operation for confirmation. Otherwise, you must call the ConfirmRelation operation for confirmation.
       *
       * @param request AddAccountRelationRequest
       * @return AddAccountRelationResponse
       */
      Models::AddAccountRelationResponse addAccountRelation(const Models::AddAccountRelationRequest &request);

      /**
       * @summary Allocates resource instances (instance-based and attached-resource-based) from a source financial unit to a destination financial unit.
       *
       * @param request AllocateCostUnitResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateCostUnitResourceResponse
       */
      Models::AllocateCostUnitResourceResponse allocateCostUnitResourceWithOptions(const Models::AllocateCostUnitResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Allocates resource instances (instance-based and attached-resource-based) from a source financial unit to a destination financial unit.
       *
       * @param request AllocateCostUnitResourceRequest
       * @return AllocateCostUnitResourceResponse
       */
      Models::AllocateCostUnitResourceResponse allocateCostUnitResource(const Models::AllocateCostUnitResourceRequest &request);

      /**
       * @summary Submits an invoice application.
       *
       * @param request ApplyInvoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyInvoiceResponse
       */
      Models::ApplyInvoiceResponse applyInvoiceWithOptions(const Models::ApplyInvoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an invoice application.
       *
       * @param request ApplyInvoiceRequest
       * @return ApplyInvoiceResponse
       */
      Models::ApplyInvoiceResponse applyInvoice(const Models::ApplyInvoiceRequest &request);

      /**
       * @summary Cancels an unpaid order.
       *
       * @param request CancelOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelOrderResponse
       */
      Models::CancelOrderResponse cancelOrderWithOptions(const Models::CancelOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an unpaid order.
       *
       * @param request CancelOrderRequest
       * @return CancelOrderResponse
       */
      Models::CancelOrderResponse cancelOrder(const Models::CancelOrderRequest &request);

      /**
       * @summary Deducts user quota consumption.
       *
       * @description Deducts user quota consumption.
       *
       * @param request ChangeResellerConsumeAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResellerConsumeAmountResponse
       */
      Models::ChangeResellerConsumeAmountResponse changeResellerConsumeAmountWithOptions(const Models::ChangeResellerConsumeAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deducts user quota consumption.
       *
       * @description Deducts user quota consumption.
       *
       * @param request ChangeResellerConsumeAmountRequest
       * @return ChangeResellerConsumeAmountResponse
       */
      Models::ChangeResellerConsumeAmountResponse changeResellerConsumeAmount(const Models::ChangeResellerConsumeAmountRequest &request);

      /**
       * @summary Confirms an invitation initiated by the main account for a linked account.
       *
       * @description 1. Currently, only financial management linking is supported. The linked account needs to confirm the invitation only when the real-name verification information of the main account and the linked account is inconsistent.
       * 2. The permissions to be confirmed must be exactly the same as the permissions specified in the invitation initiated by the main account for the confirmation to succeed.
       *
       * @param request ConfirmRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmRelationResponse
       */
      Models::ConfirmRelationResponse confirmRelationWithOptions(const Models::ConfirmRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Confirms an invitation initiated by the main account for a linked account.
       *
       * @description 1. Currently, only financial management linking is supported. The linked account needs to confirm the invitation only when the real-name verification information of the main account and the linked account is inconsistent.
       * 2. The permissions to be confirmed must be exactly the same as the permissions specified in the invitation initiated by the main account for the confirmation to succeed.
       *
       * @param request ConfirmRelationRequest
       * @return ConfirmRelationResponse
       */
      Models::ConfirmRelationResponse confirmRelation(const Models::ConfirmRelationRequest &request);

      /**
       * @summary Changes the subscription type for an instance. Currently, this operation supports converting pay-as-you-go instances of SLB, EIP, and NAT Gateway to subscription instances, and converting subscription instances of SLB and EIP to pay-as-you-go instances.
       *
       * @param request ConvertChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertChargeTypeResponse
       */
      Models::ConvertChargeTypeResponse convertChargeTypeWithOptions(const Models::ConvertChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the subscription type for an instance. Currently, this operation supports converting pay-as-you-go instances of SLB, EIP, and NAT Gateway to subscription instances, and converting subscription instances of SLB and EIP to pay-as-you-go instances.
       *
       * @param request ConvertChargeTypeRequest
       * @return ConvertChargeTypeResponse
       */
      Models::ConvertChargeTypeResponse convertChargeType(const Models::ConvertChargeTypeRequest &request);

      /**
       * @summary Creates an account linking relationship.
       *
       * @description Creates a master-member relationship for financial management.
       *
       * @param request CreateAgAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgAccountResponse
       */
      Models::CreateAgAccountResponse createAgAccountWithOptions(const Models::CreateAgAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an account linking relationship.
       *
       * @description Creates a master-member relationship for financial management.
       *
       * @param request CreateAgAccountRequest
       * @return CreateAgAccountResponse
       */
      Models::CreateAgAccountResponse createAgAccount(const Models::CreateAgAccountRequest &request);

      /**
       * @summary Creates financial units. Batch creation is supported.
       *
       * @param request CreateCostUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCostUnitResponse
       */
      Models::CreateCostUnitResponse createCostUnitWithOptions(const Models::CreateCostUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates financial units. Batch creation is supported.
       *
       * @param request CreateCostUnitRequest
       * @return CreateCostUnitResponse
       */
      Models::CreateCostUnitResponse createCostUnit(const Models::CreateCostUnitRequest &request);

      /**
       * @summary Creates an instance resource. This operation creates an order for a new instance resource and completes automatic payment. ECS and RDS product series are not supported.
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an instance resource. This operation creates an order for a new instance resource and completes automatic payment. ECS and RDS product series are not supported.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Creates a user quota ledger and a quota consumption ledger.
       *
       * @param request CreateResellerUserQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResellerUserQuotaResponse
       */
      Models::CreateResellerUserQuotaResponse createResellerUserQuotaWithOptions(const Models::CreateResellerUserQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user quota ledger and a quota consumption ledger.
       *
       * @param request CreateResellerUserQuotaRequest
       * @return CreateResellerUserQuotaResponse
       */
      Models::CreateResellerUserQuotaResponse createResellerUserQuota(const Models::CreateResellerUserQuotaRequest &request);

      /**
       * @summary 创建资源包
       *
       * @param request CreateResourcePackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourcePackageResponse
       */
      Models::CreateResourcePackageResponse createResourcePackageWithOptions(const Models::CreateResourcePackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建资源包
       *
       * @param request CreateResourcePackageRequest
       * @return CreateResourcePackageResponse
       */
      Models::CreateResourcePackageResponse createResourcePackage(const Models::CreateResourcePackageRequest &request);

      /**
       * @summary 创建节省计划实例
       *
       * @param tmpReq CreateSavingsPlansInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSavingsPlansInstanceResponse
       */
      Models::CreateSavingsPlansInstanceResponse createSavingsPlansInstanceWithOptions(const Models::CreateSavingsPlansInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建节省计划实例
       *
       * @param request CreateSavingsPlansInstanceRequest
       * @return CreateSavingsPlansInstanceResponse
       */
      Models::CreateSavingsPlansInstanceResponse createSavingsPlansInstance(const Models::CreateSavingsPlansInstanceRequest &request);

      /**
       * @summary Deletes a financial unit.
       *
       * @param request DeleteCostUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCostUnitResponse
       */
      Models::DeleteCostUnitResponse deleteCostUnitWithOptions(const Models::DeleteCostUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a financial unit.
       *
       * @param request DeleteCostUnitRequest
       * @return DeleteCostUnitResponse
       */
      Models::DeleteCostUnitResponse deleteCostUnit(const Models::DeleteCostUnitRequest &request);

      /**
       * @summary Queries a summary of cost budgets.
       *
       * @description This OpenAPI is in beta and available only to whitelisted users. Excessive calls may cause performance issues, such as response timeouts.
       *
       * @param request DescribeCostBudgetsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCostBudgetsSummaryResponse
       */
      Models::DescribeCostBudgetsSummaryResponse describeCostBudgetsSummaryWithOptions(const Models::DescribeCostBudgetsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a summary of cost budgets.
       *
       * @description This OpenAPI is in beta and available only to whitelisted users. Excessive calls may cause performance issues, such as response timeouts.
       *
       * @param request DescribeCostBudgetsSummaryRequest
       * @return DescribeCostBudgetsSummaryResponse
       */
      Models::DescribeCostBudgetsSummaryResponse describeCostBudgetsSummary(const Models::DescribeCostBudgetsSummaryRequest &request);

      /**
       * @summary Queries the monthly amortized costs of instances for a specified amortization month.
       *
       * @description - Amortized costs cannot be used for settlement or reconciliation. They are used to allocate your subscription and pay-as-you-go fees based on specified allocation rules.
       * - The final data for a month is available after 12:00 on the sixth day of the following month. The reason for this delay is that scenarios such as delayed billing, refunds, bill adjustments, and overdue payment write-offs can occur during the month. The data for the current month does not include unsettled pay-as-you-go fees for which bills have not yet been generated.
       * - Amortized cost data from the last 12 months is available.
       * - Data for attached resources is reflected in the amortized costs 48 hours after the split bill is generated. To use this feature, you must first enable [split bills](https://usercenter2.aliyun.com/finance/split-bill). Data for items that are not attached resources is updated 48 hours after the detailed bill is generated.
       * - For months before August 2021, amortized costs are not updated intra-month. They are updated only after 12:00 on the sixth day of the following month. Consequently, specific costs for attached resources, such as domain names, buckets, and EIPs, for products such as CDN, OSS, and Internet Shared Bandwidth are not available for these months.
       * - Amortized cost data is available for querying 48 hours after you enable the [Amortized Cost](https://usercenter2.aliyun.com/finance/amortized-costs) feature.
       *
       * @param request DescribeInstanceAmortizedCostByAmortizationPeriodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAmortizedCostByAmortizationPeriodResponse
       */
      Models::DescribeInstanceAmortizedCostByAmortizationPeriodResponse describeInstanceAmortizedCostByAmortizationPeriodWithOptions(const Models::DescribeInstanceAmortizedCostByAmortizationPeriodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monthly amortized costs of instances for a specified amortization month.
       *
       * @description - Amortized costs cannot be used for settlement or reconciliation. They are used to allocate your subscription and pay-as-you-go fees based on specified allocation rules.
       * - The final data for a month is available after 12:00 on the sixth day of the following month. The reason for this delay is that scenarios such as delayed billing, refunds, bill adjustments, and overdue payment write-offs can occur during the month. The data for the current month does not include unsettled pay-as-you-go fees for which bills have not yet been generated.
       * - Amortized cost data from the last 12 months is available.
       * - Data for attached resources is reflected in the amortized costs 48 hours after the split bill is generated. To use this feature, you must first enable [split bills](https://usercenter2.aliyun.com/finance/split-bill). Data for items that are not attached resources is updated 48 hours after the detailed bill is generated.
       * - For months before August 2021, amortized costs are not updated intra-month. They are updated only after 12:00 on the sixth day of the following month. Consequently, specific costs for attached resources, such as domain names, buckets, and EIPs, for products such as CDN, OSS, and Internet Shared Bandwidth are not available for these months.
       * - Amortized cost data is available for querying 48 hours after you enable the [Amortized Cost](https://usercenter2.aliyun.com/finance/amortized-costs) feature.
       *
       * @param request DescribeInstanceAmortizedCostByAmortizationPeriodRequest
       * @return DescribeInstanceAmortizedCostByAmortizationPeriodResponse
       */
      Models::DescribeInstanceAmortizedCostByAmortizationPeriodResponse describeInstanceAmortizedCostByAmortizationPeriod(const Models::DescribeInstanceAmortizedCostByAmortizationPeriodRequest &request);

      /**
       * @summary 实例摊销日摊销成本
       *
       * @param request DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAmortizedCostByAmortizationPeriodDateResponse
       */
      Models::DescribeInstanceAmortizedCostByAmortizationPeriodDateResponse describeInstanceAmortizedCostByAmortizationPeriodDateWithOptions(const Models::DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实例摊销日摊销成本
       *
       * @param request DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest
       * @return DescribeInstanceAmortizedCostByAmortizationPeriodDateResponse
       */
      Models::DescribeInstanceAmortizedCostByAmortizationPeriodDateResponse describeInstanceAmortizedCostByAmortizationPeriodDate(const Models::DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest &request);

      /**
       * @summary Queries the monthly amortized cost of an instance by billing cycle.
       *
       * @description - Amortized costs are not used for settlement or reconciliation. They are used to allocate your cloud expenses, including both subscription and pay-as-you-go fees, based on specified allocation rules.
       * - The final data for a month is available after 12:00 on the sixth day of the following month. This delay accounts for events such as delayed billing, refunds, bill adjustments, and overdue payment write-offs. Data for the current month does not include unsettled pay-as-you-go fees.
       * - Amortized cost data is available for the past 12 months.
       * - Data for attached resources in the amortized costs is updated 48 hours after the split bill is generated. To view the costs of attached resources, you must first enable [split bills](https://usercenter2.aliyun.com/finance/split-bill). Data for other resources is updated 48 hours after the detailed bill is generated.
       * - For months before August 2021, amortized costs are not updated mid-month. They are updated only after 12:00 on the sixth day of the following month. In addition, specific costs for attached resources, such as domain names, buckets, and EIPs, of products such as CDN, OSS, and Internet Shared Bandwidth, are not provided for this period.
       * - Amortized cost data is available only after you enable the [Amortized Costs](https://usercenter2.aliyun.com/finance/amortized-costs) feature. The data becomes available 48 hours after enablement.
       *
       * @param request DescribeInstanceAmortizedCostByConsumePeriodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAmortizedCostByConsumePeriodResponse
       */
      Models::DescribeInstanceAmortizedCostByConsumePeriodResponse describeInstanceAmortizedCostByConsumePeriodWithOptions(const Models::DescribeInstanceAmortizedCostByConsumePeriodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monthly amortized cost of an instance by billing cycle.
       *
       * @description - Amortized costs are not used for settlement or reconciliation. They are used to allocate your cloud expenses, including both subscription and pay-as-you-go fees, based on specified allocation rules.
       * - The final data for a month is available after 12:00 on the sixth day of the following month. This delay accounts for events such as delayed billing, refunds, bill adjustments, and overdue payment write-offs. Data for the current month does not include unsettled pay-as-you-go fees.
       * - Amortized cost data is available for the past 12 months.
       * - Data for attached resources in the amortized costs is updated 48 hours after the split bill is generated. To view the costs of attached resources, you must first enable [split bills](https://usercenter2.aliyun.com/finance/split-bill). Data for other resources is updated 48 hours after the detailed bill is generated.
       * - For months before August 2021, amortized costs are not updated mid-month. They are updated only after 12:00 on the sixth day of the following month. In addition, specific costs for attached resources, such as domain names, buckets, and EIPs, of products such as CDN, OSS, and Internet Shared Bandwidth, are not provided for this period.
       * - Amortized cost data is available only after you enable the [Amortized Costs](https://usercenter2.aliyun.com/finance/amortized-costs) feature. The data becomes available 48 hours after enablement.
       *
       * @param request DescribeInstanceAmortizedCostByConsumePeriodRequest
       * @return DescribeInstanceAmortizedCostByConsumePeriodResponse
       */
      Models::DescribeInstanceAmortizedCostByConsumePeriodResponse describeInstanceAmortizedCostByConsumePeriod(const Models::DescribeInstanceAmortizedCostByConsumePeriodRequest &request);

      /**
       * @summary Queries the consumption summary of all product instances or billable items for a user within a specific billing cycle.
       *
       * @description - The query results for the current month are for reference only and cannot be used as the basis for reconciliation. The final bill for the current month can be viewed or exported after 12:00 on the 3rd day of the next month. During the month, a few scenarios may occur, including but not limited to delayed billing, refunds, bill adjustments, and overdue payment write-offs.
       * - The bill data for the current month does not include unsettled pay-as-you-go data that is unbilled or accumulating.
       * - Data for the last 18 months is supported. 
       * - Bill data is updated with a 24-hour delay compared to actual consumption. Information related to the instance ID, such as instance configuration, instance type, instance alias, resource group, public IP address, private IP address, and zone, is updated with a 48-hour delay.  
       * - Bill data does not provide the specific costs of individual split items, such as domain names, buckets, and EIPs, for split-type cloud services, such as CDN, OSS, and Internet Shared Bandwidth. To view data that includes split items, go to the split bill page.
       * - For cloud communication products, only detail data from June 2020 onwards is supported. For HiChina products, including domain names and trademarks, only detail data from November 2020 onwards is supported.
       * - The rate limit is 10 requests per second per user. If a timeout occurs, retry the request.
       *
       * @param request DescribeInstanceBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceBillResponse
       */
      Models::DescribeInstanceBillResponse describeInstanceBillWithOptions(const Models::DescribeInstanceBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the consumption summary of all product instances or billable items for a user within a specific billing cycle.
       *
       * @description - The query results for the current month are for reference only and cannot be used as the basis for reconciliation. The final bill for the current month can be viewed or exported after 12:00 on the 3rd day of the next month. During the month, a few scenarios may occur, including but not limited to delayed billing, refunds, bill adjustments, and overdue payment write-offs.
       * - The bill data for the current month does not include unsettled pay-as-you-go data that is unbilled or accumulating.
       * - Data for the last 18 months is supported. 
       * - Bill data is updated with a 24-hour delay compared to actual consumption. Information related to the instance ID, such as instance configuration, instance type, instance alias, resource group, public IP address, private IP address, and zone, is updated with a 48-hour delay.  
       * - Bill data does not provide the specific costs of individual split items, such as domain names, buckets, and EIPs, for split-type cloud services, such as CDN, OSS, and Internet Shared Bandwidth. To view data that includes split items, go to the split bill page.
       * - For cloud communication products, only detail data from June 2020 onwards is supported. For HiChina products, including domain names and trademarks, only detail data from November 2020 onwards is supported.
       * - The rate limit is 10 requests per second per user. If a timeout occurs, retry the request.
       *
       * @param request DescribeInstanceBillRequest
       * @return DescribeInstanceBillResponse
       */
      Models::DescribeInstanceBillResponse describeInstanceBill(const Models::DescribeInstanceBillRequest &request);

      /**
       * @summary 实例摊销日抵扣还原摊销成本
       *
       * @param request DescribeInstanceDeductAmortizedCostByAmortizationPeriodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponse
       */
      Models::DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponse describeInstanceDeductAmortizedCostByAmortizationPeriodWithOptions(const Models::DescribeInstanceDeductAmortizedCostByAmortizationPeriodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实例摊销日抵扣还原摊销成本
       *
       * @param request DescribeInstanceDeductAmortizedCostByAmortizationPeriodRequest
       * @return DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponse
       */
      Models::DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponse describeInstanceDeductAmortizedCostByAmortizationPeriod(const Models::DescribeInstanceDeductAmortizedCostByAmortizationPeriodRequest &request);

      /**
       * @summary Queries the module information of a specific Alibaba Cloud product.
       *
       * @param request DescribePricingModuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePricingModuleResponse
       */
      Models::DescribePricingModuleResponse describePricingModuleWithOptions(const Models::DescribePricingModuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the module information of a specific Alibaba Cloud product.
       *
       * @param request DescribePricingModuleRequest
       * @return DescribePricingModuleResponse
       */
      Models::DescribePricingModuleResponse describePricingModule(const Models::DescribePricingModuleRequest &request);

      /**
       * @summary Queries the monthly amortized cost of products for a specified month.
       *
       * @description - Amortized costs are for cost allocation purposes only and cannot be used for settlement or reconciliation. This feature allocates your cloud expenses, including both subscription and pay-as-you-go fees, based on specified allocation rules.
       * - The final data for a month is available after 12:00 on the sixth day of the following month. Data for the current month is not final. This is because it does not include unsettled pay-as-you-go fees and may change due to events such as delayed billing, refunds, bill adjustments, and overdue payment write-offs.
       * - Amortized cost data for the past 12 months is available.
       * - Data for attached resources, which requires you to enable [split bills](https://usercenter2.aliyun.com/finance/split-bill), is updated 48 hours after the split bill is generated. Data for other resources is updated 48 hours after the detailed bill is generated.
       * - For months before August 2021, amortized costs were not updated during the month. They were updated only after 12:00 on the sixth day of the following month. In addition, cost details for attached resources, such as domain names, buckets, and EIPs, for products such as CDN, OSS, and Internet Shared Bandwidth are not available for this period.
       * - Amortized cost data becomes available 48 hours after you enable the [Amortized Cost](https://usercenter2.aliyun.com/finance/amortized-costs) feature.
       *
       * @param request DescribeProductAmortizedCostByAmortizationPeriodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProductAmortizedCostByAmortizationPeriodResponse
       */
      Models::DescribeProductAmortizedCostByAmortizationPeriodResponse describeProductAmortizedCostByAmortizationPeriodWithOptions(const Models::DescribeProductAmortizedCostByAmortizationPeriodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monthly amortized cost of products for a specified month.
       *
       * @description - Amortized costs are for cost allocation purposes only and cannot be used for settlement or reconciliation. This feature allocates your cloud expenses, including both subscription and pay-as-you-go fees, based on specified allocation rules.
       * - The final data for a month is available after 12:00 on the sixth day of the following month. Data for the current month is not final. This is because it does not include unsettled pay-as-you-go fees and may change due to events such as delayed billing, refunds, bill adjustments, and overdue payment write-offs.
       * - Amortized cost data for the past 12 months is available.
       * - Data for attached resources, which requires you to enable [split bills](https://usercenter2.aliyun.com/finance/split-bill), is updated 48 hours after the split bill is generated. Data for other resources is updated 48 hours after the detailed bill is generated.
       * - For months before August 2021, amortized costs were not updated during the month. They were updated only after 12:00 on the sixth day of the following month. In addition, cost details for attached resources, such as domain names, buckets, and EIPs, for products such as CDN, OSS, and Internet Shared Bandwidth are not available for this period.
       * - Amortized cost data becomes available 48 hours after you enable the [Amortized Cost](https://usercenter2.aliyun.com/finance/amortized-costs) feature.
       *
       * @param request DescribeProductAmortizedCostByAmortizationPeriodRequest
       * @return DescribeProductAmortizedCostByAmortizationPeriodResponse
       */
      Models::DescribeProductAmortizedCostByAmortizationPeriodResponse describeProductAmortizedCostByAmortizationPeriod(const Models::DescribeProductAmortizedCostByAmortizationPeriodRequest &request);

      /**
       * @summary Queries the monthly amortized cost of a product for a specific billing cycle.
       *
       * @description - Amortized costs are used for cost allocation and cannot be used for settlement or reconciliation. This feature allocates your cloud expenses, including both subscription and pay-as-you-go fees, based on specified rules.
       * - The final data for a given month is available after 12:00 on the sixth day of the following month. This delay ensures that potential mid-month events, such as delayed billing, refunds, bill adjustments, and overdue payment write-offs, are included. Data for the current month does not include unsettled pay-as-you-go fees that have not yet been billed or are still accumulating.
       * - Amortized cost data for the past 12 months is available.
       * - Data related to attached resources is updated in the amortized costs 48 hours after the corresponding split bill is generated. To view the costs of attached resources, you must first enable [split bills](https://usercenter2.aliyun.com/finance/split-bill). Data that is not related to attached resources is updated 48 hours after the detailed bill is generated.
       * - For months before August 2021, amortized costs were not updated mid-month and were only updated after 12:00 on the sixth day of the following month. Additionally, for this period, specific costs for attached resources, such as domain names, buckets, and EIPs, for products such as CDN, OSS, and Internet Shared Bandwidth are not available.
       * - Amortized cost data is provided only after you enable the [Amortized Cost](https://usercenter2.aliyun.com/finance/amortized-costs) feature. The data is available 48 hours after you enable it.
       *
       * @param request DescribeProductAmortizedCostByConsumePeriodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProductAmortizedCostByConsumePeriodResponse
       */
      Models::DescribeProductAmortizedCostByConsumePeriodResponse describeProductAmortizedCostByConsumePeriodWithOptions(const Models::DescribeProductAmortizedCostByConsumePeriodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monthly amortized cost of a product for a specific billing cycle.
       *
       * @description - Amortized costs are used for cost allocation and cannot be used for settlement or reconciliation. This feature allocates your cloud expenses, including both subscription and pay-as-you-go fees, based on specified rules.
       * - The final data for a given month is available after 12:00 on the sixth day of the following month. This delay ensures that potential mid-month events, such as delayed billing, refunds, bill adjustments, and overdue payment write-offs, are included. Data for the current month does not include unsettled pay-as-you-go fees that have not yet been billed or are still accumulating.
       * - Amortized cost data for the past 12 months is available.
       * - Data related to attached resources is updated in the amortized costs 48 hours after the corresponding split bill is generated. To view the costs of attached resources, you must first enable [split bills](https://usercenter2.aliyun.com/finance/split-bill). Data that is not related to attached resources is updated 48 hours after the detailed bill is generated.
       * - For months before August 2021, amortized costs were not updated mid-month and were only updated after 12:00 on the sixth day of the following month. Additionally, for this period, specific costs for attached resources, such as domain names, buckets, and EIPs, for products such as CDN, OSS, and Internet Shared Bandwidth are not available.
       * - Amortized cost data is provided only after you enable the [Amortized Cost](https://usercenter2.aliyun.com/finance/amortized-costs) feature. The data is available 48 hours after you enable it.
       *
       * @param request DescribeProductAmortizedCostByConsumePeriodRequest
       * @return DescribeProductAmortizedCostByConsumePeriodResponse
       */
      Models::DescribeProductAmortizedCostByConsumePeriodResponse describeProductAmortizedCostByConsumePeriod(const Models::DescribeProductAmortizedCostByConsumePeriodRequest &request);

      /**
       * @summary Queries the coverage details of reserved instances and storage capacity units (SCUs).
       *
       * @description 1. The data is consistent with the list data in the Coverage Overview section of the Resource Instance Management menu in the User Center.
       * 2. Currently, coverage queries are supported for reserved instances (RIs) and storage capacity units (SCUs).
       * 3. Coverage queries are provided in three dimensions: hour, day, and month.
       *
       * @param request DescribeResourceCoverageDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceCoverageDetailResponse
       */
      Models::DescribeResourceCoverageDetailResponse describeResourceCoverageDetailWithOptions(const Models::DescribeResourceCoverageDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the coverage details of reserved instances and storage capacity units (SCUs).
       *
       * @description 1. The data is consistent with the list data in the Coverage Overview section of the Resource Instance Management menu in the User Center.
       * 2. Currently, coverage queries are supported for reserved instances (RIs) and storage capacity units (SCUs).
       * 3. Coverage queries are provided in three dimensions: hour, day, and month.
       *
       * @param request DescribeResourceCoverageDetailRequest
       * @return DescribeResourceCoverageDetailResponse
       */
      Models::DescribeResourceCoverageDetailResponse describeResourceCoverageDetail(const Models::DescribeResourceCoverageDetailRequest &request);

      /**
       * @summary Queries the coverage summary of reserved instances and storage capacity units (SCUs).
       *
       * @description Returns the same summary data as the Coverage Overview in the Resource Instance Management menu of the User Center.
       * Currently, coverage queries are supported for two resource types: reserved instances (RIs) and storage capacity units (SCUs).
       *
       * @param request DescribeResourceCoverageTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceCoverageTotalResponse
       */
      Models::DescribeResourceCoverageTotalResponse describeResourceCoverageTotalWithOptions(const Models::DescribeResourceCoverageTotalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the coverage summary of reserved instances and storage capacity units (SCUs).
       *
       * @description Returns the same summary data as the Coverage Overview in the Resource Instance Management menu of the User Center.
       * Currently, coverage queries are supported for two resource types: reserved instances (RIs) and storage capacity units (SCUs).
       *
       * @param request DescribeResourceCoverageTotalRequest
       * @return DescribeResourceCoverageTotalResponse
       */
      Models::DescribeResourceCoverageTotalResponse describeResourceCoverageTotal(const Models::DescribeResourceCoverageTotalRequest &request);

      /**
       * @summary Queries the information about resource plans of an Alibaba Cloud service.
       *
       * @param request DescribeResourcePackageProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourcePackageProductResponse
       */
      Models::DescribeResourcePackageProductResponse describeResourcePackageProductWithOptions(const Models::DescribeResourcePackageProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about resource plans of an Alibaba Cloud service.
       *
       * @param request DescribeResourcePackageProductRequest
       * @return DescribeResourcePackageProductResponse
       */
      Models::DescribeResourcePackageProductResponse describeResourcePackageProduct(const Models::DescribeResourcePackageProductRequest &request);

      /**
       * @summary Queries the usage details of reserved instances and storage capacity units (SCUs).
       *
       * @param request DescribeResourceUsageDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceUsageDetailResponse
       */
      Models::DescribeResourceUsageDetailResponse describeResourceUsageDetailWithOptions(const Models::DescribeResourceUsageDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage details of reserved instances and storage capacity units (SCUs).
       *
       * @param request DescribeResourceUsageDetailRequest
       * @return DescribeResourceUsageDetailResponse
       */
      Models::DescribeResourceUsageDetailResponse describeResourceUsageDetail(const Models::DescribeResourceUsageDetailRequest &request);

      /**
       * @summary Queries the usage summary of reserved instances and storage capacity units (SCUs).
       *
       * @param request DescribeResourceUsageTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceUsageTotalResponse
       */
      Models::DescribeResourceUsageTotalResponse describeResourceUsageTotalWithOptions(const Models::DescribeResourceUsageTotalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage summary of reserved instances and storage capacity units (SCUs).
       *
       * @param request DescribeResourceUsageTotalRequest
       * @return DescribeResourceUsageTotalResponse
       */
      Models::DescribeResourceUsageTotalResponse describeResourceUsageTotal(const Models::DescribeResourceUsageTotalRequest &request);

      /**
       * @summary Queries the coverage details of savings plans.
       *
       * @param tmpReq DescribeSavingsPlansCoverageDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSavingsPlansCoverageDetailResponse
       */
      Models::DescribeSavingsPlansCoverageDetailResponse describeSavingsPlansCoverageDetailWithOptions(const Models::DescribeSavingsPlansCoverageDetailRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the coverage details of savings plans.
       *
       * @param request DescribeSavingsPlansCoverageDetailRequest
       * @return DescribeSavingsPlansCoverageDetailResponse
       */
      Models::DescribeSavingsPlansCoverageDetailResponse describeSavingsPlansCoverageDetail(const Models::DescribeSavingsPlansCoverageDetailRequest &request);

      /**
       * @summary Queries the summary of savings plan coverage.
       *
       * @param tmpReq DescribeSavingsPlansCoverageTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSavingsPlansCoverageTotalResponse
       */
      Models::DescribeSavingsPlansCoverageTotalResponse describeSavingsPlansCoverageTotalWithOptions(const Models::DescribeSavingsPlansCoverageTotalRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the summary of savings plan coverage.
       *
       * @param request DescribeSavingsPlansCoverageTotalRequest
       * @return DescribeSavingsPlansCoverageTotalResponse
       */
      Models::DescribeSavingsPlansCoverageTotalResponse describeSavingsPlansCoverageTotal(const Models::DescribeSavingsPlansCoverageTotalRequest &request);

      /**
       * @summary Queries the usage details of savings plans.
       *
       * @param tmpReq DescribeSavingsPlansUsageDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSavingsPlansUsageDetailResponse
       */
      Models::DescribeSavingsPlansUsageDetailResponse describeSavingsPlansUsageDetailWithOptions(const Models::DescribeSavingsPlansUsageDetailRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage details of savings plans.
       *
       * @param request DescribeSavingsPlansUsageDetailRequest
       * @return DescribeSavingsPlansUsageDetailResponse
       */
      Models::DescribeSavingsPlansUsageDetailResponse describeSavingsPlansUsageDetail(const Models::DescribeSavingsPlansUsageDetailRequest &request);

      /**
       * @summary Queries the usage summary of savings plans.
       *
       * @param tmpReq DescribeSavingsPlansUsageTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSavingsPlansUsageTotalResponse
       */
      Models::DescribeSavingsPlansUsageTotalResponse describeSavingsPlansUsageTotalWithOptions(const Models::DescribeSavingsPlansUsageTotalRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage summary of savings plans.
       *
       * @param request DescribeSavingsPlansUsageTotalRequest
       * @return DescribeSavingsPlansUsageTotalResponse
       */
      Models::DescribeSavingsPlansUsageTotalResponse describeSavingsPlansUsageTotal(const Models::DescribeSavingsPlansUsageTotalRequest &request);

      /**
       * @summary Queries split bills.
       *
       * @description - The query results for the current month\\"s split bills are for reference only and cannot be used as the basis for reconciliation. The final bill for the current month can be queried after 12:00 on the 4th day of the next month. The split bill data for the current month does not include unsettled pay-as-you-go data (unbilled or being accumulated).
       * - Split bill data is available for the last 12 months.
       * - Split bill data is updated with a 48-hour delay compared to actual expenses. For split cloud services (such as CDN, OSS, and Internet Shared Bandwidth), the specific expenses for each attached resource (such as domain names, buckets, and EIPs) are updated with a 72-hour delay.
       * - Split bill data is available only after you enable the feature on the <props="china">[Split Bill](https://usercenter2.aliyun.com/finance/split-bill)<props="intl">[Split Bill](https://usercenter2-intl.aliyun.com/finance/split-bill) page in the console. The data becomes available 24 hours after you enable the feature.
       * - The rate limit is 10 requests per second per user. If a timeout occurs, retry the request.
       *
       * @param request DescribeSplitItemBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSplitItemBillResponse
       */
      Models::DescribeSplitItemBillResponse describeSplitItemBillWithOptions(const Models::DescribeSplitItemBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries split bills.
       *
       * @description - The query results for the current month\\"s split bills are for reference only and cannot be used as the basis for reconciliation. The final bill for the current month can be queried after 12:00 on the 4th day of the next month. The split bill data for the current month does not include unsettled pay-as-you-go data (unbilled or being accumulated).
       * - Split bill data is available for the last 12 months.
       * - Split bill data is updated with a 48-hour delay compared to actual expenses. For split cloud services (such as CDN, OSS, and Internet Shared Bandwidth), the specific expenses for each attached resource (such as domain names, buckets, and EIPs) are updated with a 72-hour delay.
       * - Split bill data is available only after you enable the feature on the <props="china">[Split Bill](https://usercenter2.aliyun.com/finance/split-bill)<props="intl">[Split Bill](https://usercenter2-intl.aliyun.com/finance/split-bill) page in the console. The data becomes available 24 hours after you enable the feature.
       * - The rate limit is 10 requests per second per user. If a timeout occurs, retry the request.
       *
       * @param request DescribeSplitItemBillRequest
       * @return DescribeSplitItemBillResponse
       */
      Models::DescribeSplitItemBillResponse describeSplitItemBill(const Models::DescribeSplitItemBillRequest &request);

      /**
       * @summary Queries the details of an account linking.
       *
       * @param request GetAccountRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountRelationResponse
       */
      Models::GetAccountRelationResponse getAccountRelationWithOptions(const Models::GetAccountRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an account linking.
       *
       * @param request GetAccountRelationRequest
       * @return GetAccountRelationResponse
       */
      Models::GetAccountRelationResponse getAccountRelation(const Models::GetAccountRelationRequest &request);

      /**
       * @summary Queries the account information of an end customer under a partner.
       *
       * @param request GetCustomerAccountInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomerAccountInfoResponse
       */
      Models::GetCustomerAccountInfoResponse getCustomerAccountInfoWithOptions(const Models::GetCustomerAccountInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the account information of an end customer under a partner.
       *
       * @param request GetCustomerAccountInfoRequest
       * @return GetCustomerAccountInfoResponse
       */
      Models::GetCustomerAccountInfoResponse getCustomerAccountInfo(const Models::GetCustomerAccountInfoRequest &request);

      /**
       * @summary Queries the list of end customer UIDs under a partner.
       *
       * @description The system queries the list of associated end customer UIDs based on the AccessKey pair in the request.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomerListResponse
       */
      Models::GetCustomerListResponse getCustomerListWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of end customer UIDs under a partner.
       *
       * @description The system queries the list of associated end customer UIDs based on the AccessKey pair in the request.
       *
       * @return GetCustomerListResponse
       */
      Models::GetCustomerListResponse getCustomerList();

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
       * @summary Queries the price of a pay-as-you-go product.
       *
       * @description ### Operation description
       * 1. Call QueryProductList to obtain the product code. For more information, see [Query product information](https://help.aliyun.com/document_detail/95984.html).
       * 2. Call the DescribePricingModule operation to obtain the configuration parameters of a product. For more information, see [Query pricing module information](https://help.aliyun.com/document_detail/96469.html).
       * 3. Call this operation with the obtained product configuration parameters to query the price of a pay-as-you-go product.
       *
       * @param request GetPayAsYouGoPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPayAsYouGoPriceResponse
       */
      Models::GetPayAsYouGoPriceResponse getPayAsYouGoPriceWithOptions(const Models::GetPayAsYouGoPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price of a pay-as-you-go product.
       *
       * @description ### Operation description
       * 1. Call QueryProductList to obtain the product code. For more information, see [Query product information](https://help.aliyun.com/document_detail/95984.html).
       * 2. Call the DescribePricingModule operation to obtain the configuration parameters of a product. For more information, see [Query pricing module information](https://help.aliyun.com/document_detail/96469.html).
       * 3. Call this operation with the obtained product configuration parameters to query the price of a pay-as-you-go product.
       *
       * @param request GetPayAsYouGoPriceRequest
       * @return GetPayAsYouGoPriceResponse
       */
      Models::GetPayAsYouGoPriceResponse getPayAsYouGoPrice(const Models::GetPayAsYouGoPriceRequest &request);

      /**
       * @summary Queries the price of a resource plan.
       *
       * @param request GetResourcePackagePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourcePackagePriceResponse
       */
      Models::GetResourcePackagePriceResponse getResourcePackagePriceWithOptions(const Models::GetResourcePackagePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price of a resource plan.
       *
       * @param request GetResourcePackagePriceRequest
       * @return GetResourcePackagePriceResponse
       */
      Models::GetResourcePackagePriceResponse getResourcePackagePrice(const Models::GetResourcePackagePriceRequest &request);

      /**
       * @summary Queries the prices of subscription products.
       *
       * @description 1. Call QueryProductList to obtain the product code. For more information, see [Query product information](https://help.aliyun.com/document_detail/95984.html).
       * 2. Call the DescribePricingModule operation to obtain the configuration parameters of the product. For more information, see [Query product module information](https://help.aliyun.com/document_detail/96469.html).
       * 3. Call this operation to query the prices of subscription products based on the obtained product configuration parameters.
       * 4. Concatenate the Config parameter under ModuleList based on the config parameter returned by the DescribePricingModule operation. Do not omit any parameters. Otherwise, an error occurs during the price inquiry.
       *
       * @param request GetSubscriptionPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubscriptionPriceResponse
       */
      Models::GetSubscriptionPriceResponse getSubscriptionPriceWithOptions(const Models::GetSubscriptionPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the prices of subscription products.
       *
       * @description 1. Call QueryProductList to obtain the product code. For more information, see [Query product information](https://help.aliyun.com/document_detail/95984.html).
       * 2. Call the DescribePricingModule operation to obtain the configuration parameters of the product. For more information, see [Query product module information](https://help.aliyun.com/document_detail/96469.html).
       * 3. Call this operation to query the prices of subscription products based on the obtained product configuration parameters.
       * 4. Concatenate the Config parameter under ModuleList based on the config parameter returned by the DescribePricingModule operation. Do not omit any parameters. Otherwise, an error occurs during the price inquiry.
       *
       * @param request GetSubscriptionPriceRequest
       * @return GetSubscriptionPriceResponse
       */
      Models::GetSubscriptionPriceResponse getSubscriptionPrice(const Models::GetSubscriptionPriceRequest &request);

      /**
       * @summary Queries the refund amount for an instance that you want to unsubscribe from.
       *
       * @description 1. **Carefully verify the information about the resource to be unsubscribed, and confirm the unsubscription terms and refund amount. Resources cannot be recovered after unsubscription.**
       * 2. Only the actual paid amount is refunded. Used vouchers are not refunded.
       * 3. For other questions, refer to: <props="china">[Refund rules](https://help.aliyun.com/knowledge_detail/116043.html?spm=a2c81.e1d666e.app.2.62ae11271Kd6iM)<props="intl">[Refund rules for Alibaba Cloud International Website](https://www.alibabacloud.com/help/zh/user-center/user-guide/refund-rules)
       *
       * @param request InquiryPriceRefundInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InquiryPriceRefundInstanceResponse
       */
      Models::InquiryPriceRefundInstanceResponse inquiryPriceRefundInstanceWithOptions(const Models::InquiryPriceRefundInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the refund amount for an instance that you want to unsubscribe from.
       *
       * @description 1. **Carefully verify the information about the resource to be unsubscribed, and confirm the unsubscription terms and refund amount. Resources cannot be recovered after unsubscription.**
       * 2. Only the actual paid amount is refunded. Used vouchers are not refunded.
       * 3. For other questions, refer to: <props="china">[Refund rules](https://help.aliyun.com/knowledge_detail/116043.html?spm=a2c81.e1d666e.app.2.62ae11271Kd6iM)<props="intl">[Refund rules for Alibaba Cloud International Website](https://www.alibabacloud.com/help/zh/user-center/user-guide/refund-rules)
       *
       * @param request InquiryPriceRefundInstanceRequest
       * @return InquiryPriceRefundInstanceResponse
       */
      Models::InquiryPriceRefundInstanceResponse inquiryPriceRefundInstance(const Models::InquiryPriceRefundInstanceRequest &request);

      /**
       * @summary Adds or deletes permissions for an account linking relationship.
       *
       * @param request ModifyAccountRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountRelationResponse
       */
      Models::ModifyAccountRelationResponse modifyAccountRelationWithOptions(const Models::ModifyAccountRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or deletes permissions for an account linking relationship.
       *
       * @param request ModifyAccountRelationRequest
       * @return ModifyAccountRelationResponse
       */
      Models::ModifyAccountRelationResponse modifyAccountRelation(const Models::ModifyAccountRelationRequest &request);

      /**
       * @summary Modifies financial units. Batch modification is supported.
       *
       * @param request ModifyCostUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCostUnitResponse
       */
      Models::ModifyCostUnitResponse modifyCostUnitWithOptions(const Models::ModifyCostUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies financial units. Batch modification is supported.
       *
       * @param request ModifyCostUnitRequest
       * @return ModifyCostUnitResponse
       */
      Models::ModifyCostUnitResponse modifyCostUnit(const Models::ModifyCostUnitRequest &request);

      /**
       * @summary Modifies the resource configuration of an instance. Invoking this operation creates an order for the Upgrade/Downgrade of instance resources and processes automatic payment. This operation does not support configuration changes for ECS or RDS products. Use the dedicated API of the corresponding product to execute the Upgrade/Downgrade.
       *
       * @param request ModifyInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceResponse
       */
      Models::ModifyInstanceResponse modifyInstanceWithOptions(const Models::ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource configuration of an instance. Invoking this operation creates an order for the Upgrade/Downgrade of instance resources and processes automatic payment. This operation does not support configuration changes for ECS or RDS products. Use the dedicated API of the corresponding product to execute the Upgrade/Downgrade.
       *
       * @param request ModifyInstanceRequest
       * @return ModifyInstanceResponse
       */
      Models::ModifyInstanceResponse modifyInstance(const Models::ModifyInstanceRequest &request);

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
       * @summary Queries the user\\"s account balance.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAccountBalanceResponse
       */
      Models::QueryAccountBalanceResponse queryAccountBalanceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the user\\"s account balance.
       *
       * @return QueryAccountBalanceResponse
       */
      Models::QueryAccountBalanceResponse queryAccountBalance();

      /**
       * @summary Queries account spending within a billing cycle and aggregates the data by resource owner.
       *
       * @description - Data for the current month is for reference only. Do not use it for reconciliation. The final bill for the current month is available to view or export after 12:00 on the third day of the next month. This delay accounts for mid-month events such as delayed billing, refunds, bill adjustments, and overdue payment write-offs.
       * - Data from the last 18 months is available.
       * - Billing data is updated 24 hours after actual resource consumption. Information related to instance IDs, such as instance configurations, instance types, instance nicknames, resource groups, public IP addresses, private IP addresses, and zones, is updated with a 48-hour delay.
       * - Billing data does not include the costs of attached resources, such as domain names, buckets, and elastic IP addresses (EIPs), for products such as CDN, OSS, and Internet Shared Bandwidth. To view statistics that include data for attached resources, go to Split Bill.
       * - For Alibaba Cloud Communications products, detailed data is available only from June 2020 onwards. For HiChina products, such as Domain Names and trademarks, detailed data is available only from November 2020 onwards.
       * - Each account is limited to 10 queries per second. If a timeout occurs, retry the request.
       *
       * @param request QueryAccountBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAccountBillResponse
       */
      Models::QueryAccountBillResponse queryAccountBillWithOptions(const Models::QueryAccountBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries account spending within a billing cycle and aggregates the data by resource owner.
       *
       * @description - Data for the current month is for reference only. Do not use it for reconciliation. The final bill for the current month is available to view or export after 12:00 on the third day of the next month. This delay accounts for mid-month events such as delayed billing, refunds, bill adjustments, and overdue payment write-offs.
       * - Data from the last 18 months is available.
       * - Billing data is updated 24 hours after actual resource consumption. Information related to instance IDs, such as instance configurations, instance types, instance nicknames, resource groups, public IP addresses, private IP addresses, and zones, is updated with a 48-hour delay.
       * - Billing data does not include the costs of attached resources, such as domain names, buckets, and elastic IP addresses (EIPs), for products such as CDN, OSS, and Internet Shared Bandwidth. To view statistics that include data for attached resources, go to Split Bill.
       * - For Alibaba Cloud Communications products, detailed data is available only from June 2020 onwards. For HiChina products, such as Domain Names and trademarks, detailed data is available only from November 2020 onwards.
       * - Each account is limited to 10 queries per second. If a timeout occurs, retry the request.
       *
       * @param request QueryAccountBillRequest
       * @return QueryAccountBillResponse
       */
      Models::QueryAccountBillResponse queryAccountBill(const Models::QueryAccountBillRequest &request);

      /**
       * @summary Queries the income and expenditure details of account transactions.
       *
       * @param request QueryAccountTransactionDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAccountTransactionDetailsResponse
       */
      Models::QueryAccountTransactionDetailsResponse queryAccountTransactionDetailsWithOptions(const Models::QueryAccountTransactionDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the income and expenditure details of account transactions.
       *
       * @param request QueryAccountTransactionDetailsRequest
       * @return QueryAccountTransactionDetailsResponse
       */
      Models::QueryAccountTransactionDetailsResponse queryAccountTransactionDetails(const Models::QueryAccountTransactionDetailsRequest &request);

      /**
       * @summary Queries the transaction records of a user account.
       *
       * @param request QueryAccountTransactionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAccountTransactionsResponse
       */
      Models::QueryAccountTransactionsResponse queryAccountTransactionsWithOptions(const Models::QueryAccountTransactionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the transaction records of a user account.
       *
       * @param request QueryAccountTransactionsRequest
       * @return QueryAccountTransactionsResponse
       */
      Models::QueryAccountTransactionsResponse queryAccountTransactions(const Models::QueryAccountTransactionsRequest &request);

      /**
       * @summary Queries the list of available instances for the user.
       *
       * @param request QueryAvailableInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAvailableInstancesResponse
       */
      Models::QueryAvailableInstancesResponse queryAvailableInstancesWithOptions(const Models::QueryAvailableInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of available instances for the user.
       *
       * @param request QueryAvailableInstancesRequest
       * @return QueryAvailableInstancesResponse
       */
      Models::QueryAvailableInstancesResponse queryAvailableInstances(const Models::QueryAvailableInstancesRequest &request);

      /**
       * @summary Queries the settlement bills of a user within a specific billing cycle.
       *
       * @param request QueryBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBillResponse
       */
      Models::QueryBillResponse queryBillWithOptions(const Models::QueryBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the settlement bills of a user within a specific billing cycle.
       *
       * @param request QueryBillRequest
       * @return QueryBillResponse
       */
      Models::QueryBillResponse queryBill(const Models::QueryBillRequest &request);

      /**
       * @summary Queries the bill overview of a user for a specific billing cycle.
       *
       * @param request QueryBillOverviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBillOverviewResponse
       */
      Models::QueryBillOverviewResponse queryBillOverviewWithOptions(const Models::QueryBillOverviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bill overview of a user for a specific billing cycle.
       *
       * @param request QueryBillOverviewRequest
       * @return QueryBillOverviewResponse
       */
      Models::QueryBillOverviewResponse queryBillOverview(const Models::QueryBillOverviewRequest &request);

      /**
       * @summary Queries the records of bill subscriptions to OSS buckets.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBillToOSSSubscriptionResponse
       */
      Models::QueryBillToOSSSubscriptionResponse queryBillToOSSSubscriptionWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the records of bill subscriptions to OSS buckets.
       *
       * @return QueryBillToOSSSubscriptionResponse
       */
      Models::QueryBillToOSSSubscriptionResponse queryBillToOSSSubscription();

      /**
       * @summary Queries user voucher information.
       *
       * @param request QueryCashCouponsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCashCouponsResponse
       */
      Models::QueryCashCouponsResponse queryCashCouponsWithOptions(const Models::QueryCashCouponsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user voucher information.
       *
       * @param request QueryCashCouponsRequest
       * @return QueryCashCouponsResponse
       */
      Models::QueryCashCouponsResponse queryCashCoupons(const Models::QueryCashCouponsRequest &request);

      /**
       * @summary Retrieves a list of commodity information based on a product code.
       *
       * @description Retrieves a list of commodity information based on a product code.
       *
       * @param request QueryCommodityListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCommodityListResponse
       */
      Models::QueryCommodityListResponse queryCommodityListWithOptions(const Models::QueryCommodityListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of commodity information based on a product code.
       *
       * @description Retrieves a list of commodity information based on a product code.
       *
       * @param request QueryCommodityListRequest
       * @return QueryCommodityListResponse
       */
      Models::QueryCommodityListResponse queryCommodityList(const Models::QueryCommodityListRequest &request);

      /**
       * @summary Queries all financial unit nodes under the current node of the financial unit tree. If ParentUnitId is set to -1, all financial units are queried.
       *
       * @param request QueryCostUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCostUnitResponse
       */
      Models::QueryCostUnitResponse queryCostUnitWithOptions(const Models::QueryCostUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all financial unit nodes under the current node of the financial unit tree. If ParentUnitId is set to -1, all financial units are queried.
       *
       * @param request QueryCostUnitRequest
       * @return QueryCostUnitResponse
       */
      Models::QueryCostUnitResponse queryCostUnit(const Models::QueryCostUnitRequest &request);

      /**
       * @summary Queries the list of resource instances that belong to a financial unit of a user. When UnitId is set to 0, the query returns unallocated primary and sub-resource instances.
       *
       * @param request QueryCostUnitResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCostUnitResourceResponse
       */
      Models::QueryCostUnitResourceResponse queryCostUnitResourceWithOptions(const Models::QueryCostUnitResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of resource instances that belong to a financial unit of a user. When UnitId is set to 0, the query returns unallocated primary and sub-resource instances.
       *
       * @param request QueryCostUnitResourceRequest
       * @return QueryCostUnitResourceResponse
       */
      Models::QueryCostUnitResourceResponse queryCostUnitResource(const Models::QueryCostUnitResourceRequest &request);

      /**
       * @summary Queries the Alibaba Cloud invoice mailing address information service.
       *
       * @param request QueryCustomerAddressListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCustomerAddressListResponse
       */
      Models::QueryCustomerAddressListResponse queryCustomerAddressListWithOptions(const Models::QueryCustomerAddressListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Alibaba Cloud invoice mailing address information service.
       *
       * @param request QueryCustomerAddressListRequest
       * @return QueryCustomerAddressListResponse
       */
      Models::QueryCustomerAddressListResponse queryCustomerAddressList(const Models::QueryCustomerAddressListRequest &request);

      /**
       * @summary Queries the usage of resource plans, including reserved instances (RIs) and storage capacity units (SCUs).
       *
       * @description Limits:
       * - Only usage records from the past year are supported.
       *
       * @param request QueryDPUtilizationDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDPUtilizationDetailResponse
       */
      Models::QueryDPUtilizationDetailResponse queryDPUtilizationDetailWithOptions(const Models::QueryDPUtilizationDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage of resource plans, including reserved instances (RIs) and storage capacity units (SCUs).
       *
       * @description Limits:
       * - Only usage records from the past year are supported.
       *
       * @param request QueryDPUtilizationDetailRequest
       * @return QueryDPUtilizationDetailResponse
       */
      Models::QueryDPUtilizationDetailResponse queryDPUtilizationDetail(const Models::QueryDPUtilizationDetailRequest &request);

      /**
       * @summary Queries a list of objects that are eligible for invoicing.
       *
       * @param request QueryEvaluateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEvaluateListResponse
       */
      Models::QueryEvaluateListResponse queryEvaluateListWithOptions(const Models::QueryEvaluateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of objects that are eligible for invoicing.
       *
       * @param request QueryEvaluateListRequest
       * @return QueryEvaluateListResponse
       */
      Models::QueryEvaluateListResponse queryEvaluateList(const Models::QueryEvaluateListRequest &request);

      /**
       * @summary Queries the enterprise financial account information of an account that has primary-subsidiary relationship permissions.
       *
       * @param request QueryFinancialAccountInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFinancialAccountInfoResponse
       */
      Models::QueryFinancialAccountInfoResponse queryFinancialAccountInfoWithOptions(const Models::QueryFinancialAccountInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the enterprise financial account information of an account that has primary-subsidiary relationship permissions.
       *
       * @param request QueryFinancialAccountInfoRequest
       * @return QueryFinancialAccountInfoResponse
       */
      Models::QueryFinancialAccountInfoResponse queryFinancialAccountInfo(const Models::QueryFinancialAccountInfoRequest &request);

      /**
       * @summary Queries the usage summary of all product instances or billable items for an account in a billing cycle. This operation has been upgraded to DescribeInstanceBill. This operation no longer queries data beyond the 50,000th row.
       *
       * @description ## API description
       * Note the following when you call this operation:
       * - The API for instance bills has been upgraded. We recommend that you use the new operation [DescribeInstanceBill](https://help.aliyun.com/document_detail/209402.html). This operation no longer supports querying data beyond the 50,000th row.
       * - Instance bills are generated based on split billing data. A delay of about one day may occur.
       * - Instance information may change within a billing cycle. The instance Config and Spec in the monthly summary reflect the information at the time the record was generated. For more information, see the corresponding detailed bill.
       * - Data for Alibaba Cloud Communications products is available from June 2020. Data for HiChina products is available from November 2020.
       * <props="intl">
       * - For the international site (alibabacloud.com), select Singapore as the endpoint.
       *
       * @param request QueryInstanceBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInstanceBillResponse
       */
      Models::QueryInstanceBillResponse queryInstanceBillWithOptions(const Models::QueryInstanceBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage summary of all product instances or billable items for an account in a billing cycle. This operation has been upgraded to DescribeInstanceBill. This operation no longer queries data beyond the 50,000th row.
       *
       * @description ## API description
       * Note the following when you call this operation:
       * - The API for instance bills has been upgraded. We recommend that you use the new operation [DescribeInstanceBill](https://help.aliyun.com/document_detail/209402.html). This operation no longer supports querying data beyond the 50,000th row.
       * - Instance bills are generated based on split billing data. A delay of about one day may occur.
       * - Instance information may change within a billing cycle. The instance Config and Spec in the monthly summary reflect the information at the time the record was generated. For more information, see the corresponding detailed bill.
       * - Data for Alibaba Cloud Communications products is available from June 2020. Data for HiChina products is available from November 2020.
       * <props="intl">
       * - For the international site (alibabacloud.com), select Singapore as the endpoint.
       *
       * @param request QueryInstanceBillRequest
       * @return QueryInstanceBillResponse
       */
      Models::QueryInstanceBillResponse queryInstanceBill(const Models::QueryInstanceBillRequest &request);

      /**
       * @summary Queries a list of instances by tags.
       *
       * @param request QueryInstanceByTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInstanceByTagResponse
       */
      Models::QueryInstanceByTagResponse queryInstanceByTagWithOptions(const Models::QueryInstanceByTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances by tags.
       *
       * @param request QueryInstanceByTagRequest
       * @return QueryInstanceByTagResponse
       */
      Models::QueryInstanceByTagResponse queryInstanceByTag(const Models::QueryInstanceByTagRequest &request);

      /**
       * @summary This API is deprecated. Use the following APIs to retrieve the amortized cost: `DescribeInstanceAmortizedCostByAmortizationPeriod` - retrieves instance costs by amortization period; `DescribeProductAmortizedCostByAmortizationPeriod` - retrieves product costs by amortization period; `DescribeInstanceAmortizedCostByConsumePeriod` - retrieves instance costs by consume period; `DescribeProductAmortizedCostByConsumePeriod` - retrieves product costs by consume period.
       *
       * @param request QueryInstanceGaapCostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInstanceGaapCostResponse
       */
      Models::QueryInstanceGaapCostResponse queryInstanceGaapCostWithOptions(const Models::QueryInstanceGaapCostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is deprecated. Use the following APIs to retrieve the amortized cost: `DescribeInstanceAmortizedCostByAmortizationPeriod` - retrieves instance costs by amortization period; `DescribeProductAmortizedCostByAmortizationPeriod` - retrieves product costs by amortization period; `DescribeInstanceAmortizedCostByConsumePeriod` - retrieves instance costs by consume period; `DescribeProductAmortizedCostByConsumePeriod` - retrieves product costs by consume period.
       *
       * @param request QueryInstanceGaapCostRequest
       * @return QueryInstanceGaapCostResponse
       */
      Models::QueryInstanceGaapCostResponse queryInstanceGaapCost(const Models::QueryInstanceGaapCostRequest &request);

      /**
       * @summary Queries the invoicing information of an Alibaba Cloud user.
       *
       * @param request QueryInvoicingCustomerListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInvoicingCustomerListResponse
       */
      Models::QueryInvoicingCustomerListResponse queryInvoicingCustomerListWithOptions(const Models::QueryInvoicingCustomerListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the invoicing information of an Alibaba Cloud user.
       *
       * @param request QueryInvoicingCustomerListRequest
       * @return QueryInvoicingCustomerListResponse
       */
      Models::QueryInvoicingCustomerListResponse queryInvoicingCustomerList(const Models::QueryInvoicingCustomerListRequest &request);

      /**
       * @summary Queries the orders of users or distribution customers. By default, this operation queries orders created within the last hour. To query orders over a longer period, specify the CreateTimeStart and CreateTimeEnd parameters.
       *
       * @param request QueryOrdersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryOrdersResponse
       */
      Models::QueryOrdersResponse queryOrdersWithOptions(const Models::QueryOrdersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the orders of users or distribution customers. By default, this operation queries orders created within the last hour. To query orders over a longer period, specify the CreateTimeStart and CreateTimeEnd parameters.
       *
       * @param request QueryOrdersRequest
       * @return QueryOrdersResponse
       */
      Models::QueryOrdersResponse queryOrders(const Models::QueryOrdersRequest &request);

      /**
       * @summary Queries the permissions for a master-member relationship based on the relationship ID.
       *
       * @param request QueryPermissionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPermissionListResponse
       */
      Models::QueryPermissionListResponse queryPermissionListWithOptions(const Models::QueryPermissionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the permissions for a master-member relationship based on the relationship ID.
       *
       * @param request QueryPermissionListRequest
       * @return QueryPermissionListResponse
       */
      Models::QueryPermissionListResponse queryPermissionList(const Models::QueryPermissionListRequest &request);

      /**
       * @summary Queries user card package information.
       *
       * @param request QueryPrepaidCardsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPrepaidCardsResponse
       */
      Models::QueryPrepaidCardsResponse queryPrepaidCardsWithOptions(const Models::QueryPrepaidCardsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user card package information.
       *
       * @param request QueryPrepaidCardsRequest
       * @return QueryPrepaidCardsResponse
       */
      Models::QueryPrepaidCardsResponse queryPrepaidCards(const Models::QueryPrepaidCardsRequest &request);

      /**
       * @summary Queries the pricing entities under a commodity. A pricing entity is the smallest product capability used for metering and cost calculation.
       *
       * @description Queries the pricing entities under a commodity. A pricing entity is the smallest product capability used for metering and cost calculation.
       *
       * @param request QueryPriceEntityListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPriceEntityListResponse
       */
      Models::QueryPriceEntityListResponse queryPriceEntityListWithOptions(const Models::QueryPriceEntityListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the pricing entities under a commodity. A pricing entity is the smallest product capability used for metering and cost calculation.
       *
       * @description Queries the pricing entities under a commodity. A pricing entity is the smallest product capability used for metering and cost calculation.
       *
       * @param request QueryPriceEntityListRequest
       * @return QueryPriceEntityListResponse
       */
      Models::QueryPriceEntityListResponse queryPriceEntityList(const Models::QueryPriceEntityListRequest &request);

      /**
       * @summary Queries the list of products available for the current account to order. The response includes the product code, product name, and subscription type (subscription or pay-as-you-go).
       *
       * @param request QueryProductListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryProductListResponse
       */
      Models::QueryProductListResponse queryProductListWithOptions(const Models::QueryProductListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of products available for the current account to order. The response includes the product code, product name, and subscription type (subscription or pay-as-you-go).
       *
       * @param request QueryProductListRequest
       * @return QueryProductListResponse
       */
      Models::QueryProductListResponse queryProductList(const Models::QueryProductListRequest &request);

      /**
       * @summary Queries the usage of reserved instances (RIs).
       *
       * @param request QueryRIUtilizationDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRIUtilizationDetailResponse
       */
      Models::QueryRIUtilizationDetailResponse queryRIUtilizationDetailWithOptions(const Models::QueryRIUtilizationDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage of reserved instances (RIs).
       *
       * @param request QueryRIUtilizationDetailRequest
       * @return QueryRIUtilizationDetailResponse
       */
      Models::QueryRIUtilizationDetailResponse queryRIUtilizationDetail(const Models::QueryRIUtilizationDetailRequest &request);

      /**
       * @summary Queries the redemption ticket information of a user.
       *
       * @param request QueryRedeemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRedeemResponse
       */
      Models::QueryRedeemResponse queryRedeemWithOptions(const Models::QueryRedeemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the redemption ticket information of a user.
       *
       * @param request QueryRedeemRequest
       * @return QueryRedeemResponse
       */
      Models::QueryRedeemResponse queryRedeem(const Models::QueryRedeemRequest &request);

      /**
       * @summary Queries a list of the relationships of member accounts.
       *
       * @param request QueryRelationListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRelationListResponse
       */
      Models::QueryRelationListResponse queryRelationListWithOptions(const Models::QueryRelationListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of the relationships of member accounts.
       *
       * @param request QueryRelationListRequest
       * @return QueryRelationListResponse
       */
      Models::QueryRelationListResponse queryRelationList(const Models::QueryRelationListRequest &request);

      /**
       * @summary Queries the available quota for a user in a reseller payment scenario.
       *
       * @param request QueryResellerAvailableQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryResellerAvailableQuotaResponse
       */
      Models::QueryResellerAvailableQuotaResponse queryResellerAvailableQuotaWithOptions(const Models::QueryResellerAvailableQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available quota for a user in a reseller payment scenario.
       *
       * @param request QueryResellerAvailableQuotaRequest
       * @return QueryResellerAvailableQuotaResponse
       */
      Models::QueryResellerAvailableQuotaResponse queryResellerAvailableQuota(const Models::QueryResellerAvailableQuotaRequest &request);

      /**
       * @description Queries the alarm thresholds for low quotas.
       *
       * @param request QueryResellerUserAlarmThresholdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryResellerUserAlarmThresholdResponse
       */
      Models::QueryResellerUserAlarmThresholdResponse queryResellerUserAlarmThresholdWithOptions(const Models::QueryResellerUserAlarmThresholdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description Queries the alarm thresholds for low quotas.
       *
       * @param request QueryResellerUserAlarmThresholdRequest
       * @return QueryResellerUserAlarmThresholdResponse
       */
      Models::QueryResellerUserAlarmThresholdResponse queryResellerUserAlarmThreshold(const Models::QueryResellerUserAlarmThresholdRequest &request);

      /**
       * @summary Queries the instances of a specific resource plan for a user. Only valid resource plans are supported.
       *
       * @param request QueryResourcePackageInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryResourcePackageInstancesResponse
       */
      Models::QueryResourcePackageInstancesResponse queryResourcePackageInstancesWithOptions(const Models::QueryResourcePackageInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instances of a specific resource plan for a user. Only valid resource plans are supported.
       *
       * @param request QueryResourcePackageInstancesRequest
       * @return QueryResourcePackageInstancesResponse
       */
      Models::QueryResourcePackageInstancesResponse queryResourcePackageInstances(const Models::QueryResourcePackageInstancesRequest &request);

      /**
       * @summary Queries the details of savings plan deductions.
       *
       * @param request QuerySavingsPlansDeductLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySavingsPlansDeductLogResponse
       */
      Models::QuerySavingsPlansDeductLogResponse querySavingsPlansDeductLogWithOptions(const Models::QuerySavingsPlansDeductLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of savings plan deductions.
       *
       * @param request QuerySavingsPlansDeductLogRequest
       * @return QuerySavingsPlansDeductLogResponse
       */
      Models::QuerySavingsPlansDeductLogResponse querySavingsPlansDeductLog(const Models::QuerySavingsPlansDeductLogRequest &request);

      /**
       * @summary Queries the discount information for savings plans.
       *
       * @param request QuerySavingsPlansDiscountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySavingsPlansDiscountResponse
       */
      Models::QuerySavingsPlansDiscountResponse querySavingsPlansDiscountWithOptions(const Models::QuerySavingsPlansDiscountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the discount information for savings plans.
       *
       * @param request QuerySavingsPlansDiscountRequest
       * @return QuerySavingsPlansDiscountResponse
       */
      Models::QuerySavingsPlansDiscountResponse querySavingsPlansDiscount(const Models::QuerySavingsPlansDiscountRequest &request);

      /**
       * @summary Queries information about your savings plan instances.
       *
       * @param request QuerySavingsPlansInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySavingsPlansInstanceResponse
       */
      Models::QuerySavingsPlansInstanceResponse querySavingsPlansInstanceWithOptions(const Models::QuerySavingsPlansInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about your savings plan instances.
       *
       * @param request QuerySavingsPlansInstanceRequest
       * @return QuerySavingsPlansInstanceResponse
       */
      Models::QuerySavingsPlansInstanceResponse querySavingsPlansInstance(const Models::QuerySavingsPlansInstanceRequest &request);

      /**
       * @summary Queries the settlement bills of a user for a specific billing cycle. Supports domestic accounts with more than 50,000 bill entries.
       *
       * @description - The query results for the current month are for reference only and cannot be used for reconciliation. The final bill for the current month is available for viewing or export after 12:00 on the 2nd of the following month. During the month, a few scenarios may occur, including but not limited to delayed billing, refunds, adjustments, and overdue payment write-offs.
       * - Bill data is updated with a 5-hour delay relative to actual cost consumption.
       * - For bills in the "Unsettled" state in historical billing cycles, the status is updated to settled 5 hours after payment. For bills in the "Unsettled" state in the current month, the status is updated to settled when the bill is generated at 12:00 on the 2nd of the following month.
       * - This API supports graceful backoff with a request rate of 600/60(s).
       * - The rate limit per user is 10 requests per second. If a timeout occurs, retry the request.
       *
       * @param request QuerySettleBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySettleBillResponse
       */
      Models::QuerySettleBillResponse querySettleBillWithOptions(const Models::QuerySettleBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the settlement bills of a user for a specific billing cycle. Supports domestic accounts with more than 50,000 bill entries.
       *
       * @description - The query results for the current month are for reference only and cannot be used for reconciliation. The final bill for the current month is available for viewing or export after 12:00 on the 2nd of the following month. During the month, a few scenarios may occur, including but not limited to delayed billing, refunds, adjustments, and overdue payment write-offs.
       * - Bill data is updated with a 5-hour delay relative to actual cost consumption.
       * - For bills in the "Unsettled" state in historical billing cycles, the status is updated to settled 5 hours after payment. For bills in the "Unsettled" state in the current month, the status is updated to settled when the bill is generated at 12:00 on the 2nd of the following month.
       * - This API supports graceful backoff with a request rate of 600/60(s).
       * - The rate limit per user is 10 requests per second. If a timeout occurs, retry the request.
       *
       * @param request QuerySettleBillRequest
       * @return QuerySettleBillResponse
       */
      Models::QuerySettleBillResponse querySettleBill(const Models::QuerySettleBillRequest &request);

      /**
       * @summary Queries the list of SKUs and their list prices under a specified pricing entity of a commodity. A product feature typically has 1 to multiple SKUs, and some products can have tens of thousands of SKUs. The request parameters support filtered queries based on specific SKU configuration conditions.
       *
       * @param tmpReq QuerySkuPriceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySkuPriceListResponse
       */
      Models::QuerySkuPriceListResponse querySkuPriceListWithOptions(const Models::QuerySkuPriceListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of SKUs and their list prices under a specified pricing entity of a commodity. A product feature typically has 1 to multiple SKUs, and some products can have tens of thousands of SKUs. The request parameters support filtered queries based on specific SKU configuration conditions.
       *
       * @param request QuerySkuPriceListRequest
       * @return QuerySkuPriceListResponse
       */
      Models::QuerySkuPriceListResponse querySkuPriceList(const Models::QuerySkuPriceListRequest &request);

      /**
       * @summary Queries split bills. This API has been upgraded. We recommend that you use the new DescribeSplitItemBill operation.
       *
       * @description - The API for split bills is upgraded. We recommend that you use the new [DescribeSplitItemBill](https://help.aliyun.com/document_detail/208169.html) operation. This operation no longer supports querying more than 50,000 rows of data.
       * - The data is consistent with the split bill data for the specified billing cycle in the User Center.
       * - You can query split bills that were generated within the last 12 months.
       * - To use this feature, you must first enable it on the [Split Bill](https://usercenter2.aliyun.com/finance/split-bill) page in the console.
       *
       * @param request QuerySplitItemBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySplitItemBillResponse
       */
      Models::QuerySplitItemBillResponse querySplitItemBillWithOptions(const Models::QuerySplitItemBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries split bills. This API has been upgraded. We recommend that you use the new DescribeSplitItemBill operation.
       *
       * @description - The API for split bills is upgraded. We recommend that you use the new [DescribeSplitItemBill](https://help.aliyun.com/document_detail/208169.html) operation. This operation no longer supports querying more than 50,000 rows of data.
       * - The data is consistent with the split bill data for the specified billing cycle in the User Center.
       * - You can query split bills that were generated within the last 12 months.
       * - To use this feature, you must first enable it on the [Split Bill](https://usercenter2.aliyun.com/finance/split-bill) page in the console.
       *
       * @param request QuerySplitItemBillRequest
       * @return QuerySplitItemBillResponse
       */
      Models::QuerySplitItemBillResponse querySplitItemBill(const Models::QuerySplitItemBillRequest &request);

      /**
       * @summary Queries the metering records for the specified cloud service.
       *
       * @description ## API description
       * - The specified cloud service parameter must be one of the following cloud service codes. The metering data types include hourly and daily.
       * - The time format must comply with the ISO 8601 standard. Time specification constraints:
       * 	-	Due to delays in data push, the data integrity of hourly metering data is guaranteed for the past 24 hours, and the data integrity of daily metering data is guaranteed for the past 2 days.
       * 	-	The time span can cover the metering data of the most recent quarter.
       *
       * @param request QueryUserOmsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserOmsDataResponse
       */
      Models::QueryUserOmsDataResponse queryUserOmsDataWithOptions(const Models::QueryUserOmsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metering records for the specified cloud service.
       *
       * @description ## API description
       * - The specified cloud service parameter must be one of the following cloud service codes. The metering data types include hourly and daily.
       * - The time format must comply with the ISO 8601 standard. Time specification constraints:
       * 	-	Due to delays in data push, the data integrity of hourly metering data is guaranteed for the past 24 hours, and the data integrity of daily metering data is guaranteed for the past 2 days.
       * 	-	The time span can cover the metering data of the most recent quarter.
       *
       * @param request QueryUserOmsDataRequest
       * @return QueryUserOmsDataResponse
       */
      Models::QueryUserOmsDataResponse queryUserOmsData(const Models::QueryUserOmsDataRequest &request);

      /**
       * @summary Unsubscribes from an instance that is no longer needed.
       *
       * @description 1. Only the actual paid amount is refunded. Used vouchers are not refunded.
       * 2. Carefully verify the information about the resource to be unsubscribed, and confirm the unsubscription terms and refund amount. Resources cannot be recovered after unsubscription.
       * 1. This operation can be called only by direct customers. Reseller customers cannot use this operation.
       * 4. For other questions, refer to: <props="china">[Refund policy](https://help.aliyun.com/knowledge_detail/116043.html?spm=a2c81.e1d666e.app.2.62ae11271Kd6iM)<props="intl">[Refund rules for Alibaba Cloud International site](https://www.alibabacloud.com/help/zh/user-center/user-guide/refund-rules)
       *
       * @param request RefundInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefundInstanceResponse
       */
      Models::RefundInstanceResponse refundInstanceWithOptions(const Models::RefundInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unsubscribes from an instance that is no longer needed.
       *
       * @description 1. Only the actual paid amount is refunded. Used vouchers are not refunded.
       * 2. Carefully verify the information about the resource to be unsubscribed, and confirm the unsubscription terms and refund amount. Resources cannot be recovered after unsubscription.
       * 1. This operation can be called only by direct customers. Reseller customers cannot use this operation.
       * 4. For other questions, refer to: <props="china">[Refund policy](https://help.aliyun.com/knowledge_detail/116043.html?spm=a2c81.e1d666e.app.2.62ae11271Kd6iM)<props="intl">[Refund rules for Alibaba Cloud International site](https://www.alibabacloud.com/help/zh/user-center/user-guide/refund-rules)
       *
       * @param request RefundInstanceRequest
       * @return RefundInstanceResponse
       */
      Models::RefundInstanceResponse refundInstance(const Models::RefundInstanceRequest &request);

      /**
       * @summary Releases instances by Virtual Network Operators (VNOs).
       *
       * @description This operation is provided for only VNOs to release instances. If a non-specific VNO calls this operation, the request is blocked.
       *
       * @param request ReleaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstanceWithOptions(const Models::ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases instances by Virtual Network Operators (VNOs).
       *
       * @description This operation is provided for only VNOs to release instances. If a non-specific VNO calls this operation, the request is blocked.
       *
       * @param request ReleaseInstanceRequest
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstance(const Models::ReleaseInstanceRequest &request);

      /**
       * @summary Disassociates a RAM user from an Alibaba Cloud account.
       *
       * @param request RelieveAccountRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RelieveAccountRelationResponse
       */
      Models::RelieveAccountRelationResponse relieveAccountRelationWithOptions(const Models::RelieveAccountRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a RAM user from an Alibaba Cloud account.
       *
       * @param request RelieveAccountRelationRequest
       * @return RelieveAccountRelationResponse
       */
      Models::RelieveAccountRelationResponse relieveAccountRelation(const Models::RelieveAccountRelationRequest &request);

      /**
       * @summary Renews an instance and changes its configuration. The configuration change is applied after the renewal order takes effect. Payment is processed automatically. This operation cannot be used to create ECS or RDS instances.
       *
       * @param request RenewChangeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewChangeInstanceResponse
       */
      Models::RenewChangeInstanceResponse renewChangeInstanceWithOptions(const Models::RenewChangeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews an instance and changes its configuration. The configuration change is applied after the renewal order takes effect. Payment is processed automatically. This operation cannot be used to create ECS or RDS instances.
       *
       * @param request RenewChangeInstanceRequest
       * @return RenewChangeInstanceResponse
       */
      Models::RenewChangeInstanceResponse renewChangeInstance(const Models::RenewChangeInstanceRequest &request);

      /**
       * @summary Renews a specified instance. This operation does not support renewing ECS, RDS, or Redis instances. To renew these instances, call the dedicated renewal API of the corresponding service.
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a specified instance. This operation does not support renewing ECS, RDS, or Redis instances. To renew these instances, call the dedicated renewal API of the corresponding service.
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary Renews a resource package instance.
       *
       * @param request RenewResourcePackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewResourcePackageResponse
       */
      Models::RenewResourcePackageResponse renewResourcePackageWithOptions(const Models::RenewResourcePackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a resource package instance.
       *
       * @param request RenewResourcePackageRequest
       * @return RenewResourcePackageResponse
       */
      Models::RenewResourcePackageResponse renewResourcePackage(const Models::RenewResourcePackageRequest &request);

      /**
       * @summary Sets an expiration date for all Elastic Compute Service (ECS) instances.
       *
       * @param request SetAllExpirationDayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAllExpirationDayResponse
       */
      Models::SetAllExpirationDayResponse setAllExpirationDayWithOptions(const Models::SetAllExpirationDayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets an expiration date for all Elastic Compute Service (ECS) instances.
       *
       * @param request SetAllExpirationDayRequest
       * @return SetAllExpirationDayResponse
       */
      Models::SetAllExpirationDayResponse setAllExpirationDay(const Models::SetAllExpirationDayRequest &request);

      /**
       * @summary Enables auto-renewal for an instance.
       *
       * @param request SetRenewalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetRenewalResponse
       */
      Models::SetRenewalResponse setRenewalWithOptions(const Models::SetRenewalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables auto-renewal for an instance.
       *
       * @param request SetRenewalRequest
       * @return SetRenewalResponse
       */
      Models::SetRenewalResponse setRenewal(const Models::SetRenewalRequest &request);

      /**
       * @summary Configures low-balance alert rules for quotas.
       *
       * @description Configures low-balance alert rules for quotas.
       *
       * @param request SetResellerUserAlarmThresholdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetResellerUserAlarmThresholdResponse
       */
      Models::SetResellerUserAlarmThresholdResponse setResellerUserAlarmThresholdWithOptions(const Models::SetResellerUserAlarmThresholdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures low-balance alert rules for quotas.
       *
       * @description Configures low-balance alert rules for quotas.
       *
       * @param request SetResellerUserAlarmThresholdRequest
       * @return SetResellerUserAlarmThresholdResponse
       */
      Models::SetResellerUserAlarmThresholdResponse setResellerUserAlarmThreshold(const Models::SetResellerUserAlarmThresholdRequest &request);

      /**
       * @summary Modify the quota ledger and consumption ledger.
       *
       * @description 设置用户配额账本的Quota额度
       *
       * @param request SetResellerUserQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetResellerUserQuotaResponse
       */
      Models::SetResellerUserQuotaResponse setResellerUserQuotaWithOptions(const Models::SetResellerUserQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the quota ledger and consumption ledger.
       *
       * @description 设置用户配额账本的Quota额度
       *
       * @param request SetResellerUserQuotaRequest
       * @return SetResellerUserQuotaResponse
       */
      Models::SetResellerUserQuotaResponse setResellerUserQuota(const Models::SetResellerUserQuotaRequest &request);

      /**
       * @summary Enables or disables the SQL audit feature for users.
       *
       * @description Sets the status of a reseller\\"s user account, such as frozen or hosted.
       *
       * @param request SetResellerUserStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetResellerUserStatusResponse
       */
      Models::SetResellerUserStatusResponse setResellerUserStatusWithOptions(const Models::SetResellerUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the SQL audit feature for users.
       *
       * @description Sets the status of a reseller\\"s user account, such as frozen or hosted.
       *
       * @param request SetResellerUserStatusRequest
       * @return SetResellerUserStatusResponse
       */
      Models::SetResellerUserStatusResponse setResellerUserStatus(const Models::SetResellerUserStatusRequest &request);

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
       * @summary Subscribes to bill files by using Object Storage Service (OSS), which stores billing data in a specified OSS bucket.
       *
       * @description Before calling this operation, note the following information:
       * - You can subscribe to one type of bill file at a time.
       * - After subscription, the bill file generated on the previous day is pushed daily starting from the next day. On the 4th of each month, the full bill files for the entire billing cycle of the previous month are pushed. The monthly bill PDF is pushed on the 4th of each month for the previous month.
       * - Bill files generated on a daily basis may be delayed. Delayed bills are pushed the day after they are generated and may include bills from earlier days that were delayed until the previous day. Pull the full files for the previous month at the beginning of each month.
       * > To use OSS subscription for the first time, grant the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission to the subscribing user. If the authorization is revoked, the system stops pushing files, and the user must re-authorize.
       * - This subscription is the same feature as "Bill Data Storage" in the Expenses and Costs console. Subscriptions are synchronized between the two.
       * - When subscribing to a directory under a bucket, follow the directory naming conventions:
       *     - Emojis are not allowed. Use valid UTF-8 characters.
       *     - Use / to separate paths and quickly create subdirectories. Do not start with / or \\, and do not use consecutive / characters.
       *     - A subdirectory named .. is not allowed.
       *     - The total length must be 1 to 254 characters.
       * - File names:
       *     - **BillingItemDetailForBillingPeriod** (billing item details)
       *     
       *         - Daily push file name format: `UID_BillingItemDetail_YYYYMMDD`, for example, `169**_BillingItemDetail_20190310`.
       *     
       *         - Full file name format at the beginning of the next month: `UID_BillingItemDetail_YYYYMM`, for example, `169**_BillingItemDetail_201903`.
       *     
       *     - **InstanceDetailForBillingPeriod** (instance bill details)
       *     
       *         - Daily push file name format: `UID_InstanceDetail_YYYYMMDD`, for example, `169**_InstanceDetail_20190310`.
       *     
       *         - Full file name format at the beginning of the next month: `UID_InstanceDetail_YYYYMM`, for example, `169**_InstanceDetail_201903`.
       *     - **InstanceDetailMonthly** (instance bill summary by billing cycle)
       *     
       *         - Daily push file name format: `UID_InstanceDetailMonthly_YYYYMM`, for example, `169**_InstanceDetailMonthly_201903`. This file is updated daily with full data from the beginning of the month to the current day, until the 4th of the next month.
       *     - **BillingItemDetailMonthly** (billing item summary by billing cycle)
       *     
       *         - Daily push file name format: `UID_BillingItemDetailMonthly_YYYYMM`, for example, `169**_BillingItemDetailMonthly_201903`. This file is updated daily with full data from the beginning of the month to the current day, until the 4th of the next month.
       *     - **SplitItemDetailDaily** (split bill daily summary)
       *     
       *         - Daily push file name format: `UID_SplitItemDetailDaily_YYYYMM`, for example, `169**_SplitItemDetailDaily_201903`. This file is updated daily with full data from the beginning of the month to the current day, until the 4th of the next month.
       *     - **MonthBill** (monthly bill PDF)
       *     
       *         - Monthly push file name format: `UID_MonthBill_YYYYMM`, for example, `169**_MonthBill_201903`. The file for the previous month is pushed on the 4th of each month.
       * - Except for MonthBill, which is a PDF file, all other file types are CSV files. If the number of rows in a bill file exceeds a certain threshold, the file is automatically split into multiple CSV files, which are then compressed into a single ZIP file. The ZIP file name follows the same format.
       *
       * @param request SubscribeBillToOSSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubscribeBillToOSSResponse
       */
      Models::SubscribeBillToOSSResponse subscribeBillToOSSWithOptions(const Models::SubscribeBillToOSSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Subscribes to bill files by using Object Storage Service (OSS), which stores billing data in a specified OSS bucket.
       *
       * @description Before calling this operation, note the following information:
       * - You can subscribe to one type of bill file at a time.
       * - After subscription, the bill file generated on the previous day is pushed daily starting from the next day. On the 4th of each month, the full bill files for the entire billing cycle of the previous month are pushed. The monthly bill PDF is pushed on the 4th of each month for the previous month.
       * - Bill files generated on a daily basis may be delayed. Delayed bills are pushed the day after they are generated and may include bills from earlier days that were delayed until the previous day. Pull the full files for the previous month at the beginning of each month.
       * > To use OSS subscription for the first time, grant the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission to the subscribing user. If the authorization is revoked, the system stops pushing files, and the user must re-authorize.
       * - This subscription is the same feature as "Bill Data Storage" in the Expenses and Costs console. Subscriptions are synchronized between the two.
       * - When subscribing to a directory under a bucket, follow the directory naming conventions:
       *     - Emojis are not allowed. Use valid UTF-8 characters.
       *     - Use / to separate paths and quickly create subdirectories. Do not start with / or \\, and do not use consecutive / characters.
       *     - A subdirectory named .. is not allowed.
       *     - The total length must be 1 to 254 characters.
       * - File names:
       *     - **BillingItemDetailForBillingPeriod** (billing item details)
       *     
       *         - Daily push file name format: `UID_BillingItemDetail_YYYYMMDD`, for example, `169**_BillingItemDetail_20190310`.
       *     
       *         - Full file name format at the beginning of the next month: `UID_BillingItemDetail_YYYYMM`, for example, `169**_BillingItemDetail_201903`.
       *     
       *     - **InstanceDetailForBillingPeriod** (instance bill details)
       *     
       *         - Daily push file name format: `UID_InstanceDetail_YYYYMMDD`, for example, `169**_InstanceDetail_20190310`.
       *     
       *         - Full file name format at the beginning of the next month: `UID_InstanceDetail_YYYYMM`, for example, `169**_InstanceDetail_201903`.
       *     - **InstanceDetailMonthly** (instance bill summary by billing cycle)
       *     
       *         - Daily push file name format: `UID_InstanceDetailMonthly_YYYYMM`, for example, `169**_InstanceDetailMonthly_201903`. This file is updated daily with full data from the beginning of the month to the current day, until the 4th of the next month.
       *     - **BillingItemDetailMonthly** (billing item summary by billing cycle)
       *     
       *         - Daily push file name format: `UID_BillingItemDetailMonthly_YYYYMM`, for example, `169**_BillingItemDetailMonthly_201903`. This file is updated daily with full data from the beginning of the month to the current day, until the 4th of the next month.
       *     - **SplitItemDetailDaily** (split bill daily summary)
       *     
       *         - Daily push file name format: `UID_SplitItemDetailDaily_YYYYMM`, for example, `169**_SplitItemDetailDaily_201903`. This file is updated daily with full data from the beginning of the month to the current day, until the 4th of the next month.
       *     - **MonthBill** (monthly bill PDF)
       *     
       *         - Monthly push file name format: `UID_MonthBill_YYYYMM`, for example, `169**_MonthBill_201903`. The file for the previous month is pushed on the 4th of each month.
       * - Except for MonthBill, which is a PDF file, all other file types are CSV files. If the number of rows in a bill file exceeds a certain threshold, the file is automatically split into multiple CSV files, which are then compressed into a single ZIP file. The ZIP file name follows the same format.
       *
       * @param request SubscribeBillToOSSRequest
       * @return SubscribeBillToOSSResponse
       */
      Models::SubscribeBillToOSSResponse subscribeBillToOSS(const Models::SubscribeBillToOSSRequest &request);

      /**
       * @summary Adds tags to resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Cancels a detailed list export subscription.
       *
       * @param request UnsubscribeBillToOSSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnsubscribeBillToOSSResponse
       */
      Models::UnsubscribeBillToOSSResponse unsubscribeBillToOSSWithOptions(const Models::UnsubscribeBillToOSSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a detailed list export subscription.
       *
       * @param request UnsubscribeBillToOSSRequest
       * @return UnsubscribeBillToOSSResponse
       */
      Models::UnsubscribeBillToOSSResponse unsubscribeBillToOSS(const Models::UnsubscribeBillToOSSRequest &request);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Upgrades a resource plan.
       *
       * @param request UpgradeResourcePackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeResourcePackageResponse
       */
      Models::UpgradeResourcePackageResponse upgradeResourcePackageWithOptions(const Models::UpgradeResourcePackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades a resource plan.
       *
       * @param request UpgradeResourcePackageRequest
       * @return UpgradeResourcePackageResponse
       */
      Models::UpgradeResourcePackageResponse upgradeResourcePackage(const Models::UpgradeResourcePackageRequest &request);
  };
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
