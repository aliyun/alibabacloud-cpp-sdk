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
       * @summary Obtain the Connection information for stream invocation.
       *
       * @param request ApplyForStreamAccessTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyForStreamAccessTokenResponse
       */
      Models::ApplyForStreamAccessTokenResponse applyForStreamAccessTokenWithOptions(const Models::ApplyForStreamAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the Connection information for stream invocation.
       *
       * @param request ApplyForStreamAccessTokenRequest
       * @return ApplyForStreamAccessTokenResponse
       */
      Models::ApplyForStreamAccessTokenResponse applyForStreamAccessToken(const Models::ApplyForStreamAccessTokenRequest &request);

      /**
       * @summary Suggests FAQs from the knowledge base based on a user\\"s utterance.
       *
       * @param tmpReq AssociateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateResponse
       */
      Models::AssociateResponse associateWithOptions(const Models::AssociateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suggests FAQs from the knowledge base based on a user\\"s utterance.
       *
       * @param request AssociateRequest
       * @return AssociateResponse
       */
      Models::AssociateResponse associate(const Models::AssociateRequest &request);

      /**
       * @summary Initiates a session and retrieves a welcome message.
       *
       * @param request BeginSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BeginSessionResponse
       */
      Models::BeginSessionResponse beginSessionWithOptions(const Models::BeginSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a session and retrieves a welcome message.
       *
       * @param request BeginSessionRequest
       * @return BeginSessionResponse
       */
      Models::BeginSessionResponse beginSession(const Models::BeginSessionRequest &request);

      /**
       * @summary Cancels or interrupts an ongoing chat.
       *
       * @description This operation supports only the new version of chatbots. You can query data only from the last 90 days.
       *
       * @param request CancelChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelChatResponse
       */
      Models::CancelChatResponse cancelChatWithOptions(const Models::CancelChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels or interrupts an ongoing chat.
       *
       * @description This operation supports only the new version of chatbots. You can query data only from the last 90 days.
       *
       * @param request CancelChatRequest
       * @return CancelChatResponse
       */
      Models::CancelChatResponse cancelChat(const Models::CancelChatRequest &request);

      /**
       * @summary Cancels a publishing task for a chatbot.
       *
       * @param request CancelInstancePublishTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelInstancePublishTaskResponse
       */
      Models::CancelInstancePublishTaskResponse cancelInstancePublishTaskWithOptions(const Models::CancelInstancePublishTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a publishing task for a chatbot.
       *
       * @param request CancelInstancePublishTaskRequest
       * @return CancelInstancePublishTaskResponse
       */
      Models::CancelInstancePublishTaskResponse cancelInstancePublishTask(const Models::CancelInstancePublishTaskRequest &request);

      /**
       * @summary Cancels a publish task that is in progress.
       *
       * @param request CancelPublishTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelPublishTaskResponse
       */
      Models::CancelPublishTaskResponse cancelPublishTaskWithOptions(const Models::CancelPublishTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a publish task that is in progress.
       *
       * @param request CancelPublishTaskRequest
       * @return CancelPublishTaskResponse
       */
      Models::CancelPublishTaskResponse cancelPublishTask(const Models::CancelPublishTaskRequest &request);

      /**
       * @summary Starts a conversation with a bot by specifying its Bot ID. This applies only to Chatbot (Legacy).
       *
       * @param tmpReq ChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatResponse
       */
      Models::ChatResponse chatWithOptions(const Models::ChatRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a conversation with a bot by specifying its Bot ID. This applies only to Chatbot (Legacy).
       *
       * @param request ChatRequest
       * @return ChatResponse
       */
      Models::ChatResponse chat(const Models::ChatRequest &request);

      /**
       * @summary Ignores an alarm and continues a chatbot publish task.
       *
       * @param request ContinueInstancePublishTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContinueInstancePublishTaskResponse
       */
      Models::ContinueInstancePublishTaskResponse continueInstancePublishTaskWithOptions(const Models::ContinueInstancePublishTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ignores an alarm and continues a chatbot publish task.
       *
       * @param request ContinueInstancePublishTaskRequest
       * @return ContinueInstancePublishTaskResponse
       */
      Models::ContinueInstancePublishTaskResponse continueInstancePublishTask(const Models::ContinueInstancePublishTaskRequest &request);

      /**
       * @summary Creates a category.
       *
       * @param request CreateCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCategoryResponse
       */
      Models::CreateCategoryResponse createCategoryWithOptions(const Models::CreateCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a category.
       *
       * @param request CreateCategoryRequest
       * @return CreateCategoryResponse
       */
      Models::CreateCategoryResponse createCategory(const Models::CreateCategoryRequest &request);

      /**
       * @summary Creates a connected question for a knowledge item.
       *
       * @param request CreateConnQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConnQuestionResponse
       */
      Models::CreateConnQuestionResponse createConnQuestionWithOptions(const Models::CreateConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a connected question for a knowledge item.
       *
       * @param request CreateConnQuestionRequest
       * @return CreateConnQuestionResponse
       */
      Models::CreateConnQuestionResponse createConnQuestion(const Models::CreateConnQuestionRequest &request);

      /**
       * @summary Creates an `entity` and its metadata, such as the `entity name` and `entity type`.
       *
       * @param request CreateDSEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDSEntityResponse
       */
      Models::CreateDSEntityResponse createDSEntityWithOptions(const Models::CreateDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an `entity` and its metadata, such as the `entity name` and `entity type`.
       *
       * @param request CreateDSEntityRequest
       * @return CreateDSEntityResponse
       */
      Models::CreateDSEntityResponse createDSEntity(const Models::CreateDSEntityRequest &request);

      /**
       * @summary Adds an entity member to a specified entity. An entity member includes an entity value and a synonym list. All entity values and synonyms must be unique within the same entity.
       *
       * @param tmpReq CreateDSEntityValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDSEntityValueResponse
       */
      Models::CreateDSEntityValueResponse createDSEntityValueWithOptions(const Models::CreateDSEntityValueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an entity member to a specified entity. An entity member includes an entity value and a synonym list. All entity values and synonyms must be unique within the same entity.
       *
       * @param request CreateDSEntityValueRequest
       * @return CreateDSEntityValueResponse
       */
      Models::CreateDSEntityValueResponse createDSEntityValue(const Models::CreateDSEntityValueRequest &request);

      /**
       * @summary Creates a document.
       *
       * @param tmpReq CreateDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDocResponse
       */
      Models::CreateDocResponse createDocWithOptions(const Models::CreateDocRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a document.
       *
       * @param request CreateDocRequest
       * @return CreateDocResponse
       */
      Models::CreateDocResponse createDoc(const Models::CreateDocRequest &request);

      /**
       * @summary Creates a knowledge item.
       *
       * @param tmpReq CreateFaqRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFaqResponse
       */
      Models::CreateFaqResponse createFaqWithOptions(const Models::CreateFaqRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a knowledge item.
       *
       * @param request CreateFaqRequest
       * @return CreateFaqResponse
       */
      Models::CreateFaqResponse createFaq(const Models::CreateFaqRequest &request);

      /**
       * @summary Creates a robot in the sandbox environment.
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a robot in the sandbox environment.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Publishes a sandbox robot to the production environment.
       *
       * @param request CreateInstancePublishTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstancePublishTaskResponse
       */
      Models::CreateInstancePublishTaskResponse createInstancePublishTaskWithOptions(const Models::CreateInstancePublishTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a sandbox robot to the production environment.
       *
       * @param request CreateInstancePublishTaskRequest
       * @return CreateInstancePublishTaskResponse
       */
      Models::CreateInstancePublishTaskResponse createInstancePublishTask(const Models::CreateInstancePublishTaskRequest &request);

      /**
       * @summary Creates an intent. This operation defines an intent\\"s metadata, such as its name, alias, and associated slots. It does not include utterances or LGF.
       *
       * @param tmpReq CreateIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIntentResponse
       */
      Models::CreateIntentResponse createIntentWithOptions(const Models::CreateIntentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an intent. This operation defines an intent\\"s metadata, such as its name, alias, and associated slots. It does not include utterances or LGF.
       *
       * @param request CreateIntentRequest
       * @return CreateIntentResponse
       */
      Models::CreateIntentResponse createIntent(const Models::CreateIntentRequest &request);

      /**
       * @summary Creates an advanced semantic configuration (LGF) for a specified intent.
       *
       * @param tmpReq CreateLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLgfResponse
       */
      Models::CreateLgfResponse createLgfWithOptions(const Models::CreateLgfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an advanced semantic configuration (LGF) for a specified intent.
       *
       * @param request CreateLgfRequest
       * @return CreateLgfResponse
       */
      Models::CreateLgfResponse createLgf(const Models::CreateLgfRequest &request);

      /**
       * @summary Creates a perspective.
       *
       * @param request CreatePerspectiveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePerspectiveResponse
       */
      Models::CreatePerspectiveResponse createPerspectiveWithOptions(const Models::CreatePerspectiveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a perspective.
       *
       * @param request CreatePerspectiveRequest
       * @return CreatePerspectiveResponse
       */
      Models::CreatePerspectiveResponse createPerspective(const Models::CreatePerspectiveRequest &request);

      /**
       * @summary Creates a publish task in the publishing center.
       *
       * @param tmpReq CreatePublishTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePublishTaskResponse
       */
      Models::CreatePublishTaskResponse createPublishTaskWithOptions(const Models::CreatePublishTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a publish task in the publishing center.
       *
       * @param request CreatePublishTaskRequest
       * @return CreatePublishTaskResponse
       */
      Models::CreatePublishTaskResponse createPublishTask(const Models::CreatePublishTaskRequest &request);

      /**
       * @summary Creates a similar question.
       *
       * @param request CreateSimQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSimQuestionResponse
       */
      Models::CreateSimQuestionResponse createSimQuestionWithOptions(const Models::CreateSimQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a similar question.
       *
       * @param request CreateSimQuestionRequest
       * @return CreateSimQuestionResponse
       */
      Models::CreateSimQuestionResponse createSimQuestion(const Models::CreateSimQuestionRequest &request);

      /**
       * @summary Creates a knowledge answer.
       *
       * @param tmpReq CreateSolutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSolutionResponse
       */
      Models::CreateSolutionResponse createSolutionWithOptions(const Models::CreateSolutionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a knowledge answer.
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
       * @summary Adds a user say to a specified intent.
       *
       * @param tmpReq CreateUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserSayResponse
       */
      Models::CreateUserSayResponse createUserSayWithOptions(const Models::CreateUserSayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a user say to a specified intent.
       *
       * @param request CreateUserSayRequest
       * @return CreateUserSayResponse
       */
      Models::CreateUserSayResponse createUserSay(const Models::CreateUserSayRequest &request);

      /**
       * @summary Deletes a category. A published category is marked as deleted and unpublished, while an unpublished category is deleted permanently.
       *
       * @param request DeleteCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCategoryResponse
       */
      Models::DeleteCategoryResponse deleteCategoryWithOptions(const Models::DeleteCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a category. A published category is marked as deleted and unpublished, while an unpublished category is deleted permanently.
       *
       * @param request DeleteCategoryRequest
       * @return DeleteCategoryResponse
       */
      Models::DeleteCategoryResponse deleteCategory(const Models::DeleteCategoryRequest &request);

      /**
       * @summary Deletes a knowledge association.
       *
       * @param request DeleteConnQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConnQuestionResponse
       */
      Models::DeleteConnQuestionResponse deleteConnQuestionWithOptions(const Models::DeleteConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a knowledge association.
       *
       * @param request DeleteConnQuestionRequest
       * @return DeleteConnQuestionResponse
       */
      Models::DeleteConnQuestionResponse deleteConnQuestion(const Models::DeleteConnQuestionRequest &request);

      /**
       * @summary Deletes an entity. This operation also cascade-deletes all associated entity members, synonyms, and regular expressions.
       *
       * @param request DeleteDSEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDSEntityResponse
       */
      Models::DeleteDSEntityResponse deleteDSEntityWithOptions(const Models::DeleteDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an entity. This operation also cascade-deletes all associated entity members, synonyms, and regular expressions.
       *
       * @param request DeleteDSEntityRequest
       * @return DeleteDSEntityResponse
       */
      Models::DeleteDSEntityResponse deleteDSEntity(const Models::DeleteDSEntityRequest &request);

      /**
       * @summary Deletes a specific entity value from an entity. If the entity is a standard entity, its synonyms (if any) are also deleted.
       *
       * @param request DeleteDSEntityValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDSEntityValueResponse
       */
      Models::DeleteDSEntityValueResponse deleteDSEntityValueWithOptions(const Models::DeleteDSEntityValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specific entity value from an entity. If the entity is a standard entity, its synonyms (if any) are also deleted.
       *
       * @param request DeleteDSEntityValueRequest
       * @return DeleteDSEntityValueResponse
       */
      Models::DeleteDSEntityValueResponse deleteDSEntityValue(const Models::DeleteDSEntityValueRequest &request);

      /**
       * @summary Deletes a document.
       *
       * @param request DeleteDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDocResponse
       */
      Models::DeleteDocResponse deleteDocWithOptions(const Models::DeleteDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a document.
       *
       * @param request DeleteDocRequest
       * @return DeleteDocResponse
       */
      Models::DeleteDocResponse deleteDoc(const Models::DeleteDocRequest &request);

      /**
       * @summary Deletes a knowledge item.
       *
       * @param request DeleteFaqRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaqResponse
       */
      Models::DeleteFaqResponse deleteFaqWithOptions(const Models::DeleteFaqRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a knowledge item.
       *
       * @param request DeleteFaqRequest
       * @return DeleteFaqResponse
       */
      Models::DeleteFaqResponse deleteFaq(const Models::DeleteFaqRequest &request);

      /**
       * @summary Deletes an instance from the sandbox and online environments.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an instance from the sandbox and online environments.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Deletes a specified intent and its associated user utterances and advanced semantic configurations (LGF).
       *
       * @param request DeleteIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIntentResponse
       */
      Models::DeleteIntentResponse deleteIntentWithOptions(const Models::DeleteIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified intent and its associated user utterances and advanced semantic configurations (LGF).
       *
       * @param request DeleteIntentRequest
       * @return DeleteIntentResponse
       */
      Models::DeleteIntentResponse deleteIntent(const Models::DeleteIntentRequest &request);

      /**
       * @summary Deletes the specified LGF configuration.
       *
       * @param request DeleteLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLgfResponse
       */
      Models::DeleteLgfResponse deleteLgfWithOptions(const Models::DeleteLgfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified LGF configuration.
       *
       * @param request DeleteLgfRequest
       * @return DeleteLgfResponse
       */
      Models::DeleteLgfResponse deleteLgf(const Models::DeleteLgfRequest &request);

      /**
       * @summary Deletes a perspective.
       *
       * @param request DeletePerspectiveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePerspectiveResponse
       */
      Models::DeletePerspectiveResponse deletePerspectiveWithOptions(const Models::DeletePerspectiveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a perspective.
       *
       * @param request DeletePerspectiveRequest
       * @return DeletePerspectiveResponse
       */
      Models::DeletePerspectiveResponse deletePerspective(const Models::DeletePerspectiveRequest &request);

      /**
       * @summary Deletes a similar question.
       *
       * @param request DeleteSimQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSimQuestionResponse
       */
      Models::DeleteSimQuestionResponse deleteSimQuestionWithOptions(const Models::DeleteSimQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a similar question.
       *
       * @param request DeleteSimQuestionRequest
       * @return DeleteSimQuestionResponse
       */
      Models::DeleteSimQuestionResponse deleteSimQuestion(const Models::DeleteSimQuestionRequest &request);

      /**
       * @summary Deletes the specified solution.
       *
       * @param request DeleteSolutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSolutionResponse
       */
      Models::DeleteSolutionResponse deleteSolutionWithOptions(const Models::DeleteSolutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified solution.
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
       * @summary Deletes a user say from a specified intent.
       *
       * @param request DeleteUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserSayResponse
       */
      Models::DeleteUserSayResponse deleteUserSayWithOptions(const Models::DeleteUserSayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user say from a specified intent.
       *
       * @param request DeleteUserSayRequest
       * @return DeleteUserSayResponse
       */
      Models::DeleteUserSayResponse deleteUserSay(const Models::DeleteUserSayRequest &request);

      /**
       * @summary Gets information about a specific category.
       *
       * @param request DescribeCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCategoryResponse
       */
      Models::DescribeCategoryResponse describeCategoryWithOptions(const Models::DescribeCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets information about a specific category.
       *
       * @param request DescribeCategoryRequest
       * @return DescribeCategoryResponse
       */
      Models::DescribeCategoryResponse describeCategory(const Models::DescribeCategoryRequest &request);

      /**
       * @summary Retrieves metadata for a specified entity associated with a robot, such as the entity type, entity name, creation time, and modification time.
       *
       * @param request DescribeDSEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDSEntityResponse
       */
      Models::DescribeDSEntityResponse describeDSEntityWithOptions(const Models::DescribeDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves metadata for a specified entity associated with a robot, such as the entity type, entity name, creation time, and modification time.
       *
       * @param request DescribeDSEntityRequest
       * @return DescribeDSEntityResponse
       */
      Models::DescribeDSEntityResponse describeDSEntity(const Models::DescribeDSEntityRequest &request);

      /**
       * @summary Document details.
       *
       * @param request DescribeDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDocResponse
       */
      Models::DescribeDocResponse describeDocWithOptions(const Models::DescribeDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Document details.
       *
       * @param request DescribeDocRequest
       * @return DescribeDocResponse
       */
      Models::DescribeDocResponse describeDoc(const Models::DescribeDocRequest &request);

      /**
       * @summary Retrieves knowledge details.
       *
       * @param request DescribeFaqRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFaqResponse
       */
      Models::DescribeFaqResponse describeFaqWithOptions(const Models::DescribeFaqRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves knowledge details.
       *
       * @param request DescribeFaqRequest
       * @return DescribeFaqResponse
       */
      Models::DescribeFaqResponse describeFaq(const Models::DescribeFaqRequest &request);

      /**
       * @summary Queries the details of a robot.
       *
       * @param request DescribeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstanceWithOptions(const Models::DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a robot.
       *
       * @param request DescribeInstanceRequest
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstance(const Models::DescribeInstanceRequest &request);

      /**
       * @summary Returns metadata for a specified intent, including its type, name, creation time, and modification time.
       *
       * @param request DescribeIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIntentResponse
       */
      Models::DescribeIntentResponse describeIntentWithOptions(const Models::DescribeIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns metadata for a specified intent, including its type, name, creation time, and modification time.
       *
       * @param request DescribeIntentRequest
       * @return DescribeIntentResponse
       */
      Models::DescribeIntentResponse describeIntent(const Models::DescribeIntentRequest &request);

      /**
       * @summary Retrieves the details of a specified perspective.
       *
       * @param request DescribePerspectiveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePerspectiveResponse
       */
      Models::DescribePerspectiveResponse describePerspectiveWithOptions(const Models::DescribePerspectiveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified perspective.
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
       * @summary Saves user feedback on chatbot responses.
       *
       * @param request FeedbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FeedbackResponse
       */
      Models::FeedbackResponse feedbackWithOptions(const Models::FeedbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves user feedback on chatbot responses.
       *
       * @param request FeedbackRequest
       * @return FeedbackResponse
       */
      Models::FeedbackResponse feedback(const Models::FeedbackRequest &request);

      /**
       * @summary Generates a user access token to enable single sign-on for a chat window. The token associates the user with their corporate identity.
       *
       * @description For security, each generated token is single-use and must be used before it expires. If a user signs in from multiple browsers, you must call this operation for each session to get a unique token.
       *
       * @param request GenerateUserAccessTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateUserAccessTokenResponse
       */
      Models::GenerateUserAccessTokenResponse generateUserAccessTokenWithOptions(const Models::GenerateUserAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a user access token to enable single sign-on for a chat window. The token associates the user with their corporate identity.
       *
       * @description For security, each generated token is single-use and must be used before it expires. If a user signs in from multiple browsers, you must call this operation for each session to get a unique token.
       *
       * @param request GenerateUserAccessTokenRequest
       * @return GenerateUserAccessTokenResponse
       */
      Models::GenerateUserAccessTokenResponse generateUserAccessToken(const Models::GenerateUserAccessTokenRequest &request);

      /**
       * @summary Retrieves details for a specified agent.
       *
       * @param request GetAgentInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentInfoResponse
       */
      Models::GetAgentInfoResponse getAgentInfoWithOptions(const Models::GetAgentInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details for a specified agent.
       *
       * @param request GetAgentInfoRequest
       * @return GetAgentInfoResponse
       */
      Models::GetAgentInfoResponse getAgentInfo(const Models::GetAgentInfoRequest &request);

      /**
       * @summary Retrieves the execution result of an asynchronous service. This API is used in conjunction with the Chat API.
       *
       * @description Retrieves the execution result of an asynchronous service.
       *
       * @param request GetAsyncResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsyncResultResponse
       */
      Models::GetAsyncResultResponse getAsyncResultWithOptions(const Models::GetAsyncResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the execution result of an asynchronous service. This API is used in conjunction with the Chat API.
       *
       * @description Retrieves the execution result of an asynchronous service.
       *
       * @param request GetAsyncResultRequest
       * @return GetAsyncResultResponse
       */
      Models::GetAsyncResultResponse getAsyncResult(const Models::GetAsyncResultRequest &request);

      /**
       * @summary Retrieves overview metrics for a bot.
       *
       * @description This operation retrieves data for the previous day (T-1) only. Data for the current day is not available.
       *
       * @param request GetBotSessionDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBotSessionDataResponse
       */
      Models::GetBotSessionDataResponse getBotSessionDataWithOptions(const Models::GetBotSessionDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves overview metrics for a bot.
       *
       * @description This operation retrieves data for the previous day (T-1) only. Data for the current day is not available.
       *
       * @param request GetBotSessionDataRequest
       * @return GetBotSessionDataResponse
       */
      Models::GetBotSessionDataResponse getBotSessionData(const Models::GetBotSessionDataRequest &request);

      /**
       * @summary Checks the status of a bot publishing task.
       *
       * @param request GetInstancePublishTaskStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstancePublishTaskStateResponse
       */
      Models::GetInstancePublishTaskStateResponse getInstancePublishTaskStateWithOptions(const Models::GetInstancePublishTaskStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the status of a bot publishing task.
       *
       * @param request GetInstancePublishTaskStateRequest
       * @return GetInstancePublishTaskStateResponse
       */
      Models::GetInstancePublishTaskStateResponse getInstancePublishTaskState(const Models::GetInstancePublishTaskStateRequest &request);

      /**
       * @summary Gets the progress of a publish task.
       *
       * @param request GetPublishTaskStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPublishTaskStateResponse
       */
      Models::GetPublishTaskStateResponse getPublishTaskStateWithOptions(const Models::GetPublishTaskStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the progress of a publish task.
       *
       * @param request GetPublishTaskStateRequest
       * @return GetPublishTaskStateResponse
       */
      Models::GetPublishTaskStateResponse getPublishTaskState(const Models::GetPublishTaskStateRequest &request);

      /**
       * @summary Initializes the Instant Messaging (IM) connection using the `From` value configured in the channel console. This operation lets you pass a user authentication token during initialization.
       *
       * @param request InitIMConnectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitIMConnectResponse
       */
      Models::InitIMConnectResponse initIMConnectWithOptions(const Models::InitIMConnectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes the Instant Messaging (IM) connection using the `From` value configured in the channel console. This operation lets you pass a user authentication token during initialization.
       *
       * @param request InitIMConnectRequest
       * @return InitIMConnectResponse
       */
      Models::InitIMConnectResponse initIMConnect(const Models::InitIMConnectRequest &request);

      /**
       * @summary Links knowledge categories to a chatbot.
       *
       * @param request LinkInstanceCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LinkInstanceCategoryResponse
       */
      Models::LinkInstanceCategoryResponse linkInstanceCategoryWithOptions(const Models::LinkInstanceCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Links knowledge categories to a chatbot.
       *
       * @param request LinkInstanceCategoryRequest
       * @return LinkInstanceCategoryResponse
       */
      Models::LinkInstanceCategoryResponse linkInstanceCategory(const Models::LinkInstanceCategoryRequest &request);

      /**
       * @summary Lists the business spaces for your Alibaba Cloud account.
       *
       * @param request ListAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentResponse
       */
      Models::ListAgentResponse listAgentWithOptions(const Models::ListAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the business spaces for your Alibaba Cloud account.
       *
       * @param request ListAgentRequest
       * @return ListAgentResponse
       */
      Models::ListAgentResponse listAgent(const Models::ListAgentRequest &request);

      /**
       * @summary Lists categories.
       *
       * @param request ListCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCategoryResponse
       */
      Models::ListCategoryResponse listCategoryWithOptions(const Models::ListCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists categories.
       *
       * @param request ListCategoryRequest
       * @return ListCategoryResponse
       */
      Models::ListCategoryResponse listCategory(const Models::ListCategoryRequest &request);

      /**
       * @summary Lists the connected questions for a knowledge item.
       *
       * @param request ListConnQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConnQuestionResponse
       */
      Models::ListConnQuestionResponse listConnQuestionWithOptions(const Models::ListConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the connected questions for a knowledge item.
       *
       * @param request ListConnQuestionRequest
       * @return ListConnQuestionResponse
       */
      Models::ListConnQuestionResponse listConnQuestion(const Models::ListConnQuestionRequest &request);

      /**
       * @summary Lists the entities for a specified robot. This operation returns only entity metadata, such as the entity type, name, creation time, and update time.
       *
       * @param request ListDSEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDSEntityResponse
       */
      Models::ListDSEntityResponse listDSEntityWithOptions(const Models::ListDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the entities for a specified robot. This operation returns only entity metadata, such as the entity type, name, creation time, and update time.
       *
       * @param request ListDSEntityRequest
       * @return ListDSEntityResponse
       */
      Models::ListDSEntityResponse listDSEntity(const Models::ListDSEntityRequest &request);

      /**
       * @summary Retrieves the list of entity values for a specified entity. You can filter by keyword using a `contains` match. The search covers both entity values and their synonyms.
       *
       * @param request ListDSEntityValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDSEntityValueResponse
       */
      Models::ListDSEntityValueResponse listDSEntityValueWithOptions(const Models::ListDSEntityValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of entity values for a specified entity. You can filter by keyword using a `contains` match. The search covers both entity values and their synonyms.
       *
       * @param request ListDSEntityValueRequest
       * @return ListDSEntityValueResponse
       */
      Models::ListDSEntityValueResponse listDSEntityValue(const Models::ListDSEntityValueRequest &request);

      /**
       * @summary Queries a list of instances.
       *
       * @param request ListInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceResponse
       */
      Models::ListInstanceResponse listInstanceWithOptions(const Models::ListInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances.
       *
       * @param request ListInstanceRequest
       * @return ListInstanceResponse
       */
      Models::ListInstanceResponse listInstance(const Models::ListInstanceRequest &request);

      /**
       * @summary Retrieves metadata for all intents in a specified bot, including the intent type, intent name, creation time, and modification time.
       *
       * @param request ListIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntentResponse
       */
      Models::ListIntentResponse listIntentWithOptions(const Models::ListIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves metadata for all intents in a specified bot, including the intent type, intent name, creation time, and modification time.
       *
       * @param request ListIntentRequest
       * @return ListIntentResponse
       */
      Models::ListIntentResponse listIntent(const Models::ListIntentRequest &request);

      /**
       * @summary Queries the advanced semantic configurations (LGF) for a specified intent.
       *
       * @param request ListLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLgfResponse
       */
      Models::ListLgfResponse listLgfWithOptions(const Models::ListLgfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the advanced semantic configurations (LGF) for a specified intent.
       *
       * @param request ListLgfRequest
       * @return ListLgfResponse
       */
      Models::ListLgfResponse listLgf(const Models::ListLgfRequest &request);

      /**
       * @summary Lists SaaS integration information.
       *
       * @param request ListSaasInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSaasInfoResponse
       */
      Models::ListSaasInfoResponse listSaasInfoWithOptions(const Models::ListSaasInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists SaaS integration information.
       *
       * @param request ListSaasInfoRequest
       * @return ListSaasInfoResponse
       */
      Models::ListSaasInfoResponse listSaasInfo(const Models::ListSaasInfoRequest &request);

      /**
       * @summary Lists the permission groups for integrated SaaS applications. Use these groups to grant permissions to users.
       *
       * @param request ListSaasPermissionGroupInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSaasPermissionGroupInfosResponse
       */
      Models::ListSaasPermissionGroupInfosResponse listSaasPermissionGroupInfosWithOptions(const Models::ListSaasPermissionGroupInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the permission groups for integrated SaaS applications. Use these groups to grant permissions to users.
       *
       * @param request ListSaasPermissionGroupInfosRequest
       * @return ListSaasPermissionGroupInfosResponse
       */
      Models::ListSaasPermissionGroupInfosResponse listSaasPermissionGroupInfos(const Models::ListSaasPermissionGroupInfosRequest &request);

      /**
       * @summary Queries the list of similar questions for a knowledge entry.
       *
       * @param request ListSimQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSimQuestionResponse
       */
      Models::ListSimQuestionResponse listSimQuestionWithOptions(const Models::ListSimQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of similar questions for a knowledge entry.
       *
       * @param request ListSimQuestionRequest
       * @return ListSimQuestionResponse
       */
      Models::ListSimQuestionResponse listSimQuestion(const Models::ListSimQuestionRequest &request);

      /**
       * @summary Lists the solutions for a knowledge entry.
       *
       * @param request ListSolutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSolutionResponse
       */
      Models::ListSolutionResponse listSolutionWithOptions(const Models::ListSolutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the solutions for a knowledge entry.
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
       * @summary Retrieves chat history details.
       *
       * @param request ListTongyiChatHistorysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTongyiChatHistorysResponse
       */
      Models::ListTongyiChatHistorysResponse listTongyiChatHistorysWithOptions(const Models::ListTongyiChatHistorysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves chat history details.
       *
       * @param request ListTongyiChatHistorysRequest
       * @return ListTongyiChatHistorysResponse
       */
      Models::ListTongyiChatHistorysResponse listTongyiChatHistorys(const Models::ListTongyiChatHistorysRequest &request);

      /**
       * @summary Retrieves the conversation logs for a single session of a Tongyi chatbot.
       *
       * @description This operation retrieves conversation logs generated within the past two hours.
       *
       * @param request ListTongyiConversationLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTongyiConversationLogsResponse
       */
      Models::ListTongyiConversationLogsResponse listTongyiConversationLogsWithOptions(const Models::ListTongyiConversationLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the conversation logs for a single session of a Tongyi chatbot.
       *
       * @description This operation retrieves conversation logs generated within the past two hours.
       *
       * @param request ListTongyiConversationLogsRequest
       * @return ListTongyiConversationLogsResponse
       */
      Models::ListTongyiConversationLogsResponse listTongyiConversationLogs(const Models::ListTongyiConversationLogsRequest &request);

      /**
       * @summary Queries the user says and their associated slot information for a specified intent. You can filter the results by keywords.
       *
       * @param request ListUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserSayResponse
       */
      Models::ListUserSayResponse listUserSayWithOptions(const Models::ListUserSayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the user says and their associated slot information for a specified intent. You can filter the results by keywords.
       *
       * @param request ListUserSayRequest
       * @return ListUserSayResponse
       */
      Models::ListUserSayResponse listUserSay(const Models::ListUserSayRequest &request);

      /**
       * @summary Returns the natural language understanding (NLU) results for a user query. Currently, this feature only supports NLU from Conversation Factory and Central Control. Support for other engines will be added as needed.
       *
       * @param request NluRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return NluResponse
       */
      Models::NluResponse nluWithOptions(const Models::NluRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the natural language understanding (NLU) results for a user query. Currently, this feature only supports NLU from Conversation Factory and Central Control. Support for other engines will be added as needed.
       *
       * @param request NluRequest
       * @return NluResponse
       */
      Models::NluResponse nlu(const Models::NluRequest &request);

      /**
       * @summary Queries a list of perspectives.
       *
       * @param request QueryPerspectivesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPerspectivesResponse
       */
      Models::QueryPerspectivesResponse queryPerspectivesWithOptions(const Models::QueryPerspectivesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of perspectives.
       *
       * @param request QueryPerspectivesRequest
       * @return QueryPerspectivesResponse
       */
      Models::QueryPerspectivesResponse queryPerspectives(const Models::QueryPerspectivesRequest &request);

      /**
       * @summary Retries a document processing task.
       *
       * @param request RetryDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryDocResponse
       */
      Models::RetryDocResponse retryDocWithOptions(const Models::RetryDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retries a document processing task.
       *
       * @param request RetryDocRequest
       * @return RetryDocResponse
       */
      Models::RetryDocResponse retryDoc(const Models::RetryDocRequest &request);

      /**
       * @summary Search the documentation.
       *
       * @param tmpReq SearchDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchDocResponse
       */
      Models::SearchDocResponse searchDocWithOptions(const Models::SearchDocRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Search the documentation.
       *
       * @param request SearchDocRequest
       * @return SearchDocResponse
       */
      Models::SearchDocResponse searchDoc(const Models::SearchDocRequest &request);

      /**
       * @summary Search the knowledge base.
       *
       * @param tmpReq SearchFaqRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchFaqResponse
       */
      Models::SearchFaqResponse searchFaqWithOptions(const Models::SearchFaqRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Search the knowledge base.
       *
       * @param request SearchFaqRequest
       * @return SearchFaqResponse
       */
      Models::SearchFaqResponse searchFaq(const Models::SearchFaqRequest &request);

      /**
       * @summary This operation returns debugging information for the large language model (LLM) Q&A process.
       *
       * @description This operation supports only the latest version of chatbots and can query data from only the last 90 days.
       *
       * @param request TongyiChatDebugInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TongyiChatDebugInfoResponse
       */
      Models::TongyiChatDebugInfoResponse tongyiChatDebugInfoWithOptions(const Models::TongyiChatDebugInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation returns debugging information for the large language model (LLM) Q&A process.
       *
       * @description This operation supports only the latest version of chatbots and can query data from only the last 90 days.
       *
       * @param request TongyiChatDebugInfoRequest
       * @return TongyiChatDebugInfoResponse
       */
      Models::TongyiChatDebugInfoResponse tongyiChatDebugInfo(const Models::TongyiChatDebugInfoRequest &request);

      /**
       * @summary Updates a category.
       *
       * @param request UpdateCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCategoryResponse
       */
      Models::UpdateCategoryResponse updateCategoryWithOptions(const Models::UpdateCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a category.
       *
       * @param request UpdateCategoryRequest
       * @return UpdateCategoryResponse
       */
      Models::UpdateCategoryResponse updateCategory(const Models::UpdateCategoryRequest &request);

      /**
       * @summary Updates a connection.
       *
       * @param request UpdateConnQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConnQuestionResponse
       */
      Models::UpdateConnQuestionResponse updateConnQuestionWithOptions(const Models::UpdateConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a connection.
       *
       * @param request UpdateConnQuestionRequest
       * @return UpdateConnQuestionResponse
       */
      Models::UpdateConnQuestionResponse updateConnQuestion(const Models::UpdateConnQuestionRequest &request);

      /**
       * @summary Updates the metadata of an entity. You can modify the entity name, but not the entity type.
       *
       * @param request UpdateDSEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDSEntityResponse
       */
      Models::UpdateDSEntityResponse updateDSEntityWithOptions(const Models::UpdateDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the metadata of an entity. You can modify the entity name, but not the entity type.
       *
       * @param request UpdateDSEntityRequest
       * @return UpdateDSEntityResponse
       */
      Models::UpdateDSEntityResponse updateDSEntity(const Models::UpdateDSEntityRequest &request);

      /**
       * @summary Modifies an entity value. This applies to entity values that use synonyms or regular expressions. Note: You cannot add a regular expression to a standard entity, and vice versa.
       *
       * @param tmpReq UpdateDSEntityValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDSEntityValueResponse
       */
      Models::UpdateDSEntityValueResponse updateDSEntityValueWithOptions(const Models::UpdateDSEntityValueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an entity value. This applies to entity values that use synonyms or regular expressions. Note: You cannot add a regular expression to a standard entity, and vice versa.
       *
       * @param request UpdateDSEntityValueRequest
       * @return UpdateDSEntityValueResponse
       */
      Models::UpdateDSEntityValueResponse updateDSEntityValue(const Models::UpdateDSEntityValueRequest &request);

      /**
       * @summary Updates a document.
       *
       * @param tmpReq UpdateDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDocResponse
       */
      Models::UpdateDocResponse updateDocWithOptions(const Models::UpdateDocRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a document.
       *
       * @param request UpdateDocRequest
       * @return UpdateDocResponse
       */
      Models::UpdateDocResponse updateDoc(const Models::UpdateDocRequest &request);

      /**
       * @summary Updates an existing knowledge entry.
       *
       * @param tmpReq UpdateFaqRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFaqResponse
       */
      Models::UpdateFaqResponse updateFaqWithOptions(const Models::UpdateFaqRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an existing knowledge entry.
       *
       * @param request UpdateFaqRequest
       * @return UpdateFaqResponse
       */
      Models::UpdateFaqResponse updateFaq(const Models::UpdateFaqRequest &request);

      /**
       * @summary Updates a chatbot\\"s name and description.
       *
       * @param request UpdateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const Models::UpdateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a chatbot\\"s name and description.
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const Models::UpdateInstanceRequest &request);

      /**
       * @summary Updates the metadata of a specified intent, including the intent name, alias name, and associated slots. This operation does not modify the intent\\"s utterances or LGF.
       *
       * @param tmpReq UpdateIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIntentResponse
       */
      Models::UpdateIntentResponse updateIntentWithOptions(const Models::UpdateIntentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the metadata of a specified intent, including the intent name, alias name, and associated slots. This operation does not modify the intent\\"s utterances or LGF.
       *
       * @param request UpdateIntentRequest
       * @return UpdateIntentResponse
       */
      Models::UpdateIntentResponse updateIntent(const Models::UpdateIntentRequest &request);

      /**
       * @summary Updates the advanced semantic feature (LGF) for a specified intent.
       *
       * @param tmpReq UpdateLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLgfResponse
       */
      Models::UpdateLgfResponse updateLgfWithOptions(const Models::UpdateLgfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the advanced semantic feature (LGF) for a specified intent.
       *
       * @param request UpdateLgfRequest
       * @return UpdateLgfResponse
       */
      Models::UpdateLgfResponse updateLgf(const Models::UpdateLgfRequest &request);

      /**
       * @summary Updates a perspective\\"s name and description.
       *
       * @param request UpdatePerspectiveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePerspectiveResponse
       */
      Models::UpdatePerspectiveResponse updatePerspectiveWithOptions(const Models::UpdatePerspectiveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a perspective\\"s name and description.
       *
       * @param request UpdatePerspectiveRequest
       * @return UpdatePerspectiveResponse
       */
      Models::UpdatePerspectiveResponse updatePerspective(const Models::UpdatePerspectiveRequest &request);

      /**
       * @summary Updates a similar question.
       *
       * @param request UpdateSimQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSimQuestionResponse
       */
      Models::UpdateSimQuestionResponse updateSimQuestionWithOptions(const Models::UpdateSimQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a similar question.
       *
       * @param request UpdateSimQuestionRequest
       * @return UpdateSimQuestionResponse
       */
      Models::UpdateSimQuestionResponse updateSimQuestion(const Models::UpdateSimQuestionRequest &request);

      /**
       * @summary Updates a solution.
       *
       * @param tmpReq UpdateSolutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSolutionResponse
       */
      Models::UpdateSolutionResponse updateSolutionWithOptions(const Models::UpdateSolutionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a solution.
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
       * @summary Modifies an existing user say.
       *
       * @param tmpReq UpdateUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserSayResponse
       */
      Models::UpdateUserSayResponse updateUserSayWithOptions(const Models::UpdateUserSayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an existing user say.
       *
       * @param request UpdateUserSayRequest
       * @return UpdateUserSayResponse
       */
      Models::UpdateUserSayResponse updateUserSay(const Models::UpdateUserSayRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
