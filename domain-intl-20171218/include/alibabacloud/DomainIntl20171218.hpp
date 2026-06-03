// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DOMAININTL20171218_HPP_
#define ALIBABACLOUD_DOMAININTL20171218_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/DomainIntl20171218Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/DomainIntl20171218.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DomainIntl20171218
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AcknowledgeTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcknowledgeTaskResultResponse
       */
      Models::AcknowledgeTaskResultResponse acknowledgeTaskResultWithOptions(const Models::AcknowledgeTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AcknowledgeTaskResultRequest
       * @return AcknowledgeTaskResultResponse
       */
      Models::AcknowledgeTaskResultResponse acknowledgeTaskResult(const Models::AcknowledgeTaskResultRequest &request);

      /**
       * @param request BatchFuzzyMatchDomainSensitiveWordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchFuzzyMatchDomainSensitiveWordResponse
       */
      Models::BatchFuzzyMatchDomainSensitiveWordResponse batchFuzzyMatchDomainSensitiveWordWithOptions(const Models::BatchFuzzyMatchDomainSensitiveWordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchFuzzyMatchDomainSensitiveWordRequest
       * @return BatchFuzzyMatchDomainSensitiveWordResponse
       */
      Models::BatchFuzzyMatchDomainSensitiveWordResponse batchFuzzyMatchDomainSensitiveWord(const Models::BatchFuzzyMatchDomainSensitiveWordRequest &request);

      /**
       * @param request CancelDomainVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDomainVerificationResponse
       */
      Models::CancelDomainVerificationResponse cancelDomainVerificationWithOptions(const Models::CancelDomainVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CancelDomainVerificationRequest
       * @return CancelDomainVerificationResponse
       */
      Models::CancelDomainVerificationResponse cancelDomainVerification(const Models::CancelDomainVerificationRequest &request);

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
       * @param request DeleteEmailVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEmailVerificationResponse
       */
      Models::DeleteEmailVerificationResponse deleteEmailVerificationWithOptions(const Models::DeleteEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteEmailVerificationRequest
       * @return DeleteEmailVerificationResponse
       */
      Models::DeleteEmailVerificationResponse deleteEmailVerification(const Models::DeleteEmailVerificationRequest &request);

      /**
       * @param request DeleteRegistrantProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRegistrantProfileResponse
       */
      Models::DeleteRegistrantProfileResponse deleteRegistrantProfileWithOptions(const Models::DeleteRegistrantProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteRegistrantProfileRequest
       * @return DeleteRegistrantProfileResponse
       */
      Models::DeleteRegistrantProfileResponse deleteRegistrantProfile(const Models::DeleteRegistrantProfileRequest &request);

      /**
       * @param request EmailVerifiedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EmailVerifiedResponse
       */
      Models::EmailVerifiedResponse emailVerifiedWithOptions(const Models::EmailVerifiedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EmailVerifiedRequest
       * @return EmailVerifiedResponse
       */
      Models::EmailVerifiedResponse emailVerified(const Models::EmailVerifiedRequest &request);

      /**
       * @param request FuzzyMatchDomainSensitiveWordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FuzzyMatchDomainSensitiveWordResponse
       */
      Models::FuzzyMatchDomainSensitiveWordResponse fuzzyMatchDomainSensitiveWordWithOptions(const Models::FuzzyMatchDomainSensitiveWordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request FuzzyMatchDomainSensitiveWordRequest
       * @return FuzzyMatchDomainSensitiveWordResponse
       */
      Models::FuzzyMatchDomainSensitiveWordResponse fuzzyMatchDomainSensitiveWord(const Models::FuzzyMatchDomainSensitiveWordRequest &request);

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
       * @param request QueryChangeLogListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryChangeLogListResponse
       */
      Models::QueryChangeLogListResponse queryChangeLogListWithOptions(const Models::QueryChangeLogListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request QueryDomainByDomainNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainByDomainNameResponse
       */
      Models::QueryDomainByDomainNameResponse queryDomainByDomainNameWithOptions(const Models::QueryDomainByDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryDomainByDomainNameRequest
       * @return QueryDomainByDomainNameResponse
       */
      Models::QueryDomainByDomainNameResponse queryDomainByDomainName(const Models::QueryDomainByDomainNameRequest &request);

      /**
       * @param request QueryDomainByInstanceIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainByInstanceIdResponse
       */
      Models::QueryDomainByInstanceIdResponse queryDomainByInstanceIdWithOptions(const Models::QueryDomainByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryDomainByInstanceIdRequest
       * @return QueryDomainByInstanceIdResponse
       */
      Models::QueryDomainByInstanceIdResponse queryDomainByInstanceId(const Models::QueryDomainByInstanceIdRequest &request);

      /**
       * @summary Queries a list of domain names.
       *
       * @param request QueryDomainListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainListResponse
       */
      Models::QueryDomainListResponse queryDomainListWithOptions(const Models::QueryDomainListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of domain names.
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
       * @param request QueryRegistrantProfilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRegistrantProfilesResponse
       */
      Models::QueryRegistrantProfilesResponse queryRegistrantProfilesWithOptions(const Models::QueryRegistrantProfilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryRegistrantProfilesRequest
       * @return QueryRegistrantProfilesResponse
       */
      Models::QueryRegistrantProfilesResponse queryRegistrantProfiles(const Models::QueryRegistrantProfilesRequest &request);

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
       * @param request QueryTaskDetailListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTaskDetailListResponse
       */
      Models::QueryTaskDetailListResponse queryTaskDetailListWithOptions(const Models::QueryTaskDetailListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request QueryTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTaskListResponse
       */
      Models::QueryTaskListResponse queryTaskListWithOptions(const Models::QueryTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request RegistrantProfileRealNameVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegistrantProfileRealNameVerificationResponse
       */
      Models::RegistrantProfileRealNameVerificationResponse registrantProfileRealNameVerificationWithOptions(const Models::RegistrantProfileRealNameVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RegistrantProfileRealNameVerificationRequest
       * @return RegistrantProfileRealNameVerificationResponse
       */
      Models::RegistrantProfileRealNameVerificationResponse registrantProfileRealNameVerification(const Models::RegistrantProfileRealNameVerificationRequest &request);

      /**
       * @param request ResendEmailVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResendEmailVerificationResponse
       */
      Models::ResendEmailVerificationResponse resendEmailVerificationWithOptions(const Models::ResendEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ResendEmailVerificationRequest
       * @return ResendEmailVerificationResponse
       */
      Models::ResendEmailVerificationResponse resendEmailVerification(const Models::ResendEmailVerificationRequest &request);

      /**
       * @param request SaveBatchTaskForCreatingOrderActivateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForCreatingOrderActivateResponse
       */
      Models::SaveBatchTaskForCreatingOrderActivateResponse saveBatchTaskForCreatingOrderActivateWithOptions(const Models::SaveBatchTaskForCreatingOrderActivateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request SaveBatchTaskForCreatingOrderRenewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForCreatingOrderRenewResponse
       */
      Models::SaveBatchTaskForCreatingOrderRenewResponse saveBatchTaskForCreatingOrderRenewWithOptions(const Models::SaveBatchTaskForCreatingOrderRenewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request SaveBatchTaskForDomainNameProxyServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForDomainNameProxyServiceResponse
       */
      Models::SaveBatchTaskForDomainNameProxyServiceResponse saveBatchTaskForDomainNameProxyServiceWithOptions(const Models::SaveBatchTaskForDomainNameProxyServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveBatchTaskForDomainNameProxyServiceRequest
       * @return SaveBatchTaskForDomainNameProxyServiceResponse
       */
      Models::SaveBatchTaskForDomainNameProxyServiceResponse saveBatchTaskForDomainNameProxyService(const Models::SaveBatchTaskForDomainNameProxyServiceRequest &request);

      /**
       * @param request SaveBatchTaskForModifyingDomainDnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForModifyingDomainDnsResponse
       */
      Models::SaveBatchTaskForModifyingDomainDnsResponse saveBatchTaskForModifyingDomainDnsWithOptions(const Models::SaveBatchTaskForModifyingDomainDnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveBatchTaskForModifyingDomainDnsRequest
       * @return SaveBatchTaskForModifyingDomainDnsResponse
       */
      Models::SaveBatchTaskForModifyingDomainDnsResponse saveBatchTaskForModifyingDomainDns(const Models::SaveBatchTaskForModifyingDomainDnsRequest &request);

      /**
       * @summary 国际站删除抢注批量接口
       *
       * @param request SaveBatchTaskForReserveDropListDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForReserveDropListDomainResponse
       */
      Models::SaveBatchTaskForReserveDropListDomainResponse saveBatchTaskForReserveDropListDomainWithOptions(const Models::SaveBatchTaskForReserveDropListDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际站删除抢注批量接口
       *
       * @param request SaveBatchTaskForReserveDropListDomainRequest
       * @return SaveBatchTaskForReserveDropListDomainResponse
       */
      Models::SaveBatchTaskForReserveDropListDomainResponse saveBatchTaskForReserveDropListDomain(const Models::SaveBatchTaskForReserveDropListDomainRequest &request);

      /**
       * @param request SaveBatchTaskForTransferProhibitionLockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForTransferProhibitionLockResponse
       */
      Models::SaveBatchTaskForTransferProhibitionLockResponse saveBatchTaskForTransferProhibitionLockWithOptions(const Models::SaveBatchTaskForTransferProhibitionLockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request SaveBatchTaskForUpdatingContactInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForUpdatingContactInfoResponse
       */
      Models::SaveBatchTaskForUpdatingContactInfoResponse saveBatchTaskForUpdatingContactInfoWithOptions(const Models::SaveBatchTaskForUpdatingContactInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveBatchTaskForUpdatingContactInfoRequest
       * @return SaveBatchTaskForUpdatingContactInfoResponse
       */
      Models::SaveBatchTaskForUpdatingContactInfoResponse saveBatchTaskForUpdatingContactInfo(const Models::SaveBatchTaskForUpdatingContactInfoRequest &request);

      /**
       * @param request SaveBatchTaskForUpdatingContactInfoByNewContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBatchTaskForUpdatingContactInfoByNewContactResponse
       */
      Models::SaveBatchTaskForUpdatingContactInfoByNewContactResponse saveBatchTaskForUpdatingContactInfoByNewContactWithOptions(const Models::SaveBatchTaskForUpdatingContactInfoByNewContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveBatchTaskForUpdatingContactInfoByNewContactRequest
       * @return SaveBatchTaskForUpdatingContactInfoByNewContactResponse
       */
      Models::SaveBatchTaskForUpdatingContactInfoByNewContactResponse saveBatchTaskForUpdatingContactInfoByNewContact(const Models::SaveBatchTaskForUpdatingContactInfoByNewContactRequest &request);

      /**
       * @param request SaveRegistrantProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveRegistrantProfileResponse
       */
      Models::SaveRegistrantProfileResponse saveRegistrantProfileWithOptions(const Models::SaveRegistrantProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveRegistrantProfileRequest
       * @return SaveRegistrantProfileResponse
       */
      Models::SaveRegistrantProfileResponse saveRegistrantProfile(const Models::SaveRegistrantProfileRequest &request);

      /**
       * @param request SaveSingleTaskForAddingDSRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForAddingDSRecordResponse
       */
      Models::SaveSingleTaskForAddingDSRecordResponse saveSingleTaskForAddingDSRecordWithOptions(const Models::SaveSingleTaskForAddingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveSingleTaskForAddingDSRecordRequest
       * @return SaveSingleTaskForAddingDSRecordResponse
       */
      Models::SaveSingleTaskForAddingDSRecordResponse saveSingleTaskForAddingDSRecord(const Models::SaveSingleTaskForAddingDSRecordRequest &request);

      /**
       * @param request SaveSingleTaskForApprovingTransferOutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForApprovingTransferOutResponse
       */
      Models::SaveSingleTaskForApprovingTransferOutResponse saveSingleTaskForApprovingTransferOutWithOptions(const Models::SaveSingleTaskForApprovingTransferOutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request SaveSingleTaskForCancelingTransferOutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForCancelingTransferOutResponse
       */
      Models::SaveSingleTaskForCancelingTransferOutResponse saveSingleTaskForCancelingTransferOutWithOptions(const Models::SaveSingleTaskForCancelingTransferOutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveSingleTaskForCancelingTransferOutRequest
       * @return SaveSingleTaskForCancelingTransferOutResponse
       */
      Models::SaveSingleTaskForCancelingTransferOutResponse saveSingleTaskForCancelingTransferOut(const Models::SaveSingleTaskForCancelingTransferOutRequest &request);

      /**
       * @param request SaveSingleTaskForCreatingDnsHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForCreatingDnsHostResponse
       */
      Models::SaveSingleTaskForCreatingDnsHostResponse saveSingleTaskForCreatingDnsHostWithOptions(const Models::SaveSingleTaskForCreatingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveSingleTaskForCreatingDnsHostRequest
       * @return SaveSingleTaskForCreatingDnsHostResponse
       */
      Models::SaveSingleTaskForCreatingDnsHostResponse saveSingleTaskForCreatingDnsHost(const Models::SaveSingleTaskForCreatingDnsHostRequest &request);

      /**
       * @param request SaveSingleTaskForCreatingOrderActivateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForCreatingOrderActivateResponse
       */
      Models::SaveSingleTaskForCreatingOrderActivateResponse saveSingleTaskForCreatingOrderActivateWithOptions(const Models::SaveSingleTaskForCreatingOrderActivateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request SaveSingleTaskForCreatingOrderRenewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForCreatingOrderRenewResponse
       */
      Models::SaveSingleTaskForCreatingOrderRenewResponse saveSingleTaskForCreatingOrderRenewWithOptions(const Models::SaveSingleTaskForCreatingOrderRenewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request SaveSingleTaskForDeletingDSRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForDeletingDSRecordResponse
       */
      Models::SaveSingleTaskForDeletingDSRecordResponse saveSingleTaskForDeletingDSRecordWithOptions(const Models::SaveSingleTaskForDeletingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveSingleTaskForDeletingDSRecordRequest
       * @return SaveSingleTaskForDeletingDSRecordResponse
       */
      Models::SaveSingleTaskForDeletingDSRecordResponse saveSingleTaskForDeletingDSRecord(const Models::SaveSingleTaskForDeletingDSRecordRequest &request);

      /**
       * @param request SaveSingleTaskForDeletingDnsHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForDeletingDnsHostResponse
       */
      Models::SaveSingleTaskForDeletingDnsHostResponse saveSingleTaskForDeletingDnsHostWithOptions(const Models::SaveSingleTaskForDeletingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request SaveSingleTaskForDomainNameProxyServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForDomainNameProxyServiceResponse
       */
      Models::SaveSingleTaskForDomainNameProxyServiceResponse saveSingleTaskForDomainNameProxyServiceWithOptions(const Models::SaveSingleTaskForDomainNameProxyServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveSingleTaskForDomainNameProxyServiceRequest
       * @return SaveSingleTaskForDomainNameProxyServiceResponse
       */
      Models::SaveSingleTaskForDomainNameProxyServiceResponse saveSingleTaskForDomainNameProxyService(const Models::SaveSingleTaskForDomainNameProxyServiceRequest &request);

      /**
       * @param request SaveSingleTaskForModifyingDSRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForModifyingDSRecordResponse
       */
      Models::SaveSingleTaskForModifyingDSRecordResponse saveSingleTaskForModifyingDSRecordWithOptions(const Models::SaveSingleTaskForModifyingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveSingleTaskForModifyingDSRecordRequest
       * @return SaveSingleTaskForModifyingDSRecordResponse
       */
      Models::SaveSingleTaskForModifyingDSRecordResponse saveSingleTaskForModifyingDSRecord(const Models::SaveSingleTaskForModifyingDSRecordRequest &request);

      /**
       * @param request SaveSingleTaskForModifyingDnsHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForModifyingDnsHostResponse
       */
      Models::SaveSingleTaskForModifyingDnsHostResponse saveSingleTaskForModifyingDnsHostWithOptions(const Models::SaveSingleTaskForModifyingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveSingleTaskForModifyingDnsHostRequest
       * @return SaveSingleTaskForModifyingDnsHostResponse
       */
      Models::SaveSingleTaskForModifyingDnsHostResponse saveSingleTaskForModifyingDnsHost(const Models::SaveSingleTaskForModifyingDnsHostRequest &request);

      /**
       * @param request SaveSingleTaskForQueryingTransferAuthorizationCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForQueryingTransferAuthorizationCodeResponse
       */
      Models::SaveSingleTaskForQueryingTransferAuthorizationCodeResponse saveSingleTaskForQueryingTransferAuthorizationCodeWithOptions(const Models::SaveSingleTaskForQueryingTransferAuthorizationCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request SaveSingleTaskForSaveArtExtensionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForSaveArtExtensionResponse
       */
      Models::SaveSingleTaskForSaveArtExtensionResponse saveSingleTaskForSaveArtExtensionWithOptions(const Models::SaveSingleTaskForSaveArtExtensionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveSingleTaskForSaveArtExtensionRequest
       * @return SaveSingleTaskForSaveArtExtensionResponse
       */
      Models::SaveSingleTaskForSaveArtExtensionResponse saveSingleTaskForSaveArtExtension(const Models::SaveSingleTaskForSaveArtExtensionRequest &request);

      /**
       * @param request SaveSingleTaskForSynchronizingDSRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForSynchronizingDSRecordResponse
       */
      Models::SaveSingleTaskForSynchronizingDSRecordResponse saveSingleTaskForSynchronizingDSRecordWithOptions(const Models::SaveSingleTaskForSynchronizingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveSingleTaskForSynchronizingDSRecordRequest
       * @return SaveSingleTaskForSynchronizingDSRecordResponse
       */
      Models::SaveSingleTaskForSynchronizingDSRecordResponse saveSingleTaskForSynchronizingDSRecord(const Models::SaveSingleTaskForSynchronizingDSRecordRequest &request);

      /**
       * @param request SaveSingleTaskForSynchronizingDnsHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForSynchronizingDnsHostResponse
       */
      Models::SaveSingleTaskForSynchronizingDnsHostResponse saveSingleTaskForSynchronizingDnsHostWithOptions(const Models::SaveSingleTaskForSynchronizingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveSingleTaskForSynchronizingDnsHostRequest
       * @return SaveSingleTaskForSynchronizingDnsHostResponse
       */
      Models::SaveSingleTaskForSynchronizingDnsHostResponse saveSingleTaskForSynchronizingDnsHost(const Models::SaveSingleTaskForSynchronizingDnsHostRequest &request);

      /**
       * @param request SaveSingleTaskForTransferProhibitionLockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForTransferProhibitionLockResponse
       */
      Models::SaveSingleTaskForTransferProhibitionLockResponse saveSingleTaskForTransferProhibitionLockWithOptions(const Models::SaveSingleTaskForTransferProhibitionLockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveSingleTaskForTransferProhibitionLockRequest
       * @return SaveSingleTaskForTransferProhibitionLockResponse
       */
      Models::SaveSingleTaskForTransferProhibitionLockResponse saveSingleTaskForTransferProhibitionLock(const Models::SaveSingleTaskForTransferProhibitionLockRequest &request);

      /**
       * @param request SaveSingleTaskForUpdateProhibitionLockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForUpdateProhibitionLockResponse
       */
      Models::SaveSingleTaskForUpdateProhibitionLockResponse saveSingleTaskForUpdateProhibitionLockWithOptions(const Models::SaveSingleTaskForUpdateProhibitionLockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveSingleTaskForUpdateProhibitionLockRequest
       * @return SaveSingleTaskForUpdateProhibitionLockResponse
       */
      Models::SaveSingleTaskForUpdateProhibitionLockResponse saveSingleTaskForUpdateProhibitionLock(const Models::SaveSingleTaskForUpdateProhibitionLockRequest &request);

      /**
       * @param request SaveSingleTaskForUpdatingContactInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSingleTaskForUpdatingContactInfoResponse
       */
      Models::SaveSingleTaskForUpdatingContactInfoResponse saveSingleTaskForUpdatingContactInfoWithOptions(const Models::SaveSingleTaskForUpdatingContactInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveSingleTaskForUpdatingContactInfoRequest
       * @return SaveSingleTaskForUpdatingContactInfoResponse
       */
      Models::SaveSingleTaskForUpdatingContactInfoResponse saveSingleTaskForUpdatingContactInfo(const Models::SaveSingleTaskForUpdatingContactInfoRequest &request);

      /**
       * @param request SaveTaskForSubmittingDomainDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForSubmittingDomainDeleteResponse
       */
      Models::SaveTaskForSubmittingDomainDeleteResponse saveTaskForSubmittingDomainDeleteWithOptions(const Models::SaveTaskForSubmittingDomainDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveTaskForSubmittingDomainDeleteRequest
       * @return SaveTaskForSubmittingDomainDeleteResponse
       */
      Models::SaveTaskForSubmittingDomainDeleteResponse saveTaskForSubmittingDomainDelete(const Models::SaveTaskForSubmittingDomainDeleteRequest &request);

      /**
       * @param request SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse
       */
      Models::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse saveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialWithOptions(const Models::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest
       * @return SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse
       */
      Models::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse saveTaskForSubmittingDomainRealNameVerificationByIdentityCredential(const Models::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest &request);

      /**
       * @param request SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse
       */
      Models::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDWithOptions(const Models::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest
       * @return SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse
       */
      Models::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileID(const Models::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest &request);

      /**
       * @param request SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse
       */
      Models::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse saveTaskForUpdatingRegistrantInfoByIdentityCredentialWithOptions(const Models::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest
       * @return SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse
       */
      Models::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse saveTaskForUpdatingRegistrantInfoByIdentityCredential(const Models::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest &request);

      /**
       * @param request SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse
       */
      Models::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse saveTaskForUpdatingRegistrantInfoByRegistrantProfileIDWithOptions(const Models::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest
       * @return SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse
       */
      Models::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse saveTaskForUpdatingRegistrantInfoByRegistrantProfileID(const Models::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest &request);

      /**
       * @param request SubmitEmailVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitEmailVerificationResponse
       */
      Models::SubmitEmailVerificationResponse submitEmailVerificationWithOptions(const Models::SubmitEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SubmitEmailVerificationRequest
       * @return SubmitEmailVerificationResponse
       */
      Models::SubmitEmailVerificationResponse submitEmailVerification(const Models::SubmitEmailVerificationRequest &request);

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
       * @param request VerifyContactFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyContactFieldResponse
       */
      Models::VerifyContactFieldResponse verifyContactFieldWithOptions(const Models::VerifyContactFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request VerifyContactFieldRequest
       * @return VerifyContactFieldResponse
       */
      Models::VerifyContactFieldResponse verifyContactField(const Models::VerifyContactFieldRequest &request);

      /**
       * @param request VerifyEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyEmailResponse
       */
      Models::VerifyEmailResponse verifyEmailWithOptions(const Models::VerifyEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request VerifyEmailRequest
       * @return VerifyEmailResponse
       */
      Models::VerifyEmailResponse verifyEmail(const Models::VerifyEmailRequest &request);
  };
} // namespace AlibabaCloud
} // namespace DomainIntl20171218
#endif
