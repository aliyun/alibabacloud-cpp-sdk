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
       * @summary 作废优惠券
       *
       * @param request CancelCouponRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCouponResponse
       */
      Models::CancelCouponResponse cancelCouponWithOptions(const Models::CancelCouponRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 作废优惠券
       *
       * @param request CancelCouponRequest
       * @return CancelCouponResponse
       */
      Models::CancelCouponResponse cancelCoupon(const Models::CancelCouponRequest &request);

      /**
       * @summary Cancels the subscription to multi-level bills as an Alibaba Cloud eco-partner.
       *
       * @description Make sure that you are a distributor of the Alibaba Cloud international ecosystem.
       * You can call this operation to cancel the subscription to only one type of bill at a time.
       * After the subscription to a type of bill is canceled, bills of this type are no longer pushed to the specified Object Storage Service (OSS) bucket.
       * **This topic is published only on the international site (alibabacloud.com).
       *
       * @param request CancelSubscriptionBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelSubscriptionBillResponse
       */
      Models::CancelSubscriptionBillResponse cancelSubscriptionBillWithOptions(const Models::CancelSubscriptionBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the subscription to multi-level bills as an Alibaba Cloud eco-partner.
       *
       * @description Make sure that you are a distributor of the Alibaba Cloud international ecosystem.
       * You can call this operation to cancel the subscription to only one type of bill at a time.
       * After the subscription to a type of bill is canceled, bills of this type are no longer pushed to the specified Object Storage Service (OSS) bucket.
       * **This topic is published only on the international site (alibabacloud.com).
       *
       * @param request CancelSubscriptionBillRequest
       * @return CancelSubscriptionBillResponse
       */
      Models::CancelSubscriptionBillResponse cancelSubscriptionBill(const Models::CancelSubscriptionBillRequest &request);

      /**
       * @summary 优惠券审批状态列表
       *
       * @param request CouponApprovalStatusListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CouponApprovalStatusListResponse
       */
      Models::CouponApprovalStatusListResponse couponApprovalStatusListWithOptions(const Models::CouponApprovalStatusListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 优惠券审批状态列表
       *
       * @param request CouponApprovalStatusListRequest
       * @return CouponApprovalStatusListResponse
       */
      Models::CouponApprovalStatusListResponse couponApprovalStatusList(const Models::CouponApprovalStatusListRequest &request);

      /**
       * @summary 创建优惠券模板
       *
       * @param tmpReq CreateCouponTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCouponTemplateResponse
       */
      Models::CreateCouponTemplateResponse createCouponTemplateWithOptions(const Models::CreateCouponTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建优惠券模板
       *
       * @param request CreateCouponTemplateRequest
       * @return CreateCouponTemplateResponse
       */
      Models::CreateCouponTemplateResponse createCouponTemplate(const Models::CreateCouponTemplateRequest &request);

      /**
       * @summary This function is designed for create a customer who is to be invited.
       *
       * @param request CreateCustomerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomerResponse
       */
      Models::CreateCustomerResponse createCustomerWithOptions(const Models::CreateCustomerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This function is designed for create a customer who is to be invited.
       *
       * @param request CreateCustomerRequest
       * @return CreateCustomerResponse
       */
      Models::CreateCustomerResponse createCustomer(const Models::CreateCustomerRequest &request);

      /**
       * @summary Query quota adjustment list of Distribution Customer from International Site. Not available on Domestic Site.
       *
       * @param request CustomerQuotaRecordListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CustomerQuotaRecordListResponse
       */
      Models::CustomerQuotaRecordListResponse customerQuotaRecordListWithOptions(const Models::CustomerQuotaRecordListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query quota adjustment list of Distribution Customer from International Site. Not available on Domestic Site.
       *
       * @param request CustomerQuotaRecordListRequest
       * @return CustomerQuotaRecordListResponse
       */
      Models::CustomerQuotaRecordListResponse customerQuotaRecordList(const Models::CustomerQuotaRecordListRequest &request);

      /**
       * @summary This API is used to offset the Deducted Credit of a Distribution Customer. For example, if the current Deducted Credit is 500 and the Available Credit is 1000, by offsetting 300, the Deducted Credit will then become 200, and the Available Credit becomes 1300.
       *
       * @description Note that sometimes you may find that the customer\\"s Used Credit is negative. This indicates that there is no need to restore the Used Credit, and its ready for customer\\"s usage. This phenomenon occurs because a refund is generated while the customer\\"s credit is full, thereby triggered additional increasing on the customer\\"s credit.
       * For example, if the customer\\"s maximum Available Credit is 1000 with no usage, and a refund of 300 occurs, the Used Credit will become -300.
       *
       * @param request DeductOutstandingBalanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeductOutstandingBalanceResponse
       */
      Models::DeductOutstandingBalanceResponse deductOutstandingBalanceWithOptions(const Models::DeductOutstandingBalanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to offset the Deducted Credit of a Distribution Customer. For example, if the current Deducted Credit is 500 and the Available Credit is 1000, by offsetting 300, the Deducted Credit will then become 200, and the Available Credit becomes 1300.
       *
       * @description Note that sometimes you may find that the customer\\"s Used Credit is negative. This indicates that there is no need to restore the Used Credit, and its ready for customer\\"s usage. This phenomenon occurs because a refund is generated while the customer\\"s credit is full, thereby triggered additional increasing on the customer\\"s credit.
       * For example, if the customer\\"s maximum Available Credit is 1000 with no usage, and a refund of 300 occurs, the Used Credit will become -300.
       *
       * @param request DeductOutstandingBalanceRequest
       * @return DeductOutstandingBalanceResponse
       */
      Models::DeductOutstandingBalanceResponse deductOutstandingBalance(const Models::DeductOutstandingBalanceRequest &request);

      /**
       * @summary 作废优惠券模板
       *
       * @param request DeleteCouponTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCouponTemplateResponse
       */
      Models::DeleteCouponTemplateResponse deleteCouponTemplateWithOptions(const Models::DeleteCouponTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 作废优惠券模板
       *
       * @param request DeleteCouponTemplateRequest
       * @return DeleteCouponTemplateResponse
       */
      Models::DeleteCouponTemplateResponse deleteCouponTemplate(const Models::DeleteCouponTemplateRequest &request);

      /**
       * @summary Set the after-shutdown instance status for post-pay End Users as a Reseller.
       *
       * @description The caller should be the Partner as identified in the Alibaba Cloud distribution model. </br>
       * **This content is only published on the international site. **
       *
       * @param request EditEndUserStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditEndUserStatusResponse
       */
      Models::EditEndUserStatusResponse editEndUserStatusWithOptions(const Models::EditEndUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set the after-shutdown instance status for post-pay End Users as a Reseller.
       *
       * @description The caller should be the Partner as identified in the Alibaba Cloud distribution model. </br>
       * **This content is only published on the international site. **
       *
       * @param request EditEndUserStatusRequest
       * @return EditEndUserStatusResponse
       */
      Models::EditEndUserStatusResponse editEndUserStatus(const Models::EditEndUserStatusRequest &request);

      /**
       * @summary Set the New Buy status for Sub-Customer as a Partner.
       *
       * @description The caller should be the Partner as identified in the Alibaba Cloud distribution model. </br>
       * **This content is only published on the international site. **
       *
       * @param request EditNewBuyStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditNewBuyStatusResponse
       */
      Models::EditNewBuyStatusResponse editNewBuyStatusWithOptions(const Models::EditNewBuyStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set the New Buy status for Sub-Customer as a Partner.
       *
       * @description The caller should be the Partner as identified in the Alibaba Cloud distribution model. </br>
       * **This content is only published on the international site. **
       *
       * @param request EditNewBuyStatusRequest
       * @return EditNewBuyStatusResponse
       */
      Models::EditNewBuyStatusResponse editNewBuyStatus(const Models::EditNewBuyStatusRequest &request);

      /**
       * @summary Modify the End User\\"s Shutdown Policy as a Reseller.
       *
       * @description The caller should be the Partner as identified in the Alibaba Cloud distribution model. </br>
       * **This content is only published on the international site. **
       *
       * @param request EditZeroCreditShutdownRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditZeroCreditShutdownResponse
       */
      Models::EditZeroCreditShutdownResponse editZeroCreditShutdownWithOptions(const Models::EditZeroCreditShutdownRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the End User\\"s Shutdown Policy as a Reseller.
       *
       * @description The caller should be the Partner as identified in the Alibaba Cloud distribution model. </br>
       * **This content is only published on the international site. **
       *
       * @param request EditZeroCreditShutdownRequest
       * @return EditZeroCreditShutdownResponse
       */
      Models::EditZeroCreditShutdownResponse editZeroCreditShutdown(const Models::EditZeroCreditShutdownRequest &request);

      /**
       * @summary Export quota amount adjustment history as a Distribution Customer from International Site. Only available on International Site.
       *
       * @description Caller must be a Partner from International Site, either Distribution or Reseller will do.
       *
       * @param request ExportCustomerQuotaRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportCustomerQuotaRecordResponse
       */
      Models::ExportCustomerQuotaRecordResponse exportCustomerQuotaRecordWithOptions(const Models::ExportCustomerQuotaRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Export quota amount adjustment history as a Distribution Customer from International Site. Only available on International Site.
       *
       * @description Caller must be a Partner from International Site, either Distribution or Reseller will do.
       *
       * @param request ExportCustomerQuotaRecordRequest
       * @return ExportCustomerQuotaRecordResponse
       */
      Models::ExportCustomerQuotaRecordResponse exportCustomerQuotaRecord(const Models::ExportCustomerQuotaRecordRequest &request);

      /**
       * @summary 额度冲减明细列表导出接口
       *
       * @param request ExportReversedDeductionHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportReversedDeductionHistoryResponse
       */
      Models::ExportReversedDeductionHistoryResponse exportReversedDeductionHistoryWithOptions(const Models::ExportReversedDeductionHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 额度冲减明细列表导出接口
       *
       * @param request ExportReversedDeductionHistoryRequest
       * @return ExportReversedDeductionHistoryResponse
       */
      Models::ExportReversedDeductionHistoryResponse exportReversedDeductionHistory(const Models::ExportReversedDeductionHistoryRequest &request);

      /**
       * @summary Return Distribution Customer\\"s account information.
       *
       * @param request GetAccountInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountInfoResponse
       */
      Models::GetAccountInfoResponse getAccountInfoWithOptions(const Models::GetAccountInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Return Distribution Customer\\"s account information.
       *
       * @param request GetAccountInfoRequest
       * @return GetAccountInfoResponse
       */
      Models::GetAccountInfoResponse getAccountInfo(const Models::GetAccountInfoRequest &request);

      /**
       * @summary 提供返佣商品API
       *
       * @param tmpReq GetCommissionableProductsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCommissionableProductsResponse
       */
      Models::GetCommissionableProductsResponse getCommissionableProductsWithOptions(const Models::GetCommissionableProductsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提供返佣商品API
       *
       * @param request GetCommissionableProductsRequest
       * @return GetCommissionableProductsResponse
       */
      Models::GetCommissionableProductsResponse getCommissionableProducts(const Models::GetCommissionableProductsRequest &request);

      /**
       * @summary 查询优惠券模板详情
       *
       * @param request GetCouponTemplateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCouponTemplateDetailResponse
       */
      Models::GetCouponTemplateDetailResponse getCouponTemplateDetailWithOptions(const Models::GetCouponTemplateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询优惠券模板详情
       *
       * @param request GetCouponTemplateDetailRequest
       * @return GetCouponTemplateDetailResponse
       */
      Models::GetCouponTemplateDetailResponse getCouponTemplateDetail(const Models::GetCouponTemplateDetailRequest &request);

      /**
       * @summary 国际渠道分销优惠券可抵扣产品
       *
       * @param request GetCoupondeductProductCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCoupondeductProductCodeResponse
       */
      Models::GetCoupondeductProductCodeResponse getCoupondeductProductCodeWithOptions(const Models::GetCoupondeductProductCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际渠道分销优惠券可抵扣产品
       *
       * @param request GetCoupondeductProductCodeRequest
       * @return GetCoupondeductProductCodeResponse
       */
      Models::GetCoupondeductProductCodeResponse getCoupondeductProductCode(const Models::GetCoupondeductProductCodeRequest &request);

      /**
       * @summary Query Credit Control information of Distribution Customers. The PopCreditInfoJson in the Return Parameter will be empty if the Distribution Customer is an Agency. This function is only available for Resellers and Distributors.
       *
       * @param request GetCreditInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCreditInfoResponse
       */
      Models::GetCreditInfoResponse getCreditInfoWithOptions(const Models::GetCreditInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Credit Control information of Distribution Customers. The PopCreditInfoJson in the Return Parameter will be empty if the Distribution Customer is an Agency. This function is only available for Resellers and Distributors.
       *
       * @param request GetCreditInfoRequest
       * @return GetCreditInfoResponse
       */
      Models::GetCreditInfoResponse getCreditInfo(const Models::GetCreditInfoRequest &request);

      /**
       * @summary 客户订单查询
       *
       * @param request GetCustomerOrdersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomerOrdersResponse
       */
      Models::GetCustomerOrdersResponse getCustomerOrdersWithOptions(const Models::GetCustomerOrdersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 客户订单查询
       *
       * @param request GetCustomerOrdersRequest
       * @return GetCustomerOrdersResponse
       */
      Models::GetCustomerOrdersResponse getCustomerOrders(const Models::GetCustomerOrdersRequest &request);

      /**
       * @summary Issue Distributor\\"s daily Bill. This function is only available for Resellers and Distributors.
       *
       * @param request GetDailyBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDailyBillResponse
       */
      Models::GetDailyBillResponse getDailyBillWithOptions(const Models::GetDailyBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Issue Distributor\\"s daily Bill. This function is only available for Resellers and Distributors.
       *
       * @param request GetDailyBillRequest
       * @return GetDailyBillResponse
       */
      Models::GetDailyBillResponse getDailyBill(const Models::GetDailyBillRequest &request);

      /**
       * @summary Query invitation status of customer who have been created and invited.
       *
       * @param request GetInviteStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInviteStatusResponse
       */
      Models::GetInviteStatusResponse getInviteStatusWithOptions(const Models::GetInviteStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query invitation status of customer who have been created and invited.
       *
       * @param request GetInviteStatusRequest
       * @return GetInviteStatusResponse
       */
      Models::GetInviteStatusResponse getInviteStatus(const Models::GetInviteStatusRequest &request);

      /**
       * @summary Issue Distributor\\"s Monthly Bill. This function is only available for Resellers and Distributors.
       *
       * @param request GetMonthlyBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMonthlyBillResponse
       */
      Models::GetMonthlyBillResponse getMonthlyBillWithOptions(const Models::GetMonthlyBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Issue Distributor\\"s Monthly Bill. This function is only available for Resellers and Distributors.
       *
       * @param request GetMonthlyBillRequest
       * @return GetMonthlyBillResponse
       */
      Models::GetMonthlyBillResponse getMonthlyBill(const Models::GetMonthlyBillRequest &request);

      /**
       * @summary 下单控制记录查询
       *
       * @param request GetPurchaseControlRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPurchaseControlRecordResponse
       */
      Models::GetPurchaseControlRecordResponse getPurchaseControlRecordWithOptions(const Models::GetPurchaseControlRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下单控制记录查询
       *
       * @param request GetPurchaseControlRecordRequest
       * @return GetPurchaseControlRecordResponse
       */
      Models::GetPurchaseControlRecordResponse getPurchaseControlRecord(const Models::GetPurchaseControlRecordRequest &request);

      /**
       * @summary 查询延停策略修改记录
       *
       * @param request GetShutdownPolicyRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetShutdownPolicyRecordResponse
       */
      Models::GetShutdownPolicyRecordResponse getShutdownPolicyRecordWithOptions(const Models::GetShutdownPolicyRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询延停策略修改记录
       *
       * @param request GetShutdownPolicyRecordRequest
       * @return GetShutdownPolicyRecordResponse
       */
      Models::GetShutdownPolicyRecordResponse getShutdownPolicyRecord(const Models::GetShutdownPolicyRecordRequest &request);

      /**
       * @summary Query all the Unassociated Customer.
       *
       * @param request GetUnassociatedCustomerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUnassociatedCustomerResponse
       */
      Models::GetUnassociatedCustomerResponse getUnassociatedCustomerWithOptions(const Models::GetUnassociatedCustomerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query all the Unassociated Customer.
       *
       * @param request GetUnassociatedCustomerRequest
       * @return GetUnassociatedCustomerResponse
       */
      Models::GetUnassociatedCustomerResponse getUnassociatedCustomer(const Models::GetUnassociatedCustomerRequest &request);

      /**
       * @summary Initiate the Partner registration invitation.
       *
       * @description The current API request rate for the Cloud Product has not been disclosed.
       *
       * @param request InviteSubAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InviteSubAccountResponse
       */
      Models::InviteSubAccountResponse inviteSubAccountWithOptions(const Models::InviteSubAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiate the Partner registration invitation.
       *
       * @description The current API request rate for the Cloud Product has not been disclosed.
       *
       * @param request InviteSubAccountRequest
       * @return InviteSubAccountResponse
       */
      Models::InviteSubAccountResponse inviteSubAccount(const Models::InviteSubAccountRequest &request);

      /**
       * @summary 发放优惠券
       *
       * @param request IssueCouponForCustomerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IssueCouponForCustomerResponse
       */
      Models::IssueCouponForCustomerResponse issueCouponForCustomerWithOptions(const Models::IssueCouponForCustomerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发放优惠券
       *
       * @param request IssueCouponForCustomerRequest
       * @return IssueCouponForCustomerResponse
       */
      Models::IssueCouponForCustomerResponse issueCouponForCustomer(const Models::IssueCouponForCustomerRequest &request);

      /**
       * @summary This function is available for all Distributors. It displays the corresponding region code information based on the operable countries as agreed in the Distributor\\"s contract.
       *
       * @description The current API request rate for cloud products has not been disclosed.
       *
       * @param request ListCountriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCountriesResponse
       */
      Models::ListCountriesResponse listCountriesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This function is available for all Distributors. It displays the corresponding region code information based on the operable countries as agreed in the Distributor\\"s contract.
       *
       * @description The current API request rate for cloud products has not been disclosed.
       *
       * @return ListCountriesResponse
       */
      Models::ListCountriesResponse listCountries();

      /**
       * @summary 优惠券使用量列表查询
       *
       * @param request ListCouponUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCouponUsageResponse
       */
      Models::ListCouponUsageResponse listCouponUsageWithOptions(const Models::ListCouponUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 优惠券使用量列表查询
       *
       * @param request ListCouponUsageRequest
       * @return ListCouponUsageResponse
       */
      Models::ListCouponUsageResponse listCouponUsage(const Models::ListCouponUsageRequest &request);

      /**
       * @summary 通用查询导出任务列表
       *
       * @param request ListExportTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExportTasksResponse
       */
      Models::ListExportTasksResponse listExportTasksWithOptions(const Models::ListExportTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通用查询导出任务列表
       *
       * @param request ListExportTasksRequest
       * @return ListExportTasksResponse
       */
      Models::ListExportTasksResponse listExportTasks(const Models::ListExportTasksRequest &request);

      /**
       * @summary 额度冲减明细列表
       *
       * @param request QueryReversedDeductionHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryReversedDeductionHistoryResponse
       */
      Models::QueryReversedDeductionHistoryResponse queryReversedDeductionHistoryWithOptions(const Models::QueryReversedDeductionHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 额度冲减明细列表
       *
       * @param request QueryReversedDeductionHistoryRequest
       * @return QueryReversedDeductionHistoryResponse
       */
      Models::QueryReversedDeductionHistoryResponse queryReversedDeductionHistory(const Models::QueryReversedDeductionHistoryRequest &request);

      /**
       * @summary Check the result of export quota list as a Distribution Customer from International Site. Only available on International Site.
       *
       * @description Caller must be a Partner from International Site, either Distribution or Reseller will do.
       *
       * @param request QuotaListExportPagedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuotaListExportPagedResponse
       */
      Models::QuotaListExportPagedResponse quotaListExportPagedWithOptions(const Models::QuotaListExportPagedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check the result of export quota list as a Distribution Customer from International Site. Only available on International Site.
       *
       * @description Caller must be a Partner from International Site, either Distribution or Reseller will do.
       *
       * @param request QuotaListExportPagedRequest
       * @return QuotaListExportPagedResponse
       */
      Models::QuotaListExportPagedResponse quotaListExportPaged(const Models::QuotaListExportPagedRequest &request);

      /**
       * @summary Resend invitation email.
       *
       * @param request ResendEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResendEmailResponse
       */
      Models::ResendEmailResponse resendEmailWithOptions(const Models::ResendEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resend invitation email.
       *
       * @param request ResendEmailRequest
       * @return ResendEmailResponse
       */
      Models::ResendEmailResponse resendEmail(const Models::ResendEmailRequest &request);

      /**
       * @summary This function is designed for Sub Account information maintenance, including Nickname and Remark.
       *
       * @param request SetAccountInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAccountInfoResponse
       */
      Models::SetAccountInfoResponse setAccountInfoWithOptions(const Models::SetAccountInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This function is designed for Sub Account information maintenance, including Nickname and Remark.
       *
       * @param request SetAccountInfoRequest
       * @return SetAccountInfoResponse
       */
      Models::SetAccountInfoResponse setAccountInfo(const Models::SetAccountInfoRequest &request);

      /**
       * @summary Set Credit Line for Distribution Customers. This function is only available for Resellers and Distributors.
       *
       * @param request SetCreditLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCreditLineResponse
       */
      Models::SetCreditLineResponse setCreditLineWithOptions(const Models::SetCreditLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set Credit Line for Distribution Customers. This function is only available for Resellers and Distributors.
       *
       * @param request SetCreditLineRequest
       * @return SetCreditLineResponse
       */
      Models::SetCreditLineResponse setCreditLine(const Models::SetCreditLineRequest &request);

      /**
       * @summary You can use this API to set the threshold for the use of credit control. When the customer credit control reaches below the threshold, it will pass through the notification email distributor. This feature is for Reseller and Distributor only.
       *
       * @param request SetWarningThresholdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetWarningThresholdResponse
       */
      Models::SetWarningThresholdResponse setWarningThresholdWithOptions(const Models::SetWarningThresholdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can use this API to set the threshold for the use of credit control. When the customer credit control reaches below the threshold, it will pass through the notification email distributor. This feature is for Reseller and Distributor only.
       *
       * @param request SetWarningThresholdRequest
       * @return SetWarningThresholdResponse
       */
      Models::SetWarningThresholdResponse setWarningThreshold(const Models::SetWarningThresholdRequest &request);

      /**
       * @summary Generates the subscription to multi-level bills as an Alibaba Cloud eco-partner.
       *
       * @description *   Make sure that you are a distributor of the Alibaba Cloud international ecosystem.
       * *   You can call this operation to subscribe to only one type of bill at a time.
       * *   After the subscription to a type of bill is generated, the bill for the previous day is pushed on a daily basis from the next day. On the fifth day of each month, the full-data bill for the previous month is pushed.
       * *   A daily bill may be delayed. The delayed bill is pushed the next day after it is generated. The delayed bill may contain the bill data that is delayed until the previous day. We recommend that you query the full-data bill for the previous month at the beginning of each month.
       * *   Your account must be granted the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/?spm=api-workbench.API%20Document.0.0.68c71e0fhmTSJp#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission.
       * *   The following file name formats are supported for bills:
       * ```
       * BillingItemDetailForBillingPeriod
       *   
       * File name format of a daily bill: UID_PartnerBillingItemDetail_YYYYMMDD_SquenceNo_fileNo. Example: 169**_BillingItemDetail_20190310_0001_01. 
       *   
       * File name format of a monthly full-data bill: UID_PartnerBillingItemDetail_YYYYMM_SquenceNo_fileNo. Example: 169**_BillingItemDetail_201903_0001_01. 
       * InstanceDetailForBillingPeriod
       *  
       *  File name format of a daily bill: UID_PartnerInstanceDetail_YYYYMMDD_SquenceNo_fileNo. Example: 169**_InstanceDetail_20190310_0001_01. 
       *   
       * File name format of a monthly full-data bill: UID_PartnerInstanceDetail_YYYYMM_SquenceNo_fileNo. Example: 169**_InstanceDetail_201903_1999-0001_01. 
       * BillingItemDetailMonthly
       *   
       * File name format of a daily bill: UID_PartnerBillingItemDetailMonthly_YYYYMM_SquenceNo_fileNo. Example: 169**_BillingItemDetailMonthly_201903_0001_01. This bill contains the bill data that is generated from the beginning of the current month to the fifth day of the next month. 
       * InstanceDetailMonthly
       *   
       * File name format of a daily bill: UID_PartnerInstanceDetailMonthly_YYYYMM_SquenceNo_fileNo. Example: 169**_InstanceDetailMonthly_201903_0001_01. This bill contains the bill data that is generated from the beginning of the current month to the fifth day of the next month. 
       * The fileNo field exists only when the number of bill rows reaches the maximum rows in a single bill file and the bill is split into multiple files.
       * ```
       * **This topic is published only on the international site (alibabacloud.com).
       *
       * @param request SubscriptionBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubscriptionBillResponse
       */
      Models::SubscriptionBillResponse subscriptionBillWithOptions(const Models::SubscriptionBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates the subscription to multi-level bills as an Alibaba Cloud eco-partner.
       *
       * @description *   Make sure that you are a distributor of the Alibaba Cloud international ecosystem.
       * *   You can call this operation to subscribe to only one type of bill at a time.
       * *   After the subscription to a type of bill is generated, the bill for the previous day is pushed on a daily basis from the next day. On the fifth day of each month, the full-data bill for the previous month is pushed.
       * *   A daily bill may be delayed. The delayed bill is pushed the next day after it is generated. The delayed bill may contain the bill data that is delayed until the previous day. We recommend that you query the full-data bill for the previous month at the beginning of each month.
       * *   Your account must be granted the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/?spm=api-workbench.API%20Document.0.0.68c71e0fhmTSJp#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission.
       * *   The following file name formats are supported for bills:
       * ```
       * BillingItemDetailForBillingPeriod
       *   
       * File name format of a daily bill: UID_PartnerBillingItemDetail_YYYYMMDD_SquenceNo_fileNo. Example: 169**_BillingItemDetail_20190310_0001_01. 
       *   
       * File name format of a monthly full-data bill: UID_PartnerBillingItemDetail_YYYYMM_SquenceNo_fileNo. Example: 169**_BillingItemDetail_201903_0001_01. 
       * InstanceDetailForBillingPeriod
       *  
       *  File name format of a daily bill: UID_PartnerInstanceDetail_YYYYMMDD_SquenceNo_fileNo. Example: 169**_InstanceDetail_20190310_0001_01. 
       *   
       * File name format of a monthly full-data bill: UID_PartnerInstanceDetail_YYYYMM_SquenceNo_fileNo. Example: 169**_InstanceDetail_201903_1999-0001_01. 
       * BillingItemDetailMonthly
       *   
       * File name format of a daily bill: UID_PartnerBillingItemDetailMonthly_YYYYMM_SquenceNo_fileNo. Example: 169**_BillingItemDetailMonthly_201903_0001_01. This bill contains the bill data that is generated from the beginning of the current month to the fifth day of the next month. 
       * InstanceDetailMonthly
       *   
       * File name format of a daily bill: UID_PartnerInstanceDetailMonthly_YYYYMM_SquenceNo_fileNo. Example: 169**_InstanceDetailMonthly_201903_0001_01. This bill contains the bill data that is generated from the beginning of the current month to the fifth day of the next month. 
       * The fileNo field exists only when the number of bill rows reaches the maximum rows in a single bill file and the bill is split into multiple files.
       * ```
       * **This topic is published only on the international site (alibabacloud.com).
       *
       * @param request SubscriptionBillRequest
       * @return SubscriptionBillResponse
       */
      Models::SubscriptionBillResponse subscriptionBill(const Models::SubscriptionBillRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
