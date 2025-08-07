// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_QUALITYCHECK20190115_HPP_
#define ALIBABACLOUD_QUALITYCHECK20190115_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Qualitycheck20190115Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Qualitycheck20190115.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AddBusinessCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBusinessCategoryResponse
       */
      Models::AddBusinessCategoryResponse addBusinessCategoryWithOptions(const Models::AddBusinessCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddBusinessCategoryRequest
       * @return AddBusinessCategoryResponse
       */
      Models::AddBusinessCategoryResponse addBusinessCategory(const Models::AddBusinessCategoryRequest &request);

      /**
       * @param request AddRuleCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRuleCategoryResponse
       */
      Models::AddRuleCategoryResponse addRuleCategoryWithOptions(const Models::AddRuleCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddRuleCategoryRequest
       * @return AddRuleCategoryResponse
       */
      Models::AddRuleCategoryResponse addRuleCategory(const Models::AddRuleCategoryRequest &request);

      /**
       * @summary V4创建规则
       *
       * @param request AddRuleV4Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRuleV4Response
       */
      Models::AddRuleV4Response addRuleV4WithOptions(const Models::AddRuleV4Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary V4创建规则
       *
       * @param request AddRuleV4Request
       * @return AddRuleV4Response
       */
      Models::AddRuleV4Response addRuleV4(const Models::AddRuleV4Request &request);

      /**
       * @summary 申领实时语音所需token
       *
       * @param request ApplyWsTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyWsTokenResponse
       */
      Models::ApplyWsTokenResponse applyWsTokenWithOptions(const Models::ApplyWsTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申领实时语音所需token
       *
       * @param request ApplyWsTokenRequest
       * @return ApplyWsTokenResponse
       */
      Models::ApplyWsTokenResponse applyWsToken(const Models::ApplyWsTokenRequest &request);

      /**
       * @param request AssignReviewerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignReviewerResponse
       */
      Models::AssignReviewerResponse assignReviewerWithOptions(const Models::AssignReviewerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AssignReviewerRequest
       * @return AssignReviewerResponse
       */
      Models::AssignReviewerResponse assignReviewer(const Models::AssignReviewerRequest &request);

      /**
       * @deprecated OpenAPI AssignReviewerBySessionGroup is deprecated
       *
       * @summary 会话组批量分配
       *
       * @param request AssignReviewerBySessionGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignReviewerBySessionGroupResponse
       */
      Models::AssignReviewerBySessionGroupResponse assignReviewerBySessionGroupWithOptions(const Models::AssignReviewerBySessionGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AssignReviewerBySessionGroup is deprecated
       *
       * @summary 会话组批量分配
       *
       * @param request AssignReviewerBySessionGroupRequest
       * @return AssignReviewerBySessionGroupResponse
       */
      Models::AssignReviewerBySessionGroupResponse assignReviewerBySessionGroup(const Models::AssignReviewerBySessionGroupRequest &request);

      /**
       * @summary 批量复核
       *
       * @param request BatchSubmitReviewInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSubmitReviewInfoResponse
       */
      Models::BatchSubmitReviewInfoResponse batchSubmitReviewInfoWithOptions(const Models::BatchSubmitReviewInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量复核
       *
       * @param request BatchSubmitReviewInfoRequest
       * @return BatchSubmitReviewInfoResponse
       */
      Models::BatchSubmitReviewInfoResponse batchSubmitReviewInfo(const Models::BatchSubmitReviewInfoRequest &request);

      /**
       * @summary 创建热词模型
       *
       * @param request CreateAsrVocabRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAsrVocabResponse
       */
      Models::CreateAsrVocabResponse createAsrVocabWithOptions(const Models::CreateAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建热词模型
       *
       * @param request CreateAsrVocabRequest
       * @return CreateAsrVocabResponse
       */
      Models::CreateAsrVocabResponse createAsrVocab(const Models::CreateAsrVocabRequest &request);

      /**
       * @summary 创建质检方案中的质检维度
       *
       * @param request CreateCheckTypeToSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCheckTypeToSchemeResponse
       */
      Models::CreateCheckTypeToSchemeResponse createCheckTypeToSchemeWithOptions(const Models::CreateCheckTypeToSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建质检方案中的质检维度
       *
       * @param request CreateCheckTypeToSchemeRequest
       * @return CreateCheckTypeToSchemeResponse
       */
      Models::CreateCheckTypeToSchemeResponse createCheckTypeToScheme(const Models::CreateCheckTypeToSchemeRequest &request);

      /**
       * @summary 创建标签挖掘任务
       *
       * @param request CreateMiningTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMiningTaskResponse
       */
      Models::CreateMiningTaskResponse createMiningTaskWithOptions(const Models::CreateMiningTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建标签挖掘任务
       *
       * @param request CreateMiningTaskRequest
       * @return CreateMiningTaskResponse
       */
      Models::CreateMiningTaskResponse createMiningTask(const Models::CreateMiningTaskRequest &request);

      /**
       * @summary 新增质检方案
       *
       * @param request CreateQualityCheckSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQualityCheckSchemeResponse
       */
      Models::CreateQualityCheckSchemeResponse createQualityCheckSchemeWithOptions(const Models::CreateQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增质检方案
       *
       * @param request CreateQualityCheckSchemeRequest
       * @return CreateQualityCheckSchemeResponse
       */
      Models::CreateQualityCheckSchemeResponse createQualityCheckScheme(const Models::CreateQualityCheckSchemeRequest &request);

      /**
       * @summary 新建质检任务
       *
       * @param request CreateSchemeTaskConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSchemeTaskConfigResponse
       */
      Models::CreateSchemeTaskConfigResponse createSchemeTaskConfigWithOptions(const Models::CreateSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建质检任务
       *
       * @param request CreateSchemeTaskConfigRequest
       * @return CreateSchemeTaskConfigResponse
       */
      Models::CreateSchemeTaskConfigResponse createSchemeTaskConfig(const Models::CreateSchemeTaskConfigRequest &request);

      /**
       * @deprecated OpenAPI CreateSkillGroupConfig is deprecated
       *
       * @param request CreateSkillGroupConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillGroupConfigResponse
       */
      Models::CreateSkillGroupConfigResponse createSkillGroupConfigWithOptions(const Models::CreateSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateSkillGroupConfig is deprecated
       *
       * @param request CreateSkillGroupConfigRequest
       * @return CreateSkillGroupConfigResponse
       */
      Models::CreateSkillGroupConfigResponse createSkillGroupConfig(const Models::CreateSkillGroupConfigRequest &request);

      /**
       * @param request CreateTaskAssignRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTaskAssignRuleResponse
       */
      Models::CreateTaskAssignRuleResponse createTaskAssignRuleWithOptions(const Models::CreateTaskAssignRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateTaskAssignRuleRequest
       * @return CreateTaskAssignRuleResponse
       */
      Models::CreateTaskAssignRuleResponse createTaskAssignRule(const Models::CreateTaskAssignRuleRequest &request);

      /**
       * @param request CreateWarningConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWarningConfigResponse
       */
      Models::CreateWarningConfigResponse createWarningConfigWithOptions(const Models::CreateWarningConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateWarningConfigRequest
       * @return CreateWarningConfigResponse
       */
      Models::CreateWarningConfigResponse createWarningConfig(const Models::CreateWarningConfigRequest &request);

      /**
       * @summary  预警策略-新增
       *
       * @param request CreateWarningStrategyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWarningStrategyConfigResponse
       */
      Models::CreateWarningStrategyConfigResponse createWarningStrategyConfigWithOptions(const Models::CreateWarningStrategyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary  预警策略-新增
       *
       * @param request CreateWarningStrategyConfigRequest
       * @return CreateWarningStrategyConfigResponse
       */
      Models::CreateWarningStrategyConfigResponse createWarningStrategyConfig(const Models::CreateWarningStrategyConfigRequest &request);

      /**
       * @param request DelRuleCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DelRuleCategoryResponse
       */
      Models::DelRuleCategoryResponse delRuleCategoryWithOptions(const Models::DelRuleCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DelRuleCategoryRequest
       * @return DelRuleCategoryResponse
       */
      Models::DelRuleCategoryResponse delRuleCategory(const Models::DelRuleCategoryRequest &request);

      /**
       * @param request DeleteAsrVocabRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAsrVocabResponse
       */
      Models::DeleteAsrVocabResponse deleteAsrVocabWithOptions(const Models::DeleteAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteAsrVocabRequest
       * @return DeleteAsrVocabResponse
       */
      Models::DeleteAsrVocabResponse deleteAsrVocab(const Models::DeleteAsrVocabRequest &request);

      /**
       * @param request DeleteBusinessCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBusinessCategoryResponse
       */
      Models::DeleteBusinessCategoryResponse deleteBusinessCategoryWithOptions(const Models::DeleteBusinessCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteBusinessCategoryRequest
       * @return DeleteBusinessCategoryResponse
       */
      Models::DeleteBusinessCategoryResponse deleteBusinessCategory(const Models::DeleteBusinessCategoryRequest &request);

      /**
       * @summary 删除质检唯独
       *
       * @param request DeleteCheckTypeToSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCheckTypeToSchemeResponse
       */
      Models::DeleteCheckTypeToSchemeResponse deleteCheckTypeToSchemeWithOptions(const Models::DeleteCheckTypeToSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除质检唯独
       *
       * @param request DeleteCheckTypeToSchemeRequest
       * @return DeleteCheckTypeToSchemeResponse
       */
      Models::DeleteCheckTypeToSchemeResponse deleteCheckTypeToScheme(const Models::DeleteCheckTypeToSchemeRequest &request);

      /**
       * @param request DeleteCustomizationConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomizationConfigResponse
       */
      Models::DeleteCustomizationConfigResponse deleteCustomizationConfigWithOptions(const Models::DeleteCustomizationConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteCustomizationConfigRequest
       * @return DeleteCustomizationConfigResponse
       */
      Models::DeleteCustomizationConfigResponse deleteCustomizationConfig(const Models::DeleteCustomizationConfigRequest &request);

      /**
       * @deprecated OpenAPI DeleteDataSet is deprecated
       *
       * @param request DeleteDataSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSetResponse
       */
      Models::DeleteDataSetResponse deleteDataSetWithOptions(const Models::DeleteDataSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteDataSet is deprecated
       *
       * @param request DeleteDataSetRequest
       * @return DeleteDataSetResponse
       */
      Models::DeleteDataSetResponse deleteDataSet(const Models::DeleteDataSetRequest &request);

      /**
       * @param request DeletePrecisionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrecisionTaskResponse
       */
      Models::DeletePrecisionTaskResponse deletePrecisionTaskWithOptions(const Models::DeletePrecisionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeletePrecisionTaskRequest
       * @return DeletePrecisionTaskResponse
       */
      Models::DeletePrecisionTaskResponse deletePrecisionTask(const Models::DeletePrecisionTaskRequest &request);

      /**
       * @summary 删除质检方案
       *
       * @param request DeleteQualityCheckSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQualityCheckSchemeResponse
       */
      Models::DeleteQualityCheckSchemeResponse deleteQualityCheckSchemeWithOptions(const Models::DeleteQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除质检方案
       *
       * @param request DeleteQualityCheckSchemeRequest
       * @return DeleteQualityCheckSchemeResponse
       */
      Models::DeleteQualityCheckSchemeResponse deleteQualityCheckScheme(const Models::DeleteQualityCheckSchemeRequest &request);

      /**
       * @deprecated OpenAPI DeleteRule is deprecated, please use Qualitycheck::2019-01-15::DeleteRuleV4 instead.
       *
       * @summary 删除规则
       *
       * @param request DeleteRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRuleResponse
       */
      Models::DeleteRuleResponse deleteRuleWithOptions(const Models::DeleteRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteRule is deprecated, please use Qualitycheck::2019-01-15::DeleteRuleV4 instead.
       *
       * @summary 删除规则
       *
       * @param request DeleteRuleRequest
       * @return DeleteRuleResponse
       */
      Models::DeleteRuleResponse deleteRule(const Models::DeleteRuleRequest &request);

      /**
       * @summary V4删除规则
       *
       * @param request DeleteRuleV4Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRuleV4Response
       */
      Models::DeleteRuleV4Response deleteRuleV4WithOptions(const Models::DeleteRuleV4Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary V4删除规则
       *
       * @param request DeleteRuleV4Request
       * @return DeleteRuleV4Response
       */
      Models::DeleteRuleV4Response deleteRuleV4(const Models::DeleteRuleV4Request &request);

      /**
       * @summary 删除质检任务
       *
       * @param request DeleteSchemeTaskConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSchemeTaskConfigResponse
       */
      Models::DeleteSchemeTaskConfigResponse deleteSchemeTaskConfigWithOptions(const Models::DeleteSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除质检任务
       *
       * @param request DeleteSchemeTaskConfigRequest
       * @return DeleteSchemeTaskConfigResponse
       */
      Models::DeleteSchemeTaskConfigResponse deleteSchemeTaskConfig(const Models::DeleteSchemeTaskConfigRequest &request);

      /**
       * @deprecated OpenAPI DeleteSkillGroupConfig is deprecated
       *
       * @param request DeleteSkillGroupConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillGroupConfigResponse
       */
      Models::DeleteSkillGroupConfigResponse deleteSkillGroupConfigWithOptions(const Models::DeleteSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteSkillGroupConfig is deprecated
       *
       * @param request DeleteSkillGroupConfigRequest
       * @return DeleteSkillGroupConfigResponse
       */
      Models::DeleteSkillGroupConfigResponse deleteSkillGroupConfig(const Models::DeleteSkillGroupConfigRequest &request);

      /**
       * @param request DeleteTaskAssignRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTaskAssignRuleResponse
       */
      Models::DeleteTaskAssignRuleResponse deleteTaskAssignRuleWithOptions(const Models::DeleteTaskAssignRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteTaskAssignRuleRequest
       * @return DeleteTaskAssignRuleResponse
       */
      Models::DeleteTaskAssignRuleResponse deleteTaskAssignRule(const Models::DeleteTaskAssignRuleRequest &request);

      /**
       * @param request DeleteWarningConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWarningConfigResponse
       */
      Models::DeleteWarningConfigResponse deleteWarningConfigWithOptions(const Models::DeleteWarningConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteWarningConfigRequest
       * @return DeleteWarningConfigResponse
       */
      Models::DeleteWarningConfigResponse deleteWarningConfig(const Models::DeleteWarningConfigRequest &request);

      /**
       * @summary  预警策略-删除
       *
       * @param request DeleteWarningStrategyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWarningStrategyConfigResponse
       */
      Models::DeleteWarningStrategyConfigResponse deleteWarningStrategyConfigWithOptions(const Models::DeleteWarningStrategyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary  预警策略-删除
       *
       * @param request DeleteWarningStrategyConfigRequest
       * @return DeleteWarningStrategyConfigResponse
       */
      Models::DeleteWarningStrategyConfigResponse deleteWarningStrategyConfig(const Models::DeleteWarningStrategyConfigRequest &request);

      /**
       * @param request GetAsrVocabRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsrVocabResponse
       */
      Models::GetAsrVocabResponse getAsrVocabWithOptions(const Models::GetAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAsrVocabRequest
       * @return GetAsrVocabResponse
       */
      Models::GetAsrVocabResponse getAsrVocab(const Models::GetAsrVocabRequest &request);

      /**
       * @param request GetBusinessCategoryListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBusinessCategoryListResponse
       */
      Models::GetBusinessCategoryListResponse getBusinessCategoryListWithOptions(const Models::GetBusinessCategoryListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetBusinessCategoryListRequest
       * @return GetBusinessCategoryListResponse
       */
      Models::GetBusinessCategoryListResponse getBusinessCategoryList(const Models::GetBusinessCategoryListRequest &request);

      /**
       * @summary 获取语音模型列表
       *
       * @param request GetCustomizationConfigListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomizationConfigListResponse
       */
      Models::GetCustomizationConfigListResponse getCustomizationConfigListWithOptions(const Models::GetCustomizationConfigListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取语音模型列表
       *
       * @param request GetCustomizationConfigListRequest
       * @return GetCustomizationConfigListResponse
       */
      Models::GetCustomizationConfigListResponse getCustomizationConfigList(const Models::GetCustomizationConfigListRequest &request);

      /**
       * @summary 获取标签挖掘任务结果
       *
       * @param request GetMiningTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMiningTaskResultResponse
       */
      Models::GetMiningTaskResultResponse getMiningTaskResultWithOptions(const Models::GetMiningTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取标签挖掘任务结果
       *
       * @param request GetMiningTaskResultRequest
       * @return GetMiningTaskResultResponse
       */
      Models::GetMiningTaskResultResponse getMiningTaskResult(const Models::GetMiningTaskResultRequest &request);

      /**
       * @param request GetNextResultToVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNextResultToVerifyResponse
       */
      Models::GetNextResultToVerifyResponse getNextResultToVerifyWithOptions(const Models::GetNextResultToVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetNextResultToVerifyRequest
       * @return GetNextResultToVerifyResponse
       */
      Models::GetNextResultToVerifyResponse getNextResultToVerify(const Models::GetNextResultToVerifyRequest &request);

      /**
       * @param request GetPrecisionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrecisionTaskResponse
       */
      Models::GetPrecisionTaskResponse getPrecisionTaskWithOptions(const Models::GetPrecisionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetPrecisionTaskRequest
       * @return GetPrecisionTaskResponse
       */
      Models::GetPrecisionTaskResponse getPrecisionTask(const Models::GetPrecisionTaskRequest &request);

      /**
       * @summary 获取质检方案
       *
       * @param request GetQualityCheckSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityCheckSchemeResponse
       */
      Models::GetQualityCheckSchemeResponse getQualityCheckSchemeWithOptions(const Models::GetQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取质检方案
       *
       * @param request GetQualityCheckSchemeRequest
       * @return GetQualityCheckSchemeResponse
       */
      Models::GetQualityCheckSchemeResponse getQualityCheckScheme(const Models::GetQualityCheckSchemeRequest &request);

      /**
       * @param request GetResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResultResponse
       */
      Models::GetResultResponse getResultWithOptions(const Models::GetResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetResultRequest
       * @return GetResultResponse
       */
      Models::GetResultResponse getResult(const Models::GetResultRequest &request);

      /**
       * @param request GetResultToReviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResultToReviewResponse
       */
      Models::GetResultToReviewResponse getResultToReviewWithOptions(const Models::GetResultToReviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetResultToReviewRequest
       * @return GetResultToReviewResponse
       */
      Models::GetResultToReviewResponse getResultToReview(const Models::GetResultToReviewRequest &request);

      /**
       * @deprecated OpenAPI GetRule is deprecated, please use Qualitycheck::2019-01-15::GetRuleV4 instead.
       *
       * @param request GetRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRuleResponse
       */
      Models::GetRuleResponse getRuleWithOptions(const Models::GetRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetRule is deprecated, please use Qualitycheck::2019-01-15::GetRuleV4 instead.
       *
       * @param request GetRuleRequest
       * @return GetRuleResponse
       */
      Models::GetRuleResponse getRule(const Models::GetRuleRequest &request);

      /**
       * @deprecated OpenAPI GetRuleById is deprecated, please use Qualitycheck::2019-01-15::GetRuleV4 instead.
       *
       * @summary 获取规则
       *
       * @param request GetRuleByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRuleByIdResponse
       */
      Models::GetRuleByIdResponse getRuleByIdWithOptions(const Models::GetRuleByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetRuleById is deprecated, please use Qualitycheck::2019-01-15::GetRuleV4 instead.
       *
       * @summary 获取规则
       *
       * @param request GetRuleByIdRequest
       * @return GetRuleByIdResponse
       */
      Models::GetRuleByIdResponse getRuleById(const Models::GetRuleByIdRequest &request);

      /**
       * @param request GetRuleCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRuleCategoryResponse
       */
      Models::GetRuleCategoryResponse getRuleCategoryWithOptions(const Models::GetRuleCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetRuleCategoryRequest
       * @return GetRuleCategoryResponse
       */
      Models::GetRuleCategoryResponse getRuleCategory(const Models::GetRuleCategoryRequest &request);

      /**
       * @deprecated OpenAPI GetRuleDetail is deprecated, please use Qualitycheck::2019-01-15::GetRuleV4 instead.
       *
       * @param request GetRuleDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRuleDetailResponse
       */
      Models::GetRuleDetailResponse getRuleDetailWithOptions(const Models::GetRuleDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetRuleDetail is deprecated, please use Qualitycheck::2019-01-15::GetRuleV4 instead.
       *
       * @param request GetRuleDetailRequest
       * @return GetRuleDetailResponse
       */
      Models::GetRuleDetailResponse getRuleDetail(const Models::GetRuleDetailRequest &request);

      /**
       * @summary V4获取规则
       *
       * @param request GetRuleV4Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRuleV4Response
       */
      Models::GetRuleV4Response getRuleV4WithOptions(const Models::GetRuleV4Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary V4获取规则
       *
       * @param request GetRuleV4Request
       * @return GetRuleV4Response
       */
      Models::GetRuleV4Response getRuleV4(const Models::GetRuleV4Request &request);

      /**
       * @summary 获得规则列表
       *
       * @param request GetRulesCountListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRulesCountListResponse
       */
      Models::GetRulesCountListResponse getRulesCountListWithOptions(const Models::GetRulesCountListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得规则列表
       *
       * @param request GetRulesCountListRequest
       * @return GetRulesCountListResponse
       */
      Models::GetRulesCountListResponse getRulesCountList(const Models::GetRulesCountListRequest &request);

      /**
       * @summary 获取质检任务配置详情
       *
       * @param request GetSchemeTaskConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSchemeTaskConfigResponse
       */
      Models::GetSchemeTaskConfigResponse getSchemeTaskConfigWithOptions(const Models::GetSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取质检任务配置详情
       *
       * @param request GetSchemeTaskConfigRequest
       * @return GetSchemeTaskConfigResponse
       */
      Models::GetSchemeTaskConfigResponse getSchemeTaskConfig(const Models::GetSchemeTaskConfigRequest &request);

      /**
       * @deprecated OpenAPI GetScoreInfo is deprecated
       *
       * @param request GetScoreInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScoreInfoResponse
       */
      Models::GetScoreInfoResponse getScoreInfoWithOptions(const Models::GetScoreInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetScoreInfo is deprecated
       *
       * @param request GetScoreInfoRequest
       * @return GetScoreInfoResponse
       */
      Models::GetScoreInfoResponse getScoreInfo(const Models::GetScoreInfoRequest &request);

      /**
       * @deprecated OpenAPI GetSkillGroupConfig is deprecated
       *
       * @param request GetSkillGroupConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillGroupConfigResponse
       */
      Models::GetSkillGroupConfigResponse getSkillGroupConfigWithOptions(const Models::GetSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetSkillGroupConfig is deprecated
       *
       * @param request GetSkillGroupConfigRequest
       * @return GetSkillGroupConfigResponse
       */
      Models::GetSkillGroupConfigResponse getSkillGroupConfig(const Models::GetSkillGroupConfigRequest &request);

      /**
       * @deprecated OpenAPI GetSyncResult is deprecated, please use Qualitycheck::2019-01-15::GetResult instead.
       *
       * @param request GetSyncResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSyncResultResponse
       */
      Models::GetSyncResultResponse getSyncResultWithOptions(const Models::GetSyncResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetSyncResult is deprecated, please use Qualitycheck::2019-01-15::GetResult instead.
       *
       * @param request GetSyncResultRequest
       * @return GetSyncResultResponse
       */
      Models::GetSyncResultResponse getSyncResult(const Models::GetSyncResultRequest &request);

      /**
       * @summary 预警策略-详情
       *
       * @param request GetWarningStrategyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWarningStrategyConfigResponse
       */
      Models::GetWarningStrategyConfigResponse getWarningStrategyConfigWithOptions(const Models::GetWarningStrategyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预警策略-详情
       *
       * @param request GetWarningStrategyConfigRequest
       * @return GetWarningStrategyConfigResponse
       */
      Models::GetWarningStrategyConfigResponse getWarningStrategyConfig(const Models::GetWarningStrategyConfigRequest &request);

      /**
       * @param request HandleComplaintRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HandleComplaintResponse
       */
      Models::HandleComplaintResponse handleComplaintWithOptions(const Models::HandleComplaintRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request HandleComplaintRequest
       * @return HandleComplaintResponse
       */
      Models::HandleComplaintResponse handleComplaint(const Models::HandleComplaintRequest &request);

      /**
       * @deprecated OpenAPI InvalidRule is deprecated, please use Qualitycheck::2019-01-15::DeleteRuleV4 instead.
       *
       * @param request InvalidRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvalidRuleResponse
       */
      Models::InvalidRuleResponse invalidRuleWithOptions(const Models::InvalidRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI InvalidRule is deprecated, please use Qualitycheck::2019-01-15::DeleteRuleV4 instead.
       *
       * @param request InvalidRuleRequest
       * @return InvalidRuleResponse
       */
      Models::InvalidRuleResponse invalidRule(const Models::InvalidRuleRequest &request);

      /**
       * @summary 获取热词模型列表
       *
       * @param request ListAsrVocabRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAsrVocabResponse
       */
      Models::ListAsrVocabResponse listAsrVocabWithOptions(const Models::ListAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取热词模型列表
       *
       * @param request ListAsrVocabRequest
       * @return ListAsrVocabResponse
       */
      Models::ListAsrVocabResponse listAsrVocab(const Models::ListAsrVocabRequest &request);

      /**
       * @deprecated OpenAPI ListDataSet is deprecated
       *
       * @summary 获取数据集列表
       *
       * @param request ListDataSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSetResponse
       */
      Models::ListDataSetResponse listDataSetWithOptions(const Models::ListDataSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListDataSet is deprecated
       *
       * @summary 获取数据集列表
       *
       * @param request ListDataSetRequest
       * @return ListDataSetResponse
       */
      Models::ListDataSetResponse listDataSet(const Models::ListDataSetRequest &request);

      /**
       * @param request ListPrecisionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrecisionTaskResponse
       */
      Models::ListPrecisionTaskResponse listPrecisionTaskWithOptions(const Models::ListPrecisionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListPrecisionTaskRequest
       * @return ListPrecisionTaskResponse
       */
      Models::ListPrecisionTaskResponse listPrecisionTask(const Models::ListPrecisionTaskRequest &request);

      /**
       * @summary 质检方案列表
       *
       * @param request ListQualityCheckSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQualityCheckSchemeResponse
       */
      Models::ListQualityCheckSchemeResponse listQualityCheckSchemeWithOptions(const Models::ListQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 质检方案列表
       *
       * @param request ListQualityCheckSchemeRequest
       * @return ListQualityCheckSchemeResponse
       */
      Models::ListQualityCheckSchemeResponse listQualityCheckScheme(const Models::ListQualityCheckSchemeRequest &request);

      /**
       * @deprecated OpenAPI ListRules is deprecated, please use Qualitycheck::2019-01-15::ListRulesV4 instead.
       *
       * @param request ListRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRulesResponse
       */
      Models::ListRulesResponse listRulesWithOptions(const Models::ListRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListRules is deprecated, please use Qualitycheck::2019-01-15::ListRulesV4 instead.
       *
       * @param request ListRulesRequest
       * @return ListRulesResponse
       */
      Models::ListRulesResponse listRules(const Models::ListRulesRequest &request);

      /**
       * @summary V4获得规则列表
       *
       * @param request ListRulesV4Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRulesV4Response
       */
      Models::ListRulesV4Response listRulesV4WithOptions(const Models::ListRulesV4Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary V4获得规则列表
       *
       * @param request ListRulesV4Request
       * @return ListRulesV4Response
       */
      Models::ListRulesV4Response listRulesV4(const Models::ListRulesV4Request &request);

      /**
       * @summary 获取质检任务列表
       *
       * @param request ListSchemeTaskConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSchemeTaskConfigResponse
       */
      Models::ListSchemeTaskConfigResponse listSchemeTaskConfigWithOptions(const Models::ListSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取质检任务列表
       *
       * @param request ListSchemeTaskConfigRequest
       * @return ListSchemeTaskConfigResponse
       */
      Models::ListSchemeTaskConfigResponse listSchemeTaskConfig(const Models::ListSchemeTaskConfigRequest &request);

      /**
       * @deprecated OpenAPI ListSessionGroup is deprecated
       *
       * @summary 获取会话组列表
       *
       * @param request ListSessionGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSessionGroupResponse
       */
      Models::ListSessionGroupResponse listSessionGroupWithOptions(const Models::ListSessionGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListSessionGroup is deprecated
       *
       * @summary 获取会话组列表
       *
       * @param request ListSessionGroupRequest
       * @return ListSessionGroupResponse
       */
      Models::ListSessionGroupResponse listSessionGroup(const Models::ListSessionGroupRequest &request);

      /**
       * @deprecated OpenAPI ListSkillGroupConfig is deprecated
       *
       * @param request ListSkillGroupConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillGroupConfigResponse
       */
      Models::ListSkillGroupConfigResponse listSkillGroupConfigWithOptions(const Models::ListSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListSkillGroupConfig is deprecated
       *
       * @param request ListSkillGroupConfigRequest
       * @return ListSkillGroupConfigResponse
       */
      Models::ListSkillGroupConfigResponse listSkillGroupConfig(const Models::ListSkillGroupConfigRequest &request);

      /**
       * @param request ListTaskAssignRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskAssignRulesResponse
       */
      Models::ListTaskAssignRulesResponse listTaskAssignRulesWithOptions(const Models::ListTaskAssignRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListTaskAssignRulesRequest
       * @return ListTaskAssignRulesResponse
       */
      Models::ListTaskAssignRulesResponse listTaskAssignRules(const Models::ListTaskAssignRulesRequest &request);

      /**
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @param request ListWarningConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWarningConfigResponse
       */
      Models::ListWarningConfigResponse listWarningConfigWithOptions(const Models::ListWarningConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListWarningConfigRequest
       * @return ListWarningConfigResponse
       */
      Models::ListWarningConfigResponse listWarningConfig(const Models::ListWarningConfigRequest &request);

      /**
       * @summary  预警策略-列表
       *
       * @param request ListWarningStrategyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWarningStrategyConfigResponse
       */
      Models::ListWarningStrategyConfigResponse listWarningStrategyConfigWithOptions(const Models::ListWarningStrategyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary  预警策略-列表
       *
       * @param request ListWarningStrategyConfigRequest
       * @return ListWarningStrategyConfigResponse
       */
      Models::ListWarningStrategyConfigResponse listWarningStrategyConfig(const Models::ListWarningStrategyConfigRequest &request);

      /**
       * @summary 批量回收
       *
       * @param request RevertAssignedSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevertAssignedSessionResponse
       */
      Models::RevertAssignedSessionResponse revertAssignedSessionWithOptions(const Models::RevertAssignedSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量回收
       *
       * @param request RevertAssignedSessionRequest
       * @return RevertAssignedSessionResponse
       */
      Models::RevertAssignedSessionResponse revertAssignedSession(const Models::RevertAssignedSessionRequest &request);

      /**
       * @deprecated OpenAPI RevertAssignedSessionGroup is deprecated
       *
       * @summary 会话组批量回收
       *
       * @param request RevertAssignedSessionGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevertAssignedSessionGroupResponse
       */
      Models::RevertAssignedSessionGroupResponse revertAssignedSessionGroupWithOptions(const Models::RevertAssignedSessionGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI RevertAssignedSessionGroup is deprecated
       *
       * @summary 会话组批量回收
       *
       * @param request RevertAssignedSessionGroupRequest
       * @return RevertAssignedSessionGroupResponse
       */
      Models::RevertAssignedSessionGroupResponse revertAssignedSessionGroup(const Models::RevertAssignedSessionGroupRequest &request);

      /**
       * @deprecated OpenAPI SaveConfigDataSet is deprecated
       *
       * @param request SaveConfigDataSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveConfigDataSetResponse
       */
      Models::SaveConfigDataSetResponse saveConfigDataSetWithOptions(const Models::SaveConfigDataSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI SaveConfigDataSet is deprecated
       *
       * @param request SaveConfigDataSetRequest
       * @return SaveConfigDataSetResponse
       */
      Models::SaveConfigDataSetResponse saveConfigDataSet(const Models::SaveConfigDataSetRequest &request);

      /**
       * @param request SubmitComplaintRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitComplaintResponse
       */
      Models::SubmitComplaintResponse submitComplaintWithOptions(const Models::SubmitComplaintRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SubmitComplaintRequest
       * @return SubmitComplaintResponse
       */
      Models::SubmitComplaintResponse submitComplaint(const Models::SubmitComplaintRequest &request);

      /**
       * @param request SubmitPrecisionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitPrecisionTaskResponse
       */
      Models::SubmitPrecisionTaskResponse submitPrecisionTaskWithOptions(const Models::SubmitPrecisionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SubmitPrecisionTaskRequest
       * @return SubmitPrecisionTaskResponse
       */
      Models::SubmitPrecisionTaskResponse submitPrecisionTask(const Models::SubmitPrecisionTaskRequest &request);

      /**
       * @param request SubmitQualityCheckTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitQualityCheckTaskResponse
       */
      Models::SubmitQualityCheckTaskResponse submitQualityCheckTaskWithOptions(const Models::SubmitQualityCheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SubmitQualityCheckTaskRequest
       * @return SubmitQualityCheckTaskResponse
       */
      Models::SubmitQualityCheckTaskResponse submitQualityCheckTask(const Models::SubmitQualityCheckTaskRequest &request);

      /**
       * @param request SubmitReviewInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitReviewInfoResponse
       */
      Models::SubmitReviewInfoResponse submitReviewInfoWithOptions(const Models::SubmitReviewInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SubmitReviewInfoRequest
       * @return SubmitReviewInfoResponse
       */
      Models::SubmitReviewInfoResponse submitReviewInfo(const Models::SubmitReviewInfoRequest &request);

      /**
       * @param request SyncQualityCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncQualityCheckResponse
       */
      Models::SyncQualityCheckResponse syncQualityCheckWithOptions(const Models::SyncQualityCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SyncQualityCheckRequest
       * @return SyncQualityCheckResponse
       */
      Models::SyncQualityCheckResponse syncQualityCheck(const Models::SyncQualityCheckRequest &request);

      /**
       * @summary 测试规则
       *
       * @param request TestRuleV4Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return TestRuleV4Response
       */
      Models::TestRuleV4Response testRuleV4WithOptions(const Models::TestRuleV4Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 测试规则
       *
       * @param request TestRuleV4Request
       * @return TestRuleV4Response
       */
      Models::TestRuleV4Response testRuleV4(const Models::TestRuleV4Request &request);

      /**
       * @param request UpdateAsrVocabRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAsrVocabResponse
       */
      Models::UpdateAsrVocabResponse updateAsrVocabWithOptions(const Models::UpdateAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateAsrVocabRequest
       * @return UpdateAsrVocabResponse
       */
      Models::UpdateAsrVocabResponse updateAsrVocab(const Models::UpdateAsrVocabRequest &request);

      /**
       * @summary 更新质检方案中的质检维度
       *
       * @param request UpdateCheckTypeToSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCheckTypeToSchemeResponse
       */
      Models::UpdateCheckTypeToSchemeResponse updateCheckTypeToSchemeWithOptions(const Models::UpdateCheckTypeToSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新质检方案中的质检维度
       *
       * @param request UpdateCheckTypeToSchemeRequest
       * @return UpdateCheckTypeToSchemeResponse
       */
      Models::UpdateCheckTypeToSchemeResponse updateCheckTypeToScheme(const Models::UpdateCheckTypeToSchemeRequest &request);

      /**
       * @summary 更新会话随录数据
       *
       * @param request UpdateQualityCheckDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQualityCheckDataResponse
       */
      Models::UpdateQualityCheckDataResponse updateQualityCheckDataWithOptions(const Models::UpdateQualityCheckDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新会话随录数据
       *
       * @param request UpdateQualityCheckDataRequest
       * @return UpdateQualityCheckDataResponse
       */
      Models::UpdateQualityCheckDataResponse updateQualityCheckData(const Models::UpdateQualityCheckDataRequest &request);

      /**
       * @summary 更新质检方案
       *
       * @param request UpdateQualityCheckSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQualityCheckSchemeResponse
       */
      Models::UpdateQualityCheckSchemeResponse updateQualityCheckSchemeWithOptions(const Models::UpdateQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新质检方案
       *
       * @param request UpdateQualityCheckSchemeRequest
       * @return UpdateQualityCheckSchemeResponse
       */
      Models::UpdateQualityCheckSchemeResponse updateQualityCheckScheme(const Models::UpdateQualityCheckSchemeRequest &request);

      /**
       * @deprecated OpenAPI UpdateRule is deprecated, please use Qualitycheck::2019-01-15::UpdateRuleV4 instead.
       *
       * @param request UpdateRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRuleResponse
       */
      Models::UpdateRuleResponse updateRuleWithOptions(const Models::UpdateRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdateRule is deprecated, please use Qualitycheck::2019-01-15::UpdateRuleV4 instead.
       *
       * @param request UpdateRuleRequest
       * @return UpdateRuleResponse
       */
      Models::UpdateRuleResponse updateRule(const Models::UpdateRuleRequest &request);

      /**
       * @deprecated OpenAPI UpdateRuleById is deprecated, please use Qualitycheck::2019-01-15::UpdateRuleV4 instead.
       *
       * @summary 更新规则
       *
       * @param request UpdateRuleByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRuleByIdResponse
       */
      Models::UpdateRuleByIdResponse updateRuleByIdWithOptions(const Models::UpdateRuleByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdateRuleById is deprecated, please use Qualitycheck::2019-01-15::UpdateRuleV4 instead.
       *
       * @summary 更新规则
       *
       * @param request UpdateRuleByIdRequest
       * @return UpdateRuleByIdResponse
       */
      Models::UpdateRuleByIdResponse updateRuleById(const Models::UpdateRuleByIdRequest &request);

      /**
       * @summary 更新质检方案的规则
       *
       * @param request UpdateRuleToSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRuleToSchemeResponse
       */
      Models::UpdateRuleToSchemeResponse updateRuleToSchemeWithOptions(const Models::UpdateRuleToSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新质检方案的规则
       *
       * @param request UpdateRuleToSchemeRequest
       * @return UpdateRuleToSchemeResponse
       */
      Models::UpdateRuleToSchemeResponse updateRuleToScheme(const Models::UpdateRuleToSchemeRequest &request);

      /**
       * @summary V4更新规则
       *
       * @param request UpdateRuleV4Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRuleV4Response
       */
      Models::UpdateRuleV4Response updateRuleV4WithOptions(const Models::UpdateRuleV4Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary V4更新规则
       *
       * @param request UpdateRuleV4Request
       * @return UpdateRuleV4Response
       */
      Models::UpdateRuleV4Response updateRuleV4(const Models::UpdateRuleV4Request &request);

      /**
       * @summary 更新质检任务
       *
       * @param request UpdateSchemeTaskConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSchemeTaskConfigResponse
       */
      Models::UpdateSchemeTaskConfigResponse updateSchemeTaskConfigWithOptions(const Models::UpdateSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新质检任务
       *
       * @param request UpdateSchemeTaskConfigRequest
       * @return UpdateSchemeTaskConfigResponse
       */
      Models::UpdateSchemeTaskConfigResponse updateSchemeTaskConfig(const Models::UpdateSchemeTaskConfigRequest &request);

      /**
       * @deprecated OpenAPI UpdateSkillGroupConfig is deprecated
       *
       * @param request UpdateSkillGroupConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillGroupConfigResponse
       */
      Models::UpdateSkillGroupConfigResponse updateSkillGroupConfigWithOptions(const Models::UpdateSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdateSkillGroupConfig is deprecated
       *
       * @param request UpdateSkillGroupConfigRequest
       * @return UpdateSkillGroupConfigResponse
       */
      Models::UpdateSkillGroupConfigResponse updateSkillGroupConfig(const Models::UpdateSkillGroupConfigRequest &request);

      /**
       * @param request UpdateSyncQualityCheckDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSyncQualityCheckDataResponse
       */
      Models::UpdateSyncQualityCheckDataResponse updateSyncQualityCheckDataWithOptions(const Models::UpdateSyncQualityCheckDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateSyncQualityCheckDataRequest
       * @return UpdateSyncQualityCheckDataResponse
       */
      Models::UpdateSyncQualityCheckDataResponse updateSyncQualityCheckData(const Models::UpdateSyncQualityCheckDataRequest &request);

      /**
       * @param request UpdateTaskAssignRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskAssignRuleResponse
       */
      Models::UpdateTaskAssignRuleResponse updateTaskAssignRuleWithOptions(const Models::UpdateTaskAssignRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateTaskAssignRuleRequest
       * @return UpdateTaskAssignRuleResponse
       */
      Models::UpdateTaskAssignRuleResponse updateTaskAssignRule(const Models::UpdateTaskAssignRuleRequest &request);

      /**
       * @param request UpdateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const Models::UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const Models::UpdateUserRequest &request);

      /**
       * @param request UpdateWarningConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWarningConfigResponse
       */
      Models::UpdateWarningConfigResponse updateWarningConfigWithOptions(const Models::UpdateWarningConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateWarningConfigRequest
       * @return UpdateWarningConfigResponse
       */
      Models::UpdateWarningConfigResponse updateWarningConfig(const Models::UpdateWarningConfigRequest &request);

      /**
       * @summary  预警策略-更新
       *
       * @param request UpdateWarningStrategyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWarningStrategyConfigResponse
       */
      Models::UpdateWarningStrategyConfigResponse updateWarningStrategyConfigWithOptions(const Models::UpdateWarningStrategyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary  预警策略-更新
       *
       * @param request UpdateWarningStrategyConfigRequest
       * @return UpdateWarningStrategyConfigResponse
       */
      Models::UpdateWarningStrategyConfigResponse updateWarningStrategyConfig(const Models::UpdateWarningStrategyConfigRequest &request);

      /**
       * @param request UploadAudioDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadAudioDataResponse
       */
      Models::UploadAudioDataResponse uploadAudioDataWithOptions(const Models::UploadAudioDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UploadAudioDataRequest
       * @return UploadAudioDataResponse
       */
      Models::UploadAudioDataResponse uploadAudioData(const Models::UploadAudioDataRequest &request);

      /**
       * @deprecated OpenAPI UploadData is deprecated, please use Qualitycheck::2019-01-15::UploadDataV4 instead.
       *
       * @summary 推荐使用UploadDataV4接口,支持更长的JsonStr,但仅支持POST方法.
       *
       * @param request UploadDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadDataResponse
       */
      Models::UploadDataResponse uploadDataWithOptions(const Models::UploadDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UploadData is deprecated, please use Qualitycheck::2019-01-15::UploadDataV4 instead.
       *
       * @summary 推荐使用UploadDataV4接口,支持更长的JsonStr,但仅支持POST方法.
       *
       * @param request UploadDataRequest
       * @return UploadDataResponse
       */
      Models::UploadDataResponse uploadData(const Models::UploadDataRequest &request);

      /**
       * @summary http_hsf
       *
       * @param request UploadDataSyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadDataSyncResponse
       */
      Models::UploadDataSyncResponse uploadDataSyncWithOptions(const Models::UploadDataSyncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary http_hsf
       *
       * @param request UploadDataSyncRequest
       * @return UploadDataSyncResponse
       */
      Models::UploadDataSyncResponse uploadDataSync(const Models::UploadDataSyncRequest &request);

      /**
       * @summary http_hsf
       *
       * @param request UploadDataSyncForLLMRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadDataSyncForLLMResponse
       */
      Models::UploadDataSyncForLLMResponse uploadDataSyncForLLMWithOptions(const Models::UploadDataSyncForLLMRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary http_hsf
       *
       * @param request UploadDataSyncForLLMRequest
       * @return UploadDataSyncForLLMResponse
       */
      Models::UploadDataSyncForLLMResponse uploadDataSyncForLLM(const Models::UploadDataSyncForLLMRequest &request);

      /**
       * @summary UploadDataV4
       *
       * @param request UploadDataV4Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadDataV4Response
       */
      Models::UploadDataV4Response uploadDataV4WithOptions(const Models::UploadDataV4Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary UploadDataV4
       *
       * @param request UploadDataV4Request
       * @return UploadDataV4Response
       */
      Models::UploadDataV4Response uploadDataV4(const Models::UploadDataV4Request &request);

      /**
       * @param request UploadRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadRuleResponse
       */
      Models::UploadRuleResponse uploadRuleWithOptions(const Models::UploadRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UploadRuleRequest
       * @return UploadRuleResponse
       */
      Models::UploadRuleResponse uploadRule(const Models::UploadRuleRequest &request);

      /**
       * @param request VerifyFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyFileResponse
       */
      Models::VerifyFileResponse verifyFileWithOptions(const Models::VerifyFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request VerifyFileRequest
       * @return VerifyFileResponse
       */
      Models::VerifyFileResponse verifyFile(const Models::VerifyFileRequest &request);

      /**
       * @param request VerifySentenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifySentenceResponse
       */
      Models::VerifySentenceResponse verifySentenceWithOptions(const Models::VerifySentenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request VerifySentenceRequest
       * @return VerifySentenceResponse
       */
      Models::VerifySentenceResponse verifySentence(const Models::VerifySentenceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
