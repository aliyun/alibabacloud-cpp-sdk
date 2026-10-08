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
       * @summary Invoke AcknowledgeTaskResult to confirm the task detail result.
       *
       * @description After the task detail result is confirmed, it can no longer be queried from the [PollTaskResult](https://help.aliyun.com/document_detail/69361.html) API.
       *
       * @param request AcknowledgeTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcknowledgeTaskResultResponse
       */
      Models::AcknowledgeTaskResultResponse acknowledgeTaskResultWithOptions(const Models::AcknowledgeTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke AcknowledgeTaskResult to confirm the task detail result.
       *
       * @description After the task detail result is confirmed, it can no longer be queried from the [PollTaskResult](https://help.aliyun.com/document_detail/69361.html) API.
       *
       * @param request AcknowledgeTaskResultRequest
       * @return AcknowledgeTaskResultResponse
       */
      Models::AcknowledgeTaskResultResponse acknowledgeTaskResult(const Models::AcknowledgeTaskResultRequest &request);

      /**
       * @summary You can invoke BatchFuzzyMatchDomainSensitiveWord to batch check whether domain names contain sensitive words.
       *
       * @param request BatchFuzzyMatchDomainSensitiveWordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchFuzzyMatchDomainSensitiveWordResponse
       */
      Models::BatchFuzzyMatchDomainSensitiveWordResponse batchFuzzyMatchDomainSensitiveWordWithOptions(const Models::BatchFuzzyMatchDomainSensitiveWordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke BatchFuzzyMatchDomainSensitiveWord to batch check whether domain names contain sensitive words.
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
       * @summary Invoke the CancelOperationAudit API to cancel a self-service operation audit.
       *
       * @param request CancelOperationAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelOperationAuditResponse
       */
      Models::CancelOperationAuditResponse cancelOperationAuditWithOptions(const Models::CancelOperationAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the CancelOperationAudit API to cancel a self-service operation audit.
       *
       * @param request CancelOperationAuditRequest
       * @return CancelOperationAuditResponse
       */
      Models::CancelOperationAuditResponse cancelOperationAudit(const Models::CancelOperationAuditRequest &request);

      /**
       * @summary Cancel the qualification verification for ".restaurant" and ".trademark" domain names.
       *
       * @param request CancelQualificationVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelQualificationVerificationResponse
       */
      Models::CancelQualificationVerificationResponse cancelQualificationVerificationWithOptions(const Models::CancelQualificationVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancel the qualification verification for ".restaurant" and ".trademark" domain names.
       *
       * @param request CancelQualificationVerificationRequest
       * @return CancelQualificationVerificationResponse
       */
      Models::CancelQualificationVerificationResponse cancelQualificationVerification(const Models::CancelQualificationVerificationRequest &request);

      /**
       * @summary Invoke CancelTask to cancel an ongoing job.
       *
       * @param request CancelTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTaskWithOptions(const Models::CancelTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke CancelTask to cancel an ongoing job.
       *
       * @param request CancelTaskRequest
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTask(const Models::CancelTaskRequest &request);

      /**
       * @summary Modify the resource group to which a domain name belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the resource group to which a domain name belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Invoke the CheckDomain API to check whether a domain name can be registered.
       *
       * @description For the legitimacy requirements of domain names, see [Domain Name Legitimacy](https://help.aliyun.com/document_detail/67788.html).
       * > The CheckDomain API has a frequency limit. The combined queries per second (QPS) limit for an Alibaba Cloud account and its RAM users is 10, and the total QPS limit for this API is 100.
       *
       * @param request CheckDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDomainResponse
       */
      Models::CheckDomainResponse checkDomainWithOptions(const Models::CheckDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the CheckDomain API to check whether a domain name can be registered.
       *
       * @description For the legitimacy requirements of domain names, see [Domain Name Legitimacy](https://help.aliyun.com/document_detail/67788.html).
       * > The CheckDomain API has a frequency limit. The combined queries per second (QPS) limit for an Alibaba Cloud account and its RAM users is 10, and the total QPS limit for this API is 100.
       *
       * @param request CheckDomainRequest
       * @return CheckDomainResponse
       */
      Models::CheckDomainResponse checkDomain(const Models::CheckDomainRequest &request);

      /**
       * @summary Query the trademark keyword key based on the provided domain name.
       *
       * @param request CheckDomainSunriseClaimRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDomainSunriseClaimResponse
       */
      Models::CheckDomainSunriseClaimResponse checkDomainSunriseClaimWithOptions(const Models::CheckDomainSunriseClaimRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the trademark keyword key based on the provided domain name.
       *
       * @param request CheckDomainSunriseClaimRequest
       * @return CheckDomainSunriseClaimResponse
       */
      Models::CheckDomainSunriseClaimResponse checkDomainSunriseClaim(const Models::CheckDomainSunriseClaimRequest &request);

      /**
       * @summary Calls CheckIntlFixPriceDomainStatus to check the status and price of an international fixed-price domain name that is on sale.
       *
       * @param request CheckIntlFixPriceDomainStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckIntlFixPriceDomainStatusResponse
       */
      Models::CheckIntlFixPriceDomainStatusResponse checkIntlFixPriceDomainStatusWithOptions(const Models::CheckIntlFixPriceDomainStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls CheckIntlFixPriceDomainStatus to check the status and price of an international fixed-price domain name that is on sale.
       *
       * @param request CheckIntlFixPriceDomainStatusRequest
       * @return CheckIntlFixPriceDomainStatusResponse
       */
      Models::CheckIntlFixPriceDomainStatusResponse checkIntlFixPriceDomainStatus(const Models::CheckIntlFixPriceDomainStatusRequest &request);

      /**
       * @summary Detects the maximum number of years for which a domain name can be purchased or renewed.
       *
       * @param request CheckMaxYearOfServerLockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckMaxYearOfServerLockResponse
       */
      Models::CheckMaxYearOfServerLockResponse checkMaxYearOfServerLockWithOptions(const Models::CheckMaxYearOfServerLockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects the maximum number of years for which a domain name can be purchased or renewed.
       *
       * @param request CheckMaxYearOfServerLockRequest
       * @return CheckMaxYearOfServerLockResponse
       */
      Models::CheckMaxYearOfServerLockResponse checkMaxYearOfServerLock(const Models::CheckMaxYearOfServerLockRequest &request);

      /**
       * @summary Checks whether the domain name has a registry lock service request with the **Processing** status at the domain name registry.
       *
       * @param request CheckProcessingServerLockApplyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckProcessingServerLockApplyResponse
       */
      Models::CheckProcessingServerLockApplyResponse checkProcessingServerLockApplyWithOptions(const Models::CheckProcessingServerLockApplyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the domain name has a registry lock service request with the **Processing** status at the domain name registry.
       *
       * @param request CheckProcessingServerLockApplyRequest
       * @return CheckProcessingServerLockApplyResponse
       */
      Models::CheckProcessingServerLockApplyResponse checkProcessingServerLockApply(const Models::CheckProcessingServerLockApplyRequest &request);

      /**
       * @summary Invoke the CheckTransferInFeasibility API to validate whether a domain name can be transferred in.
       *
       * @param request CheckTransferInFeasibilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckTransferInFeasibilityResponse
       */
      Models::CheckTransferInFeasibilityResponse checkTransferInFeasibilityWithOptions(const Models::CheckTransferInFeasibilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the CheckTransferInFeasibility API to validate whether a domain name can be transferred in.
       *
       * @param request CheckTransferInFeasibilityRequest
       * @return CheckTransferInFeasibilityResponse
       */
      Models::CheckTransferInFeasibilityResponse checkTransferInFeasibility(const Models::CheckTransferInFeasibilityRequest &request);

      /**
       * @summary Invoke ConfirmTransferInEmail to confirm the transfer-in mailbox.
       *
       * @description Directly confirm the transfer-in mailbox.
       *
       * @param request ConfirmTransferInEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmTransferInEmailResponse
       */
      Models::ConfirmTransferInEmailResponse confirmTransferInEmailWithOptions(const Models::ConfirmTransferInEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke ConfirmTransferInEmail to confirm the transfer-in mailbox.
       *
       * @description Directly confirm the transfer-in mailbox.
       *
       * @param request ConfirmTransferInEmailRequest
       * @return ConfirmTransferInEmailResponse
       */
      Models::ConfirmTransferInEmailResponse confirmTransferInEmail(const Models::ConfirmTransferInEmailRequest &request);

      /**
       * @summary Creates an international fixed-price domain name order by calling CreateIntlFixedPriceDomainOrder.
       *
       * @param request CreateIntlFixedPriceDomainOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIntlFixedPriceDomainOrderResponse
       */
      Models::CreateIntlFixedPriceDomainOrderResponse createIntlFixedPriceDomainOrderWithOptions(const Models::CreateIntlFixedPriceDomainOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an international fixed-price domain name order by calling CreateIntlFixedPriceDomainOrder.
       *
       * @param request CreateIntlFixedPriceDomainOrderRequest
       * @return CreateIntlFixedPriceDomainOrderResponse
       */
      Models::CreateIntlFixedPriceDomainOrderResponse createIntlFixedPriceDomainOrder(const Models::CreateIntlFixedPriceDomainOrderRequest &request);

      /**
       * @summary Batch delete domain contact templates.
       *
       * @param request DeleteContactTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactTemplatesResponse
       */
      Models::DeleteContactTemplatesResponse deleteContactTemplatesWithOptions(const Models::DeleteContactTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch delete domain contact templates.
       *
       * @param request DeleteContactTemplatesRequest
       * @return DeleteContactTemplatesResponse
       */
      Models::DeleteContactTemplatesResponse deleteContactTemplates(const Models::DeleteContactTemplatesRequest &request);

      /**
       * @summary Deleting a group containing more than 1,000 domain names is an asynchronous procedure. You must wait for the system to process the request.
       *
       * @param request DeleteDomainGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainGroupResponse
       */
      Models::DeleteDomainGroupResponse deleteDomainGroupWithOptions(const Models::DeleteDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deleting a group containing more than 1,000 domain names is an asynchronous procedure. You must wait for the system to process the request.
       *
       * @param request DeleteDomainGroupRequest
       * @return DeleteDomainGroupResponse
       */
      Models::DeleteDomainGroupResponse deleteDomainGroup(const Models::DeleteDomainGroupRequest &request);

      /**
       * @summary Invoke the DeleteEmailVerification API to delete an email address that has passed verification.
       *
       * @description > If you want to use the email address again after deletion, you must complete email verification again.
       *
       * @param request DeleteEmailVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEmailVerificationResponse
       */
      Models::DeleteEmailVerificationResponse deleteEmailVerificationWithOptions(const Models::DeleteEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the DeleteEmailVerification API to delete an email address that has passed verification.
       *
       * @description > If you want to use the email address again after deletion, you must complete email verification again.
       *
       * @param request DeleteEmailVerificationRequest
       * @return DeleteEmailVerificationResponse
       */
      Models::DeleteEmailVerificationResponse deleteEmailVerification(const Models::DeleteEmailVerificationRequest &request);

      /**
       * @summary Invoke the DeleteRegistrantProfile API to delete a specified domain name registrant profile.
       *
       * @description > If the API call succeeds, the System immediately deletes the corresponding domain name registrant profile.
       *
       * @param request DeleteRegistrantProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRegistrantProfileResponse
       */
      Models::DeleteRegistrantProfileResponse deleteRegistrantProfileWithOptions(const Models::DeleteRegistrantProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the DeleteRegistrantProfile API to delete a specified domain name registrant profile.
       *
       * @description > If the API call succeeds, the System immediately deletes the corresponding domain name registrant profile.
       *
       * @param request DeleteRegistrantProfileRequest
       * @return DeleteRegistrantProfileResponse
       */
      Models::DeleteRegistrantProfileResponse deleteRegistrantProfile(const Models::DeleteRegistrantProfileRequest &request);

      /**
       * @summary Retrieves information from the domain name knowledge base.
       *
       * @param request DomainKnowledgeRetrieveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DomainKnowledgeRetrieveResponse
       */
      Models::DomainKnowledgeRetrieveResponse domainKnowledgeRetrieveWithOptions(const Models::DomainKnowledgeRetrieveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information from the domain name knowledge base.
       *
       * @param request DomainKnowledgeRetrieveRequest
       * @return DomainKnowledgeRetrieveResponse
       */
      Models::DomainKnowledgeRetrieveResponse domainKnowledgeRetrieve(const Models::DomainKnowledgeRetrieveRequest &request);

      /**
       * @summary Cancel the special business process for a domain name
       *
       * @param request DomainSpecialBizCancelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DomainSpecialBizCancelResponse
       */
      Models::DomainSpecialBizCancelResponse domainSpecialBizCancelWithOptions(const Models::DomainSpecialBizCancelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancel the special business process for a domain name
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
       * @summary Invoke FuzzyMatchDomainSensitiveWord to check whether a domain name contains sensitive words.
       *
       * @param request FuzzyMatchDomainSensitiveWordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FuzzyMatchDomainSensitiveWordResponse
       */
      Models::FuzzyMatchDomainSensitiveWordResponse fuzzyMatchDomainSensitiveWordWithOptions(const Models::FuzzyMatchDomainSensitiveWordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke FuzzyMatchDomainSensitiveWord to check whether a domain name contains sensitive words.
       *
       * @param request FuzzyMatchDomainSensitiveWordRequest
       * @return FuzzyMatchDomainSensitiveWordResponse
       */
      Models::FuzzyMatchDomainSensitiveWordResponse fuzzyMatchDomainSensitiveWord(const Models::FuzzyMatchDomainSensitiveWordRequest &request);

      /**
       * @summary Queries the list of domain names for fixed-price orders at the international site (alibabacloud.com).
       *
       * @param request GetIntlFixPriceDomainListUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIntlFixPriceDomainListUrlResponse
       */
      Models::GetIntlFixPriceDomainListUrlResponse getIntlFixPriceDomainListUrlWithOptions(const Models::GetIntlFixPriceDomainListUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of domain names for fixed-price orders at the international site (alibabacloud.com).
       *
       * @param request GetIntlFixPriceDomainListUrlRequest
       * @return GetIntlFixPriceDomainListUrlResponse
       */
      Models::GetIntlFixPriceDomainListUrlResponse getIntlFixPriceDomainListUrl(const Models::GetIntlFixPriceDomainListUrlRequest &request);

      /**
       * @summary Invoke GetOperationOssUploadPolicy to obtain the storage information for review materials.
       *
       * @param request GetOperationOssUploadPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOperationOssUploadPolicyResponse
       */
      Models::GetOperationOssUploadPolicyResponse getOperationOssUploadPolicyWithOptions(const Models::GetOperationOssUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke GetOperationOssUploadPolicy to obtain the storage information for review materials.
       *
       * @param request GetOperationOssUploadPolicyRequest
       * @return GetOperationOssUploadPolicyResponse
       */
      Models::GetOperationOssUploadPolicyResponse getOperationOssUploadPolicy(const Models::GetOperationOssUploadPolicyRequest &request);

      /**
       * @summary Obtain the authorization policy corresponding to the ".restaurant" and ".trademark" domain names.
       *
       * @param request GetQualificationUploadPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualificationUploadPolicyResponse
       */
      Models::GetQualificationUploadPolicyResponse getQualificationUploadPolicyWithOptions(const Models::GetQualificationUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the authorization policy corresponding to the ".restaurant" and ".trademark" domain names.
       *
       * @param request GetQualificationUploadPolicyRequest
       * @return GetQualificationUploadPolicyResponse
       */
      Models::GetQualificationUploadPolicyResponse getQualificationUploadPolicy(const Models::GetQualificationUploadPolicyRequest &request);

      /**
       * @summary Invoke the ListEmailVerification API to query the email verification list.
       *
       * @param request ListEmailVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEmailVerificationResponse
       */
      Models::ListEmailVerificationResponse listEmailVerificationWithOptions(const Models::ListEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the ListEmailVerification API to query the email verification list.
       *
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
       * @summary Call `LookupTmchNotice` to look up a trademark term from the TMCH by passing it as the `key`.
       *
       * @param request LookupTmchNoticeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LookupTmchNoticeResponse
       */
      Models::LookupTmchNoticeResponse lookupTmchNoticeWithOptions(const Models::LookupTmchNoticeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call `LookupTmchNotice` to look up a trademark term from the TMCH by passing it as the `key`.
       *
       * @param request LookupTmchNoticeRequest
       * @return LookupTmchNoticeResponse
       */
      Models::LookupTmchNoticeResponse lookupTmchNotice(const Models::LookupTmchNoticeRequest &request);

      /**
       * @summary Invoke PollTaskResult to obtain a list of domain name job details that have completed execution (including jobs that succeeded or failed and exceeded the retry count).
       *
       * @description This API must be used together with [AcknowledgeTaskResult](~~AcknowledgeTaskResult~~) to confirm job results. Once a job result is confirmed, the corresponding job record can no longer be queried through this API.
       *
       * @param request PollTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PollTaskResultResponse
       */
      Models::PollTaskResultResponse pollTaskResultWithOptions(const Models::PollTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke PollTaskResult to obtain a list of domain name job details that have completed execution (including jobs that succeeded or failed and exceeded the retry count).
       *
       * @description This API must be used together with [AcknowledgeTaskResult](~~AcknowledgeTaskResult~~) to confirm job results. Once a job result is confirmed, the corresponding job record can no longer be queried through this API.
       *
       * @param request PollTaskResultRequest
       * @return PollTaskResultResponse
       */
      Models::PollTaskResultResponse pollTaskResult(const Models::PollTaskResultRequest &request);

      /**
       * @summary Invoke QueryAdvancedDomainList to perform an advanced search of the domain name list.
       *
       * @description Search for domain names under your current Alibaba Cloud account that meet specific conditions. A maximum of **5000** entries are displayed. If the result reaches **5000** entries, narrow your search scope.
       *
       * @param request QueryAdvancedDomainListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAdvancedDomainListResponse
       */
      Models::QueryAdvancedDomainListResponse queryAdvancedDomainListWithOptions(const Models::QueryAdvancedDomainListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke QueryAdvancedDomainList to perform an advanced search of the domain name list.
       *
       * @description Search for domain names under your current Alibaba Cloud account that meet specific conditions. A maximum of **5000** entries are displayed. If the result reaches **5000** entries, narrow your search scope.
       *
       * @param request QueryAdvancedDomainListRequest
       * @return QueryAdvancedDomainListResponse
       */
      Models::QueryAdvancedDomainListResponse queryAdvancedDomainList(const Models::QueryAdvancedDomainListRequest &request);

      /**
       * @summary Invoke the QueryArtExtension API to query Art extension information.
       *
       * @param request QueryArtExtensionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryArtExtensionResponse
       */
      Models::QueryArtExtensionResponse queryArtExtensionWithOptions(const Models::QueryArtExtensionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the QueryArtExtension API to query Art extension information.
       *
       * @param request QueryArtExtensionRequest
       * @return QueryArtExtensionResponse
       */
      Models::QueryArtExtensionResponse queryArtExtension(const Models::QueryArtExtensionRequest &request);

      /**
       * @summary Call QueryChangeLogList to get a paginated list of the operation logs.
       *
       * @param request QueryChangeLogListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryChangeLogListResponse
       */
      Models::QueryChangeLogListResponse queryChangeLogListWithOptions(const Models::QueryChangeLogListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call QueryChangeLogList to get a paginated list of the operation logs.
       *
       * @param request QueryChangeLogListRequest
       * @return QueryChangeLogListResponse
       */
      Models::QueryChangeLogListResponse queryChangeLogList(const Models::QueryChangeLogListRequest &request);

      /**
       * @summary Invoke QueryContactInfo to query domain contact information.
       *
       * @param request QueryContactInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryContactInfoResponse
       */
      Models::QueryContactInfoResponse queryContactInfoWithOptions(const Models::QueryContactInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke QueryContactInfo to query domain contact information.
       *
       * @param request QueryContactInfoRequest
       * @return QueryContactInfoResponse
       */
      Models::QueryContactInfoResponse queryContactInfo(const Models::QueryContactInfoRequest &request);

      /**
       * @summary Invoke QueryDSRecord to query the DS records of a domain name.
       *
       * @param request QueryDSRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDSRecordResponse
       */
      Models::QueryDSRecordResponse queryDSRecordWithOptions(const Models::QueryDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke QueryDSRecord to query the DS records of a domain name.
       *
       * @param request QueryDSRecordRequest
       * @return QueryDSRecordResponse
       */
      Models::QueryDSRecordResponse queryDSRecord(const Models::QueryDSRecordRequest &request);

      /**
       * @summary Queries the DNS host for a domain name.
       *
       * @param request QueryDnsHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDnsHostResponse
       */
      Models::QueryDnsHostResponse queryDnsHostWithOptions(const Models::QueryDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the DNS host for a domain name.
       *
       * @param request QueryDnsHostRequest
       * @return QueryDnsHostResponse
       */
      Models::QueryDnsHostResponse queryDnsHost(const Models::QueryDnsHostRequest &request);

      /**
       * @summary Invoke the QueryDomainAdminDivision API to query Chinese administrative regions.
       *
       * @param request QueryDomainAdminDivisionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainAdminDivisionResponse
       */
      Models::QueryDomainAdminDivisionResponse queryDomainAdminDivisionWithOptions(const Models::QueryDomainAdminDivisionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the QueryDomainAdminDivision API to query Chinese administrative regions.
       *
       * @param request QueryDomainAdminDivisionRequest
       * @return QueryDomainAdminDivisionResponse
       */
      Models::QueryDomainAdminDivisionResponse queryDomainAdminDivision(const Models::QueryDomainAdminDivisionRequest &request);

      /**
       * @summary Call `QueryDomainByDomainName` to retrieve information about a domain name.
       *
       * @param request QueryDomainByDomainNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainByDomainNameResponse
       */
      Models::QueryDomainByDomainNameResponse queryDomainByDomainNameWithOptions(const Models::QueryDomainByDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call `QueryDomainByDomainName` to retrieve information about a domain name.
       *
       * @param request QueryDomainByDomainNameRequest
       * @return QueryDomainByDomainNameResponse
       */
      Models::QueryDomainByDomainNameResponse queryDomainByDomainName(const Models::QueryDomainByDomainNameRequest &request);

      /**
       * @summary Call `QueryDomainByInstanceId` to retrieve the basic information of a domain name by instance ID.
       *
       * @param request QueryDomainByInstanceIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainByInstanceIdResponse
       */
      Models::QueryDomainByInstanceIdResponse queryDomainByInstanceIdWithOptions(const Models::QueryDomainByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call `QueryDomainByInstanceId` to retrieve the basic information of a domain name by instance ID.
       *
       * @param request QueryDomainByInstanceIdRequest
       * @return QueryDomainByInstanceIdResponse
       */
      Models::QueryDomainByInstanceIdResponse queryDomainByInstanceId(const Models::QueryDomainByInstanceIdRequest &request);

      /**
       * @summary Queries a list of domain groups.
       *
       * @param request QueryDomainGroupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainGroupListResponse
       */
      Models::QueryDomainGroupListResponse queryDomainGroupListWithOptions(const Models::QueryDomainGroupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of domain groups.
       *
       * @param request QueryDomainGroupListRequest
       * @return QueryDomainGroupListResponse
       */
      Models::QueryDomainGroupListResponse queryDomainGroupList(const Models::QueryDomainGroupListRequest &request);

      /**
       * @summary Returns a paginated list of domain names in your account.
       *
       * @param request QueryDomainListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainListResponse
       */
      Models::QueryDomainListResponse queryDomainListWithOptions(const Models::QueryDomainListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a paginated list of domain names in your account.
       *
       * @param request QueryDomainListRequest
       * @return QueryDomainListResponse
       */
      Models::QueryDomainListResponse queryDomainList(const Models::QueryDomainListRequest &request);

      /**
       * @summary Invoke QueryDomainRealNameVerificationInfo to query real-name verification information for a domain name.
       *
       * @param request QueryDomainRealNameVerificationInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainRealNameVerificationInfoResponse
       */
      Models::QueryDomainRealNameVerificationInfoResponse queryDomainRealNameVerificationInfoWithOptions(const Models::QueryDomainRealNameVerificationInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke QueryDomainRealNameVerificationInfo to query real-name verification information for a domain name.
       *
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
       * @summary Query domain name special business details
       *
       * @param request QueryDomainSpecialBizDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainSpecialBizDetailResponse
       */
      Models::QueryDomainSpecialBizDetailResponse queryDomainSpecialBizDetailWithOptions(const Models::QueryDomainSpecialBizDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query domain name special business details
       *
       * @param request QueryDomainSpecialBizDetailRequest
       * @return QueryDomainSpecialBizDetailResponse
       */
      Models::QueryDomainSpecialBizDetailResponse queryDomainSpecialBizDetail(const Models::QueryDomainSpecialBizDetailRequest &request);

      /**
       * @summary Query domain special business details by domain name
       *
       * @param request QueryDomainSpecialBizInfoByDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainSpecialBizInfoByDomainResponse
       */
      Models::QueryDomainSpecialBizInfoByDomainResponse queryDomainSpecialBizInfoByDomainWithOptions(const Models::QueryDomainSpecialBizInfoByDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query domain special business details by domain name
       *
       * @param request QueryDomainSpecialBizInfoByDomainRequest
       * @return QueryDomainSpecialBizInfoByDomainResponse
       */
      Models::QueryDomainSpecialBizInfoByDomainResponse queryDomainSpecialBizInfoByDomain(const Models::QueryDomainSpecialBizInfoByDomainRequest &request);

      /**
       * @summary Queries the available domain name suffixes.
       *
       * @param request QueryDomainSuffixRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainSuffixResponse
       */
      Models::QueryDomainSuffixResponse queryDomainSuffixWithOptions(const Models::QueryDomainSuffixRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available domain name suffixes.
       *
       * @param request QueryDomainSuffixRequest
       * @return QueryDomainSuffixResponse
       */
      Models::QueryDomainSuffixResponse queryDomainSuffix(const Models::QueryDomainSuffixRequest &request);

      /**
       * @summary Invoke the QueryEmailVerification API to query the email verification result.
       *
       * @param request QueryEmailVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEmailVerificationResponse
       */
      Models::QueryEmailVerificationResponse queryEmailVerificationWithOptions(const Models::QueryEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the QueryEmailVerification API to query the email verification result.
       *
       * @param request QueryEmailVerificationRequest
       * @return QueryEmailVerificationResponse
       */
      Models::QueryEmailVerificationResponse queryEmailVerification(const Models::QueryEmailVerificationRequest &request);

      /**
       * @summary Invoke the QueryEnsAssociation API to query the wallet address attached in the ENS system.
       *
       * @param request QueryEnsAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEnsAssociationResponse
       */
      Models::QueryEnsAssociationResponse queryEnsAssociationWithOptions(const Models::QueryEnsAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the QueryEnsAssociation API to query the wallet address attached in the ENS system.
       *
       * @param request QueryEnsAssociationRequest
       * @return QueryEnsAssociationResponse
       */
      Models::QueryEnsAssociationResponse queryEnsAssociation(const Models::QueryEnsAssociationRequest &request);

      /**
       * @summary Query the reasons for real-name verification (including naming review) failure for a domain name.
       *
       * @param request QueryFailReasonForDomainRealNameVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFailReasonForDomainRealNameVerificationResponse
       */
      Models::QueryFailReasonForDomainRealNameVerificationResponse queryFailReasonForDomainRealNameVerificationWithOptions(const Models::QueryFailReasonForDomainRealNameVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the reasons for real-name verification (including naming review) failure for a domain name.
       *
       * @param request QueryFailReasonForDomainRealNameVerificationRequest
       * @return QueryFailReasonForDomainRealNameVerificationResponse
       */
      Models::QueryFailReasonForDomainRealNameVerificationResponse queryFailReasonForDomainRealNameVerification(const Models::QueryFailReasonForDomainRealNameVerificationRequest &request);

      /**
       * @summary Invoke the QueryFailReasonForRegistrantProfileRealNameVerification API to query the reasons why identity verification for an information template failed the Review.
       *
       * @param request QueryFailReasonForRegistrantProfileRealNameVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFailReasonForRegistrantProfileRealNameVerificationResponse
       */
      Models::QueryFailReasonForRegistrantProfileRealNameVerificationResponse queryFailReasonForRegistrantProfileRealNameVerificationWithOptions(const Models::QueryFailReasonForRegistrantProfileRealNameVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the QueryFailReasonForRegistrantProfileRealNameVerification API to query the reasons why identity verification for an information template failed the Review.
       *
       * @param request QueryFailReasonForRegistrantProfileRealNameVerificationRequest
       * @return QueryFailReasonForRegistrantProfileRealNameVerificationResponse
       */
      Models::QueryFailReasonForRegistrantProfileRealNameVerificationResponse queryFailReasonForRegistrantProfileRealNameVerification(const Models::QueryFailReasonForRegistrantProfileRealNameVerificationRequest &request);

      /**
       * @summary Query the reasons for qualification verification failure for ".restaurant" and ".trademark" domain names.
       *
       * @param request QueryFailingReasonListForQualificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFailingReasonListForQualificationResponse
       */
      Models::QueryFailingReasonListForQualificationResponse queryFailingReasonListForQualificationWithOptions(const Models::QueryFailingReasonListForQualificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the reasons for qualification verification failure for ".restaurant" and ".trademark" domain names.
       *
       * @param request QueryFailingReasonListForQualificationRequest
       * @return QueryFailingReasonListForQualificationResponse
       */
      Models::QueryFailingReasonListForQualificationResponse queryFailingReasonListForQualification(const Models::QueryFailingReasonListForQualificationRequest &request);

      /**
       * @summary Queries the list of international fixed-price orders by calling QueryIntlFixedPriceOrderList.
       *
       * @param request QueryIntlFixedPriceOrderListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryIntlFixedPriceOrderListResponse
       */
      Models::QueryIntlFixedPriceOrderListResponse queryIntlFixedPriceOrderListWithOptions(const Models::QueryIntlFixedPriceOrderListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of international fixed-price orders by calling QueryIntlFixedPriceOrderList.
       *
       * @param request QueryIntlFixedPriceOrderListRequest
       * @return QueryIntlFixedPriceOrderListResponse
       */
      Models::QueryIntlFixedPriceOrderListResponse queryIntlFixedPriceOrderList(const Models::QueryIntlFixedPriceOrderListRequest &request);

      /**
       * @summary Invoke QueryLocalEnsAssociation to query the ENS binding address recorded in the Alibaba Cloud system.
       *
       * @param request QueryLocalEnsAssociationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryLocalEnsAssociationResponse
       */
      Models::QueryLocalEnsAssociationResponse queryLocalEnsAssociationWithOptions(const Models::QueryLocalEnsAssociationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke QueryLocalEnsAssociation to query the ENS binding address recorded in the Alibaba Cloud system.
       *
       * @param request QueryLocalEnsAssociationRequest
       * @return QueryLocalEnsAssociationResponse
       */
      Models::QueryLocalEnsAssociationResponse queryLocalEnsAssociation(const Models::QueryLocalEnsAssociationRequest &request);

      /**
       * @summary Invoke the QueryOperationAuditInfoDetail API to query the details of a self-service operation review record.
       *
       * @param request QueryOperationAuditInfoDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryOperationAuditInfoDetailResponse
       */
      Models::QueryOperationAuditInfoDetailResponse queryOperationAuditInfoDetailWithOptions(const Models::QueryOperationAuditInfoDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the QueryOperationAuditInfoDetail API to query the details of a self-service operation review record.
       *
       * @param request QueryOperationAuditInfoDetailRequest
       * @return QueryOperationAuditInfoDetailResponse
       */
      Models::QueryOperationAuditInfoDetailResponse queryOperationAuditInfoDetail(const Models::QueryOperationAuditInfoDetailRequest &request);

      /**
       * @summary You can invoke QueryOperationAuditInfoList to query the list of review records for self-service operations.
       *
       * @param request QueryOperationAuditInfoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryOperationAuditInfoListResponse
       */
      Models::QueryOperationAuditInfoListResponse queryOperationAuditInfoListWithOptions(const Models::QueryOperationAuditInfoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke QueryOperationAuditInfoList to query the list of review records for self-service operations.
       *
       * @param request QueryOperationAuditInfoListRequest
       * @return QueryOperationAuditInfoListResponse
       */
      Models::QueryOperationAuditInfoListResponse queryOperationAuditInfoList(const Models::QueryOperationAuditInfoListRequest &request);

      /**
       * @summary Query the qualification verification details of ".restaurant" and ".trademark" domain names.
       *
       * @param request QueryQualificationDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryQualificationDetailResponse
       */
      Models::QueryQualificationDetailResponse queryQualificationDetailWithOptions(const Models::QueryQualificationDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the qualification verification details of ".restaurant" and ".trademark" domain names.
       *
       * @param request QueryQualificationDetailRequest
       * @return QueryQualificationDetailResponse
       */
      Models::QueryQualificationDetailResponse queryQualificationDetail(const Models::QueryQualificationDetailRequest &request);

      /**
       * @summary Invoke the QueryRegistrantProfileRealNameVerificationInfo API to query the identity verification documents of an information template.
       *
       * @param request QueryRegistrantProfileRealNameVerificationInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRegistrantProfileRealNameVerificationInfoResponse
       */
      Models::QueryRegistrantProfileRealNameVerificationInfoResponse queryRegistrantProfileRealNameVerificationInfoWithOptions(const Models::QueryRegistrantProfileRealNameVerificationInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the QueryRegistrantProfileRealNameVerificationInfo API to query the identity verification documents of an information template.
       *
       * @param request QueryRegistrantProfileRealNameVerificationInfoRequest
       * @return QueryRegistrantProfileRealNameVerificationInfoResponse
       */
      Models::QueryRegistrantProfileRealNameVerificationInfoResponse queryRegistrantProfileRealNameVerificationInfo(const Models::QueryRegistrantProfileRealNameVerificationInfoRequest &request);

      /**
       * @summary Queries the domain name registrant profiles under the current account.
       *
       * @description You can pass in optional parameters to help you find registrant profiles more precisely. For example:
       * - If you already know the ID of a registrant profile, you can pass in the registrant profile ID to query detailed profile information.
       * - If you do not know the ID of a registrant profile, you can pass in parameters such as the domain name registrant name to query detailed profile information.
       *
       * @param request QueryRegistrantProfilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRegistrantProfilesResponse
       */
      Models::QueryRegistrantProfilesResponse queryRegistrantProfilesWithOptions(const Models::QueryRegistrantProfilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the domain name registrant profiles under the current account.
       *
       * @description You can pass in optional parameters to help you find registrant profiles more precisely. For example:
       * - If you already know the ID of a registrant profile, you can pass in the registrant profile ID to query detailed profile information.
       * - If you do not know the ID of a registrant profile, you can pass in parameters such as the domain name registrant name to query detailed profile information.
       *
       * @param request QueryRegistrantProfilesRequest
       * @return QueryRegistrantProfilesResponse
       */
      Models::QueryRegistrantProfilesResponse queryRegistrantProfiles(const Models::QueryRegistrantProfilesRequest &request);

      /**
       * @summary Query the registry lock details of a domain name.
       *
       * @param request QueryServerLockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryServerLockResponse
       */
      Models::QueryServerLockResponse queryServerLockWithOptions(const Models::QueryServerLockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the registry lock details of a domain name.
       *
       * @param request QueryServerLockRequest
       * @return QueryServerLockResponse
       */
      Models::QueryServerLockResponse queryServerLock(const Models::QueryServerLockRequest &request);

      /**
       * @summary You can invoke QueryTaskDetailHistory to perform a paged query on the detail history list of a specified domain name job.
       *
       * @param request QueryTaskDetailHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTaskDetailHistoryResponse
       */
      Models::QueryTaskDetailHistoryResponse queryTaskDetailHistoryWithOptions(const Models::QueryTaskDetailHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke QueryTaskDetailHistory to perform a paged query on the detail history list of a specified domain name job.
       *
       * @param request QueryTaskDetailHistoryRequest
       * @return QueryTaskDetailHistoryResponse
       */
      Models::QueryTaskDetailHistoryResponse queryTaskDetailHistory(const Models::QueryTaskDetailHistoryRequest &request);

      /**
       * @summary Queries the details list of a specified domain name task by paging.
       *
       * @param request QueryTaskDetailListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTaskDetailListResponse
       */
      Models::QueryTaskDetailListResponse queryTaskDetailListWithOptions(const Models::QueryTaskDetailListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details list of a specified domain name task by paging.
       *
       * @param request QueryTaskDetailListRequest
       * @return QueryTaskDetailListResponse
       */
      Models::QueryTaskDetailListResponse queryTaskDetailList(const Models::QueryTaskDetailListRequest &request);

      /**
       * @summary You can invoke QueryTaskInfoHistory to perform a paged query of the domain name job history list under your account.
       *
       * @param request QueryTaskInfoHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTaskInfoHistoryResponse
       */
      Models::QueryTaskInfoHistoryResponse queryTaskInfoHistoryWithOptions(const Models::QueryTaskInfoHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke QueryTaskInfoHistory to perform a paged query of the domain name job history list under your account.
       *
       * @param request QueryTaskInfoHistoryRequest
       * @return QueryTaskInfoHistoryResponse
       */
      Models::QueryTaskInfoHistoryResponse queryTaskInfoHistory(const Models::QueryTaskInfoHistoryRequest &request);

      /**
       * @summary Invoke QueryTaskList to perform a paged query of the domain name job list under your account.
       *
       * @param request QueryTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTaskListResponse
       */
      Models::QueryTaskListResponse queryTaskListWithOptions(const Models::QueryTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke QueryTaskList to perform a paged query of the domain name job list under your account.
       *
       * @param request QueryTaskListRequest
       * @return QueryTaskListResponse
       */
      Models::QueryTaskListResponse queryTaskList(const Models::QueryTaskListRequest &request);

      /**
       * @summary Invoke QueryTransferInByInstanceId to query domain name transfer-in information by instance ID.
       *
       * @param request QueryTransferInByInstanceIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTransferInByInstanceIdResponse
       */
      Models::QueryTransferInByInstanceIdResponse queryTransferInByInstanceIdWithOptions(const Models::QueryTransferInByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke QueryTransferInByInstanceId to query domain name transfer-in information by instance ID.
       *
       * @param request QueryTransferInByInstanceIdRequest
       * @return QueryTransferInByInstanceIdResponse
       */
      Models::QueryTransferInByInstanceIdResponse queryTransferInByInstanceId(const Models::QueryTransferInByInstanceIdRequest &request);

      /**
       * @summary Invoke QueryTransferInList to query the domain name transfer-in list.
       *
       * @param request QueryTransferInListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTransferInListResponse
       */
      Models::QueryTransferInListResponse queryTransferInListWithOptions(const Models::QueryTransferInListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke QueryTransferInList to query the domain name transfer-in list.
       *
       * @param request QueryTransferInListRequest
       * @return QueryTransferInListResponse
       */
      Models::QueryTransferInListResponse queryTransferInList(const Models::QueryTransferInListRequest &request);

      /**
       * @summary Invoke QueryTransferOutInfo to query domain name transfer-out information.
       *
       * @param request QueryTransferOutInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTransferOutInfoResponse
       */
      Models::QueryTransferOutInfoResponse queryTransferOutInfoWithOptions(const Models::QueryTransferOutInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke QueryTransferOutInfo to query domain name transfer-out information.
       *
       * @param request QueryTransferOutInfoRequest
       * @return QueryTransferOutInfoResponse
       */
      Models::QueryTransferOutInfoResponse queryTransferOutInfo(const Models::QueryTransferOutInfoRequest &request);

      /**
       * @summary Invoke the RegistrantProfileRealNameVerification API to submit real-name verification for an information template.
       *
       * @description - Identity verification document review takes 3 to 5 business days. After the authority completes the review, you can invoke the [QueryRegistrantProfiles](https://help.aliyun.com/document_detail/67701.html) API to query the identity verification result.  
       * - If identity verification fails, refer to [Reasons for Identity Verification Failure and Solutions](https://help.aliyun.com/document_detail/35885.html) for troubleshooting and resolution.
       * > You must invoke this API using the POST method; otherwise, the invocation will fail. When using a software development kit (SDK), set the **method** parameter of the request object to **POST**.
       *
       * @param request RegistrantProfileRealNameVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegistrantProfileRealNameVerificationResponse
       */
      Models::RegistrantProfileRealNameVerificationResponse registrantProfileRealNameVerificationWithOptions(const Models::RegistrantProfileRealNameVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the RegistrantProfileRealNameVerification API to submit real-name verification for an information template.
       *
       * @description - Identity verification document review takes 3 to 5 business days. After the authority completes the review, you can invoke the [QueryRegistrantProfiles](https://help.aliyun.com/document_detail/67701.html) API to query the identity verification result.  
       * - If identity verification fails, refer to [Reasons for Identity Verification Failure and Solutions](https://help.aliyun.com/document_detail/35885.html) for troubleshooting and resolution.
       * > You must invoke this API using the POST method; otherwise, the invocation will fail. When using a software development kit (SDK), set the **method** parameter of the request object to **POST**.
       *
       * @param request RegistrantProfileRealNameVerificationRequest
       * @return RegistrantProfileRealNameVerificationResponse
       */
      Models::RegistrantProfileRealNameVerificationResponse registrantProfileRealNameVerification(const Models::RegistrantProfileRealNameVerificationRequest &request);

      /**
       * @summary Invoke the ResendEmailVerification API to resend the verification email.
       *
       * @param request ResendEmailVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResendEmailVerificationResponse
       */
      Models::ResendEmailVerificationResponse resendEmailVerificationWithOptions(const Models::ResendEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the ResendEmailVerification API to resend the verification email.
       *
       * @param request ResendEmailVerificationRequest
       * @return ResendEmailVerificationResponse
       */
      Models::ResendEmailVerificationResponse resendEmailVerification(const Models::ResendEmailVerificationRequest &request);

      /**
       * @summary Reset the qualification verification status for .restaurant and .trademark domain names.
       *
       * @param request ResetQualificationVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetQualificationVerificationResponse
       */
      Models::ResetQualificationVerificationResponse resetQualificationVerificationWithOptions(const Models::ResetQualificationVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reset the qualification verification status for .restaurant and .trademark domain names.
       *
       * @param request ResetQualificationVerificationRequest
       * @return ResetQualificationVerificationResponse
       */
      Models::ResetQualificationVerificationResponse resetQualificationVerification(const Models::ResetQualificationVerificationRequest &request);

      /**
       * @summary Invoke SaveBatchDomainRemark to batch save domain name remarks.
       *
       * @param request SaveBatchDomainRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchDomainRemarkResponse
       */
      Models::SaveBatchDomainRemarkResponse saveBatchDomainRemarkWithOptions(const Models::SaveBatchDomainRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke SaveBatchDomainRemark to batch save domain name remarks.
       *
       * @param request SaveBatchDomainRemarkRequest
       * @return SaveBatchDomainRemarkResponse
       */
      Models::SaveBatchDomainRemarkResponse saveBatchDomainRemark(const Models::SaveBatchDomainRemarkRequest &request);

      /**
       * @summary Submits a batch task to quickly transfer out domain names.
       *
       * @description This is an asynchronous operation. To query the result of the task, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) operation.
       *
       * @param request SaveBatchTaskForApplyQuickTransferOutOpenlyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForApplyQuickTransferOutOpenlyResponse
       */
      Models::SaveBatchTaskForApplyQuickTransferOutOpenlyResponse saveBatchTaskForApplyQuickTransferOutOpenlyWithOptions(const Models::SaveBatchTaskForApplyQuickTransferOutOpenlyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a batch task to quickly transfer out domain names.
       *
       * @description This is an asynchronous operation. To query the result of the task, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) operation.
       *
       * @param request SaveBatchTaskForApplyQuickTransferOutOpenlyRequest
       * @return SaveBatchTaskForApplyQuickTransferOutOpenlyResponse
       */
      Models::SaveBatchTaskForApplyQuickTransferOutOpenlyResponse saveBatchTaskForApplyQuickTransferOutOpenly(const Models::SaveBatchTaskForApplyQuickTransferOutOpenlyRequest &request);

      /**
       * @summary Submits a batch domain name registration task.
       *
       * @description Starting from March 1, 2022, domain names can only be registered by using real-name verified domain name registrant profiles. Passing registrant information directly to register domain names is no longer supported.
       * To register a domain name, you must specify associated domain name to be registered, associated domain name registrant information, and the DNS servers. You must associate associated domain name registrant information by using the ID of a real-name verified domain name registrant profile. For DNS servers, you can use the default Alibaba Cloud DNS or specify custom DNS servers.
       * > - The total number of domain names registered per week cannot exceed 100,000.
       * > - Registration payments can only be made by using the account cash balance. Credit limits are not supported.
       * - The request parameter format for the **SaveBatchTaskForCreatingOrderActivate** operation is OrderActivateParam.N.*, where N represents the sequence number of associated domain name.
       * To query the task execution result, call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) operation.
       *
       * @param request SaveBatchTaskForCreatingOrderActivateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForCreatingOrderActivateResponse
       */
      Models::SaveBatchTaskForCreatingOrderActivateResponse saveBatchTaskForCreatingOrderActivateWithOptions(const Models::SaveBatchTaskForCreatingOrderActivateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a batch domain name registration task.
       *
       * @description Starting from March 1, 2022, domain names can only be registered by using real-name verified domain name registrant profiles. Passing registrant information directly to register domain names is no longer supported.
       * To register a domain name, you must specify associated domain name to be registered, associated domain name registrant information, and the DNS servers. You must associate associated domain name registrant information by using the ID of a real-name verified domain name registrant profile. For DNS servers, you can use the default Alibaba Cloud DNS or specify custom DNS servers.
       * > - The total number of domain names registered per week cannot exceed 100,000.
       * > - Registration payments can only be made by using the account cash balance. Credit limits are not supported.
       * - The request parameter format for the **SaveBatchTaskForCreatingOrderActivate** operation is OrderActivateParam.N.*, where N represents the sequence number of associated domain name.
       * To query the task execution result, call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) operation.
       *
       * @param request SaveBatchTaskForCreatingOrderActivateRequest
       * @return SaveBatchTaskForCreatingOrderActivateResponse
       */
      Models::SaveBatchTaskForCreatingOrderActivateResponse saveBatchTaskForCreatingOrderActivate(const Models::SaveBatchTaskForCreatingOrderActivateRequest &request);

      /**
       * @summary Invoke the SaveBatchTaskForCreatingOrderRedeem API to submit a batch domain redeem job.
       *
       * @description You can query the job execution result by using the [Query Task Detail List](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveBatchTaskForCreatingOrderRedeemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForCreatingOrderRedeemResponse
       */
      Models::SaveBatchTaskForCreatingOrderRedeemResponse saveBatchTaskForCreatingOrderRedeemWithOptions(const Models::SaveBatchTaskForCreatingOrderRedeemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveBatchTaskForCreatingOrderRedeem API to submit a batch domain redeem job.
       *
       * @description You can query the job execution result by using the [Query Task Detail List](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveBatchTaskForCreatingOrderRedeemRequest
       * @return SaveBatchTaskForCreatingOrderRedeemResponse
       */
      Models::SaveBatchTaskForCreatingOrderRedeemResponse saveBatchTaskForCreatingOrderRedeem(const Models::SaveBatchTaskForCreatingOrderRedeemRequest &request);

      /**
       * @summary Submits a batch domain name renewal task.
       *
       * @description To query the task result, call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) operation.
       *
       * @param request SaveBatchTaskForCreatingOrderRenewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForCreatingOrderRenewResponse
       */
      Models::SaveBatchTaskForCreatingOrderRenewResponse saveBatchTaskForCreatingOrderRenewWithOptions(const Models::SaveBatchTaskForCreatingOrderRenewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a batch domain name renewal task.
       *
       * @description To query the task result, call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) operation.
       *
       * @param request SaveBatchTaskForCreatingOrderRenewRequest
       * @return SaveBatchTaskForCreatingOrderRenewResponse
       */
      Models::SaveBatchTaskForCreatingOrderRenewResponse saveBatchTaskForCreatingOrderRenew(const Models::SaveBatchTaskForCreatingOrderRenewRequest &request);

      /**
       * @summary Invoke the SaveBatchTaskForCreatingOrderTransfer API to submit a batch domain name transfer-in job.
       *
       * @description You can query the job execution result by invoking the QueryTaskDetailList API. For more information, see [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.htm?spm=a2c4g.11186623.0.0.5096389cgV6sng).
       *
       * @param request SaveBatchTaskForCreatingOrderTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForCreatingOrderTransferResponse
       */
      Models::SaveBatchTaskForCreatingOrderTransferResponse saveBatchTaskForCreatingOrderTransferWithOptions(const Models::SaveBatchTaskForCreatingOrderTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveBatchTaskForCreatingOrderTransfer API to submit a batch domain name transfer-in job.
       *
       * @description You can query the job execution result by invoking the QueryTaskDetailList API. For more information, see [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.htm?spm=a2c4g.11186623.0.0.5096389cgV6sng).
       *
       * @param request SaveBatchTaskForCreatingOrderTransferRequest
       * @return SaveBatchTaskForCreatingOrderTransferResponse
       */
      Models::SaveBatchTaskForCreatingOrderTransferResponse saveBatchTaskForCreatingOrderTransfer(const Models::SaveBatchTaskForCreatingOrderTransferRequest &request);

      /**
       * @summary Invoke the SaveBatchTaskForDomainNameProxyService API to submit a batch domain name proxy service job.
       *
       * @description You can query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveBatchTaskForDomainNameProxyServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForDomainNameProxyServiceResponse
       */
      Models::SaveBatchTaskForDomainNameProxyServiceResponse saveBatchTaskForDomainNameProxyServiceWithOptions(const Models::SaveBatchTaskForDomainNameProxyServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveBatchTaskForDomainNameProxyService API to submit a batch domain name proxy service job.
       *
       * @description You can query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
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
       * @summary Submits a batch task to modify the DNS servers for the specified domain names.
       *
       * @description To query the task result, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
       *
       * @param request SaveBatchTaskForModifyingDomainDnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForModifyingDomainDnsResponse
       */
      Models::SaveBatchTaskForModifyingDomainDnsResponse saveBatchTaskForModifyingDomainDnsWithOptions(const Models::SaveBatchTaskForModifyingDomainDnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a batch task to modify the DNS servers for the specified domain names.
       *
       * @description To query the task result, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
       *
       * @param request SaveBatchTaskForModifyingDomainDnsRequest
       * @return SaveBatchTaskForModifyingDomainDnsResponse
       */
      Models::SaveBatchTaskForModifyingDomainDnsResponse saveBatchTaskForModifyingDomainDns(const Models::SaveBatchTaskForModifyingDomainDnsRequest &request);

      /**
       * @summary Call the SaveBatchTaskForReserveDropListDomain API to submit a batch task for domain reservation.
       *
       * @description To query task execution results, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
       *
       * @param request SaveBatchTaskForReserveDropListDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForReserveDropListDomainResponse
       */
      Models::SaveBatchTaskForReserveDropListDomainResponse saveBatchTaskForReserveDropListDomainWithOptions(const Models::SaveBatchTaskForReserveDropListDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the SaveBatchTaskForReserveDropListDomain API to submit a batch task for domain reservation.
       *
       * @description To query task execution results, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
       *
       * @param request SaveBatchTaskForReserveDropListDomainRequest
       * @return SaveBatchTaskForReserveDropListDomainResponse
       */
      Models::SaveBatchTaskForReserveDropListDomainResponse saveBatchTaskForReserveDropListDomain(const Models::SaveBatchTaskForReserveDropListDomainRequest &request);

      /**
       * @summary Submits a batch transfer-out task for multiple domain names using their authorization codes.
       *
       * @description This is an asynchronous operation. After submitting the task, call `QueryTaskDetailList` to check its status.
       *
       * @param request SaveBatchTaskForTransferOutByAuthorizationCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForTransferOutByAuthorizationCodeResponse
       */
      Models::SaveBatchTaskForTransferOutByAuthorizationCodeResponse saveBatchTaskForTransferOutByAuthorizationCodeWithOptions(const Models::SaveBatchTaskForTransferOutByAuthorizationCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a batch transfer-out task for multiple domain names using their authorization codes.
       *
       * @description This is an asynchronous operation. After submitting the task, call `QueryTaskDetailList` to check its status.
       *
       * @param request SaveBatchTaskForTransferOutByAuthorizationCodeRequest
       * @return SaveBatchTaskForTransferOutByAuthorizationCodeResponse
       */
      Models::SaveBatchTaskForTransferOutByAuthorizationCodeResponse saveBatchTaskForTransferOutByAuthorizationCode(const Models::SaveBatchTaskForTransferOutByAuthorizationCodeRequest &request);

      /**
       * @summary Call SaveBatchTaskForTransferProhibitionLock to enable or disable the transfer prohibition lock for multiple domain names.
       *
       * @description To check the result of the task, call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveBatchTaskForTransferProhibitionLockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForTransferProhibitionLockResponse
       */
      Models::SaveBatchTaskForTransferProhibitionLockResponse saveBatchTaskForTransferProhibitionLockWithOptions(const Models::SaveBatchTaskForTransferProhibitionLockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call SaveBatchTaskForTransferProhibitionLock to enable or disable the transfer prohibition lock for multiple domain names.
       *
       * @description To check the result of the task, call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveBatchTaskForTransferProhibitionLockRequest
       * @return SaveBatchTaskForTransferProhibitionLockResponse
       */
      Models::SaveBatchTaskForTransferProhibitionLockResponse saveBatchTaskForTransferProhibitionLock(const Models::SaveBatchTaskForTransferProhibitionLockRequest &request);

      /**
       * @summary Submits a batch task to enable or disable the update prohibition lock for one or more domain names.
       *
       * @description To check the status of the task, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) operation.
       *
       * @param request SaveBatchTaskForUpdateProhibitionLockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForUpdateProhibitionLockResponse
       */
      Models::SaveBatchTaskForUpdateProhibitionLockResponse saveBatchTaskForUpdateProhibitionLockWithOptions(const Models::SaveBatchTaskForUpdateProhibitionLockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a batch task to enable or disable the update prohibition lock for one or more domain names.
       *
       * @description To check the status of the task, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) operation.
       *
       * @param request SaveBatchTaskForUpdateProhibitionLockRequest
       * @return SaveBatchTaskForUpdateProhibitionLockResponse
       */
      Models::SaveBatchTaskForUpdateProhibitionLockResponse saveBatchTaskForUpdateProhibitionLock(const Models::SaveBatchTaskForUpdateProhibitionLockRequest &request);

      /**
       * @summary Submit a domain information modification job with new contact information.
       *
       * @description You can query the job execution result by using the [Query Task Detail List](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveBatchTaskForUpdatingContactInfoByNewContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForUpdatingContactInfoByNewContactResponse
       */
      Models::SaveBatchTaskForUpdatingContactInfoByNewContactResponse saveBatchTaskForUpdatingContactInfoByNewContactWithOptions(const Models::SaveBatchTaskForUpdatingContactInfoByNewContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submit a domain information modification job with new contact information.
       *
       * @description You can query the job execution result by using the [Query Task Detail List](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveBatchTaskForUpdatingContactInfoByNewContactRequest
       * @return SaveBatchTaskForUpdatingContactInfoByNewContactResponse
       */
      Models::SaveBatchTaskForUpdatingContactInfoByNewContactResponse saveBatchTaskForUpdatingContactInfoByNewContact(const Models::SaveBatchTaskForUpdatingContactInfoByNewContactRequest &request);

      /**
       * @summary Call SaveBatchTaskForUpdatingContactInfoByRegistrantProfileId to update the contact information of one or more domain names by using a registrant profile.
       *
       * @description To check the task result, call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) operation.
       *
       * @param request SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse
       */
      Models::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse saveBatchTaskForUpdatingContactInfoByRegistrantProfileIdWithOptions(const Models::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call SaveBatchTaskForUpdatingContactInfoByRegistrantProfileId to update the contact information of one or more domain names by using a registrant profile.
       *
       * @description To check the task result, call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) operation.
       *
       * @param request SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest
       * @return SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse
       */
      Models::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse saveBatchTaskForUpdatingContactInfoByRegistrantProfileId(const Models::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest &request);

      /**
       * @summary Invoke the SaveDomainGroup API to create or update a domain name group.
       *
       * @param request SaveDomainGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveDomainGroupResponse
       */
      Models::SaveDomainGroupResponse saveDomainGroupWithOptions(const Models::SaveDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveDomainGroup API to create or update a domain name group.
       *
       * @param request SaveDomainGroupRequest
       * @return SaveDomainGroupResponse
       */
      Models::SaveDomainGroupResponse saveDomainGroup(const Models::SaveDomainGroupRequest &request);

      /**
       * @summary Invoke the SaveRegistrantProfile API to create or update a domain name registrant profile.
       *
       * @description The domain name registrant profile contains registrant information. When you create or update a registrant profile, we recommend that you fill in all registrant information according to your actual situation and ensure consistency between the Chinese and English versions. To avoid faults during domain name registry review, we recommend entering all English registrant information in lowercase letters. For specific requirements, see the parameter descriptions below.
       *
       * @param request SaveRegistrantProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveRegistrantProfileResponse
       */
      Models::SaveRegistrantProfileResponse saveRegistrantProfileWithOptions(const Models::SaveRegistrantProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveRegistrantProfile API to create or update a domain name registrant profile.
       *
       * @description The domain name registrant profile contains registrant information. When you create or update a registrant profile, we recommend that you fill in all registrant information according to your actual situation and ensure consistency between the Chinese and English versions. To avoid faults during domain name registry review, we recommend entering all English registrant information in lowercase letters. For specific requirements, see the parameter descriptions below.
       *
       * @param request SaveRegistrantProfileRequest
       * @return SaveRegistrantProfileResponse
       */
      Models::SaveRegistrantProfileResponse saveRegistrantProfile(const Models::SaveRegistrantProfileRequest &request);

      /**
       * @summary Invoke the SaveRegistrantProfileRealNameVerification API to save domain contact and certificate information.
       *
       * @param request SaveRegistrantProfileRealNameVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveRegistrantProfileRealNameVerificationResponse
       */
      Models::SaveRegistrantProfileRealNameVerificationResponse saveRegistrantProfileRealNameVerificationWithOptions(const Models::SaveRegistrantProfileRealNameVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveRegistrantProfileRealNameVerification API to save domain contact and certificate information.
       *
       * @param request SaveRegistrantProfileRealNameVerificationRequest
       * @return SaveRegistrantProfileRealNameVerificationResponse
       */
      Models::SaveRegistrantProfileRealNameVerificationResponse saveRegistrantProfileRealNameVerification(const Models::SaveRegistrantProfileRealNameVerificationRequest &request);

      /**
       * @summary Invoke the SaveSingleTaskForAddingDSRecord API to submit a job for creating a DS record.
       *
       * @description You can query the job execution result by using the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
       *
       * @param request SaveSingleTaskForAddingDSRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForAddingDSRecordResponse
       */
      Models::SaveSingleTaskForAddingDSRecordResponse saveSingleTaskForAddingDSRecordWithOptions(const Models::SaveSingleTaskForAddingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveSingleTaskForAddingDSRecord API to submit a job for creating a DS record.
       *
       * @description You can query the job execution result by using the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
       *
       * @param request SaveSingleTaskForAddingDSRecordRequest
       * @return SaveSingleTaskForAddingDSRecordResponse
       */
      Models::SaveSingleTaskForAddingDSRecordResponse saveSingleTaskForAddingDSRecord(const Models::SaveSingleTaskForAddingDSRecordRequest &request);

      /**
       * @summary Submits a task for a quick transfer-out of a domain name.
       *
       * @description This is an asynchronous operation. To check the task\\"s status, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
       *
       * @param request SaveSingleTaskForApplyQuickTransferOutOpenlyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForApplyQuickTransferOutOpenlyResponse
       */
      Models::SaveSingleTaskForApplyQuickTransferOutOpenlyResponse saveSingleTaskForApplyQuickTransferOutOpenlyWithOptions(const Models::SaveSingleTaskForApplyQuickTransferOutOpenlyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a task for a quick transfer-out of a domain name.
       *
       * @description This is an asynchronous operation. To check the task\\"s status, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
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
       * @summary Submit a job to attach an ENS address.
       *
       * @description You can query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForAssociatingEnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForAssociatingEnsResponse
       */
      Models::SaveSingleTaskForAssociatingEnsResponse saveSingleTaskForAssociatingEnsWithOptions(const Models::SaveSingleTaskForAssociatingEnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submit a job to attach an ENS address.
       *
       * @description You can query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForAssociatingEnsRequest
       * @return SaveSingleTaskForAssociatingEnsResponse
       */
      Models::SaveSingleTaskForAssociatingEnsResponse saveSingleTaskForAssociatingEns(const Models::SaveSingleTaskForAssociatingEnsRequest &request);

      /**
       * @summary Invoke the SaveSingleTaskForCancelingTransferIn API to submit a job to cancel a domain name transfer-in.
       *
       * @description You can query the job execution result by invoking the QueryTaskDetailList API (~~67710~~).
       *
       * @param request SaveSingleTaskForCancelingTransferInRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForCancelingTransferInResponse
       */
      Models::SaveSingleTaskForCancelingTransferInResponse saveSingleTaskForCancelingTransferInWithOptions(const Models::SaveSingleTaskForCancelingTransferInRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveSingleTaskForCancelingTransferIn API to submit a job to cancel a domain name transfer-in.
       *
       * @description You can query the job execution result by invoking the QueryTaskDetailList API (~~67710~~).
       *
       * @param request SaveSingleTaskForCancelingTransferInRequest
       * @return SaveSingleTaskForCancelingTransferInResponse
       */
      Models::SaveSingleTaskForCancelingTransferInResponse saveSingleTaskForCancelingTransferIn(const Models::SaveSingleTaskForCancelingTransferInRequest &request);

      /**
       * @summary Invoke the SaveSingleTaskForCancelingTransferOut API to submit a job to cancel a domain name transfer-out.
       *
       * @description You can query the job execution result by invoking the QueryTaskDetailList API (~~67710~~).
       *
       * @param request SaveSingleTaskForCancelingTransferOutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForCancelingTransferOutResponse
       */
      Models::SaveSingleTaskForCancelingTransferOutResponse saveSingleTaskForCancelingTransferOutWithOptions(const Models::SaveSingleTaskForCancelingTransferOutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveSingleTaskForCancelingTransferOut API to submit a job to cancel a domain name transfer-out.
       *
       * @description You can query the job execution result by invoking the QueryTaskDetailList API (~~67710~~).
       *
       * @param request SaveSingleTaskForCancelingTransferOutRequest
       * @return SaveSingleTaskForCancelingTransferOutResponse
       */
      Models::SaveSingleTaskForCancelingTransferOutResponse saveSingleTaskForCancelingTransferOut(const Models::SaveSingleTaskForCancelingTransferOutRequest &request);

      /**
       * @summary Invoke SaveSingleTaskForCreatingDnsHost to submit a single job for creating a DNS host.
       *
       * @description You can query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForCreatingDnsHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForCreatingDnsHostResponse
       */
      Models::SaveSingleTaskForCreatingDnsHostResponse saveSingleTaskForCreatingDnsHostWithOptions(const Models::SaveSingleTaskForCreatingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke SaveSingleTaskForCreatingDnsHost to submit a single job for creating a DNS host.
       *
       * @description You can query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForCreatingDnsHostRequest
       * @return SaveSingleTaskForCreatingDnsHostResponse
       */
      Models::SaveSingleTaskForCreatingDnsHostResponse saveSingleTaskForCreatingDnsHost(const Models::SaveSingleTaskForCreatingDnsHostRequest &request);

      /**
       * @summary Submits a domain name registration task.
       *
       * @description Starting from March 1, 2022, you can associated domain names only by using real-name verified domain name registrant profiles. Passing registrant information directly to associated domain names is no longer supported.
       * To register a domain name, you must specify the domain name, registrant information, and DNS servers. You must associate the registrant information with a real-name verified domain name registrant profile by specifying the profile ID. You can use the default Alibaba Cloud DNS servers or specify custom DNS servers.
       * You can call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) operation to query the task execution result.
       *
       * @param request SaveSingleTaskForCreatingOrderActivateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForCreatingOrderActivateResponse
       */
      Models::SaveSingleTaskForCreatingOrderActivateResponse saveSingleTaskForCreatingOrderActivateWithOptions(const Models::SaveSingleTaskForCreatingOrderActivateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a domain name registration task.
       *
       * @description Starting from March 1, 2022, you can associated domain names only by using real-name verified domain name registrant profiles. Passing registrant information directly to associated domain names is no longer supported.
       * To register a domain name, you must specify the domain name, registrant information, and DNS servers. You must associate the registrant information with a real-name verified domain name registrant profile by specifying the profile ID. You can use the default Alibaba Cloud DNS servers or specify custom DNS servers.
       * You can call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) operation to query the task execution result.
       *
       * @param request SaveSingleTaskForCreatingOrderActivateRequest
       * @return SaveSingleTaskForCreatingOrderActivateResponse
       */
      Models::SaveSingleTaskForCreatingOrderActivateResponse saveSingleTaskForCreatingOrderActivate(const Models::SaveSingleTaskForCreatingOrderActivateRequest &request);

      /**
       * @summary Invoke SaveSingleTaskForCreatingOrderRedeem to submit a domain redeem job.
       *
       * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForCreatingOrderRedeemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForCreatingOrderRedeemResponse
       */
      Models::SaveSingleTaskForCreatingOrderRedeemResponse saveSingleTaskForCreatingOrderRedeemWithOptions(const Models::SaveSingleTaskForCreatingOrderRedeemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke SaveSingleTaskForCreatingOrderRedeem to submit a domain redeem job.
       *
       * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForCreatingOrderRedeemRequest
       * @return SaveSingleTaskForCreatingOrderRedeemResponse
       */
      Models::SaveSingleTaskForCreatingOrderRedeemResponse saveSingleTaskForCreatingOrderRedeem(const Models::SaveSingleTaskForCreatingOrderRedeemRequest &request);

      /**
       * @summary Use SaveSingleTaskForCreatingOrderRenew to submit a domain name renewal task.
       *
       * @description To check the execution results of the task, call [QueryTaskDetailList](~~QueryTaskDetailList~~).
       *
       * @param request SaveSingleTaskForCreatingOrderRenewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForCreatingOrderRenewResponse
       */
      Models::SaveSingleTaskForCreatingOrderRenewResponse saveSingleTaskForCreatingOrderRenewWithOptions(const Models::SaveSingleTaskForCreatingOrderRenewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use SaveSingleTaskForCreatingOrderRenew to submit a domain name renewal task.
       *
       * @description To check the execution results of the task, call [QueryTaskDetailList](~~QueryTaskDetailList~~).
       *
       * @param request SaveSingleTaskForCreatingOrderRenewRequest
       * @return SaveSingleTaskForCreatingOrderRenewResponse
       */
      Models::SaveSingleTaskForCreatingOrderRenewResponse saveSingleTaskForCreatingOrderRenew(const Models::SaveSingleTaskForCreatingOrderRenewRequest &request);

      /**
       * @summary Invoke the SaveSingleTaskForCreatingOrderTransfer API to submit a domain name transfer-in job.
       *
       * @description You can query the task execution result by calling the QueryTaskDetailList API (~~67710~~).
       *
       * @param request SaveSingleTaskForCreatingOrderTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForCreatingOrderTransferResponse
       */
      Models::SaveSingleTaskForCreatingOrderTransferResponse saveSingleTaskForCreatingOrderTransferWithOptions(const Models::SaveSingleTaskForCreatingOrderTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveSingleTaskForCreatingOrderTransfer API to submit a domain name transfer-in job.
       *
       * @description You can query the task execution result by calling the QueryTaskDetailList API (~~67710~~).
       *
       * @param request SaveSingleTaskForCreatingOrderTransferRequest
       * @return SaveSingleTaskForCreatingOrderTransferResponse
       */
      Models::SaveSingleTaskForCreatingOrderTransferResponse saveSingleTaskForCreatingOrderTransfer(const Models::SaveSingleTaskForCreatingOrderTransferRequest &request);

      /**
       * @summary Invoke the SaveSingleTaskForDeletingDSRecord API to submit a job for deleting a DS record.
       *
       * @description You can query the task execution result by using the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
       *
       * @param request SaveSingleTaskForDeletingDSRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForDeletingDSRecordResponse
       */
      Models::SaveSingleTaskForDeletingDSRecordResponse saveSingleTaskForDeletingDSRecordWithOptions(const Models::SaveSingleTaskForDeletingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveSingleTaskForDeletingDSRecord API to submit a job for deleting a DS record.
       *
       * @description You can query the task execution result by using the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
       *
       * @param request SaveSingleTaskForDeletingDSRecordRequest
       * @return SaveSingleTaskForDeletingDSRecordResponse
       */
      Models::SaveSingleTaskForDeletingDSRecordResponse saveSingleTaskForDeletingDSRecord(const Models::SaveSingleTaskForDeletingDSRecordRequest &request);

      /**
       * @summary Invoke the SaveSingleTaskForDeletingDnsHost API to submit a job for deleting a DNS host.
       *
       * @description You can query the job execution result by using the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
       *
       * @param request SaveSingleTaskForDeletingDnsHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForDeletingDnsHostResponse
       */
      Models::SaveSingleTaskForDeletingDnsHostResponse saveSingleTaskForDeletingDnsHostWithOptions(const Models::SaveSingleTaskForDeletingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveSingleTaskForDeletingDnsHost API to submit a job for deleting a DNS host.
       *
       * @description You can query the job execution result by using the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
       *
       * @param request SaveSingleTaskForDeletingDnsHostRequest
       * @return SaveSingleTaskForDeletingDnsHostResponse
       */
      Models::SaveSingleTaskForDeletingDnsHostResponse saveSingleTaskForDeletingDnsHost(const Models::SaveSingleTaskForDeletingDnsHostRequest &request);

      /**
       * @summary Invoke the SaveSingleTaskForDisassociatingEns API to submit a job for detaching an ENS address.
       *
       * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForDisassociatingEnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForDisassociatingEnsResponse
       */
      Models::SaveSingleTaskForDisassociatingEnsResponse saveSingleTaskForDisassociatingEnsWithOptions(const Models::SaveSingleTaskForDisassociatingEnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveSingleTaskForDisassociatingEns API to submit a job for detaching an ENS address.
       *
       * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForDisassociatingEnsRequest
       * @return SaveSingleTaskForDisassociatingEnsResponse
       */
      Models::SaveSingleTaskForDisassociatingEnsResponse saveSingleTaskForDisassociatingEns(const Models::SaveSingleTaskForDisassociatingEnsRequest &request);

      /**
       * @summary Invoke the SaveSingleTaskForDomainNameProxyService API to submit a domain name proxy service job.
       *
       * @description Invoke the SaveSingleTaskForDomainNameProxyService API to submit a domain name proxy service job.
       *
       * @param request SaveSingleTaskForDomainNameProxyServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForDomainNameProxyServiceResponse
       */
      Models::SaveSingleTaskForDomainNameProxyServiceResponse saveSingleTaskForDomainNameProxyServiceWithOptions(const Models::SaveSingleTaskForDomainNameProxyServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveSingleTaskForDomainNameProxyService API to submit a domain name proxy service job.
       *
       * @description Invoke the SaveSingleTaskForDomainNameProxyService API to submit a domain name proxy service job.
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
       * @summary Invoke SaveSingleTaskForModifyingDSRecord to submit a job for modifying a DS record.
       *
       * @description You can query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForModifyingDSRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForModifyingDSRecordResponse
       */
      Models::SaveSingleTaskForModifyingDSRecordResponse saveSingleTaskForModifyingDSRecordWithOptions(const Models::SaveSingleTaskForModifyingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke SaveSingleTaskForModifyingDSRecord to submit a job for modifying a DS record.
       *
       * @description You can query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForModifyingDSRecordRequest
       * @return SaveSingleTaskForModifyingDSRecordResponse
       */
      Models::SaveSingleTaskForModifyingDSRecordResponse saveSingleTaskForModifyingDSRecord(const Models::SaveSingleTaskForModifyingDSRecordRequest &request);

      /**
       * @summary Invoke the SaveSingleTaskForModifyingDnsHost API to submit a job for modifying a DNS host.
       *
       * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForModifyingDnsHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForModifyingDnsHostResponse
       */
      Models::SaveSingleTaskForModifyingDnsHostResponse saveSingleTaskForModifyingDnsHostWithOptions(const Models::SaveSingleTaskForModifyingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveSingleTaskForModifyingDnsHost API to submit a job for modifying a DNS host.
       *
       * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForModifyingDnsHostRequest
       * @return SaveSingleTaskForModifyingDnsHostResponse
       */
      Models::SaveSingleTaskForModifyingDnsHostResponse saveSingleTaskForModifyingDnsHost(const Models::SaveSingleTaskForModifyingDnsHostRequest &request);

      /**
       * @summary Invoke the SaveSingleTaskForQueryingTransferAuthorizationCode API to submit a job for retrieving the domain name transfer password.
       *
       * @description You can query the job execution result by calling the QueryTaskDetailList API (~~67710~~). The transfer password is returned in the TaskResult field of the corresponding job.
       *
       * @param request SaveSingleTaskForQueryingTransferAuthorizationCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForQueryingTransferAuthorizationCodeResponse
       */
      Models::SaveSingleTaskForQueryingTransferAuthorizationCodeResponse saveSingleTaskForQueryingTransferAuthorizationCodeWithOptions(const Models::SaveSingleTaskForQueryingTransferAuthorizationCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveSingleTaskForQueryingTransferAuthorizationCode API to submit a job for retrieving the domain name transfer password.
       *
       * @description You can query the job execution result by calling the QueryTaskDetailList API (~~67710~~). The transfer password is returned in the TaskResult field of the corresponding job.
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
       * @summary Invoke the SaveSingleTaskForSaveArtExtension API to submit a job for creating Art extension information.
       *
       * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForSaveArtExtensionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForSaveArtExtensionResponse
       */
      Models::SaveSingleTaskForSaveArtExtensionResponse saveSingleTaskForSaveArtExtensionWithOptions(const Models::SaveSingleTaskForSaveArtExtensionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveSingleTaskForSaveArtExtension API to submit a job for creating Art extension information.
       *
       * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForSaveArtExtensionRequest
       * @return SaveSingleTaskForSaveArtExtensionResponse
       */
      Models::SaveSingleTaskForSaveArtExtensionResponse saveSingleTaskForSaveArtExtension(const Models::SaveSingleTaskForSaveArtExtensionRequest &request);

      /**
       * @summary Invoke the SaveSingleTaskForSynchronizingDSRecord API to submit a job for synchronizing a DS record.
       *
       * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForSynchronizingDSRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForSynchronizingDSRecordResponse
       */
      Models::SaveSingleTaskForSynchronizingDSRecordResponse saveSingleTaskForSynchronizingDSRecordWithOptions(const Models::SaveSingleTaskForSynchronizingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveSingleTaskForSynchronizingDSRecord API to submit a job for synchronizing a DS record.
       *
       * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForSynchronizingDSRecordRequest
       * @return SaveSingleTaskForSynchronizingDSRecordResponse
       */
      Models::SaveSingleTaskForSynchronizingDSRecordResponse saveSingleTaskForSynchronizingDSRecord(const Models::SaveSingleTaskForSynchronizingDSRecordRequest &request);

      /**
       * @summary Invoke the SaveSingleTaskForSynchronizingDnsHost API to submit a DNS host synchronization job. This is used to handle cases such as missing or inconsistent DNS hosts.
       *
       * @description You can query the job execution result by using the [Query Task Detail List](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForSynchronizingDnsHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForSynchronizingDnsHostResponse
       */
      Models::SaveSingleTaskForSynchronizingDnsHostResponse saveSingleTaskForSynchronizingDnsHostWithOptions(const Models::SaveSingleTaskForSynchronizingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveSingleTaskForSynchronizingDnsHost API to submit a DNS host synchronization job. This is used to handle cases such as missing or inconsistent DNS hosts.
       *
       * @description You can query the job execution result by using the [Query Task Detail List](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForSynchronizingDnsHostRequest
       * @return SaveSingleTaskForSynchronizingDnsHostResponse
       */
      Models::SaveSingleTaskForSynchronizingDnsHostResponse saveSingleTaskForSynchronizingDnsHost(const Models::SaveSingleTaskForSynchronizingDnsHostRequest &request);

      /**
       * @summary Submits a single transfer-out task based on the transfer key of a domain name.
       *
       * @description The task ID.
       *
       * @param request SaveSingleTaskForTransferOutByAuthorizationCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForTransferOutByAuthorizationCodeResponse
       */
      Models::SaveSingleTaskForTransferOutByAuthorizationCodeResponse saveSingleTaskForTransferOutByAuthorizationCodeWithOptions(const Models::SaveSingleTaskForTransferOutByAuthorizationCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a single transfer-out task based on the transfer key of a domain name.
       *
       * @description The task ID.
       *
       * @param request SaveSingleTaskForTransferOutByAuthorizationCodeRequest
       * @return SaveSingleTaskForTransferOutByAuthorizationCodeResponse
       */
      Models::SaveSingleTaskForTransferOutByAuthorizationCodeResponse saveSingleTaskForTransferOutByAuthorizationCode(const Models::SaveSingleTaskForTransferOutByAuthorizationCodeRequest &request);

      /**
       * @summary Invoke the SaveSingleTaskForTransferProhibitionLock API to submit a transfer prohibition lock job.
       *
       * @description You can query the task execution result by using the [List Task Details](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForTransferProhibitionLockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForTransferProhibitionLockResponse
       */
      Models::SaveSingleTaskForTransferProhibitionLockResponse saveSingleTaskForTransferProhibitionLockWithOptions(const Models::SaveSingleTaskForTransferProhibitionLockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveSingleTaskForTransferProhibitionLock API to submit a transfer prohibition lock job.
       *
       * @description You can query the task execution result by using the [List Task Details](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForTransferProhibitionLockRequest
       * @return SaveSingleTaskForTransferProhibitionLockResponse
       */
      Models::SaveSingleTaskForTransferProhibitionLockResponse saveSingleTaskForTransferProhibitionLock(const Models::SaveSingleTaskForTransferProhibitionLockRequest &request);

      /**
       * @summary Invoke the SaveSingleTaskForUpdateProhibitionLock API to submit a task for the Update Prohibition Lock.
       *
       * @description You can query the job execution result by using the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
       *
       * @param request SaveSingleTaskForUpdateProhibitionLockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForUpdateProhibitionLockResponse
       */
      Models::SaveSingleTaskForUpdateProhibitionLockResponse saveSingleTaskForUpdateProhibitionLockWithOptions(const Models::SaveSingleTaskForUpdateProhibitionLockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveSingleTaskForUpdateProhibitionLock API to submit a task for the Update Prohibition Lock.
       *
       * @description You can query the job execution result by using the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
       *
       * @param request SaveSingleTaskForUpdateProhibitionLockRequest
       * @return SaveSingleTaskForUpdateProhibitionLockResponse
       */
      Models::SaveSingleTaskForUpdateProhibitionLockResponse saveSingleTaskForUpdateProhibitionLock(const Models::SaveSingleTaskForUpdateProhibitionLockRequest &request);

      /**
       * @summary Invoke the SaveSingleTaskForUpdatingContactInfo API to submit a domain contact information update job.
       *
       * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForUpdatingContactInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForUpdatingContactInfoResponse
       */
      Models::SaveSingleTaskForUpdatingContactInfoResponse saveSingleTaskForUpdatingContactInfoWithOptions(const Models::SaveSingleTaskForUpdatingContactInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveSingleTaskForUpdatingContactInfo API to submit a domain contact information update job.
       *
       * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveSingleTaskForUpdatingContactInfoRequest
       * @return SaveSingleTaskForUpdatingContactInfoResponse
       */
      Models::SaveSingleTaskForUpdatingContactInfoResponse saveSingleTaskForUpdatingContactInfo(const Models::SaveSingleTaskForUpdatingContactInfoRequest &request);

      /**
       * @summary Submit a domain deletion job. Only whitelist users can access this API.
       *
       * @description Invoke SaveTaskForSubmittingDomainDelete to submit a domain deletion job.
       *
       * @param request SaveTaskForSubmittingDomainDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForSubmittingDomainDeleteResponse
       */
      Models::SaveTaskForSubmittingDomainDeleteResponse saveTaskForSubmittingDomainDeleteWithOptions(const Models::SaveTaskForSubmittingDomainDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submit a domain deletion job. Only whitelist users can access this API.
       *
       * @description Invoke SaveTaskForSubmittingDomainDelete to submit a domain deletion job.
       *
       * @param request SaveTaskForSubmittingDomainDeleteRequest
       * @return SaveTaskForSubmittingDomainDeleteResponse
       */
      Models::SaveTaskForSubmittingDomainDeleteResponse saveTaskForSubmittingDomainDelete(const Models::SaveTaskForSubmittingDomainDeleteRequest &request);

      /**
       * @summary Submits real-name verification information for one or more domain names in bulk.
       *
       * @param request SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse
       */
      Models::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse saveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialWithOptions(const Models::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits real-name verification information for one or more domain names in bulk.
       *
       * @param request SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest
       * @return SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse
       */
      Models::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse saveTaskForSubmittingDomainRealNameVerificationByIdentityCredential(const Models::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest &request);

      /**
       * @summary Creates a task to submit real-name verification information for a domain name by using a specified registrant profile.
       *
       * @param request SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse
       */
      Models::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDWithOptions(const Models::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task to submit real-name verification information for a domain name by using a specified registrant profile.
       *
       * @param request SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest
       * @return SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse
       */
      Models::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileID(const Models::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest &request);

      /**
       * @summary Invoke the SaveTaskForUpdatingRegistrantInfoByIdentityCredential API to submit a batch job for updating registrant contact information by providing contact details and required documentation. You must provide the corresponding documentation as required.
       *
       * @description Query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse
       */
      Models::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse saveTaskForUpdatingRegistrantInfoByIdentityCredentialWithOptions(const Models::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveTaskForUpdatingRegistrantInfoByIdentityCredential API to submit a batch job for updating registrant contact information by providing contact details and required documentation. You must provide the corresponding documentation as required.
       *
       * @description Query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
       *
       * @param request SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest
       * @return SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse
       */
      Models::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse saveTaskForUpdatingRegistrantInfoByIdentityCredential(const Models::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest &request);

      /**
       * @summary Submits a task to update registrant information using a registrant profile ID.
       *
       * @description Call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.htm?spm=a2c4g.11186623.0.0.33f47edeV0nkFx) API to check the task result. After a successful update, the registrant information for the domain name is updated to match the registrant profile. If the domain name requires real-name verification, it becomes verified.
       *
       * @param request SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse
       */
      Models::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse saveTaskForUpdatingRegistrantInfoByRegistrantProfileIDWithOptions(const Models::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a task to update registrant information using a registrant profile ID.
       *
       * @description Call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.htm?spm=a2c4g.11186623.0.0.33f47edeV0nkFx) API to check the task result. After a successful update, the registrant information for the domain name is updated to match the registrant profile. If the domain name requires real-name verification, it becomes verified.
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
       * @summary Invoke the SetDefaultRegistrantProfile API to set the default contact template for a domain name.
       *
       * @param request SetDefaultRegistrantProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultRegistrantProfileResponse
       */
      Models::SetDefaultRegistrantProfileResponse setDefaultRegistrantProfileWithOptions(const Models::SetDefaultRegistrantProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SetDefaultRegistrantProfile API to set the default contact template for a domain name.
       *
       * @param request SetDefaultRegistrantProfileRequest
       * @return SetDefaultRegistrantProfileResponse
       */
      Models::SetDefaultRegistrantProfileResponse setDefaultRegistrantProfile(const Models::SetDefaultRegistrantProfileRequest &request);

      /**
       * @summary Sets or cancels auto-renewal for a domain name.
       *
       * @description This operation currently supports only domain names registered on the China site (aliyun.com).
       * **Before using this operation, make sure that you fully understand the billing method and [pricing](https://wanwang.aliyun.com/help/price.html?spm=5176.22941859.J_9989412330.10.68a51838KnzTeD) of domain name services.**
       *
       * @param request SetupDomainAutoRenewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetupDomainAutoRenewResponse
       */
      Models::SetupDomainAutoRenewResponse setupDomainAutoRenewWithOptions(const Models::SetupDomainAutoRenewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets or cancels auto-renewal for a domain name.
       *
       * @description This operation currently supports only domain names registered on the China site (aliyun.com).
       * **Before using this operation, make sure that you fully understand the billing method and [pricing](https://wanwang.aliyun.com/help/price.html?spm=5176.22941859.J_9989412330.10.68a51838KnzTeD) of domain name services.**
       *
       * @param request SetupDomainAutoRenewRequest
       * @return SetupDomainAutoRenewResponse
       */
      Models::SetupDomainAutoRenewResponse setupDomainAutoRenew(const Models::SetupDomainAutoRenewRequest &request);

      /**
       * @summary Submit documentation for special domain name services
       *
       * @param request SubmitDomainSpecialBizCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDomainSpecialBizCredentialsResponse
       */
      Models::SubmitDomainSpecialBizCredentialsResponse submitDomainSpecialBizCredentialsWithOptions(const Models::SubmitDomainSpecialBizCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submit documentation for special domain name services
       *
       * @param request SubmitDomainSpecialBizCredentialsRequest
       * @return SubmitDomainSpecialBizCredentialsResponse
       */
      Models::SubmitDomainSpecialBizCredentialsResponse submitDomainSpecialBizCredentials(const Models::SubmitDomainSpecialBizCredentialsRequest &request);

      /**
       * @summary Invoke the SubmitEmailVerification API to send an email verification message.
       *
       * @description After receiving the verification email, you must log on to your mailbox and complete verification within 3 days. If the verification email has expired, you can invoke the [ResendEmailVerification](https://help.aliyun.com/document_detail/67734.html) API to resend the verification email.
       *
       * @param request SubmitEmailVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitEmailVerificationResponse
       */
      Models::SubmitEmailVerificationResponse submitEmailVerificationWithOptions(const Models::SubmitEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SubmitEmailVerification API to send an email verification message.
       *
       * @description After receiving the verification email, you must log on to your mailbox and complete verification within 3 days. If the verification email has expired, you can invoke the [ResendEmailVerification](https://help.aliyun.com/document_detail/67734.html) API to resend the verification email.
       *
       * @param request SubmitEmailVerificationRequest
       * @return SubmitEmailVerificationResponse
       */
      Models::SubmitEmailVerificationResponse submitEmailVerification(const Models::SubmitEmailVerificationRequest &request);

      /**
       * @summary Invoke the SubmitOperationAuditInfo API to submit self-service business review information.
       *
       * @param request SubmitOperationAuditInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitOperationAuditInfoResponse
       */
      Models::SubmitOperationAuditInfoResponse submitOperationAuditInfoWithOptions(const Models::SubmitOperationAuditInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SubmitOperationAuditInfo API to submit self-service business review information.
       *
       * @param request SubmitOperationAuditInfoRequest
       * @return SubmitOperationAuditInfoResponse
       */
      Models::SubmitOperationAuditInfoResponse submitOperationAuditInfo(const Models::SubmitOperationAuditInfoRequest &request);

      /**
       * @summary Invoke the SubmitOperationCredentials API to submit certificate materials for self-service operations pending review.
       *
       * @param request SubmitOperationCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitOperationCredentialsResponse
       */
      Models::SubmitOperationCredentialsResponse submitOperationCredentialsWithOptions(const Models::SubmitOperationCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SubmitOperationCredentials API to submit certificate materials for self-service operations pending review.
       *
       * @param request SubmitOperationCredentialsRequest
       * @return SubmitOperationCredentialsResponse
       */
      Models::SubmitOperationCredentialsResponse submitOperationCredentials(const Models::SubmitOperationCredentialsRequest &request);

      /**
       * @summary Calls the TransferInCheckMailToken operation to verify the email token of a domain name registrant.
       *
       * @param request TransferInCheckMailTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferInCheckMailTokenResponse
       */
      Models::TransferInCheckMailTokenResponse transferInCheckMailTokenWithOptions(const Models::TransferInCheckMailTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the TransferInCheckMailToken operation to verify the email token of a domain name registrant.
       *
       * @param request TransferInCheckMailTokenRequest
       * @return TransferInCheckMailTokenResponse
       */
      Models::TransferInCheckMailTokenResponse transferInCheckMailToken(const Models::TransferInCheckMailTokenRequest &request);

      /**
       * @summary Invoke the TransferInReenterTransferAuthorizationCode API to re-enter the transfer password for domain name transfer-in.
       *
       * @param request TransferInReenterTransferAuthorizationCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferInReenterTransferAuthorizationCodeResponse
       */
      Models::TransferInReenterTransferAuthorizationCodeResponse transferInReenterTransferAuthorizationCodeWithOptions(const Models::TransferInReenterTransferAuthorizationCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the TransferInReenterTransferAuthorizationCode API to re-enter the transfer password for domain name transfer-in.
       *
       * @param request TransferInReenterTransferAuthorizationCodeRequest
       * @return TransferInReenterTransferAuthorizationCodeResponse
       */
      Models::TransferInReenterTransferAuthorizationCodeResponse transferInReenterTransferAuthorizationCode(const Models::TransferInReenterTransferAuthorizationCodeRequest &request);

      /**
       * @summary Invoke TransferInRefetchWhoisEmail to perform email verification for domain transfer-in.
       *
       * @description The system automatically retrieves the registrant\\"s email address from WHOIS. If the email address is incorrect or cannot be retrieved, the system will re-scrape the WHOIS email address.
       *
       * @param request TransferInRefetchWhoisEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferInRefetchWhoisEmailResponse
       */
      Models::TransferInRefetchWhoisEmailResponse transferInRefetchWhoisEmailWithOptions(const Models::TransferInRefetchWhoisEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke TransferInRefetchWhoisEmail to perform email verification for domain transfer-in.
       *
       * @description The system automatically retrieves the registrant\\"s email address from WHOIS. If the email address is incorrect or cannot be retrieved, the system will re-scrape the WHOIS email address.
       *
       * @param request TransferInRefetchWhoisEmailRequest
       * @return TransferInRefetchWhoisEmailResponse
       */
      Models::TransferInRefetchWhoisEmailResponse transferInRefetchWhoisEmail(const Models::TransferInRefetchWhoisEmailRequest &request);

      /**
       * @summary Invoke the TransferInResendMailToken API to resend the verification email for domain transfer-in.
       *
       * @param request TransferInResendMailTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferInResendMailTokenResponse
       */
      Models::TransferInResendMailTokenResponse transferInResendMailTokenWithOptions(const Models::TransferInResendMailTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the TransferInResendMailToken API to resend the verification email for domain transfer-in.
       *
       * @param request TransferInResendMailTokenRequest
       * @return TransferInResendMailTokenResponse
       */
      Models::TransferInResendMailTokenResponse transferInResendMailToken(const Models::TransferInResendMailTokenRequest &request);

      /**
       * @summary If you use file upload to replace more than 1,000 domain names in a domain name group, the operation is asynchronous. The result is available only after the request is processed.
       *
       * @param request UpdateDomainToDomainGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDomainToDomainGroupResponse
       */
      Models::UpdateDomainToDomainGroupResponse updateDomainToDomainGroupWithOptions(const Models::UpdateDomainToDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If you use file upload to replace more than 1,000 domain names in a domain name group, the operation is asynchronous. The result is available only after the request is processed.
       *
       * @param request UpdateDomainToDomainGroupRequest
       * @return UpdateDomainToDomainGroupResponse
       */
      Models::UpdateDomainToDomainGroupResponse updateDomainToDomainGroup(const Models::UpdateDomainToDomainGroupRequest &request);

      /**
       * @summary Whether some parameters are required depends on the requirements of the domain name registry. This API validates the compliance and validity of the input parameters and does not perform validation against actual domain information.
       *
       * @param request VerifyContactFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyContactFieldResponse
       */
      Models::VerifyContactFieldResponse verifyContactFieldWithOptions(const Models::VerifyContactFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Whether some parameters are required depends on the requirements of the domain name registry. This API validates the compliance and validity of the input parameters and does not perform validation against actual domain information.
       *
       * @param request VerifyContactFieldRequest
       * @return VerifyContactFieldResponse
       */
      Models::VerifyContactFieldResponse verifyContactField(const Models::VerifyContactFieldRequest &request);

      /**
       * @summary Invoke the VerifyEmail API to submit email verification.
       *
       * @param request VerifyEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyEmailResponse
       */
      Models::VerifyEmailResponse verifyEmailWithOptions(const Models::VerifyEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the VerifyEmail API to submit email verification.
       *
       * @param request VerifyEmailRequest
       * @return VerifyEmailResponse
       */
      Models::VerifyEmailResponse verifyEmail(const Models::VerifyEmailRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
