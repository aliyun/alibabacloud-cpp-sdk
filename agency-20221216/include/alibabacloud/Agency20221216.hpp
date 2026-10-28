// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AGENCY20221216_HPP_
#define ALIBABACLOUD_AGENCY20221216_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Agency20221216Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Agency20221216.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Configures the automatic write-off feature before the end-of-month settlement. When the consumed but undeducted quota reaches the specified automatic write-off amount, the amount is transferred to the deducted quota for offset.
       *
       * @param request AutomaticWriteOffRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AutomaticWriteOffResponse
       */
      Models::AutomaticWriteOffResponse automaticWriteOffWithOptions(const Models::AutomaticWriteOffRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the automatic write-off feature before the end-of-month settlement. When the consumed but undeducted quota reaches the specified automatic write-off amount, the amount is transferred to the deducted quota for offset.
       *
       * @param request AutomaticWriteOffRequest
       * @return AutomaticWriteOffResponse
       */
      Models::AutomaticWriteOffResponse automaticWriteOff(const Models::AutomaticWriteOffRequest &request);

      /**
       * @summary Invalidates a coupon.
       *
       * @param request CancelCouponRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCouponResponse
       */
      Models::CancelCouponResponse cancelCouponWithOptions(const Models::CancelCouponRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invalidates a coupon.
       *
       * @param request CancelCouponRequest
       * @return CancelCouponResponse
       */
      Models::CancelCouponResponse cancelCoupon(const Models::CancelCouponRequest &request);

      /**
       * @summary Unsubscribe from multi-level bills for international channel ecosystem partners.
       *
       * @description Make sure that the caller is an international Alibaba Cloud master reseller partner.
       * You can unsubscribe from one type of bill file at a time.
       * After the corresponding bill type is unsubscribed, files are no longer pushed to the specified OSS space.
       * **This content is published only on the international site.**
       *
       * @param request CancelSubscriptionBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelSubscriptionBillResponse
       */
      Models::CancelSubscriptionBillResponse cancelSubscriptionBillWithOptions(const Models::CancelSubscriptionBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unsubscribe from multi-level bills for international channel ecosystem partners.
       *
       * @description Make sure that the caller is an international Alibaba Cloud master reseller partner.
       * You can unsubscribe from one type of bill file at a time.
       * After the corresponding bill type is unsubscribed, files are no longer pushed to the specified OSS space.
       * **This content is published only on the international site.**
       *
       * @param request CancelSubscriptionBillRequest
       * @return CancelSubscriptionBillResponse
       */
      Models::CancelSubscriptionBillResponse cancelSubscriptionBill(const Models::CancelSubscriptionBillRequest &request);

      /**
       * @summary Queries the list of coupon approval statuses.
       *
       * @description Ensure that the current calling account is a distribution partner. 
       * <notice>Available only on the international site.</notice>
       *
       * @param request CouponApprovalStatusListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CouponApprovalStatusListResponse
       */
      Models::CouponApprovalStatusListResponse couponApprovalStatusListWithOptions(const Models::CouponApprovalStatusListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of coupon approval statuses.
       *
       * @description Ensure that the current calling account is a distribution partner. 
       * <notice>Available only on the international site.</notice>
       *
       * @param request CouponApprovalStatusListRequest
       * @return CouponApprovalStatusListResponse
       */
      Models::CouponApprovalStatusListResponse couponApprovalStatusList(const Models::CouponApprovalStatusListRequest &request);

      /**
       * @summary Creates a coupon template.
       *
       * @param tmpReq CreateCouponTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCouponTemplateResponse
       */
      Models::CreateCouponTemplateResponse createCouponTemplateWithOptions(const Models::CreateCouponTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a coupon template.
       *
       * @param request CreateCouponTemplateRequest
       * @return CreateCouponTemplateResponse
       */
      Models::CreateCouponTemplateResponse createCouponTemplate(const Models::CreateCouponTemplateRequest &request);

      /**
       * @summary Registers a customer to be invited.
       *
       * @param request CreateCustomerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomerResponse
       */
      Models::CreateCustomerResponse createCustomerWithOptions(const Models::CreateCustomerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a customer to be invited.
       *
       * @param request CreateCustomerRequest
       * @return CreateCustomerResponse
       */
      Models::CreateCustomerResponse createCustomer(const Models::CreateCustomerRequest &request);

      /**
       * @summary Queries the quota adjustment records for distribution customers on the Alibaba Cloud International Website. This operation applies only to international users and cannot be called on the Alibaba Cloud China Website.
       *
       * @description The caller must be a channel master distributor partner or a channel distributor partner on the Alibaba Cloud International Website.
       *
       * @param request CustomerQuotaRecordListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CustomerQuotaRecordListResponse
       */
      Models::CustomerQuotaRecordListResponse customerQuotaRecordListWithOptions(const Models::CustomerQuotaRecordListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quota adjustment records for distribution customers on the Alibaba Cloud International Website. This operation applies only to international users and cannot be called on the Alibaba Cloud China Website.
       *
       * @description The caller must be a channel master distributor partner or a channel distributor partner on the Alibaba Cloud International Website.
       *
       * @param request CustomerQuotaRecordListRequest
       * @return CustomerQuotaRecordListResponse
       */
      Models::CustomerQuotaRecordListResponse customerQuotaRecordList(const Models::CustomerQuotaRecordListRequest &request);

      /**
       * @summary Reduces the deducted credit of a reseller\\"s customer. For example, if the current deducted credit is 500 and the available credit is 1000, a reduction of 300 changes the deducted credit to 200 and the available credit to 1300.
       * Note: Sometimes the used credit of a customer may be negative. This indicates that no recovery of the used credit is needed. Wait for the customer to consume the credit. This occurs when a refund is issued while the customer\\"s credit is fully used. As a result, the customer\\"s credit increases beyond the original limit.
       * For example, if the current maximum available credit of a customer is 1000 with no usage, and a refund of 300 occurs, the used credit becomes -300.
       *
       * @param request DeductOutstandingBalanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeductOutstandingBalanceResponse
       */
      Models::DeductOutstandingBalanceResponse deductOutstandingBalanceWithOptions(const Models::DeductOutstandingBalanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reduces the deducted credit of a reseller\\"s customer. For example, if the current deducted credit is 500 and the available credit is 1000, a reduction of 300 changes the deducted credit to 200 and the available credit to 1300.
       * Note: Sometimes the used credit of a customer may be negative. This indicates that no recovery of the used credit is needed. Wait for the customer to consume the credit. This occurs when a refund is issued while the customer\\"s credit is fully used. As a result, the customer\\"s credit increases beyond the original limit.
       * For example, if the current maximum available credit of a customer is 1000 with no usage, and a refund of 300 occurs, the used credit becomes -300.
       *
       * @param request DeductOutstandingBalanceRequest
       * @return DeductOutstandingBalanceResponse
       */
      Models::DeductOutstandingBalanceResponse deductOutstandingBalance(const Models::DeductOutstandingBalanceRequest &request);

      /**
       * @summary Invalidates a coupon template.
       *
       * @description Make sure that the current caller is a distribution partner. 
       * <notice>Available only on the China site.</notice>.
       *
       * @param request DeleteCouponTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCouponTemplateResponse
       */
      Models::DeleteCouponTemplateResponse deleteCouponTemplateWithOptions(const Models::DeleteCouponTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invalidates a coupon template.
       *
       * @description Make sure that the current caller is a distribution partner. 
       * <notice>Available only on the China site.</notice>.
       *
       * @param request DeleteCouponTemplateRequest
       * @return DeleteCouponTemplateResponse
       */
      Models::DeleteCouponTemplateResponse deleteCouponTemplate(const Models::DeleteCouponTemplateRequest &request);

      /**
       * @summary Manages the shutdown status of pay-as-you-go instances for resold subordinate customers by Alibaba Cloud international channel master distributor partners and Alibaba Cloud international channel distributor partners.
       *
       * @description The caller must be an Alibaba Cloud international channel master distributor partner or an Alibaba Cloud international channel distributor partner.
       * **This content is published only on the China site (Chinese).**.
       *
       * @param request EditEndUserStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditEndUserStatusResponse
       */
      Models::EditEndUserStatusResponse editEndUserStatusWithOptions(const Models::EditEndUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manages the shutdown status of pay-as-you-go instances for resold subordinate customers by Alibaba Cloud international channel master distributor partners and Alibaba Cloud international channel distributor partners.
       *
       * @description The caller must be an Alibaba Cloud international channel master distributor partner or an Alibaba Cloud international channel distributor partner.
       * **This content is published only on the China site (Chinese).**.
       *
       * @param request EditEndUserStatusRequest
       * @return EditEndUserStatusResponse
       */
      Models::EditEndUserStatusResponse editEndUserStatus(const Models::EditEndUserStatusRequest &request);

      /**
       * @summary Sets the new purchase status of a subordinate reseller customer for an Alibaba Cloud reseller partner.
       *
       * @description The caller must be an Alibaba Cloud reseller partner.
       * **This content is published only on the China site.**.
       *
       * @param request EditNewBuyStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditNewBuyStatusResponse
       */
      Models::EditNewBuyStatusResponse editNewBuyStatusWithOptions(const Models::EditNewBuyStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the new purchase status of a subordinate reseller customer for an Alibaba Cloud reseller partner.
       *
       * @description The caller must be an Alibaba Cloud reseller partner.
       * **This content is published only on the China site.**.
       *
       * @param request EditNewBuyStatusRequest
       * @return EditNewBuyStatusResponse
       */
      Models::EditNewBuyStatusResponse editNewBuyStatus(const Models::EditNewBuyStatusRequest &request);

      /**
       * @summary Modifies the shutdown policy of a subordinate customer by an Alibaba Cloud distributor partner or reseller partner.
       *
       * @description The caller must be an Alibaba Cloud international channel distributor partner or an Alibaba Cloud international channel reseller partner.
       * **This content is published only on the Chinese site.**.
       *
       * @param request EditZeroCreditShutdownRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditZeroCreditShutdownResponse
       */
      Models::EditZeroCreditShutdownResponse editZeroCreditShutdownWithOptions(const Models::EditZeroCreditShutdownRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the shutdown policy of a subordinate customer by an Alibaba Cloud distributor partner or reseller partner.
       *
       * @description The caller must be an Alibaba Cloud international channel distributor partner or an Alibaba Cloud international channel reseller partner.
       * **This content is published only on the Chinese site.**.
       *
       * @param request EditZeroCreditShutdownRequest
       * @return EditZeroCreditShutdownResponse
       */
      Models::EditZeroCreditShutdownResponse editZeroCreditShutdown(const Models::EditZeroCreditShutdownRequest &request);

      /**
       * @summary Exports the quota adjustment records of a distributor\\"s customer, corresponding to the total budget adjustment details export feature on ACPN.
       *
       * @description The caller must be an Alibaba Cloud international site channel master distributor partner or an Alibaba Cloud international site channel distributor partner.
       *
       * @param request ExportCustomerQuotaRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportCustomerQuotaRecordResponse
       */
      Models::ExportCustomerQuotaRecordResponse exportCustomerQuotaRecordWithOptions(const Models::ExportCustomerQuotaRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports the quota adjustment records of a distributor\\"s customer, corresponding to the total budget adjustment details export feature on ACPN.
       *
       * @description The caller must be an Alibaba Cloud international site channel master distributor partner or an Alibaba Cloud international site channel distributor partner.
       *
       * @param request ExportCustomerQuotaRecordRequest
       * @return ExportCustomerQuotaRecordResponse
       */
      Models::ExportCustomerQuotaRecordResponse exportCustomerQuotaRecord(const Models::ExportCustomerQuotaRecordRequest &request);

      /**
       * @summary Exports the reversed deduction details from ACPN.
       *
       * @param request ExportReversedDeductionHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportReversedDeductionHistoryResponse
       */
      Models::ExportReversedDeductionHistoryResponse exportReversedDeductionHistoryWithOptions(const Models::ExportReversedDeductionHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports the reversed deduction details from ACPN.
       *
       * @param request ExportReversedDeductionHistoryRequest
       * @return ExportReversedDeductionHistoryResponse
       */
      Models::ExportReversedDeductionHistoryResponse exportReversedDeductionHistory(const Models::ExportReversedDeductionHistoryRequest &request);

      /**
       * @summary Returns the account information of distribution customers.
       *
       * @param request GetAccountInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountInfoResponse
       */
      Models::GetAccountInfoResponse getAccountInfoWithOptions(const Models::GetAccountInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the account information of distribution customers.
       *
       * @param request GetAccountInfoRequest
       * @return GetAccountInfoResponse
       */
      Models::GetAccountInfoResponse getAccountInfo(const Models::GetAccountInfoRequest &request);

      /**
       * @summary Queries a list of all active and delisted commission-eligible commodities for T1-level international distribution partners. This operation is available only for international users and cannot be called on the China site.
       *
       * @description Ensure that the current calling account is a distribution partner. 
       * <notice>Available only on the international site.</notice>
       *
       * @param tmpReq GetCommissionableProductsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCommissionableProductsResponse
       */
      Models::GetCommissionableProductsResponse getCommissionableProductsWithOptions(const Models::GetCommissionableProductsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of all active and delisted commission-eligible commodities for T1-level international distribution partners. This operation is available only for international users and cannot be called on the China site.
       *
       * @description Ensure that the current calling account is a distribution partner. 
       * <notice>Available only on the international site.</notice>
       *
       * @param request GetCommissionableProductsRequest
       * @return GetCommissionableProductsResponse
       */
      Models::GetCommissionableProductsResponse getCommissionableProducts(const Models::GetCommissionableProductsRequest &request);

      /**
       * @summary Queries the details of a coupon template.
       *
       * @description Ensure that the current calling account is a distribution partner. 
       * <notice>Available only on the International site
       *
       * @param request GetCouponTemplateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCouponTemplateDetailResponse
       */
      Models::GetCouponTemplateDetailResponse getCouponTemplateDetailWithOptions(const Models::GetCouponTemplateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a coupon template.
       *
       * @description Ensure that the current calling account is a distribution partner. 
       * <notice>Available only on the International site
       *
       * @param request GetCouponTemplateDetailRequest
       * @return GetCouponTemplateDetailResponse
       */
      Models::GetCouponTemplateDetailResponse getCouponTemplateDetail(const Models::GetCouponTemplateDetailRequest &request);

      /**
       * @summary Queries the products that can be offset by international channel distribution coupons.
       *
       * @param request GetCoupondeductProductCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCoupondeductProductCodeResponse
       */
      Models::GetCoupondeductProductCodeResponse getCoupondeductProductCodeWithOptions(const Models::GetCoupondeductProductCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the products that can be offset by international channel distribution coupons.
       *
       * @param request GetCoupondeductProductCodeRequest
       * @return GetCoupondeductProductCodeResponse
       */
      Models::GetCoupondeductProductCodeResponse getCoupondeductProductCode(const Models::GetCoupondeductProductCodeRequest &request);

      /**
       * @summary Queries the credit control information of a distributor customer. If the distributor customer is of the Agency type, the PopCreditInfoJson parameter in the response is empty. This feature is available only for Reseller and Distributor.
       *
       * @param request GetCreditInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCreditInfoResponse
       */
      Models::GetCreditInfoResponse getCreditInfoWithOptions(const Models::GetCreditInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the credit control information of a distributor customer. If the distributor customer is of the Agency type, the PopCreditInfoJson parameter in the response is empty. This feature is available only for Reseller and Distributor.
       *
       * @param request GetCreditInfoRequest
       * @return GetCreditInfoResponse
       */
      Models::GetCreditInfoResponse getCreditInfo(const Models::GetCreditInfoRequest &request);

      /**
       * @summary Queries customer orders on the Alibaba Cloud International site. This operation is only allowed for the international site.
       *
       * @description The caller must be an Alibaba Cloud International site channel master distributor partner or an Alibaba Cloud International site channel distributor partner.
       *
       * @param request GetCustomerOrdersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomerOrdersResponse
       */
      Models::GetCustomerOrdersResponse getCustomerOrdersWithOptions(const Models::GetCustomerOrdersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries customer orders on the Alibaba Cloud International site. This operation is only allowed for the international site.
       *
       * @description The caller must be an Alibaba Cloud International site channel master distributor partner or an Alibaba Cloud International site channel distributor partner.
       *
       * @param request GetCustomerOrdersRequest
       * @return GetCustomerOrdersResponse
       */
      Models::GetCustomerOrdersResponse getCustomerOrders(const Models::GetCustomerOrdersRequest &request);

      /**
       * @summary Retrieves the daily bills for resellers and distributors. This feature is only available for resellers and distributors.
       *
       * @param request GetDailyBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDailyBillResponse
       */
      Models::GetDailyBillResponse getDailyBillWithOptions(const Models::GetDailyBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the daily bills for resellers and distributors. This feature is only available for resellers and distributors.
       *
       * @param request GetDailyBillRequest
       * @return GetDailyBillResponse
       */
      Models::GetDailyBillResponse getDailyBill(const Models::GetDailyBillRequest &request);

      /**
       * @summary Queries the invitation status of registered customers who have been sent invitations.
       *
       * @param request GetInviteStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInviteStatusResponse
       */
      Models::GetInviteStatusResponse getInviteStatusWithOptions(const Models::GetInviteStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the invitation status of registered customers who have been sent invitations.
       *
       * @param request GetInviteStatusRequest
       * @return GetInviteStatusResponse
       */
      Models::GetInviteStatusResponse getInviteStatus(const Models::GetInviteStatusRequest &request);

      /**
       * @summary Retrieves the monthly bill for distributors. This feature is available only to resellers and distributors.
       *
       * @param request GetMonthlyBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMonthlyBillResponse
       */
      Models::GetMonthlyBillResponse getMonthlyBillWithOptions(const Models::GetMonthlyBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the monthly bill for distributors. This feature is available only to resellers and distributors.
       *
       * @param request GetMonthlyBillRequest
       * @return GetMonthlyBillResponse
       */
      Models::GetMonthlyBillResponse getMonthlyBill(const Models::GetMonthlyBillRequest &request);

      /**
       * @summary Queries order control change records.
       *
       * @description The caller must be an Alibaba Cloud international site channel master distributor partner or an Alibaba Cloud international site channel distributor partner.
       *
       * @param request GetPurchaseControlRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPurchaseControlRecordResponse
       */
      Models::GetPurchaseControlRecordResponse getPurchaseControlRecordWithOptions(const Models::GetPurchaseControlRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries order control change records.
       *
       * @description The caller must be an Alibaba Cloud international site channel master distributor partner or an Alibaba Cloud international site channel distributor partner.
       *
       * @param request GetPurchaseControlRecordRequest
       * @return GetPurchaseControlRecordResponse
       */
      Models::GetPurchaseControlRecordResponse getPurchaseControlRecord(const Models::GetPurchaseControlRecordRequest &request);

      /**
       * @summary Queries the modification records of the deferred shutdown policy.
       *
       * @description The caller must be an Alibaba Cloud international site channel master distributor partner or an Alibaba Cloud international site channel distributor partner.
       * **This content is published only on the international site.**.
       *
       * @param request GetShutdownPolicyRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetShutdownPolicyRecordResponse
       */
      Models::GetShutdownPolicyRecordResponse getShutdownPolicyRecordWithOptions(const Models::GetShutdownPolicyRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the modification records of the deferred shutdown policy.
       *
       * @description The caller must be an Alibaba Cloud international site channel master distributor partner or an Alibaba Cloud international site channel distributor partner.
       * **This content is published only on the international site.**.
       *
       * @param request GetShutdownPolicyRecordRequest
       * @return GetShutdownPolicyRecordResponse
       */
      Models::GetShutdownPolicyRecordResponse getShutdownPolicyRecord(const Models::GetShutdownPolicyRecordRequest &request);

      /**
       * @summary Queries the details of a coupon application initiated by a tier-2 distributor. This operation applies only to distributors.
       *
       * @param request GetTier2CouponApprovalDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTier2CouponApprovalDetailResponse
       */
      Models::GetTier2CouponApprovalDetailResponse getTier2CouponApprovalDetailWithOptions(const Models::GetTier2CouponApprovalDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a coupon application initiated by a tier-2 distributor. This operation applies only to distributors.
       *
       * @param request GetTier2CouponApprovalDetailRequest
       * @return GetTier2CouponApprovalDetailResponse
       */
      Models::GetTier2CouponApprovalDetailResponse getTier2CouponApprovalDetail(const Models::GetTier2CouponApprovalDetailRequest &request);

      /**
       * @summary Retrieves all unassociated customers.
       *
       * @param request GetUnassociatedCustomerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUnassociatedCustomerResponse
       */
      Models::GetUnassociatedCustomerResponse getUnassociatedCustomerWithOptions(const Models::GetUnassociatedCustomerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all unassociated customers.
       *
       * @param request GetUnassociatedCustomerRequest
       * @return GetUnassociatedCustomerResponse
       */
      Models::GetUnassociatedCustomerResponse getUnassociatedCustomer(const Models::GetUnassociatedCustomerRequest &request);

      /**
       * @summary Invites a customer to register as a partner customer.
       *
       * @param request InviteSubAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InviteSubAccountResponse
       */
      Models::InviteSubAccountResponse inviteSubAccountWithOptions(const Models::InviteSubAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invites a customer to register as a partner customer.
       *
       * @param request InviteSubAccountRequest
       * @return InviteSubAccountResponse
       */
      Models::InviteSubAccountResponse inviteSubAccount(const Models::InviteSubAccountRequest &request);

      /**
       * @summary Invites T2 Reseller sub-accounts in batch as a T1 partner.
       *
       * @description 1. The caller of this operation must be a channel master reseller partner on Alibaba Cloud International Website.
       * 2. The system automatically determines whether the invitation is cross-region based on whether the RegisterNation parameter falls within the T1 contract coverage area. You can call the ListCountries operation to query the contract coverage area.
       * - If the invitation is cross-region, a cross-region invitation approval process is initiated. After Alibaba Cloud approves the request, an invitation registration email is sent to the specified email address.
       * - If the invitation is not cross-region, an invitation registration email is sent directly.
       *
       * @param request InviteSubResellerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InviteSubResellerResponse
       */
      Models::InviteSubResellerResponse inviteSubResellerWithOptions(const Models::InviteSubResellerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invites T2 Reseller sub-accounts in batch as a T1 partner.
       *
       * @description 1. The caller of this operation must be a channel master reseller partner on Alibaba Cloud International Website.
       * 2. The system automatically determines whether the invitation is cross-region based on whether the RegisterNation parameter falls within the T1 contract coverage area. You can call the ListCountries operation to query the contract coverage area.
       * - If the invitation is cross-region, a cross-region invitation approval process is initiated. After Alibaba Cloud approves the request, an invitation registration email is sent to the specified email address.
       * - If the invitation is not cross-region, an invitation registration email is sent directly.
       *
       * @param request InviteSubResellerRequest
       * @return InviteSubResellerResponse
       */
      Models::InviteSubResellerResponse inviteSubReseller(const Models::InviteSubResellerRequest &request);

      /**
       * @summary Issues coupons.
       *
       * @param request IssueCouponForCustomerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IssueCouponForCustomerResponse
       */
      Models::IssueCouponForCustomerResponse issueCouponForCustomerWithOptions(const Models::IssueCouponForCustomerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Issues coupons.
       *
       * @param request IssueCouponForCustomerRequest
       * @return IssueCouponForCustomerResponse
       */
      Models::IssueCouponForCustomerResponse issueCouponForCustomer(const Models::IssueCouponForCustomerRequest &request);

      /**
       * @summary Queries the list of serviceable regions. This feature is available to all distributors. The response returns region codes based on the serviceable countries specified in the distributor contract.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCountriesResponse
       */
      Models::ListCountriesResponse listCountriesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of serviceable regions. This feature is available to all distributors. The response returns region codes based on the serviceable countries specified in the distributor contract.
       *
       * @return ListCountriesResponse
       */
      Models::ListCountriesResponse listCountries();

      /**
       * @summary Queries the usage of coupons issued by a distribution partner.
       *
       * @description Ensure that the current calling account is a distribution partner. 
       * <notice>Available only on the international site.</notice>
       *
       * @param request ListCouponUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCouponUsageResponse
       */
      Models::ListCouponUsageResponse listCouponUsageWithOptions(const Models::ListCouponUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage of coupons issued by a distribution partner.
       *
       * @description Ensure that the current calling account is a distribution partner. 
       * <notice>Available only on the international site.</notice>
       *
       * @param request ListCouponUsageRequest
       * @return ListCouponUsageResponse
       */
      Models::ListCouponUsageResponse listCouponUsage(const Models::ListCouponUsageRequest &request);

      /**
       * @summary Queries the list of exported files.
       *
       * @param request ListExportTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExportTasksResponse
       */
      Models::ListExportTasksResponse listExportTasksWithOptions(const Models::ListExportTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of exported files.
       *
       * @param request ListExportTasksRequest
       * @return ListExportTasksResponse
       */
      Models::ListExportTasksResponse listExportTasks(const Models::ListExportTasksRequest &request);

      /**
       * @summary Queries the coupon applications submitted by secondary distributors for their end users. This operation applies only to tier-1 distributors.
       *
       * @param request ListTier2CouponApprovalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTier2CouponApprovalResponse
       */
      Models::ListTier2CouponApprovalResponse listTier2CouponApprovalWithOptions(const Models::ListTier2CouponApprovalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the coupon applications submitted by secondary distributors for their end users. This operation applies only to tier-1 distributors.
       *
       * @param request ListTier2CouponApprovalRequest
       * @return ListTier2CouponApprovalResponse
       */
      Models::ListTier2CouponApprovalResponse listTier2CouponApproval(const Models::ListTier2CouponApprovalRequest &request);

      /**
       * @summary Approves a process that requires partner approval. This operation is applicable only to distributors.
       *
       * @param request ProcessApprovalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ProcessApprovalResponse
       */
      Models::ProcessApprovalResponse processApprovalWithOptions(const Models::ProcessApprovalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Approves a process that requires partner approval. This operation is applicable only to distributors.
       *
       * @param request ProcessApprovalRequest
       * @return ProcessApprovalResponse
       */
      Models::ProcessApprovalResponse processApproval(const Models::ProcessApprovalRequest &request);

      /**
       * @summary Queries the change records of the automatic write-off quota by using paging.
       *
       * @param request QueryAutomaticWriteOffChangeRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAutomaticWriteOffChangeRecordsResponse
       */
      Models::QueryAutomaticWriteOffChangeRecordsResponse queryAutomaticWriteOffChangeRecordsWithOptions(const Models::QueryAutomaticWriteOffChangeRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the change records of the automatic write-off quota by using paging.
       *
       * @param request QueryAutomaticWriteOffChangeRecordsRequest
       * @return QueryAutomaticWriteOffChangeRecordsResponse
       */
      Models::QueryAutomaticWriteOffChangeRecordsResponse queryAutomaticWriteOffChangeRecords(const Models::QueryAutomaticWriteOffChangeRecordsRequest &request);

      /**
       * @summary Queries the quota offset details of a specified customer.
       *
       * @param request QueryReversedDeductionHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryReversedDeductionHistoryResponse
       */
      Models::QueryReversedDeductionHistoryResponse queryReversedDeductionHistoryWithOptions(const Models::QueryReversedDeductionHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quota offset details of a specified customer.
       *
       * @param request QueryReversedDeductionHistoryRequest
       * @return QueryReversedDeductionHistoryResponse
       */
      Models::QueryReversedDeductionHistoryResponse queryReversedDeductionHistory(const Models::QueryReversedDeductionHistoryRequest &request);

      /**
       * @summary Queries the quota transaction export results for international distribution users. This API operation is available only on the international site.
       *
       * @description The caller must be an Alibaba Cloud International site channel master distributor partner or an Alibaba Cloud International site channel distributor partner.
       *
       * @param request QuotaListExportPagedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuotaListExportPagedResponse
       */
      Models::QuotaListExportPagedResponse quotaListExportPagedWithOptions(const Models::QuotaListExportPagedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quota transaction export results for international distribution users. This API operation is available only on the international site.
       *
       * @description The caller must be an Alibaba Cloud International site channel master distributor partner or an Alibaba Cloud International site channel distributor partner.
       *
       * @param request QuotaListExportPagedRequest
       * @return QuotaListExportPagedResponse
       */
      Models::QuotaListExportPagedResponse quotaListExportPaged(const Models::QuotaListExportPagedRequest &request);

      /**
       * @summary Resends an invitation email.
       *
       * @param request ResendEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResendEmailResponse
       */
      Models::ResendEmailResponse resendEmailWithOptions(const Models::ResendEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resends an invitation email.
       *
       * @param request ResendEmailRequest
       * @return ResendEmailResponse
       */
      Models::ResendEmailResponse resendEmail(const Models::ResendEmailRequest &request);

      /**
       * @summary Updates sub-account information, including the nickname and remarks.
       *
       * @param request SetAccountInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAccountInfoResponse
       */
      Models::SetAccountInfoResponse setAccountInfoWithOptions(const Models::SetAccountInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates sub-account information, including the nickname and remarks.
       *
       * @param request SetAccountInfoRequest
       * @return SetAccountInfoResponse
       */
      Models::SetAccountInfoResponse setAccountInfo(const Models::SetAccountInfoRequest &request);

      /**
       * @summary Sets the credit limit for a reseller customer. This feature is available only for Resellers and Distributors.
       *
       * @param request SetCreditLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCreditLineResponse
       */
      Models::SetCreditLineResponse setCreditLineWithOptions(const Models::SetCreditLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the credit limit for a reseller customer. This feature is available only for Resellers and Distributors.
       *
       * @param request SetCreditLineRequest
       * @return SetCreditLineResponse
       */
      Models::SetCreditLineResponse setCreditLine(const Models::SetCreditLineRequest &request);

      /**
       * @summary Sets the credit usage threshold. When a customer\\"s available credit falls below the threshold, the reseller is notified by email. This feature is available only for Resellers and Distributors.
       *
       * @param request SetWarningThresholdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetWarningThresholdResponse
       */
      Models::SetWarningThresholdResponse setWarningThresholdWithOptions(const Models::SetWarningThresholdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the credit usage threshold. When a customer\\"s available credit falls below the threshold, the reseller is notified by email. This feature is available only for Resellers and Distributors.
       *
       * @param request SetWarningThresholdRequest
       * @return SetWarningThresholdResponse
       */
      Models::SetWarningThresholdResponse setWarningThreshold(const Models::SetWarningThresholdRequest &request);

      /**
       * @summary Subscribes to multi-level ecosystem partner bills on Alibaba Cloud International and generates bill files to OSS.
       *
       * @description - Ensure that the caller is an Alibaba Cloud international master reseller partner.
       * - A user can subscribe to one type of bill file at a time.
       * - After subscription, bill files generated on the previous day are pushed daily starting from the next day. On the 5th of each month, full bill files for the previous billing cycle are pushed.
       * - Bill files generated on a daily basis may be delayed. Delayed bill files are pushed the day after they are generated and may include bills that were delayed from earlier days. Pull the full files for the previous month at the beginning of each month.
       * - Grant the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/?spm=api-workbench.API%20Document.0.0.68c71e0fhmTSJp#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission to the subscribing user.
       * - File names.
       * ```.
       * BillingItemDetailForBillingPeriod   (Billing item detail)
       *   
       * Daily push file name format: UID_PartnerBillingItemDetail_YYYYMMDD_SquenceNo_fileNo. Example: 169**_BillingItemDetail_20190310_0001_01.
       *   
       * Full file name format at the beginning of the next month: UID_PartnerBillingItemDetail_YYYYMM_SquenceNo_fileNo. Example: 169**_BillingItemDetail_201903_0001_01.
       * InstanceDetailForBillingPeriod  (Instance bill detail)
       *  
       *  Daily push file name format: UID_PartnerInstanceDetail_YYYYMMDD_SquenceNo_fileNo. Example: 169**_InstanceDetail_20190310_0001_01.
       *   
       * Full file name format at the beginning of the next month: UID_PartnerInstanceDetail_YYYYMM_SquenceNo_fileNo. Example: 169**_InstanceDetail_201903_1999-0001_01.
       * BillingItemDetailMonthly   (Billing item monthly bill)
       *   
       * Daily push file name format: UID_PartnerBillingItemDetailMonthly_YYYYMM_SquenceNo_fileNo. Example: 169**_BillingItemDetailMonthly_201903_0001_01. This file is updated daily with full data from the beginning of the month to the current day, until the 5th of the next month.
       * InstanceDetailMonthly  (Instance monthly bill)
       *   
       * Daily push file name format: UID_PartnerInstanceDetailMonthly_YYYYMM_SquenceNo_fileNo. Example: 169**_InstanceDetailMonthly_201903_0001_01. This file is updated daily with full data from the beginning of the month to the current day, until the 5th of the next month.
       * fileNo exists only when the number of bill rows reaches the split threshold and the file is split.
       * ```
       * **This content is published only on the Chinese site.**.
       *
       * @param request SubscriptionBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubscriptionBillResponse
       */
      Models::SubscriptionBillResponse subscriptionBillWithOptions(const Models::SubscriptionBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Subscribes to multi-level ecosystem partner bills on Alibaba Cloud International and generates bill files to OSS.
       *
       * @description - Ensure that the caller is an Alibaba Cloud international master reseller partner.
       * - A user can subscribe to one type of bill file at a time.
       * - After subscription, bill files generated on the previous day are pushed daily starting from the next day. On the 5th of each month, full bill files for the previous billing cycle are pushed.
       * - Bill files generated on a daily basis may be delayed. Delayed bill files are pushed the day after they are generated and may include bills that were delayed from earlier days. Pull the full files for the previous month at the beginning of each month.
       * - Grant the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/?spm=api-workbench.API%20Document.0.0.68c71e0fhmTSJp#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission to the subscribing user.
       * - File names.
       * ```.
       * BillingItemDetailForBillingPeriod   (Billing item detail)
       *   
       * Daily push file name format: UID_PartnerBillingItemDetail_YYYYMMDD_SquenceNo_fileNo. Example: 169**_BillingItemDetail_20190310_0001_01.
       *   
       * Full file name format at the beginning of the next month: UID_PartnerBillingItemDetail_YYYYMM_SquenceNo_fileNo. Example: 169**_BillingItemDetail_201903_0001_01.
       * InstanceDetailForBillingPeriod  (Instance bill detail)
       *  
       *  Daily push file name format: UID_PartnerInstanceDetail_YYYYMMDD_SquenceNo_fileNo. Example: 169**_InstanceDetail_20190310_0001_01.
       *   
       * Full file name format at the beginning of the next month: UID_PartnerInstanceDetail_YYYYMM_SquenceNo_fileNo. Example: 169**_InstanceDetail_201903_1999-0001_01.
       * BillingItemDetailMonthly   (Billing item monthly bill)
       *   
       * Daily push file name format: UID_PartnerBillingItemDetailMonthly_YYYYMM_SquenceNo_fileNo. Example: 169**_BillingItemDetailMonthly_201903_0001_01. This file is updated daily with full data from the beginning of the month to the current day, until the 5th of the next month.
       * InstanceDetailMonthly  (Instance monthly bill)
       *   
       * Daily push file name format: UID_PartnerInstanceDetailMonthly_YYYYMM_SquenceNo_fileNo. Example: 169**_InstanceDetailMonthly_201903_0001_01. This file is updated daily with full data from the beginning of the month to the current day, until the 5th of the next month.
       * fileNo exists only when the number of bill rows reaches the split threshold and the file is split.
       * ```
       * **This content is published only on the Chinese site.**.
       *
       * @param request SubscriptionBillRequest
       * @return SubscriptionBillResponse
       */
      Models::SubscriptionBillResponse subscriptionBill(const Models::SubscriptionBillRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
