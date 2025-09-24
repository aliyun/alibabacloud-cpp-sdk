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
       * @summary Transfers resource instances from the source cost center to the destination cost center.
       *
       * @param request AllocateCostUnitResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateCostUnitResourceResponse
       */
      Models::AllocateCostUnitResourceResponse allocateCostUnitResourceWithOptions(const Models::AllocateCostUnitResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transfers resource instances from the source cost center to the destination cost center.
       *
       * @param request AllocateCostUnitResourceRequest
       * @return AllocateCostUnitResourceResponse
       */
      Models::AllocateCostUnitResourceResponse allocateCostUnitResource(const Models::AllocateCostUnitResourceRequest &request);

      /**
       * @summary Submits an application for an invoice.
       *
       * @param request ApplyInvoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyInvoiceResponse
       */
      Models::ApplyInvoiceResponse applyInvoiceWithOptions(const Models::ApplyInvoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an application for an invoice.
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
       * @param request ChangeResellerConsumeAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResellerConsumeAmountResponse
       */
      Models::ChangeResellerConsumeAmountResponse changeResellerConsumeAmountWithOptions(const Models::ChangeResellerConsumeAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeResellerConsumeAmountRequest
       * @return ChangeResellerConsumeAmountResponse
       */
      Models::ChangeResellerConsumeAmountResponse changeResellerConsumeAmount(const Models::ChangeResellerConsumeAmountRequest &request);

      /**
       * @summary Confirms the invitation initiated by the master account.
       *
       * @description 1\\. A member needs to confirm an invitation only if a financial management relationship is established between the management account and the member and enterprise names used by the management account and the member for real-name verification are different. 2. The permissions to be confirmed must be the same as those granted to the member when the management account initiates the invitation.
       *
       * @param request ConfirmRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmRelationResponse
       */
      Models::ConfirmRelationResponse confirmRelationWithOptions(const Models::ConfirmRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Confirms the invitation initiated by the master account.
       *
       * @description 1\\. A member needs to confirm an invitation only if a financial management relationship is established between the management account and the member and enterprise names used by the management account and the member for real-name verification are different. 2. The permissions to be confirmed must be the same as those granted to the member when the management account initiates the invitation.
       *
       * @param request ConfirmRelationRequest
       * @return ConfirmRelationResponse
       */
      Models::ConfirmRelationResponse confirmRelation(const Models::ConfirmRelationRequest &request);

      /**
       * @summary Changes the billing method of an instance. You can call this operation to switch the billing method from pay-as-you-go to subscription for Server Load Balancer (SLB) instances, elastic IP addresses (EIPs), and NAT gateways, and switch the billing method from subscription to pay-as-you-go for SLB instances and EIPs.
       *
       * @param request ConvertChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertChargeTypeResponse
       */
      Models::ConvertChargeTypeResponse convertChargeTypeWithOptions(const Models::ConvertChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of an instance. You can call this operation to switch the billing method from pay-as-you-go to subscription for Server Load Balancer (SLB) instances, elastic IP addresses (EIPs), and NAT gateways, and switch the billing method from subscription to pay-as-you-go for SLB instances and EIPs.
       *
       * @param request ConvertChargeTypeRequest
       * @return ConvertChargeTypeResponse
       */
      Models::ConvertChargeTypeResponse convertChargeType(const Models::ConvertChargeTypeRequest &request);

      /**
       * @summary Creates an account to establish a financial relationship.
       *
       * @description You can call this operation to create an account so as to establish a master-member financial relationship.
       *
       * @param request CreateAgAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgAccountResponse
       */
      Models::CreateAgAccountResponse createAgAccountWithOptions(const Models::CreateAgAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an account to establish a financial relationship.
       *
       * @description You can call this operation to create an account so as to establish a master-member financial relationship.
       *
       * @param request CreateAgAccountRequest
       * @return CreateAgAccountResponse
       */
      Models::CreateAgAccountResponse createAgAccount(const Models::CreateAgAccountRequest &request);

      /**
       * @summary Creates a cost center. You can create multiple cost centers at a time.
       *
       * @param request CreateCostUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCostUnitResponse
       */
      Models::CreateCostUnitResponse createCostUnitWithOptions(const Models::CreateCostUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cost center. You can create multiple cost centers at a time.
       *
       * @param request CreateCostUnitRequest
       * @return CreateCostUnitResponse
       */
      Models::CreateCostUnitResponse createCostUnit(const Models::CreateCostUnitRequest &request);

      /**
       * @summary Creates an instance. If you call this operation, an order for a new instance is created and the order is automatically paid for. You cannot create Elastic Compute Service (ECS) instances or ApsaraDB RDS instances by calling the operation.
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an instance. If you call this operation, an order for a new instance is created and the order is automatically paid for. You cannot create Elastic Compute Service (ECS) instances or ApsaraDB RDS instances by calling the operation.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Indicates whether the call is successful. A value of true indicates that the call is successful. A value of false indicates that the call failed.
       *
       * @param request CreateResellerUserQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResellerUserQuotaResponse
       */
      Models::CreateResellerUserQuotaResponse createResellerUserQuotaWithOptions(const Models::CreateResellerUserQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Indicates whether the call is successful. A value of true indicates that the call is successful. A value of false indicates that the call failed.
       *
       * @param request CreateResellerUserQuotaRequest
       * @return CreateResellerUserQuotaResponse
       */
      Models::CreateResellerUserQuotaResponse createResellerUserQuota(const Models::CreateResellerUserQuotaRequest &request);

      /**
       * @summary Creates a resource plan.
       *
       * @param request CreateResourcePackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourcePackageResponse
       */
      Models::CreateResourcePackageResponse createResourcePackageWithOptions(const Models::CreateResourcePackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource plan.
       *
       * @param request CreateResourcePackageRequest
       * @return CreateResourcePackageResponse
       */
      Models::CreateResourcePackageResponse createResourcePackage(const Models::CreateResourcePackageRequest &request);

      /**
       * @summary Creates a savings plan. After you call this operation, a savings plan is purchased and paid for.
       *
       * @param tmpReq CreateSavingsPlansInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSavingsPlansInstanceResponse
       */
      Models::CreateSavingsPlansInstanceResponse createSavingsPlansInstanceWithOptions(const Models::CreateSavingsPlansInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a savings plan. After you call this operation, a savings plan is purchased and paid for.
       *
       * @param request CreateSavingsPlansInstanceRequest
       * @return CreateSavingsPlansInstanceResponse
       */
      Models::CreateSavingsPlansInstanceResponse createSavingsPlansInstance(const Models::CreateSavingsPlansInstanceRequest &request);

      /**
       * @summary Deletes a cost center.
       *
       * @param request DeleteCostUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCostUnitResponse
       */
      Models::DeleteCostUnitResponse deleteCostUnitWithOptions(const Models::DeleteCostUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cost center.
       *
       * @param request DeleteCostUnitRequest
       * @return DeleteCostUnitResponse
       */
      Models::DeleteCostUnitResponse deleteCostUnit(const Models::DeleteCostUnitRequest &request);

      /**
       * @summary Query the summary information of the user "Cost Management-Budget".
       *
       * @description This operation is in beta testing and is only available for specific users in the whitelist. Excessive calls may result in performance issues. For example, the response times out.
       *
       * @param request DescribeCostBudgetsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCostBudgetsSummaryResponse
       */
      Models::DescribeCostBudgetsSummaryResponse describeCostBudgetsSummaryWithOptions(const Models::DescribeCostBudgetsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the summary information of the user "Cost Management-Budget".
       *
       * @description This operation is in beta testing and is only available for specific users in the whitelist. Excessive calls may result in performance issues. For example, the response times out.
       *
       * @param request DescribeCostBudgetsSummaryRequest
       * @return DescribeCostBudgetsSummaryResponse
       */
      Models::DescribeCostBudgetsSummaryResponse describeCostBudgetsSummary(const Models::DescribeCostBudgetsSummaryRequest &request);

      /**
       * @summary Queries the monthly allocated costs of instances by allocation month.
       *
       * @description You can view and export the allocated costs of the current month after 10:00 on the fourth day of the next month. The allocated costs of a single allocation month may involve orders or bills in different billing cycles. If a historical allocated amount is incorrect, the historical allocated costs need to be adjusted. As a result, the allocated costs displayed for a single allocation month may be different at different time points.
       *
       * @param request DescribeInstanceAmortizedCostByAmortizationPeriodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAmortizedCostByAmortizationPeriodResponse
       */
      Models::DescribeInstanceAmortizedCostByAmortizationPeriodResponse describeInstanceAmortizedCostByAmortizationPeriodWithOptions(const Models::DescribeInstanceAmortizedCostByAmortizationPeriodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monthly allocated costs of instances by allocation month.
       *
       * @description You can view and export the allocated costs of the current month after 10:00 on the fourth day of the next month. The allocated costs of a single allocation month may involve orders or bills in different billing cycles. If a historical allocated amount is incorrect, the historical allocated costs need to be adjusted. As a result, the allocated costs displayed for a single allocation month may be different at different time points.
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
       * @summary 实例账期月摊销成本
       *
       * @param request DescribeInstanceAmortizedCostByConsumePeriodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAmortizedCostByConsumePeriodResponse
       */
      Models::DescribeInstanceAmortizedCostByConsumePeriodResponse describeInstanceAmortizedCostByConsumePeriodWithOptions(const Models::DescribeInstanceAmortizedCostByConsumePeriodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实例账期月摊销成本
       *
       * @param request DescribeInstanceAmortizedCostByConsumePeriodRequest
       * @return DescribeInstanceAmortizedCostByConsumePeriodResponse
       */
      Models::DescribeInstanceAmortizedCostByConsumePeriodResponse describeInstanceAmortizedCostByConsumePeriod(const Models::DescribeInstanceAmortizedCostByConsumePeriodRequest &request);

      /**
       * @summary Queries the billing information about instances or billable items in a billing cycle.
       *
       * @description *   Instance bills are generated after the total bill is split. In most cases, the instance bills do not include data generated on the last day of the specified billing cycle.
       * *   The instance information may change during the billing cycle. The instance configurations and types in monthly bills are subject to the point in time when you query bills. For more information, see the corresponding bill details.
       * *   You can query data generated after June 2020 for Cloud Communications services. You can query data generated after November 2020 for Alibaba Cloud Domains.
       *
       * @param request DescribeInstanceBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceBillResponse
       */
      Models::DescribeInstanceBillResponse describeInstanceBillWithOptions(const Models::DescribeInstanceBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the billing information about instances or billable items in a billing cycle.
       *
       * @description *   Instance bills are generated after the total bill is split. In most cases, the instance bills do not include data generated on the last day of the specified billing cycle.
       * *   The instance information may change during the billing cycle. The instance configurations and types in monthly bills are subject to the point in time when you query bills. For more information, see the corresponding bill details.
       * *   You can query data generated after June 2020 for Cloud Communications services. You can query data generated after November 2020 for Alibaba Cloud Domains.
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
       * @summary Queries the pricing information about an Alibaba Cloud service.
       *
       * @param request DescribePricingModuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePricingModuleResponse
       */
      Models::DescribePricingModuleResponse describePricingModuleWithOptions(const Models::DescribePricingModuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the pricing information about an Alibaba Cloud service.
       *
       * @param request DescribePricingModuleRequest
       * @return DescribePricingModuleResponse
       */
      Models::DescribePricingModuleResponse describePricingModule(const Models::DescribePricingModuleRequest &request);

      /**
       * @summary Queries the allocated costs of services by allocation month.
       *
       * @description You can view and export the allocated costs of the current month after 10:00 on the fourth day of the next month. The allocated costs of a single allocation month may involve orders or bills in different billing cycles. If a historical allocated amount is incorrect, the historical allocated costs need to be adjusted. As a result, the allocated costs displayed for a single allocation month may be different at different time points.
       *
       * @param request DescribeProductAmortizedCostByAmortizationPeriodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProductAmortizedCostByAmortizationPeriodResponse
       */
      Models::DescribeProductAmortizedCostByAmortizationPeriodResponse describeProductAmortizedCostByAmortizationPeriodWithOptions(const Models::DescribeProductAmortizedCostByAmortizationPeriodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the allocated costs of services by allocation month.
       *
       * @description You can view and export the allocated costs of the current month after 10:00 on the fourth day of the next month. The allocated costs of a single allocation month may involve orders or bills in different billing cycles. If a historical allocated amount is incorrect, the historical allocated costs need to be adjusted. As a result, the allocated costs displayed for a single allocation month may be different at different time points.
       *
       * @param request DescribeProductAmortizedCostByAmortizationPeriodRequest
       * @return DescribeProductAmortizedCostByAmortizationPeriodResponse
       */
      Models::DescribeProductAmortizedCostByAmortizationPeriodResponse describeProductAmortizedCostByAmortizationPeriod(const Models::DescribeProductAmortizedCostByAmortizationPeriodRequest &request);

      /**
       * @summary 产品账期月摊销成本
       *
       * @param request DescribeProductAmortizedCostByConsumePeriodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProductAmortizedCostByConsumePeriodResponse
       */
      Models::DescribeProductAmortizedCostByConsumePeriodResponse describeProductAmortizedCostByConsumePeriodWithOptions(const Models::DescribeProductAmortizedCostByConsumePeriodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 产品账期月摊销成本
       *
       * @param request DescribeProductAmortizedCostByConsumePeriodRequest
       * @return DescribeProductAmortizedCostByConsumePeriodResponse
       */
      Models::DescribeProductAmortizedCostByConsumePeriodResponse describeProductAmortizedCostByConsumePeriod(const Models::DescribeProductAmortizedCostByConsumePeriodRequest &request);

      /**
       * @summary Queries the coverage details of reserved instances (RIs) or storage capacity units (SCUs).
       *
       * @description 1\\. The queried coverage details are the same as those displayed in the table on the Coverage tab of the Manage Reserved Instances page in the Billing Management console.
       * 2\\. You can call this operation to query the coverage details of RIs or SCUs.
       * 3\\. You can call this operation to query coverage details at an hourly, daily, or monthly granularity.
       *
       * @param request DescribeResourceCoverageDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceCoverageDetailResponse
       */
      Models::DescribeResourceCoverageDetailResponse describeResourceCoverageDetailWithOptions(const Models::DescribeResourceCoverageDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the coverage details of reserved instances (RIs) or storage capacity units (SCUs).
       *
       * @description 1\\. The queried coverage details are the same as those displayed in the table on the Coverage tab of the Manage Reserved Instances page in the Billing Management console.
       * 2\\. You can call this operation to query the coverage details of RIs or SCUs.
       * 3\\. You can call this operation to query coverage details at an hourly, daily, or monthly granularity.
       *
       * @param request DescribeResourceCoverageDetailRequest
       * @return DescribeResourceCoverageDetailResponse
       */
      Models::DescribeResourceCoverageDetailResponse describeResourceCoverageDetail(const Models::DescribeResourceCoverageDetailRequest &request);

      /**
       * @summary Queries the total coverage data of reserved instances (RIs) or storage capacity units (SCUs).
       *
       * @description The queried total coverage data is the same as the aggregated data displayed on the Coverage tab of the Manage Reserved Instances page in the Billing Management console.
       * You can call this operation to query the total coverage data of RIs or SCUs.
       *
       * @param request DescribeResourceCoverageTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceCoverageTotalResponse
       */
      Models::DescribeResourceCoverageTotalResponse describeResourceCoverageTotalWithOptions(const Models::DescribeResourceCoverageTotalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total coverage data of reserved instances (RIs) or storage capacity units (SCUs).
       *
       * @description The queried total coverage data is the same as the aggregated data displayed on the Coverage tab of the Manage Reserved Instances page in the Billing Management console.
       * You can call this operation to query the total coverage data of RIs or SCUs.
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
       * @summary Queries the usage details of reserved instances (RIs) or storage capacity units (SCUs).
       *
       * @param request DescribeResourceUsageDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceUsageDetailResponse
       */
      Models::DescribeResourceUsageDetailResponse describeResourceUsageDetailWithOptions(const Models::DescribeResourceUsageDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage details of reserved instances (RIs) or storage capacity units (SCUs).
       *
       * @param request DescribeResourceUsageDetailRequest
       * @return DescribeResourceUsageDetailResponse
       */
      Models::DescribeResourceUsageDetailResponse describeResourceUsageDetail(const Models::DescribeResourceUsageDetailRequest &request);

      /**
       * @summary Queries the total usage data of reserved instances or storage capacity units (SCUs).
       *
       * @param request DescribeResourceUsageTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceUsageTotalResponse
       */
      Models::DescribeResourceUsageTotalResponse describeResourceUsageTotalWithOptions(const Models::DescribeResourceUsageTotalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total usage data of reserved instances or storage capacity units (SCUs).
       *
       * @param request DescribeResourceUsageTotalRequest
       * @return DescribeResourceUsageTotalResponse
       */
      Models::DescribeResourceUsageTotalResponse describeResourceUsageTotal(const Models::DescribeResourceUsageTotalRequest &request);

      /**
       * @summary Queries the coverage details of savings plans.
       *
       * @param request DescribeSavingsPlansCoverageDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSavingsPlansCoverageDetailResponse
       */
      Models::DescribeSavingsPlansCoverageDetailResponse describeSavingsPlansCoverageDetailWithOptions(const Models::DescribeSavingsPlansCoverageDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the coverage details of savings plans.
       *
       * @param request DescribeSavingsPlansCoverageDetailRequest
       * @return DescribeSavingsPlansCoverageDetailResponse
       */
      Models::DescribeSavingsPlansCoverageDetailResponse describeSavingsPlansCoverageDetail(const Models::DescribeSavingsPlansCoverageDetailRequest &request);

      /**
       * @summary Queries the coverage summary of savings plans.
       *
       * @param request DescribeSavingsPlansCoverageTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSavingsPlansCoverageTotalResponse
       */
      Models::DescribeSavingsPlansCoverageTotalResponse describeSavingsPlansCoverageTotalWithOptions(const Models::DescribeSavingsPlansCoverageTotalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the coverage summary of savings plans.
       *
       * @param request DescribeSavingsPlansCoverageTotalRequest
       * @return DescribeSavingsPlansCoverageTotalResponse
       */
      Models::DescribeSavingsPlansCoverageTotalResponse describeSavingsPlansCoverageTotal(const Models::DescribeSavingsPlansCoverageTotalRequest &request);

      /**
       * @summary Queries the usage details of savings plans.
       *
       * @param request DescribeSavingsPlansUsageDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSavingsPlansUsageDetailResponse
       */
      Models::DescribeSavingsPlansUsageDetailResponse describeSavingsPlansUsageDetailWithOptions(const Models::DescribeSavingsPlansUsageDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

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
       * @param request DescribeSavingsPlansUsageTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSavingsPlansUsageTotalResponse
       */
      Models::DescribeSavingsPlansUsageTotalResponse describeSavingsPlansUsageTotalWithOptions(const Models::DescribeSavingsPlansUsageTotalRequest &request, const Darabonba::RuntimeOptions &runtime);

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
       * @description *   The data that you query by calling this operation is the same as the data that is queried by billing cycles in the Split Bill module of Cost Allocation.
       * *   You can query split bills that were generated within the last 12 months by calling this operation.
       * *   You can query split bills only after you enable the [Split Bill](https://usercenter2-intl.aliyun.com/finance/split-bill) service in the User Center console.
       *
       * @param request DescribeSplitItemBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSplitItemBillResponse
       */
      Models::DescribeSplitItemBillResponse describeSplitItemBillWithOptions(const Models::DescribeSplitItemBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries split bills.
       *
       * @description *   The data that you query by calling this operation is the same as the data that is queried by billing cycles in the Split Bill module of Cost Allocation.
       * *   You can query split bills that were generated within the last 12 months by calling this operation.
       * *   You can query split bills only after you enable the [Split Bill](https://usercenter2-intl.aliyun.com/finance/split-bill) service in the User Center console.
       *
       * @param request DescribeSplitItemBillRequest
       * @return DescribeSplitItemBillResponse
       */
      Models::DescribeSplitItemBillResponse describeSplitItemBill(const Models::DescribeSplitItemBillRequest &request);

      /**
       * @summary Queries the details of a financial relationship.
       *
       * @param request GetAccountRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountRelationResponse
       */
      Models::GetAccountRelationResponse getAccountRelationWithOptions(const Models::GetAccountRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a financial relationship.
       *
       * @param request GetAccountRelationRequest
       * @return GetAccountRelationResponse
       */
      Models::GetAccountRelationResponse getAccountRelation(const Models::GetAccountRelationRequest &request);

      /**
       * @summary Queries the account information about a customer of a virtual network operator (VNO).
       *
       * @param request GetCustomerAccountInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomerAccountInfoResponse
       */
      Models::GetCustomerAccountInfoResponse getCustomerAccountInfoWithOptions(const Models::GetCustomerAccountInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the account information about a customer of a virtual network operator (VNO).
       *
       * @param request GetCustomerAccountInfoRequest
       * @return GetCustomerAccountInfoResponse
       */
      Models::GetCustomerAccountInfoResponse getCustomerAccountInfo(const Models::GetCustomerAccountInfoRequest &request);

      /**
       * @summary Queries the IDs of customers of a virtual network operator (VNO).
       *
       * @description The system queries the IDs of customers of a VNO based on the AccessKey pair used in the request.
       *
       * @param request GetCustomerListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomerListResponse
       */
      Models::GetCustomerListResponse getCustomerListWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IDs of customers of a virtual network operator (VNO).
       *
       * @description The system queries the IDs of customers of a VNO based on the AccessKey pair used in the request.
       *
       * @return GetCustomerListResponse
       */
      Models::GetCustomerListResponse getCustomerList();

      /**
       * @summary Queries the details of an order that belongs to your Alibaba Cloud account or distributors.
       *
       * @param request GetOrderDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrderDetailResponse
       */
      Models::GetOrderDetailResponse getOrderDetailWithOptions(const Models::GetOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an order that belongs to your Alibaba Cloud account or distributors.
       *
       * @param request GetOrderDetailRequest
       * @return GetOrderDetailResponse
       */
      Models::GetOrderDetailResponse getOrderDetail(const Models::GetOrderDetailRequest &request);

      /**
       * @summary Queries the pay-as-you-go price of an Alibaba Cloud service.
       *
       * @description ### Usage notes
       * 1.  Call the QueryProductList operation to obtain the code of the service. For more information, see [QueryProductList](https://help.aliyun.com/document_detail/95984.html).
       * 2.  Call the DescribePricingModule operation to obtain the configuration parameters of the service. For more information, see [DescribePricingModule](https://help.aliyun.com/document_detail/96469.html).
       * 3.  Call the GetPayAsYouGoPrice operation to obtain the pay-as-you-go price of the service based on the returned configuration parameters.
       *
       * @param request GetPayAsYouGoPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPayAsYouGoPriceResponse
       */
      Models::GetPayAsYouGoPriceResponse getPayAsYouGoPriceWithOptions(const Models::GetPayAsYouGoPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the pay-as-you-go price of an Alibaba Cloud service.
       *
       * @description ### Usage notes
       * 1.  Call the QueryProductList operation to obtain the code of the service. For more information, see [QueryProductList](https://help.aliyun.com/document_detail/95984.html).
       * 2.  Call the DescribePricingModule operation to obtain the configuration parameters of the service. For more information, see [DescribePricingModule](https://help.aliyun.com/document_detail/96469.html).
       * 3.  Call the GetPayAsYouGoPrice operation to obtain the pay-as-you-go price of the service based on the returned configuration parameters.
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
       * @summary Queries the subscription price of an Alibaba Cloud service.
       *
       * @description 1.  Call the QueryProductList operation to obtain the code of the service. For more information, see [QueryProductList](https://help.aliyun.com/document_detail/95984.html).
       * 2.  Call the DescribePricingModule operation to obtain the configuration parameters of the service. For more information, see [DescribePricingModule](https://help.aliyun.com/document_detail/96469.html).
       * 3.  Call the GetSubscriptionPrice operation to obtain the pricing of the service based on the returned configuration parameters.
       *
       * @param request GetSubscriptionPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubscriptionPriceResponse
       */
      Models::GetSubscriptionPriceResponse getSubscriptionPriceWithOptions(const Models::GetSubscriptionPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the subscription price of an Alibaba Cloud service.
       *
       * @description 1.  Call the QueryProductList operation to obtain the code of the service. For more information, see [QueryProductList](https://help.aliyun.com/document_detail/95984.html).
       * 2.  Call the DescribePricingModule operation to obtain the configuration parameters of the service. For more information, see [DescribePricingModule](https://help.aliyun.com/document_detail/96469.html).
       * 3.  Call the GetSubscriptionPrice operation to obtain the pricing of the service based on the returned configuration parameters.
       *
       * @param request GetSubscriptionPriceRequest
       * @return GetSubscriptionPriceResponse
       */
      Models::GetSubscriptionPriceResponse getSubscriptionPrice(const Models::GetSubscriptionPriceRequest &request);

      /**
       * @summary Queries the refundable amount for an instance from which you want to unsubscribe.
       *
       * @description 1.  **Check the information about unsubscription and confirm the unsubscription terms and refundable amount. The resource that is unsubscribed cannot be restored.**
       * 2.  Refunds are applicable only for the actual paid amount. Vouchers used for the purchase are non-refundable.
       * 3.  For more information, see [Rules for unsubscribing from resources](https://www.alibabacloud.com/help/en/user-center/user-guide/refund-rules).
       *
       * @param request InquiryPriceRefundInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InquiryPriceRefundInstanceResponse
       */
      Models::InquiryPriceRefundInstanceResponse inquiryPriceRefundInstanceWithOptions(const Models::InquiryPriceRefundInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the refundable amount for an instance from which you want to unsubscribe.
       *
       * @description 1.  **Check the information about unsubscription and confirm the unsubscription terms and refundable amount. The resource that is unsubscribed cannot be restored.**
       * 2.  Refunds are applicable only for the actual paid amount. Vouchers used for the purchase are non-refundable.
       * 3.  For more information, see [Rules for unsubscribing from resources](https://www.alibabacloud.com/help/en/user-center/user-guide/refund-rules).
       *
       * @param request InquiryPriceRefundInstanceRequest
       * @return InquiryPriceRefundInstanceResponse
       */
      Models::InquiryPriceRefundInstanceResponse inquiryPriceRefundInstance(const Models::InquiryPriceRefundInstanceRequest &request);

      /**
       * @summary Adds or removes permissions granted to a member in a financial relationship.
       *
       * @param request ModifyAccountRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountRelationResponse
       */
      Models::ModifyAccountRelationResponse modifyAccountRelationWithOptions(const Models::ModifyAccountRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or removes permissions granted to a member in a financial relationship.
       *
       * @param request ModifyAccountRelationRequest
       * @return ModifyAccountRelationResponse
       */
      Models::ModifyAccountRelationResponse modifyAccountRelation(const Models::ModifyAccountRelationRequest &request);

      /**
       * @summary Modifies one or more cost centers.
       *
       * @param request ModifyCostUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCostUnitResponse
       */
      Models::ModifyCostUnitResponse modifyCostUnitWithOptions(const Models::ModifyCostUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies one or more cost centers.
       *
       * @param request ModifyCostUnitRequest
       * @return ModifyCostUnitResponse
       */
      Models::ModifyCostUnitResponse modifyCostUnit(const Models::ModifyCostUnitRequest &request);

      /**
       * @summary Modifies the configurations of an instance. When you call this operation, the system generates a modification order and automatically completes the payment. You cannot call this operation to modify the configurations of an Elastic Compute Service (ECS) instance or ApsaraDB RDS instance. To modify the configurations of an ECS or ApsaraDB RDS instance, call the dedicated operation of the corresponding service.
       *
       * @param request ModifyInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceResponse
       */
      Models::ModifyInstanceResponse modifyInstanceWithOptions(const Models::ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of an instance. When you call this operation, the system generates a modification order and automatically completes the payment. You cannot call this operation to modify the configurations of an Elastic Compute Service (ECS) instance or ApsaraDB RDS instance. To modify the configurations of an ECS or ApsaraDB RDS instance, call the dedicated operation of the corresponding service.
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
       * @summary Queries the balance of your account.
       *
       * @param request QueryAccountBalanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAccountBalanceResponse
       */
      Models::QueryAccountBalanceResponse queryAccountBalanceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the balance of your account.
       *
       * @return QueryAccountBalanceResponse
       */
      Models::QueryAccountBalanceResponse queryAccountBalance();

      /**
       * @summary Queries the bills of your Alibaba Cloud account within a billing cycle. You can summarize the bills by resource owner.
       *
       * @description Before you call this operation, take note of the following items:
       * *   Account bills are summarized based on instance bills. In most cases, the account bills do not include the data generated on the last day of the specified period.
       * *   You can query the data generated in June 2020 or later for Cloud Communications services. However, the query results do not include the data of Alibaba Cloud Domains.
       *
       * @param request QueryAccountBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAccountBillResponse
       */
      Models::QueryAccountBillResponse queryAccountBillWithOptions(const Models::QueryAccountBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bills of your Alibaba Cloud account within a billing cycle. You can summarize the bills by resource owner.
       *
       * @description Before you call this operation, take note of the following items:
       * *   Account bills are summarized based on instance bills. In most cases, the account bills do not include the data generated on the last day of the specified period.
       * *   You can query the data generated in June 2020 or later for Cloud Communications services. However, the query results do not include the data of Alibaba Cloud Domains.
       *
       * @param request QueryAccountBillRequest
       * @return QueryAccountBillResponse
       */
      Models::QueryAccountBillResponse queryAccountBill(const Models::QueryAccountBillRequest &request);

      /**
       * @summary Queries the details of transactions within your account.
       *
       * @param request QueryAccountTransactionDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAccountTransactionDetailsResponse
       */
      Models::QueryAccountTransactionDetailsResponse queryAccountTransactionDetailsWithOptions(const Models::QueryAccountTransactionDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of transactions within your account.
       *
       * @param request QueryAccountTransactionDetailsRequest
       * @return QueryAccountTransactionDetailsResponse
       */
      Models::QueryAccountTransactionDetailsResponse queryAccountTransactionDetails(const Models::QueryAccountTransactionDetailsRequest &request);

      /**
       * @summary Queries transactions within your Alibaba Cloud account.
       *
       * @param request QueryAccountTransactionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAccountTransactionsResponse
       */
      Models::QueryAccountTransactionsResponse queryAccountTransactionsWithOptions(const Models::QueryAccountTransactionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries transactions within your Alibaba Cloud account.
       *
       * @param request QueryAccountTransactionsRequest
       * @return QueryAccountTransactionsResponse
       */
      Models::QueryAccountTransactionsResponse queryAccountTransactions(const Models::QueryAccountTransactionsRequest &request);

      /**
       * @summary Queries available instances.
       *
       * @param request QueryAvailableInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAvailableInstancesResponse
       */
      Models::QueryAvailableInstancesResponse queryAvailableInstancesWithOptions(const Models::QueryAvailableInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available instances.
       *
       * @param request QueryAvailableInstancesRequest
       * @return QueryAvailableInstancesResponse
       */
      Models::QueryAvailableInstancesResponse queryAvailableInstances(const Models::QueryAvailableInstancesRequest &request);

      /**
       * @summary Queries the bills in a billing cycle.
       *
       * @param request QueryBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBillResponse
       */
      Models::QueryBillResponse queryBillWithOptions(const Models::QueryBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bills in a billing cycle.
       *
       * @param request QueryBillRequest
       * @return QueryBillResponse
       */
      Models::QueryBillResponse queryBill(const Models::QueryBillRequest &request);

      /**
       * @summary Queries the bill overview information in a billing cycle.
       *
       * @param request QueryBillOverviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBillOverviewResponse
       */
      Models::QueryBillOverviewResponse queryBillOverviewWithOptions(const Models::QueryBillOverviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bill overview information in a billing cycle.
       *
       * @param request QueryBillOverviewRequest
       * @return QueryBillOverviewResponse
       */
      Models::QueryBillOverviewResponse queryBillOverview(const Models::QueryBillOverviewRequest &request);

      /**
       * @summary Queries the subscribed bills that are stored in Object Storage Service (OSS) bucket.
       *
       * @param request QueryBillToOSSSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBillToOSSSubscriptionResponse
       */
      Models::QueryBillToOSSSubscriptionResponse queryBillToOSSSubscriptionWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the subscribed bills that are stored in Object Storage Service (OSS) bucket.
       *
       * @return QueryBillToOSSSubscriptionResponse
       */
      Models::QueryBillToOSSSubscriptionResponse queryBillToOSSSubscription();

      /**
       * @summary Queries the information about vouchers.
       *
       * @param request QueryCashCouponsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCashCouponsResponse
       */
      Models::QueryCashCouponsResponse queryCashCouponsWithOptions(const Models::QueryCashCouponsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about vouchers.
       *
       * @param request QueryCashCouponsRequest
       * @return QueryCashCouponsResponse
       */
      Models::QueryCashCouponsResponse queryCashCoupons(const Models::QueryCashCouponsRequest &request);

      /**
       * @summary Queries the information about a service based on the service code.
       *
       * @description You can call this operation to query the information about a service based on the service code.
       *
       * @param request QueryCommodityListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCommodityListResponse
       */
      Models::QueryCommodityListResponse queryCommodityListWithOptions(const Models::QueryCommodityListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a service based on the service code.
       *
       * @description You can call this operation to query the information about a service based on the service code.
       *
       * @param request QueryCommodityListRequest
       * @return QueryCommodityListResponse
       */
      Models::QueryCommodityListResponse queryCommodityList(const Models::QueryCommodityListRequest &request);

      /**
       * @summary Queries all cost centers within the current node of the cost center tree. If the ParentUnitId parameter is set to -1, all cost centers are queried.
       *
       * @param request QueryCostUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCostUnitResponse
       */
      Models::QueryCostUnitResponse queryCostUnitWithOptions(const Models::QueryCostUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all cost centers within the current node of the cost center tree. If the ParentUnitId parameter is set to -1, all cost centers are queried.
       *
       * @param request QueryCostUnitRequest
       * @return QueryCostUnitResponse
       */
      Models::QueryCostUnitResponse queryCostUnit(const Models::QueryCostUnitRequest &request);

      /**
       * @summary Queries the resource instances that are allocated to a cost center. If the unitId parameter is set to 0, the unallocated primary resource instances and sub-resource instances are queried.
       *
       * @param request QueryCostUnitResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCostUnitResourceResponse
       */
      Models::QueryCostUnitResourceResponse queryCostUnitResourceWithOptions(const Models::QueryCostUnitResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource instances that are allocated to a cost center. If the unitId parameter is set to 0, the unallocated primary resource instances and sub-resource instances are queried.
       *
       * @param request QueryCostUnitResourceRequest
       * @return QueryCostUnitResourceResponse
       */
      Models::QueryCostUnitResourceResponse queryCostUnitResource(const Models::QueryCostUnitResourceRequest &request);

      /**
       * @summary Queries the addresses to which invoices are mailed.
       *
       * @param request QueryCustomerAddressListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCustomerAddressListResponse
       */
      Models::QueryCustomerAddressListResponse queryCustomerAddressListWithOptions(const Models::QueryCustomerAddressListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the addresses to which invoices are mailed.
       *
       * @param request QueryCustomerAddressListRequest
       * @return QueryCustomerAddressListResponse
       */
      Models::QueryCustomerAddressListResponse queryCustomerAddressList(const Models::QueryCustomerAddressListRequest &request);

      /**
       * @summary Queries the usage of resource plans, including reserved instances (RIs) and storage capacity units (SCUs).
       *
       * @description Limits:
       * *   Only the usage records within the past year can be queried.
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
       * *   Only the usage records within the past year can be queried.
       *
       * @param request QueryDPUtilizationDetailRequest
       * @return QueryDPUtilizationDetailResponse
       */
      Models::QueryDPUtilizationDetailResponse queryDPUtilizationDetail(const Models::QueryDPUtilizationDetailRequest &request);

      /**
       * @summary Queries the information about the orders for which you want to apply for invoices.
       *
       * @param request QueryEvaluateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEvaluateListResponse
       */
      Models::QueryEvaluateListResponse queryEvaluateListWithOptions(const Models::QueryEvaluateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the orders for which you want to apply for invoices.
       *
       * @param request QueryEvaluateListRequest
       * @return QueryEvaluateListResponse
       */
      Models::QueryEvaluateListResponse queryEvaluateList(const Models::QueryEvaluateListRequest &request);

      /**
       * @summary Queries the information about a financial account.
       *
       * @param request QueryFinancialAccountInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFinancialAccountInfoResponse
       */
      Models::QueryFinancialAccountInfoResponse queryFinancialAccountInfoWithOptions(const Models::QueryFinancialAccountInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a financial account.
       *
       * @param request QueryFinancialAccountInfoRequest
       * @return QueryFinancialAccountInfoResponse
       */
      Models::QueryFinancialAccountInfoResponse queryFinancialAccountInfo(const Models::QueryFinancialAccountInfoRequest &request);

      /**
       * @summary Queries the bills of instances or billable items in a billing cycle.
       *
       * @description ##
       * *   This API operation has been upgraded to DescribeInstanceBill. We recommend that you call the [DescribeInstanceBill](https://help.aliyun.com/document_detail/209402.html) operation to query the bills of instances or billable items in a billing cycle. You can call the QueryInstanceBill operation to query a maximum of 50,000 data rows in a bill.
       * *   Instance bills are generated after bills are split. In most cases, the instance bills do not include data generated on the last day of the specified period.
       * *   The instance information changes within a billing cycle. The instance configurations and specifications and the time when the instance was used in the billing cycle are all recorded. For more information, see the corresponding bill details.
       * *   You can query the data generated in June 2020 or later for Cloud Communications services, and the data generated in November 2020 or later for Alibaba Cloud Domains.
       *
       * @param request QueryInstanceBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInstanceBillResponse
       */
      Models::QueryInstanceBillResponse queryInstanceBillWithOptions(const Models::QueryInstanceBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bills of instances or billable items in a billing cycle.
       *
       * @description ##
       * *   This API operation has been upgraded to DescribeInstanceBill. We recommend that you call the [DescribeInstanceBill](https://help.aliyun.com/document_detail/209402.html) operation to query the bills of instances or billable items in a billing cycle. You can call the QueryInstanceBill operation to query a maximum of 50,000 data rows in a bill.
       * *   Instance bills are generated after bills are split. In most cases, the instance bills do not include data generated on the last day of the specified period.
       * *   The instance information changes within a billing cycle. The instance configurations and specifications and the time when the instance was used in the billing cycle are all recorded. For more information, see the corresponding bill details.
       * *   You can query the data generated in June 2020 or later for Cloud Communications services, and the data generated in November 2020 or later for Alibaba Cloud Domains.
       *
       * @param request QueryInstanceBillRequest
       * @return QueryInstanceBillResponse
       */
      Models::QueryInstanceBillResponse queryInstanceBill(const Models::QueryInstanceBillRequest &request);

      /**
       * @summary Queries instances by tag.
       *
       * @param request QueryInstanceByTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInstanceByTagResponse
       */
      Models::QueryInstanceByTagResponse queryInstanceByTagWithOptions(const Models::QueryInstanceByTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instances by tag.
       *
       * @param request QueryInstanceByTagRequest
       * @return QueryInstanceByTagResponse
       */
      Models::QueryInstanceByTagResponse queryInstanceByTag(const Models::QueryInstanceByTagRequest &request);

      /**
       * @summary The code of the service.
       *
       * @param request QueryInstanceGaapCostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInstanceGaapCostResponse
       */
      Models::QueryInstanceGaapCostResponse queryInstanceGaapCostWithOptions(const Models::QueryInstanceGaapCostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The code of the service.
       *
       * @param request QueryInstanceGaapCostRequest
       * @return QueryInstanceGaapCostResponse
       */
      Models::QueryInstanceGaapCostResponse queryInstanceGaapCost(const Models::QueryInstanceGaapCostRequest &request);

      /**
       * @summary Queries the information about invoice titles.
       *
       * @param request QueryInvoicingCustomerListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInvoicingCustomerListResponse
       */
      Models::QueryInvoicingCustomerListResponse queryInvoicingCustomerListWithOptions(const Models::QueryInvoicingCustomerListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about invoice titles.
       *
       * @param request QueryInvoicingCustomerListRequest
       * @return QueryInvoicingCustomerListResponse
       */
      Models::QueryInvoicingCustomerListResponse queryInvoicingCustomerList(const Models::QueryInvoicingCustomerListRequest &request);

      /**
       * @summary Queries the orders of your Alibaba Cloud account or distributors. By default, orders within the last hour are queried. To query earlier orders, specify the CreateTimeStart and CreateTimeEnd parameters.
       *
       * @param request QueryOrdersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryOrdersResponse
       */
      Models::QueryOrdersResponse queryOrdersWithOptions(const Models::QueryOrdersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the orders of your Alibaba Cloud account or distributors. By default, orders within the last hour are queried. To query earlier orders, specify the CreateTimeStart and CreateTimeEnd parameters.
       *
       * @param request QueryOrdersRequest
       * @return QueryOrdersResponse
       */
      Models::QueryOrdersResponse queryOrders(const Models::QueryOrdersRequest &request);

      /**
       * @summary Queries, by relationship ID, permissions granted to accounts between which a management-member relationship is established.
       *
       * @param request QueryPermissionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPermissionListResponse
       */
      Models::QueryPermissionListResponse queryPermissionListWithOptions(const Models::QueryPermissionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries, by relationship ID, permissions granted to accounts between which a management-member relationship is established.
       *
       * @param request QueryPermissionListRequest
       * @return QueryPermissionListResponse
       */
      Models::QueryPermissionListResponse queryPermissionList(const Models::QueryPermissionListRequest &request);

      /**
       * @summary Queries prepaid cards.
       *
       * @param request QueryPrepaidCardsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPrepaidCardsResponse
       */
      Models::QueryPrepaidCardsResponse queryPrepaidCardsWithOptions(const Models::QueryPrepaidCardsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries prepaid cards.
       *
       * @param request QueryPrepaidCardsRequest
       * @return QueryPrepaidCardsResponse
       */
      Models::QueryPrepaidCardsResponse queryPrepaidCards(const Models::QueryPrepaidCardsRequest &request);

      /**
       * @summary Queries the billable items of a service.
       *
       * @description You can call this operation to query the billable items of a service. A billable item is the minimum unit used to calculate costs.
       *
       * @param request QueryPriceEntityListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPriceEntityListResponse
       */
      Models::QueryPriceEntityListResponse queryPriceEntityListWithOptions(const Models::QueryPriceEntityListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the billable items of a service.
       *
       * @description You can call this operation to query the billable items of a service. A billable item is the minimum unit used to calculate costs.
       *
       * @param request QueryPriceEntityListRequest
       * @return QueryPriceEntityListResponse
       */
      Models::QueryPriceEntityListResponse queryPriceEntityList(const Models::QueryPriceEntityListRequest &request);

      /**
       * @summary Queries the information about all Alibaba Cloud services.
       *
       * @param request QueryProductListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryProductListResponse
       */
      Models::QueryProductListResponse queryProductListWithOptions(const Models::QueryProductListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all Alibaba Cloud services.
       *
       * @param request QueryProductListRequest
       * @return QueryProductListResponse
       */
      Models::QueryProductListResponse queryProductList(const Models::QueryProductListRequest &request);

      /**
       * @summary Queries the usage details of a reserved instance (RI).
       *
       * @param request QueryRIUtilizationDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRIUtilizationDetailResponse
       */
      Models::QueryRIUtilizationDetailResponse queryRIUtilizationDetailWithOptions(const Models::QueryRIUtilizationDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage details of a reserved instance (RI).
       *
       * @param request QueryRIUtilizationDetailRequest
       * @return QueryRIUtilizationDetailResponse
       */
      Models::QueryRIUtilizationDetailResponse queryRIUtilizationDetail(const Models::QueryRIUtilizationDetailRequest &request);

      /**
       * @summary Queries the information about a redemption coupon.
       *
       * @param request QueryRedeemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRedeemResponse
       */
      Models::QueryRedeemResponse queryRedeemWithOptions(const Models::QueryRedeemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a redemption coupon.
       *
       * @param request QueryRedeemRequest
       * @return QueryRedeemResponse
       */
      Models::QueryRedeemResponse queryRedeem(const Models::QueryRedeemRequest &request);

      /**
       * @summary Queries the members of a management account.
       *
       * @param request QueryRelationListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRelationListResponse
       */
      Models::QueryRelationListResponse queryRelationListWithOptions(const Models::QueryRelationListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the members of a management account.
       *
       * @param request QueryRelationListRequest
       * @return QueryRelationListResponse
       */
      Models::QueryRelationListResponse queryRelationList(const Models::QueryRelationListRequest &request);

      /**
       * @summary Indicates whether the call is successful. A value of true indicates that the call is successful. A value of false indicates that the call failed.
       *
       * @param request QueryResellerAvailableQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryResellerAvailableQuotaResponse
       */
      Models::QueryResellerAvailableQuotaResponse queryResellerAvailableQuotaWithOptions(const Models::QueryResellerAvailableQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Indicates whether the call is successful. A value of true indicates that the call is successful. A value of false indicates that the call failed.
       *
       * @param request QueryResellerAvailableQuotaRequest
       * @return QueryResellerAvailableQuotaResponse
       */
      Models::QueryResellerAvailableQuotaResponse queryResellerAvailableQuota(const Models::QueryResellerAvailableQuotaRequest &request);

      /**
       * @summary 查询用户的信控预警阀值,该接口暂未测试启用
       *
       * @param request QueryResellerUserAlarmThresholdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryResellerUserAlarmThresholdResponse
       */
      Models::QueryResellerUserAlarmThresholdResponse queryResellerUserAlarmThresholdWithOptions(const Models::QueryResellerUserAlarmThresholdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户的信控预警阀值,该接口暂未测试启用
       *
       * @param request QueryResellerUserAlarmThresholdRequest
       * @return QueryResellerUserAlarmThresholdResponse
       */
      Models::QueryResellerUserAlarmThresholdResponse queryResellerUserAlarmThreshold(const Models::QueryResellerUserAlarmThresholdRequest &request);

      /**
       * @summary Queries the instances of a resource plan. You can query the resource plans that are expired within one year.
       *
       * @param request QueryResourcePackageInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryResourcePackageInstancesResponse
       */
      Models::QueryResourcePackageInstancesResponse queryResourcePackageInstancesWithOptions(const Models::QueryResourcePackageInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instances of a resource plan. You can query the resource plans that are expired within one year.
       *
       * @param request QueryResourcePackageInstancesRequest
       * @return QueryResourcePackageInstancesResponse
       */
      Models::QueryResourcePackageInstancesResponse queryResourcePackageInstances(const Models::QueryResourcePackageInstancesRequest &request);

      /**
       * @summary Queries the deduction details of savings plans.
       *
       * @param request QuerySavingsPlansDeductLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySavingsPlansDeductLogResponse
       */
      Models::QuerySavingsPlansDeductLogResponse querySavingsPlansDeductLogWithOptions(const Models::QuerySavingsPlansDeductLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the deduction details of savings plans.
       *
       * @param request QuerySavingsPlansDeductLogRequest
       * @return QuerySavingsPlansDeductLogResponse
       */
      Models::QuerySavingsPlansDeductLogResponse querySavingsPlansDeductLog(const Models::QuerySavingsPlansDeductLogRequest &request);

      /**
       * @summary Queries discounts on savings plans.
       *
       * @param request QuerySavingsPlansDiscountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySavingsPlansDiscountResponse
       */
      Models::QuerySavingsPlansDiscountResponse querySavingsPlansDiscountWithOptions(const Models::QuerySavingsPlansDiscountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries discounts on savings plans.
       *
       * @param request QuerySavingsPlansDiscountRequest
       * @return QuerySavingsPlansDiscountResponse
       */
      Models::QuerySavingsPlansDiscountResponse querySavingsPlansDiscount(const Models::QuerySavingsPlansDiscountRequest &request);

      /**
       * @summary Queries the information about savings plan instances of the current user.
       *
       * @param request QuerySavingsPlansInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySavingsPlansInstanceResponse
       */
      Models::QuerySavingsPlansInstanceResponse querySavingsPlansInstanceWithOptions(const Models::QuerySavingsPlansInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about savings plan instances of the current user.
       *
       * @param request QuerySavingsPlansInstanceRequest
       * @return QuerySavingsPlansInstanceResponse
       */
      Models::QuerySavingsPlansInstanceResponse querySavingsPlansInstance(const Models::QuerySavingsPlansInstanceRequest &request);

      /**
       * @summary The code of the service.
       *
       * @param request QuerySettleBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySettleBillResponse
       */
      Models::QuerySettleBillResponse querySettleBillWithOptions(const Models::QuerySettleBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The code of the service.
       *
       * @param request QuerySettleBillRequest
       * @return QuerySettleBillResponse
       */
      Models::QuerySettleBillResponse querySettleBill(const Models::QuerySettleBillRequest &request);

      /**
       * @summary Queries the stock keeping units (SKUs) of a service. In most cases, a service has one or more SKUs. A service may even have tens of thousands of SKUs. You can call this operation to query the SKUs of a specific service and the prices of the SKUs. You can configure request parameters to query the specified SKUs based on the configurations of the SKUs.
       *
       * @param tmpReq QuerySkuPriceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySkuPriceListResponse
       */
      Models::QuerySkuPriceListResponse querySkuPriceListWithOptions(const Models::QuerySkuPriceListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the stock keeping units (SKUs) of a service. In most cases, a service has one or more SKUs. A service may even have tens of thousands of SKUs. You can call this operation to query the SKUs of a specific service and the prices of the SKUs. You can configure request parameters to query the specified SKUs based on the configurations of the SKUs.
       *
       * @param request QuerySkuPriceListRequest
       * @return QuerySkuPriceListResponse
       */
      Models::QuerySkuPriceListResponse querySkuPriceList(const Models::QuerySkuPriceListRequest &request);

      /**
       * @summary Queries split bills.
       *
       * @description *   This API operation has been upgraded to DescribeSplitItemBill. We recommend that you call the [DescribeSplitItemBill](https://help.aliyun.com/document_detail/208169.html) operation to query split bills. You can call the QuerySplitItemBill operation to query a maximum of 50,000 data rows in a bill.
       * *   The data queried by calling the QuerySplitItemBill operation is consistent with the data that is displayed for the specified billing cycle on the Split Bill page in User Center.
       * *   You can call this operation to query split bills generated within the last 12 months.
       * *   This operation returns split bills only after you activate the [Split Bill](https://usercenter2.aliyun.com/finance/split-bill) service in User Center.
       *
       * @param request QuerySplitItemBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySplitItemBillResponse
       */
      Models::QuerySplitItemBillResponse querySplitItemBillWithOptions(const Models::QuerySplitItemBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries split bills.
       *
       * @description *   This API operation has been upgraded to DescribeSplitItemBill. We recommend that you call the [DescribeSplitItemBill](https://help.aliyun.com/document_detail/208169.html) operation to query split bills. You can call the QuerySplitItemBill operation to query a maximum of 50,000 data rows in a bill.
       * *   The data queried by calling the QuerySplitItemBill operation is consistent with the data that is displayed for the specified billing cycle on the Split Bill page in User Center.
       * *   You can call this operation to query split bills generated within the last 12 months.
       * *   This operation returns split bills only after you activate the [Split Bill](https://usercenter2.aliyun.com/finance/split-bill) service in User Center.
       *
       * @param request QuerySplitItemBillRequest
       * @return QuerySplitItemBillResponse
       */
      Models::QuerySplitItemBillResponse querySplitItemBill(const Models::QuerySplitItemBillRequest &request);

      /**
       * @summary Queries the usage data of an Alibaba Cloud service.
       *
       * @description You can call this operation to query the usage data of an Alibaba Cloud service. Take note of the following items:
       * *   The service code that you specify for querying the usage data of a specific Alibaba Cloud service must be valid. You can query the usage data by hour or by day.
       * *   The time that you specify must follow the ISO8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
       *     *   Latency exists in data pushes. Therefore, if you set the DataType parameter to Hour, the integrity of usage data recorded in the last 24 hours can be ensured. If you set the DataType parameter to Day, the integrity of usage data recorded in the last two days can be ensured.
       *     *   You can query the usage data that is recorded in the last quarter.
       *
       * @param request QueryUserOmsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserOmsDataResponse
       */
      Models::QueryUserOmsDataResponse queryUserOmsDataWithOptions(const Models::QueryUserOmsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage data of an Alibaba Cloud service.
       *
       * @description You can call this operation to query the usage data of an Alibaba Cloud service. Take note of the following items:
       * *   The service code that you specify for querying the usage data of a specific Alibaba Cloud service must be valid. You can query the usage data by hour or by day.
       * *   The time that you specify must follow the ISO8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
       *     *   Latency exists in data pushes. Therefore, if you set the DataType parameter to Hour, the integrity of usage data recorded in the last 24 hours can be ensured. If you set the DataType parameter to Day, the integrity of usage data recorded in the last two days can be ensured.
       *     *   You can query the usage data that is recorded in the last quarter.
       *
       * @param request QueryUserOmsDataRequest
       * @return QueryUserOmsDataResponse
       */
      Models::QueryUserOmsDataResponse queryUserOmsData(const Models::QueryUserOmsDataRequest &request);

      /**
       * @summary Unsubscribes from an instance that is no longer needed.
       *
       * @description 1.  Refunds are applicable only for the actual paid amount. Vouchers used for the purchase are non-refundable.
       * 2.  Check the information about unsubscription and confirm the unsubscription terms and refundable amount. The resource that is unsubscribed cannot be restored.
       * 3.  For more information, see [Rules for unsubscribing from resources](https://www.alibabacloud.com/help/en/user-center/refund-rules).
       *
       * @param request RefundInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefundInstanceResponse
       */
      Models::RefundInstanceResponse refundInstanceWithOptions(const Models::RefundInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unsubscribes from an instance that is no longer needed.
       *
       * @description 1.  Refunds are applicable only for the actual paid amount. Vouchers used for the purchase are non-refundable.
       * 2.  Check the information about unsubscription and confirm the unsubscription terms and refundable amount. The resource that is unsubscribed cannot be restored.
       * 3.  For more information, see [Rules for unsubscribing from resources](https://www.alibabacloud.com/help/en/user-center/refund-rules).
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
       * @summary Terminates a financial relationship between the management account and a member.
       *
       * @param request RelieveAccountRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RelieveAccountRelationResponse
       */
      Models::RelieveAccountRelationResponse relieveAccountRelationWithOptions(const Models::RelieveAccountRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates a financial relationship between the management account and a member.
       *
       * @param request RelieveAccountRelationRequest
       * @return RelieveAccountRelationResponse
       */
      Models::RelieveAccountRelationResponse relieveAccountRelation(const Models::RelieveAccountRelationRequest &request);

      /**
       * @summary 续费变配接口
       *
       * @param request RenewChangeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewChangeInstanceResponse
       */
      Models::RenewChangeInstanceResponse renewChangeInstanceWithOptions(const Models::RenewChangeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 续费变配接口
       *
       * @param request RenewChangeInstanceRequest
       * @return RenewChangeInstanceResponse
       */
      Models::RenewChangeInstanceResponse renewChangeInstance(const Models::RenewChangeInstanceRequest &request);

      /**
       * @summary Renews a specified instance. You cannot call this operation to renew Elastic Compute Service (ECS) instances, ApsaraDB RDS instances, or ApsaraDB for Redis instances. To renew these types of instances, call the dedicated operation of the corresponding service.
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a specified instance. You cannot call this operation to renew Elastic Compute Service (ECS) instances, ApsaraDB RDS instances, or ApsaraDB for Redis instances. To renew these types of instances, call the dedicated operation of the corresponding service.
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary Renews a resource plan.
       *
       * @param request RenewResourcePackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewResourcePackageResponse
       */
      Models::RenewResourcePackageResponse renewResourcePackageWithOptions(const Models::RenewResourcePackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a resource plan.
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
       * @param request SetResellerUserAlarmThresholdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetResellerUserAlarmThresholdResponse
       */
      Models::SetResellerUserAlarmThresholdResponse setResellerUserAlarmThresholdWithOptions(const Models::SetResellerUserAlarmThresholdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SetResellerUserAlarmThresholdRequest
       * @return SetResellerUserAlarmThresholdResponse
       */
      Models::SetResellerUserAlarmThresholdResponse setResellerUserAlarmThreshold(const Models::SetResellerUserAlarmThresholdRequest &request);

      /**
       * @summary Modify the quota ledger and consumption ledger.
       *
       * @param request SetResellerUserQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetResellerUserQuotaResponse
       */
      Models::SetResellerUserQuotaResponse setResellerUserQuotaWithOptions(const Models::SetResellerUserQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the quota ledger and consumption ledger.
       *
       * @param request SetResellerUserQuotaRequest
       * @return SetResellerUserQuotaResponse
       */
      Models::SetResellerUserQuotaResponse setResellerUserQuota(const Models::SetResellerUserQuotaRequest &request);

      /**
       * @param request SetResellerUserStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetResellerUserStatusResponse
       */
      Models::SetResellerUserStatusResponse setResellerUserStatusWithOptions(const Models::SetResellerUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @summary Subscribes to the bills that are stored in Object Storage Service (OSS) buckets.
       *
       * @description Before you call this operation, take note of the following items:
       * *   You can subscribe to only one type of bill at a time.
       * *   The bills generated on the previous day are pushed on a daily basis the next day after you subscribe to the bills. The full-data bills for the previous month are pushed on the fourth day of each month. The monthly bills in the PDF format for the previous month are pushed on the fourth day of each month.
       * *   The daily bills may be delayed. The delayed bills are pushed the next day after they are generated. The delayed bills may include the bills that should have been pushed on the previous day. We recommend that you query the full-data bills for the previous month at the beginning of each month.
       * *   The bill subscriber must have the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission.
       * *   The SubscribeBillToOSS operation has the same functionality as the Save Expense Details to OSS Bucket feature in User Center.
       * *   To subscribe to the bills stored in an OSS bucket, make sure that the directory name specified for the OSS bucket conforms to the following naming rules:
       * 1.  1.  The directory name can contain only UTF-8 characters and cannot contain emoticons.
       * 2.  2.  Forward slashes (/) are used to separate paths and can be used to create subdirectories with ease. The directory name cannot start with a forward slash (/), a backslash (\\\\), or consecutive forward slashes (/).
       * 3.  3.  The name of a subdirectory cannot be set to two consecutive periods (..).
       * 4.  4.  The directory name must be 1 to 254 characters in length.
       * *   File names:
       *     *   **BillingItemDetailForBillingPeriod** (Detailed bills of billable items)
       *         *   File name format for a daily push: `UID_BillingItemDetail_YYYYMMDD`. Example: `169**_BillingItemDetail_20190310`.
       *         *   File name format for a full-data push at the beginning of the next month: `UID_BillingItemDetail_YYYYMM`. Example: `169**_BillingItemDetail_201903`.
       *     *   **InstanceDetailForBillingPeriod** (Detailed bills of instances)
       *         *   File name format for a daily push: `UID_InstanceDetail_YYYYMMDD`. Example: `169**_InstanceDetail_20190310`.
       *         *   File name format for a full-data push at the beginning of the next month: `UID_InstanceDetail_YYYYMM`. Example: `169**_InstanceDetail_201903`.
       *     *   **InstanceDetailMonthly** (Instance-based bills summarized by billing cycle)
       *         *   File name format for a daily push: `UID_InstanceDetailMonthly_YYYYMM`. Example: `169**_InstanceDetailMonthly_201903`. A bill of this type contains the full data generated from the beginning of the month to the current day, and is updated every day until the fourth day of the next month.
       *     *   **BillingItemDetailMonthly** (Billable item-based bills summarized by billing cycle)
       *         *   File name format for a daily push: `UID_BillingItemDetailMonthly_YYYYMM`. Example: `169**_BillingItemDetailMonthly_201903`. A bill of this type contains the full data generated from the beginning of the month to the current day, and is updated every day until the fourth day of the next month.
       *     *   **SplitItemDetailDaily** (Split bills summarized by day)
       *         *   File name format for a daily push: `UID_SplitItemDetailDaily_YYYYMM`. Example: `169**_SplitItemDetailDaily_201903`. A bill of this type contains the full data generated from the beginning of the month to the current day, and is updated every day until the fourth day of the next month.
       *     *   **MonthBill** (Monthly bill in the PDF format)
       *         *   File name format for a monthly push: `UID_MonthBill_YYYYMM`. Example: `169**_MonthBill_201903`. The bill for the previous month is pushed on the fourth day of each month.
       * *   The bills of the MonthBill type are PDF files, whereas the bills of other types are CSV files. If the number of data rows in a bill exceeds a threshold, the bill is automatically split into multiple CSV files. Then, the multiple CSV files are automatically merged and compressed into a ZIP file that has the same name format as the original file.
       *
       * @param request SubscribeBillToOSSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubscribeBillToOSSResponse
       */
      Models::SubscribeBillToOSSResponse subscribeBillToOSSWithOptions(const Models::SubscribeBillToOSSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Subscribes to the bills that are stored in Object Storage Service (OSS) buckets.
       *
       * @description Before you call this operation, take note of the following items:
       * *   You can subscribe to only one type of bill at a time.
       * *   The bills generated on the previous day are pushed on a daily basis the next day after you subscribe to the bills. The full-data bills for the previous month are pushed on the fourth day of each month. The monthly bills in the PDF format for the previous month are pushed on the fourth day of each month.
       * *   The daily bills may be delayed. The delayed bills are pushed the next day after they are generated. The delayed bills may include the bills that should have been pushed on the previous day. We recommend that you query the full-data bills for the previous month at the beginning of each month.
       * *   The bill subscriber must have the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission.
       * *   The SubscribeBillToOSS operation has the same functionality as the Save Expense Details to OSS Bucket feature in User Center.
       * *   To subscribe to the bills stored in an OSS bucket, make sure that the directory name specified for the OSS bucket conforms to the following naming rules:
       * 1.  1.  The directory name can contain only UTF-8 characters and cannot contain emoticons.
       * 2.  2.  Forward slashes (/) are used to separate paths and can be used to create subdirectories with ease. The directory name cannot start with a forward slash (/), a backslash (\\\\), or consecutive forward slashes (/).
       * 3.  3.  The name of a subdirectory cannot be set to two consecutive periods (..).
       * 4.  4.  The directory name must be 1 to 254 characters in length.
       * *   File names:
       *     *   **BillingItemDetailForBillingPeriod** (Detailed bills of billable items)
       *         *   File name format for a daily push: `UID_BillingItemDetail_YYYYMMDD`. Example: `169**_BillingItemDetail_20190310`.
       *         *   File name format for a full-data push at the beginning of the next month: `UID_BillingItemDetail_YYYYMM`. Example: `169**_BillingItemDetail_201903`.
       *     *   **InstanceDetailForBillingPeriod** (Detailed bills of instances)
       *         *   File name format for a daily push: `UID_InstanceDetail_YYYYMMDD`. Example: `169**_InstanceDetail_20190310`.
       *         *   File name format for a full-data push at the beginning of the next month: `UID_InstanceDetail_YYYYMM`. Example: `169**_InstanceDetail_201903`.
       *     *   **InstanceDetailMonthly** (Instance-based bills summarized by billing cycle)
       *         *   File name format for a daily push: `UID_InstanceDetailMonthly_YYYYMM`. Example: `169**_InstanceDetailMonthly_201903`. A bill of this type contains the full data generated from the beginning of the month to the current day, and is updated every day until the fourth day of the next month.
       *     *   **BillingItemDetailMonthly** (Billable item-based bills summarized by billing cycle)
       *         *   File name format for a daily push: `UID_BillingItemDetailMonthly_YYYYMM`. Example: `169**_BillingItemDetailMonthly_201903`. A bill of this type contains the full data generated from the beginning of the month to the current day, and is updated every day until the fourth day of the next month.
       *     *   **SplitItemDetailDaily** (Split bills summarized by day)
       *         *   File name format for a daily push: `UID_SplitItemDetailDaily_YYYYMM`. Example: `169**_SplitItemDetailDaily_201903`. A bill of this type contains the full data generated from the beginning of the month to the current day, and is updated every day until the fourth day of the next month.
       *     *   **MonthBill** (Monthly bill in the PDF format)
       *         *   File name format for a monthly push: `UID_MonthBill_YYYYMM`. Example: `169**_MonthBill_201903`. The bill for the previous month is pushed on the fourth day of each month.
       * *   The bills of the MonthBill type are PDF files, whereas the bills of other types are CSV files. If the number of data rows in a bill exceeds a threshold, the bill is automatically split into multiple CSV files. Then, the multiple CSV files are automatically merged and compressed into a ZIP file that has the same name format as the original file.
       *
       * @param request SubscribeBillToOSSRequest
       * @return SubscribeBillToOSSResponse
       */
      Models::SubscribeBillToOSSResponse subscribeBillToOSS(const Models::SubscribeBillToOSSRequest &request);

      /**
       * @summary Add tags to resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add tags to resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Unsubscribes from the bills that are stored in Object Storage Service (OSS) buckets.
       *
       * @param request UnsubscribeBillToOSSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnsubscribeBillToOSSResponse
       */
      Models::UnsubscribeBillToOSSResponse unsubscribeBillToOSSWithOptions(const Models::UnsubscribeBillToOSSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unsubscribes from the bills that are stored in Object Storage Service (OSS) buckets.
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
