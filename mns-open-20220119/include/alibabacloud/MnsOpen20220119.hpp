// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MNSOPEN20220119_HPP_
#define ALIBABACLOUD_MNSOPEN20220119_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/MnsOpen20220119Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/MnsOpen20220119.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds one or more Access Control List (ACL) rules to an endpoint of a specified type.
       *
       * @param tmpReq AuthorizeEndpointAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeEndpointAclResponse
       */
      Models::AuthorizeEndpointAclResponse authorizeEndpointAclWithOptions(const Models::AuthorizeEndpointAclRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more Access Control List (ACL) rules to an endpoint of a specified type.
       *
       * @param request AuthorizeEndpointAclRequest
       * @return AuthorizeEndpointAclResponse
       */
      Models::AuthorizeEndpointAclResponse authorizeEndpointAcl(const Models::AuthorizeEndpointAclRequest &request);

      /**
       * @summary Creates an event rule.
       *
       * @param tmpReq CreateEventRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEventRuleResponse
       */
      Models::CreateEventRuleResponse createEventRuleWithOptions(const Models::CreateEventRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an event rule.
       *
       * @param request CreateEventRuleRequest
       * @return CreateEventRuleResponse
       */
      Models::CreateEventRuleResponse createEventRule(const Models::CreateEventRuleRequest &request);

      /**
       * @summary Creates a queue.
       *
       * @param tmpReq CreateQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQueueResponse
       */
      Models::CreateQueueResponse createQueueWithOptions(const Models::CreateQueueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a queue.
       *
       * @param request CreateQueueRequest
       * @return CreateQueueResponse
       */
      Models::CreateQueueResponse createQueue(const Models::CreateQueueRequest &request);

      /**
       * @summary Calls the CreateTopic operation to create a topic.
       *
       * @param request CreateTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTopicResponse
       */
      Models::CreateTopicResponse createTopicWithOptions(const Models::CreateTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateTopic operation to create a topic.
       *
       * @param request CreateTopicRequest
       * @return CreateTopicResponse
       */
      Models::CreateTopicResponse createTopic(const Models::CreateTopicRequest &request);

      /**
       * @summary Deletes an event rule.
       *
       * @param request DeleteEventRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEventRuleResponse
       */
      Models::DeleteEventRuleResponse deleteEventRuleWithOptions(const Models::DeleteEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an event rule.
       *
       * @param request DeleteEventRuleRequest
       * @return DeleteEventRuleResponse
       */
      Models::DeleteEventRuleResponse deleteEventRule(const Models::DeleteEventRuleRequest &request);

      /**
       * @summary Calls the DeleteQueue operation to delete a created queue.
       *
       * @param request DeleteQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQueueResponse
       */
      Models::DeleteQueueResponse deleteQueueWithOptions(const Models::DeleteQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteQueue operation to delete a created queue.
       *
       * @param request DeleteQueueRequest
       * @return DeleteQueueResponse
       */
      Models::DeleteQueueResponse deleteQueue(const Models::DeleteQueueRequest &request);

      /**
       * @summary Calls the DeleteTopic operation to delete a topic.
       *
       * @param request DeleteTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTopicResponse
       */
      Models::DeleteTopicResponse deleteTopicWithOptions(const Models::DeleteTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteTopic operation to delete a topic.
       *
       * @param request DeleteTopicRequest
       * @return DeleteTopicResponse
       */
      Models::DeleteTopicResponse deleteTopic(const Models::DeleteTopicRequest &request);

      /**
       * @summary This operation disables an endpoint of a specified type, blocking all subsequent requests from the endpoint and returning an error.
       *
       * @param request DisableEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableEndpointResponse
       */
      Models::DisableEndpointResponse disableEndpointWithOptions(const Models::DisableEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation disables an endpoint of a specified type, blocking all subsequent requests from the endpoint and returning an error.
       *
       * @param request DisableEndpointRequest
       * @return DisableEndpointResponse
       */
      Models::DisableEndpointResponse disableEndpoint(const Models::DisableEndpointRequest &request);

      /**
       * @summary This operation enables an endpoint of a specified type. After the endpoint is enabled, requests that originate from the endpoint and are on the Access Control List (ACL) whitelist are not blocked.
       *
       * @param request EnableEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableEndpointResponse
       */
      Models::EnableEndpointResponse enableEndpointWithOptions(const Models::EnableEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation enables an endpoint of a specified type. After the endpoint is enabled, requests that originate from the endpoint and are on the Access Control List (ACL) whitelist are not blocked.
       *
       * @param request EnableEndpointRequest
       * @return EnableEndpointResponse
       */
      Models::EnableEndpointResponse enableEndpoint(const Models::EnableEndpointRequest &request);

      /**
       * @summary Queries the attributes of an endpoint.
       *
       * @param request GetEndpointAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEndpointAttributeResponse
       */
      Models::GetEndpointAttributeResponse getEndpointAttributeWithOptions(const Models::GetEndpointAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attributes of an endpoint.
       *
       * @param request GetEndpointAttributeRequest
       * @return GetEndpointAttributeResponse
       */
      Models::GetEndpointAttributeResponse getEndpointAttribute(const Models::GetEndpointAttributeRequest &request);

      /**
       * @summary Retrieves an event notification rule.
       *
       * @param request GetEventRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEventRuleResponse
       */
      Models::GetEventRuleResponse getEventRuleWithOptions(const Models::GetEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an event notification rule.
       *
       * @param request GetEventRuleRequest
       * @return GetEventRuleResponse
       */
      Models::GetEventRuleResponse getEventRule(const Models::GetEventRuleRequest &request);

      /**
       * @summary Retrieves the attributes of a created queue.
       *
       * @description >Warning: 
       * <p>For optimization of service performance, Simple Message Queue (formerly MNS) will offline the return values of the following fields (the default value will be 0):
       *     - ActiveMessages
       *     - InactiveMessages
       *     - DelayMessages 
       *   </p>
       *   <p>Use the following alternatives to obtain replacement solutions:</p>
       *   <ul>
       *     <li>Use the CloudMonitor OpenAPI to retrieve queue monitoring metrics. For more information, see <a href="https://api.aliyun.com/api/Cms/2019-01-01/DescribeMetricLast?RegionId=ap-southeast-1&params={%22Namespace%22:%22acs_smq%22,%22MetricName%22:%22NumberOfMessagesVisible%22}&tab=DEBUG">CloudMonitor OpenAPI documentation</a></li>
       *     <li> <a href="https://cloudmonitornext.console.aliyun.com/metric-meta/acs_smq/smq/all?spm=5176.2020520111.0.0.5d0c66102s05T4">CloudMonitor monitoring metrics documentation</a>. The mapping between deprecated fields and monitoring metrics:
       *       <ul>
       *         <li>ActiveMessages → monitoring metric NumberOfMessagesVisible</li>
       *         <li>InactiveMessages → monitoring metric NumberOfMessagesInvisible</li>
       *         <li>DelayMessages → monitoring metric NumberOfMessagesDelayed</li>
       *       </ul>
       *     </li>
       *   </ul>
       * </warning>
       *
       * @param request GetQueueAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQueueAttributesResponse
       */
      Models::GetQueueAttributesResponse getQueueAttributesWithOptions(const Models::GetQueueAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the attributes of a created queue.
       *
       * @description >Warning: 
       * <p>For optimization of service performance, Simple Message Queue (formerly MNS) will offline the return values of the following fields (the default value will be 0):
       *     - ActiveMessages
       *     - InactiveMessages
       *     - DelayMessages 
       *   </p>
       *   <p>Use the following alternatives to obtain replacement solutions:</p>
       *   <ul>
       *     <li>Use the CloudMonitor OpenAPI to retrieve queue monitoring metrics. For more information, see <a href="https://api.aliyun.com/api/Cms/2019-01-01/DescribeMetricLast?RegionId=ap-southeast-1&params={%22Namespace%22:%22acs_smq%22,%22MetricName%22:%22NumberOfMessagesVisible%22}&tab=DEBUG">CloudMonitor OpenAPI documentation</a></li>
       *     <li> <a href="https://cloudmonitornext.console.aliyun.com/metric-meta/acs_smq/smq/all?spm=5176.2020520111.0.0.5d0c66102s05T4">CloudMonitor monitoring metrics documentation</a>. The mapping between deprecated fields and monitoring metrics:
       *       <ul>
       *         <li>ActiveMessages → monitoring metric NumberOfMessagesVisible</li>
       *         <li>InactiveMessages → monitoring metric NumberOfMessagesInvisible</li>
       *         <li>DelayMessages → monitoring metric NumberOfMessagesDelayed</li>
       *       </ul>
       *     </li>
       *   </ul>
       * </warning>
       *
       * @param request GetQueueAttributesRequest
       * @return GetQueueAttributesResponse
       */
      Models::GetQueueAttributesResponse getQueueAttributes(const Models::GetQueueAttributesRequest &request);

      /**
       * @summary Retrieves the properties of a subscription.
       *
       * @param request GetSubscriptionAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubscriptionAttributesResponse
       */
      Models::GetSubscriptionAttributesResponse getSubscriptionAttributesWithOptions(const Models::GetSubscriptionAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the properties of a subscription.
       *
       * @param request GetSubscriptionAttributesRequest
       * @return GetSubscriptionAttributesResponse
       */
      Models::GetSubscriptionAttributesResponse getSubscriptionAttributes(const Models::GetSubscriptionAttributesRequest &request);

      /**
       * @summary Queries the attributes of a topic.
       *
       * @param request GetTopicAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicAttributesResponse
       */
      Models::GetTopicAttributesResponse getTopicAttributesWithOptions(const Models::GetTopicAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attributes of a topic.
       *
       * @param request GetTopicAttributesRequest
       * @return GetTopicAttributesResponse
       */
      Models::GetTopicAttributesResponse getTopicAttributes(const Models::GetTopicAttributesRequest &request);

      /**
       * @summary Queries a list of event notification rules.
       *
       * @param tmpReq ListEventRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEventRulesResponse
       */
      Models::ListEventRulesResponse listEventRulesWithOptions(const Models::ListEventRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of event notification rules.
       *
       * @param request ListEventRulesRequest
       * @return ListEventRulesResponse
       */
      Models::ListEventRulesResponse listEventRules(const Models::ListEventRulesRequest &request);

      /**
       * @summary Lists all queues under a specified Alibaba Cloud account with pagination support.
       *
       * @param request ListQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQueueResponse
       */
      Models::ListQueueResponse listQueueWithOptions(const Models::ListQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all queues under a specified Alibaba Cloud account with pagination support.
       *
       * @param request ListQueueRequest
       * @return ListQueueResponse
       */
      Models::ListQueueResponse listQueue(const Models::ListQueueRequest &request);

      /**
       * @summary You can call the ListSubscriptionByTopic operation to retrieve a paginated list of subscriptions for a topic.
       *
       * @param request ListSubscriptionByTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubscriptionByTopicResponse
       */
      Models::ListSubscriptionByTopicResponse listSubscriptionByTopicWithOptions(const Models::ListSubscriptionByTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ListSubscriptionByTopic operation to retrieve a paginated list of subscriptions for a topic.
       *
       * @param request ListSubscriptionByTopicRequest
       * @return ListSubscriptionByTopicResponse
       */
      Models::ListSubscriptionByTopicResponse listSubscriptionByTopic(const Models::ListSubscriptionByTopicRequest &request);

      /**
       * @summary Queries the list of topics under an Alibaba Cloud account with paginated results.
       *
       * @param request ListTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTopicResponse
       */
      Models::ListTopicResponse listTopicWithOptions(const Models::ListTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of topics under an Alibaba Cloud account with paginated results.
       *
       * @param request ListTopicRequest
       * @return ListTopicResponse
       */
      Models::ListTopicResponse listTopic(const Models::ListTopicRequest &request);

      /**
       * @summary Revokes one or more Access Control List (ACL) rules for a specified endpoint type.
       *
       * @param tmpReq RevokeEndpointAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeEndpointAclResponse
       */
      Models::RevokeEndpointAclResponse revokeEndpointAclWithOptions(const Models::RevokeEndpointAclRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes one or more Access Control List (ACL) rules for a specified endpoint type.
       *
       * @param request RevokeEndpointAclRequest
       * @return RevokeEndpointAclResponse
       */
      Models::RevokeEndpointAclResponse revokeEndpointAcl(const Models::RevokeEndpointAclRequest &request);

      /**
       * @summary Calls the SetQueueAttributes operation to modify queue attributes.
       *
       * @param tmpReq SetQueueAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetQueueAttributesResponse
       */
      Models::SetQueueAttributesResponse setQueueAttributesWithOptions(const Models::SetQueueAttributesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the SetQueueAttributes operation to modify queue attributes.
       *
       * @param request SetQueueAttributesRequest
       * @return SetQueueAttributesResponse
       */
      Models::SetQueueAttributesResponse setQueueAttributes(const Models::SetQueueAttributesRequest &request);

      /**
       * @summary Call the SetSubscriptionAttributes operation to modify a subscription\\"s attributes.
       *
       * @param tmpReq SetSubscriptionAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSubscriptionAttributesResponse
       */
      Models::SetSubscriptionAttributesResponse setSubscriptionAttributesWithOptions(const Models::SetSubscriptionAttributesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the SetSubscriptionAttributes operation to modify a subscription\\"s attributes.
       *
       * @param request SetSubscriptionAttributesRequest
       * @return SetSubscriptionAttributesResponse
       */
      Models::SetSubscriptionAttributesResponse setSubscriptionAttributes(const Models::SetSubscriptionAttributesRequest &request);

      /**
       * @summary Calls the SetTopicAttributes operation to modify the attributes of a topic.
       *
       * @param request SetTopicAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetTopicAttributesResponse
       */
      Models::SetTopicAttributesResponse setTopicAttributesWithOptions(const Models::SetTopicAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the SetTopicAttributes operation to modify the attributes of a topic.
       *
       * @param request SetTopicAttributesRequest
       * @return SetTopicAttributesResponse
       */
      Models::SetTopicAttributesResponse setTopicAttributes(const Models::SetTopicAttributesRequest &request);

      /**
       * @summary Calls the Subscribe operation to create a subscription for a topic.
       *
       * @param tmpReq SubscribeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubscribeResponse
       */
      Models::SubscribeResponse subscribeWithOptions(const Models::SubscribeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the Subscribe operation to create a subscription for a topic.
       *
       * @param request SubscribeRequest
       * @return SubscribeResponse
       */
      Models::SubscribeResponse subscribe(const Models::SubscribeRequest &request);

      /**
       * @summary You can call Unsubscribe to cancel an existing subscription.
       *
       * @param request UnsubscribeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnsubscribeResponse
       */
      Models::UnsubscribeResponse unsubscribeWithOptions(const Models::UnsubscribeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call Unsubscribe to cancel an existing subscription.
       *
       * @param request UnsubscribeRequest
       * @return UnsubscribeResponse
       */
      Models::UnsubscribeResponse unsubscribe(const Models::UnsubscribeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
