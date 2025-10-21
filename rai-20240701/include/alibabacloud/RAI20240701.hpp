// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_RAI20240701_HPP_
#define ALIBABACLOUD_RAI20240701_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/RAI20240701Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/RAI20240701.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary BatchContentAsyncDetect
       *
       * @param request BatchContentAsyncDetectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchContentAsyncDetectResponse
       */
      Models::BatchContentAsyncDetectResponse batchContentAsyncDetectWithOptions(const Models::BatchContentAsyncDetectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary BatchContentAsyncDetect
       *
       * @param request BatchContentAsyncDetectRequest
       * @return BatchContentAsyncDetectResponse
       */
      Models::BatchContentAsyncDetectResponse batchContentAsyncDetect(const Models::BatchContentAsyncDetectRequest &request);

      /**
       * @summary BatchContentSyncDetect
       *
       * @param request BatchContentSyncDetectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchContentSyncDetectResponse
       */
      Models::BatchContentSyncDetectResponse batchContentSyncDetectWithOptions(const Models::BatchContentSyncDetectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary BatchContentSyncDetect
       *
       * @param request BatchContentSyncDetectRequest
       * @return BatchContentSyncDetectResponse
       */
      Models::BatchContentSyncDetectResponse batchContentSyncDetect(const Models::BatchContentSyncDetectRequest &request);

      /**
       * @summary 检查用户是否开通RAI服务
       *
       * @param request CheckAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckAccountResponse
       */
      Models::CheckAccountResponse checkAccountWithOptions(const Models::CheckAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查用户是否开通RAI服务
       *
       * @param request CheckAccountRequest
       * @return CheckAccountResponse
       */
      Models::CheckAccountResponse checkAccount(const Models::CheckAccountRequest &request);

      /**
       * @summary ContentAsyncDetect
       *
       * @param request ContentAsyncDetectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContentAsyncDetectResponse
       */
      Models::ContentAsyncDetectResponse contentAsyncDetectWithOptions(const Models::ContentAsyncDetectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ContentAsyncDetect
       *
       * @param request ContentAsyncDetectRequest
       * @return ContentAsyncDetectResponse
       */
      Models::ContentAsyncDetectResponse contentAsyncDetect(const Models::ContentAsyncDetectRequest &request);

      /**
       * @summary ContentSyncDetect
       *
       * @param request ContentSyncDetectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContentSyncDetectResponse
       */
      Models::ContentSyncDetectResponse contentSyncDetectWithOptions(const Models::ContentSyncDetectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ContentSyncDetect
       *
       * @param request ContentSyncDetectRequest
       * @return ContentSyncDetectResponse
       */
      Models::ContentSyncDetectResponse contentSyncDetect(const Models::ContentSyncDetectRequest &request);

      /**
       * @summary CreateModelInstance
       *
       * @param request CreateModelInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelInstanceResponse
       */
      Models::CreateModelInstanceResponse createModelInstanceWithOptions(const Models::CreateModelInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateModelInstance
       *
       * @param request CreateModelInstanceRequest
       * @return CreateModelInstanceResponse
       */
      Models::CreateModelInstanceResponse createModelInstance(const Models::CreateModelInstanceRequest &request);

      /**
       * @summary CreatePolicy
       *
       * @param tmpReq CreatePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicyWithOptions(const Models::CreatePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreatePolicy
       *
       * @param request CreatePolicyRequest
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicy(const Models::CreatePolicyRequest &request);

      /**
       * @summary CreateTopic
       *
       * @param tmpReq CreateTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTopicResponse
       */
      Models::CreateTopicResponse createTopicWithOptions(const Models::CreateTopicRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateTopic
       *
       * @param request CreateTopicRequest
       * @return CreateTopicResponse
       */
      Models::CreateTopicResponse createTopic(const Models::CreateTopicRequest &request);

      /**
       * @summary CreateWordGroup
       *
       * @param tmpReq CreateWordGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWordGroupResponse
       */
      Models::CreateWordGroupResponse createWordGroupWithOptions(const Models::CreateWordGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateWordGroup
       *
       * @param request CreateWordGroupRequest
       * @return CreateWordGroupResponse
       */
      Models::CreateWordGroupResponse createWordGroup(const Models::CreateWordGroupRequest &request);

      /**
       * @summary DeleteModelInstance
       *
       * @param tmpReq DeleteModelInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelInstanceResponse
       */
      Models::DeleteModelInstanceResponse deleteModelInstanceWithOptions(const Models::DeleteModelInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteModelInstance
       *
       * @param request DeleteModelInstanceRequest
       * @return DeleteModelInstanceResponse
       */
      Models::DeleteModelInstanceResponse deleteModelInstance(const Models::DeleteModelInstanceRequest &request);

      /**
       * @summary DeletePolicy
       *
       * @param tmpReq DeletePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicyWithOptions(const Models::DeletePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeletePolicy
       *
       * @param request DeletePolicyRequest
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicy(const Models::DeletePolicyRequest &request);

      /**
       * @summary DeleteTopic
       *
       * @param tmpReq DeleteTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTopicResponse
       */
      Models::DeleteTopicResponse deleteTopicWithOptions(const Models::DeleteTopicRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteTopic
       *
       * @param request DeleteTopicRequest
       * @return DeleteTopicResponse
       */
      Models::DeleteTopicResponse deleteTopic(const Models::DeleteTopicRequest &request);

      /**
       * @summary DeleteWordGroup
       *
       * @param tmpReq DeleteWordGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWordGroupResponse
       */
      Models::DeleteWordGroupResponse deleteWordGroupWithOptions(const Models::DeleteWordGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteWordGroup
       *
       * @param request DeleteWordGroupRequest
       * @return DeleteWordGroupResponse
       */
      Models::DeleteWordGroupResponse deleteWordGroup(const Models::DeleteWordGroupRequest &request);

      /**
       * @summary GetContentDetectResult
       *
       * @param request GetContentDetectResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContentDetectResultResponse
       */
      Models::GetContentDetectResultResponse getContentDetectResultWithOptions(const Models::GetContentDetectResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetContentDetectResult
       *
       * @param request GetContentDetectResultRequest
       * @return GetContentDetectResultResponse
       */
      Models::GetContentDetectResultResponse getContentDetectResult(const Models::GetContentDetectResultRequest &request);

      /**
       * @summary GetModelInputContentDetectResult
       *
       * @param request GetModelInputContentDetectResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelInputContentDetectResultResponse
       */
      Models::GetModelInputContentDetectResultResponse getModelInputContentDetectResultWithOptions(const Models::GetModelInputContentDetectResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetModelInputContentDetectResult
       *
       * @param request GetModelInputContentDetectResultRequest
       * @return GetModelInputContentDetectResultResponse
       */
      Models::GetModelInputContentDetectResultResponse getModelInputContentDetectResult(const Models::GetModelInputContentDetectResultRequest &request);

      /**
       * @summary GetModelInstanceInfo
       *
       * @param request GetModelInstanceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelInstanceInfoResponse
       */
      Models::GetModelInstanceInfoResponse getModelInstanceInfoWithOptions(const Models::GetModelInstanceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetModelInstanceInfo
       *
       * @param request GetModelInstanceInfoRequest
       * @return GetModelInstanceInfoResponse
       */
      Models::GetModelInstanceInfoResponse getModelInstanceInfo(const Models::GetModelInstanceInfoRequest &request);

      /**
       * @summary GetModelOutputContentDetectResult
       *
       * @param request GetModelOutputContentDetectResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelOutputContentDetectResultResponse
       */
      Models::GetModelOutputContentDetectResultResponse getModelOutputContentDetectResultWithOptions(const Models::GetModelOutputContentDetectResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetModelOutputContentDetectResult
       *
       * @param request GetModelOutputContentDetectResultRequest
       * @return GetModelOutputContentDetectResultResponse
       */
      Models::GetModelOutputContentDetectResultResponse getModelOutputContentDetectResult(const Models::GetModelOutputContentDetectResultRequest &request);

      /**
       * @summary GetPolicyDefaultOptions
       *
       * @param request GetPolicyDefaultOptionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyDefaultOptionsResponse
       */
      Models::GetPolicyDefaultOptionsResponse getPolicyDefaultOptionsWithOptions(const Models::GetPolicyDefaultOptionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetPolicyDefaultOptions
       *
       * @param request GetPolicyDefaultOptionsRequest
       * @return GetPolicyDefaultOptionsResponse
       */
      Models::GetPolicyDefaultOptionsResponse getPolicyDefaultOptions(const Models::GetPolicyDefaultOptionsRequest &request);

      /**
       * @summary GetPolicyInfo
       *
       * @param request GetPolicyInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyInfoResponse
       */
      Models::GetPolicyInfoResponse getPolicyInfoWithOptions(const Models::GetPolicyInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetPolicyInfo
       *
       * @param request GetPolicyInfoRequest
       * @return GetPolicyInfoResponse
       */
      Models::GetPolicyInfoResponse getPolicyInfo(const Models::GetPolicyInfoRequest &request);

      /**
       * @summary GetTopic
       *
       * @param request GetTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicResponse
       */
      Models::GetTopicResponse getTopicWithOptions(const Models::GetTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetTopic
       *
       * @param request GetTopicRequest
       * @return GetTopicResponse
       */
      Models::GetTopicResponse getTopic(const Models::GetTopicRequest &request);

      /**
       * @summary GetWordGroup
       *
       * @param request GetWordGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWordGroupResponse
       */
      Models::GetWordGroupResponse getWordGroupWithOptions(const Models::GetWordGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetWordGroup
       *
       * @param request GetWordGroupRequest
       * @return GetWordGroupResponse
       */
      Models::GetWordGroupResponse getWordGroup(const Models::GetWordGroupRequest &request);

      /**
       * @summary ListModelCategory
       *
       * @param request ListModelCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelCategoryResponse
       */
      Models::ListModelCategoryResponse listModelCategoryWithOptions(const Models::ListModelCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListModelCategory
       *
       * @param request ListModelCategoryRequest
       * @return ListModelCategoryResponse
       */
      Models::ListModelCategoryResponse listModelCategory(const Models::ListModelCategoryRequest &request);

      /**
       * @summary ListModelInstance
       *
       * @param request ListModelInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelInstanceResponse
       */
      Models::ListModelInstanceResponse listModelInstanceWithOptions(const Models::ListModelInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListModelInstance
       *
       * @param request ListModelInstanceRequest
       * @return ListModelInstanceResponse
       */
      Models::ListModelInstanceResponse listModelInstance(const Models::ListModelInstanceRequest &request);

      /**
       * @summary ListPolicy
       *
       * @param request ListPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicyResponse
       */
      Models::ListPolicyResponse listPolicyWithOptions(const Models::ListPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListPolicy
       *
       * @param request ListPolicyRequest
       * @return ListPolicyResponse
       */
      Models::ListPolicyResponse listPolicy(const Models::ListPolicyRequest &request);

      /**
       * @summary ListTopic
       *
       * @param request ListTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTopicResponse
       */
      Models::ListTopicResponse listTopicWithOptions(const Models::ListTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListTopic
       *
       * @param request ListTopicRequest
       * @return ListTopicResponse
       */
      Models::ListTopicResponse listTopic(const Models::ListTopicRequest &request);

      /**
       * @summary ListWordGroup
       *
       * @param request ListWordGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWordGroupResponse
       */
      Models::ListWordGroupResponse listWordGroupWithOptions(const Models::ListWordGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListWordGroup
       *
       * @param request ListWordGroupRequest
       * @return ListWordGroupResponse
       */
      Models::ListWordGroupResponse listWordGroup(const Models::ListWordGroupRequest &request);

      /**
       * @summary ModelInputContentAsyncDetect
       *
       * @param tmpReq ModelInputContentAsyncDetectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelInputContentAsyncDetectResponse
       */
      Models::ModelInputContentAsyncDetectResponse modelInputContentAsyncDetectWithOptions(const Models::ModelInputContentAsyncDetectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ModelInputContentAsyncDetect
       *
       * @param request ModelInputContentAsyncDetectRequest
       * @return ModelInputContentAsyncDetectResponse
       */
      Models::ModelInputContentAsyncDetectResponse modelInputContentAsyncDetect(const Models::ModelInputContentAsyncDetectRequest &request);

      /**
       * @summary ModelInputContentSyncDetect
       *
       * @param tmpReq ModelInputContentSyncDetectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelInputContentSyncDetectResponse
       */
      Models::ModelInputContentSyncDetectResponse modelInputContentSyncDetectWithOptions(const Models::ModelInputContentSyncDetectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ModelInputContentSyncDetect
       *
       * @param request ModelInputContentSyncDetectRequest
       * @return ModelInputContentSyncDetectResponse
       */
      Models::ModelInputContentSyncDetectResponse modelInputContentSyncDetect(const Models::ModelInputContentSyncDetectRequest &request);

      /**
       * @summary ModelOutputContentAsyncDetect
       *
       * @param tmpReq ModelOutputContentAsyncDetectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelOutputContentAsyncDetectResponse
       */
      Models::ModelOutputContentAsyncDetectResponse modelOutputContentAsyncDetectWithOptions(const Models::ModelOutputContentAsyncDetectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ModelOutputContentAsyncDetect
       *
       * @param request ModelOutputContentAsyncDetectRequest
       * @return ModelOutputContentAsyncDetectResponse
       */
      Models::ModelOutputContentAsyncDetectResponse modelOutputContentAsyncDetect(const Models::ModelOutputContentAsyncDetectRequest &request);

      /**
       * @summary ModelOutputContentSyncDetect
       *
       * @param tmpReq ModelOutputContentSyncDetectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelOutputContentSyncDetectResponse
       */
      Models::ModelOutputContentSyncDetectResponse modelOutputContentSyncDetectWithOptions(const Models::ModelOutputContentSyncDetectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ModelOutputContentSyncDetect
       *
       * @param request ModelOutputContentSyncDetectRequest
       * @return ModelOutputContentSyncDetectResponse
       */
      Models::ModelOutputContentSyncDetectResponse modelOutputContentSyncDetect(const Models::ModelOutputContentSyncDetectRequest &request);

      /**
       * @summary 注册RAI账号
       *
       * @param request RegisterAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterAccountResponse
       */
      Models::RegisterAccountResponse registerAccountWithOptions(const Models::RegisterAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 注册RAI账号
       *
       * @param request RegisterAccountRequest
       * @return RegisterAccountResponse
       */
      Models::RegisterAccountResponse registerAccount(const Models::RegisterAccountRequest &request);

      /**
       * @summary UpdateModelInstance
       *
       * @param request UpdateModelInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelInstanceResponse
       */
      Models::UpdateModelInstanceResponse updateModelInstanceWithOptions(const Models::UpdateModelInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary UpdateModelInstance
       *
       * @param request UpdateModelInstanceRequest
       * @return UpdateModelInstanceResponse
       */
      Models::UpdateModelInstanceResponse updateModelInstance(const Models::UpdateModelInstanceRequest &request);

      /**
       * @summary UpdatePolicy
       *
       * @param tmpReq UpdatePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePolicyResponse
       */
      Models::UpdatePolicyResponse updatePolicyWithOptions(const Models::UpdatePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary UpdatePolicy
       *
       * @param request UpdatePolicyRequest
       * @return UpdatePolicyResponse
       */
      Models::UpdatePolicyResponse updatePolicy(const Models::UpdatePolicyRequest &request);

      /**
       * @summary UpdateTopic
       *
       * @param tmpReq UpdateTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTopicResponse
       */
      Models::UpdateTopicResponse updateTopicWithOptions(const Models::UpdateTopicRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary UpdateTopic
       *
       * @param request UpdateTopicRequest
       * @return UpdateTopicResponse
       */
      Models::UpdateTopicResponse updateTopic(const Models::UpdateTopicRequest &request);

      /**
       * @summary UpdateWordGroup
       *
       * @param tmpReq UpdateWordGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWordGroupResponse
       */
      Models::UpdateWordGroupResponse updateWordGroupWithOptions(const Models::UpdateWordGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary UpdateWordGroup
       *
       * @param request UpdateWordGroupRequest
       * @return UpdateWordGroupResponse
       */
      Models::UpdateWordGroupResponse updateWordGroup(const Models::UpdateWordGroupRequest &request);
  };
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
