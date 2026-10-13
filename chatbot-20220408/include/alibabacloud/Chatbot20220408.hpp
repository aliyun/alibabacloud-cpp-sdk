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
       * @summary Retrieves the connection information for streaming calls.
       *
       * @param request ApplyForStreamAccessTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyForStreamAccessTokenResponse
       */
      Models::ApplyForStreamAccessTokenResponse applyForStreamAccessTokenWithOptions(const Models::ApplyForStreamAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the connection information for streaming calls.
       *
       * @param request ApplyForStreamAccessTokenRequest
       * @return ApplyForStreamAccessTokenResponse
       */
      Models::ApplyForStreamAccessTokenResponse applyForStreamAccessToken(const Models::ApplyForStreamAccessTokenRequest &request);

      /**
       * @summary Suggests FAQs from the knowledge base based on a user query.
       *
       * @param tmpReq AssociateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateResponse
       */
      Models::AssociateResponse associateWithOptions(const Models::AssociateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suggests FAQs from the knowledge base based on a user query.
       *
       * @param request AssociateRequest
       * @return AssociateResponse
       */
      Models::AssociateResponse associate(const Models::AssociateRequest &request);

      /**
       * @summary Retrieves the welcome message.
       *
       * @param request BeginSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BeginSessionResponse
       */
      Models::BeginSessionResponse beginSessionWithOptions(const Models::BeginSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the welcome message.
       *
       * @param request BeginSessionRequest
       * @return BeginSessionResponse
       */
      Models::BeginSessionResponse beginSession(const Models::BeginSessionRequest &request);

      /**
       * @summary Cancels or interrupts a specified conversation.
       *
       * @description Only new version chatbots are supported. Only data within the last 90 days can be queried.
       *
       * @param request CancelChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelChatResponse
       */
      Models::CancelChatResponse cancelChatWithOptions(const Models::CancelChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels or interrupts a specified conversation.
       *
       * @description Only new version chatbots are supported. Only data within the last 90 days can be queried.
       *
       * @param request CancelChatRequest
       * @return CancelChatResponse
       */
      Models::CancelChatResponse cancelChat(const Models::CancelChatRequest &request);

      /**
       * @summary Cancels a chatbot publish task during the publishing process.
       *
       * @param request CancelInstancePublishTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelInstancePublishTaskResponse
       */
      Models::CancelInstancePublishTaskResponse cancelInstancePublishTaskWithOptions(const Models::CancelInstancePublishTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a chatbot publish task during the publishing process.
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
       * @summary Initiates a conversation with a chatbot by using the unique chatbot identifier (chatbot ID). This operation is applicable only to Chatbot (legacy).
       *
       * @param tmpReq ChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatResponse
       */
      Models::ChatResponse chatWithOptions(const Models::ChatRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a conversation with a chatbot by using the unique chatbot identifier (chatbot ID). This operation is applicable only to Chatbot (legacy).
       *
       * @param request ChatRequest
       * @return ChatResponse
       */
      Models::ChatResponse chat(const Models::ChatRequest &request);

      /**
       * @summary Ignores alerts and continues publishing when the chatbot triggers a publish alert.
       *
       * @param request ContinueInstancePublishTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContinueInstancePublishTaskResponse
       */
      Models::ContinueInstancePublishTaskResponse continueInstancePublishTaskWithOptions(const Models::ContinueInstancePublishTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ignores alerts and continues publishing when the chatbot triggers a publish alert.
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
       * @summary Adds associated knowledge to a knowledge entry.
       *
       * @param request CreateConnQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConnQuestionResponse
       */
      Models::CreateConnQuestionResponse createConnQuestionWithOptions(const Models::CreateConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds associated knowledge to a knowledge entry.
       *
       * @param request CreateConnQuestionRequest
       * @return CreateConnQuestionResponse
       */
      Models::CreateConnQuestionResponse createConnQuestion(const Models::CreateConnQuestionRequest &request);

      /**
       * @summary Creates an entity, specifically the meta information of the entity, such as the entity name and entity type.
       *
       * @param request CreateDSEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDSEntityResponse
       */
      Models::CreateDSEntityResponse createDSEntityWithOptions(const Models::CreateDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an entity, specifically the meta information of the entity, such as the entity name and entity type.
       *
       * @param request CreateDSEntityRequest
       * @return CreateDSEntityResponse
       */
      Models::CreateDSEntityResponse createDSEntity(const Models::CreateDSEntityRequest &request);

      /**
       * @summary Adds entity member information for a specified entity, including the entity value and the corresponding synonym list. Entity values and synonyms must be unique within the same entity.
       *
       * @param tmpReq CreateDSEntityValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDSEntityValueResponse
       */
      Models::CreateDSEntityValueResponse createDSEntityValueWithOptions(const Models::CreateDSEntityValueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds entity member information for a specified entity, including the entity value and the corresponding synonym list. Entity values and synonyms must be unique within the same entity.
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
       * @summary Creates a knowledge entry.
       *
       * @param tmpReq CreateFaqRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFaqResponse
       */
      Models::CreateFaqResponse createFaqWithOptions(const Models::CreateFaqRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a knowledge entry.
       *
       * @param request CreateFaqRequest
       * @return CreateFaqResponse
       */
      Models::CreateFaqResponse createFaq(const Models::CreateFaqRequest &request);

      /**
       * @summary Creates a chatbot in a sandbox environment.
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a chatbot in a sandbox environment.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Publishes a sandbox chatbot to the production environment.
       *
       * @param request CreateInstancePublishTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstancePublishTaskResponse
       */
      Models::CreateInstancePublishTaskResponse createInstancePublishTaskWithOptions(const Models::CreateInstancePublishTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a sandbox chatbot to the production environment.
       *
       * @param request CreateInstancePublishTaskRequest
       * @return CreateInstancePublishTaskResponse
       */
      Models::CreateInstancePublishTaskResponse createInstancePublishTask(const Models::CreateInstancePublishTaskRequest &request);

      /**
       * @summary Creates an intent. The intent includes meta information such as the intent name, intent alias, and associated slot information, but does not include intent utterances or LGF.
       *
       * @param tmpReq CreateIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIntentResponse
       */
      Models::CreateIntentResponse createIntentWithOptions(const Models::CreateIntentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an intent. The intent includes meta information such as the intent name, intent alias, and associated slot information, but does not include intent utterances or LGF.
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
       * @summary Creates a publish task in the publish center.
       *
       * @param tmpReq CreatePublishTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePublishTaskResponse
       */
      Models::CreatePublishTaskResponse createPublishTaskWithOptions(const Models::CreatePublishTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a publish task in the publish center.
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
       * @summary Adds utterance information to a specified intent.
       *
       * @param tmpReq CreateUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserSayResponse
       */
      Models::CreateUserSayResponse createUserSayWithOptions(const Models::CreateUserSayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds utterance information to a specified intent.
       *
       * @param request CreateUserSayRequest
       * @return CreateUserSayResponse
       */
      Models::CreateUserSayResponse createUserSay(const Models::CreateUserSayRequest &request);

      /**
       * @summary Deletes a category. A published category changes to the deleted and unpublished state, while an unpublished category is deleted directly.
       *
       * @param request DeleteCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCategoryResponse
       */
      Models::DeleteCategoryResponse deleteCategoryWithOptions(const Models::DeleteCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a category. A published category changes to the deleted and unpublished state, while an unpublished category is deleted directly.
       *
       * @param request DeleteCategoryRequest
       * @return DeleteCategoryResponse
       */
      Models::DeleteCategoryResponse deleteCategory(const Models::DeleteCategoryRequest &request);

      /**
       * @summary Deletes the associated knowledge of a knowledge item.
       *
       * @param request DeleteConnQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConnQuestionResponse
       */
      Models::DeleteConnQuestionResponse deleteConnQuestionWithOptions(const Models::DeleteConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the associated knowledge of a knowledge item.
       *
       * @param request DeleteConnQuestionRequest
       * @return DeleteConnQuestionResponse
       */
      Models::DeleteConnQuestionResponse deleteConnQuestion(const Models::DeleteConnQuestionRequest &request);

      /**
       * @summary Deletes an entity. This operation cascade deletes all entity members, synonyms, and regular expressions under the entity.
       *
       * @param request DeleteDSEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDSEntityResponse
       */
      Models::DeleteDSEntityResponse deleteDSEntityWithOptions(const Models::DeleteDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an entity. This operation cascade deletes all entity members, synonyms, and regular expressions under the entity.
       *
       * @param request DeleteDSEntityRequest
       * @return DeleteDSEntityResponse
       */
      Models::DeleteDSEntityResponse deleteDSEntity(const Models::DeleteDSEntityRequest &request);

      /**
       * @summary Deletes a member of a specified entity. If the entity is a standard entity, the synonyms of the member are also deleted, if any.
       *
       * @param request DeleteDSEntityValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDSEntityValueResponse
       */
      Models::DeleteDSEntityValueResponse deleteDSEntityValueWithOptions(const Models::DeleteDSEntityValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a member of a specified entity. If the entity is a standard entity, the synonyms of the member are also deleted, if any.
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
       * @summary Deletes a knowledge entry.
       *
       * @param request DeleteFaqRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaqResponse
       */
      Models::DeleteFaqResponse deleteFaqWithOptions(const Models::DeleteFaqRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a knowledge entry.
       *
       * @param request DeleteFaqRequest
       * @return DeleteFaqResponse
       */
      Models::DeleteFaqResponse deleteFaq(const Models::DeleteFaqRequest &request);

      /**
       * @summary Deletes a chatbot from both the sandbox and production environments.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a chatbot from both the sandbox and production environments.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Deletes an intent and cascade deletes all intent utterances and advanced semantic configurations (LGF) under the intent.
       *
       * @param request DeleteIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIntentResponse
       */
      Models::DeleteIntentResponse deleteIntentWithOptions(const Models::DeleteIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an intent and cascade deletes all intent utterances and advanced semantic configurations (LGF) under the intent.
       *
       * @param request DeleteIntentRequest
       * @return DeleteIntentResponse
       */
      Models::DeleteIntentResponse deleteIntent(const Models::DeleteIntentRequest &request);

      /**
       * @summary Deletes a specified advanced semantic configuration.
       *
       * @param request DeleteLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLgfResponse
       */
      Models::DeleteLgfResponse deleteLgfWithOptions(const Models::DeleteLgfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified advanced semantic configuration.
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
       * @summary Deletes an answer.
       *
       * @param request DeleteSolutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSolutionResponse
       */
      Models::DeleteSolutionResponse deleteSolutionWithOptions(const Models::DeleteSolutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an answer.
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
       * @summary Modifies the utterance information of an intent.
       *
       * @param request DeleteUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserSayResponse
       */
      Models::DeleteUserSayResponse deleteUserSayWithOptions(const Models::DeleteUserSayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the utterance information of an intent.
       *
       * @param request DeleteUserSayRequest
       * @return DeleteUserSayResponse
       */
      Models::DeleteUserSayResponse deleteUserSay(const Models::DeleteUserSayRequest &request);

      /**
       * @summary Queries the information of a single category.
       *
       * @param request DescribeCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCategoryResponse
       */
      Models::DescribeCategoryResponse describeCategoryWithOptions(const Models::DescribeCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a single category.
       *
       * @param request DescribeCategoryRequest
       * @return DescribeCategoryResponse
       */
      Models::DescribeCategoryResponse describeCategory(const Models::DescribeCategoryRequest &request);

      /**
       * @summary Queries the metadata of a specified entity under a specified chatbot, such as entity type, entity name, creation time, and modification time.
       *
       * @param request DescribeDSEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDSEntityResponse
       */
      Models::DescribeDSEntityResponse describeDSEntityWithOptions(const Models::DescribeDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metadata of a specified entity under a specified chatbot, such as entity type, entity name, creation time, and modification time.
       *
       * @param request DescribeDSEntityRequest
       * @return DescribeDSEntityResponse
       */
      Models::DescribeDSEntityResponse describeDSEntity(const Models::DescribeDSEntityRequest &request);

      /**
       * @summary Queries the details of a document.
       *
       * @param request DescribeDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDocResponse
       */
      Models::DescribeDocResponse describeDocWithOptions(const Models::DescribeDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a document.
       *
       * @param request DescribeDocRequest
       * @return DescribeDocResponse
       */
      Models::DescribeDocResponse describeDoc(const Models::DescribeDocRequest &request);

      /**
       * @summary Queries the details of a knowledge entry.
       *
       * @param request DescribeFaqRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFaqResponse
       */
      Models::DescribeFaqResponse describeFaqWithOptions(const Models::DescribeFaqRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a knowledge entry.
       *
       * @param request DescribeFaqRequest
       * @return DescribeFaqResponse
       */
      Models::DescribeFaqResponse describeFaq(const Models::DescribeFaqRequest &request);

      /**
       * @summary Queries the details of a chatbot.
       *
       * @param request DescribeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstanceWithOptions(const Models::DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a chatbot.
       *
       * @param request DescribeInstanceRequest
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstance(const Models::DescribeInstanceRequest &request);

      /**
       * @summary Returns the metadata of a specified intent, such as the intent type, intent name, creation time, and modification time.
       *
       * @param request DescribeIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIntentResponse
       */
      Models::DescribeIntentResponse describeIntentWithOptions(const Models::DescribeIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the metadata of a specified intent, such as the intent type, intent name, creation time, and modification time.
       *
       * @param request DescribeIntentRequest
       * @return DescribeIntentResponse
       */
      Models::DescribeIntentResponse describeIntent(const Models::DescribeIntentRequest &request);

      /**
       * @summary Queries the details of a perspective.
       *
       * @param request DescribePerspectiveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePerspectiveResponse
       */
      Models::DescribePerspectiveResponse describePerspectiveWithOptions(const Models::DescribePerspectiveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a perspective.
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
       * @summary Saves user feedback on Q&A results.
       *
       * @param request FeedbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FeedbackResponse
       */
      Models::FeedbackResponse feedbackWithOptions(const Models::FeedbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves user feedback on Q&A results.
       *
       * @param request FeedbackRequest
       * @return FeedbackResponse
       */
      Models::FeedbackResponse feedback(const Models::FeedbackRequest &request);

      /**
       * @summary Retrieves a token for passwordless logon in the chat window, which carries the enterprise identity of the user.
       *
       * @description For security reasons, the generated token is valid only for the first use within the expiration period. If the same user logs on from multiple browsers, call this operation multiple times.
       *
       * @param request GenerateUserAccessTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateUserAccessTokenResponse
       */
      Models::GenerateUserAccessTokenResponse generateUserAccessTokenWithOptions(const Models::GenerateUserAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a token for passwordless logon in the chat window, which carries the enterprise identity of the user.
       *
       * @description For security reasons, the generated token is valid only for the first use within the expiration period. If the same user logs on from multiple browsers, call this operation multiple times.
       *
       * @param request GenerateUserAccessTokenRequest
       * @return GenerateUserAccessTokenResponse
       */
      Models::GenerateUserAccessTokenResponse generateUserAccessToken(const Models::GenerateUserAccessTokenRequest &request);

      /**
       * @summary Retrieves the business space ID.
       *
       * @param request GetAgentInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentInfoResponse
       */
      Models::GetAgentInfoResponse getAgentInfoWithOptions(const Models::GetAgentInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the business space ID.
       *
       * @param request GetAgentInfoRequest
       * @return GetAgentInfoResponse
       */
      Models::GetAgentInfoResponse getAgentInfo(const Models::GetAgentInfoRequest &request);

      /**
       * @summary Retrieves the result of an asynchronous service execution. This operation is used together with the Chat operation.
       *
       * @description Retrieves the result of an asynchronous service execution.
       *
       * @param request GetAsyncResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsyncResultResponse
       */
      Models::GetAsyncResultResponse getAsyncResultWithOptions(const Models::GetAsyncResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the result of an asynchronous service execution. This operation is used together with the Chat operation.
       *
       * @description Retrieves the result of an asynchronous service execution.
       *
       * @param request GetAsyncResultRequest
       * @return GetAsyncResultResponse
       */
      Models::GetAsyncResultResponse getAsyncResult(const Models::GetAsyncResultRequest &request);

      /**
       * @summary Queries the overview metrics of chatbot Q&A.
       *
       * @description Only data from T-1 (excluding the current day) can be queried.
       *
       * @param request GetBotSessionDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBotSessionDataResponse
       */
      Models::GetBotSessionDataResponse getBotSessionDataWithOptions(const Models::GetBotSessionDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the overview metrics of chatbot Q&A.
       *
       * @description Only data from T-1 (excluding the current day) can be queried.
       *
       * @param request GetBotSessionDataRequest
       * @return GetBotSessionDataResponse
       */
      Models::GetBotSessionDataResponse getBotSessionData(const Models::GetBotSessionDataRequest &request);

      /**
       * @summary Queries the publish progress of a chatbot.
       *
       * @param request GetInstancePublishTaskStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstancePublishTaskStateResponse
       */
      Models::GetInstancePublishTaskStateResponse getInstancePublishTaskStateWithOptions(const Models::GetInstancePublishTaskStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the publish progress of a chatbot.
       *
       * @param request GetInstancePublishTaskStateRequest
       * @return GetInstancePublishTaskStateResponse
       */
      Models::GetInstancePublishTaskStateResponse getInstancePublishTaskState(const Models::GetInstancePublishTaskStateRequest &request);

      /**
       * @summary Queries the publish progress.
       *
       * @param request GetPublishTaskStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPublishTaskStateResponse
       */
      Models::GetPublishTaskStateResponse getPublishTaskStateWithOptions(const Models::GetPublishTaskStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the publish progress.
       *
       * @param request GetPublishTaskStateRequest
       * @return GetPublishTaskStateResponse
       */
      Models::GetPublishTaskStateResponse getPublishTaskState(const Models::GetPublishTaskStateRequest &request);

      /**
       * @summary Initializes an IM connection with custom settings by using the from value generated from the channel backend configuration. Supports passing a user authentication token during initialization.
       *
       * @param request InitIMConnectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitIMConnectResponse
       */
      Models::InitIMConnectResponse initIMConnectWithOptions(const Models::InitIMConnectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes an IM connection with custom settings by using the from value generated from the channel backend configuration. Supports passing a user authentication token during initialization.
       *
       * @param request InitIMConnectRequest
       * @return InitIMConnectResponse
       */
      Models::InitIMConnectResponse initIMConnect(const Models::InitIMConnectRequest &request);

      /**
       * @summary Associates knowledge categories with a chatbot.
       *
       * @param request LinkInstanceCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LinkInstanceCategoryResponse
       */
      Models::LinkInstanceCategoryResponse linkInstanceCategoryWithOptions(const Models::LinkInstanceCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates knowledge categories with a chatbot.
       *
       * @param request LinkInstanceCategoryRequest
       * @return LinkInstanceCategoryResponse
       */
      Models::LinkInstanceCategoryResponse linkInstanceCategory(const Models::LinkInstanceCategoryRequest &request);

      /**
       * @summary Retrieves the list of business spaces for the current Alibaba Cloud account.
       *
       * @param request ListAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentResponse
       */
      Models::ListAgentResponse listAgentWithOptions(const Models::ListAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of business spaces for the current Alibaba Cloud account.
       *
       * @param request ListAgentRequest
       * @return ListAgentResponse
       */
      Models::ListAgentResponse listAgent(const Models::ListAgentRequest &request);

      /**
       * @summary Retrieves the list of categories.
       *
       * @param request ListCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCategoryResponse
       */
      Models::ListCategoryResponse listCategoryWithOptions(const Models::ListCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of categories.
       *
       * @param request ListCategoryRequest
       * @return ListCategoryResponse
       */
      Models::ListCategoryResponse listCategory(const Models::ListCategoryRequest &request);

      /**
       * @summary Queries the list of associated questions for a knowledge item.
       *
       * @param request ListConnQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConnQuestionResponse
       */
      Models::ListConnQuestionResponse listConnQuestionWithOptions(const Models::ListConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of associated questions for a knowledge item.
       *
       * @param request ListConnQuestionRequest
       * @return ListConnQuestionResponse
       */
      Models::ListConnQuestionResponse listConnQuestion(const Models::ListConnQuestionRequest &request);

      /**
       * @summary Queries the list of entities under a specified chatbot. Only the metadata of each entity is returned, such as entity type, entity name, creation time, and modification time.
       *
       * @param request ListDSEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDSEntityResponse
       */
      Models::ListDSEntityResponse listDSEntityWithOptions(const Models::ListDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of entities under a specified chatbot. Only the metadata of each entity is returned, such as entity type, entity name, creation time, and modification time.
       *
       * @param request ListDSEntityRequest
       * @return ListDSEntityResponse
       */
      Models::ListDSEntityResponse listDSEntity(const Models::ListDSEntityRequest &request);

      /**
       * @summary Queries the list and details of entity members for a specified entity. Keyword filtering (contains) is supported. The filtering scope includes entity values and synonyms.
       *
       * @param request ListDSEntityValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDSEntityValueResponse
       */
      Models::ListDSEntityValueResponse listDSEntityValueWithOptions(const Models::ListDSEntityValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list and details of entity members for a specified entity. Keyword filtering (contains) is supported. The filtering scope includes entity values and synonyms.
       *
       * @param request ListDSEntityValueRequest
       * @return ListDSEntityValueResponse
       */
      Models::ListDSEntityValueResponse listDSEntityValue(const Models::ListDSEntityValueRequest &request);

      /**
       * @summary Queries the list of chatbots.
       *
       * @param request ListInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceResponse
       */
      Models::ListInstanceResponse listInstanceWithOptions(const Models::ListInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of chatbots.
       *
       * @param request ListInstanceRequest
       * @return ListInstanceResponse
       */
      Models::ListInstanceResponse listInstance(const Models::ListInstanceRequest &request);

      /**
       * @summary Queries the list of intents under a specified chatbot. Only the metadata of each intent is returned, such as the intent type, intent name, creation time, and modification time.
       *
       * @param request ListIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntentResponse
       */
      Models::ListIntentResponse listIntentWithOptions(const Models::ListIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of intents under a specified chatbot. Only the metadata of each intent is returned, such as the intent type, intent name, creation time, and modification time.
       *
       * @param request ListIntentRequest
       * @return ListIntentResponse
       */
      Models::ListIntentResponse listIntent(const Models::ListIntentRequest &request);

      /**
       * @summary Queries the advanced semantic configuration (LGF) of a specified intent.
       *
       * @param request ListLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLgfResponse
       */
      Models::ListLgfResponse listLgfWithOptions(const Models::ListLgfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the advanced semantic configuration (LGF) of a specified intent.
       *
       * @param request ListLgfRequest
       * @return ListLgfResponse
       */
      Models::ListLgfResponse listLgf(const Models::ListLgfRequest &request);

      /**
       * @summary Retrieves the list of SaaS integration information.
       *
       * @param request ListSaasInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSaasInfoResponse
       */
      Models::ListSaasInfoResponse listSaasInfoWithOptions(const Models::ListSaasInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of SaaS integration information.
       *
       * @param request ListSaasInfoRequest
       * @return ListSaasInfoResponse
       */
      Models::ListSaasInfoResponse listSaasInfo(const Models::ListSaasInfoRequest &request);

      /**
       * @summary Retrieves the list of permission integration information. You can use the permission groups returned in this list to grant permissions to users.
       *
       * @param request ListSaasPermissionGroupInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSaasPermissionGroupInfosResponse
       */
      Models::ListSaasPermissionGroupInfosResponse listSaasPermissionGroupInfosWithOptions(const Models::ListSaasPermissionGroupInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of permission integration information. You can use the permission groups returned in this list to grant permissions to users.
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
       * @summary Queries the list of answers for a knowledge item.
       *
       * @param request ListSolutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSolutionResponse
       */
      Models::ListSolutionResponse listSolutionWithOptions(const Models::ListSolutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of answers for a knowledge item.
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
       * @summary Retrieves the session history details.
       *
       * @param request ListTongyiChatHistorysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTongyiChatHistorysResponse
       */
      Models::ListTongyiChatHistorysResponse listTongyiChatHistorysWithOptions(const Models::ListTongyiChatHistorysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the session history details.
       *
       * @param request ListTongyiChatHistorysRequest
       * @return ListTongyiChatHistorysResponse
       */
      Models::ListTongyiChatHistorysResponse listTongyiChatHistorys(const Models::ListTongyiChatHistorysRequest &request);

      /**
       * @summary Queries the conversation records of a single session for Chatbot Tongyi Edition.
       *
       * @description Only conversation records from the last 2 hours can be queried.
       *
       * @param request ListTongyiConversationLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTongyiConversationLogsResponse
       */
      Models::ListTongyiConversationLogsResponse listTongyiConversationLogsWithOptions(const Models::ListTongyiConversationLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the conversation records of a single session for Chatbot Tongyi Edition.
       *
       * @description Only conversation records from the last 2 hours can be queried.
       *
       * @param request ListTongyiConversationLogsRequest
       * @return ListTongyiConversationLogsResponse
       */
      Models::ListTongyiConversationLogsResponse listTongyiConversationLogs(const Models::ListTongyiConversationLogsRequest &request);

      /**
       * @summary Queries the utterance content and associated slot information of a specified intent. Supports filtering utterances by keyword (contains).
       *
       * @param request ListUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserSayResponse
       */
      Models::ListUserSayResponse listUserSayWithOptions(const Models::ListUserSayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the utterance content and associated slot information of a specified intent. Supports filtering utterances by keyword (contains).
       *
       * @param request ListUserSayRequest
       * @return ListUserSayResponse
       */
      Models::ListUserSayResponse listUserSay(const Models::ListUserSayRequest &request);

      /**
       * @summary Returns the natural language understanding (NLU) result of a chatbot for a user query. Currently, only NLU information from dialog flow and the central controller is supported. Other engines will be supported as needed.
       *
       * @param request NluRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return NluResponse
       */
      Models::NluResponse nluWithOptions(const Models::NluRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the natural language understanding (NLU) result of a chatbot for a user query. Currently, only NLU information from dialog flow and the central controller is supported. Other engines will be supported as needed.
       *
       * @param request NluRequest
       * @return NluResponse
       */
      Models::NluResponse nlu(const Models::NluRequest &request);

      /**
       * @summary Queries the list of perspectives.
       *
       * @param request QueryPerspectivesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPerspectivesResponse
       */
      Models::QueryPerspectivesResponse queryPerspectivesWithOptions(const Models::QueryPerspectivesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of perspectives.
       *
       * @param request QueryPerspectivesRequest
       * @return QueryPerspectivesResponse
       */
      Models::QueryPerspectivesResponse queryPerspectives(const Models::QueryPerspectivesRequest &request);

      /**
       * @summary Retries document processing.
       *
       * @param request RetryDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryDocResponse
       */
      Models::RetryDocResponse retryDocWithOptions(const Models::RetryDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retries document processing.
       *
       * @param request RetryDocRequest
       * @return RetryDocResponse
       */
      Models::RetryDocResponse retryDoc(const Models::RetryDocRequest &request);

      /**
       * @summary Searches for documents.
       *
       * @param tmpReq SearchDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchDocResponse
       */
      Models::SearchDocResponse searchDocWithOptions(const Models::SearchDocRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for documents.
       *
       * @param request SearchDocRequest
       * @return SearchDocResponse
       */
      Models::SearchDocResponse searchDoc(const Models::SearchDocRequest &request);

      /**
       * @summary Searches for knowledge.
       *
       * @param tmpReq SearchFaqRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchFaqResponse
       */
      Models::SearchFaqResponse searchFaqWithOptions(const Models::SearchFaqRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for knowledge.
       *
       * @param request SearchFaqRequest
       * @return SearchFaqResponse
       */
      Models::SearchFaqResponse searchFaq(const Models::SearchFaqRequest &request);

      /**
       * @summary Retrieves the debugging information for large language model Q&A.
       *
       * @description Supports only new-version chatbots. You can query only data generated within the last 90 days.
       *
       * @param request TongyiChatDebugInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TongyiChatDebugInfoResponse
       */
      Models::TongyiChatDebugInfoResponse tongyiChatDebugInfoWithOptions(const Models::TongyiChatDebugInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the debugging information for large language model Q&A.
       *
       * @description Supports only new-version chatbots. You can query only data generated within the last 90 days.
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
       * @summary Updates an association.
       *
       * @param request UpdateConnQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConnQuestionResponse
       */
      Models::UpdateConnQuestionResponse updateConnQuestionWithOptions(const Models::UpdateConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an association.
       *
       * @param request UpdateConnQuestionRequest
       * @return UpdateConnQuestionResponse
       */
      Models::UpdateConnQuestionResponse updateConnQuestion(const Models::UpdateConnQuestionRequest &request);

      /**
       * @summary Modifies the meta information of an entity. Only the entity name can be modified. The entity type cannot be modified.
       *
       * @param request UpdateDSEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDSEntityResponse
       */
      Models::UpdateDSEntityResponse updateDSEntityWithOptions(const Models::UpdateDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the meta information of an entity. Only the entity name can be modified. The entity type cannot be modified.
       *
       * @param request UpdateDSEntityRequest
       * @return UpdateDSEntityResponse
       */
      Models::UpdateDSEntityResponse updateDSEntity(const Models::UpdateDSEntityRequest &request);

      /**
       * @summary Modifies a member of a specified entity. Two types of data can be modified: entity values with synonyms, and regular expressions. Note: Adding a regular expression to a standard entity is not allowed, and vice versa.
       *
       * @param tmpReq UpdateDSEntityValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDSEntityValueResponse
       */
      Models::UpdateDSEntityValueResponse updateDSEntityValueWithOptions(const Models::UpdateDSEntityValueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a member of a specified entity. Two types of data can be modified: entity values with synonyms, and regular expressions. Note: Adding a regular expression to a standard entity is not allowed, and vice versa.
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
       * @summary Edits a knowledge entry.
       *
       * @param tmpReq UpdateFaqRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFaqResponse
       */
      Models::UpdateFaqResponse updateFaqWithOptions(const Models::UpdateFaqRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits a knowledge entry.
       *
       * @param request UpdateFaqRequest
       * @return UpdateFaqResponse
       */
      Models::UpdateFaqResponse updateFaq(const Models::UpdateFaqRequest &request);

      /**
       * @summary Updates the name and description of a chatbot.
       *
       * @param request UpdateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const Models::UpdateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name and description of a chatbot.
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const Models::UpdateInstanceRequest &request);

      /**
       * @summary Modifies an intent, including the meta information of the intent, such as the intent name, intent alias, and slot information associated with the intent. This operation does not include intent utterances or LGF.
       *
       * @param tmpReq UpdateIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIntentResponse
       */
      Models::UpdateIntentResponse updateIntentWithOptions(const Models::UpdateIntentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an intent, including the meta information of the intent, such as the intent name, intent alias, and slot information associated with the intent. This operation does not include intent utterances or LGF.
       *
       * @param request UpdateIntentRequest
       * @return UpdateIntentResponse
       */
      Models::UpdateIntentResponse updateIntent(const Models::UpdateIntentRequest &request);

      /**
       * @summary Creates an advanced semantic configuration (LGF) for a specified intent.
       *
       * @param tmpReq UpdateLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLgfResponse
       */
      Models::UpdateLgfResponse updateLgfWithOptions(const Models::UpdateLgfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an advanced semantic configuration (LGF) for a specified intent.
       *
       * @param request UpdateLgfRequest
       * @return UpdateLgfResponse
       */
      Models::UpdateLgfResponse updateLgf(const Models::UpdateLgfRequest &request);

      /**
       * @summary Updates the name and description of a perspective.
       *
       * @param request UpdatePerspectiveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePerspectiveResponse
       */
      Models::UpdatePerspectiveResponse updatePerspectiveWithOptions(const Models::UpdatePerspectiveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name and description of a perspective.
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
       * @summary Updates an answer.
       *
       * @param tmpReq UpdateSolutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSolutionResponse
       */
      Models::UpdateSolutionResponse updateSolutionWithOptions(const Models::UpdateSolutionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an answer.
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
       * @summary Modifies the utterance information of an intent.
       *
       * @param tmpReq UpdateUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserSayResponse
       */
      Models::UpdateUserSayResponse updateUserSayWithOptions(const Models::UpdateUserSayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the utterance information of an intent.
       *
       * @param request UpdateUserSayRequest
       * @return UpdateUserSayResponse
       */
      Models::UpdateUserSayResponse updateUserSay(const Models::UpdateUserSayRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
