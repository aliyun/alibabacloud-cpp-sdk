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
       * @summary 财务单元实例重分配
       *
       * @param tmpReq AllocateCostCenterResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateCostCenterResourceResponse
       */
      Models::AllocateCostCenterResourceResponse allocateCostCenterResourceWithOptions(const Models::AllocateCostCenterResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 财务单元实例重分配
       *
       * @param request AllocateCostCenterResourceRequest
       * @return AllocateCostCenterResourceResponse
       */
      Models::AllocateCostCenterResourceResponse allocateCostCenterResource(const Models::AllocateCostCenterResourceRequest &request);

      /**
       * @summary 取消资金账户低额预警
       *
       * @param request CancelFundAccountLowAvailableAmountAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelFundAccountLowAvailableAmountAlarmResponse
       */
      Models::CancelFundAccountLowAvailableAmountAlarmResponse cancelFundAccountLowAvailableAmountAlarmWithOptions(const Models::CancelFundAccountLowAvailableAmountAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消资金账户低额预警
       *
       * @param request CancelFundAccountLowAvailableAmountAlarmRequest
       * @return CancelFundAccountLowAvailableAmountAlarmResponse
       */
      Models::CancelFundAccountLowAvailableAmountAlarmResponse cancelFundAccountLowAvailableAmountAlarm(const Models::CancelFundAccountLowAvailableAmountAlarmRequest &request);

      /**
       * @summary 创建财务单元
       *
       * @param tmpReq CreateCostCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCostCenterResponse
       */
      Models::CreateCostCenterResponse createCostCenterWithOptions(const Models::CreateCostCenterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建财务单元
       *
       * @param request CreateCostCenterRequest
       * @return CreateCostCenterResponse
       */
      Models::CreateCostCenterResponse createCostCenter(const Models::CreateCostCenterRequest &request);

      /**
       * @summary 新建财务单元规则
       *
       * @param tmpReq CreateCostCenterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCostCenterRuleResponse
       */
      Models::CreateCostCenterRuleResponse createCostCenterRuleWithOptions(const Models::CreateCostCenterRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建财务单元规则
       *
       * @param request CreateCostCenterRuleRequest
       * @return CreateCostCenterRuleResponse
       */
      Models::CreateCostCenterRuleResponse createCostCenterRule(const Models::CreateCostCenterRuleRequest &request);

      /**
       * @summary 创建资金账户付款关系
       *
       * @param tmpReq CreateFundAccountPayRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFundAccountPayRelationResponse
       */
      Models::CreateFundAccountPayRelationResponse createFundAccountPayRelationWithOptions(const Models::CreateFundAccountPayRelationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建资金账户付款关系
       *
       * @param request CreateFundAccountPayRelationRequest
       * @return CreateFundAccountPayRelationResponse
       */
      Models::CreateFundAccountPayRelationResponse createFundAccountPayRelation(const Models::CreateFundAccountPayRelationRequest &request);

      /**
       * @summary 创建资金账户划拨/回收
       *
       * @param request CreateFundAccountTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFundAccountTransferResponse
       */
      Models::CreateFundAccountTransferResponse createFundAccountTransferWithOptions(const Models::CreateFundAccountTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建资金账户划拨/回收
       *
       * @param request CreateFundAccountTransferRequest
       * @return CreateFundAccountTransferResponse
       */
      Models::CreateFundAccountTransferResponse createFundAccountTransfer(const Models::CreateFundAccountTransferRequest &request);

      /**
       * @summary 申请发票
       *
       * @param tmpReq CreateInvoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInvoiceResponse
       */
      Models::CreateInvoiceResponse createInvoiceWithOptions(const Models::CreateInvoiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请发票
       *
       * @param request CreateInvoiceRequest
       * @return CreateInvoiceResponse
       */
      Models::CreateInvoiceResponse createInvoice(const Models::CreateInvoiceRequest &request);

      /**
       * @summary 创建账单订阅
       *
       * @param request CreateReportDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReportDefinitionResponse
       */
      Models::CreateReportDefinitionResponse createReportDefinitionWithOptions(const Models::CreateReportDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建账单订阅
       *
       * @param request CreateReportDefinitionRequest
       * @return CreateReportDefinitionResponse
       */
      Models::CreateReportDefinitionResponse createReportDefinition(const Models::CreateReportDefinitionRequest &request);

      /**
       * @summary 删除财务单元
       *
       * @param request DeleteCostCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCostCenterResponse
       */
      Models::DeleteCostCenterResponse deleteCostCenterWithOptions(const Models::DeleteCostCenterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除财务单元
       *
       * @param request DeleteCostCenterRequest
       * @return DeleteCostCenterResponse
       */
      Models::DeleteCostCenterResponse deleteCostCenter(const Models::DeleteCostCenterRequest &request);

      /**
       * @summary 删除财务单元规则
       *
       * @param tmpReq DeleteCostCenterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCostCenterRuleResponse
       */
      Models::DeleteCostCenterRuleResponse deleteCostCenterRuleWithOptions(const Models::DeleteCostCenterRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除财务单元规则
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
       * @summary 取消账单订阅
       *
       * @param request DeleteReportDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteReportDefinitionResponse
       */
      Models::DeleteReportDefinitionResponse deleteReportDefinitionWithOptions(const Models::DeleteReportDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消账单订阅
       *
       * @param request DeleteReportDefinitionRequest
       * @return DeleteReportDefinitionResponse
       */
      Models::DeleteReportDefinitionResponse deleteReportDefinition(const Models::DeleteReportDefinitionRequest &request);

      /**
       * @summary 查询优惠券列表
       *
       * @param tmpReq DescribeCouponRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCouponResponse
       */
      Models::DescribeCouponResponse describeCouponWithOptions(const Models::DescribeCouponRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询优惠券列表
       *
       * @param request DescribeCouponRequest
       * @return DescribeCouponResponse
       */
      Models::DescribeCouponResponse describeCoupon(const Models::DescribeCouponRequest &request);

      /**
       * @summary 查询优惠券可用商品列表
       *
       * @param tmpReq DescribeCouponItemListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCouponItemListResponse
       */
      Models::DescribeCouponItemListResponse describeCouponItemListWithOptions(const Models::DescribeCouponItemListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询优惠券可用商品列表
       *
       * @param request DescribeCouponItemListRequest
       * @return DescribeCouponItemListResponse
       */
      Models::DescribeCouponItemListResponse describeCouponItemList(const Models::DescribeCouponItemListRequest &request);

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
       * @summary 查询资金账户可用金
       *
       * @param request GetFundAccountAvailableAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFundAccountAvailableAmountResponse
       */
      Models::GetFundAccountAvailableAmountResponse getFundAccountAvailableAmountWithOptions(const Models::GetFundAccountAvailableAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资金账户可用金
       *
       * @param request GetFundAccountAvailableAmountRequest
       * @return GetFundAccountAvailableAmountResponse
       */
      Models::GetFundAccountAvailableAmountResponse getFundAccountAvailableAmount(const Models::GetFundAccountAvailableAmountRequest &request);

      /**
       * @summary 查询资金账户可分配信控额度
       *
       * @param request GetFundAccountCanAllocateCreditAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFundAccountCanAllocateCreditAmountResponse
       */
      Models::GetFundAccountCanAllocateCreditAmountResponse getFundAccountCanAllocateCreditAmountWithOptions(const Models::GetFundAccountCanAllocateCreditAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资金账户可分配信控额度
       *
       * @param request GetFundAccountCanAllocateCreditAmountRequest
       * @return GetFundAccountCanAllocateCreditAmountResponse
       */
      Models::GetFundAccountCanAllocateCreditAmountResponse getFundAccountCanAllocateCreditAmount(const Models::GetFundAccountCanAllocateCreditAmountRequest &request);

      /**
       * @summary 查询资金账户可回收金额
       *
       * @param request GetFundAccountCanRecycleAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFundAccountCanRecycleAmountResponse
       */
      Models::GetFundAccountCanRecycleAmountResponse getFundAccountCanRecycleAmountWithOptions(const Models::GetFundAccountCanRecycleAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资金账户可回收金额
       *
       * @param request GetFundAccountCanRecycleAmountRequest
       * @return GetFundAccountCanRecycleAmountResponse
       */
      Models::GetFundAccountCanRecycleAmountResponse getFundAccountCanRecycleAmount(const Models::GetFundAccountCanRecycleAmountRequest &request);

      /**
       * @summary 查询资金账户的可转出金额
       *
       * @param request GetFundAccountCanTransferAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFundAccountCanTransferAmountResponse
       */
      Models::GetFundAccountCanTransferAmountResponse getFundAccountCanTransferAmountWithOptions(const Models::GetFundAccountCanTransferAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资金账户的可转出金额
       *
       * @param request GetFundAccountCanTransferAmountRequest
       * @return GetFundAccountCanTransferAmountResponse
       */
      Models::GetFundAccountCanTransferAmountResponse getFundAccountCanTransferAmount(const Models::GetFundAccountCanTransferAmountRequest &request);

      /**
       * @summary 查询资金账户可提现金额
       *
       * @param request GetFundAccountCanWithdrawAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFundAccountCanWithdrawAmountResponse
       */
      Models::GetFundAccountCanWithdrawAmountResponse getFundAccountCanWithdrawAmountWithOptions(const Models::GetFundAccountCanWithdrawAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资金账户可提现金额
       *
       * @param request GetFundAccountCanWithdrawAmountRequest
       * @return GetFundAccountCanWithdrawAmountResponse
       */
      Models::GetFundAccountCanWithdrawAmountResponse getFundAccountCanWithdrawAmount(const Models::GetFundAccountCanWithdrawAmountRequest &request);

      /**
       * @summary 查询资金账户低额预警
       *
       * @param request GetFundAccountLowAvailableAmountAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFundAccountLowAvailableAmountAlarmResponse
       */
      Models::GetFundAccountLowAvailableAmountAlarmResponse getFundAccountLowAvailableAmountAlarmWithOptions(const Models::GetFundAccountLowAvailableAmountAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资金账户低额预警
       *
       * @param request GetFundAccountLowAvailableAmountAlarmRequest
       * @return GetFundAccountLowAvailableAmountAlarmResponse
       */
      Models::GetFundAccountLowAvailableAmountAlarmResponse getFundAccountLowAvailableAmountAlarm(const Models::GetFundAccountLowAvailableAmountAlarmRequest &request);

      /**
       * @summary 查询资金账户收支明细
       *
       * @param tmpReq GetFundAccountTransactionDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFundAccountTransactionDetailsResponse
       */
      Models::GetFundAccountTransactionDetailsResponse getFundAccountTransactionDetailsWithOptions(const Models::GetFundAccountTransactionDetailsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资金账户收支明细
       *
       * @param request GetFundAccountTransactionDetailsRequest
       * @return GetFundAccountTransactionDetailsResponse
       */
      Models::GetFundAccountTransactionDetailsResponse getFundAccountTransactionDetails(const Models::GetFundAccountTransactionDetailsRequest &request);

      /**
       * @summary 订单详情查询
       *
       * @param request GetOrderDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrderDetailResponse
       */
      Models::GetOrderDetailResponse getOrderDetailWithOptions(const Models::GetOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 订单详情查询
       *
       * @param request GetOrderDetailRequest
       * @return GetOrderDetailResponse
       */
      Models::GetOrderDetailResponse getOrderDetail(const Models::GetOrderDetailRequest &request);

      /**
       * @summary 订单列表查询
       *
       * @param request GetOrdersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrdersResponse
       */
      Models::GetOrdersResponse getOrdersWithOptions(const Models::GetOrdersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 订单列表查询
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
       * @summary 查询资金账户列表
       *
       * @param request ListFundAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFundAccountResponse
       */
      Models::ListFundAccountResponse listFundAccountWithOptions(const Models::ListFundAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资金账户列表
       *
       * @param request ListFundAccountRequest
       * @return ListFundAccountResponse
       */
      Models::ListFundAccountResponse listFundAccount(const Models::ListFundAccountRequest &request);

      /**
       * @summary 查询资金账户的付款关系
       *
       * @param request ListFundAccountPayRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFundAccountPayRelationResponse
       */
      Models::ListFundAccountPayRelationResponse listFundAccountPayRelationWithOptions(const Models::ListFundAccountPayRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资金账户的付款关系
       *
       * @param request ListFundAccountPayRelationRequest
       * @return ListFundAccountPayRelationResponse
       */
      Models::ListFundAccountPayRelationResponse listFundAccountPayRelation(const Models::ListFundAccountPayRelationRequest &request);

      /**
       * @summary 对客OpenAPI开票对象查询
       *
       * @param tmpReq ListInvoiceCandidateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInvoiceCandidateResponse
       */
      Models::ListInvoiceCandidateResponse listInvoiceCandidateWithOptions(const Models::ListInvoiceCandidateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对客OpenAPI开票对象查询
       *
       * @param request ListInvoiceCandidateRequest
       * @return ListInvoiceCandidateResponse
       */
      Models::ListInvoiceCandidateResponse listInvoiceCandidate(const Models::ListInvoiceCandidateRequest &request);

      /**
       * @summary 发票抬头查询服务
       *
       * @param request ListInvoiceTitleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInvoiceTitleResponse
       */
      Models::ListInvoiceTitleResponse listInvoiceTitleWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发票抬头查询服务
       *
       * @return ListInvoiceTitleResponse
       */
      Models::ListInvoiceTitleResponse listInvoiceTitle();

      /**
       * @summary 查看已订阅的报告列表
       *
       * @param request ListReportDefinitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListReportDefinitionsResponse
       */
      Models::ListReportDefinitionsResponse listReportDefinitionsWithOptions(const Models::ListReportDefinitionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看已订阅的报告列表
       *
       * @param request ListReportDefinitionsRequest
       * @return ListReportDefinitionsResponse
       */
      Models::ListReportDefinitionsResponse listReportDefinitions(const Models::ListReportDefinitionsRequest &request);

      /**
       * @summary 修改财务单元
       *
       * @param tmpReq ModifyCostCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCostCenterResponse
       */
      Models::ModifyCostCenterResponse modifyCostCenterWithOptions(const Models::ModifyCostCenterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改财务单元
       *
       * @param request ModifyCostCenterRequest
       * @return ModifyCostCenterResponse
       */
      Models::ModifyCostCenterResponse modifyCostCenter(const Models::ModifyCostCenterRequest &request);

      /**
       * @summary 修改财务单元规则
       *
       * @param tmpReq ModifyCostCenterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCostCenterRuleResponse
       */
      Models::ModifyCostCenterRuleResponse modifyCostCenterRuleWithOptions(const Models::ModifyCostCenterRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改财务单元规则
       *
       * @param request ModifyCostCenterRuleRequest
       * @return ModifyCostCenterRuleResponse
       */
      Models::ModifyCostCenterRuleResponse modifyCostCenterRule(const Models::ModifyCostCenterRuleRequest &request);

      /**
       * @summary 查询财务单元
       *
       * @param tmpReq QueryCostCenterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCostCenterResponse
       */
      Models::QueryCostCenterResponse queryCostCenterWithOptions(const Models::QueryCostCenterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询财务单元
       *
       * @param request QueryCostCenterRequest
       * @return QueryCostCenterResponse
       */
      Models::QueryCostCenterResponse queryCostCenter(const Models::QueryCostCenterRequest &request);

      /**
       * @summary 查询财务单元下资源信息
       *
       * @param request QueryCostCenterResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCostCenterResourceResponse
       */
      Models::QueryCostCenterResourceResponse queryCostCenterResourceWithOptions(const Models::QueryCostCenterResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询财务单元下资源信息
       *
       * @param request QueryCostCenterResourceRequest
       * @return QueryCostCenterResourceResponse
       */
      Models::QueryCostCenterResourceResponse queryCostCenterResource(const Models::QueryCostCenterResourceRequest &request);

      /**
       * @summary 查询财务单元规则
       *
       * @param request QueryCostCenterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCostCenterRuleResponse
       */
      Models::QueryCostCenterRuleResponse queryCostCenterRuleWithOptions(const Models::QueryCostCenterRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询财务单元规则
       *
       * @param request QueryCostCenterRuleRequest
       * @return QueryCostCenterRuleResponse
       */
      Models::QueryCostCenterRuleResponse queryCostCenterRule(const Models::QueryCostCenterRuleRequest &request);

      /**
       * @summary 查询财务单元分摊规则
       *
       * @param request QueryCostCenterShareRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCostCenterShareRuleResponse
       */
      Models::QueryCostCenterShareRuleResponse queryCostCenterShareRuleWithOptions(const Models::QueryCostCenterShareRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询财务单元分摊规则
       *
       * @param request QueryCostCenterShareRuleRequest
       * @return QueryCostCenterShareRuleResponse
       */
      Models::QueryCostCenterShareRuleResponse queryCostCenterShareRule(const Models::QueryCostCenterShareRuleRequest &request);

      /**
       * @summary 修改财务单元分摊规则
       *
       * @param tmpReq SaveCostCenterShareRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveCostCenterShareRuleResponse
       */
      Models::SaveCostCenterShareRuleResponse saveCostCenterShareRuleWithOptions(const Models::SaveCostCenterShareRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改财务单元分摊规则
       *
       * @param request SaveCostCenterShareRuleRequest
       * @return SaveCostCenterShareRuleResponse
       */
      Models::SaveCostCenterShareRuleResponse saveCostCenterShareRule(const Models::SaveCostCenterShareRuleRequest &request);

      /**
       * @summary 设置资金账户的信控限额
       *
       * @param request SetFundAccountCreditAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetFundAccountCreditAmountResponse
       */
      Models::SetFundAccountCreditAmountResponse setFundAccountCreditAmountWithOptions(const Models::SetFundAccountCreditAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置资金账户的信控限额
       *
       * @param request SetFundAccountCreditAmountRequest
       * @return SetFundAccountCreditAmountResponse
       */
      Models::SetFundAccountCreditAmountResponse setFundAccountCreditAmount(const Models::SetFundAccountCreditAmountRequest &request);

      /**
       * @summary 设置资金账户低额预警
       *
       * @param request SetFundAccountLowAvailableAmountAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetFundAccountLowAvailableAmountAlarmResponse
       */
      Models::SetFundAccountLowAvailableAmountAlarmResponse setFundAccountLowAvailableAmountAlarmWithOptions(const Models::SetFundAccountLowAvailableAmountAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置资金账户低额预警
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
  };
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
