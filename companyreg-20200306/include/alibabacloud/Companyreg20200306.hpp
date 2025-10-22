// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_COMPANYREG20200306_HPP_
#define ALIBABACLOUD_COMPANYREG20200306_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Companyreg20200306Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Companyreg20200306.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request BindProduceAuthorizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindProduceAuthorizationResponse
       */
      Models::BindProduceAuthorizationResponse bindProduceAuthorizationWithOptions(const Models::BindProduceAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BindProduceAuthorizationRequest
       * @return BindProduceAuthorizationResponse
       */
      Models::BindProduceAuthorizationResponse bindProduceAuthorization(const Models::BindProduceAuthorizationRequest &request);

      /**
       * @param request CloseIntentionForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseIntentionForPartnerResponse
       */
      Models::CloseIntentionForPartnerResponse closeIntentionForPartnerWithOptions(const Models::CloseIntentionForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CloseIntentionForPartnerRequest
       * @return CloseIntentionForPartnerResponse
       */
      Models::CloseIntentionForPartnerResponse closeIntentionForPartner(const Models::CloseIntentionForPartnerRequest &request);

      /**
       * @param request CloseUserIntentionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseUserIntentionResponse
       */
      Models::CloseUserIntentionResponse closeUserIntentionWithOptions(const Models::CloseUserIntentionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CloseUserIntentionRequest
       * @return CloseUserIntentionResponse
       */
      Models::CloseUserIntentionResponse closeUserIntention(const Models::CloseUserIntentionRequest &request);

      /**
       * @summary CreateBusinessOpportunity
       *
       * @param request CreateBusinessOpportunityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBusinessOpportunityResponse
       */
      Models::CreateBusinessOpportunityResponse createBusinessOpportunityWithOptions(const Models::CreateBusinessOpportunityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateBusinessOpportunity
       *
       * @param request CreateBusinessOpportunityRequest
       * @return CreateBusinessOpportunityResponse
       */
      Models::CreateBusinessOpportunityResponse createBusinessOpportunity(const Models::CreateBusinessOpportunityRequest &request);

      /**
       * @param request CreateProduceForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProduceForPartnerResponse
       */
      Models::CreateProduceForPartnerResponse createProduceForPartnerWithOptions(const Models::CreateProduceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateProduceForPartnerRequest
       * @return CreateProduceForPartnerResponse
       */
      Models::CreateProduceForPartnerResponse createProduceForPartner(const Models::CreateProduceForPartnerRequest &request);

      /**
       * @param request DescribePartnerConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePartnerConfigResponse
       */
      Models::DescribePartnerConfigResponse describePartnerConfigWithOptions(const Models::DescribePartnerConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribePartnerConfigRequest
       * @return DescribePartnerConfigResponse
       */
      Models::DescribePartnerConfigResponse describePartnerConfig(const Models::DescribePartnerConfigRequest &request);

      /**
       * @summary GenerateUploadFilePolicy
       *
       * @param request GenerateUploadFilePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateUploadFilePolicyResponse
       */
      Models::GenerateUploadFilePolicyResponse generateUploadFilePolicyWithOptions(const Models::GenerateUploadFilePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GenerateUploadFilePolicy
       *
       * @param request GenerateUploadFilePolicyRequest
       * @return GenerateUploadFilePolicyResponse
       */
      Models::GenerateUploadFilePolicyResponse generateUploadFilePolicy(const Models::GenerateUploadFilePolicyRequest &request);

      /**
       * @param request GetAlipayUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlipayUrlResponse
       */
      Models::GetAlipayUrlResponse getAlipayUrlWithOptions(const Models::GetAlipayUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAlipayUrlRequest
       * @return GetAlipayUrlResponse
       */
      Models::GetAlipayUrlResponse getAlipayUrl(const Models::GetAlipayUrlRequest &request);

      /**
       * @param request ListIntentionNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntentionNoteResponse
       */
      Models::ListIntentionNoteResponse listIntentionNoteWithOptions(const Models::ListIntentionNoteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListIntentionNoteRequest
       * @return ListIntentionNoteResponse
       */
      Models::ListIntentionNoteResponse listIntentionNote(const Models::ListIntentionNoteRequest &request);

      /**
       * @param request ListProduceAuthorizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProduceAuthorizationResponse
       */
      Models::ListProduceAuthorizationResponse listProduceAuthorizationWithOptions(const Models::ListProduceAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListProduceAuthorizationRequest
       * @return ListProduceAuthorizationResponse
       */
      Models::ListProduceAuthorizationResponse listProduceAuthorization(const Models::ListProduceAuthorizationRequest &request);

      /**
       * @param request ListUserDetailSolutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserDetailSolutionsResponse
       */
      Models::ListUserDetailSolutionsResponse listUserDetailSolutionsWithOptions(const Models::ListUserDetailSolutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListUserDetailSolutionsRequest
       * @return ListUserDetailSolutionsResponse
       */
      Models::ListUserDetailSolutionsResponse listUserDetailSolutions(const Models::ListUserDetailSolutionsRequest &request);

      /**
       * @param request ListUserIntentionNotesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserIntentionNotesResponse
       */
      Models::ListUserIntentionNotesResponse listUserIntentionNotesWithOptions(const Models::ListUserIntentionNotesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListUserIntentionNotesRequest
       * @return ListUserIntentionNotesResponse
       */
      Models::ListUserIntentionNotesResponse listUserIntentionNotes(const Models::ListUserIntentionNotesRequest &request);

      /**
       * @summary 用户控制天需求列表查询
       *
       * @param request ListUserIntentionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserIntentionsResponse
       */
      Models::ListUserIntentionsResponse listUserIntentionsWithOptions(const Models::ListUserIntentionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用户控制天需求列表查询
       *
       * @param request ListUserIntentionsRequest
       * @return ListUserIntentionsResponse
       */
      Models::ListUserIntentionsResponse listUserIntentions(const Models::ListUserIntentionsRequest &request);

      /**
       * @param request ListUserProduceOperateLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserProduceOperateLogsResponse
       */
      Models::ListUserProduceOperateLogsResponse listUserProduceOperateLogsWithOptions(const Models::ListUserProduceOperateLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListUserProduceOperateLogsRequest
       * @return ListUserProduceOperateLogsResponse
       */
      Models::ListUserProduceOperateLogsResponse listUserProduceOperateLogs(const Models::ListUserProduceOperateLogsRequest &request);

      /**
       * @param tmpReq ListUserSolutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserSolutionsResponse
       */
      Models::ListUserSolutionsResponse listUserSolutionsWithOptions(const Models::ListUserSolutionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListUserSolutionsRequest
       * @return ListUserSolutionsResponse
       */
      Models::ListUserSolutionsResponse listUserSolutions(const Models::ListUserSolutionsRequest &request);

      /**
       * @summary 服务商玄坛呼叫中心操作
       *
       * @param request OperateCallCenterForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateCallCenterForPartnerResponse
       */
      Models::OperateCallCenterForPartnerResponse operateCallCenterForPartnerWithOptions(const Models::OperateCallCenterForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 服务商玄坛呼叫中心操作
       *
       * @param request OperateCallCenterForPartnerRequest
       * @return OperateCallCenterForPartnerResponse
       */
      Models::OperateCallCenterForPartnerResponse operateCallCenterForPartner(const Models::OperateCallCenterForPartnerRequest &request);

      /**
       * @param request OperateProduceForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateProduceForPartnerResponse
       */
      Models::OperateProduceForPartnerResponse operateProduceForPartnerWithOptions(const Models::OperateProduceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request OperateProduceForPartnerRequest
       * @return OperateProduceForPartnerResponse
       */
      Models::OperateProduceForPartnerResponse operateProduceForPartner(const Models::OperateProduceForPartnerRequest &request);

      /**
       * @param request PutMeasureDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutMeasureDataResponse
       */
      Models::PutMeasureDataResponse putMeasureDataWithOptions(const Models::PutMeasureDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PutMeasureDataRequest
       * @return PutMeasureDataResponse
       */
      Models::PutMeasureDataResponse putMeasureData(const Models::PutMeasureDataRequest &request);

      /**
       * @param request PutMeasureReadyFlagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutMeasureReadyFlagResponse
       */
      Models::PutMeasureReadyFlagResponse putMeasureReadyFlagWithOptions(const Models::PutMeasureReadyFlagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PutMeasureReadyFlagRequest
       * @return PutMeasureReadyFlagResponse
       */
      Models::PutMeasureReadyFlagResponse putMeasureReadyFlag(const Models::PutMeasureReadyFlagRequest &request);

      /**
       * @summary 获取玄坛合作伙伴双呼时可用外呼号码
       *
       * @param request QueryAvailableNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAvailableNumbersResponse
       */
      Models::QueryAvailableNumbersResponse queryAvailableNumbersWithOptions(const Models::QueryAvailableNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取玄坛合作伙伴双呼时可用外呼号码
       *
       * @param request QueryAvailableNumbersRequest
       * @return QueryAvailableNumbersResponse
       */
      Models::QueryAvailableNumbersResponse queryAvailableNumbers(const Models::QueryAvailableNumbersRequest &request);

      /**
       * @param request QueryBagRemainingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBagRemainingResponse
       */
      Models::QueryBagRemainingResponse queryBagRemainingWithOptions(const Models::QueryBagRemainingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryBagRemainingRequest
       * @return QueryBagRemainingResponse
       */
      Models::QueryBagRemainingResponse queryBagRemaining(const Models::QueryBagRemainingRequest &request);

      /**
       * @summary 查询玄坛外呼语音文件
       *
       * @param request QueryCallRecordListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCallRecordListResponse
       */
      Models::QueryCallRecordListResponse queryCallRecordListWithOptions(const Models::QueryCallRecordListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询玄坛外呼语音文件
       *
       * @param request QueryCallRecordListRequest
       * @return QueryCallRecordListResponse
       */
      Models::QueryCallRecordListResponse queryCallRecordList(const Models::QueryCallRecordListRequest &request);

      /**
       * @param request QueryInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInstanceResponse
       */
      Models::QueryInstanceResponse queryInstanceWithOptions(const Models::QueryInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryInstanceRequest
       * @return QueryInstanceResponse
       */
      Models::QueryInstanceResponse queryInstance(const Models::QueryInstanceRequest &request);

      /**
       * @summary QueryPartnerIntentionList
       *
       * @param request QueryPartnerIntentionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPartnerIntentionListResponse
       */
      Models::QueryPartnerIntentionListResponse queryPartnerIntentionListWithOptions(const Models::QueryPartnerIntentionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary QueryPartnerIntentionList
       *
       * @param request QueryPartnerIntentionListRequest
       * @return QueryPartnerIntentionListResponse
       */
      Models::QueryPartnerIntentionListResponse queryPartnerIntentionList(const Models::QueryPartnerIntentionListRequest &request);

      /**
       * @summary QueryPartnerProduceList
       *
       * @param request QueryPartnerProduceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPartnerProduceListResponse
       */
      Models::QueryPartnerProduceListResponse queryPartnerProduceListWithOptions(const Models::QueryPartnerProduceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary QueryPartnerProduceList
       *
       * @param request QueryPartnerProduceListRequest
       * @return QueryPartnerProduceListResponse
       */
      Models::QueryPartnerProduceListResponse queryPartnerProduceList(const Models::QueryPartnerProduceListRequest &request);

      /**
       * @param request QueryUserNeedAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserNeedAuthResponse
       */
      Models::QueryUserNeedAuthResponse queryUserNeedAuthWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @return QueryUserNeedAuthResponse
       */
      Models::QueryUserNeedAuthResponse queryUserNeedAuth();

      /**
       * @summary 服务商玄坛外呼呼叫中心事件回传
       *
       * @param request RecordCallCenterEventForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecordCallCenterEventForPartnerResponse
       */
      Models::RecordCallCenterEventForPartnerResponse recordCallCenterEventForPartnerWithOptions(const Models::RecordCallCenterEventForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 服务商玄坛外呼呼叫中心事件回传
       *
       * @param request RecordCallCenterEventForPartnerRequest
       * @return RecordCallCenterEventForPartnerResponse
       */
      Models::RecordCallCenterEventForPartnerResponse recordCallCenterEventForPartner(const Models::RecordCallCenterEventForPartnerRequest &request);

      /**
       * @summary RecordPostBack
       *
       * @param request RecordPostBackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecordPostBackResponse
       */
      Models::RecordPostBackResponse recordPostBackWithOptions(const Models::RecordPostBackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary RecordPostBack
       *
       * @param request RecordPostBackRequest
       * @return RecordPostBackResponse
       */
      Models::RecordPostBackResponse recordPostBack(const Models::RecordPostBackRequest &request);

      /**
       * @param request RejectSolutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RejectSolutionResponse
       */
      Models::RejectSolutionResponse rejectSolutionWithOptions(const Models::RejectSolutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RejectSolutionRequest
       * @return RejectSolutionResponse
       */
      Models::RejectSolutionResponse rejectSolution(const Models::RejectSolutionRequest &request);

      /**
       * @param request RejectUserSolutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RejectUserSolutionResponse
       */
      Models::RejectUserSolutionResponse rejectUserSolutionWithOptions(const Models::RejectUserSolutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RejectUserSolutionRequest
       * @return RejectUserSolutionResponse
       */
      Models::RejectUserSolutionResponse rejectUserSolution(const Models::RejectUserSolutionRequest &request);

      /**
       * @param request ReleaseProduceAuthorizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseProduceAuthorizationResponse
       */
      Models::ReleaseProduceAuthorizationResponse releaseProduceAuthorizationWithOptions(const Models::ReleaseProduceAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ReleaseProduceAuthorizationRequest
       * @return ReleaseProduceAuthorizationResponse
       */
      Models::ReleaseProduceAuthorizationResponse releaseProduceAuthorization(const Models::ReleaseProduceAuthorizationRequest &request);

      /**
       * @summary 玄坛双呼外呼发起
       *
       * @param request StartBackToBackCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartBackToBackCallResponse
       */
      Models::StartBackToBackCallResponse startBackToBackCallWithOptions(const Models::StartBackToBackCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 玄坛双呼外呼发起
       *
       * @param request StartBackToBackCallRequest
       * @return StartBackToBackCallResponse
       */
      Models::StartBackToBackCallResponse startBackToBackCall(const Models::StartBackToBackCallRequest &request);

      /**
       * @summary 合作伙伴提交需求单
       *
       * @param request SubmitIntentionForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitIntentionForPartnerResponse
       */
      Models::SubmitIntentionForPartnerResponse submitIntentionForPartnerWithOptions(const Models::SubmitIntentionForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 合作伙伴提交需求单
       *
       * @param request SubmitIntentionForPartnerRequest
       * @return SubmitIntentionForPartnerResponse
       */
      Models::SubmitIntentionForPartnerResponse submitIntentionForPartner(const Models::SubmitIntentionForPartnerRequest &request);

      /**
       * @param request SubmitIntentionNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitIntentionNoteResponse
       */
      Models::SubmitIntentionNoteResponse submitIntentionNoteWithOptions(const Models::SubmitIntentionNoteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SubmitIntentionNoteRequest
       * @return SubmitIntentionNoteResponse
       */
      Models::SubmitIntentionNoteResponse submitIntentionNote(const Models::SubmitIntentionNoteRequest &request);

      /**
       * @param request SubmitSolutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSolutionResponse
       */
      Models::SubmitSolutionResponse submitSolutionWithOptions(const Models::SubmitSolutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SubmitSolutionRequest
       * @return SubmitSolutionResponse
       */
      Models::SubmitSolutionResponse submitSolution(const Models::SubmitSolutionRequest &request);

      /**
       * @summary 玄坛需求单转派小二
       *
       * @param request TransferIntentionOwnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferIntentionOwnerResponse
       */
      Models::TransferIntentionOwnerResponse transferIntentionOwnerWithOptions(const Models::TransferIntentionOwnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 玄坛需求单转派小二
       *
       * @param request TransferIntentionOwnerRequest
       * @return TransferIntentionOwnerResponse
       */
      Models::TransferIntentionOwnerResponse transferIntentionOwner(const Models::TransferIntentionOwnerRequest &request);

      /**
       * @summary 玄坛服务单转派小二
       *
       * @param request TransferProduceOwnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferProduceOwnerResponse
       */
      Models::TransferProduceOwnerResponse transferProduceOwnerWithOptions(const Models::TransferProduceOwnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 玄坛服务单转派小二
       *
       * @param request TransferProduceOwnerRequest
       * @return TransferProduceOwnerResponse
       */
      Models::TransferProduceOwnerResponse transferProduceOwner(const Models::TransferProduceOwnerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
