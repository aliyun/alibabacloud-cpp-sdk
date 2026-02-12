// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ONS20190214_HPP_
#define ALIBABACLOUD_ONS20190214_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Ons20190214Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Ons20190214.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Queries the tags that are attached to a specified resource.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * When you call the **ListTagResources** operation, specify at least one of the following parameters in the request: **Key** and **ResourceId**. You can specify a resource ID to query all tags that are attached to the specified resource. You can also specify a tag key to query the tag value and resource to which the tag is attached.
       * *   If you include the **Key** parameter in a request, you can obtain the tag value and the ID of the resource to which the tag is attached.
       * *   If you include the **ResourceId** parameter in a request, you can obtain the keys and values of all tags that are attached to the specified resource.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are attached to a specified resource.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * When you call the **ListTagResources** operation, specify at least one of the following parameters in the request: **Key** and **ResourceId**. You can specify a resource ID to query all tags that are attached to the specified resource. You can also specify a tag key to query the tag value and resource to which the tag is attached.
       * *   If you include the **Key** parameter in a request, you can obtain the tag value and the ID of the resource to which the tag is attached.
       * *   If you include the **ResourceId** parameter in a request, you can obtain the keys and values of all tags that are attached to the specified resource.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the information about message accumulation in topics to which a specified consumer group subscribes. The returned information includes the number of accumulated messages and the consumption latency.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation in scenarios in which you want to know the message consumption progress of a specified consumer group in production environments. You can obtain the information about message consumption and consumption latency based on the returned information. This operation returns the total number of accumulated messages in all topics to which the specified consumer group subscribes and the number of accumulated messages in each topic.
       *
       * @param request OnsConsumerAccumulateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsConsumerAccumulateResponse
       */
      Models::OnsConsumerAccumulateResponse onsConsumerAccumulateWithOptions(const Models::OnsConsumerAccumulateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about message accumulation in topics to which a specified consumer group subscribes. The returned information includes the number of accumulated messages and the consumption latency.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation in scenarios in which you want to know the message consumption progress of a specified consumer group in production environments. You can obtain the information about message consumption and consumption latency based on the returned information. This operation returns the total number of accumulated messages in all topics to which the specified consumer group subscribes and the number of accumulated messages in each topic.
       *
       * @param request OnsConsumerAccumulateRequest
       * @return OnsConsumerAccumulateResponse
       */
      Models::OnsConsumerAccumulateResponse onsConsumerAccumulate(const Models::OnsConsumerAccumulateRequest &request);

      /**
       * @summary Queries the client connection status of a specified consumer group.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * When messages are accumulated in a topic, you can call this operation to check whether a consumer is online.
       *
       * @param request OnsConsumerGetConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsConsumerGetConnectionResponse
       */
      Models::OnsConsumerGetConnectionResponse onsConsumerGetConnectionWithOptions(const Models::OnsConsumerGetConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the client connection status of a specified consumer group.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * When messages are accumulated in a topic, you can call this operation to check whether a consumer is online.
       *
       * @param request OnsConsumerGetConnectionRequest
       * @return OnsConsumerGetConnectionResponse
       */
      Models::OnsConsumerGetConnectionResponse onsConsumerGetConnection(const Models::OnsConsumerGetConnectionRequest &request);

      /**
       * @summary Resets a consumer offset to a specified timestamp for a consumer group.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation to clear accumulated messages or reset a consumer offset to a specified timestamp. You can use one of the following methods to clear accumulated messages:
       * *   Clear all accumulated messages in a specified topic.
       * *   Clear the messages that were published to the specified topic before a specified point in time.
       *
       * @param request OnsConsumerResetOffsetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsConsumerResetOffsetResponse
       */
      Models::OnsConsumerResetOffsetResponse onsConsumerResetOffsetWithOptions(const Models::OnsConsumerResetOffsetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets a consumer offset to a specified timestamp for a consumer group.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation to clear accumulated messages or reset a consumer offset to a specified timestamp. You can use one of the following methods to clear accumulated messages:
       * *   Clear all accumulated messages in a specified topic.
       * *   Clear the messages that were published to the specified topic before a specified point in time.
       *
       * @param request OnsConsumerResetOffsetRequest
       * @return OnsConsumerResetOffsetResponse
       */
      Models::OnsConsumerResetOffsetResponse onsConsumerResetOffset(const Models::OnsConsumerResetOffsetRequest &request);

      /**
       * @summary Queries the detailed information about the status of a specified consumer group. This operation returns the transactions per second (TPS) for message consumption, load balancing status, consumer connection status, and whether all consumers in the consumer group subscribe to the same topics and tags.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   You can call this operation in scenarios in which consumers are online and messages are accumulated. You can troubleshoot errors based on the information that is returned by this operation. You can check whether all consumers in the consumer group subscribe to the same topics and tags, and whether load balancing is performed as expected. You can also obtain the information about thread stack traces of online consumers.
       * *   This operation uses multiple backend operations to query and aggregate data. The system requires a long period of time to process a request. We recommend that you do not frequently call this operation.
       *
       * @param request OnsConsumerStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsConsumerStatusResponse
       */
      Models::OnsConsumerStatusResponse onsConsumerStatusWithOptions(const Models::OnsConsumerStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about the status of a specified consumer group. This operation returns the transactions per second (TPS) for message consumption, load balancing status, consumer connection status, and whether all consumers in the consumer group subscribe to the same topics and tags.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   You can call this operation in scenarios in which consumers are online and messages are accumulated. You can troubleshoot errors based on the information that is returned by this operation. You can check whether all consumers in the consumer group subscribe to the same topics and tags, and whether load balancing is performed as expected. You can also obtain the information about thread stack traces of online consumers.
       * *   This operation uses multiple backend operations to query and aggregate data. The system requires a long period of time to process a request. We recommend that you do not frequently call this operation.
       *
       * @param request OnsConsumerStatusRequest
       * @return OnsConsumerStatusResponse
       */
      Models::OnsConsumerStatusResponse onsConsumerStatus(const Models::OnsConsumerStatusRequest &request);

      /**
       * @summary Queries the time range within which you can specify a point in time to reset the consumer offset for a specified topic. The time range is from the point in time when the earliest stored message was published to the topic to the point in time when the most recently stored message was published to the topic.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation to query the point in time when the earliest stored message was published to a specified topic and the point in time when the most recently stored message was published to the specified topic. You can also call this operation to query the most recent point in time when a message in the topic was consumed. This operation is usually used with the \\*\\*OnsConsumerAccumulate\\*\\* operation to display the overview of the consumption progress.
       *
       * @param request OnsConsumerTimeSpanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsConsumerTimeSpanResponse
       */
      Models::OnsConsumerTimeSpanResponse onsConsumerTimeSpanWithOptions(const Models::OnsConsumerTimeSpanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the time range within which you can specify a point in time to reset the consumer offset for a specified topic. The time range is from the point in time when the earliest stored message was published to the topic to the point in time when the most recently stored message was published to the topic.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation to query the point in time when the earliest stored message was published to a specified topic and the point in time when the most recently stored message was published to the specified topic. You can also call this operation to query the most recent point in time when a message in the topic was consumed. This operation is usually used with the \\*\\*OnsConsumerAccumulate\\*\\* operation to display the overview of the consumption progress.
       *
       * @param request OnsConsumerTimeSpanRequest
       * @return OnsConsumerTimeSpanResponse
       */
      Models::OnsConsumerTimeSpanResponse onsConsumerTimeSpan(const Models::OnsConsumerTimeSpanRequest &request);

      /**
       * @summary Queries a dead-letter message based on the message ID. The queried information about the dead-letter message includes the point in time when the message is stored, the message body, and attributes such as the message tag and the message key.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * This operation uses the exact match method to query a dead-letter message based on the message ID. You can obtain the message ID that is required to query the information about a dead-letter message from the SendResult parameter that is returned after the message is sent. You can also obtain the message ID by calling the OnsDLQMessagePageQueryByGroupId operation to query multiple messages at a time. The queried information about the dead-letter message includes the point in time when the message is stored, the message body, and attributes such as the message tag and the message key.
       *
       * @param request OnsDLQMessageGetByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsDLQMessageGetByIdResponse
       */
      Models::OnsDLQMessageGetByIdResponse onsDLQMessageGetByIdWithOptions(const Models::OnsDLQMessageGetByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a dead-letter message based on the message ID. The queried information about the dead-letter message includes the point in time when the message is stored, the message body, and attributes such as the message tag and the message key.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * This operation uses the exact match method to query a dead-letter message based on the message ID. You can obtain the message ID that is required to query the information about a dead-letter message from the SendResult parameter that is returned after the message is sent. You can also obtain the message ID by calling the OnsDLQMessagePageQueryByGroupId operation to query multiple messages at a time. The queried information about the dead-letter message includes the point in time when the message is stored, the message body, and attributes such as the message tag and the message key.
       *
       * @param request OnsDLQMessageGetByIdRequest
       * @return OnsDLQMessageGetByIdResponse
       */
      Models::OnsDLQMessageGetByIdResponse onsDLQMessageGetById(const Models::OnsDLQMessageGetByIdRequest &request);

      /**
       * @summary Queries all dead-letter messages in a group within a period of time by page.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   If you do not know the ID of the dead-letter message that you want to query, you can call this operation to query all dead-letter messages that are sent to a specified consumer group within a specified time range. The results are returned by page.
       * *   We recommend that you specify a short time range to query dead-letter messages in this method. If you specify a long time range, a large number of dead-letter messages are returned. In this case, you cannot find the dead-letter message that you want to query in an efficient manner. You can perform the following steps to query dead-letter messages:
       *     1.  Perform a paged query by specifying the group ID, start time, end time, and number of entries to return on each page. If matched messages are found, the information about the dead-letter messages on the first page, total number of pages, and task ID are returned by default.
       *     2.  Specify the task ID and a page number to call this operation again to query the dead-letter messages on the specified page. In this query, the BeginTime, EndTime, and PageSize parameters do not take effect. By default, the system uses the values of these parameters that you specified in the request when you created the specified query task.
       *
       * @param request OnsDLQMessagePageQueryByGroupIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsDLQMessagePageQueryByGroupIdResponse
       */
      Models::OnsDLQMessagePageQueryByGroupIdResponse onsDLQMessagePageQueryByGroupIdWithOptions(const Models::OnsDLQMessagePageQueryByGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all dead-letter messages in a group within a period of time by page.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   If you do not know the ID of the dead-letter message that you want to query, you can call this operation to query all dead-letter messages that are sent to a specified consumer group within a specified time range. The results are returned by page.
       * *   We recommend that you specify a short time range to query dead-letter messages in this method. If you specify a long time range, a large number of dead-letter messages are returned. In this case, you cannot find the dead-letter message that you want to query in an efficient manner. You can perform the following steps to query dead-letter messages:
       *     1.  Perform a paged query by specifying the group ID, start time, end time, and number of entries to return on each page. If matched messages are found, the information about the dead-letter messages on the first page, total number of pages, and task ID are returned by default.
       *     2.  Specify the task ID and a page number to call this operation again to query the dead-letter messages on the specified page. In this query, the BeginTime, EndTime, and PageSize parameters do not take effect. By default, the system uses the values of these parameters that you specified in the request when you created the specified query task.
       *
       * @param request OnsDLQMessagePageQueryByGroupIdRequest
       * @return OnsDLQMessagePageQueryByGroupIdResponse
       */
      Models::OnsDLQMessagePageQueryByGroupIdResponse onsDLQMessagePageQueryByGroupId(const Models::OnsDLQMessagePageQueryByGroupIdRequest &request);

      /**
       * @summary Resends a dead-letter message based on a specified message ID so that the dead-letter message can be consumed by consumers.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   A dead-letter message is a message that still fails to be consumed after the number of consumption retries reaches the upper limit. If the message still cannot be consumed after you re-send it, a message with the same message ID is added to the corresponding dead-letter queue. You can query the message ID on the Dead-letter Queues page in the ApsaraMQ for RocketMQ console or by calling API operations. You can obtain the number of consumption failures for a message based on the number of dead-letter messages with the same message ID in the dead-letter queue.
       * *   A dead-letter message is a message that fails to be consumed after the number of consumption retries reaches the upper limit. Generally, dead-letter messages are produced because of incorrect consumption logic. We recommend that you troubleshoot the consumption failures and then call this operation to send the message to the consumer group for consumption again.
       * *   ApsaraMQ for RocketMQ does not manage the status of dead-letter messages based on the consumption status of the dead-letter messages. After you call this operation to send a dead-letter message to a consumer group and the message is consumed, ApsaraMQ for RocketMQ does not remove the dead-letter message from the dead-letter queue. You must manage dead-letter messages and determine whether to send a dead-letter message to a consumer group for consumption. This way, you do not resend or reconsume the messages that are consumed.
       *
       * @param request OnsDLQMessageResendByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsDLQMessageResendByIdResponse
       */
      Models::OnsDLQMessageResendByIdResponse onsDLQMessageResendByIdWithOptions(const Models::OnsDLQMessageResendByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resends a dead-letter message based on a specified message ID so that the dead-letter message can be consumed by consumers.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   A dead-letter message is a message that still fails to be consumed after the number of consumption retries reaches the upper limit. If the message still cannot be consumed after you re-send it, a message with the same message ID is added to the corresponding dead-letter queue. You can query the message ID on the Dead-letter Queues page in the ApsaraMQ for RocketMQ console or by calling API operations. You can obtain the number of consumption failures for a message based on the number of dead-letter messages with the same message ID in the dead-letter queue.
       * *   A dead-letter message is a message that fails to be consumed after the number of consumption retries reaches the upper limit. Generally, dead-letter messages are produced because of incorrect consumption logic. We recommend that you troubleshoot the consumption failures and then call this operation to send the message to the consumer group for consumption again.
       * *   ApsaraMQ for RocketMQ does not manage the status of dead-letter messages based on the consumption status of the dead-letter messages. After you call this operation to send a dead-letter message to a consumer group and the message is consumed, ApsaraMQ for RocketMQ does not remove the dead-letter message from the dead-letter queue. You must manage dead-letter messages and determine whether to send a dead-letter message to a consumer group for consumption. This way, you do not resend or reconsume the messages that are consumed.
       *
       * @param request OnsDLQMessageResendByIdRequest
       * @return OnsDLQMessageResendByIdResponse
       */
      Models::OnsDLQMessageResendByIdResponse onsDLQMessageResendById(const Models::OnsDLQMessageResendByIdRequest &request);

      /**
       * @summary Configures read permissions on messages for a consumer group that is identified by a group ID.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation to configure the permissions for a consumer group to read messages based on a specified region of ApsaraMQ for RocketMQ and a specified group ID. You can call this operation in scenarios in which you want to forbid consumers in a specific group from reading messages.
       *
       * @param request OnsGroupConsumerUpdateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsGroupConsumerUpdateResponse
       */
      Models::OnsGroupConsumerUpdateResponse onsGroupConsumerUpdateWithOptions(const Models::OnsGroupConsumerUpdateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures read permissions on messages for a consumer group that is identified by a group ID.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation to configure the permissions for a consumer group to read messages based on a specified region of ApsaraMQ for RocketMQ and a specified group ID. You can call this operation in scenarios in which you want to forbid consumers in a specific group from reading messages.
       *
       * @param request OnsGroupConsumerUpdateRequest
       * @return OnsGroupConsumerUpdateResponse
       */
      Models::OnsGroupConsumerUpdateResponse onsGroupConsumerUpdate(const Models::OnsGroupConsumerUpdateRequest &request);

      /**
       * @summary Creates a consumer group.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * When you release a new application or implement new business logic, you need new consumer groups. You can call this operation to create a consumer group.
       *
       * @param request OnsGroupCreateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsGroupCreateResponse
       */
      Models::OnsGroupCreateResponse onsGroupCreateWithOptions(const Models::OnsGroupCreateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a consumer group.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * When you release a new application or implement new business logic, you need new consumer groups. You can call this operation to create a consumer group.
       *
       * @param request OnsGroupCreateRequest
       * @return OnsGroupCreateResponse
       */
      Models::OnsGroupCreateResponse onsGroupCreate(const Models::OnsGroupCreateRequest &request);

      /**
       * @summary Deletes a consumer group.
       *
       * @description > 
       * *   API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   After you delete a group, the consumers in the group immediately stop receiving messages. Exercise caution when you call this operation.
       * You can call this operation to delete a group when you need to reclaim the resources of the group. For example, after an application is brought offline, you can delete the groups that are used for the application. After you delete a group, the backend of ApsaraMQ for RocketMQ reclaims the resources of the group. The system requires a long period of time to reclaim the resources. We recommend that you do not create a group that uses the same name as a deleted group immediately after you delete the group. If the system fails to delete the specified group, troubleshoot the issue based on the error code.
       *
       * @param request OnsGroupDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsGroupDeleteResponse
       */
      Models::OnsGroupDeleteResponse onsGroupDeleteWithOptions(const Models::OnsGroupDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a consumer group.
       *
       * @description > 
       * *   API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   After you delete a group, the consumers in the group immediately stop receiving messages. Exercise caution when you call this operation.
       * You can call this operation to delete a group when you need to reclaim the resources of the group. For example, after an application is brought offline, you can delete the groups that are used for the application. After you delete a group, the backend of ApsaraMQ for RocketMQ reclaims the resources of the group. The system requires a long period of time to reclaim the resources. We recommend that you do not create a group that uses the same name as a deleted group immediately after you delete the group. If the system fails to delete the specified group, troubleshoot the issue based on the error code.
       *
       * @param request OnsGroupDeleteRequest
       * @return OnsGroupDeleteResponse
       */
      Models::OnsGroupDeleteResponse onsGroupDelete(const Models::OnsGroupDeleteRequest &request);

      /**
       * @summary Queries one or more group IDs.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @param request OnsGroupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsGroupListResponse
       */
      Models::OnsGroupListResponse onsGroupListWithOptions(const Models::OnsGroupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more group IDs.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @param request OnsGroupListRequest
       * @return OnsGroupListResponse
       */
      Models::OnsGroupListResponse onsGroupList(const Models::OnsGroupListRequest &request);

      /**
       * @summary Queries all topics to which a specified consumer group subscribes. If no consumer instance in the consumer group is online, no data is returned.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @param request OnsGroupSubDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsGroupSubDetailResponse
       */
      Models::OnsGroupSubDetailResponse onsGroupSubDetailWithOptions(const Models::OnsGroupSubDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all topics to which a specified consumer group subscribes. If no consumer instance in the consumer group is online, no data is returned.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @param request OnsGroupSubDetailRequest
       * @return OnsGroupSubDetailResponse
       */
      Models::OnsGroupSubDetailResponse onsGroupSubDetail(const Models::OnsGroupSubDetailRequest &request);

      /**
       * @summary Queries the basic information of a Message Queue for Apache RocketMQ instance and the endpoint that a client uses to connect to the Message Queue for Apache RocketMQ instance to send and receive messages.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * To send and receive messages, a client must be connected to a ApsaraMQ for RocketMQ instance by using an endpoint. You can call this operation to query the endpoints of the instance.
       *
       * @param request OnsInstanceBaseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsInstanceBaseInfoResponse
       */
      Models::OnsInstanceBaseInfoResponse onsInstanceBaseInfoWithOptions(const Models::OnsInstanceBaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information of a Message Queue for Apache RocketMQ instance and the endpoint that a client uses to connect to the Message Queue for Apache RocketMQ instance to send and receive messages.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * To send and receive messages, a client must be connected to a ApsaraMQ for RocketMQ instance by using an endpoint. You can call this operation to query the endpoints of the instance.
       *
       * @param request OnsInstanceBaseInfoRequest
       * @return OnsInstanceBaseInfoResponse
       */
      Models::OnsInstanceBaseInfoResponse onsInstanceBaseInfo(const Models::OnsInstanceBaseInfoRequest &request);

      /**
       * @summary Creates a Message Queue for Apache RocketMQ instance.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * An instance is a virtual machine (VM) that can be used to store information about the topics and groups of ApsaraMQ for RocketMQ. You can call this operation when you need to create service resources for the business that you want to launch. Before you call this operation, take note of the following limits:
       * *   A maximum of eight ApsaraMQ for RocketMQ instances can be deployed in each region.
       * *   This operation can be called to create only a Standard Edition instance. You can use the ApsaraMQ for RocketMQ console to create Standard Edition instances and Enterprise Platinum Edition instances. For information about how to create ApsaraMQ for RocketMQ instances, see [Manage instances](https://help.aliyun.com/document_detail/200153.html).
       *
       * @param request OnsInstanceCreateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsInstanceCreateResponse
       */
      Models::OnsInstanceCreateResponse onsInstanceCreateWithOptions(const Models::OnsInstanceCreateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Message Queue for Apache RocketMQ instance.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * An instance is a virtual machine (VM) that can be used to store information about the topics and groups of ApsaraMQ for RocketMQ. You can call this operation when you need to create service resources for the business that you want to launch. Before you call this operation, take note of the following limits:
       * *   A maximum of eight ApsaraMQ for RocketMQ instances can be deployed in each region.
       * *   This operation can be called to create only a Standard Edition instance. You can use the ApsaraMQ for RocketMQ console to create Standard Edition instances and Enterprise Platinum Edition instances. For information about how to create ApsaraMQ for RocketMQ instances, see [Manage instances](https://help.aliyun.com/document_detail/200153.html).
       *
       * @param request OnsInstanceCreateRequest
       * @return OnsInstanceCreateResponse
       */
      Models::OnsInstanceCreateResponse onsInstanceCreate(const Models::OnsInstanceCreateRequest &request);

      /**
       * @summary Deletes a Message Queue for Apache RocketMQ instance.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   You can call this operation when you need to reclaim resources. For example, after you unpublish an application, you can reclaim the resources that were used for the application. An instance can be deleted only when the instance does not contain topics and groups.
       * *   After an instance is deleted, the instance cannot be restored. Exercise caution when you call this operation.
       *
       * @param request OnsInstanceDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsInstanceDeleteResponse
       */
      Models::OnsInstanceDeleteResponse onsInstanceDeleteWithOptions(const Models::OnsInstanceDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Message Queue for Apache RocketMQ instance.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   You can call this operation when you need to reclaim resources. For example, after you unpublish an application, you can reclaim the resources that were used for the application. An instance can be deleted only when the instance does not contain topics and groups.
       * *   After an instance is deleted, the instance cannot be restored. Exercise caution when you call this operation.
       *
       * @param request OnsInstanceDeleteRequest
       * @return OnsInstanceDeleteResponse
       */
      Models::OnsInstanceDeleteResponse onsInstanceDelete(const Models::OnsInstanceDeleteRequest &request);

      /**
       * @summary Queries all Message Queue for Apache RocketMQ instances in a specified region within the current account.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @param request OnsInstanceInServiceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsInstanceInServiceListResponse
       */
      Models::OnsInstanceInServiceListResponse onsInstanceInServiceListWithOptions(const Models::OnsInstanceInServiceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all Message Queue for Apache RocketMQ instances in a specified region within the current account.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @param request OnsInstanceInServiceListRequest
       * @return OnsInstanceInServiceListResponse
       */
      Models::OnsInstanceInServiceListResponse onsInstanceInServiceList(const Models::OnsInstanceInServiceListRequest &request);

      /**
       * @summary Updates the name and description of a Message Queue for Apache RocketMQ instance.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * A maximum of eight ApsaraMQ for RocketMQ instances can be deployed in each region.
       *
       * @param request OnsInstanceUpdateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsInstanceUpdateResponse
       */
      Models::OnsInstanceUpdateResponse onsInstanceUpdateWithOptions(const Models::OnsInstanceUpdateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name and description of a Message Queue for Apache RocketMQ instance.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * A maximum of eight ApsaraMQ for RocketMQ instances can be deployed in each region.
       *
       * @param request OnsInstanceUpdateRequest
       * @return OnsInstanceUpdateResponse
       */
      Models::OnsInstanceUpdateResponse onsInstanceUpdate(const Models::OnsInstanceUpdateRequest &request);

      /**
       * @summary Queries the details of a message.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @param request OnsMessageDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsMessageDetailResponse
       */
      Models::OnsMessageDetailResponse onsMessageDetailWithOptions(const Models::OnsMessageDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a message.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @param request OnsMessageDetailRequest
       * @return OnsMessageDetailResponse
       */
      Models::OnsMessageDetailResponse onsMessageDetail(const Models::OnsMessageDetailRequest &request);

      /**
       * @summary Queries messages by using a specified topic and message key.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   This operation uses the fuzzy match method to query messages based on a specified message key. The same message key may be used by multiple messages. Therefore, the returned result may contain information about multiple messages.
       * *   This operation can be used in scenarios in which you cannot obtain the IDs of the messages that you want to query. You can perform the following steps to query the information about messages:
       *     1.  Call this operation to query message IDs.
       *     2.  Call the **OnsMessageGetByMsgId** operation that uses the exact match method to query the details of a specified message. For more information about the **OnsMessageGetByMsgId** operation, see [OnsMessageGetByMsgId](https://help.aliyun.com/document_detail/29607.html).
       *
       * @param request OnsMessageGetByKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsMessageGetByKeyResponse
       */
      Models::OnsMessageGetByKeyResponse onsMessageGetByKeyWithOptions(const Models::OnsMessageGetByKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries messages by using a specified topic and message key.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   This operation uses the fuzzy match method to query messages based on a specified message key. The same message key may be used by multiple messages. Therefore, the returned result may contain information about multiple messages.
       * *   This operation can be used in scenarios in which you cannot obtain the IDs of the messages that you want to query. You can perform the following steps to query the information about messages:
       *     1.  Call this operation to query message IDs.
       *     2.  Call the **OnsMessageGetByMsgId** operation that uses the exact match method to query the details of a specified message. For more information about the **OnsMessageGetByMsgId** operation, see [OnsMessageGetByMsgId](https://help.aliyun.com/document_detail/29607.html).
       *
       * @param request OnsMessageGetByKeyRequest
       * @return OnsMessageGetByKeyResponse
       */
      Models::OnsMessageGetByKeyResponse onsMessageGetByKey(const Models::OnsMessageGetByKeyRequest &request);

      /**
       * @summary Queries the information about a message by specifying the message ID and determines whether the message has been consumed.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   If a message is not consumed as expected, you can call this operation to query the information about the message for troubleshooting.
       * *   This operation uses the exact match method to query a message based on the message ID. You can obtain the message ID from the SendResult parameter that is returned after the message is sent. You must store the returned information after each message is sent. The queried information about a message includes the point in time when the message was sent, the broker on which the message is stored, and the attributes of the message such as the message key and tag.
       *
       * @param request OnsMessageGetByMsgIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsMessageGetByMsgIdResponse
       */
      Models::OnsMessageGetByMsgIdResponse onsMessageGetByMsgIdWithOptions(const Models::OnsMessageGetByMsgIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a message by specifying the message ID and determines whether the message has been consumed.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   If a message is not consumed as expected, you can call this operation to query the information about the message for troubleshooting.
       * *   This operation uses the exact match method to query a message based on the message ID. You can obtain the message ID from the SendResult parameter that is returned after the message is sent. You must store the returned information after each message is sent. The queried information about a message includes the point in time when the message was sent, the broker on which the message is stored, and the attributes of the message such as the message key and tag.
       *
       * @param request OnsMessageGetByMsgIdRequest
       * @return OnsMessageGetByMsgIdResponse
       */
      Models::OnsMessageGetByMsgIdResponse onsMessageGetByMsgId(const Models::OnsMessageGetByMsgIdRequest &request);

      /**
       * @summary Queries all messages that are stored in a specified topic within a specified time range by page.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   If you do not know the ID or key of a message that you want to query, you can call this operation to query all messages that are stored in the topic within a specified time range. The results are displayed by page.
       * *   We recommend that you specify a short time range to query messages. If you specify a long time range, a large number of messages are returned. In this case, you cannot find the message that you want to query in an efficient manner. You can perform the following steps to query messages:
       *     1.  Perform a paged query by specifying the topic, start time, end time, and number of entries to return on each page. If the topic contains messages, the information about the messages on the first page, total number of pages, and task ID are returned by default.
       *     2.  Specify the task ID and a page number to call this operation again to query the messages on the specified page. The BeginTime, EndTime, and PageSize parameters do not take effect. By default, the system uses the values of these parameters that you specified in the request when you created the specified query task.
       *
       * @param request OnsMessagePageQueryByTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsMessagePageQueryByTopicResponse
       */
      Models::OnsMessagePageQueryByTopicResponse onsMessagePageQueryByTopicWithOptions(const Models::OnsMessagePageQueryByTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all messages that are stored in a specified topic within a specified time range by page.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   If you do not know the ID or key of a message that you want to query, you can call this operation to query all messages that are stored in the topic within a specified time range. The results are displayed by page.
       * *   We recommend that you specify a short time range to query messages. If you specify a long time range, a large number of messages are returned. In this case, you cannot find the message that you want to query in an efficient manner. You can perform the following steps to query messages:
       *     1.  Perform a paged query by specifying the topic, start time, end time, and number of entries to return on each page. If the topic contains messages, the information about the messages on the first page, total number of pages, and task ID are returned by default.
       *     2.  Specify the task ID and a page number to call this operation again to query the messages on the specified page. The BeginTime, EndTime, and PageSize parameters do not take effect. By default, the system uses the values of these parameters that you specified in the request when you created the specified query task.
       *
       * @param request OnsMessagePageQueryByTopicRequest
       * @return OnsMessagePageQueryByTopicResponse
       */
      Models::OnsMessagePageQueryByTopicResponse onsMessagePageQueryByTopic(const Models::OnsMessagePageQueryByTopicRequest &request);

      /**
       * @summary Pushes a message to a specified consumer.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * This operation can be used to check whether messages in a specified topic can be consumed by consumers in a specified consumer group. This operation obtains the body of the message that is specified by the MsgId parameter, re-encapsulates the message body to produce a new message, and then pushes the new message to a specified consumer. The content of the message that is sent to the consumer is the same as the content of the original message. They are not the same message because they use different message IDs.
       *
       * @param request OnsMessagePushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsMessagePushResponse
       */
      Models::OnsMessagePushResponse onsMessagePushWithOptions(const Models::OnsMessagePushRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pushes a message to a specified consumer.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * This operation can be used to check whether messages in a specified topic can be consumed by consumers in a specified consumer group. This operation obtains the body of the message that is specified by the MsgId parameter, re-encapsulates the message body to produce a new message, and then pushes the new message to a specified consumer. The content of the message that is sent to the consumer is the same as the content of the original message. They are not the same message because they use different message IDs.
       *
       * @param request OnsMessagePushRequest
       * @return OnsMessagePushResponse
       */
      Models::OnsMessagePushResponse onsMessagePush(const Models::OnsMessagePushRequest &request);

      /**
       * @summary Queries the consumption status of a message by using the message ID.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   You can call this operation to check whether a specified message is consumed. If the message is not consumed, you can troubleshoot the issue based on the returned information.
       * *   This operation queries information based on the built-in offset mechanism of ApsaraMQ for RocketMQ. In most cases, the results are correct. If you have reset the consumer offset or cleared accumulated messages, the results may not be correct.
       *
       * @param request OnsMessageTraceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsMessageTraceResponse
       */
      Models::OnsMessageTraceResponse onsMessageTraceWithOptions(const Models::OnsMessageTraceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the consumption status of a message by using the message ID.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   You can call this operation to check whether a specified message is consumed. If the message is not consumed, you can troubleshoot the issue based on the returned information.
       * *   This operation queries information based on the built-in offset mechanism of ApsaraMQ for RocketMQ. In most cases, the results are correct. If you have reset the consumer offset or cleared accumulated messages, the results may not be correct.
       *
       * @param request OnsMessageTraceRequest
       * @return OnsMessageTraceResponse
       */
      Models::OnsMessageTraceResponse onsMessageTrace(const Models::OnsMessageTraceRequest &request);

      /**
       * @summary Queries regions where Message Queue for Apache RocketMQ is available.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * When you use an SDK to access and manage a ApsaraMQ for RocketMQ instance, you must sequentially specify the information about two regions. You can query the information about the second region by calling the OnsRegionList operation. You must apply for a public endpoint in the following scenarios:
       * *   Connect your application to ApsaraMQ for RocketMQ: Select the nearest API gateway endpoint based on the region where your application is deployed, and enter the corresponding **region ID**. The **regionId** is used to access Alibaba Cloud API Gateway because ApsaraMQ for RocketMQ instances provide API services by using the OpenAPI Explorer platform, which is also called POP.
       * *   Access a region to manage its resources: Specify a region where you want to manage ApsaraMQ for RocketMQ resources and enter the region ID. You can call the **OnsRegionList** operation to query a region ID.
       *
       * @param request OnsRegionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsRegionListResponse
       */
      Models::OnsRegionListResponse onsRegionListWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries regions where Message Queue for Apache RocketMQ is available.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * When you use an SDK to access and manage a ApsaraMQ for RocketMQ instance, you must sequentially specify the information about two regions. You can query the information about the second region by calling the OnsRegionList operation. You must apply for a public endpoint in the following scenarios:
       * *   Connect your application to ApsaraMQ for RocketMQ: Select the nearest API gateway endpoint based on the region where your application is deployed, and enter the corresponding **region ID**. The **regionId** is used to access Alibaba Cloud API Gateway because ApsaraMQ for RocketMQ instances provide API services by using the OpenAPI Explorer platform, which is also called POP.
       * *   Access a region to manage its resources: Specify a region where you want to manage ApsaraMQ for RocketMQ resources and enter the region ID. You can call the **OnsRegionList** operation to query a region ID.
       *
       * @return OnsRegionListResponse
       */
      Models::OnsRegionListResponse onsRegionList();

      /**
       * @summary Creates a topic.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * When you want to release a new application or expand your business, you can call this operation to create a topic based on your business requirements.
       *
       * @param request OnsTopicCreateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsTopicCreateResponse
       */
      Models::OnsTopicCreateResponse onsTopicCreateWithOptions(const Models::OnsTopicCreateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a topic.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * When you want to release a new application or expand your business, you can call this operation to create a topic based on your business requirements.
       *
       * @param request OnsTopicCreateRequest
       * @return OnsTopicCreateResponse
       */
      Models::OnsTopicCreateResponse onsTopicCreate(const Models::OnsTopicCreateRequest &request);

      /**
       * @summary Deletes a topic.
       *
       * @description >  API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur. - After you delete the topic, the publishing and subscription relationships that are constructed based on the topic are cleared. Exercise caution when you call this operation.
       * You can call this operation to delete a topic when you need to reclaim the resources from the topic. For example, after an application is brought offline, you can delete the topics that are used for the application. After you delete a topic, the backend of ApsaraMQ for RocketMQ reclaims the resources from the topic. The system requires a long period of time to reclaim the resources. After you delete a topic, we recommend that you do not create a topic that uses the same name as the deleted topic within a short period of time. If the system fails to delete the specified topic, troubleshoot the issue based on the error code.
       *
       * @param request OnsTopicDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsTopicDeleteResponse
       */
      Models::OnsTopicDeleteResponse onsTopicDeleteWithOptions(const Models::OnsTopicDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a topic.
       *
       * @description >  API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur. - After you delete the topic, the publishing and subscription relationships that are constructed based on the topic are cleared. Exercise caution when you call this operation.
       * You can call this operation to delete a topic when you need to reclaim the resources from the topic. For example, after an application is brought offline, you can delete the topics that are used for the application. After you delete a topic, the backend of ApsaraMQ for RocketMQ reclaims the resources from the topic. The system requires a long period of time to reclaim the resources. After you delete a topic, we recommend that you do not create a topic that uses the same name as the deleted topic within a short period of time. If the system fails to delete the specified topic, troubleshoot the issue based on the error code.
       *
       * @param request OnsTopicDeleteRequest
       * @return OnsTopicDeleteResponse
       */
      Models::OnsTopicDeleteResponse onsTopicDelete(const Models::OnsTopicDeleteRequest &request);

      /**
       * @summary Queries the information about topics that belong to the current account.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * This operation returns the basic information about topics and does not return the details of topics.
       *
       * @param request OnsTopicListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsTopicListResponse
       */
      Models::OnsTopicListResponse onsTopicListWithOptions(const Models::OnsTopicListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about topics that belong to the current account.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * This operation returns the basic information about topics and does not return the details of topics.
       *
       * @param request OnsTopicListRequest
       * @return OnsTopicListResponse
       */
      Models::OnsTopicListResponse onsTopicList(const Models::OnsTopicListRequest &request);

      /**
       * @summary Queries the total number of messages in a topic and the status of the topic.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can determine the resource usage of a topic based on the information that is returned by this operation. The returned information includes the total number of messages in the topic and the most recent point in time when a message was published to the topic.
       *
       * @param request OnsTopicStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsTopicStatusResponse
       */
      Models::OnsTopicStatusResponse onsTopicStatusWithOptions(const Models::OnsTopicStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number of messages in a topic and the status of the topic.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can determine the resource usage of a topic based on the information that is returned by this operation. The returned information includes the total number of messages in the topic and the most recent point in time when a message was published to the topic.
       *
       * @param request OnsTopicStatusRequest
       * @return OnsTopicStatusResponse
       */
      Models::OnsTopicStatusResponse onsTopicStatus(const Models::OnsTopicStatusRequest &request);

      /**
       * @summary Queries the online consumer groups that subscribe to a specified topic.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation to query the online consumer groups that subscribe to a specified topic. If all consumers in a group are offline, the information about the group is not returned.
       *
       * @param request OnsTopicSubDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsTopicSubDetailResponse
       */
      Models::OnsTopicSubDetailResponse onsTopicSubDetailWithOptions(const Models::OnsTopicSubDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the online consumer groups that subscribe to a specified topic.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation to query the online consumer groups that subscribe to a specified topic. If all consumers in a group are offline, the information about the group is not returned.
       *
       * @param request OnsTopicSubDetailRequest
       * @return OnsTopicSubDetailResponse
       */
      Models::OnsTopicSubDetailResponse onsTopicSubDetail(const Models::OnsTopicSubDetailRequest &request);

      /**
       * @deprecated OpenAPI OnsTopicUpdate is deprecated
       *
       * @summary Configures the read/write mode for a specified topic.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation to forbid read or write operations on a specific topic.
       *
       * @param request OnsTopicUpdateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsTopicUpdateResponse
       */
      Models::OnsTopicUpdateResponse onsTopicUpdateWithOptions(const Models::OnsTopicUpdateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI OnsTopicUpdate is deprecated
       *
       * @summary Configures the read/write mode for a specified topic.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation to forbid read or write operations on a specific topic.
       *
       * @param request OnsTopicUpdateRequest
       * @return OnsTopicUpdateResponse
       */
      Models::OnsTopicUpdateResponse onsTopicUpdate(const Models::OnsTopicUpdateRequest &request);

      /**
       * @summary The tracing results are queried by specifying the ID of a trace query task.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   Before you call this operation to query the details of the trace of a message, you must create a task to query the trace of the message based on the message ID or message key and obtain the task ID. Then, you can call this operation to query the details of the message trace based on the task ID. You can call the [OnsTraceQueryByMsgId](https://help.aliyun.com/document_detail/445322.html) operation or the [OnsTraceQueryByMsgKey](https://help.aliyun.com/document_detail/445324.html) operation to create a task to query the trace of the message and obtain the task ID from the **QueryId** response parameter.
       * *   A trace query task is time-consuming. If you call this operation to query the details immediately after you create a trace query task, the results may be empty. In this case, we recommend that you try again later.
       *
       * @param request OnsTraceGetResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsTraceGetResultResponse
       */
      Models::OnsTraceGetResultResponse onsTraceGetResultWithOptions(const Models::OnsTraceGetResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The tracing results are queried by specifying the ID of a trace query task.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   Before you call this operation to query the details of the trace of a message, you must create a task to query the trace of the message based on the message ID or message key and obtain the task ID. Then, you can call this operation to query the details of the message trace based on the task ID. You can call the [OnsTraceQueryByMsgId](https://help.aliyun.com/document_detail/445322.html) operation or the [OnsTraceQueryByMsgKey](https://help.aliyun.com/document_detail/445324.html) operation to create a task to query the trace of the message and obtain the task ID from the **QueryId** response parameter.
       * *   A trace query task is time-consuming. If you call this operation to query the details immediately after you create a trace query task, the results may be empty. In this case, we recommend that you try again later.
       *
       * @param request OnsTraceGetResultRequest
       * @return OnsTraceGetResultResponse
       */
      Models::OnsTraceGetResultResponse onsTraceGetResult(const Models::OnsTraceGetResultRequest &request);

      /**
       * @summary Creates a task to query the trace of a message based on the message ID and the name of the topic in which the message is stored. The task ID is returned.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * If you want to query the trace of a message based on the message ID, you can call this operation to create a query task. After you obtain the task ID, you can call the [OnsTraceGetResult](https://help.aliyun.com/document_detail/59832.html) operation to query the details of the message trace based on the task ID.
       *
       * @param request OnsTraceQueryByMsgIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsTraceQueryByMsgIdResponse
       */
      Models::OnsTraceQueryByMsgIdResponse onsTraceQueryByMsgIdWithOptions(const Models::OnsTraceQueryByMsgIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task to query the trace of a message based on the message ID and the name of the topic in which the message is stored. The task ID is returned.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * If you want to query the trace of a message based on the message ID, you can call this operation to create a query task. After you obtain the task ID, you can call the [OnsTraceGetResult](https://help.aliyun.com/document_detail/59832.html) operation to query the details of the message trace based on the task ID.
       *
       * @param request OnsTraceQueryByMsgIdRequest
       * @return OnsTraceQueryByMsgIdResponse
       */
      Models::OnsTraceQueryByMsgIdResponse onsTraceQueryByMsgId(const Models::OnsTraceQueryByMsgIdRequest &request);

      /**
       * @summary Creates a trace query task based on the topic name and message key and obtains the ID of the query task.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * If you want to query the trace of a message based on the message key that you obtained, you can call this operation to create a query task. After you obtain the task ID, you can call the OnsTraceGetResult operation to query the details of the message trace based on the task ID.
       *
       * @param request OnsTraceQueryByMsgKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsTraceQueryByMsgKeyResponse
       */
      Models::OnsTraceQueryByMsgKeyResponse onsTraceQueryByMsgKeyWithOptions(const Models::OnsTraceQueryByMsgKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a trace query task based on the topic name and message key and obtains the ID of the query task.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * If you want to query the trace of a message based on the message key that you obtained, you can call this operation to create a query task. After you obtain the task ID, you can call the OnsTraceGetResult operation to query the details of the message trace based on the task ID.
       *
       * @param request OnsTraceQueryByMsgKeyRequest
       * @return OnsTraceQueryByMsgKeyResponse
       */
      Models::OnsTraceQueryByMsgKeyResponse onsTraceQueryByMsgKey(const Models::OnsTraceQueryByMsgKeyRequest &request);

      /**
       * @summary Queries the statistics about messages that are consumed by a consumer group within a specific period of time.
       *
       * @description >  API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation to query the following statistics that are collected in a production environment:
       * *   The number of messages that are consumed during each sampling period
       * *   The transactions per second (TPS) for message consumption during each sampling period
       * If your application consumes a small number of messages and does not consume messages at specific intervals, we recommend that you query the number of messages that are consumed during each sampling period because the statistics of TPS may not show a clear change trend.
       *
       * @param request OnsTrendGroupOutputTpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsTrendGroupOutputTpsResponse
       */
      Models::OnsTrendGroupOutputTpsResponse onsTrendGroupOutputTpsWithOptions(const Models::OnsTrendGroupOutputTpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics about messages that are consumed by a consumer group within a specific period of time.
       *
       * @description >  API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation to query the following statistics that are collected in a production environment:
       * *   The number of messages that are consumed during each sampling period
       * *   The transactions per second (TPS) for message consumption during each sampling period
       * If your application consumes a small number of messages and does not consume messages at specific intervals, we recommend that you query the number of messages that are consumed during each sampling period because the statistics of TPS may not show a clear change trend.
       *
       * @param request OnsTrendGroupOutputTpsRequest
       * @return OnsTrendGroupOutputTpsResponse
       */
      Models::OnsTrendGroupOutputTpsResponse onsTrendGroupOutputTps(const Models::OnsTrendGroupOutputTpsRequest &request);

      /**
       * @summary Queries the statistics about messages that are published to a topic within a period of time.
       *
       * @description >  API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation to query the statistics of messages that are published to a specific topic in a production environment. You can query the number of messages that are published to the topic or the transactions per second (TPS) for message publishing within a specified time range based on your business requirements.
       * If your application publishes a small number of messages and does not publish messages at specific intervals, we recommend that you query the number of messages that are published to the topic during each sampling period because the statistics of TPS may not show a clear change trend.
       *
       * @param request OnsTrendTopicInputTpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnsTrendTopicInputTpsResponse
       */
      Models::OnsTrendTopicInputTpsResponse onsTrendTopicInputTpsWithOptions(const Models::OnsTrendTopicInputTpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics about messages that are published to a topic within a period of time.
       *
       * @description >  API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation to query the statistics of messages that are published to a specific topic in a production environment. You can query the number of messages that are published to the topic or the transactions per second (TPS) for message publishing within a specified time range based on your business requirements.
       * If your application publishes a small number of messages and does not publish messages at specific intervals, we recommend that you query the number of messages that are published to the topic during each sampling period because the statistics of TPS may not show a clear change trend.
       *
       * @param request OnsTrendTopicInputTpsRequest
       * @return OnsTrendTopicInputTpsResponse
       */
      Models::OnsTrendTopicInputTpsResponse onsTrendTopicInputTps(const Models::OnsTrendTopicInputTpsRequest &request);

      /**
       * @summary Activates Message Queue for Apache RocketMQ.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation the first time you use ApsaraMQ for RocketMQ. You can use ApsaraMQ for RocketMQ only after the service is activated.
       * The ApsaraMQ for RocketMQ service can be activated only in the China (Hangzhou) region. Service activation is not billed.
       *
       * @param request OpenOnsServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenOnsServiceResponse
       */
      Models::OpenOnsServiceResponse openOnsServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates Message Queue for Apache RocketMQ.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation the first time you use ApsaraMQ for RocketMQ. You can use ApsaraMQ for RocketMQ only after the service is activated.
       * The ApsaraMQ for RocketMQ service can be activated only in the China (Hangzhou) region. Service activation is not billed.
       *
       * @return OpenOnsServiceResponse
       */
      Models::OpenOnsServiceResponse openOnsService();

      /**
       * @summary Adds tags to a resource.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation to attach tags to a source. You can use tags to classify resources in ApsaraMQ for RocketMQ. This can help you aggregate and search resources in an efficient manner.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to a resource.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * You can call this operation to attach tags to a source. You can use tags to classify resources in ApsaraMQ for RocketMQ. This can help you aggregate and search resources in an efficient manner.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Detaches tags from a specified resource and deletes the tags.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches tags from a specified resource and deletes the tags.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
