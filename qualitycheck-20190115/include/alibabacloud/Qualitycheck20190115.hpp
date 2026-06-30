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
       * @summary Adds a business category.
       *
       * @param request AddBusinessCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBusinessCategoryResponse
       */
      Models::AddBusinessCategoryResponse addBusinessCategoryWithOptions(const Models::AddBusinessCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a business category.
       *
       * @param request AddBusinessCategoryRequest
       * @return AddBusinessCategoryResponse
       */
      Models::AddBusinessCategoryResponse addBusinessCategory(const Models::AddBusinessCategoryRequest &request);

      /**
       * @summary Add a rule category.
       *
       * @param request AddRuleCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRuleCategoryResponse
       */
      Models::AddRuleCategoryResponse addRuleCategoryWithOptions(const Models::AddRuleCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a rule category.
       *
       * @param request AddRuleCategoryRequest
       * @return AddRuleCategoryResponse
       */
      Models::AddRuleCategoryResponse addRuleCategory(const Models::AddRuleCategoryRequest &request);

      /**
       * @summary This operation creates a rule on the Quality Inspection Rule Configuration page. For Apsara Stack, the URL is ip:port/api/client/UpdateRuleById.json.
       *
       * @param request AddRuleV4Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRuleV4Response
       */
      Models::AddRuleV4Response addRuleV4WithOptions(const Models::AddRuleV4Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation creates a rule on the Quality Inspection Rule Configuration page. For Apsara Stack, the URL is ip:port/api/client/UpdateRuleById.json.
       *
       * @param request AddRuleV4Request
       * @return AddRuleV4Response
       */
      Models::AddRuleV4Response addRuleV4(const Models::AddRuleV4Request &request);

      /**
       * @summary Performs tag categorization.
       *
       * @param request AnalyzeLabelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnalyzeLabelResponse
       */
      Models::AnalyzeLabelResponse analyzeLabelWithOptions(const Models::AnalyzeLabelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs tag categorization.
       *
       * @param request AnalyzeLabelRequest
       * @return AnalyzeLabelResponse
       */
      Models::AnalyzeLabelResponse analyzeLabel(const Models::AnalyzeLabelRequest &request);

      /**
       * @summary Apply for the token required for real-time speech processing.
       *
       * @param request ApplyWsTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyWsTokenResponse
       */
      Models::ApplyWsTokenResponse applyWsTokenWithOptions(const Models::ApplyWsTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Apply for the token required for real-time speech processing.
       *
       * @param request ApplyWsTokenRequest
       * @return ApplyWsTokenResponse
       */
      Models::ApplyWsTokenResponse applyWsToken(const Models::ApplyWsTokenRequest &request);

      /**
       * @summary Manually assign quality reviewers.
       *
       * @description You can manually assign files that have completed quality inspection to reviewers. Assignments can be made one file at a time or in batches:
       * Single-file assignment: Assign a specific file to a specified reviewer.
       * Batch assignment: Assign multiple filtered files to one or more reviewers. You can specify how many files each reviewer receives, or let the system distribute the files evenly among reviewers.
       *
       * @param request AssignReviewerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignReviewerResponse
       */
      Models::AssignReviewerResponse assignReviewerWithOptions(const Models::AssignReviewerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually assign quality reviewers.
       *
       * @description You can manually assign files that have completed quality inspection to reviewers. Assignments can be made one file at a time or in batches:
       * Single-file assignment: Assign a specific file to a specified reviewer.
       * Batch assignment: Assign multiple filtered files to one or more reviewers. You can specify how many files each reviewer receives, or let the system distribute the files evenly among reviewers.
       *
       * @param request AssignReviewerRequest
       * @return AssignReviewerResponse
       */
      Models::AssignReviewerResponse assignReviewer(const Models::AssignReviewerRequest &request);

      /**
       * @deprecated OpenAPI AssignReviewerBySessionGroup is deprecated
       *
       * @summary Frontend location: Quality Check Plan Management > Task Results > Session Groups > Batch Assign. Apsara Stack URL: ip:port/api/job/AssignReviewerBySessionGroup.json.
       *
       * @param request AssignReviewerBySessionGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignReviewerBySessionGroupResponse
       */
      Models::AssignReviewerBySessionGroupResponse assignReviewerBySessionGroupWithOptions(const Models::AssignReviewerBySessionGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AssignReviewerBySessionGroup is deprecated
       *
       * @summary Frontend location: Quality Check Plan Management > Task Results > Session Groups > Batch Assign. Apsara Stack URL: ip:port/api/job/AssignReviewerBySessionGroup.json.
       *
       * @param request AssignReviewerBySessionGroupRequest
       * @return AssignReviewerBySessionGroupResponse
       */
      Models::AssignReviewerBySessionGroupResponse assignReviewerBySessionGroup(const Models::AssignReviewerBySessionGroupRequest &request);

      /**
       * @summary This operation implements the Batch Review feature, which is available in the frontend under Task Management > Task Result.
       * For private cloud deployments, use the URL: ip:port/api/qcsBatchSubmitReviewInfo.json.
       * You can use this operation to perform a batch review on all filtered data.
       * Note: This operation updates a large volume of data. The changes may take some time to appear.
       *
       * @param request BatchSubmitReviewInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSubmitReviewInfoResponse
       */
      Models::BatchSubmitReviewInfoResponse batchSubmitReviewInfoWithOptions(const Models::BatchSubmitReviewInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation implements the Batch Review feature, which is available in the frontend under Task Management > Task Result.
       * For private cloud deployments, use the URL: ip:port/api/qcsBatchSubmitReviewInfo.json.
       * You can use this operation to perform a batch review on all filtered data.
       * Note: This operation updates a large volume of data. The changes may take some time to appear.
       *
       * @param request BatchSubmitReviewInfoRequest
       * @return BatchSubmitReviewInfoResponse
       */
      Models::BatchSubmitReviewInfoResponse batchSubmitReviewInfo(const Models::BatchSubmitReviewInfoRequest &request);

      /**
       * @summary Creates an agent.
       *
       * @param request CreateAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentResponse
       */
      Models::CreateAgentResponse createAgentWithOptions(const Models::CreateAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an agent.
       *
       * @param request CreateAgentRequest
       * @return CreateAgentResponse
       */
      Models::CreateAgentResponse createAgent(const Models::CreateAgentRequest &request);

      /**
       * @summary Creates an Agent batch task for conversation analysis. The application call supports HTTP calls to complete the customer response.
       *
       * @param request CreateAgentTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentTaskResponse
       */
      Models::CreateAgentTaskResponse createAgentTaskWithOptions(const Models::CreateAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Agent batch task for conversation analysis. The application call supports HTTP calls to complete the customer response.
       *
       * @param request CreateAgentTaskRequest
       * @return CreateAgentTaskResponse
       */
      Models::CreateAgentTaskResponse createAgentTask(const Models::CreateAgentTaskRequest &request);

      /**
       * @summary Uploads a set of speech hotwords to the server and obtains the hotword ID in the response.
       *
       * @description > Hotwords help improve recognition accuracy for specific terms, such as names, place names, or technical terms. [Learn more](https://help.aliyun.com/document_detail/213249.html).
       *
       * @param request CreateAsrVocabRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAsrVocabResponse
       */
      Models::CreateAsrVocabResponse createAsrVocabWithOptions(const Models::CreateAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a set of speech hotwords to the server and obtains the hotword ID in the response.
       *
       * @description > Hotwords help improve recognition accuracy for specific terms, such as names, place names, or technical terms. [Learn more](https://help.aliyun.com/document_detail/213249.html).
       *
       * @param request CreateAsrVocabRequest
       * @return CreateAsrVocabResponse
       */
      Models::CreateAsrVocabResponse createAsrVocab(const Models::CreateAsrVocabRequest &request);

      /**
       * @summary UI path: Quality Check Plan Management > Add or Edit Quality Check Dimension > Add Quality Check Dimension. Apsara Stack API endpoint: ip:port/api/qcs/CreateCheckTypeToScheme.json.
       *
       * @param request CreateCheckTypeToSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCheckTypeToSchemeResponse
       */
      Models::CreateCheckTypeToSchemeResponse createCheckTypeToSchemeWithOptions(const Models::CreateCheckTypeToSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary UI path: Quality Check Plan Management > Add or Edit Quality Check Dimension > Add Quality Check Dimension. Apsara Stack API endpoint: ip:port/api/qcs/CreateCheckTypeToScheme.json.
       *
       * @param request CreateCheckTypeToSchemeRequest
       * @return CreateCheckTypeToSchemeResponse
       */
      Models::CreateCheckTypeToSchemeResponse createCheckTypeToScheme(const Models::CreateCheckTypeToSchemeRequest &request);

      /**
       * @summary Creates a label mining task.
       *
       * @param request CreateMiningTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMiningTaskResponse
       */
      Models::CreateMiningTaskResponse createMiningTaskWithOptions(const Models::CreateMiningTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a label mining task.
       *
       * @param request CreateMiningTaskRequest
       * @return CreateMiningTaskResponse
       */
      Models::CreateMiningTaskResponse createMiningTask(const Models::CreateMiningTaskRequest &request);

      /**
       * @summary You can access this operation from the Quality Check Plan Management page in the console. The Apsara Stack endpoint is ip:port/api/qcs/CreateQualityCheckScheme.json.
       *
       * @param request CreateQualityCheckSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQualityCheckSchemeResponse
       */
      Models::CreateQualityCheckSchemeResponse createQualityCheckSchemeWithOptions(const Models::CreateQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can access this operation from the Quality Check Plan Management page in the console. The Apsara Stack endpoint is ip:port/api/qcs/CreateQualityCheckScheme.json.
       *
       * @param request CreateQualityCheckSchemeRequest
       * @return CreateQualityCheckSchemeResponse
       */
      Models::CreateQualityCheckSchemeResponse createQualityCheckScheme(const Models::CreateQualityCheckSchemeRequest &request);

      /**
       * @summary Corresponding frontend feature location: Plan Management > Create Quality Inspection Job. Apsara Stack URL: ip:port/api/task/CreateSchemeTaskConfig.json.
       *
       * @param request CreateSchemeTaskConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSchemeTaskConfigResponse
       */
      Models::CreateSchemeTaskConfigResponse createSchemeTaskConfigWithOptions(const Models::CreateSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Corresponding frontend feature location: Plan Management > Create Quality Inspection Job. Apsara Stack URL: ip:port/api/task/CreateSchemeTaskConfig.json.
       *
       * @param request CreateSchemeTaskConfigRequest
       * @return CreateSchemeTaskConfigResponse
       */
      Models::CreateSchemeTaskConfigResponse createSchemeTaskConfig(const Models::CreateSchemeTaskConfigRequest &request);

      /**
       * @deprecated OpenAPI CreateSkillGroupConfig is deprecated
       *
       * @summary Create a configuration.
       *
       * @param request CreateSkillGroupConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillGroupConfigResponse
       */
      Models::CreateSkillGroupConfigResponse createSkillGroupConfigWithOptions(const Models::CreateSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateSkillGroupConfig is deprecated
       *
       * @summary Create a configuration.
       *
       * @param request CreateSkillGroupConfigRequest
       * @return CreateSkillGroupConfigResponse
       */
      Models::CreateSkillGroupConfigResponse createSkillGroupConfig(const Models::CreateSkillGroupConfigRequest &request);

      /**
       * @summary Creates a label node.
       *
       * @param request CreateTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTagResponse
       */
      Models::CreateTagResponse createTagWithOptions(const Models::CreateTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a label node.
       *
       * @param request CreateTagRequest
       * @return CreateTagResponse
       */
      Models::CreateTagResponse createTag(const Models::CreateTagRequest &request);

      /**
       * @summary Creates an automatic allocation rule for quality review tasks.
       *
       * @param request CreateTaskAssignRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTaskAssignRuleResponse
       */
      Models::CreateTaskAssignRuleResponse createTaskAssignRuleWithOptions(const Models::CreateTaskAssignRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an automatic allocation rule for quality review tasks.
       *
       * @param request CreateTaskAssignRuleRequest
       * @return CreateTaskAssignRuleResponse
       */
      Models::CreateTaskAssignRuleResponse createTaskAssignRule(const Models::CreateTaskAssignRuleRequest &request);

      /**
       * @summary Create a user
       *
       * @description Alibaba Cloud uses Resource Access Management (RAM) for unified account management. Before you create a user in Smart Conversation Analysis, first create the user in [RAM](https://ram.console.aliyun.com). Then, obtain the user’s UID, username, and display name. Finally, add the RAM user to Smart Conversation Analysis to grant them access to the Smart Conversation Analysis service.
       *
       * @param request CreateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const Models::CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a user
       *
       * @description Alibaba Cloud uses Resource Access Management (RAM) for unified account management. Before you create a user in Smart Conversation Analysis, first create the user in [RAM](https://ram.console.aliyun.com). Then, obtain the user’s UID, username, and display name. Finally, add the RAM user to Smart Conversation Analysis to grant them access to the Smart Conversation Analysis service.
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const Models::CreateUserRequest &request);

      /**
       * @summary Create a warning configuration.
       *
       * @param request CreateWarningConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWarningConfigResponse
       */
      Models::CreateWarningConfigResponse createWarningConfigWithOptions(const Models::CreateWarningConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a warning configuration.
       *
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
       * @summary Deletes a rule category.
       *
       * @param request DelRuleCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DelRuleCategoryResponse
       */
      Models::DelRuleCategoryResponse delRuleCategoryWithOptions(const Models::DelRuleCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a rule category.
       *
       * @param request DelRuleCategoryRequest
       * @return DelRuleCategoryResponse
       */
      Models::DelRuleCategoryResponse delRuleCategory(const Models::DelRuleCategoryRequest &request);

      /**
       * @summary Deletes an agent.
       *
       * @param request DeleteAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentResponse
       */
      Models::DeleteAgentResponse deleteAgentWithOptions(const Models::DeleteAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an agent.
       *
       * @param request DeleteAgentRequest
       * @return DeleteAgentResponse
       */
      Models::DeleteAgentResponse deleteAgent(const Models::DeleteAgentRequest &request);

      /**
       * @summary Deletes a hotword group.
       *
       * @param request DeleteAsrVocabRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAsrVocabResponse
       */
      Models::DeleteAsrVocabResponse deleteAsrVocabWithOptions(const Models::DeleteAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a hotword group.
       *
       * @param request DeleteAsrVocabRequest
       * @return DeleteAsrVocabResponse
       */
      Models::DeleteAsrVocabResponse deleteAsrVocab(const Models::DeleteAsrVocabRequest &request);

      /**
       * @summary Deletes a business category.
       *
       * @param request DeleteBusinessCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBusinessCategoryResponse
       */
      Models::DeleteBusinessCategoryResponse deleteBusinessCategoryWithOptions(const Models::DeleteBusinessCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a business category.
       *
       * @param request DeleteBusinessCategoryRequest
       * @return DeleteBusinessCategoryResponse
       */
      Models::DeleteBusinessCategoryResponse deleteBusinessCategory(const Models::DeleteBusinessCategoryRequest &request);

      /**
       * @summary Deletes a dimension from a quality inspection scheme.
       *
       * @param request DeleteCheckTypeToSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCheckTypeToSchemeResponse
       */
      Models::DeleteCheckTypeToSchemeResponse deleteCheckTypeToSchemeWithOptions(const Models::DeleteCheckTypeToSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dimension from a quality inspection scheme.
       *
       * @param request DeleteCheckTypeToSchemeRequest
       * @return DeleteCheckTypeToSchemeResponse
       */
      Models::DeleteCheckTypeToSchemeResponse deleteCheckTypeToScheme(const Models::DeleteCheckTypeToSchemeRequest &request);

      /**
       * @summary Deletes a language model.
       *
       * @param request DeleteCustomizationConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomizationConfigResponse
       */
      Models::DeleteCustomizationConfigResponse deleteCustomizationConfigWithOptions(const Models::DeleteCustomizationConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a language model.
       *
       * @param request DeleteCustomizationConfigRequest
       * @return DeleteCustomizationConfigResponse
       */
      Models::DeleteCustomizationConfigResponse deleteCustomizationConfig(const Models::DeleteCustomizationConfigRequest &request);

      /**
       * @deprecated OpenAPI DeleteDataSet is deprecated
       *
       * @summary Deletes a dataset.
       *
       * @param request DeleteDataSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSetResponse
       */
      Models::DeleteDataSetResponse deleteDataSetWithOptions(const Models::DeleteDataSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteDataSet is deprecated
       *
       * @summary Deletes a dataset.
       *
       * @param request DeleteDataSetRequest
       * @return DeleteDataSetResponse
       */
      Models::DeleteDataSetResponse deleteDataSet(const Models::DeleteDataSetRequest &request);

      /**
       * @summary Delete a speech recognition quality check task.
       *
       * @param request DeletePrecisionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrecisionTaskResponse
       */
      Models::DeletePrecisionTaskResponse deletePrecisionTaskWithOptions(const Models::DeletePrecisionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a speech recognition quality check task.
       *
       * @param request DeletePrecisionTaskRequest
       * @return DeletePrecisionTaskResponse
       */
      Models::DeletePrecisionTaskResponse deletePrecisionTask(const Models::DeletePrecisionTaskRequest &request);

      /**
       * @summary You can delete a quality check plan from the Quality Check Plan Management page by clicking the Delete button on the right side of the plan. The Apsara Stack API endpoint is ip:port/api/qcs/DeleteQualityCheckScheme.json.
       *
       * @param request DeleteQualityCheckSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQualityCheckSchemeResponse
       */
      Models::DeleteQualityCheckSchemeResponse deleteQualityCheckSchemeWithOptions(const Models::DeleteQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can delete a quality check plan from the Quality Check Plan Management page by clicking the Delete button on the right side of the plan. The Apsara Stack API endpoint is ip:port/api/qcs/DeleteQualityCheckScheme.json.
       *
       * @param request DeleteQualityCheckSchemeRequest
       * @return DeleteQualityCheckSchemeResponse
       */
      Models::DeleteQualityCheckSchemeResponse deleteQualityCheckScheme(const Models::DeleteQualityCheckSchemeRequest &request);

      /**
       * @deprecated OpenAPI DeleteRule is deprecated, please use Qualitycheck::2019-01-15::DeleteRuleV4 instead.
       *
       * @summary This operation deletes a quality check rule. You can access it from the Quality Check Rule Configuration page in the Apsara Stack console. The API endpoint is ip:port/api/client/DeleteRule.json.
       *
       * @param request DeleteRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRuleResponse
       */
      Models::DeleteRuleResponse deleteRuleWithOptions(const Models::DeleteRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteRule is deprecated, please use Qualitycheck::2019-01-15::DeleteRuleV4 instead.
       *
       * @summary This operation deletes a quality check rule. You can access it from the Quality Check Rule Configuration page in the Apsara Stack console. The API endpoint is ip:port/api/client/DeleteRule.json.
       *
       * @param request DeleteRuleRequest
       * @return DeleteRuleResponse
       */
      Models::DeleteRuleResponse deleteRule(const Models::DeleteRuleRequest &request);

      /**
       * @summary Frontend feature location: Quality Inspection Rule Configuration — Delete. Apsara Stack URL: ip:port/api/client/DeleteRule.json.
       *
       * @param request DeleteRuleV4Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRuleV4Response
       */
      Models::DeleteRuleV4Response deleteRuleV4WithOptions(const Models::DeleteRuleV4Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Frontend feature location: Quality Inspection Rule Configuration — Delete. Apsara Stack URL: ip:port/api/client/DeleteRule.json.
       *
       * @param request DeleteRuleV4Request
       * @return DeleteRuleV4Response
       */
      Models::DeleteRuleV4Response deleteRuleV4(const Models::DeleteRuleV4Request &request);

      /**
       * @summary This feature is not available on the frontend. The Apsara Stack API endpoint is ip:port/api/task/DeleteSchemeTaskConfig.json.
       *
       * @param request DeleteSchemeTaskConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSchemeTaskConfigResponse
       */
      Models::DeleteSchemeTaskConfigResponse deleteSchemeTaskConfigWithOptions(const Models::DeleteSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This feature is not available on the frontend. The Apsara Stack API endpoint is ip:port/api/task/DeleteSchemeTaskConfig.json.
       *
       * @param request DeleteSchemeTaskConfigRequest
       * @return DeleteSchemeTaskConfigResponse
       */
      Models::DeleteSchemeTaskConfigResponse deleteSchemeTaskConfig(const Models::DeleteSchemeTaskConfigRequest &request);

      /**
       * @deprecated OpenAPI DeleteSkillGroupConfig is deprecated
       *
       * @summary Delete a configuration.
       *
       * @param request DeleteSkillGroupConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillGroupConfigResponse
       */
      Models::DeleteSkillGroupConfigResponse deleteSkillGroupConfigWithOptions(const Models::DeleteSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteSkillGroupConfig is deprecated
       *
       * @summary Delete a configuration.
       *
       * @param request DeleteSkillGroupConfigRequest
       * @return DeleteSkillGroupConfigResponse
       */
      Models::DeleteSkillGroupConfigResponse deleteSkillGroupConfig(const Models::DeleteSkillGroupConfigRequest &request);

      /**
       * @summary Deletes a label node.
       *
       * @param request DeleteTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTagResponse
       */
      Models::DeleteTagResponse deleteTagWithOptions(const Models::DeleteTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a label node.
       *
       * @param request DeleteTagRequest
       * @return DeleteTagResponse
       */
      Models::DeleteTagResponse deleteTag(const Models::DeleteTagRequest &request);

      /**
       * @summary Deletes an automatic allocation rule for review tasks.
       *
       * @param request DeleteTaskAssignRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTaskAssignRuleResponse
       */
      Models::DeleteTaskAssignRuleResponse deleteTaskAssignRuleWithOptions(const Models::DeleteTaskAssignRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an automatic allocation rule for review tasks.
       *
       * @param request DeleteTaskAssignRuleRequest
       * @return DeleteTaskAssignRuleResponse
       */
      Models::DeleteTaskAssignRuleResponse deleteTaskAssignRule(const Models::DeleteTaskAssignRuleRequest &request);

      /**
       * @summary Deletes a warning configuration.
       *
       * @param request DeleteWarningConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWarningConfigResponse
       */
      Models::DeleteWarningConfigResponse deleteWarningConfigWithOptions(const Models::DeleteWarningConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a warning configuration.
       *
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
       * @summary Runs an agent.
       *
       * @param request ExecuteAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAgentResponse
       */
      FutureGenerator<Models::ExecuteAgentResponse> executeAgentWithSSE(const Models::ExecuteAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs an agent.
       *
       * @param request ExecuteAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAgentResponse
       */
      Models::ExecuteAgentResponse executeAgentWithOptions(const Models::ExecuteAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs an agent.
       *
       * @param request ExecuteAgentRequest
       * @return ExecuteAgentResponse
       */
      Models::ExecuteAgentResponse executeAgent(const Models::ExecuteAgentRequest &request);

      /**
       * @summary Generates labels.
       *
       * @param request GenerateLabelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateLabelResponse
       */
      Models::GenerateLabelResponse generateLabelWithOptions(const Models::GenerateLabelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates labels.
       *
       * @param request GenerateLabelRequest
       * @return GenerateLabelResponse
       */
      Models::GenerateLabelResponse generateLabel(const Models::GenerateLabelRequest &request);

      /**
       * @summary Retrieves the details of an agent.
       *
       * @param request GetAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgentWithOptions(const Models::GetAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an agent.
       *
       * @param request GetAgentRequest
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgent(const Models::GetAgentRequest &request);

      /**
       * @summary Retrieves the task result of an agent node.
       *
       * @param request GetAgentTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentTaskResultResponse
       */
      Models::GetAgentTaskResultResponse getAgentTaskResultWithOptions(const Models::GetAgentTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the task result of an agent node.
       *
       * @param request GetAgentTaskResultRequest
       * @return GetAgentTaskResultResponse
       */
      Models::GetAgentTaskResultResponse getAgentTaskResult(const Models::GetAgentTaskResultRequest &request);

      /**
       * @summary Retrieves details for a specified hotword group.
       *
       * @param request GetAsrVocabRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsrVocabResponse
       */
      Models::GetAsrVocabResponse getAsrVocabWithOptions(const Models::GetAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details for a specified hotword group.
       *
       * @param request GetAsrVocabRequest
       * @return GetAsrVocabResponse
       */
      Models::GetAsrVocabResponse getAsrVocab(const Models::GetAsrVocabRequest &request);

      /**
       * @summary Obtain the list of applicable businesses.
       *
       * @param request GetBusinessCategoryListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBusinessCategoryListResponse
       */
      Models::GetBusinessCategoryListResponse getBusinessCategoryListWithOptions(const Models::GetBusinessCategoryListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the list of applicable businesses.
       *
       * @param request GetBusinessCategoryListRequest
       * @return GetBusinessCategoryListResponse
       */
      Models::GetBusinessCategoryListResponse getBusinessCategoryList(const Models::GetBusinessCategoryListRequest &request);

      /**
       * @summary Retrieves a list of language models.
       *
       * @param request GetCustomizationConfigListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomizationConfigListResponse
       */
      Models::GetCustomizationConfigListResponse getCustomizationConfigListWithOptions(const Models::GetCustomizationConfigListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of language models.
       *
       * @param request GetCustomizationConfigListRequest
       * @return GetCustomizationConfigListResponse
       */
      Models::GetCustomizationConfigListResponse getCustomizationConfigList(const Models::GetCustomizationConfigListRequest &request);

      /**
       * @summary Queries the results of tag categorization analysis.
       *
       * @param request GetLabelAnalysisResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLabelAnalysisResultResponse
       */
      Models::GetLabelAnalysisResultResponse getLabelAnalysisResultWithOptions(const Models::GetLabelAnalysisResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the results of tag categorization analysis.
       *
       * @param request GetLabelAnalysisResultRequest
       * @return GetLabelAnalysisResultResponse
       */
      Models::GetLabelAnalysisResultResponse getLabelAnalysisResult(const Models::GetLabelAnalysisResultRequest &request);

      /**
       * @summary Queries the result of a label generation task.
       *
       * @param request GetLabelGeneratedResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLabelGeneratedResultResponse
       */
      Models::GetLabelGeneratedResultResponse getLabelGeneratedResultWithOptions(const Models::GetLabelGeneratedResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the result of a label generation task.
       *
       * @param request GetLabelGeneratedResultRequest
       * @return GetLabelGeneratedResultResponse
       */
      Models::GetLabelGeneratedResultResponse getLabelGeneratedResult(const Models::GetLabelGeneratedResultRequest &request);

      /**
       * @summary Retrieve the result of a tag mining task.
       *
       * @param request GetMiningTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMiningTaskResultResponse
       */
      Models::GetMiningTaskResultResponse getMiningTaskResultWithOptions(const Models::GetMiningTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the result of a tag mining task.
       *
       * @param request GetMiningTaskResultRequest
       * @return GetMiningTaskResultResponse
       */
      Models::GetMiningTaskResultResponse getMiningTaskResult(const Models::GetMiningTaskResultRequest &request);

      /**
       * @summary Retrieve the next file details for manual verification.
       *
       * @param request GetNextResultToVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNextResultToVerifyResponse
       */
      Models::GetNextResultToVerifyResponse getNextResultToVerifyWithOptions(const Models::GetNextResultToVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the next file details for manual verification.
       *
       * @param request GetNextResultToVerifyRequest
       * @return GetNextResultToVerifyResponse
       */
      Models::GetNextResultToVerifyResponse getNextResultToVerify(const Models::GetNextResultToVerifyRequest &request);

      /**
       * @summary Retrieves the details of a (speech recognition) detection task.
       *
       * @param request GetPrecisionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrecisionTaskResponse
       */
      Models::GetPrecisionTaskResponse getPrecisionTaskWithOptions(const Models::GetPrecisionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a (speech recognition) detection task.
       *
       * @param request GetPrecisionTaskRequest
       * @return GetPrecisionTaskResponse
       */
      Models::GetPrecisionTaskResponse getPrecisionTask(const Models::GetPrecisionTaskRequest &request);

      /**
       * @summary This operation implements the query feature in quality check plan management on the frontend. The Apsara Stack URL is ip:port/api/qcs/GetQualityCheckScheme.json.
       *
       * @param request GetQualityCheckSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityCheckSchemeResponse
       */
      Models::GetQualityCheckSchemeResponse getQualityCheckSchemeWithOptions(const Models::GetQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation implements the query feature in quality check plan management on the frontend. The Apsara Stack URL is ip:port/api/qcs/GetQualityCheckScheme.json.
       *
       * @param request GetQualityCheckSchemeRequest
       * @return GetQualityCheckSchemeResponse
       */
      Models::GetQualityCheckSchemeResponse getQualityCheckScheme(const Models::GetQualityCheckSchemeRequest &request);

      /**
       * @summary Query quality inspection results. Some fields require the requiredFields parameter to be explicitly specified in the request. Set the service endpoint (Region) to Hangzhou (cn-hangzhou).
       *
       * @description You can query data uploaded using [UploadAudioData](https://help.aliyun.com/document_detail/139399.html) or [UploadData](https://help.aliyun.com/document_detail/111394.html). You can also query data from dataset-based quality inspection tasks created with [SubmitQualityCheckTask](https://help.aliyun.com/document_detail/158890.html). You can search by task ID (taskId) or by time range.
       *
       * @param request GetResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResultResponse
       */
      Models::GetResultResponse getResultWithOptions(const Models::GetResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query quality inspection results. Some fields require the requiredFields parameter to be explicitly specified in the request. Set the service endpoint (Region) to Hangzhou (cn-hangzhou).
       *
       * @description You can query data uploaded using [UploadAudioData](https://help.aliyun.com/document_detail/139399.html) or [UploadData](https://help.aliyun.com/document_detail/111394.html). You can also query data from dataset-based quality inspection tasks created with [SubmitQualityCheckTask](https://help.aliyun.com/document_detail/158890.html). You can search by task ID (taskId) or by time range.
       *
       * @param request GetResultRequest
       * @return GetResultResponse
       */
      Models::GetResultResponse getResult(const Models::GetResultRequest &request);

      /**
       * @summary Retrieves the quality inspection results for a specified file. The response includes the transcript, audio URL, and details of detected rule hits. You can use this information to review the file by listening to the audio, reading the transcript, and locating where rules were triggered.
       *
       * @param request GetResultToReviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResultToReviewResponse
       */
      Models::GetResultToReviewResponse getResultToReviewWithOptions(const Models::GetResultToReviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the quality inspection results for a specified file. The response includes the transcript, audio URL, and details of detected rule hits. You can use this information to review the file by listening to the audio, reading the transcript, and locating where rules were triggered.
       *
       * @param request GetResultToReviewRequest
       * @return GetResultToReviewResponse
       */
      Models::GetResultToReviewResponse getResultToReview(const Models::GetResultToReviewRequest &request);

      /**
       * @deprecated OpenAPI GetRule is deprecated, please use Qualitycheck::2019-01-15::GetRuleV4 instead.
       *
       * @summary Retrieves basic information about rules.
       *
       * @description > This operation returns basic rule information such as the **id** and **name**. You can use this information with [GetRuleDetails](https://help.aliyun.com/document_detail/142310.html).
       *
       * @param request GetRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRuleResponse
       */
      Models::GetRuleResponse getRuleWithOptions(const Models::GetRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetRule is deprecated, please use Qualitycheck::2019-01-15::GetRuleV4 instead.
       *
       * @summary Retrieves basic information about rules.
       *
       * @description > This operation returns basic rule information such as the **id** and **name**. You can use this information with [GetRuleDetails](https://help.aliyun.com/document_detail/142310.html).
       *
       * @param request GetRuleRequest
       * @return GetRuleResponse
       */
      Models::GetRuleResponse getRule(const Models::GetRuleRequest &request);

      /**
       * @deprecated OpenAPI GetRuleById is deprecated, please use Qualitycheck::2019-01-15::GetRuleV4 instead.
       *
       * @summary Retrieves the details of a specific quality inspection rule. It corresponds to the **Edit** action on the **Quality Inspection Rule Configuration** page. The URL for this operation in a private cloud is `ip:port/api/client/GetRuleById.json`.
       *
       * @param request GetRuleByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRuleByIdResponse
       */
      Models::GetRuleByIdResponse getRuleByIdWithOptions(const Models::GetRuleByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetRuleById is deprecated, please use Qualitycheck::2019-01-15::GetRuleV4 instead.
       *
       * @summary Retrieves the details of a specific quality inspection rule. It corresponds to the **Edit** action on the **Quality Inspection Rule Configuration** page. The URL for this operation in a private cloud is `ip:port/api/client/GetRuleById.json`.
       *
       * @param request GetRuleByIdRequest
       * @return GetRuleByIdResponse
       */
      Models::GetRuleByIdResponse getRuleById(const Models::GetRuleByIdRequest &request);

      /**
       * @summary Retrieves a list of rule types.
       *
       * @param request GetRuleCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRuleCategoryResponse
       */
      Models::GetRuleCategoryResponse getRuleCategoryWithOptions(const Models::GetRuleCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of rule types.
       *
       * @param request GetRuleCategoryRequest
       * @return GetRuleCategoryResponse
       */
      Models::GetRuleCategoryResponse getRuleCategory(const Models::GetRuleCategoryRequest &request);

      /**
       * @deprecated OpenAPI GetRuleDetail is deprecated, please use Qualitycheck::2019-01-15::GetRuleV4 instead.
       *
       * @summary Retrieves the detailed information of a rule.
       *
       * @description > This operation is used in conjunction with [Get basic rule information](https://help.aliyun.com/document_detail/142333.html). First, call the GetRule operation to obtain the rule ID. Then, use the rule ID as a parameter to call the **GetRuleDetail** operation.
       *
       * @param request GetRuleDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRuleDetailResponse
       */
      Models::GetRuleDetailResponse getRuleDetailWithOptions(const Models::GetRuleDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetRuleDetail is deprecated, please use Qualitycheck::2019-01-15::GetRuleV4 instead.
       *
       * @summary Retrieves the detailed information of a rule.
       *
       * @description > This operation is used in conjunction with [Get basic rule information](https://help.aliyun.com/document_detail/142333.html). First, call the GetRule operation to obtain the rule ID. Then, use the rule ID as a parameter to call the **GetRuleDetail** operation.
       *
       * @param request GetRuleDetailRequest
       * @return GetRuleDetailResponse
       */
      Models::GetRuleDetailResponse getRuleDetail(const Models::GetRuleDetailRequest &request);

      /**
       * @summary This API is located in the frontend at Quality Check Rule Configuration > Query. The Apsara Stack URL is ip:port/api/client/GetRuleById.json.
       *
       * @param request GetRuleV4Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRuleV4Response
       */
      Models::GetRuleV4Response getRuleV4WithOptions(const Models::GetRuleV4Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is located in the frontend at Quality Check Rule Configuration > Query. The Apsara Stack URL is ip:port/api/client/GetRuleById.json.
       *
       * @param request GetRuleV4Request
       * @return GetRuleV4Response
       */
      Models::GetRuleV4Response getRuleV4(const Models::GetRuleV4Request &request);

      /**
       * @summary Corresponds to the frontend feature location: Quality Inspection Rule Configuration > List. Apsara Stack URL: ip:port/api/rule/GetRulesCountList.json.
       *
       * @param request GetRulesCountListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRulesCountListResponse
       */
      Models::GetRulesCountListResponse getRulesCountListWithOptions(const Models::GetRulesCountListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Corresponds to the frontend feature location: Quality Inspection Rule Configuration > List. Apsara Stack URL: ip:port/api/rule/GetRulesCountList.json.
       *
       * @param request GetRulesCountListRequest
       * @return GetRulesCountListResponse
       */
      Models::GetRulesCountListResponse getRulesCountList(const Models::GetRulesCountListRequest &request);

      /**
       * @summary Obtain the configuration details of a quality inspection task.
       *
       * @param request GetSchemeTaskConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSchemeTaskConfigResponse
       */
      Models::GetSchemeTaskConfigResponse getSchemeTaskConfigWithOptions(const Models::GetSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the configuration details of a quality inspection task.
       *
       * @param request GetSchemeTaskConfigRequest
       * @return GetSchemeTaskConfigResponse
       */
      Models::GetSchemeTaskConfigResponse getSchemeTaskConfig(const Models::GetSchemeTaskConfigRequest &request);

      /**
       * @deprecated OpenAPI GetScoreInfo is deprecated
       *
       * @summary Retrieves information about all scoring items.
       *
       * @param request GetScoreInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScoreInfoResponse
       */
      Models::GetScoreInfoResponse getScoreInfoWithOptions(const Models::GetScoreInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetScoreInfo is deprecated
       *
       * @summary Retrieves information about all scoring items.
       *
       * @param request GetScoreInfoRequest
       * @return GetScoreInfoResponse
       */
      Models::GetScoreInfoResponse getScoreInfo(const Models::GetScoreInfoRequest &request);

      /**
       * @deprecated OpenAPI GetSkillGroupConfig is deprecated
       *
       * @summary Retrieves the configuration that is specified by its ID.
       *
       * @param request GetSkillGroupConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillGroupConfigResponse
       */
      Models::GetSkillGroupConfigResponse getSkillGroupConfigWithOptions(const Models::GetSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetSkillGroupConfig is deprecated
       *
       * @summary Retrieves the configuration that is specified by its ID.
       *
       * @param request GetSkillGroupConfigRequest
       * @return GetSkillGroupConfigResponse
       */
      Models::GetSkillGroupConfigResponse getSkillGroupConfig(const Models::GetSkillGroupConfigRequest &request);

      /**
       * @deprecated OpenAPI GetSyncResult is deprecated, please use Qualitycheck::2019-01-15::GetResult instead.
       *
       * @summary You can obtain the real-time quality inspection result of the hotline.
       *
       * @param request GetSyncResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSyncResultResponse
       */
      Models::GetSyncResultResponse getSyncResultWithOptions(const Models::GetSyncResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetSyncResult is deprecated, please use Qualitycheck::2019-01-15::GetResult instead.
       *
       * @summary You can obtain the real-time quality inspection result of the hotline.
       *
       * @param request GetSyncResultRequest
       * @return GetSyncResultResponse
       */
      Models::GetSyncResultResponse getSyncResult(const Models::GetSyncResultRequest &request);

      /**
       * @summary Queries the details of a label node.
       *
       * @param request GetTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTagResponse
       */
      Models::GetTagResponse getTagWithOptions(const Models::GetTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a label node.
       *
       * @param request GetTagRequest
       * @return GetTagResponse
       */
      Models::GetTagResponse getTag(const Models::GetTagRequest &request);

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
       * @summary Handles a complaint.
       *
       * @description Only quality checkers or administrators can call this operation.
       *
       * @param request HandleComplaintRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HandleComplaintResponse
       */
      Models::HandleComplaintResponse handleComplaintWithOptions(const Models::HandleComplaintRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Handles a complaint.
       *
       * @description Only quality checkers or administrators can call this operation.
       *
       * @param request HandleComplaintRequest
       * @return HandleComplaintResponse
       */
      Models::HandleComplaintResponse handleComplaint(const Models::HandleComplaintRequest &request);

      /**
       * @deprecated OpenAPI InvalidRule is deprecated, please use Qualitycheck::2019-01-15::DeleteRuleV4 instead.
       *
       * @summary Delete rules.
       *
       * @param request InvalidRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvalidRuleResponse
       */
      Models::InvalidRuleResponse invalidRuleWithOptions(const Models::InvalidRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI InvalidRule is deprecated, please use Qualitycheck::2019-01-15::DeleteRuleV4 instead.
       *
       * @summary Delete rules.
       *
       * @param request InvalidRuleRequest
       * @return InvalidRuleResponse
       */
      Models::InvalidRuleResponse invalidRule(const Models::InvalidRuleRequest &request);

      /**
       * @summary Retrieves a list of vocabulary groups without their specific content.
       *
       * @param request ListAsrVocabRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAsrVocabResponse
       */
      Models::ListAsrVocabResponse listAsrVocabWithOptions(const Models::ListAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of vocabulary groups without their specific content.
       *
       * @param request ListAsrVocabRequest
       * @return ListAsrVocabResponse
       */
      Models::ListAsrVocabResponse listAsrVocab(const Models::ListAsrVocabRequest &request);

      /**
       * @deprecated OpenAPI ListDataSet is deprecated
       *
       * @summary This feature is located in the Dataset management section of the frontend. The Apsara Stack URL is ip:port/api/dataset/ListDataSet.json.
       *
       * @param request ListDataSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSetResponse
       */
      Models::ListDataSetResponse listDataSetWithOptions(const Models::ListDataSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListDataSet is deprecated
       *
       * @summary This feature is located in the Dataset management section of the frontend. The Apsara Stack URL is ip:port/api/dataset/ListDataSet.json.
       *
       * @param request ListDataSetRequest
       * @return ListDataSetResponse
       */
      Models::ListDataSetResponse listDataSet(const Models::ListDataSetRequest &request);

      /**
       * @summary Retrieve the list of speech recognition precision tasks. Set the service endpoint to Hangzhou (cn-hangzhou).
       *
       * @param request ListPrecisionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrecisionTaskResponse
       */
      Models::ListPrecisionTaskResponse listPrecisionTaskWithOptions(const Models::ListPrecisionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the list of speech recognition precision tasks. Set the service endpoint to Hangzhou (cn-hangzhou).
       *
       * @param request ListPrecisionTaskRequest
       * @return ListPrecisionTaskResponse
       */
      Models::ListPrecisionTaskResponse listPrecisionTask(const Models::ListPrecisionTaskRequest &request);

      /**
       * @summary Retrieves a list of quality check schemes.
       *
       * @param request ListQualityCheckSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQualityCheckSchemeResponse
       */
      Models::ListQualityCheckSchemeResponse listQualityCheckSchemeWithOptions(const Models::ListQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of quality check schemes.
       *
       * @param request ListQualityCheckSchemeRequest
       * @return ListQualityCheckSchemeResponse
       */
      Models::ListQualityCheckSchemeResponse listQualityCheckScheme(const Models::ListQualityCheckSchemeRequest &request);

      /**
       * @deprecated OpenAPI ListRules is deprecated, please use Qualitycheck::2019-01-15::ListRulesV4 instead.
       *
       * @summary Lists rules.
       *
       * @param request ListRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRulesResponse
       */
      Models::ListRulesResponse listRulesWithOptions(const Models::ListRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListRules is deprecated, please use Qualitycheck::2019-01-15::ListRulesV4 instead.
       *
       * @summary Lists rules.
       *
       * @param request ListRulesRequest
       * @return ListRulesResponse
       */
      Models::ListRulesResponse listRules(const Models::ListRulesRequest &request);

      /**
       * @summary Frontend location: Quality inspection rule configuration — List. Apsara Stack URL: ip:port/api/rule/GetRulesCountList.json.
       *
       * @param request ListRulesV4Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRulesV4Response
       */
      Models::ListRulesV4Response listRulesV4WithOptions(const Models::ListRulesV4Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Frontend location: Quality inspection rule configuration — List. Apsara Stack URL: ip:port/api/rule/GetRulesCountList.json.
       *
       * @param request ListRulesV4Request
       * @return ListRulesV4Response
       */
      Models::ListRulesV4Response listRulesV4(const Models::ListRulesV4Request &request);

      /**
       * @summary This operation is used for the Task Management feature on the frontend. The Apsara Stack URL is ip:port/api/task/ListSchemeTaskInfo.json.
       *
       * @param request ListSchemeTaskConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSchemeTaskConfigResponse
       */
      Models::ListSchemeTaskConfigResponse listSchemeTaskConfigWithOptions(const Models::ListSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation is used for the Task Management feature on the frontend. The Apsara Stack URL is ip:port/api/task/ListSchemeTaskInfo.json.
       *
       * @param request ListSchemeTaskConfigRequest
       * @return ListSchemeTaskConfigResponse
       */
      Models::ListSchemeTaskConfigResponse listSchemeTaskConfig(const Models::ListSchemeTaskConfigRequest &request);

      /**
       * @deprecated OpenAPI ListSessionGroup is deprecated
       *
       * @summary This API corresponds to the frontend location: Task Management > View Results > Task Result > Session Group Results tab. The Apsara Stack URL is: ip:port/api/session/group/ListSessionGroup.json. It aggregates multi-turn sessions by their session group ID for unified management. You must pass the `sessionGroupId` field. For more information, see the UploadData and UploadAudioData API documentation.
       *
       * @param request ListSessionGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSessionGroupResponse
       */
      Models::ListSessionGroupResponse listSessionGroupWithOptions(const Models::ListSessionGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListSessionGroup is deprecated
       *
       * @summary This API corresponds to the frontend location: Task Management > View Results > Task Result > Session Group Results tab. The Apsara Stack URL is: ip:port/api/session/group/ListSessionGroup.json. It aggregates multi-turn sessions by their session group ID for unified management. You must pass the `sessionGroupId` field. For more information, see the UploadData and UploadAudioData API documentation.
       *
       * @param request ListSessionGroupRequest
       * @return ListSessionGroupResponse
       */
      Models::ListSessionGroupResponse listSessionGroup(const Models::ListSessionGroupRequest &request);

      /**
       * @deprecated OpenAPI ListSkillGroupConfig is deprecated
       *
       * @summary You can call ListSkillGroupConfig to obtain the configuration list.
       *
       * @param request ListSkillGroupConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillGroupConfigResponse
       */
      Models::ListSkillGroupConfigResponse listSkillGroupConfigWithOptions(const Models::ListSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListSkillGroupConfig is deprecated
       *
       * @summary You can call ListSkillGroupConfig to obtain the configuration list.
       *
       * @param request ListSkillGroupConfigRequest
       * @return ListSkillGroupConfigResponse
       */
      Models::ListSkillGroupConfigResponse listSkillGroupConfig(const Models::ListSkillGroupConfigRequest &request);

      /**
       * @summary Queries the list of label nodes.
       *
       * @param request ListTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResponse
       */
      Models::ListTagResponse listTagWithOptions(const Models::ListTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of label nodes.
       *
       * @param request ListTagRequest
       * @return ListTagResponse
       */
      Models::ListTagResponse listTag(const Models::ListTagRequest &request);

      /**
       * @summary Lists automatic allocation rules for review tasks.
       *
       * @param request ListTaskAssignRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskAssignRulesResponse
       */
      Models::ListTaskAssignRulesResponse listTaskAssignRulesWithOptions(const Models::ListTaskAssignRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists automatic allocation rules for review tasks.
       *
       * @param request ListTaskAssignRulesRequest
       * @return ListTaskAssignRulesResponse
       */
      Models::ListTaskAssignRulesResponse listTaskAssignRules(const Models::ListTaskAssignRulesRequest &request);

      /**
       * @summary Retrieves a list of users. Set the service endpoint to China (Hangzhou) (cn-hangzhou).
       *
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of users. Set the service endpoint to China (Hangzhou) (cn-hangzhou).
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary Lists warning configurations.
       *
       * @param request ListWarningConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWarningConfigResponse
       */
      Models::ListWarningConfigResponse listWarningConfigWithOptions(const Models::ListWarningConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists warning configurations.
       *
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
       * @summary Frontend location: Task Management > Task Results > Batch Revoke. Apsara Stack URL: ip:port/api/job/RevertAssignedSession.json.
       *
       * @param request RevertAssignedSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevertAssignedSessionResponse
       */
      Models::RevertAssignedSessionResponse revertAssignedSessionWithOptions(const Models::RevertAssignedSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Frontend location: Task Management > Task Results > Batch Revoke. Apsara Stack URL: ip:port/api/job/RevertAssignedSession.json.
       *
       * @param request RevertAssignedSessionRequest
       * @return RevertAssignedSessionResponse
       */
      Models::RevertAssignedSessionResponse revertAssignedSession(const Models::RevertAssignedSessionRequest &request);

      /**
       * @deprecated OpenAPI RevertAssignedSessionGroup is deprecated
       *
       * @summary You can use this feature in the frontend console under Plan Management > Task Result > Session Group > Batch Revoke. The Apsara Stack URL for this operation is `ip:port/api/job/RevertAssignedSessionGroup.json`.
       *
       * @param request RevertAssignedSessionGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevertAssignedSessionGroupResponse
       */
      Models::RevertAssignedSessionGroupResponse revertAssignedSessionGroupWithOptions(const Models::RevertAssignedSessionGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI RevertAssignedSessionGroup is deprecated
       *
       * @summary You can use this feature in the frontend console under Plan Management > Task Result > Session Group > Batch Revoke. The Apsara Stack URL for this operation is `ip:port/api/job/RevertAssignedSessionGroup.json`.
       *
       * @param request RevertAssignedSessionGroupRequest
       * @return RevertAssignedSessionGroupResponse
       */
      Models::RevertAssignedSessionGroupResponse revertAssignedSessionGroup(const Models::RevertAssignedSessionGroupRequest &request);

      /**
       * @summary This operation calls a large model using the message protocol to generate a response. You can make calls using standard HTTP for a complete response or use Server-Sent Events (SSE) for a streaming response.
       *
       * @param tmpReq RunCompletionMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCompletionMessageResponse
       */
      FutureGenerator<Models::RunCompletionMessageResponse> runCompletionMessageWithSSE(const Models::RunCompletionMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation calls a large model using the message protocol to generate a response. You can make calls using standard HTTP for a complete response or use Server-Sent Events (SSE) for a streaming response.
       *
       * @param tmpReq RunCompletionMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCompletionMessageResponse
       */
      Models::RunCompletionMessageResponse runCompletionMessageWithOptions(const Models::RunCompletionMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation calls a large model using the message protocol to generate a response. You can make calls using standard HTTP for a complete response or use Server-Sent Events (SSE) for a streaming response.
       *
       * @param request RunCompletionMessageRequest
       * @return RunCompletionMessageResponse
       */
      Models::RunCompletionMessageResponse runCompletionMessage(const Models::RunCompletionMessageRequest &request);

      /**
       * @deprecated OpenAPI SaveConfigDataSet is deprecated
       *
       * @summary Saves the speaker role configuration for a dataset.
       *
       * @param request SaveConfigDataSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveConfigDataSetResponse
       */
      Models::SaveConfigDataSetResponse saveConfigDataSetWithOptions(const Models::SaveConfigDataSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI SaveConfigDataSet is deprecated
       *
       * @summary Saves the speaker role configuration for a dataset.
       *
       * @param request SaveConfigDataSetRequest
       * @return SaveConfigDataSetResponse
       */
      Models::SaveConfigDataSetResponse saveConfigDataSet(const Models::SaveConfigDataSetRequest &request);

      /**
       * @summary Submits a complaint.
       *
       * @param request SubmitComplaintRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitComplaintResponse
       */
      Models::SubmitComplaintResponse submitComplaintWithOptions(const Models::SubmitComplaintRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a complaint.
       *
       * @param request SubmitComplaintRequest
       * @return SubmitComplaintResponse
       */
      Models::SubmitComplaintResponse submitComplaint(const Models::SubmitComplaintRequest &request);

      /**
       * @summary Creates a speech recognition evaluation task. The service endpoint is China East 1 (Hangzhou) (cn-hangzhou).
       *
       * @param request SubmitPrecisionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitPrecisionTaskResponse
       */
      Models::SubmitPrecisionTaskResponse submitPrecisionTaskWithOptions(const Models::SubmitPrecisionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a speech recognition evaluation task. The service endpoint is China East 1 (Hangzhou) (cn-hangzhou).
       *
       * @param request SubmitPrecisionTaskRequest
       * @return SubmitPrecisionTaskResponse
       */
      Models::SubmitPrecisionTaskResponse submitPrecisionTask(const Models::SubmitPrecisionTaskRequest &request);

      /**
       * @summary Create a new dataset quality check task.
       *
       * @param request SubmitQualityCheckTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitQualityCheckTaskResponse
       */
      Models::SubmitQualityCheckTaskResponse submitQualityCheckTaskWithOptions(const Models::SubmitQualityCheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a new dataset quality check task.
       *
       * @param request SubmitQualityCheckTaskRequest
       * @return SubmitQualityCheckTaskResponse
       */
      Models::SubmitQualityCheckTaskResponse submitQualityCheckTask(const Models::SubmitQualityCheckTaskRequest &request);

      /**
       * @summary Save review results. This is only supported by the legacy Smart Conversation Analysis.
       *
       * @description You can manually review files after quality inspection. After completing the review, call this API to save the review results. This involves manually reviewing rules identified by the system as hits to determine if they are true hits or false positives. Refer to the file review feature on the console page. For more information, see [File Review](https://help.aliyun.com/document_detail/139653.html#h2-u6587u4EF6u590Du68385).
       *
       * @param request SubmitReviewInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitReviewInfoResponse
       */
      Models::SubmitReviewInfoResponse submitReviewInfoWithOptions(const Models::SubmitReviewInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Save review results. This is only supported by the legacy Smart Conversation Analysis.
       *
       * @description You can manually review files after quality inspection. After completing the review, call this API to save the review results. This involves manually reviewing rules identified by the system as hits to determine if they are true hits or false positives. Refer to the file review feature on the console page. For more information, see [File Review](https://help.aliyun.com/document_detail/139653.html#h2-u6587u4EF6u590Du68385).
       *
       * @param request SubmitReviewInfoRequest
       * @return SubmitReviewInfoResponse
       */
      Models::SubmitReviewInfoResponse submitReviewInfo(const Models::SubmitReviewInfoRequest &request);

      /**
       * @summary Review quality inspection results
       *
       * @param request SubmitReviewInfoV4Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitReviewInfoV4Response
       */
      Models::SubmitReviewInfoV4Response submitReviewInfoV4WithOptions(const Models::SubmitReviewInfoV4Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Review quality inspection results
       *
       * @param request SubmitReviewInfoV4Request
       * @return SubmitReviewInfoV4Response
       */
      Models::SubmitReviewInfoV4Response submitReviewInfoV4(const Models::SubmitReviewInfoV4Request &request);

      /**
       * @summary Perform real-time quality inspection for hotlines.
       *
       * @description Real-time hotline quality inspection transcribes spoken dialogue into text during a call. It sends the text to the Smart Conversation Analysis system for real-time quality inspection to detect potential issues or risks. You can display the dialogue text and inspection results in real time on the customer service representative\\"s workbench (a third-party system). This differs from offline quality inspection, which uses UploadAudioData for inspection or dataset inspection. For details, see the developer guide. Offline quality inspection occurs after the call ends and the recording file is generated.
       * **Usage Flow**
       * You can implement real-time transcription of audio streams to text during calls, or use Alibaba Cloud Call Center (CC) directly. CC integrates deeply with Smart Conversation Analysis, enabling real-time quality inspection during calls without API integration.
       * If you implement audio-to-text conversion yourself, invoke the SyncQualityCheck API for real-time quality inspection after a speaker finishes a sentence and generates dialogue text. This returns the inspection result for that sentence synchronously.
       * You should include skill group information when uploading data. Then, you can use the Call Center Quality Inspection - Configuration Management feature to configure different quality inspection rules for calls from different skill groups.
       * After the call ends, you can store the recording file on a storage server accessible over the public network. You can invoke the recording information maintenance API: UpdateSyncQualityCheckData. You can submit the recording name, recording file URL, and other details to the Smart Conversation Analysis service. This lets quality inspectors play back the recording during review.
       * After the call ends, you can view the quality inspection results in Call Center Quality Inspection - Result Display - Real-time Quality Inspection Results. You can also invoke the real-time quality inspection result query API: GetSyncResult to retrieve the results. You can use Score Dashboard - Real-time Dashboard to view data charts for customer service representatives, skill groups, and scoring items.
       * **Full-Text Quality Inspection**
       * Quality inspection rules include dozens of operators. Some operators require dialogue context (multi-turn conversations between customer service representatives and customers) for analysis. However, real-time quality inspection occurs during a call and typically uses text from only one sentence spoken by a single speaker. Some operators are not suitable for real-time quality inspection. Therefore, quality inspection rules are divided into real-time quality inspection rules and full-text quality inspection rules:
       * **Real-time quality inspection rules**: Rules used for real-time quality inspection. They support a limited number of operator types. They do not support specifying the detection range for operators.
       * **Full-text quality inspection rules**: Rules used for offline quality inspection. They support all operator types. They support custom detection ranges for operators.
       * For calls that underwent real-time quality inspection, you can apply full-text quality inspection rules to the complete dialogue text after the call ends. To enable full-text quality inspection after real-time inspection, see the full-text quality inspection description in Call Center Quality Inspection - Configuration Management.
       *
       * @param request SyncQualityCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncQualityCheckResponse
       */
      Models::SyncQualityCheckResponse syncQualityCheckWithOptions(const Models::SyncQualityCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Perform real-time quality inspection for hotlines.
       *
       * @description Real-time hotline quality inspection transcribes spoken dialogue into text during a call. It sends the text to the Smart Conversation Analysis system for real-time quality inspection to detect potential issues or risks. You can display the dialogue text and inspection results in real time on the customer service representative\\"s workbench (a third-party system). This differs from offline quality inspection, which uses UploadAudioData for inspection or dataset inspection. For details, see the developer guide. Offline quality inspection occurs after the call ends and the recording file is generated.
       * **Usage Flow**
       * You can implement real-time transcription of audio streams to text during calls, or use Alibaba Cloud Call Center (CC) directly. CC integrates deeply with Smart Conversation Analysis, enabling real-time quality inspection during calls without API integration.
       * If you implement audio-to-text conversion yourself, invoke the SyncQualityCheck API for real-time quality inspection after a speaker finishes a sentence and generates dialogue text. This returns the inspection result for that sentence synchronously.
       * You should include skill group information when uploading data. Then, you can use the Call Center Quality Inspection - Configuration Management feature to configure different quality inspection rules for calls from different skill groups.
       * After the call ends, you can store the recording file on a storage server accessible over the public network. You can invoke the recording information maintenance API: UpdateSyncQualityCheckData. You can submit the recording name, recording file URL, and other details to the Smart Conversation Analysis service. This lets quality inspectors play back the recording during review.
       * After the call ends, you can view the quality inspection results in Call Center Quality Inspection - Result Display - Real-time Quality Inspection Results. You can also invoke the real-time quality inspection result query API: GetSyncResult to retrieve the results. You can use Score Dashboard - Real-time Dashboard to view data charts for customer service representatives, skill groups, and scoring items.
       * **Full-Text Quality Inspection**
       * Quality inspection rules include dozens of operators. Some operators require dialogue context (multi-turn conversations between customer service representatives and customers) for analysis. However, real-time quality inspection occurs during a call and typically uses text from only one sentence spoken by a single speaker. Some operators are not suitable for real-time quality inspection. Therefore, quality inspection rules are divided into real-time quality inspection rules and full-text quality inspection rules:
       * **Real-time quality inspection rules**: Rules used for real-time quality inspection. They support a limited number of operator types. They do not support specifying the detection range for operators.
       * **Full-text quality inspection rules**: Rules used for offline quality inspection. They support all operator types. They support custom detection ranges for operators.
       * For calls that underwent real-time quality inspection, you can apply full-text quality inspection rules to the complete dialogue text after the call ends. To enable full-text quality inspection after real-time inspection, see the full-text quality inspection description in Call Center Quality Inspection - Configuration Management.
       *
       * @param request SyncQualityCheckRequest
       * @return SyncQualityCheckResponse
       */
      Models::SyncQualityCheckResponse syncQualityCheck(const Models::SyncQualityCheckRequest &request);

      /**
       * @summary Frontend location: Quality Check Rule Configuration > Test. Apsara Stack URL: http://<ip>:<port>/api/client/TestRule.json.
       *
       * @param request TestRuleV4Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return TestRuleV4Response
       */
      Models::TestRuleV4Response testRuleV4WithOptions(const Models::TestRuleV4Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Frontend location: Quality Check Rule Configuration > Test. Apsara Stack URL: http://<ip>:<port>/api/client/TestRule.json.
       *
       * @param request TestRuleV4Request
       * @return TestRuleV4Response
       */
      Models::TestRuleV4Response testRuleV4(const Models::TestRuleV4Request &request);

      /**
       * @summary Modifies an agent.
       *
       * @param request UpdateAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentResponse
       */
      Models::UpdateAgentResponse updateAgentWithOptions(const Models::UpdateAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an agent.
       *
       * @param request UpdateAgentRequest
       * @return UpdateAgentResponse
       */
      Models::UpdateAgentResponse updateAgent(const Models::UpdateAgentRequest &request);

      /**
       * @summary Updates the hotword vocabulary.
       *
       * @param request UpdateAsrVocabRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAsrVocabResponse
       */
      Models::UpdateAsrVocabResponse updateAsrVocabWithOptions(const Models::UpdateAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the hotword vocabulary.
       *
       * @param request UpdateAsrVocabRequest
       * @return UpdateAsrVocabResponse
       */
      Models::UpdateAsrVocabResponse updateAsrVocab(const Models::UpdateAsrVocabRequest &request);

      /**
       * @summary You can access this operation from the frontend by navigating to Plan Management > Create Quality Inspection Task or Edit > Edit icon next to the quality inspection dimension name. The Apsara Stack endpoint is ip:port/api/qcs/UpdateCheckTypeToScheme.json.
       *
       * @param request UpdateCheckTypeToSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCheckTypeToSchemeResponse
       */
      Models::UpdateCheckTypeToSchemeResponse updateCheckTypeToSchemeWithOptions(const Models::UpdateCheckTypeToSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can access this operation from the frontend by navigating to Plan Management > Create Quality Inspection Task or Edit > Edit icon next to the quality inspection dimension name. The Apsara Stack endpoint is ip:port/api/qcs/UpdateCheckTypeToScheme.json.
       *
       * @param request UpdateCheckTypeToSchemeRequest
       * @return UpdateCheckTypeToSchemeResponse
       */
      Models::UpdateCheckTypeToSchemeResponse updateCheckTypeToScheme(const Models::UpdateCheckTypeToSchemeRequest &request);

      /**
       * @summary Update session recording data (third-party business fields) to facilitate statistics and queries across more business dimensions.
       *
       * @param request UpdateQualityCheckDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQualityCheckDataResponse
       */
      Models::UpdateQualityCheckDataResponse updateQualityCheckDataWithOptions(const Models::UpdateQualityCheckDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update session recording data (third-party business fields) to facilitate statistics and queries across more business dimensions.
       *
       * @param request UpdateQualityCheckDataRequest
       * @return UpdateQualityCheckDataResponse
       */
      Models::UpdateQualityCheckDataResponse updateQualityCheckData(const Models::UpdateQualityCheckDataRequest &request);

      /**
       * @summary Updates a quality check scheme.
       *
       * @param request UpdateQualityCheckSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQualityCheckSchemeResponse
       */
      Models::UpdateQualityCheckSchemeResponse updateQualityCheckSchemeWithOptions(const Models::UpdateQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a quality check scheme.
       *
       * @param request UpdateQualityCheckSchemeRequest
       * @return UpdateQualityCheckSchemeResponse
       */
      Models::UpdateQualityCheckSchemeResponse updateQualityCheckScheme(const Models::UpdateQualityCheckSchemeRequest &request);

      /**
       * @deprecated OpenAPI UpdateRule is deprecated, please use Qualitycheck::2019-01-15::UpdateRuleV4 instead.
       *
       * @summary Update rule information.
       *
       * @description > Update an existing rule. You can modify its conditions and operators as needed. The rule ID (rid) remains unchanged, but condition IDs and operator IDs may change.
       *
       * @param request UpdateRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRuleResponse
       */
      Models::UpdateRuleResponse updateRuleWithOptions(const Models::UpdateRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdateRule is deprecated, please use Qualitycheck::2019-01-15::UpdateRuleV4 instead.
       *
       * @summary Update rule information.
       *
       * @description > Update an existing rule. You can modify its conditions and operators as needed. The rule ID (rid) remains unchanged, but condition IDs and operator IDs may change.
       *
       * @param request UpdateRuleRequest
       * @return UpdateRuleResponse
       */
      Models::UpdateRuleResponse updateRule(const Models::UpdateRuleRequest &request);

      /**
       * @deprecated OpenAPI UpdateRuleById is deprecated, please use Qualitycheck::2019-01-15::UpdateRuleV4 instead.
       *
       * @summary This API maps to the frontend function location: Quality Inspection Rule Configuration - Create & Update. The Apsara Stack URL is: ip:port/api/client/UpdateRuleById.json.
       *
       * @param request UpdateRuleByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRuleByIdResponse
       */
      Models::UpdateRuleByIdResponse updateRuleByIdWithOptions(const Models::UpdateRuleByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdateRuleById is deprecated, please use Qualitycheck::2019-01-15::UpdateRuleV4 instead.
       *
       * @summary This API maps to the frontend function location: Quality Inspection Rule Configuration - Create & Update. The Apsara Stack URL is: ip:port/api/client/UpdateRuleById.json.
       *
       * @param request UpdateRuleByIdRequest
       * @return UpdateRuleByIdResponse
       */
      Models::UpdateRuleByIdResponse updateRuleById(const Models::UpdateRuleByIdRequest &request);

      /**
       * @summary Frontend location: Quality Check Plan Management > Create or edit a quality check task > Associate quality check rules. Apsara Stack URL: ip:port/api/qcs/UpdateRuleToScheme.json.
       *
       * @param request UpdateRuleToSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRuleToSchemeResponse
       */
      Models::UpdateRuleToSchemeResponse updateRuleToSchemeWithOptions(const Models::UpdateRuleToSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Frontend location: Quality Check Plan Management > Create or edit a quality check task > Associate quality check rules. Apsara Stack URL: ip:port/api/qcs/UpdateRuleToScheme.json.
       *
       * @param request UpdateRuleToSchemeRequest
       * @return UpdateRuleToSchemeResponse
       */
      Models::UpdateRuleToSchemeResponse updateRuleToScheme(const Models::UpdateRuleToSchemeRequest &request);

      /**
       * @summary Corresponding frontend feature location: Rule Configuration - Update. Apsara Stack URL: ip:port/api/client/UpdateRuleById.json.
       *
       * @param request UpdateRuleV4Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRuleV4Response
       */
      Models::UpdateRuleV4Response updateRuleV4WithOptions(const Models::UpdateRuleV4Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Corresponding frontend feature location: Rule Configuration - Update. Apsara Stack URL: ip:port/api/client/UpdateRuleById.json.
       *
       * @param request UpdateRuleV4Request
       * @return UpdateRuleV4Response
       */
      Models::UpdateRuleV4Response updateRuleV4(const Models::UpdateRuleV4Request &request);

      /**
       * @summary Frontend path: Task Management > Edit any data on the right. Apsara Stack URL: ip:port/api/task/UpdateSchemeTaskConfig.json.
       *
       * @description Updates quality inspection task information.
       *
       * @param request UpdateSchemeTaskConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSchemeTaskConfigResponse
       */
      Models::UpdateSchemeTaskConfigResponse updateSchemeTaskConfigWithOptions(const Models::UpdateSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Frontend path: Task Management > Edit any data on the right. Apsara Stack URL: ip:port/api/task/UpdateSchemeTaskConfig.json.
       *
       * @description Updates quality inspection task information.
       *
       * @param request UpdateSchemeTaskConfigRequest
       * @return UpdateSchemeTaskConfigResponse
       */
      Models::UpdateSchemeTaskConfigResponse updateSchemeTaskConfig(const Models::UpdateSchemeTaskConfigRequest &request);

      /**
       * @deprecated OpenAPI UpdateSkillGroupConfig is deprecated
       *
       * @summary You can call UpdateSkillGroupConfig to update a configuration.
       *
       * @param request UpdateSkillGroupConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillGroupConfigResponse
       */
      Models::UpdateSkillGroupConfigResponse updateSkillGroupConfigWithOptions(const Models::UpdateSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdateSkillGroupConfig is deprecated
       *
       * @summary You can call UpdateSkillGroupConfig to update a configuration.
       *
       * @param request UpdateSkillGroupConfigRequest
       * @return UpdateSkillGroupConfigResponse
       */
      Models::UpdateSkillGroupConfigResponse updateSkillGroupConfig(const Models::UpdateSkillGroupConfigRequest &request);

      /**
       * @summary Maintain the recording information after real-time quality inspection is completed, which is used to play back the recording during review. After the recording information is maintained, the task status will change to Succeeded.
       *
       * @param request UpdateSyncQualityCheckDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSyncQualityCheckDataResponse
       */
      Models::UpdateSyncQualityCheckDataResponse updateSyncQualityCheckDataWithOptions(const Models::UpdateSyncQualityCheckDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Maintain the recording information after real-time quality inspection is completed, which is used to play back the recording during review. After the recording information is maintained, the task status will change to Succeeded.
       *
       * @param request UpdateSyncQualityCheckDataRequest
       * @return UpdateSyncQualityCheckDataResponse
       */
      Models::UpdateSyncQualityCheckDataResponse updateSyncQualityCheckData(const Models::UpdateSyncQualityCheckDataRequest &request);

      /**
       * @summary Updates a label node.
       *
       * @param request UpdateTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTagResponse
       */
      Models::UpdateTagResponse updateTagWithOptions(const Models::UpdateTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a label node.
       *
       * @param request UpdateTagRequest
       * @return UpdateTagResponse
       */
      Models::UpdateTagResponse updateTag(const Models::UpdateTagRequest &request);

      /**
       * @summary Update the automatic allocation rule for quality review tasks.
       *
       * @param request UpdateTaskAssignRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskAssignRuleResponse
       */
      Models::UpdateTaskAssignRuleResponse updateTaskAssignRuleWithOptions(const Models::UpdateTaskAssignRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the automatic allocation rule for quality review tasks.
       *
       * @param request UpdateTaskAssignRuleRequest
       * @return UpdateTaskAssignRuleResponse
       */
      Models::UpdateTaskAssignRuleResponse updateTaskAssignRule(const Models::UpdateTaskAssignRuleRequest &request);

      /**
       * @summary Update users by modifying their roles in batches.
       *
       * @description When you update users, you can modify only their roles. You cannot modify other account information because all Alibaba Cloud products use a unified account management system. Smart Conversation Analysis uses these accounts. To modify account information, go to [Resource Access Management (RAM)](https://ram.console.aliyun.com/).
       *
       * @param request UpdateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const Models::UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update users by modifying their roles in batches.
       *
       * @description When you update users, you can modify only their roles. You cannot modify other account information because all Alibaba Cloud products use a unified account management system. Smart Conversation Analysis uses these accounts. To modify account information, go to [Resource Access Management (RAM)](https://ram.console.aliyun.com/).
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const Models::UpdateUserRequest &request);

      /**
       * @summary Updates the warning configuration.
       *
       * @param request UpdateWarningConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWarningConfigResponse
       */
      Models::UpdateWarningConfigResponse updateWarningConfigWithOptions(const Models::UpdateWarningConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the warning configuration.
       *
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
       * @summary Uploads offline audio data—such as recorded call session files—for quality inspection. This operation supports two call center agent scenarios.
       * Scenario 1: Native integration with Alibaba Cloud Call Center (CC). No development is required. You can push call data to Smart Conversation Analysis (SCA) with a single click.
       * Scenario 2: Integration with your own call center system. Each time a recording is generated, the call center pushes it to SCA for analysis.
       *
       * @description ### Process description
       * The process is as follows: An API call uploads the audio file for quality inspection → The audio file is converted to text → The transcribed text is separated by speaker role (agent and customer), based on the specified channel separation method → The role-separated text is analyzed using quality inspection rules → Quality inspection completes.
       * ### Task execution efficiency
       * Task execution speed depends on how quickly the audio file is transcribed. A 5-minute audio file is typically transcribed in about 2 minutes. However, if the transcription service queue is long, a waiting period occurs. Transcription usually completes within 6 hours, except when large volumes of data are uploaded simultaneously—more than 500 hours of audio within 30 minutes. After transcription, quality inspection analysis completes in milliseconds.
       * ### Audio file URL requirements
       * - Supports single-channel or dual-channel audio files in WAV or MP3 format. File size must be less than 512 MB.
       * - The URL must be accessible over HTTP. Local files are not supported. The audio file must have public access permissions.
       * - The URL must use a domain name, not an IP address. The URL cannot contain spaces or Chinese characters.
       * - After transcription, the system deletes the downloaded audio file. No copy of the recording is retained.
       * - If your audio URL has an expiration period—such as a presigned URL for an audio file stored in Alibaba Cloud Object Storage Service (OSS)—set the validity period to at least 12 hours. Ideally, set it to 24 hours. Because transcription may involve queuing, the audio file is downloaded only when transcription begins. A longer validity period prevents the URL from expiring before download starts.
       * - After quality inspection completes, the provided URL is used for playback when you review the file in the console. Ensure the URL remains valid long-term. Otherwise, audio playback fails.
       * ### Role separation
       * After transcription, the system automatically separates the text into two speaker roles but cannot determine which role corresponds to the agent and which to the customer. You must define rules for role separation. Role separation accuracy is critical because many quality inspection rules apply to a specific role—for example, checking only agent or only customer utterances. Incorrect role separation significantly reduces quality inspection accuracy.
       * Audio files are typically either single-channel (mono) or dual-channel (stereo):
       * - Single-channel recording: The voices of the agent and customer are mixed on one channel. After transcription, the system uses a built-in algorithm to separate dialogue into two roles. You can provide a list of keywords commonly spoken by agents. The system analyzes the transcribed text sentence by sentence. When a sentence contains a keyword, that speaker is identified as the agent, and the other speaker is identified as the customer. For more information, see the recognizeRoleDataSetId and serviceChannelKeywords request parameters. Because conversations can be unpredictable—for example, speakers may talk over each other—role separation for single-channel recordings cannot achieve 100% accuracy. We strongly recommend saving recordings as dual-channel audio.
       * - Dual-channel recording: The voices of the agent and customer are stored on separate channels. Even if speakers talk over each other, transcription accurately distinguishes between them. Specify the agent and customer channels using the serviceChannel and clientChannel request parameters.
       * ### Retrieve quality inspection results
       * Because audio analysis is asynchronous, you must retrieve results asynchronously. You can retrieve results in one of the following three ways:
       * - Message notification: For more information, see [Message Queue](https://help.aliyun.com/document_detail/213237.html). After you receive a message, call the GetResult operation to retrieve detailed results. (Recommended)
       * - Callback: Specify a callbackUrl in the request parameters. The system initiates a callback after the task completes. After you receive the callback, call the GetResult operation to retrieve detailed results.
       * - Polling: The operation returns a task ID (taskId). Use the taskId to poll the getResult operation and retrieve the result asynchronously. Check the `status` parameter in the response to determine whether the task is complete. We recommend a polling interval of 30 seconds or longer because analysis typically completes within a few minutes. (Not recommended)
       *
       * @param request UploadAudioDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadAudioDataResponse
       */
      Models::UploadAudioDataResponse uploadAudioDataWithOptions(const Models::UploadAudioDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads offline audio data—such as recorded call session files—for quality inspection. This operation supports two call center agent scenarios.
       * Scenario 1: Native integration with Alibaba Cloud Call Center (CC). No development is required. You can push call data to Smart Conversation Analysis (SCA) with a single click.
       * Scenario 2: Integration with your own call center system. Each time a recording is generated, the call center pushes it to SCA for analysis.
       *
       * @description ### Process description
       * The process is as follows: An API call uploads the audio file for quality inspection → The audio file is converted to text → The transcribed text is separated by speaker role (agent and customer), based on the specified channel separation method → The role-separated text is analyzed using quality inspection rules → Quality inspection completes.
       * ### Task execution efficiency
       * Task execution speed depends on how quickly the audio file is transcribed. A 5-minute audio file is typically transcribed in about 2 minutes. However, if the transcription service queue is long, a waiting period occurs. Transcription usually completes within 6 hours, except when large volumes of data are uploaded simultaneously—more than 500 hours of audio within 30 minutes. After transcription, quality inspection analysis completes in milliseconds.
       * ### Audio file URL requirements
       * - Supports single-channel or dual-channel audio files in WAV or MP3 format. File size must be less than 512 MB.
       * - The URL must be accessible over HTTP. Local files are not supported. The audio file must have public access permissions.
       * - The URL must use a domain name, not an IP address. The URL cannot contain spaces or Chinese characters.
       * - After transcription, the system deletes the downloaded audio file. No copy of the recording is retained.
       * - If your audio URL has an expiration period—such as a presigned URL for an audio file stored in Alibaba Cloud Object Storage Service (OSS)—set the validity period to at least 12 hours. Ideally, set it to 24 hours. Because transcription may involve queuing, the audio file is downloaded only when transcription begins. A longer validity period prevents the URL from expiring before download starts.
       * - After quality inspection completes, the provided URL is used for playback when you review the file in the console. Ensure the URL remains valid long-term. Otherwise, audio playback fails.
       * ### Role separation
       * After transcription, the system automatically separates the text into two speaker roles but cannot determine which role corresponds to the agent and which to the customer. You must define rules for role separation. Role separation accuracy is critical because many quality inspection rules apply to a specific role—for example, checking only agent or only customer utterances. Incorrect role separation significantly reduces quality inspection accuracy.
       * Audio files are typically either single-channel (mono) or dual-channel (stereo):
       * - Single-channel recording: The voices of the agent and customer are mixed on one channel. After transcription, the system uses a built-in algorithm to separate dialogue into two roles. You can provide a list of keywords commonly spoken by agents. The system analyzes the transcribed text sentence by sentence. When a sentence contains a keyword, that speaker is identified as the agent, and the other speaker is identified as the customer. For more information, see the recognizeRoleDataSetId and serviceChannelKeywords request parameters. Because conversations can be unpredictable—for example, speakers may talk over each other—role separation for single-channel recordings cannot achieve 100% accuracy. We strongly recommend saving recordings as dual-channel audio.
       * - Dual-channel recording: The voices of the agent and customer are stored on separate channels. Even if speakers talk over each other, transcription accurately distinguishes between them. Specify the agent and customer channels using the serviceChannel and clientChannel request parameters.
       * ### Retrieve quality inspection results
       * Because audio analysis is asynchronous, you must retrieve results asynchronously. You can retrieve results in one of the following three ways:
       * - Message notification: For more information, see [Message Queue](https://help.aliyun.com/document_detail/213237.html). After you receive a message, call the GetResult operation to retrieve detailed results. (Recommended)
       * - Callback: Specify a callbackUrl in the request parameters. The system initiates a callback after the task completes. After you receive the callback, call the GetResult operation to retrieve detailed results.
       * - Polling: The operation returns a task ID (taskId). Use the taskId to poll the getResult operation and retrieve the result asynchronously. Check the `status` parameter in the response to determine whether the task is complete. We recommend a polling interval of 30 seconds or longer because analysis typically completes within a few minutes. (Not recommended)
       *
       * @param request UploadAudioDataRequest
       * @return UploadAudioDataResponse
       */
      Models::UploadAudioDataResponse uploadAudioData(const Models::UploadAudioDataRequest &request);

      /**
       * @deprecated OpenAPI UploadData is deprecated, please use Qualitycheck::2019-01-15::UploadDataV4 instead.
       *
       * @summary Upload offline plain text quality inspection data (plain text sessions). This applies to online agent scenarios. Use the UploadDataV4 API. Differences between UploadDataV4 and UploadData include the following: UploadDataV4 supports only POST requests, and it supports longer JsonStr values.
       *
       * @description You can call UploadData.json to upload text-based quality inspection data. Text typically originates from online customer service interactions or tickets. The API returns a task ID. You can retrieve results in one of three ways:
       * - Message notification: For details, see [message queues](https://help.aliyun.com/document_detail/213237.html). After you receive a message, call the GetResult API to retrieve detailed results. (Recommended)
       * - Callback: Specify a callback URL in your request parameters. After the task completes, the system sends a callback to that URL. Then call the GetResult API to retrieve detailed results.
       * - Polling: Use the returned task ID to poll the GetResult API asynchronously. Check whether the status field in the response indicates completion. (Not recommended)
       *
       * @param request UploadDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadDataResponse
       */
      Models::UploadDataResponse uploadDataWithOptions(const Models::UploadDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UploadData is deprecated, please use Qualitycheck::2019-01-15::UploadDataV4 instead.
       *
       * @summary Upload offline plain text quality inspection data (plain text sessions). This applies to online agent scenarios. Use the UploadDataV4 API. Differences between UploadDataV4 and UploadData include the following: UploadDataV4 supports only POST requests, and it supports longer JsonStr values.
       *
       * @description You can call UploadData.json to upload text-based quality inspection data. Text typically originates from online customer service interactions or tickets. The API returns a task ID. You can retrieve results in one of three ways:
       * - Message notification: For details, see [message queues](https://help.aliyun.com/document_detail/213237.html). After you receive a message, call the GetResult API to retrieve detailed results. (Recommended)
       * - Callback: Specify a callback URL in your request parameters. After the task completes, the system sends a callback to that URL. Then call the GetResult API to retrieve detailed results.
       * - Polling: Use the returned task ID to poll the GetResult API asynchronously. Check whether the status field in the response indicates completion. (Not recommended)
       *
       * @param request UploadDataRequest
       * @return UploadDataResponse
       */
      Models::UploadDataResponse uploadData(const Models::UploadDataRequest &request);

      /**
       * @summary Real-time text quality check
       *
       * @description This API pushes text data to SCA for real-time quality inspection based on specified rules and synchronously returns the analysis results. Unlike post-call quality inspection, which requires uploading the full transcript after a dialogue ends, real-time quality inspection offers lower latency by analyzing text immediately after a speaker completes one or more utterances.
       * - If you push a single utterance from one speaker, some rule operators may fail because the required dialogue context is missing. Examples include the context repetition check, speech interruption check, and call mute check.
       * - SCA returns analysis results synchronously and does not save call records, so you cannot query the results later via an API.
       *
       * @param request UploadDataSyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadDataSyncResponse
       */
      Models::UploadDataSyncResponse uploadDataSyncWithOptions(const Models::UploadDataSyncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Real-time text quality check
       *
       * @description This API pushes text data to SCA for real-time quality inspection based on specified rules and synchronously returns the analysis results. Unlike post-call quality inspection, which requires uploading the full transcript after a dialogue ends, real-time quality inspection offers lower latency by analyzing text immediately after a speaker completes one or more utterances.
       * - If you push a single utterance from one speaker, some rule operators may fail because the required dialogue context is missing. Examples include the context repetition check, speech interruption check, and call mute check.
       * - SCA returns analysis results synchronously and does not save call records, so you cannot query the results later via an API.
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
       * @summary Uploads offline plain text conversation data for quality inspection in online agent scenarios. We recommend that you use the UploadDataV4 API. Compared to the UploadData API, UploadDataV4 supports only POST requests and allows a longer JsonStr.
       *
       * @description You can call the UploadData.json operation to upload text data for quality inspection. The text usually comes from sources such as online customer service and tickets. The API returns a task ID. You can retrieve the results in one of the following three ways:
       * - Message notifications: After you receive a notification, call the GetResult API to obtain the detailed results. For more information, see [Message Queue](https://help.aliyun.com/document_detail/213237.html). (Recommended)
       * - Callbacks: Specify a callbackUrl in the request parameters. The system automatically initiates a callback after the task is complete. After you receive the callback, call the GetResult API to retrieve the detailed results.
       * - Polling: Use the task ID returned by this API to poll the GetResult API and asynchronously retrieve the results. Check the status in the response to determine whether the task is complete. (Not recommended)
       *
       * @param request UploadDataV4Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadDataV4Response
       */
      Models::UploadDataV4Response uploadDataV4WithOptions(const Models::UploadDataV4Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads offline plain text conversation data for quality inspection in online agent scenarios. We recommend that you use the UploadDataV4 API. Compared to the UploadData API, UploadDataV4 supports only POST requests and allows a longer JsonStr.
       *
       * @description You can call the UploadData.json operation to upload text data for quality inspection. The text usually comes from sources such as online customer service and tickets. The API returns a task ID. You can retrieve the results in one of the following three ways:
       * - Message notifications: After you receive a notification, call the GetResult API to obtain the detailed results. For more information, see [Message Queue](https://help.aliyun.com/document_detail/213237.html). (Recommended)
       * - Callbacks: Specify a callbackUrl in the request parameters. The system automatically initiates a callback after the task is complete. After you receive the callback, call the GetResult API to retrieve the detailed results.
       * - Polling: Use the task ID returned by this API to poll the GetResult API and asynchronously retrieve the results. Check the status in the response to determine whether the task is complete. (Not recommended)
       *
       * @param request UploadDataV4Request
       * @return UploadDataV4Response
       */
      Models::UploadDataV4Response uploadDataV4(const Models::UploadDataV4Request &request);

      /**
       * @summary Creates a rule. You can use this operation to provide your own rule editing interface.
       *
       * @description > For more information, see [Rule configuration](https://help.aliyun.com/document_detail/213225.html).
       *
       * @param request UploadRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadRuleResponse
       */
      Models::UploadRuleResponse uploadRuleWithOptions(const Models::UploadRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a rule. You can use this operation to provide your own rule editing interface.
       *
       * @description > For more information, see [Rule configuration](https://help.aliyun.com/document_detail/213225.html).
       *
       * @param request UploadRuleRequest
       * @return UploadRuleResponse
       */
      Models::UploadRuleResponse uploadRule(const Models::UploadRuleRequest &request);

      /**
       * @summary Saves the verification result of a single file.
       *
       * @param request VerifyFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyFileResponse
       */
      Models::VerifyFileResponse verifyFileWithOptions(const Models::VerifyFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves the verification result of a single file.
       *
       * @param request VerifyFileRequest
       * @return VerifyFileResponse
       */
      Models::VerifyFileResponse verifyFile(const Models::VerifyFileRequest &request);

      /**
       * @summary Save the verification result for a single sentence.
       *
       * @param request VerifySentenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifySentenceResponse
       */
      Models::VerifySentenceResponse verifySentenceWithOptions(const Models::VerifySentenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Save the verification result for a single sentence.
       *
       * @param request VerifySentenceRequest
       * @return VerifySentenceResponse
       */
      Models::VerifySentenceResponse verifySentence(const Models::VerifySentenceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
