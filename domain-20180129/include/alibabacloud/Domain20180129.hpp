// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DOMAIN20180129_HPP_
#define ALIBABACLOUD_DOMAIN20180129_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Domain20180129Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Domain20180129.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 确认任务结果
       *
       * @param request AcknowledgeTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcknowledgeTaskResultResponse
       */
      Models::AcknowledgeTaskResultResponse acknowledgeTaskResultWithOptions(const Models::AcknowledgeTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 确认任务结果
       *
       * @param request AcknowledgeTaskResultRequest
       * @return AcknowledgeTaskResultResponse
       */
      Models::AcknowledgeTaskResultResponse acknowledgeTaskResult(const Models::AcknowledgeTaskResultRequest &request);

      /**
       * @summary 通过关键字进行批量模糊匹配
       *
       * @param request BatchFuzzyMatchDomainSensitiveWordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchFuzzyMatchDomainSensitiveWordResponse
       */
      Models::BatchFuzzyMatchDomainSensitiveWordResponse batchFuzzyMatchDomainSensitiveWordWithOptions(const Models::BatchFuzzyMatchDomainSensitiveWordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过关键字进行批量模糊匹配
       *
       * @param request BatchFuzzyMatchDomainSensitiveWordRequest
       * @return BatchFuzzyMatchDomainSensitiveWordResponse
       */
      Models::BatchFuzzyMatchDomainSensitiveWordResponse batchFuzzyMatchDomainSensitiveWord(const Models::BatchFuzzyMatchDomainSensitiveWordRequest &request);

      /**
       * @summary Cancels real-name verification for a domain name.
       *
       * @param request CancelDomainVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDomainVerificationResponse
       */
      Models::CancelDomainVerificationResponse cancelDomainVerificationWithOptions(const Models::CancelDomainVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels real-name verification for a domain name.
       *
       * @param request CancelDomainVerificationRequest
       * @return CancelDomainVerificationResponse
       */
      Models::CancelDomainVerificationResponse cancelDomainVerification(const Models::CancelDomainVerificationRequest &request);

      /**
       * @summary 取消审核
       *
       * @param request CancelOperationAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelOperationAuditResponse
       */
      Models::CancelOperationAuditResponse cancelOperationAuditWithOptions(const Models::CancelOperationAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消审核
       *
       * @param request CancelOperationAuditRequest
       * @return CancelOperationAuditResponse
       */
      Models::CancelOperationAuditResponse cancelOperationAudit(const Models::CancelOperationAuditRequest &request);

      /**
       * @param request CancelQualificationVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelQualificationVerificationResponse
       */
      Models::CancelQualificationVerificationResponse cancelQualificationVerificationWithOptions(const Models::CancelQualificationVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CancelQualificationVerificationRequest
       * @return CancelQualificationVerificationResponse
       */
      Models::CancelQualificationVerificationResponse cancelQualificationVerification(const Models::CancelQualificationVerificationRequest &request);

      /**
       * @param request CancelTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTaskWithOptions(const Models::CancelTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CancelTaskRequest
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTask(const Models::CancelTaskRequest &request);

      /**
       * @summary 修改实例所在资源组
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例所在资源组
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @param request CheckDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDomainResponse
       */
      Models::CheckDomainResponse checkDomainWithOptions(const Models::CheckDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CheckDomainRequest
       * @return CheckDomainResponse
       */
      Models::CheckDomainResponse checkDomain(const Models::CheckDomainRequest &request);

      /**
       * @param request CheckDomainSunriseClaimRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDomainSunriseClaimResponse
       */
      Models::CheckDomainSunriseClaimResponse checkDomainSunriseClaimWithOptions(const Models::CheckDomainSunriseClaimRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CheckDomainSunriseClaimRequest
       * @return CheckDomainSunriseClaimResponse
       */
      Models::CheckDomainSunriseClaimResponse checkDomainSunriseClaim(const Models::CheckDomainSunriseClaimRequest &request);

      /**
       * @summary 校验在售国际一口价域名状态和询价
       *
       * @param request CheckIntlFixPriceDomainStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckIntlFixPriceDomainStatusResponse
       */
      Models::CheckIntlFixPriceDomainStatusResponse checkIntlFixPriceDomainStatusWithOptions(const Models::CheckIntlFixPriceDomainStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验在售国际一口价域名状态和询价
       *
       * @param request CheckIntlFixPriceDomainStatusRequest
       * @return CheckIntlFixPriceDomainStatusResponse
       */
      Models::CheckIntlFixPriceDomainStatusResponse checkIntlFixPriceDomainStatus(const Models::CheckIntlFixPriceDomainStatusRequest &request);

      /**
       * @param request CheckMaxYearOfServerLockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckMaxYearOfServerLockResponse
       */
      Models::CheckMaxYearOfServerLockResponse checkMaxYearOfServerLockWithOptions(const Models::CheckMaxYearOfServerLockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CheckMaxYearOfServerLockRequest
       * @return CheckMaxYearOfServerLockResponse
       */
      Models::CheckMaxYearOfServerLockResponse checkMaxYearOfServerLock(const Models::CheckMaxYearOfServerLockRequest &request);

      /**
       * @param request CheckProcessingServerLockApplyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckProcessingServerLockApplyResponse
       */
      Models::CheckProcessingServerLockApplyResponse checkProcessingServerLockApplyWithOptions(const Models::CheckProcessingServerLockApplyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CheckProcessingServerLockApplyRequest
       * @return CheckProcessingServerLockApplyResponse
       */
      Models::CheckProcessingServerLockApplyResponse checkProcessingServerLockApply(const Models::CheckProcessingServerLockApplyRequest &request);

      /**
       * @param request CheckTransferInFeasibilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckTransferInFeasibilityResponse
       */
      Models::CheckTransferInFeasibilityResponse checkTransferInFeasibilityWithOptions(const Models::CheckTransferInFeasibilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CheckTransferInFeasibilityRequest
       * @return CheckTransferInFeasibilityResponse
       */
      Models::CheckTransferInFeasibilityResponse checkTransferInFeasibility(const Models::CheckTransferInFeasibilityRequest &request);

      /**
       * @param request ConfirmTransferInEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmTransferInEmailResponse
       */
      Models::ConfirmTransferInEmailResponse confirmTransferInEmailWithOptions(const Models::ConfirmTransferInEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ConfirmTransferInEmailRequest
       * @return ConfirmTransferInEmailResponse
       */
      Models::ConfirmTransferInEmailResponse confirmTransferInEmail(const Models::ConfirmTransferInEmailRequest &request);

      /**
       * @summary 创建国际一口价订单
       *
       * @param request CreateIntlFixedPriceDomainOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIntlFixedPriceDomainOrderResponse
       */
      Models::CreateIntlFixedPriceDomainOrderResponse createIntlFixedPriceDomainOrderWithOptions(const Models::CreateIntlFixedPriceDomainOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建国际一口价订单
       *
       * @param request CreateIntlFixedPriceDomainOrderRequest
       * @return CreateIntlFixedPriceDomainOrderResponse
       */
      Models::CreateIntlFixedPriceDomainOrderResponse createIntlFixedPriceDomainOrder(const Models::CreateIntlFixedPriceDomainOrderRequest &request);

      /**
       * @summary 批量删除联系人模板
       *
       * @param request DeleteContactTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactTemplatesResponse
       */
      Models::DeleteContactTemplatesResponse deleteContactTemplatesWithOptions(const Models::DeleteContactTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除联系人模板
       *
       * @param request DeleteContactTemplatesRequest
       * @return DeleteContactTemplatesResponse
       */
      Models::DeleteContactTemplatesResponse deleteContactTemplates(const Models::DeleteContactTemplatesRequest &request);

      /**
       * @summary 删除域名分组
       *
       * @param request DeleteDomainGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainGroupResponse
       */
      Models::DeleteDomainGroupResponse deleteDomainGroupWithOptions(const Models::DeleteDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除域名分组
       *
       * @param request DeleteDomainGroupRequest
       * @return DeleteDomainGroupResponse
       */
      Models::DeleteDomainGroupResponse deleteDomainGroup(const Models::DeleteDomainGroupRequest &request);

      /**
       * @summary 删除邮箱验证
       *
       * @param request DeleteEmailVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEmailVerificationResponse
       */
      Models::DeleteEmailVerificationResponse deleteEmailVerificationWithOptions(const Models::DeleteEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除邮箱验证
       *
       * @param request DeleteEmailVerificationRequest
       * @return DeleteEmailVerificationResponse
       */
      Models::DeleteEmailVerificationResponse deleteEmailVerification(const Models::DeleteEmailVerificationRequest &request);

      /**
       * @summary 删除联系人模板
       *
       * @param request DeleteRegistrantProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRegistrantProfileResponse
       */
      Models::DeleteRegistrantProfileResponse deleteRegistrantProfileWithOptions(const Models::DeleteRegistrantProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除联系人模板
       *
       * @param request DeleteRegistrantProfileRequest
       * @return DeleteRegistrantProfileResponse
       */
      Models::DeleteRegistrantProfileResponse deleteRegistrantProfile(const Models::DeleteRegistrantProfileRequest &request);

      /**
       * @summary 取消域名特殊业务流程
       *
       * @param request DomainSpecialBizCancelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DomainSpecialBizCancelResponse
       */
      Models::DomainSpecialBizCancelResponse domainSpecialBizCancelWithOptions(const Models::DomainSpecialBizCancelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消域名特殊业务流程
       *
       * @param request DomainSpecialBizCancelRequest
       * @return DomainSpecialBizCancelResponse
       */
      Models::DomainSpecialBizCancelResponse domainSpecialBizCancel(const Models::DomainSpecialBizCancelRequest &request);

      /**
       * @summary 邮箱验证通过
       *
       * @param request EmailVerifiedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EmailVerifiedResponse
       */
      Models::EmailVerifiedResponse emailVerifiedWithOptions(const Models::EmailVerifiedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 邮箱验证通过
       *
       * @param request EmailVerifiedRequest
       * @return EmailVerifiedResponse
       */
      Models::EmailVerifiedResponse emailVerified(const Models::EmailVerifiedRequest &request);

      /**
       * @summary 通过关键字进行模糊匹配
       *
       * @param request FuzzyMatchDomainSensitiveWordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FuzzyMatchDomainSensitiveWordResponse
       */
      Models::FuzzyMatchDomainSensitiveWordResponse fuzzyMatchDomainSensitiveWordWithOptions(const Models::FuzzyMatchDomainSensitiveWordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过关键字进行模糊匹配
       *
       * @param request FuzzyMatchDomainSensitiveWordRequest
       * @return FuzzyMatchDomainSensitiveWordResponse
       */
      Models::FuzzyMatchDomainSensitiveWordResponse fuzzyMatchDomainSensitiveWord(const Models::FuzzyMatchDomainSensitiveWordRequest &request);

      /**
       * @summary 查询国际一口价在售域名列表
       *
       * @param request GetIntlFixPriceDomainListUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIntlFixPriceDomainListUrlResponse
       */
      Models::GetIntlFixPriceDomainListUrlResponse getIntlFixPriceDomainListUrlWithOptions(const Models::GetIntlFixPriceDomainListUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询国际一口价在售域名列表
       *
       * @param request GetIntlFixPriceDomainListUrlRequest
       * @return GetIntlFixPriceDomainListUrlResponse
       */
      Models::GetIntlFixPriceDomainListUrlResponse getIntlFixPriceDomainListUrl(const Models::GetIntlFixPriceDomainListUrlRequest &request);

      /**
       * @param request GetOperationOssUploadPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOperationOssUploadPolicyResponse
       */
      Models::GetOperationOssUploadPolicyResponse getOperationOssUploadPolicyWithOptions(const Models::GetOperationOssUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetOperationOssUploadPolicyRequest
       * @return GetOperationOssUploadPolicyResponse
       */
      Models::GetOperationOssUploadPolicyResponse getOperationOssUploadPolicy(const Models::GetOperationOssUploadPolicyRequest &request);

      /**
       * @param request GetQualificationUploadPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualificationUploadPolicyResponse
       */
      Models::GetQualificationUploadPolicyResponse getQualificationUploadPolicyWithOptions(const Models::GetQualificationUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetQualificationUploadPolicyRequest
       * @return GetQualificationUploadPolicyResponse
       */
      Models::GetQualificationUploadPolicyResponse getQualificationUploadPolicy(const Models::GetQualificationUploadPolicyRequest &request);

      /**
       * @param request ListEmailVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEmailVerificationResponse
       */
      Models::ListEmailVerificationResponse listEmailVerificationWithOptions(const Models::ListEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListEmailVerificationRequest
       * @return ListEmailVerificationResponse
       */
      Models::ListEmailVerificationResponse listEmailVerification(const Models::ListEmailVerificationRequest &request);

      /**
       * @summary Queries information about domain names for which registry locks are enabled.
       *
       * @param request ListServerLockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServerLockResponse
       */
      Models::ListServerLockResponse listServerLockWithOptions(const Models::ListServerLockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about domain names for which registry locks are enabled.
       *
       * @param request ListServerLockRequest
       * @return ListServerLockResponse
       */
      Models::ListServerLockResponse listServerLock(const Models::ListServerLockRequest &request);

      /**
       * @param request LookupTmchNoticeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LookupTmchNoticeResponse
       */
      Models::LookupTmchNoticeResponse lookupTmchNoticeWithOptions(const Models::LookupTmchNoticeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request LookupTmchNoticeRequest
       * @return LookupTmchNoticeResponse
       */
      Models::LookupTmchNoticeResponse lookupTmchNotice(const Models::LookupTmchNoticeRequest &request);

      /**
       * @param request PollTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PollTaskResultResponse
       */
      Models::PollTaskResultResponse pollTaskResultWithOptions(const Models::PollTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PollTaskResultRequest
       * @return PollTaskResultResponse
       */
      Models::PollTaskResultResponse pollTaskResult(const Models::PollTaskResultRequest &request);

      /**
       * @summary 搜索域名列表
       *
       * @param request QueryAdvancedDomainListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAdvancedDomainListResponse
       */
      Models::QueryAdvancedDomainListResponse queryAdvancedDomainListWithOptions(const Models::QueryAdvancedDomainListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 搜索域名列表
       *
       * @param request QueryAdvancedDomainListRequest
       * @return QueryAdvancedDomainListResponse
       */
      Models::QueryAdvancedDomainListResponse queryAdvancedDomainList(const Models::QueryAdvancedDomainListRequest &request);

      /**
       * @param request QueryArtExtensionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryArtExtensionResponse
       */
      Models::QueryArtExtensionResponse queryArtExtensionWithOptions(const Models::QueryArtExtensionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryArtExtensionRequest
       * @return QueryArtExtensionResponse
       */
      Models::QueryArtExtensionResponse queryArtExtension(const Models::QueryArtExtensionRequest &request);

      /**
       * @summary 查询操作记录
       *
       * @param request QueryChangeLogListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryChangeLogListResponse
       */
      Models::QueryChangeLogListResponse queryChangeLogListWithOptions(const Models::QueryChangeLogListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询操作记录
       *
       * @param request QueryChangeLogListRequest
       * @return QueryChangeLogListResponse
       */
      Models::QueryChangeLogListResponse queryChangeLogList(const Models::QueryChangeLogListRequest &request);

      /**
       * @param request QueryContactInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryContactInfoResponse
       */
      Models::QueryContactInfoResponse queryContactInfoWithOptions(const Models::QueryContactInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryContactInfoRequest
       * @return QueryContactInfoResponse
       */
      Models::QueryContactInfoResponse queryContactInfo(const Models::QueryContactInfoRequest &request);

      /**
       * @param request QueryDSRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDSRecordResponse
       */
      Models::QueryDSRecordResponse queryDSRecordWithOptions(const Models::QueryDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryDSRecordRequest
       * @return QueryDSRecordResponse
       */
      Models::QueryDSRecordResponse queryDSRecord(const Models::QueryDSRecordRequest &request);

      /**
       * @param request QueryDnsHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDnsHostResponse
       */
      Models::QueryDnsHostResponse queryDnsHostWithOptions(const Models::QueryDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryDnsHostRequest
       * @return QueryDnsHostResponse
       */
      Models::QueryDnsHostResponse queryDnsHost(const Models::QueryDnsHostRequest &request);

      /**
       * @param request QueryDomainAdminDivisionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainAdminDivisionResponse
       */
      Models::QueryDomainAdminDivisionResponse queryDomainAdminDivisionWithOptions(const Models::QueryDomainAdminDivisionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryDomainAdminDivisionRequest
       * @return QueryDomainAdminDivisionResponse
       */
      Models::QueryDomainAdminDivisionResponse queryDomainAdminDivision(const Models::QueryDomainAdminDivisionRequest &request);

      /**
       * @summary Queries the information about a domain name.
       *
       * @param request QueryDomainByDomainNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainByDomainNameResponse
       */
      Models::QueryDomainByDomainNameResponse queryDomainByDomainNameWithOptions(const Models::QueryDomainByDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a domain name.
       *
       * @param request QueryDomainByDomainNameRequest
       * @return QueryDomainByDomainNameResponse
       */
      Models::QueryDomainByDomainNameResponse queryDomainByDomainName(const Models::QueryDomainByDomainNameRequest &request);

      /**
       * @summary 根据实例id查询域名信息
       *
       * @param request QueryDomainByInstanceIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainByInstanceIdResponse
       */
      Models::QueryDomainByInstanceIdResponse queryDomainByInstanceIdWithOptions(const Models::QueryDomainByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据实例id查询域名信息
       *
       * @param request QueryDomainByInstanceIdRequest
       * @return QueryDomainByInstanceIdResponse
       */
      Models::QueryDomainByInstanceIdResponse queryDomainByInstanceId(const Models::QueryDomainByInstanceIdRequest &request);

      /**
       * @param request QueryDomainGroupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainGroupListResponse
       */
      Models::QueryDomainGroupListResponse queryDomainGroupListWithOptions(const Models::QueryDomainGroupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryDomainGroupListRequest
       * @return QueryDomainGroupListResponse
       */
      Models::QueryDomainGroupListResponse queryDomainGroupList(const Models::QueryDomainGroupListRequest &request);

      /**
       * @summary Queries a list of domain names within your Alibaba Cloud account by page.
       *
       * @param request QueryDomainListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainListResponse
       */
      Models::QueryDomainListResponse queryDomainListWithOptions(const Models::QueryDomainListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of domain names within your Alibaba Cloud account by page.
       *
       * @param request QueryDomainListRequest
       * @return QueryDomainListResponse
       */
      Models::QueryDomainListResponse queryDomainList(const Models::QueryDomainListRequest &request);

      /**
       * @param request QueryDomainRealNameVerificationInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainRealNameVerificationInfoResponse
       */
      Models::QueryDomainRealNameVerificationInfoResponse queryDomainRealNameVerificationInfoWithOptions(const Models::QueryDomainRealNameVerificationInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryDomainRealNameVerificationInfoRequest
       * @return QueryDomainRealNameVerificationInfoResponse
       */
      Models::QueryDomainRealNameVerificationInfoResponse queryDomainRealNameVerificationInfo(const Models::QueryDomainRealNameVerificationInfoRequest &request);

      /**
       * @summary 实时查询域名价格
       *
       * @param tmpReq QueryDomainRealTimePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainRealTimePriceResponse
       */
      Models::QueryDomainRealTimePriceResponse queryDomainRealTimePriceWithOptions(const Models::QueryDomainRealTimePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实时查询域名价格
       *
       * @param request QueryDomainRealTimePriceRequest
       * @return QueryDomainRealTimePriceResponse
       */
      Models::QueryDomainRealTimePriceResponse queryDomainRealTimePrice(const Models::QueryDomainRealTimePriceRequest &request);

      /**
       * @summary 查询域名特殊业务详情
       *
       * @param request QueryDomainSpecialBizDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainSpecialBizDetailResponse
       */
      Models::QueryDomainSpecialBizDetailResponse queryDomainSpecialBizDetailWithOptions(const Models::QueryDomainSpecialBizDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询域名特殊业务详情
       *
       * @param request QueryDomainSpecialBizDetailRequest
       * @return QueryDomainSpecialBizDetailResponse
       */
      Models::QueryDomainSpecialBizDetailResponse queryDomainSpecialBizDetail(const Models::QueryDomainSpecialBizDetailRequest &request);

      /**
       * @summary 通过域名查询域名特殊业务详情
       *
       * @param request QueryDomainSpecialBizInfoByDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainSpecialBizInfoByDomainResponse
       */
      Models::QueryDomainSpecialBizInfoByDomainResponse queryDomainSpecialBizInfoByDomainWithOptions(const Models::QueryDomainSpecialBizInfoByDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过域名查询域名特殊业务详情
       *
       * @param request QueryDomainSpecialBizInfoByDomainRequest
       * @return QueryDomainSpecialBizInfoByDomainResponse
       */
      Models::QueryDomainSpecialBizInfoByDomainResponse queryDomainSpecialBizInfoByDomain(const Models::QueryDomainSpecialBizInfoByDomainRequest &request);

      /**
       * @param request QueryDomainSuffixRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainSuffixResponse
       */
      Models::QueryDomainSuffixResponse queryDomainSuffixWithOptions(const Models::QueryDomainSuffixRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryDomainSuffixRequest
       * @return QueryDomainSuffixResponse
       */
      Models::QueryDomainSuffixResponse queryDomainSuffix(const Models::QueryDomainSuffixRequest &request);

      /**
       * @summary 查询邮箱验证状态
       *
       * @param request QueryEmailVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEmailVerificationResponse
       */
      Models::QueryEmailVerificationResponse queryEmailVerificationWithOptions(const Models::QueryEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询邮箱验证状态
       *
       * @param request QueryEmailVerificationRequest
       * @return QueryEmailVerificationResponse
       */
      Models::QueryEmailVerificationResponse queryEmailVerification(const Models::QueryEmailVerificationRequest &request);

      /**
       * @param request QueryEnsAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEnsAssociationResponse
       */
      Models::QueryEnsAssociationResponse queryEnsAssociationWithOptions(const Models::QueryEnsAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryEnsAssociationRequest
       * @return QueryEnsAssociationResponse
       */
      Models::QueryEnsAssociationResponse queryEnsAssociation(const Models::QueryEnsAssociationRequest &request);

      /**
       * @param request QueryFailReasonForDomainRealNameVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFailReasonForDomainRealNameVerificationResponse
       */
      Models::QueryFailReasonForDomainRealNameVerificationResponse queryFailReasonForDomainRealNameVerificationWithOptions(const Models::QueryFailReasonForDomainRealNameVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryFailReasonForDomainRealNameVerificationRequest
       * @return QueryFailReasonForDomainRealNameVerificationResponse
       */
      Models::QueryFailReasonForDomainRealNameVerificationResponse queryFailReasonForDomainRealNameVerification(const Models::QueryFailReasonForDomainRealNameVerificationRequest &request);

      /**
       * @param request QueryFailReasonForRegistrantProfileRealNameVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFailReasonForRegistrantProfileRealNameVerificationResponse
       */
      Models::QueryFailReasonForRegistrantProfileRealNameVerificationResponse queryFailReasonForRegistrantProfileRealNameVerificationWithOptions(const Models::QueryFailReasonForRegistrantProfileRealNameVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryFailReasonForRegistrantProfileRealNameVerificationRequest
       * @return QueryFailReasonForRegistrantProfileRealNameVerificationResponse
       */
      Models::QueryFailReasonForRegistrantProfileRealNameVerificationResponse queryFailReasonForRegistrantProfileRealNameVerification(const Models::QueryFailReasonForRegistrantProfileRealNameVerificationRequest &request);

      /**
       * @param request QueryFailingReasonListForQualificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFailingReasonListForQualificationResponse
       */
      Models::QueryFailingReasonListForQualificationResponse queryFailingReasonListForQualificationWithOptions(const Models::QueryFailingReasonListForQualificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryFailingReasonListForQualificationRequest
       * @return QueryFailingReasonListForQualificationResponse
       */
      Models::QueryFailingReasonListForQualificationResponse queryFailingReasonListForQualification(const Models::QueryFailingReasonListForQualificationRequest &request);

      /**
       * @summary 查询国际一口价订单列表
       *
       * @param request QueryIntlFixedPriceOrderListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryIntlFixedPriceOrderListResponse
       */
      Models::QueryIntlFixedPriceOrderListResponse queryIntlFixedPriceOrderListWithOptions(const Models::QueryIntlFixedPriceOrderListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询国际一口价订单列表
       *
       * @param request QueryIntlFixedPriceOrderListRequest
       * @return QueryIntlFixedPriceOrderListResponse
       */
      Models::QueryIntlFixedPriceOrderListResponse queryIntlFixedPriceOrderList(const Models::QueryIntlFixedPriceOrderListRequest &request);

      /**
       * @param request QueryLocalEnsAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryLocalEnsAssociationResponse
       */
      Models::QueryLocalEnsAssociationResponse queryLocalEnsAssociationWithOptions(const Models::QueryLocalEnsAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryLocalEnsAssociationRequest
       * @return QueryLocalEnsAssociationResponse
       */
      Models::QueryLocalEnsAssociationResponse queryLocalEnsAssociation(const Models::QueryLocalEnsAssociationRequest &request);

      /**
       * @param request QueryOperationAuditInfoDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryOperationAuditInfoDetailResponse
       */
      Models::QueryOperationAuditInfoDetailResponse queryOperationAuditInfoDetailWithOptions(const Models::QueryOperationAuditInfoDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryOperationAuditInfoDetailRequest
       * @return QueryOperationAuditInfoDetailResponse
       */
      Models::QueryOperationAuditInfoDetailResponse queryOperationAuditInfoDetail(const Models::QueryOperationAuditInfoDetailRequest &request);

      /**
       * @param request QueryOperationAuditInfoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryOperationAuditInfoListResponse
       */
      Models::QueryOperationAuditInfoListResponse queryOperationAuditInfoListWithOptions(const Models::QueryOperationAuditInfoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryOperationAuditInfoListRequest
       * @return QueryOperationAuditInfoListResponse
       */
      Models::QueryOperationAuditInfoListResponse queryOperationAuditInfoList(const Models::QueryOperationAuditInfoListRequest &request);

      /**
       * @param request QueryQualificationDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryQualificationDetailResponse
       */
      Models::QueryQualificationDetailResponse queryQualificationDetailWithOptions(const Models::QueryQualificationDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryQualificationDetailRequest
       * @return QueryQualificationDetailResponse
       */
      Models::QueryQualificationDetailResponse queryQualificationDetail(const Models::QueryQualificationDetailRequest &request);

      /**
       * @param request QueryRegistrantProfileRealNameVerificationInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRegistrantProfileRealNameVerificationInfoResponse
       */
      Models::QueryRegistrantProfileRealNameVerificationInfoResponse queryRegistrantProfileRealNameVerificationInfoWithOptions(const Models::QueryRegistrantProfileRealNameVerificationInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryRegistrantProfileRealNameVerificationInfoRequest
       * @return QueryRegistrantProfileRealNameVerificationInfoResponse
       */
      Models::QueryRegistrantProfileRealNameVerificationInfoResponse queryRegistrantProfileRealNameVerificationInfo(const Models::QueryRegistrantProfileRealNameVerificationInfoRequest &request);

      /**
       * @summary Queries the registrant profiles that belong to your Alibaba Cloud account.
       *
       * @description You can use optional request parameters to specify specific query criteria to query registrant profiles as required. For example:
       * *   If you know the ID of the profile that you want to query, you can use the registrant profile ID parameter to query the detailed information about the profile.
       * *   If you do not know the ID of the profile that you want to query, you can use parameters such as the registrant name parameter to query the detailed information about the profile.
       *
       * @param request QueryRegistrantProfilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRegistrantProfilesResponse
       */
      Models::QueryRegistrantProfilesResponse queryRegistrantProfilesWithOptions(const Models::QueryRegistrantProfilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the registrant profiles that belong to your Alibaba Cloud account.
       *
       * @description You can use optional request parameters to specify specific query criteria to query registrant profiles as required. For example:
       * *   If you know the ID of the profile that you want to query, you can use the registrant profile ID parameter to query the detailed information about the profile.
       * *   If you do not know the ID of the profile that you want to query, you can use parameters such as the registrant name parameter to query the detailed information about the profile.
       *
       * @param request QueryRegistrantProfilesRequest
       * @return QueryRegistrantProfilesResponse
       */
      Models::QueryRegistrantProfilesResponse queryRegistrantProfiles(const Models::QueryRegistrantProfilesRequest &request);

      /**
       * @param request QueryServerLockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryServerLockResponse
       */
      Models::QueryServerLockResponse queryServerLockWithOptions(const Models::QueryServerLockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryServerLockRequest
       * @return QueryServerLockResponse
       */
      Models::QueryServerLockResponse queryServerLock(const Models::QueryServerLockRequest &request);

      /**
       * @param request QueryTaskDetailHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTaskDetailHistoryResponse
       */
      Models::QueryTaskDetailHistoryResponse queryTaskDetailHistoryWithOptions(const Models::QueryTaskDetailHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryTaskDetailHistoryRequest
       * @return QueryTaskDetailHistoryResponse
       */
      Models::QueryTaskDetailHistoryResponse queryTaskDetailHistory(const Models::QueryTaskDetailHistoryRequest &request);

      /**
       * @summary Queries the details of a specific domain name task by page.
       *
       * @param request QueryTaskDetailListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTaskDetailListResponse
       */
      Models::QueryTaskDetailListResponse queryTaskDetailListWithOptions(const Models::QueryTaskDetailListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific domain name task by page.
       *
       * @param request QueryTaskDetailListRequest
       * @return QueryTaskDetailListResponse
       */
      Models::QueryTaskDetailListResponse queryTaskDetailList(const Models::QueryTaskDetailListRequest &request);

      /**
       * @param request QueryTaskInfoHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTaskInfoHistoryResponse
       */
      Models::QueryTaskInfoHistoryResponse queryTaskInfoHistoryWithOptions(const Models::QueryTaskInfoHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryTaskInfoHistoryRequest
       * @return QueryTaskInfoHistoryResponse
       */
      Models::QueryTaskInfoHistoryResponse queryTaskInfoHistory(const Models::QueryTaskInfoHistoryRequest &request);

      /**
       * @summary 查询任务列表
       *
       * @param request QueryTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTaskListResponse
       */
      Models::QueryTaskListResponse queryTaskListWithOptions(const Models::QueryTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询任务列表
       *
       * @param request QueryTaskListRequest
       * @return QueryTaskListResponse
       */
      Models::QueryTaskListResponse queryTaskList(const Models::QueryTaskListRequest &request);

      /**
       * @param request QueryTransferInByInstanceIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTransferInByInstanceIdResponse
       */
      Models::QueryTransferInByInstanceIdResponse queryTransferInByInstanceIdWithOptions(const Models::QueryTransferInByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryTransferInByInstanceIdRequest
       * @return QueryTransferInByInstanceIdResponse
       */
      Models::QueryTransferInByInstanceIdResponse queryTransferInByInstanceId(const Models::QueryTransferInByInstanceIdRequest &request);

      /**
       * @param request QueryTransferInListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTransferInListResponse
       */
      Models::QueryTransferInListResponse queryTransferInListWithOptions(const Models::QueryTransferInListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryTransferInListRequest
       * @return QueryTransferInListResponse
       */
      Models::QueryTransferInListResponse queryTransferInList(const Models::QueryTransferInListRequest &request);

      /**
       * @param request QueryTransferOutInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTransferOutInfoResponse
       */
      Models::QueryTransferOutInfoResponse queryTransferOutInfoWithOptions(const Models::QueryTransferOutInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryTransferOutInfoRequest
       * @return QueryTransferOutInfoResponse
       */
      Models::QueryTransferOutInfoResponse queryTransferOutInfo(const Models::QueryTransferOutInfoRequest &request);

      /**
       * @summary 保存联系人模板实名资料
       *
       * @param request RegistrantProfileRealNameVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegistrantProfileRealNameVerificationResponse
       */
      Models::RegistrantProfileRealNameVerificationResponse registrantProfileRealNameVerificationWithOptions(const Models::RegistrantProfileRealNameVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存联系人模板实名资料
       *
       * @param request RegistrantProfileRealNameVerificationRequest
       * @return RegistrantProfileRealNameVerificationResponse
       */
      Models::RegistrantProfileRealNameVerificationResponse registrantProfileRealNameVerification(const Models::RegistrantProfileRealNameVerificationRequest &request);

      /**
       * @summary 重新发送验证邮件
       *
       * @param request ResendEmailVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResendEmailVerificationResponse
       */
      Models::ResendEmailVerificationResponse resendEmailVerificationWithOptions(const Models::ResendEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重新发送验证邮件
       *
       * @param request ResendEmailVerificationRequest
       * @return ResendEmailVerificationResponse
       */
      Models::ResendEmailVerificationResponse resendEmailVerification(const Models::ResendEmailVerificationRequest &request);

      /**
       * @summary 重置资质审核状态
       *
       * @param request ResetQualificationVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetQualificationVerificationResponse
       */
      Models::ResetQualificationVerificationResponse resetQualificationVerificationWithOptions(const Models::ResetQualificationVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重置资质审核状态
       *
       * @param request ResetQualificationVerificationRequest
       * @return ResetQualificationVerificationResponse
       */
      Models::ResetQualificationVerificationResponse resetQualificationVerification(const Models::ResetQualificationVerificationRequest &request);

      /**
       * @summary 批量保存域名备注信息
       *
       * @param request SaveBatchDomainRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchDomainRemarkResponse
       */
      Models::SaveBatchDomainRemarkResponse saveBatchDomainRemarkWithOptions(const Models::SaveBatchDomainRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量保存域名备注信息
       *
       * @param request SaveBatchDomainRemarkRequest
       * @return SaveBatchDomainRemarkResponse
       */
      Models::SaveBatchDomainRemarkResponse saveBatchDomainRemark(const Models::SaveBatchDomainRemarkRequest &request);

      /**
       * @summary 批量申请域名快速转出
       *
       * @param request SaveBatchTaskForApplyQuickTransferOutOpenlyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForApplyQuickTransferOutOpenlyResponse
       */
      Models::SaveBatchTaskForApplyQuickTransferOutOpenlyResponse saveBatchTaskForApplyQuickTransferOutOpenlyWithOptions(const Models::SaveBatchTaskForApplyQuickTransferOutOpenlyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量申请域名快速转出
       *
       * @param request SaveBatchTaskForApplyQuickTransferOutOpenlyRequest
       * @return SaveBatchTaskForApplyQuickTransferOutOpenlyResponse
       */
      Models::SaveBatchTaskForApplyQuickTransferOutOpenlyResponse saveBatchTaskForApplyQuickTransferOutOpenly(const Models::SaveBatchTaskForApplyQuickTransferOutOpenlyRequest &request);

      /**
       * @summary 保存批量任务-注册订单
       *
       * @param request SaveBatchTaskForCreatingOrderActivateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForCreatingOrderActivateResponse
       */
      Models::SaveBatchTaskForCreatingOrderActivateResponse saveBatchTaskForCreatingOrderActivateWithOptions(const Models::SaveBatchTaskForCreatingOrderActivateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存批量任务-注册订单
       *
       * @param request SaveBatchTaskForCreatingOrderActivateRequest
       * @return SaveBatchTaskForCreatingOrderActivateResponse
       */
      Models::SaveBatchTaskForCreatingOrderActivateResponse saveBatchTaskForCreatingOrderActivate(const Models::SaveBatchTaskForCreatingOrderActivateRequest &request);

      /**
       * @param request SaveBatchTaskForCreatingOrderRedeemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForCreatingOrderRedeemResponse
       */
      Models::SaveBatchTaskForCreatingOrderRedeemResponse saveBatchTaskForCreatingOrderRedeemWithOptions(const Models::SaveBatchTaskForCreatingOrderRedeemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveBatchTaskForCreatingOrderRedeemRequest
       * @return SaveBatchTaskForCreatingOrderRedeemResponse
       */
      Models::SaveBatchTaskForCreatingOrderRedeemResponse saveBatchTaskForCreatingOrderRedeem(const Models::SaveBatchTaskForCreatingOrderRedeemRequest &request);

      /**
       * @summary 保存批量任务-续费订单
       *
       * @param request SaveBatchTaskForCreatingOrderRenewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForCreatingOrderRenewResponse
       */
      Models::SaveBatchTaskForCreatingOrderRenewResponse saveBatchTaskForCreatingOrderRenewWithOptions(const Models::SaveBatchTaskForCreatingOrderRenewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存批量任务-续费订单
       *
       * @param request SaveBatchTaskForCreatingOrderRenewRequest
       * @return SaveBatchTaskForCreatingOrderRenewResponse
       */
      Models::SaveBatchTaskForCreatingOrderRenewResponse saveBatchTaskForCreatingOrderRenew(const Models::SaveBatchTaskForCreatingOrderRenewRequest &request);

      /**
       * @param request SaveBatchTaskForCreatingOrderTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForCreatingOrderTransferResponse
       */
      Models::SaveBatchTaskForCreatingOrderTransferResponse saveBatchTaskForCreatingOrderTransferWithOptions(const Models::SaveBatchTaskForCreatingOrderTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveBatchTaskForCreatingOrderTransferRequest
       * @return SaveBatchTaskForCreatingOrderTransferResponse
       */
      Models::SaveBatchTaskForCreatingOrderTransferResponse saveBatchTaskForCreatingOrderTransfer(const Models::SaveBatchTaskForCreatingOrderTransferRequest &request);

      /**
       * @summary 保存批量任务-开启/关闭whois隐私保护锁
       *
       * @param request SaveBatchTaskForDomainNameProxyServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForDomainNameProxyServiceResponse
       */
      Models::SaveBatchTaskForDomainNameProxyServiceResponse saveBatchTaskForDomainNameProxyServiceWithOptions(const Models::SaveBatchTaskForDomainNameProxyServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存批量任务-开启/关闭whois隐私保护锁
       *
       * @param request SaveBatchTaskForDomainNameProxyServiceRequest
       * @return SaveBatchTaskForDomainNameProxyServiceResponse
       */
      Models::SaveBatchTaskForDomainNameProxyServiceResponse saveBatchTaskForDomainNameProxyService(const Models::SaveBatchTaskForDomainNameProxyServiceRequest &request);

      /**
       * @summary 提交批量生成证书的任务
       *
       * @param tmpReq SaveBatchTaskForGenerateDomainCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForGenerateDomainCertificateResponse
       */
      Models::SaveBatchTaskForGenerateDomainCertificateResponse saveBatchTaskForGenerateDomainCertificateWithOptions(const Models::SaveBatchTaskForGenerateDomainCertificateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交批量生成证书的任务
       *
       * @param request SaveBatchTaskForGenerateDomainCertificateRequest
       * @return SaveBatchTaskForGenerateDomainCertificateResponse
       */
      Models::SaveBatchTaskForGenerateDomainCertificateResponse saveBatchTaskForGenerateDomainCertificate(const Models::SaveBatchTaskForGenerateDomainCertificateRequest &request);

      /**
       * @summary 批量修改dns
       *
       * @param request SaveBatchTaskForModifyingDomainDnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForModifyingDomainDnsResponse
       */
      Models::SaveBatchTaskForModifyingDomainDnsResponse saveBatchTaskForModifyingDomainDnsWithOptions(const Models::SaveBatchTaskForModifyingDomainDnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量修改dns
       *
       * @param request SaveBatchTaskForModifyingDomainDnsRequest
       * @return SaveBatchTaskForModifyingDomainDnsResponse
       */
      Models::SaveBatchTaskForModifyingDomainDnsResponse saveBatchTaskForModifyingDomainDns(const Models::SaveBatchTaskForModifyingDomainDnsRequest &request);

      /**
       * @summary 提交批量预定删除抢注域名任务
       *
       * @param request SaveBatchTaskForReserveDropListDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForReserveDropListDomainResponse
       */
      Models::SaveBatchTaskForReserveDropListDomainResponse saveBatchTaskForReserveDropListDomainWithOptions(const Models::SaveBatchTaskForReserveDropListDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交批量预定删除抢注域名任务
       *
       * @param request SaveBatchTaskForReserveDropListDomainRequest
       * @return SaveBatchTaskForReserveDropListDomainResponse
       */
      Models::SaveBatchTaskForReserveDropListDomainResponse saveBatchTaskForReserveDropListDomain(const Models::SaveBatchTaskForReserveDropListDomainRequest &request);

      /**
       * @summary 基于转移码的批量转出任务提交
       *
       * @param request SaveBatchTaskForTransferOutByAuthorizationCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForTransferOutByAuthorizationCodeResponse
       */
      Models::SaveBatchTaskForTransferOutByAuthorizationCodeResponse saveBatchTaskForTransferOutByAuthorizationCodeWithOptions(const Models::SaveBatchTaskForTransferOutByAuthorizationCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 基于转移码的批量转出任务提交
       *
       * @param request SaveBatchTaskForTransferOutByAuthorizationCodeRequest
       * @return SaveBatchTaskForTransferOutByAuthorizationCodeResponse
       */
      Models::SaveBatchTaskForTransferOutByAuthorizationCodeResponse saveBatchTaskForTransferOutByAuthorizationCode(const Models::SaveBatchTaskForTransferOutByAuthorizationCodeRequest &request);

      /**
       * @summary 保存批量任务-开启/关闭禁止转移锁
       *
       * @param request SaveBatchTaskForTransferProhibitionLockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForTransferProhibitionLockResponse
       */
      Models::SaveBatchTaskForTransferProhibitionLockResponse saveBatchTaskForTransferProhibitionLockWithOptions(const Models::SaveBatchTaskForTransferProhibitionLockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存批量任务-开启/关闭禁止转移锁
       *
       * @param request SaveBatchTaskForTransferProhibitionLockRequest
       * @return SaveBatchTaskForTransferProhibitionLockResponse
       */
      Models::SaveBatchTaskForTransferProhibitionLockResponse saveBatchTaskForTransferProhibitionLock(const Models::SaveBatchTaskForTransferProhibitionLockRequest &request);

      /**
       * @param request SaveBatchTaskForUpdateProhibitionLockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForUpdateProhibitionLockResponse
       */
      Models::SaveBatchTaskForUpdateProhibitionLockResponse saveBatchTaskForUpdateProhibitionLockWithOptions(const Models::SaveBatchTaskForUpdateProhibitionLockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveBatchTaskForUpdateProhibitionLockRequest
       * @return SaveBatchTaskForUpdateProhibitionLockResponse
       */
      Models::SaveBatchTaskForUpdateProhibitionLockResponse saveBatchTaskForUpdateProhibitionLock(const Models::SaveBatchTaskForUpdateProhibitionLockRequest &request);

      /**
       * @summary 使用联系人信息修改联系人的批量任务
       *
       * @param request SaveBatchTaskForUpdatingContactInfoByNewContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForUpdatingContactInfoByNewContactResponse
       */
      Models::SaveBatchTaskForUpdatingContactInfoByNewContactResponse saveBatchTaskForUpdatingContactInfoByNewContactWithOptions(const Models::SaveBatchTaskForUpdatingContactInfoByNewContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 使用联系人信息修改联系人的批量任务
       *
       * @param request SaveBatchTaskForUpdatingContactInfoByNewContactRequest
       * @return SaveBatchTaskForUpdatingContactInfoByNewContactResponse
       */
      Models::SaveBatchTaskForUpdatingContactInfoByNewContactResponse saveBatchTaskForUpdatingContactInfoByNewContact(const Models::SaveBatchTaskForUpdatingContactInfoByNewContactRequest &request);

      /**
       * @summary 使用模板修改联系人的批量任务
       *
       * @param request SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse
       */
      Models::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse saveBatchTaskForUpdatingContactInfoByRegistrantProfileIdWithOptions(const Models::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 使用模板修改联系人的批量任务
       *
       * @param request SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest
       * @return SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse
       */
      Models::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse saveBatchTaskForUpdatingContactInfoByRegistrantProfileId(const Models::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest &request);

      /**
       * @summary 创建/更新域名分组
       *
       * @param request SaveDomainGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveDomainGroupResponse
       */
      Models::SaveDomainGroupResponse saveDomainGroupWithOptions(const Models::SaveDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建/更新域名分组
       *
       * @param request SaveDomainGroupRequest
       * @return SaveDomainGroupResponse
       */
      Models::SaveDomainGroupResponse saveDomainGroup(const Models::SaveDomainGroupRequest &request);

      /**
       * @summary 保存联系人模板
       *
       * @param request SaveRegistrantProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveRegistrantProfileResponse
       */
      Models::SaveRegistrantProfileResponse saveRegistrantProfileWithOptions(const Models::SaveRegistrantProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存联系人模板
       *
       * @param request SaveRegistrantProfileRequest
       * @return SaveRegistrantProfileResponse
       */
      Models::SaveRegistrantProfileResponse saveRegistrantProfile(const Models::SaveRegistrantProfileRequest &request);

      /**
       * @summary 保存联系人模板和凭据
       *
       * @param request SaveRegistrantProfileRealNameVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveRegistrantProfileRealNameVerificationResponse
       */
      Models::SaveRegistrantProfileRealNameVerificationResponse saveRegistrantProfileRealNameVerificationWithOptions(const Models::SaveRegistrantProfileRealNameVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存联系人模板和凭据
       *
       * @param request SaveRegistrantProfileRealNameVerificationRequest
       * @return SaveRegistrantProfileRealNameVerificationResponse
       */
      Models::SaveRegistrantProfileRealNameVerificationResponse saveRegistrantProfileRealNameVerification(const Models::SaveRegistrantProfileRealNameVerificationRequest &request);

      /**
       * @summary 添加dnsSec记录
       *
       * @param request SaveSingleTaskForAddingDSRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForAddingDSRecordResponse
       */
      Models::SaveSingleTaskForAddingDSRecordResponse saveSingleTaskForAddingDSRecordWithOptions(const Models::SaveSingleTaskForAddingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加dnsSec记录
       *
       * @param request SaveSingleTaskForAddingDSRecordRequest
       * @return SaveSingleTaskForAddingDSRecordResponse
       */
      Models::SaveSingleTaskForAddingDSRecordResponse saveSingleTaskForAddingDSRecord(const Models::SaveSingleTaskForAddingDSRecordRequest &request);

      /**
       * @summary 申请域名快速转出
       *
       * @param request SaveSingleTaskForApplyQuickTransferOutOpenlyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForApplyQuickTransferOutOpenlyResponse
       */
      Models::SaveSingleTaskForApplyQuickTransferOutOpenlyResponse saveSingleTaskForApplyQuickTransferOutOpenlyWithOptions(const Models::SaveSingleTaskForApplyQuickTransferOutOpenlyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请域名快速转出
       *
       * @param request SaveSingleTaskForApplyQuickTransferOutOpenlyRequest
       * @return SaveSingleTaskForApplyQuickTransferOutOpenlyResponse
       */
      Models::SaveSingleTaskForApplyQuickTransferOutOpenlyResponse saveSingleTaskForApplyQuickTransferOutOpenly(const Models::SaveSingleTaskForApplyQuickTransferOutOpenlyRequest &request);

      /**
       * @summary 确认转出
       *
       * @param request SaveSingleTaskForApprovingTransferOutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForApprovingTransferOutResponse
       */
      Models::SaveSingleTaskForApprovingTransferOutResponse saveSingleTaskForApprovingTransferOutWithOptions(const Models::SaveSingleTaskForApprovingTransferOutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 确认转出
       *
       * @param request SaveSingleTaskForApprovingTransferOutRequest
       * @return SaveSingleTaskForApprovingTransferOutResponse
       */
      Models::SaveSingleTaskForApprovingTransferOutResponse saveSingleTaskForApprovingTransferOut(const Models::SaveSingleTaskForApprovingTransferOutRequest &request);

      /**
       * @param request SaveSingleTaskForAssociatingEnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForAssociatingEnsResponse
       */
      Models::SaveSingleTaskForAssociatingEnsResponse saveSingleTaskForAssociatingEnsWithOptions(const Models::SaveSingleTaskForAssociatingEnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveSingleTaskForAssociatingEnsRequest
       * @return SaveSingleTaskForAssociatingEnsResponse
       */
      Models::SaveSingleTaskForAssociatingEnsResponse saveSingleTaskForAssociatingEns(const Models::SaveSingleTaskForAssociatingEnsRequest &request);

      /**
       * @param request SaveSingleTaskForCancelingTransferInRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForCancelingTransferInResponse
       */
      Models::SaveSingleTaskForCancelingTransferInResponse saveSingleTaskForCancelingTransferInWithOptions(const Models::SaveSingleTaskForCancelingTransferInRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveSingleTaskForCancelingTransferInRequest
       * @return SaveSingleTaskForCancelingTransferInResponse
       */
      Models::SaveSingleTaskForCancelingTransferInResponse saveSingleTaskForCancelingTransferIn(const Models::SaveSingleTaskForCancelingTransferInRequest &request);

      /**
       * @summary 取消转出
       *
       * @param request SaveSingleTaskForCancelingTransferOutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForCancelingTransferOutResponse
       */
      Models::SaveSingleTaskForCancelingTransferOutResponse saveSingleTaskForCancelingTransferOutWithOptions(const Models::SaveSingleTaskForCancelingTransferOutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消转出
       *
       * @param request SaveSingleTaskForCancelingTransferOutRequest
       * @return SaveSingleTaskForCancelingTransferOutResponse
       */
      Models::SaveSingleTaskForCancelingTransferOutResponse saveSingleTaskForCancelingTransferOut(const Models::SaveSingleTaskForCancelingTransferOutRequest &request);

      /**
       * @summary 保存创建dns服务器的任务请求
       *
       * @param request SaveSingleTaskForCreatingDnsHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForCreatingDnsHostResponse
       */
      Models::SaveSingleTaskForCreatingDnsHostResponse saveSingleTaskForCreatingDnsHostWithOptions(const Models::SaveSingleTaskForCreatingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存创建dns服务器的任务请求
       *
       * @param request SaveSingleTaskForCreatingDnsHostRequest
       * @return SaveSingleTaskForCreatingDnsHostResponse
       */
      Models::SaveSingleTaskForCreatingDnsHostResponse saveSingleTaskForCreatingDnsHost(const Models::SaveSingleTaskForCreatingDnsHostRequest &request);

      /**
       * @summary 保存单个任务-注册订单
       *
       * @param request SaveSingleTaskForCreatingOrderActivateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForCreatingOrderActivateResponse
       */
      Models::SaveSingleTaskForCreatingOrderActivateResponse saveSingleTaskForCreatingOrderActivateWithOptions(const Models::SaveSingleTaskForCreatingOrderActivateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存单个任务-注册订单
       *
       * @param request SaveSingleTaskForCreatingOrderActivateRequest
       * @return SaveSingleTaskForCreatingOrderActivateResponse
       */
      Models::SaveSingleTaskForCreatingOrderActivateResponse saveSingleTaskForCreatingOrderActivate(const Models::SaveSingleTaskForCreatingOrderActivateRequest &request);

      /**
       * @param request SaveSingleTaskForCreatingOrderRedeemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForCreatingOrderRedeemResponse
       */
      Models::SaveSingleTaskForCreatingOrderRedeemResponse saveSingleTaskForCreatingOrderRedeemWithOptions(const Models::SaveSingleTaskForCreatingOrderRedeemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveSingleTaskForCreatingOrderRedeemRequest
       * @return SaveSingleTaskForCreatingOrderRedeemResponse
       */
      Models::SaveSingleTaskForCreatingOrderRedeemResponse saveSingleTaskForCreatingOrderRedeem(const Models::SaveSingleTaskForCreatingOrderRedeemRequest &request);

      /**
       * @summary 保存单个任务-续费订单
       *
       * @param request SaveSingleTaskForCreatingOrderRenewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForCreatingOrderRenewResponse
       */
      Models::SaveSingleTaskForCreatingOrderRenewResponse saveSingleTaskForCreatingOrderRenewWithOptions(const Models::SaveSingleTaskForCreatingOrderRenewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存单个任务-续费订单
       *
       * @param request SaveSingleTaskForCreatingOrderRenewRequest
       * @return SaveSingleTaskForCreatingOrderRenewResponse
       */
      Models::SaveSingleTaskForCreatingOrderRenewResponse saveSingleTaskForCreatingOrderRenew(const Models::SaveSingleTaskForCreatingOrderRenewRequest &request);

      /**
       * @param request SaveSingleTaskForCreatingOrderTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForCreatingOrderTransferResponse
       */
      Models::SaveSingleTaskForCreatingOrderTransferResponse saveSingleTaskForCreatingOrderTransferWithOptions(const Models::SaveSingleTaskForCreatingOrderTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveSingleTaskForCreatingOrderTransferRequest
       * @return SaveSingleTaskForCreatingOrderTransferResponse
       */
      Models::SaveSingleTaskForCreatingOrderTransferResponse saveSingleTaskForCreatingOrderTransfer(const Models::SaveSingleTaskForCreatingOrderTransferRequest &request);

      /**
       * @summary 删除dnsSec记录
       *
       * @param request SaveSingleTaskForDeletingDSRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForDeletingDSRecordResponse
       */
      Models::SaveSingleTaskForDeletingDSRecordResponse saveSingleTaskForDeletingDSRecordWithOptions(const Models::SaveSingleTaskForDeletingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除dnsSec记录
       *
       * @param request SaveSingleTaskForDeletingDSRecordRequest
       * @return SaveSingleTaskForDeletingDSRecordResponse
       */
      Models::SaveSingleTaskForDeletingDSRecordResponse saveSingleTaskForDeletingDSRecord(const Models::SaveSingleTaskForDeletingDSRecordRequest &request);

      /**
       * @summary 删除DNS HOST任务
       *
       * @param request SaveSingleTaskForDeletingDnsHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForDeletingDnsHostResponse
       */
      Models::SaveSingleTaskForDeletingDnsHostResponse saveSingleTaskForDeletingDnsHostWithOptions(const Models::SaveSingleTaskForDeletingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除DNS HOST任务
       *
       * @param request SaveSingleTaskForDeletingDnsHostRequest
       * @return SaveSingleTaskForDeletingDnsHostResponse
       */
      Models::SaveSingleTaskForDeletingDnsHostResponse saveSingleTaskForDeletingDnsHost(const Models::SaveSingleTaskForDeletingDnsHostRequest &request);

      /**
       * @param request SaveSingleTaskForDisassociatingEnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForDisassociatingEnsResponse
       */
      Models::SaveSingleTaskForDisassociatingEnsResponse saveSingleTaskForDisassociatingEnsWithOptions(const Models::SaveSingleTaskForDisassociatingEnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveSingleTaskForDisassociatingEnsRequest
       * @return SaveSingleTaskForDisassociatingEnsResponse
       */
      Models::SaveSingleTaskForDisassociatingEnsResponse saveSingleTaskForDisassociatingEns(const Models::SaveSingleTaskForDisassociatingEnsRequest &request);

      /**
       * @summary 保存单个任务-开启/关闭whois隐私保护锁
       *
       * @param request SaveSingleTaskForDomainNameProxyServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForDomainNameProxyServiceResponse
       */
      Models::SaveSingleTaskForDomainNameProxyServiceResponse saveSingleTaskForDomainNameProxyServiceWithOptions(const Models::SaveSingleTaskForDomainNameProxyServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存单个任务-开启/关闭whois隐私保护锁
       *
       * @param request SaveSingleTaskForDomainNameProxyServiceRequest
       * @return SaveSingleTaskForDomainNameProxyServiceResponse
       */
      Models::SaveSingleTaskForDomainNameProxyServiceResponse saveSingleTaskForDomainNameProxyService(const Models::SaveSingleTaskForDomainNameProxyServiceRequest &request);

      /**
       * @summary 提交生成域名证书任务
       *
       * @param request SaveSingleTaskForGenerateDomainCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForGenerateDomainCertificateResponse
       */
      Models::SaveSingleTaskForGenerateDomainCertificateResponse saveSingleTaskForGenerateDomainCertificateWithOptions(const Models::SaveSingleTaskForGenerateDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交生成域名证书任务
       *
       * @param request SaveSingleTaskForGenerateDomainCertificateRequest
       * @return SaveSingleTaskForGenerateDomainCertificateResponse
       */
      Models::SaveSingleTaskForGenerateDomainCertificateResponse saveSingleTaskForGenerateDomainCertificate(const Models::SaveSingleTaskForGenerateDomainCertificateRequest &request);

      /**
       * @summary 修改DnsSec记录
       *
       * @param request SaveSingleTaskForModifyingDSRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForModifyingDSRecordResponse
       */
      Models::SaveSingleTaskForModifyingDSRecordResponse saveSingleTaskForModifyingDSRecordWithOptions(const Models::SaveSingleTaskForModifyingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改DnsSec记录
       *
       * @param request SaveSingleTaskForModifyingDSRecordRequest
       * @return SaveSingleTaskForModifyingDSRecordResponse
       */
      Models::SaveSingleTaskForModifyingDSRecordResponse saveSingleTaskForModifyingDSRecord(const Models::SaveSingleTaskForModifyingDSRecordRequest &request);

      /**
       * @summary 保存修改dns服务器的任务请求
       *
       * @param request SaveSingleTaskForModifyingDnsHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForModifyingDnsHostResponse
       */
      Models::SaveSingleTaskForModifyingDnsHostResponse saveSingleTaskForModifyingDnsHostWithOptions(const Models::SaveSingleTaskForModifyingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存修改dns服务器的任务请求
       *
       * @param request SaveSingleTaskForModifyingDnsHostRequest
       * @return SaveSingleTaskForModifyingDnsHostResponse
       */
      Models::SaveSingleTaskForModifyingDnsHostResponse saveSingleTaskForModifyingDnsHost(const Models::SaveSingleTaskForModifyingDnsHostRequest &request);

      /**
       * @summary 发送转移码
       *
       * @param request SaveSingleTaskForQueryingTransferAuthorizationCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForQueryingTransferAuthorizationCodeResponse
       */
      Models::SaveSingleTaskForQueryingTransferAuthorizationCodeResponse saveSingleTaskForQueryingTransferAuthorizationCodeWithOptions(const Models::SaveSingleTaskForQueryingTransferAuthorizationCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送转移码
       *
       * @param request SaveSingleTaskForQueryingTransferAuthorizationCodeRequest
       * @return SaveSingleTaskForQueryingTransferAuthorizationCodeResponse
       */
      Models::SaveSingleTaskForQueryingTransferAuthorizationCodeResponse saveSingleTaskForQueryingTransferAuthorizationCode(const Models::SaveSingleTaskForQueryingTransferAuthorizationCodeRequest &request);

      /**
       * @summary 单笔抢注批量接口
       *
       * @param request SaveSingleTaskForReserveDropListDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForReserveDropListDomainResponse
       */
      Models::SaveSingleTaskForReserveDropListDomainResponse saveSingleTaskForReserveDropListDomainWithOptions(const Models::SaveSingleTaskForReserveDropListDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 单笔抢注批量接口
       *
       * @param request SaveSingleTaskForReserveDropListDomainRequest
       * @return SaveSingleTaskForReserveDropListDomainResponse
       */
      Models::SaveSingleTaskForReserveDropListDomainResponse saveSingleTaskForReserveDropListDomain(const Models::SaveSingleTaskForReserveDropListDomainRequest &request);

      /**
       * @summary 保存art扩展信息任务
       *
       * @param request SaveSingleTaskForSaveArtExtensionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForSaveArtExtensionResponse
       */
      Models::SaveSingleTaskForSaveArtExtensionResponse saveSingleTaskForSaveArtExtensionWithOptions(const Models::SaveSingleTaskForSaveArtExtensionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存art扩展信息任务
       *
       * @param request SaveSingleTaskForSaveArtExtensionRequest
       * @return SaveSingleTaskForSaveArtExtensionResponse
       */
      Models::SaveSingleTaskForSaveArtExtensionResponse saveSingleTaskForSaveArtExtension(const Models::SaveSingleTaskForSaveArtExtensionRequest &request);

      /**
       * @summary 同步DnsSec记录
       *
       * @param request SaveSingleTaskForSynchronizingDSRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForSynchronizingDSRecordResponse
       */
      Models::SaveSingleTaskForSynchronizingDSRecordResponse saveSingleTaskForSynchronizingDSRecordWithOptions(const Models::SaveSingleTaskForSynchronizingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步DnsSec记录
       *
       * @param request SaveSingleTaskForSynchronizingDSRecordRequest
       * @return SaveSingleTaskForSynchronizingDSRecordResponse
       */
      Models::SaveSingleTaskForSynchronizingDSRecordResponse saveSingleTaskForSynchronizingDSRecord(const Models::SaveSingleTaskForSynchronizingDSRecordRequest &request);

      /**
       * @summary 保存同步dns服务器的任务请求
       *
       * @param request SaveSingleTaskForSynchronizingDnsHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForSynchronizingDnsHostResponse
       */
      Models::SaveSingleTaskForSynchronizingDnsHostResponse saveSingleTaskForSynchronizingDnsHostWithOptions(const Models::SaveSingleTaskForSynchronizingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存同步dns服务器的任务请求
       *
       * @param request SaveSingleTaskForSynchronizingDnsHostRequest
       * @return SaveSingleTaskForSynchronizingDnsHostResponse
       */
      Models::SaveSingleTaskForSynchronizingDnsHostResponse saveSingleTaskForSynchronizingDnsHost(const Models::SaveSingleTaskForSynchronizingDnsHostRequest &request);

      /**
       * @summary Submit a single transfer-out task based on the transfer key of domain names.
       *
       * @description The task ID.
       *
       * @param request SaveSingleTaskForTransferOutByAuthorizationCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForTransferOutByAuthorizationCodeResponse
       */
      Models::SaveSingleTaskForTransferOutByAuthorizationCodeResponse saveSingleTaskForTransferOutByAuthorizationCodeWithOptions(const Models::SaveSingleTaskForTransferOutByAuthorizationCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submit a single transfer-out task based on the transfer key of domain names.
       *
       * @description The task ID.
       *
       * @param request SaveSingleTaskForTransferOutByAuthorizationCodeRequest
       * @return SaveSingleTaskForTransferOutByAuthorizationCodeResponse
       */
      Models::SaveSingleTaskForTransferOutByAuthorizationCodeResponse saveSingleTaskForTransferOutByAuthorizationCode(const Models::SaveSingleTaskForTransferOutByAuthorizationCodeRequest &request);

      /**
       * @summary 保存单个任务-开启/关闭禁止转移锁
       *
       * @param request SaveSingleTaskForTransferProhibitionLockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForTransferProhibitionLockResponse
       */
      Models::SaveSingleTaskForTransferProhibitionLockResponse saveSingleTaskForTransferProhibitionLockWithOptions(const Models::SaveSingleTaskForTransferProhibitionLockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存单个任务-开启/关闭禁止转移锁
       *
       * @param request SaveSingleTaskForTransferProhibitionLockRequest
       * @return SaveSingleTaskForTransferProhibitionLockResponse
       */
      Models::SaveSingleTaskForTransferProhibitionLockResponse saveSingleTaskForTransferProhibitionLock(const Models::SaveSingleTaskForTransferProhibitionLockRequest &request);

      /**
       * @summary 保存单个任务-开启/关闭信息安全锁
       *
       * @param request SaveSingleTaskForUpdateProhibitionLockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForUpdateProhibitionLockResponse
       */
      Models::SaveSingleTaskForUpdateProhibitionLockResponse saveSingleTaskForUpdateProhibitionLockWithOptions(const Models::SaveSingleTaskForUpdateProhibitionLockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存单个任务-开启/关闭信息安全锁
       *
       * @param request SaveSingleTaskForUpdateProhibitionLockRequest
       * @return SaveSingleTaskForUpdateProhibitionLockResponse
       */
      Models::SaveSingleTaskForUpdateProhibitionLockResponse saveSingleTaskForUpdateProhibitionLock(const Models::SaveSingleTaskForUpdateProhibitionLockRequest &request);

      /**
       * @summary 保存修改联系人的任务
       *
       * @param request SaveSingleTaskForUpdatingContactInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForUpdatingContactInfoResponse
       */
      Models::SaveSingleTaskForUpdatingContactInfoResponse saveSingleTaskForUpdatingContactInfoWithOptions(const Models::SaveSingleTaskForUpdatingContactInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存修改联系人的任务
       *
       * @param request SaveSingleTaskForUpdatingContactInfoRequest
       * @return SaveSingleTaskForUpdatingContactInfoResponse
       */
      Models::SaveSingleTaskForUpdatingContactInfoResponse saveSingleTaskForUpdatingContactInfo(const Models::SaveSingleTaskForUpdatingContactInfoRequest &request);

      /**
       * @summary 保存删除域名的任务
       *
       * @param request SaveTaskForSubmittingDomainDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForSubmittingDomainDeleteResponse
       */
      Models::SaveTaskForSubmittingDomainDeleteResponse saveTaskForSubmittingDomainDeleteWithOptions(const Models::SaveTaskForSubmittingDomainDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存删除域名的任务
       *
       * @param request SaveTaskForSubmittingDomainDeleteRequest
       * @return SaveTaskForSubmittingDomainDeleteResponse
       */
      Models::SaveTaskForSubmittingDomainDeleteResponse saveTaskForSubmittingDomainDelete(const Models::SaveTaskForSubmittingDomainDeleteRequest &request);

      /**
       * @summary 批量提交域名资料
       *
       * @param request SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse
       */
      Models::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse saveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialWithOptions(const Models::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量提交域名资料
       *
       * @param request SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest
       * @return SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse
       */
      Models::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse saveTaskForSubmittingDomainRealNameVerificationByIdentityCredential(const Models::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest &request);

      /**
       * @summary 根据模板保存域名的实名认证信息
       *
       * @param request SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse
       */
      Models::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDWithOptions(const Models::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据模板保存域名的实名认证信息
       *
       * @param request SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest
       * @return SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse
       */
      Models::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileID(const Models::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest &request);

      /**
       * @summary 根据联系人信息批量修改注册联系人信息
       *
       * @param request SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse
       */
      Models::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse saveTaskForUpdatingRegistrantInfoByIdentityCredentialWithOptions(const Models::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据联系人信息批量修改注册联系人信息
       *
       * @param request SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest
       * @return SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse
       */
      Models::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse saveTaskForUpdatingRegistrantInfoByIdentityCredential(const Models::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest &request);

      /**
       * @summary 根据模板批量修改注册联系人
       *
       * @param request SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse
       */
      Models::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse saveTaskForUpdatingRegistrantInfoByRegistrantProfileIDWithOptions(const Models::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据模板批量修改注册联系人
       *
       * @param request SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest
       * @return SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse
       */
      Models::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse saveTaskForUpdatingRegistrantInfoByRegistrantProfileID(const Models::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest &request);

      /**
       * @summary Traverses domain names.
       *
       * @description If you have a large number of domain names, a slow response may occur when you call an API operation to query domain names. In this case, you can call this operation to query domain names more quickly. When you call this operation for the first time, specify the request parameters except ScrollId. A scroll ID is returned without other data. In the second request, use the scroll ID obtained from the previous response. In subsequent requests, the newly specified request parameters do not take effect, and the request parameters that are specified in the first request prevail.
       *
       * @param request ScrollDomainListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScrollDomainListResponse
       */
      Models::ScrollDomainListResponse scrollDomainListWithOptions(const Models::ScrollDomainListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Traverses domain names.
       *
       * @description If you have a large number of domain names, a slow response may occur when you call an API operation to query domain names. In this case, you can call this operation to query domain names more quickly. When you call this operation for the first time, specify the request parameters except ScrollId. A scroll ID is returned without other data. In the second request, use the scroll ID obtained from the previous response. In subsequent requests, the newly specified request parameters do not take effect, and the request parameters that are specified in the first request prevail.
       *
       * @param request ScrollDomainListRequest
       * @return ScrollDomainListResponse
       */
      Models::ScrollDomainListResponse scrollDomainList(const Models::ScrollDomainListRequest &request);

      /**
       * @summary 设置默认模板
       *
       * @param request SetDefaultRegistrantProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultRegistrantProfileResponse
       */
      Models::SetDefaultRegistrantProfileResponse setDefaultRegistrantProfileWithOptions(const Models::SetDefaultRegistrantProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置默认模板
       *
       * @param request SetDefaultRegistrantProfileRequest
       * @return SetDefaultRegistrantProfileResponse
       */
      Models::SetDefaultRegistrantProfileResponse setDefaultRegistrantProfile(const Models::SetDefaultRegistrantProfileRequest &request);

      /**
       * @summary 域名设置自动续费
       *
       * @param request SetupDomainAutoRenewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetupDomainAutoRenewResponse
       */
      Models::SetupDomainAutoRenewResponse setupDomainAutoRenewWithOptions(const Models::SetupDomainAutoRenewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 域名设置自动续费
       *
       * @param request SetupDomainAutoRenewRequest
       * @return SetupDomainAutoRenewResponse
       */
      Models::SetupDomainAutoRenewResponse setupDomainAutoRenew(const Models::SetupDomainAutoRenewRequest &request);

      /**
       * @summary 域名特殊业务提交资料
       *
       * @param request SubmitDomainSpecialBizCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDomainSpecialBizCredentialsResponse
       */
      Models::SubmitDomainSpecialBizCredentialsResponse submitDomainSpecialBizCredentialsWithOptions(const Models::SubmitDomainSpecialBizCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 域名特殊业务提交资料
       *
       * @param request SubmitDomainSpecialBizCredentialsRequest
       * @return SubmitDomainSpecialBizCredentialsResponse
       */
      Models::SubmitDomainSpecialBizCredentialsResponse submitDomainSpecialBizCredentials(const Models::SubmitDomainSpecialBizCredentialsRequest &request);

      /**
       * @summary 提交邮箱验证
       *
       * @param request SubmitEmailVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitEmailVerificationResponse
       */
      Models::SubmitEmailVerificationResponse submitEmailVerificationWithOptions(const Models::SubmitEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交邮箱验证
       *
       * @param request SubmitEmailVerificationRequest
       * @return SubmitEmailVerificationResponse
       */
      Models::SubmitEmailVerificationResponse submitEmailVerification(const Models::SubmitEmailVerificationRequest &request);

      /**
       * @summary 提交申请信息
       *
       * @param request SubmitOperationAuditInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitOperationAuditInfoResponse
       */
      Models::SubmitOperationAuditInfoResponse submitOperationAuditInfoWithOptions(const Models::SubmitOperationAuditInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交申请信息
       *
       * @param request SubmitOperationAuditInfoRequest
       * @return SubmitOperationAuditInfoResponse
       */
      Models::SubmitOperationAuditInfoResponse submitOperationAuditInfo(const Models::SubmitOperationAuditInfoRequest &request);

      /**
       * @summary 提交证件资料
       *
       * @param request SubmitOperationCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitOperationCredentialsResponse
       */
      Models::SubmitOperationCredentialsResponse submitOperationCredentialsWithOptions(const Models::SubmitOperationCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交证件资料
       *
       * @param request SubmitOperationCredentialsRequest
       * @return SubmitOperationCredentialsResponse
       */
      Models::SubmitOperationCredentialsResponse submitOperationCredentials(const Models::SubmitOperationCredentialsRequest &request);

      /**
       * @param request TransferInCheckMailTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferInCheckMailTokenResponse
       */
      Models::TransferInCheckMailTokenResponse transferInCheckMailTokenWithOptions(const Models::TransferInCheckMailTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request TransferInCheckMailTokenRequest
       * @return TransferInCheckMailTokenResponse
       */
      Models::TransferInCheckMailTokenResponse transferInCheckMailToken(const Models::TransferInCheckMailTokenRequest &request);

      /**
       * @param request TransferInReenterTransferAuthorizationCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferInReenterTransferAuthorizationCodeResponse
       */
      Models::TransferInReenterTransferAuthorizationCodeResponse transferInReenterTransferAuthorizationCodeWithOptions(const Models::TransferInReenterTransferAuthorizationCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request TransferInReenterTransferAuthorizationCodeRequest
       * @return TransferInReenterTransferAuthorizationCodeResponse
       */
      Models::TransferInReenterTransferAuthorizationCodeResponse transferInReenterTransferAuthorizationCode(const Models::TransferInReenterTransferAuthorizationCodeRequest &request);

      /**
       * @param request TransferInRefetchWhoisEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferInRefetchWhoisEmailResponse
       */
      Models::TransferInRefetchWhoisEmailResponse transferInRefetchWhoisEmailWithOptions(const Models::TransferInRefetchWhoisEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request TransferInRefetchWhoisEmailRequest
       * @return TransferInRefetchWhoisEmailResponse
       */
      Models::TransferInRefetchWhoisEmailResponse transferInRefetchWhoisEmail(const Models::TransferInRefetchWhoisEmailRequest &request);

      /**
       * @param request TransferInResendMailTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferInResendMailTokenResponse
       */
      Models::TransferInResendMailTokenResponse transferInResendMailTokenWithOptions(const Models::TransferInResendMailTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request TransferInResendMailTokenRequest
       * @return TransferInResendMailTokenResponse
       */
      Models::TransferInResendMailTokenResponse transferInResendMailToken(const Models::TransferInResendMailTokenRequest &request);

      /**
       * @summary 向分组设置域名
       *
       * @param request UpdateDomainToDomainGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDomainToDomainGroupResponse
       */
      Models::UpdateDomainToDomainGroupResponse updateDomainToDomainGroupWithOptions(const Models::UpdateDomainToDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 向分组设置域名
       *
       * @param request UpdateDomainToDomainGroupRequest
       * @return UpdateDomainToDomainGroupResponse
       */
      Models::UpdateDomainToDomainGroupResponse updateDomainToDomainGroup(const Models::UpdateDomainToDomainGroupRequest &request);

      /**
       * @summary 校验联系人信息
       *
       * @param request VerifyContactFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyContactFieldResponse
       */
      Models::VerifyContactFieldResponse verifyContactFieldWithOptions(const Models::VerifyContactFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验联系人信息
       *
       * @param request VerifyContactFieldRequest
       * @return VerifyContactFieldResponse
       */
      Models::VerifyContactFieldResponse verifyContactField(const Models::VerifyContactFieldRequest &request);

      /**
       * @summary 验证邮箱Token
       *
       * @param request VerifyEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyEmailResponse
       */
      Models::VerifyEmailResponse verifyEmailWithOptions(const Models::VerifyEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 验证邮箱Token
       *
       * @param request VerifyEmailRequest
       * @return VerifyEmailResponse
       */
      Models::VerifyEmailResponse verifyEmail(const Models::VerifyEmailRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
