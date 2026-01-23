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
       * @summary 查询Connector信息
       *
       * @param request GetConnectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConnectorResponse
       */
      Models::GetConnectorResponse getConnectorWithOptions(const Models::GetConnectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Connector信息
       *
       * @param request GetConnectorRequest
       * @return GetConnectorResponse
       */
      Models::GetConnectorResponse getConnector(const Models::GetConnectorRequest &request);

      /**
       * @summary 查询Group信息
       *
       * @param request GetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroupWithOptions(const Models::GetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Group信息
       *
       * @param request GetGroupRequest
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroup(const Models::GetGroupRequest &request);

      /**
       * @summary 查询Project资源详细信息
       *
       * @param request GetProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProjectWithOptions(const Models::GetProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Project资源详细信息
       *
       * @param request GetProjectRequest
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProject(const Models::GetProjectRequest &request);

      /**
       * @summary 读取Topic数据
       *
       * @param request GetRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecordsResponse
       */
      Models::GetRecordsResponse getRecordsWithOptions(const Models::GetRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 读取Topic数据
       *
       * @param request GetRecordsRequest
       * @return GetRecordsResponse
       */
      Models::GetRecordsResponse getRecords(const Models::GetRecordsRequest &request);

      /**
       * @summary 查询Schema信息
       *
       * @param request GetSchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSchemaResponse
       */
      Models::GetSchemaResponse getSchemaWithOptions(const Models::GetSchemaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Schema信息
       *
       * @param request GetSchemaRequest
       * @return GetSchemaResponse
       */
      Models::GetSchemaResponse getSchema(const Models::GetSchemaRequest &request);

      /**
       * @summary 查询Subscription信息
       *
       * @param request GetSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubscriptionResponse
       */
      Models::GetSubscriptionResponse getSubscriptionWithOptions(const Models::GetSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Subscription信息
       *
       * @param request GetSubscriptionRequest
       * @return GetSubscriptionResponse
       */
      Models::GetSubscriptionResponse getSubscription(const Models::GetSubscriptionRequest &request);

      /**
       * @summary 查询Topic信息
       *
       * @param request GetTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicResponse
       */
      Models::GetTopicResponse getTopicWithOptions(const Models::GetTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Topic信息
       *
       * @param request GetTopicRequest
       * @return GetTopicResponse
       */
      Models::GetTopicResponse getTopic(const Models::GetTopicRequest &request);

      /**
       * @summary 查询Connector列表信息
       *
       * @param request ListConnectorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConnectorsResponse
       */
      Models::ListConnectorsResponse listConnectorsWithOptions(const Models::ListConnectorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Connector列表信息
       *
       * @param request ListConnectorsRequest
       * @return ListConnectorsResponse
       */
      Models::ListConnectorsResponse listConnectors(const Models::ListConnectorsRequest &request);

      /**
       * @summary 查询Group列表信息
       *
       * @param request ListGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroupsWithOptions(const Models::ListGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Group列表信息
       *
       * @param request ListGroupsRequest
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroups(const Models::ListGroupsRequest &request);

      /**
       * @summary 查询Project列表信息
       *
       * @param request ListProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjectsWithOptions(const Models::ListProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Project列表信息
       *
       * @param request ListProjectsRequest
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjects(const Models::ListProjectsRequest &request);

      /**
       * @summary 查询Schema列表信息
       *
       * @param request ListSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSchemasResponse
       */
      Models::ListSchemasResponse listSchemasWithOptions(const Models::ListSchemasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Schema列表信息
       *
       * @param request ListSchemasRequest
       * @return ListSchemasResponse
       */
      Models::ListSchemasResponse listSchemas(const Models::ListSchemasRequest &request);

      /**
       * @summary 查询Subscription列表信息
       *
       * @param request ListSubscriptionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubscriptionsResponse
       */
      Models::ListSubscriptionsResponse listSubscriptionsWithOptions(const Models::ListSubscriptionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Subscription列表信息
       *
       * @param request ListSubscriptionsRequest
       * @return ListSubscriptionsResponse
       */
      Models::ListSubscriptionsResponse listSubscriptions(const Models::ListSubscriptionsRequest &request);

      /**
       * @summary 查询Topic列表信息
       *
       * @param request ListTopicsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTopicsResponse
       */
      Models::ListTopicsResponse listTopicsWithOptions(const Models::ListTopicsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Topic列表信息
       *
       * @param request ListTopicsRequest
       * @return ListTopicsResponse
       */
      Models::ListTopicsResponse listTopics(const Models::ListTopicsRequest &request);

      /**
       * @summary 写入数据
       *
       * @param tmpReq PutRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutRecordsResponse
       */
      Models::PutRecordsResponse putRecordsWithOptions(const Models::PutRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 写入数据
       *
       * @param request PutRecordsRequest
       * @return PutRecordsResponse
       */
      Models::PutRecordsResponse putRecords(const Models::PutRecordsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
