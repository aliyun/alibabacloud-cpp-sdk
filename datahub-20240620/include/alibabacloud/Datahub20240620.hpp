// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DATAHUB20240620_HPP_
#define ALIBABACLOUD_DATAHUB20240620_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Datahub20240620Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Datahub20240620.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates a project.
       *
       * @description Creates a project.
       *
       * @param request CreateProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProjectWithOptions(const Models::CreateProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a project.
       *
       * @description Creates a project.
       *
       * @param request CreateProjectRequest
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProject(const Models::CreateProjectRequest &request);

      /**
       * @summary 创建Subscription资源
       *
       * @description 创建订阅信息
       *
       * @param request CreateSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSubscriptionResponse
       */
      Models::CreateSubscriptionResponse createSubscriptionWithOptions(const Models::CreateSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Subscription资源
       *
       * @description 创建订阅信息
       *
       * @param request CreateSubscriptionRequest
       * @return CreateSubscriptionResponse
       */
      Models::CreateSubscriptionResponse createSubscription(const Models::CreateSubscriptionRequest &request);

      /**
       * @summary A topic is the smallest unit for DataHub subscription and publishing. You can use a topic to represent a type or category of streaming data.
       *
       * @description Creates a topic resource.
       *
       * @param request CreateTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTopicResponse
       */
      Models::CreateTopicResponse createTopicWithOptions(const Models::CreateTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A topic is the smallest unit for DataHub subscription and publishing. You can use a topic to represent a type or category of streaming data.
       *
       * @description Creates a topic resource.
       *
       * @param request CreateTopicRequest
       * @return CreateTopicResponse
       */
      Models::CreateTopicResponse createTopic(const Models::CreateTopicRequest &request);

      /**
       * @summary Deletes a project. Before deleting a project, delete all resources under the project, including topics, synchronization tasks, and subscription tasks.
       *
       * @description Deletes a project.
       *
       * @param request DeleteProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProjectWithOptions(const Models::DeleteProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a project. Before deleting a project, delete all resources under the project, including topics, synchronization tasks, and subscription tasks.
       *
       * @description Deletes a project.
       *
       * @param request DeleteProjectRequest
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProject(const Models::DeleteProjectRequest &request);

      /**
       * @summary 删除Subscription资源
       *
       * @description 删除订阅任务
       *
       * @param request DeleteSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSubscriptionResponse
       */
      Models::DeleteSubscriptionResponse deleteSubscriptionWithOptions(const Models::DeleteSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Subscription资源
       *
       * @description 删除订阅任务
       *
       * @param request DeleteSubscriptionRequest
       * @return DeleteSubscriptionResponse
       */
      Models::DeleteSubscriptionResponse deleteSubscription(const Models::DeleteSubscriptionRequest &request);

      /**
       * @summary Deletes a topic resource. Before deleting a topic resource, delete all subscriptions and sync tasks under the topic.
       *
       * @description Deletes a topic resource.
       *
       * @param request DeleteTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTopicResponse
       */
      Models::DeleteTopicResponse deleteTopicWithOptions(const Models::DeleteTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a topic resource. Before deleting a topic resource, delete all subscriptions and sync tasks under the topic.
       *
       * @description Deletes a topic resource.
       *
       * @param request DeleteTopicRequest
       * @return DeleteTopicResponse
       */
      Models::DeleteTopicResponse deleteTopic(const Models::DeleteTopicRequest &request);

      /**
       * @summary Queries the information about a synchronization task.
       *
       * @description Queries the information about a synchronization task.
       *
       * @param request GetConnectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConnectorResponse
       */
      Models::GetConnectorResponse getConnectorWithOptions(const Models::GetConnectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a synchronization task.
       *
       * @description Queries the information about a synchronization task.
       *
       * @param request GetConnectorRequest
       * @return GetConnectorResponse
       */
      Models::GetConnectorResponse getConnector(const Models::GetConnectorRequest &request);

      /**
       * @summary Queries the information about a consumer group.
       *
       * @description Queries the information about a consumer group.
       *
       * @param request GetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroupWithOptions(const Models::GetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a consumer group.
       *
       * @description Queries the information about a consumer group.
       *
       * @param request GetGroupRequest
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroup(const Models::GetGroupRequest &request);

      /**
       * @summary Queries project information.
       *
       * @description Queries project information.
       *
       * @param request GetProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProjectWithOptions(const Models::GetProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries project information.
       *
       * @description Queries project information.
       *
       * @param request GetProjectRequest
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProject(const Models::GetProjectRequest &request);

      /**
       * @summary Reads data from a specified topic. This operation is primarily used for debugging. For high-volume data reading, refer to the SDK documentation.
       *
       * @description This operation is intended for debugging purposes. Do not use this operation to read large amounts of data.
       *
       * @param request GetRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecordsResponse
       */
      Models::GetRecordsResponse getRecordsWithOptions(const Models::GetRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reads data from a specified topic. This operation is primarily used for debugging. For high-volume data reading, refer to the SDK documentation.
       *
       * @description This operation is intended for debugging purposes. Do not use this operation to read large amounts of data.
       *
       * @param request GetRecordsRequest
       * @return GetRecordsResponse
       */
      Models::GetRecordsResponse getRecords(const Models::GetRecordsRequest &request);

      /**
       * @summary Queries schema information.
       *
       * @description Queries schema information.
       *
       * @param request GetSchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSchemaResponse
       */
      Models::GetSchemaResponse getSchemaWithOptions(const Models::GetSchemaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries schema information.
       *
       * @description Queries schema information.
       *
       * @param request GetSchemaRequest
       * @return GetSchemaResponse
       */
      Models::GetSchemaResponse getSchema(const Models::GetSchemaRequest &request);

      /**
       * @summary Queries subscription information.
       *
       * @description Queries subscription information.
       *
       * @param request GetSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubscriptionResponse
       */
      Models::GetSubscriptionResponse getSubscriptionWithOptions(const Models::GetSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries subscription information.
       *
       * @description Queries subscription information.
       *
       * @param request GetSubscriptionRequest
       * @return GetSubscriptionResponse
       */
      Models::GetSubscriptionResponse getSubscription(const Models::GetSubscriptionRequest &request);

      /**
       * @summary Queries topic information.
       *
       * @description Queries topic information.
       *
       * @param request GetTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicResponse
       */
      Models::GetTopicResponse getTopicWithOptions(const Models::GetTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries topic information.
       *
       * @description Queries topic information.
       *
       * @param request GetTopicRequest
       * @return GetTopicResponse
       */
      Models::GetTopicResponse getTopic(const Models::GetTopicRequest &request);

      /**
       * @summary Retrieves a list of synchronization tasks.
       *
       * @description Queries the list of synchronization tasks.
       *
       * @param request ListConnectorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConnectorsResponse
       */
      Models::ListConnectorsResponse listConnectorsWithOptions(const Models::ListConnectorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of synchronization tasks.
       *
       * @description Queries the list of synchronization tasks.
       *
       * @param request ListConnectorsRequest
       * @return ListConnectorsResponse
       */
      Models::ListConnectorsResponse listConnectors(const Models::ListConnectorsRequest &request);

      /**
       * @summary Retrieves a list of consumer groups.
       *
       * @description Queries the list of consumer groups.
       *
       * @param request ListGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroupsWithOptions(const Models::ListGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of consumer groups.
       *
       * @description Queries the list of consumer groups.
       *
       * @param request ListGroupsRequest
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroups(const Models::ListGroupsRequest &request);

      /**
       * @summary Retrieves a list of projects.
       *
       * @description Queries the list of projects.
       *
       * @param request ListProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjectsWithOptions(const Models::ListProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of projects.
       *
       * @description Queries the list of projects.
       *
       * @param request ListProjectsRequest
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjects(const Models::ListProjectsRequest &request);

      /**
       * @summary Lists schemas.
       *
       * @description Queries schema list information.
       *
       * @param request ListSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSchemasResponse
       */
      Models::ListSchemasResponse listSchemasWithOptions(const Models::ListSchemasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists schemas.
       *
       * @description Queries schema list information.
       *
       * @param request ListSchemasRequest
       * @return ListSchemasResponse
       */
      Models::ListSchemasResponse listSchemas(const Models::ListSchemasRequest &request);

      /**
       * @summary Retrieves a list of subscriptions.
       *
       * @description Queries subscription list information.
       *
       * @param request ListSubscriptionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubscriptionsResponse
       */
      Models::ListSubscriptionsResponse listSubscriptionsWithOptions(const Models::ListSubscriptionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of subscriptions.
       *
       * @description Queries subscription list information.
       *
       * @param request ListSubscriptionsRequest
       * @return ListSubscriptionsResponse
       */
      Models::ListSubscriptionsResponse listSubscriptions(const Models::ListSubscriptionsRequest &request);

      /**
       * @summary Retrieves a list of topics.
       *
       * @description Queries the list of topics.
       *
       * @param request ListTopicsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTopicsResponse
       */
      Models::ListTopicsResponse listTopicsWithOptions(const Models::ListTopicsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of topics.
       *
       * @description Queries the list of topics.
       *
       * @param request ListTopicsRequest
       * @return ListTopicsResponse
       */
      Models::ListTopicsResponse listTopics(const Models::ListTopicsRequest &request);

      /**
       * @summary Writes data to a specified topic. This operation is primarily intended for debugging. For high-volume data writes, refer to the SDK documentation.
       *
       * @description This operation is primarily intended for debugging. Do not use this operation to write large amounts of data.
       *
       * @param tmpReq PutRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutRecordsResponse
       */
      Models::PutRecordsResponse putRecordsWithOptions(const Models::PutRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Writes data to a specified topic. This operation is primarily intended for debugging. For high-volume data writes, refer to the SDK documentation.
       *
       * @description This operation is primarily intended for debugging. Do not use this operation to write large amounts of data.
       *
       * @param request PutRecordsRequest
       * @return PutRecordsResponse
       */
      Models::PutRecordsResponse putRecords(const Models::PutRecordsRequest &request);

      /**
       * @summary Updates the description of a project.
       *
       * @description Updates the description of a project.
       *
       * @param request UpdateProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProjectWithOptions(const Models::UpdateProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of a project.
       *
       * @description Updates the description of a project.
       *
       * @param request UpdateProjectRequest
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProject(const Models::UpdateProjectRequest &request);

      /**
       * @summary Updates the description of a topic.
       *
       * @description Updates the description of a topic.
       *
       * @param request UpdateTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTopicResponse
       */
      Models::UpdateTopicResponse updateTopicWithOptions(const Models::UpdateTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of a topic.
       *
       * @description Updates the description of a topic.
       *
       * @param request UpdateTopicRequest
       * @return UpdateTopicResponse
       */
      Models::UpdateTopicResponse updateTopic(const Models::UpdateTopicRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
