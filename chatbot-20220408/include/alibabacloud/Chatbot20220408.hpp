// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CHATBOT20220408_HPP_
#define ALIBABACLOUD_CHATBOT20220408_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Chatbot20220408Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Chatbot20220408.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 申请流式网关AccessToken
       *
       * @param request ApplyForStreamAccessTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyForStreamAccessTokenResponse
       */
      Models::ApplyForStreamAccessTokenResponse applyForStreamAccessTokenWithOptions(const Models::ApplyForStreamAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请流式网关AccessToken
       *
       * @param request ApplyForStreamAccessTokenRequest
       * @return ApplyForStreamAccessTokenResponse
       */
      Models::ApplyForStreamAccessTokenResponse applyForStreamAccessToken(const Models::ApplyForStreamAccessTokenRequest &request);

      /**
       * @summary 会话-联想API
       *
       * @param tmpReq AssociateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateResponse
       */
      Models::AssociateResponse associateWithOptions(const Models::AssociateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 会话-联想API
       *
       * @param request AssociateRequest
       * @return AssociateResponse
       */
      Models::AssociateResponse associate(const Models::AssociateRequest &request);

      /**
       * @summary 获取欢迎语
       *
       * @param request BeginSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BeginSessionResponse
       */
      Models::BeginSessionResponse beginSessionWithOptions(const Models::BeginSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取欢迎语
       *
       * @param request BeginSessionRequest
       * @return BeginSessionResponse
       */
      Models::BeginSessionResponse beginSession(const Models::BeginSessionRequest &request);

      /**
       * @summary 取消机器人发布
       *
       * @param request CancelInstancePublishTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelInstancePublishTaskResponse
       */
      Models::CancelInstancePublishTaskResponse cancelInstancePublishTaskWithOptions(const Models::CancelInstancePublishTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消机器人发布
       *
       * @param request CancelInstancePublishTaskRequest
       * @return CancelInstancePublishTaskResponse
       */
      Models::CancelInstancePublishTaskResponse cancelInstancePublishTask(const Models::CancelInstancePublishTaskRequest &request);

      /**
       * @summary 取消发布任务
       *
       * @param request CancelPublishTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelPublishTaskResponse
       */
      Models::CancelPublishTaskResponse cancelPublishTaskWithOptions(const Models::CancelPublishTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消发布任务
       *
       * @param request CancelPublishTaskRequest
       * @return CancelPublishTaskResponse
       */
      Models::CancelPublishTaskResponse cancelPublishTask(const Models::CancelPublishTaskRequest &request);

      /**
       * @summary 会话API
       *
       * @param tmpReq ChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatResponse
       */
      Models::ChatResponse chatWithOptions(const Models::ChatRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 会话API
       *
       * @param request ChatRequest
       * @return ChatResponse
       */
      Models::ChatResponse chat(const Models::ChatRequest &request);

      /**
       * @summary 继续机器人发布
       *
       * @param request ContinueInstancePublishTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContinueInstancePublishTaskResponse
       */
      Models::ContinueInstancePublishTaskResponse continueInstancePublishTaskWithOptions(const Models::ContinueInstancePublishTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 继续机器人发布
       *
       * @param request ContinueInstancePublishTaskRequest
       * @return ContinueInstancePublishTaskResponse
       */
      Models::ContinueInstancePublishTaskResponse continueInstancePublishTask(const Models::ContinueInstancePublishTaskRequest &request);

      /**
       * @summary 新增类目
       *
       * @param request CreateCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCategoryResponse
       */
      Models::CreateCategoryResponse createCategoryWithOptions(const Models::CreateCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增类目
       *
       * @param request CreateCategoryRequest
       * @return CreateCategoryResponse
       */
      Models::CreateCategoryResponse createCategory(const Models::CreateCategoryRequest &request);

      /**
       * @summary 新建FAQ关联问
       *
       * @param request CreateConnQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConnQuestionResponse
       */
      Models::CreateConnQuestionResponse createConnQuestionWithOptions(const Models::CreateConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建FAQ关联问
       *
       * @param request CreateConnQuestionRequest
       * @return CreateConnQuestionResponse
       */
      Models::CreateConnQuestionResponse createConnQuestion(const Models::CreateConnQuestionRequest &request);

      /**
       * @summary 实体-创建
       *
       * @param request CreateDSEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDSEntityResponse
       */
      Models::CreateDSEntityResponse createDSEntityWithOptions(const Models::CreateDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实体-创建
       *
       * @param request CreateDSEntityRequest
       * @return CreateDSEntityResponse
       */
      Models::CreateDSEntityResponse createDSEntity(const Models::CreateDSEntityRequest &request);

      /**
       * @summary 实体成员-创建
       *
       * @param tmpReq CreateDSEntityValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDSEntityValueResponse
       */
      Models::CreateDSEntityValueResponse createDSEntityValueWithOptions(const Models::CreateDSEntityValueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实体成员-创建
       *
       * @param request CreateDSEntityValueRequest
       * @return CreateDSEntityValueResponse
       */
      Models::CreateDSEntityValueResponse createDSEntityValue(const Models::CreateDSEntityValueRequest &request);

      /**
       * @summary 创建文档
       *
       * @param tmpReq CreateDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDocResponse
       */
      Models::CreateDocResponse createDocWithOptions(const Models::CreateDocRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建文档
       *
       * @param request CreateDocRequest
       * @return CreateDocResponse
       */
      Models::CreateDocResponse createDoc(const Models::CreateDocRequest &request);

      /**
       * @summary 新建FAQ
       *
       * @param tmpReq CreateFaqRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFaqResponse
       */
      Models::CreateFaqResponse createFaqWithOptions(const Models::CreateFaqRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建FAQ
       *
       * @param request CreateFaqRequest
       * @return CreateFaqResponse
       */
      Models::CreateFaqResponse createFaq(const Models::CreateFaqRequest &request);

      /**
       * @summary 机器人-创建
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机器人-创建
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary 创建机器人发布任务
       *
       * @param request CreateInstancePublishTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstancePublishTaskResponse
       */
      Models::CreateInstancePublishTaskResponse createInstancePublishTaskWithOptions(const Models::CreateInstancePublishTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建机器人发布任务
       *
       * @param request CreateInstancePublishTaskRequest
       * @return CreateInstancePublishTaskResponse
       */
      Models::CreateInstancePublishTaskResponse createInstancePublishTask(const Models::CreateInstancePublishTaskRequest &request);

      /**
       * @summary 意图-创建
       *
       * @param tmpReq CreateIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIntentResponse
       */
      Models::CreateIntentResponse createIntentWithOptions(const Models::CreateIntentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 意图-创建
       *
       * @param request CreateIntentRequest
       * @return CreateIntentResponse
       */
      Models::CreateIntentResponse createIntent(const Models::CreateIntentRequest &request);

      /**
       * @summary 意图-LGF-创建
       *
       * @param tmpReq CreateLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLgfResponse
       */
      Models::CreateLgfResponse createLgfWithOptions(const Models::CreateLgfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 意图-LGF-创建
       *
       * @param request CreateLgfRequest
       * @return CreateLgfResponse
       */
      Models::CreateLgfResponse createLgf(const Models::CreateLgfRequest &request);

      /**
       * @summary 视角-创建
       *
       * @param request CreatePerspectiveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePerspectiveResponse
       */
      Models::CreatePerspectiveResponse createPerspectiveWithOptions(const Models::CreatePerspectiveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视角-创建
       *
       * @param request CreatePerspectiveRequest
       * @return CreatePerspectiveResponse
       */
      Models::CreatePerspectiveResponse createPerspective(const Models::CreatePerspectiveRequest &request);

      /**
       * @summary 创建发布任务
       *
       * @param tmpReq CreatePublishTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePublishTaskResponse
       */
      Models::CreatePublishTaskResponse createPublishTaskWithOptions(const Models::CreatePublishTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建发布任务
       *
       * @param request CreatePublishTaskRequest
       * @return CreatePublishTaskResponse
       */
      Models::CreatePublishTaskResponse createPublishTask(const Models::CreatePublishTaskRequest &request);

      /**
       * @summary 新建FAQ相似问
       *
       * @param request CreateSimQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSimQuestionResponse
       */
      Models::CreateSimQuestionResponse createSimQuestionWithOptions(const Models::CreateSimQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建FAQ相似问
       *
       * @param request CreateSimQuestionRequest
       * @return CreateSimQuestionResponse
       */
      Models::CreateSimQuestionResponse createSimQuestion(const Models::CreateSimQuestionRequest &request);

      /**
       * @summary 新建FAQ答案
       *
       * @param tmpReq CreateSolutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSolutionResponse
       */
      Models::CreateSolutionResponse createSolutionWithOptions(const Models::CreateSolutionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建FAQ答案
       *
       * @param request CreateSolutionRequest
       * @return CreateSolutionResponse
       */
      Models::CreateSolutionResponse createSolution(const Models::CreateSolutionRequest &request);

      /**
       * @summary 标签创建
       *
       * @param request CreateTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTagResponse
       */
      Models::CreateTagResponse createTagWithOptions(const Models::CreateTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 标签创建
       *
       * @param request CreateTagRequest
       * @return CreateTagResponse
       */
      Models::CreateTagResponse createTag(const Models::CreateTagRequest &request);

      /**
       * @summary 标签组创建
       *
       * @param request CreateTagGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTagGroupResponse
       */
      Models::CreateTagGroupResponse createTagGroupWithOptions(const Models::CreateTagGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 标签组创建
       *
       * @param request CreateTagGroupRequest
       * @return CreateTagGroupResponse
       */
      Models::CreateTagGroupResponse createTagGroup(const Models::CreateTagGroupRequest &request);

      /**
       * @summary 意图-话术-创建
       *
       * @param tmpReq CreateUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserSayResponse
       */
      Models::CreateUserSayResponse createUserSayWithOptions(const Models::CreateUserSayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 意图-话术-创建
       *
       * @param request CreateUserSayRequest
       * @return CreateUserSayResponse
       */
      Models::CreateUserSayResponse createUserSay(const Models::CreateUserSayRequest &request);

      /**
       * @summary 删除类目
       *
       * @param request DeleteCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCategoryResponse
       */
      Models::DeleteCategoryResponse deleteCategoryWithOptions(const Models::DeleteCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除类目
       *
       * @param request DeleteCategoryRequest
       * @return DeleteCategoryResponse
       */
      Models::DeleteCategoryResponse deleteCategory(const Models::DeleteCategoryRequest &request);

      /**
       * @summary 删除FAQ关联问
       *
       * @param request DeleteConnQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConnQuestionResponse
       */
      Models::DeleteConnQuestionResponse deleteConnQuestionWithOptions(const Models::DeleteConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除FAQ关联问
       *
       * @param request DeleteConnQuestionRequest
       * @return DeleteConnQuestionResponse
       */
      Models::DeleteConnQuestionResponse deleteConnQuestion(const Models::DeleteConnQuestionRequest &request);

      /**
       * @summary 实体-删除
       *
       * @param request DeleteDSEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDSEntityResponse
       */
      Models::DeleteDSEntityResponse deleteDSEntityWithOptions(const Models::DeleteDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实体-删除
       *
       * @param request DeleteDSEntityRequest
       * @return DeleteDSEntityResponse
       */
      Models::DeleteDSEntityResponse deleteDSEntity(const Models::DeleteDSEntityRequest &request);

      /**
       * @summary 实体成员-删除
       *
       * @param request DeleteDSEntityValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDSEntityValueResponse
       */
      Models::DeleteDSEntityValueResponse deleteDSEntityValueWithOptions(const Models::DeleteDSEntityValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实体成员-删除
       *
       * @param request DeleteDSEntityValueRequest
       * @return DeleteDSEntityValueResponse
       */
      Models::DeleteDSEntityValueResponse deleteDSEntityValue(const Models::DeleteDSEntityValueRequest &request);

      /**
       * @summary 文档删除
       *
       * @param request DeleteDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDocResponse
       */
      Models::DeleteDocResponse deleteDocWithOptions(const Models::DeleteDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档删除
       *
       * @param request DeleteDocRequest
       * @return DeleteDocResponse
       */
      Models::DeleteDocResponse deleteDoc(const Models::DeleteDocRequest &request);

      /**
       * @summary 删除FAQ，如果是已发布的知识，删除之后，变成已删除未发布，需要发布才能真正删除
       *
       * @param request DeleteFaqRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaqResponse
       */
      Models::DeleteFaqResponse deleteFaqWithOptions(const Models::DeleteFaqRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除FAQ，如果是已发布的知识，删除之后，变成已删除未发布，需要发布才能真正删除
       *
       * @param request DeleteFaqRequest
       * @return DeleteFaqResponse
       */
      Models::DeleteFaqResponse deleteFaq(const Models::DeleteFaqRequest &request);

      /**
       * @summary 机器人-删除
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机器人-删除
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary 意图-删除
       *
       * @param request DeleteIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIntentResponse
       */
      Models::DeleteIntentResponse deleteIntentWithOptions(const Models::DeleteIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 意图-删除
       *
       * @param request DeleteIntentRequest
       * @return DeleteIntentResponse
       */
      Models::DeleteIntentResponse deleteIntent(const Models::DeleteIntentRequest &request);

      /**
       * @summary 意图-LGF-删除
       *
       * @param request DeleteLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLgfResponse
       */
      Models::DeleteLgfResponse deleteLgfWithOptions(const Models::DeleteLgfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 意图-LGF-删除
       *
       * @param request DeleteLgfRequest
       * @return DeleteLgfResponse
       */
      Models::DeleteLgfResponse deleteLgf(const Models::DeleteLgfRequest &request);

      /**
       * @summary 视角-删除
       *
       * @param request DeletePerspectiveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePerspectiveResponse
       */
      Models::DeletePerspectiveResponse deletePerspectiveWithOptions(const Models::DeletePerspectiveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视角-删除
       *
       * @param request DeletePerspectiveRequest
       * @return DeletePerspectiveResponse
       */
      Models::DeletePerspectiveResponse deletePerspective(const Models::DeletePerspectiveRequest &request);

      /**
       * @summary 删除FAQ相似问
       *
       * @param request DeleteSimQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSimQuestionResponse
       */
      Models::DeleteSimQuestionResponse deleteSimQuestionWithOptions(const Models::DeleteSimQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除FAQ相似问
       *
       * @param request DeleteSimQuestionRequest
       * @return DeleteSimQuestionResponse
       */
      Models::DeleteSimQuestionResponse deleteSimQuestion(const Models::DeleteSimQuestionRequest &request);

      /**
       * @summary 删除FAQ答案
       *
       * @param request DeleteSolutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSolutionResponse
       */
      Models::DeleteSolutionResponse deleteSolutionWithOptions(const Models::DeleteSolutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除FAQ答案
       *
       * @param request DeleteSolutionRequest
       * @return DeleteSolutionResponse
       */
      Models::DeleteSolutionResponse deleteSolution(const Models::DeleteSolutionRequest &request);

      /**
       * @summary 标签删除
       *
       * @param request DeleteTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTagResponse
       */
      Models::DeleteTagResponse deleteTagWithOptions(const Models::DeleteTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 标签删除
       *
       * @param request DeleteTagRequest
       * @return DeleteTagResponse
       */
      Models::DeleteTagResponse deleteTag(const Models::DeleteTagRequest &request);

      /**
       * @summary 标签组删除
       *
       * @param request DeleteTagGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTagGroupResponse
       */
      Models::DeleteTagGroupResponse deleteTagGroupWithOptions(const Models::DeleteTagGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 标签组删除
       *
       * @param request DeleteTagGroupRequest
       * @return DeleteTagGroupResponse
       */
      Models::DeleteTagGroupResponse deleteTagGroup(const Models::DeleteTagGroupRequest &request);

      /**
       * @summary 意图-用户话术-删除
       *
       * @param request DeleteUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserSayResponse
       */
      Models::DeleteUserSayResponse deleteUserSayWithOptions(const Models::DeleteUserSayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 意图-用户话术-删除
       *
       * @param request DeleteUserSayRequest
       * @return DeleteUserSayResponse
       */
      Models::DeleteUserSayResponse deleteUserSay(const Models::DeleteUserSayRequest &request);

      /**
       * @summary 查看单个类目信息
       *
       * @param request DescribeCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCategoryResponse
       */
      Models::DescribeCategoryResponse describeCategoryWithOptions(const Models::DescribeCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看单个类目信息
       *
       * @param request DescribeCategoryRequest
       * @return DescribeCategoryResponse
       */
      Models::DescribeCategoryResponse describeCategory(const Models::DescribeCategoryRequest &request);

      /**
       * @summary 实体-详情
       *
       * @param request DescribeDSEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDSEntityResponse
       */
      Models::DescribeDSEntityResponse describeDSEntityWithOptions(const Models::DescribeDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实体-详情
       *
       * @param request DescribeDSEntityRequest
       * @return DescribeDSEntityResponse
       */
      Models::DescribeDSEntityResponse describeDSEntity(const Models::DescribeDSEntityRequest &request);

      /**
       * @summary 文档详情
       *
       * @param request DescribeDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDocResponse
       */
      Models::DescribeDocResponse describeDocWithOptions(const Models::DescribeDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档详情
       *
       * @param request DescribeDocRequest
       * @return DescribeDocResponse
       */
      Models::DescribeDocResponse describeDoc(const Models::DescribeDocRequest &request);

      /**
       * @summary 知识详情
       *
       * @param request DescribeFaqRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFaqResponse
       */
      Models::DescribeFaqResponse describeFaqWithOptions(const Models::DescribeFaqRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 知识详情
       *
       * @param request DescribeFaqRequest
       * @return DescribeFaqResponse
       */
      Models::DescribeFaqResponse describeFaq(const Models::DescribeFaqRequest &request);

      /**
       * @summary 机器人-详情
       *
       * @param request DescribeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstanceWithOptions(const Models::DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机器人-详情
       *
       * @param request DescribeInstanceRequest
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstance(const Models::DescribeInstanceRequest &request);

      /**
       * @summary 意图-详情
       *
       * @param request DescribeIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIntentResponse
       */
      Models::DescribeIntentResponse describeIntentWithOptions(const Models::DescribeIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 意图-详情
       *
       * @param request DescribeIntentRequest
       * @return DescribeIntentResponse
       */
      Models::DescribeIntentResponse describeIntent(const Models::DescribeIntentRequest &request);

      /**
       * @summary 视角-详情
       *
       * @param request DescribePerspectiveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePerspectiveResponse
       */
      Models::DescribePerspectiveResponse describePerspectiveWithOptions(const Models::DescribePerspectiveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视角-详情
       *
       * @param request DescribePerspectiveRequest
       * @return DescribePerspectiveResponse
       */
      Models::DescribePerspectiveResponse describePerspective(const Models::DescribePerspectiveRequest &request);

      /**
       * @summary 标签详情
       *
       * @param request DescribeTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagResponse
       */
      Models::DescribeTagResponse describeTagWithOptions(const Models::DescribeTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 标签详情
       *
       * @param request DescribeTagRequest
       * @return DescribeTagResponse
       */
      Models::DescribeTagResponse describeTag(const Models::DescribeTagRequest &request);

      /**
       * @summary 标签组详情
       *
       * @param request DescribeTagGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagGroupResponse
       */
      Models::DescribeTagGroupResponse describeTagGroupWithOptions(const Models::DescribeTagGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 标签组详情
       *
       * @param request DescribeTagGroupRequest
       * @return DescribeTagGroupResponse
       */
      Models::DescribeTagGroupResponse describeTagGroup(const Models::DescribeTagGroupRequest &request);

      /**
       * @summary 问答点赞、点踩API
       *
       * @param request FeedbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FeedbackResponse
       */
      Models::FeedbackResponse feedbackWithOptions(const Models::FeedbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 问答点赞、点踩API
       *
       * @param request FeedbackRequest
       * @return FeedbackResponse
       */
      Models::FeedbackResponse feedback(const Models::FeedbackRequest &request);

      /**
       * @summary 生成用户免登Token
       *
       * @param request GenerateUserAccessTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateUserAccessTokenResponse
       */
      Models::GenerateUserAccessTokenResponse generateUserAccessTokenWithOptions(const Models::GenerateUserAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成用户免登Token
       *
       * @param request GenerateUserAccessTokenRequest
       * @return GenerateUserAccessTokenResponse
       */
      Models::GenerateUserAccessTokenResponse generateUserAccessToken(const Models::GenerateUserAccessTokenRequest &request);

      /**
       * @summary 获取业务空间信息
       *
       * @param request GetAgentInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentInfoResponse
       */
      Models::GetAgentInfoResponse getAgentInfoWithOptions(const Models::GetAgentInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取业务空间信息
       *
       * @param request GetAgentInfoRequest
       * @return GetAgentInfoResponse
       */
      Models::GetAgentInfoResponse getAgentInfo(const Models::GetAgentInfoRequest &request);

      /**
       * @summary 获取异步函数执行结果接口
       *
       * @param request GetAsyncResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsyncResultResponse
       */
      Models::GetAsyncResultResponse getAsyncResultWithOptions(const Models::GetAsyncResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取异步函数执行结果接口
       *
       * @param request GetAsyncResultRequest
       * @return GetAsyncResultResponse
       */
      Models::GetAsyncResultResponse getAsyncResult(const Models::GetAsyncResultRequest &request);

      /**
       * @summary 查询机器人接待人次和对话轮次
       *
       * @param request GetBotSessionDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBotSessionDataResponse
       */
      Models::GetBotSessionDataResponse getBotSessionDataWithOptions(const Models::GetBotSessionDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询机器人接待人次和对话轮次
       *
       * @param request GetBotSessionDataRequest
       * @return GetBotSessionDataResponse
       */
      Models::GetBotSessionDataResponse getBotSessionData(const Models::GetBotSessionDataRequest &request);

      /**
       * @summary 查询机器人发布进度
       *
       * @param request GetInstancePublishTaskStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstancePublishTaskStateResponse
       */
      Models::GetInstancePublishTaskStateResponse getInstancePublishTaskStateWithOptions(const Models::GetInstancePublishTaskStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询机器人发布进度
       *
       * @param request GetInstancePublishTaskStateRequest
       * @return GetInstancePublishTaskStateResponse
       */
      Models::GetInstancePublishTaskStateResponse getInstancePublishTaskState(const Models::GetInstancePublishTaskStateRequest &request);

      /**
       * @summary 查询发布进度
       *
       * @param request GetPublishTaskStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPublishTaskStateResponse
       */
      Models::GetPublishTaskStateResponse getPublishTaskStateWithOptions(const Models::GetPublishTaskStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询发布进度
       *
       * @param request GetPublishTaskStateRequest
       * @return GetPublishTaskStateResponse
       */
      Models::GetPublishTaskStateResponse getPublishTaskState(const Models::GetPublishTaskStateRequest &request);

      /**
       * @summary 初始化im连接信息
       *
       * @param request InitIMConnectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitIMConnectResponse
       */
      Models::InitIMConnectResponse initIMConnectWithOptions(const Models::InitIMConnectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 初始化im连接信息
       *
       * @param request InitIMConnectRequest
       * @return InitIMConnectResponse
       */
      Models::InitIMConnectResponse initIMConnect(const Models::InitIMConnectRequest &request);

      /**
       * @summary 机器人-绑定类目
       *
       * @param request LinkInstanceCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LinkInstanceCategoryResponse
       */
      Models::LinkInstanceCategoryResponse linkInstanceCategoryWithOptions(const Models::LinkInstanceCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机器人-绑定类目
       *
       * @param request LinkInstanceCategoryRequest
       * @return LinkInstanceCategoryResponse
       */
      Models::LinkInstanceCategoryResponse linkInstanceCategory(const Models::LinkInstanceCategoryRequest &request);

      /**
       * @summary 获取业务空间列表
       *
       * @param request ListAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentResponse
       */
      Models::ListAgentResponse listAgentWithOptions(const Models::ListAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取业务空间列表
       *
       * @param request ListAgentRequest
       * @return ListAgentResponse
       */
      Models::ListAgentResponse listAgent(const Models::ListAgentRequest &request);

      /**
       * @summary 类目列表
       *
       * @param request ListCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCategoryResponse
       */
      Models::ListCategoryResponse listCategoryWithOptions(const Models::ListCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 类目列表
       *
       * @param request ListCategoryRequest
       * @return ListCategoryResponse
       */
      Models::ListCategoryResponse listCategory(const Models::ListCategoryRequest &request);

      /**
       * @summary 查询FAQ关联问列表
       *
       * @param request ListConnQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConnQuestionResponse
       */
      Models::ListConnQuestionResponse listConnQuestionWithOptions(const Models::ListConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询FAQ关联问列表
       *
       * @param request ListConnQuestionRequest
       * @return ListConnQuestionResponse
       */
      Models::ListConnQuestionResponse listConnQuestion(const Models::ListConnQuestionRequest &request);

      /**
       * @summary 实体-列表
       *
       * @param request ListDSEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDSEntityResponse
       */
      Models::ListDSEntityResponse listDSEntityWithOptions(const Models::ListDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实体-列表
       *
       * @param request ListDSEntityRequest
       * @return ListDSEntityResponse
       */
      Models::ListDSEntityResponse listDSEntity(const Models::ListDSEntityRequest &request);

      /**
       * @summary 实体成员-列表
       *
       * @param request ListDSEntityValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDSEntityValueResponse
       */
      Models::ListDSEntityValueResponse listDSEntityValueWithOptions(const Models::ListDSEntityValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实体成员-列表
       *
       * @param request ListDSEntityValueRequest
       * @return ListDSEntityValueResponse
       */
      Models::ListDSEntityValueResponse listDSEntityValue(const Models::ListDSEntityValueRequest &request);

      /**
       * @summary 机器人-修改
       *
       * @param request ListInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceResponse
       */
      Models::ListInstanceResponse listInstanceWithOptions(const Models::ListInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机器人-修改
       *
       * @param request ListInstanceRequest
       * @return ListInstanceResponse
       */
      Models::ListInstanceResponse listInstance(const Models::ListInstanceRequest &request);

      /**
       * @summary 意图-列表
       *
       * @param request ListIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntentResponse
       */
      Models::ListIntentResponse listIntentWithOptions(const Models::ListIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 意图-列表
       *
       * @param request ListIntentRequest
       * @return ListIntentResponse
       */
      Models::ListIntentResponse listIntent(const Models::ListIntentRequest &request);

      /**
       * @summary 意图-LGF-列表
       *
       * @param request ListLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLgfResponse
       */
      Models::ListLgfResponse listLgfWithOptions(const Models::ListLgfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 意图-LGF-列表
       *
       * @param request ListLgfRequest
       * @return ListLgfResponse
       */
      Models::ListLgfResponse listLgf(const Models::ListLgfRequest &request);

      /**
       * @summary 获取业务空间下可集成的SaaS信息列表
       *
       * @param request ListSaasInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSaasInfoResponse
       */
      Models::ListSaasInfoResponse listSaasInfoWithOptions(const Models::ListSaasInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取业务空间下可集成的SaaS信息列表
       *
       * @param request ListSaasInfoRequest
       * @return ListSaasInfoResponse
       */
      Models::ListSaasInfoResponse listSaasInfo(const Models::ListSaasInfoRequest &request);

      /**
       * @summary 获取业务空间下可集成的权限组信息
       *
       * @param request ListSaasPermissionGroupInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSaasPermissionGroupInfosResponse
       */
      Models::ListSaasPermissionGroupInfosResponse listSaasPermissionGroupInfosWithOptions(const Models::ListSaasPermissionGroupInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取业务空间下可集成的权限组信息
       *
       * @param request ListSaasPermissionGroupInfosRequest
       * @return ListSaasPermissionGroupInfosResponse
       */
      Models::ListSaasPermissionGroupInfosResponse listSaasPermissionGroupInfos(const Models::ListSaasPermissionGroupInfosRequest &request);

      /**
       * @summary FAQ相似问列表
       *
       * @param request ListSimQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSimQuestionResponse
       */
      Models::ListSimQuestionResponse listSimQuestionWithOptions(const Models::ListSimQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary FAQ相似问列表
       *
       * @param request ListSimQuestionRequest
       * @return ListSimQuestionResponse
       */
      Models::ListSimQuestionResponse listSimQuestion(const Models::ListSimQuestionRequest &request);

      /**
       * @summary FAQ答案列表
       *
       * @param request ListSolutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSolutionResponse
       */
      Models::ListSolutionResponse listSolutionWithOptions(const Models::ListSolutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary FAQ答案列表
       *
       * @param request ListSolutionRequest
       * @return ListSolutionResponse
       */
      Models::ListSolutionResponse listSolution(const Models::ListSolutionRequest &request);

      /**
       * @summary 标签查询
       *
       * @param request ListTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResponse
       */
      Models::ListTagResponse listTagWithOptions(const Models::ListTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 标签查询
       *
       * @param request ListTagRequest
       * @return ListTagResponse
       */
      Models::ListTagResponse listTag(const Models::ListTagRequest &request);

      /**
       * @summary 标签组查询
       *
       * @param request ListTagGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagGroupResponse
       */
      Models::ListTagGroupResponse listTagGroupWithOptions(const Models::ListTagGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 标签组查询
       *
       * @param request ListTagGroupRequest
       * @return ListTagGroupResponse
       */
      Models::ListTagGroupResponse listTagGroup(const Models::ListTagGroupRequest &request);

      /**
       * @summary Tongyi对话明细查询接口
       *
       * @param request ListTongyiChatHistorysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTongyiChatHistorysResponse
       */
      Models::ListTongyiChatHistorysResponse listTongyiChatHistorysWithOptions(const Models::ListTongyiChatHistorysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tongyi对话明细查询接口
       *
       * @param request ListTongyiChatHistorysRequest
       * @return ListTongyiChatHistorysResponse
       */
      Models::ListTongyiChatHistorysResponse listTongyiChatHistorys(const Models::ListTongyiChatHistorysRequest &request);

      /**
       * @summary 查询通义晓蜜的单个会话对话记录
       *
       * @param request ListTongyiConversationLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTongyiConversationLogsResponse
       */
      Models::ListTongyiConversationLogsResponse listTongyiConversationLogsWithOptions(const Models::ListTongyiConversationLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询通义晓蜜的单个会话对话记录
       *
       * @param request ListTongyiConversationLogsRequest
       * @return ListTongyiConversationLogsResponse
       */
      Models::ListTongyiConversationLogsResponse listTongyiConversationLogs(const Models::ListTongyiConversationLogsRequest &request);

      /**
       * @summary 话术-列表
       *
       * @param request ListUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserSayResponse
       */
      Models::ListUserSayResponse listUserSayWithOptions(const Models::ListUserSayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 话术-列表
       *
       * @param request ListUserSayRequest
       * @return ListUserSayResponse
       */
      Models::ListUserSayResponse listUserSay(const Models::ListUserSayRequest &request);

      /**
       * @summary 统一NLU接口
       *
       * @param request NluRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return NluResponse
       */
      Models::NluResponse nluWithOptions(const Models::NluRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 统一NLU接口
       *
       * @param request NluRequest
       * @return NluResponse
       */
      Models::NluResponse nlu(const Models::NluRequest &request);

      /**
       * @summary 视角-列表
       *
       * @param request QueryPerspectivesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPerspectivesResponse
       */
      Models::QueryPerspectivesResponse queryPerspectivesWithOptions(const Models::QueryPerspectivesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视角-列表
       *
       * @param request QueryPerspectivesRequest
       * @return QueryPerspectivesResponse
       */
      Models::QueryPerspectivesResponse queryPerspectives(const Models::QueryPerspectivesRequest &request);

      /**
       * @summary 文档重试
       *
       * @param request RetryDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryDocResponse
       */
      Models::RetryDocResponse retryDocWithOptions(const Models::RetryDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档重试
       *
       * @param request RetryDocRequest
       * @return RetryDocResponse
       */
      Models::RetryDocResponse retryDoc(const Models::RetryDocRequest &request);

      /**
       * @summary 文档搜索
       *
       * @param tmpReq SearchDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchDocResponse
       */
      Models::SearchDocResponse searchDocWithOptions(const Models::SearchDocRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档搜索
       *
       * @param request SearchDocRequest
       * @return SearchDocResponse
       */
      Models::SearchDocResponse searchDoc(const Models::SearchDocRequest &request);

      /**
       * @summary 知识搜索
       *
       * @param tmpReq SearchFaqRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchFaqResponse
       */
      Models::SearchFaqResponse searchFaqWithOptions(const Models::SearchFaqRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 知识搜索
       *
       * @param request SearchFaqRequest
       * @return SearchFaqResponse
       */
      Models::SearchFaqResponse searchFaq(const Models::SearchFaqRequest &request);

      /**
       * @summary 大模型问答调试信息
       *
       * @param request TongyiChatDebugInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TongyiChatDebugInfoResponse
       */
      Models::TongyiChatDebugInfoResponse tongyiChatDebugInfoWithOptions(const Models::TongyiChatDebugInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 大模型问答调试信息
       *
       * @param request TongyiChatDebugInfoRequest
       * @return TongyiChatDebugInfoResponse
       */
      Models::TongyiChatDebugInfoResponse tongyiChatDebugInfo(const Models::TongyiChatDebugInfoRequest &request);

      /**
       * @summary 编辑类目
       *
       * @param request UpdateCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCategoryResponse
       */
      Models::UpdateCategoryResponse updateCategoryWithOptions(const Models::UpdateCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑类目
       *
       * @param request UpdateCategoryRequest
       * @return UpdateCategoryResponse
       */
      Models::UpdateCategoryResponse updateCategory(const Models::UpdateCategoryRequest &request);

      /**
       * @summary 更新FAQ关联问
       *
       * @param request UpdateConnQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConnQuestionResponse
       */
      Models::UpdateConnQuestionResponse updateConnQuestionWithOptions(const Models::UpdateConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新FAQ关联问
       *
       * @param request UpdateConnQuestionRequest
       * @return UpdateConnQuestionResponse
       */
      Models::UpdateConnQuestionResponse updateConnQuestion(const Models::UpdateConnQuestionRequest &request);

      /**
       * @summary 实体-更新
       *
       * @param request UpdateDSEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDSEntityResponse
       */
      Models::UpdateDSEntityResponse updateDSEntityWithOptions(const Models::UpdateDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实体-更新
       *
       * @param request UpdateDSEntityRequest
       * @return UpdateDSEntityResponse
       */
      Models::UpdateDSEntityResponse updateDSEntity(const Models::UpdateDSEntityRequest &request);

      /**
       * @summary 实体成员-更新
       *
       * @param tmpReq UpdateDSEntityValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDSEntityValueResponse
       */
      Models::UpdateDSEntityValueResponse updateDSEntityValueWithOptions(const Models::UpdateDSEntityValueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实体成员-更新
       *
       * @param request UpdateDSEntityValueRequest
       * @return UpdateDSEntityValueResponse
       */
      Models::UpdateDSEntityValueResponse updateDSEntityValue(const Models::UpdateDSEntityValueRequest &request);

      /**
       * @summary 文档变更
       *
       * @param tmpReq UpdateDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDocResponse
       */
      Models::UpdateDocResponse updateDocWithOptions(const Models::UpdateDocRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档变更
       *
       * @param request UpdateDocRequest
       * @return UpdateDocResponse
       */
      Models::UpdateDocResponse updateDoc(const Models::UpdateDocRequest &request);

      /**
       * @summary 更新FAQ
       *
       * @param tmpReq UpdateFaqRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFaqResponse
       */
      Models::UpdateFaqResponse updateFaqWithOptions(const Models::UpdateFaqRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新FAQ
       *
       * @param request UpdateFaqRequest
       * @return UpdateFaqResponse
       */
      Models::UpdateFaqResponse updateFaq(const Models::UpdateFaqRequest &request);

      /**
       * @summary 机器人-修改
       *
       * @param request UpdateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const Models::UpdateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机器人-修改
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const Models::UpdateInstanceRequest &request);

      /**
       * @summary 意图-更新
       *
       * @param tmpReq UpdateIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIntentResponse
       */
      Models::UpdateIntentResponse updateIntentWithOptions(const Models::UpdateIntentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 意图-更新
       *
       * @param request UpdateIntentRequest
       * @return UpdateIntentResponse
       */
      Models::UpdateIntentResponse updateIntent(const Models::UpdateIntentRequest &request);

      /**
       * @summary 意图-LGF-更新
       *
       * @param tmpReq UpdateLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLgfResponse
       */
      Models::UpdateLgfResponse updateLgfWithOptions(const Models::UpdateLgfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 意图-LGF-更新
       *
       * @param request UpdateLgfRequest
       * @return UpdateLgfResponse
       */
      Models::UpdateLgfResponse updateLgf(const Models::UpdateLgfRequest &request);

      /**
       * @summary 视角-修改
       *
       * @param request UpdatePerspectiveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePerspectiveResponse
       */
      Models::UpdatePerspectiveResponse updatePerspectiveWithOptions(const Models::UpdatePerspectiveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视角-修改
       *
       * @param request UpdatePerspectiveRequest
       * @return UpdatePerspectiveResponse
       */
      Models::UpdatePerspectiveResponse updatePerspective(const Models::UpdatePerspectiveRequest &request);

      /**
       * @summary 更新FAQ相似问
       *
       * @param request UpdateSimQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSimQuestionResponse
       */
      Models::UpdateSimQuestionResponse updateSimQuestionWithOptions(const Models::UpdateSimQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新FAQ相似问
       *
       * @param request UpdateSimQuestionRequest
       * @return UpdateSimQuestionResponse
       */
      Models::UpdateSimQuestionResponse updateSimQuestion(const Models::UpdateSimQuestionRequest &request);

      /**
       * @summary 更新FAQ答案
       *
       * @param tmpReq UpdateSolutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSolutionResponse
       */
      Models::UpdateSolutionResponse updateSolutionWithOptions(const Models::UpdateSolutionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新FAQ答案
       *
       * @param request UpdateSolutionRequest
       * @return UpdateSolutionResponse
       */
      Models::UpdateSolutionResponse updateSolution(const Models::UpdateSolutionRequest &request);

      /**
       * @summary 标签编辑
       *
       * @param request UpdateTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTagResponse
       */
      Models::UpdateTagResponse updateTagWithOptions(const Models::UpdateTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 标签编辑
       *
       * @param request UpdateTagRequest
       * @return UpdateTagResponse
       */
      Models::UpdateTagResponse updateTag(const Models::UpdateTagRequest &request);

      /**
       * @summary 标签组编辑
       *
       * @param request UpdateTagGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTagGroupResponse
       */
      Models::UpdateTagGroupResponse updateTagGroupWithOptions(const Models::UpdateTagGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 标签组编辑
       *
       * @param request UpdateTagGroupRequest
       * @return UpdateTagGroupResponse
       */
      Models::UpdateTagGroupResponse updateTagGroup(const Models::UpdateTagGroupRequest &request);

      /**
       * @summary 意图-话术-更新
       *
       * @param tmpReq UpdateUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserSayResponse
       */
      Models::UpdateUserSayResponse updateUserSayWithOptions(const Models::UpdateUserSayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 意图-话术-更新
       *
       * @param request UpdateUserSayRequest
       * @return UpdateUserSayResponse
       */
      Models::UpdateUserSayResponse updateUserSay(const Models::UpdateUserSayRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
