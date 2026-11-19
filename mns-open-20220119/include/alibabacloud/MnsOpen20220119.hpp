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
       * @summary Creates one or more ACL rules for an access point of a specified type.
       *
       * @param tmpReq AuthorizeEndpointAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeEndpointAclResponse
       */
      Models::AuthorizeEndpointAclResponse authorizeEndpointAclWithOptions(const Models::AuthorizeEndpointAclRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates one or more ACL rules for an access point of a specified type.
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
       * @summary Creates a topic by calling the CreateTopic operation.
       *
       * @param request CreateTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTopicResponse
       */
      Models::CreateTopicResponse createTopicWithOptions(const Models::CreateTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a topic by calling the CreateTopic operation.
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
       * @summary Deletes a queue.
       *
       * @param request DeleteQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQueueResponse
       */
      Models::DeleteQueueResponse deleteQueueWithOptions(const Models::DeleteQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a queue.
       *
       * @param request DeleteQueueRequest
       * @return DeleteQueueResponse
       */
      Models::DeleteQueueResponse deleteQueue(const Models::DeleteQueueRequest &request);

      /**
       * @summary Deletes a topic.
       *
       * @param request DeleteTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTopicResponse
       */
      Models::DeleteTopicResponse deleteTopicWithOptions(const Models::DeleteTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a topic.
       *
       * @param request DeleteTopicRequest
       * @return DeleteTopicResponse
       */
      Models::DeleteTopicResponse deleteTopic(const Models::DeleteTopicRequest &request);

      /**
       * @summary Disables access points of a specified type. After the access points are disabled, all requests originating from the corresponding access points are intercepted and an error is returned.
       *
       * @param request DisableEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableEndpointResponse
       */
      Models::DisableEndpointResponse disableEndpointWithOptions(const Models::DisableEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables access points of a specified type. After the access points are disabled, all requests originating from the corresponding access points are intercepted and an error is returned.
       *
       * @param request DisableEndpointRequest
       * @return DisableEndpointResponse
       */
      Models::DisableEndpointResponse disableEndpoint(const Models::DisableEndpointRequest &request);

      /**
       * @summary Enables an access point of a specified type. After the access point is enabled, requests from the corresponding access point that are in the ACL whitelist are not blocked.
       *
       * @param request EnableEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableEndpointResponse
       */
      Models::EnableEndpointResponse enableEndpointWithOptions(const Models::EnableEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an access point of a specified type. After the access point is enabled, requests from the corresponding access point that are in the ACL whitelist are not blocked.
       *
       * @param request EnableEndpointRequest
       * @return EnableEndpointResponse
       */
      Models::EnableEndpointResponse enableEndpoint(const Models::EnableEndpointRequest &request);

      /**
       * @summary Retrieves the user log configuration.
       *
       * @param request GetAccountAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountAttributesResponse
       */
      Models::GetAccountAttributesResponse getAccountAttributesWithOptions(const Models::GetAccountAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the user log configuration.
       *
       * @param request GetAccountAttributesRequest
       * @return GetAccountAttributesResponse
       */
      Models::GetAccountAttributesResponse getAccountAttributes(const Models::GetAccountAttributesRequest &request);

      /**
       * @summary Retrieves the attributes of an endpoint.
       *
       * @param request GetEndpointAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEndpointAttributeResponse
       */
      Models::GetEndpointAttributeResponse getEndpointAttributeWithOptions(const Models::GetEndpointAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the attributes of an endpoint.
       *
       * @param request GetEndpointAttributeRequest
       * @return GetEndpointAttributeResponse
       */
      Models::GetEndpointAttributeResponse getEndpointAttribute(const Models::GetEndpointAttributeRequest &request);

      /**
       * @summary Retrieves event notification rules.
       *
       * @param request GetEventRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEventRuleResponse
       */
      Models::GetEventRuleResponse getEventRuleWithOptions(const Models::GetEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves event notification rules.
       *
       * @param request GetEventRuleRequest
       * @return GetEventRuleResponse
       */
      Models::GetEventRuleResponse getEventRule(const Models::GetEventRuleRequest &request);

      /**
       * @summary Retrieves the attributes of a specified queue.
       *
       * @description >Warning: 
       * <p>To optimize service performance, Simple Message Queue will soon deprecate the return values of the following fields, which will default to 0:
       *     - ActiveMessages
       *     - InactiveMessages
       *     - DelayMessages 
       *   </p>
       *   <p>Use the following methods to obtain alternatives:</p>
       *   <ul>
       *     <li>Use the CloudMonitor OpenAPI to retrieve queue metrics. For more information, see <a href="https://api.aliyun.com/api/Cms/2019-01-01/DescribeMetricLast?RegionId=cn-hangzhou&params={%22Namespace%22:%22acs_smq%22,%22MetricName%22:%22NumberOfMessagesVisible%22}&tab=DEBUG">CloudMonitor OpenAPI documentation</a>.</li>
       *     <li><a href="https://cloudmonitornext.console.aliyun.com/metric-meta/acs_smq/smq/all?spm=5176.2020520111.0.0.5d0c66102s05T4">CloudMonitor metrics documentation</a>. The mapping of deprecated fields to alternative metrics is as follows:
       *       <ul>
       *         <li>ActiveMessages → CloudMonitor metric NumberOfMessagesVisible</li>
       *         <li>InactiveMessages → CloudMonitor metric NumberOfMessagesInvisible</li>
       *         <li>DelayMessages → CloudMonitor metric NumberOfMessagesDelayed</li>
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
       * @summary Retrieves the attributes of a specified queue.
       *
       * @description >Warning: 
       * <p>To optimize service performance, Simple Message Queue will soon deprecate the return values of the following fields, which will default to 0:
       *     - ActiveMessages
       *     - InactiveMessages
       *     - DelayMessages 
       *   </p>
       *   <p>Use the following methods to obtain alternatives:</p>
       *   <ul>
       *     <li>Use the CloudMonitor OpenAPI to retrieve queue metrics. For more information, see <a href="https://api.aliyun.com/api/Cms/2019-01-01/DescribeMetricLast?RegionId=cn-hangzhou&params={%22Namespace%22:%22acs_smq%22,%22MetricName%22:%22NumberOfMessagesVisible%22}&tab=DEBUG">CloudMonitor OpenAPI documentation</a>.</li>
       *     <li><a href="https://cloudmonitornext.console.aliyun.com/metric-meta/acs_smq/smq/all?spm=5176.2020520111.0.0.5d0c66102s05T4">CloudMonitor metrics documentation</a>. The mapping of deprecated fields to alternative metrics is as follows:
       *       <ul>
       *         <li>ActiveMessages → CloudMonitor metric NumberOfMessagesVisible</li>
       *         <li>InactiveMessages → CloudMonitor metric NumberOfMessagesInvisible</li>
       *         <li>DelayMessages → CloudMonitor metric NumberOfMessagesDelayed</li>
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
       * @summary Retrieves the attributes of a subscription.
       *
       * @param request GetSubscriptionAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubscriptionAttributesResponse
       */
      Models::GetSubscriptionAttributesResponse getSubscriptionAttributesWithOptions(const Models::GetSubscriptionAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the attributes of a subscription.
       *
       * @param request GetSubscriptionAttributesRequest
       * @return GetSubscriptionAttributesResponse
       */
      Models::GetSubscriptionAttributesResponse getSubscriptionAttributes(const Models::GetSubscriptionAttributesRequest &request);

      /**
       * @summary Retrieves the attributes of a topic.
       *
       * @param request GetTopicAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicAttributesResponse
       */
      Models::GetTopicAttributesResponse getTopicAttributesWithOptions(const Models::GetTopicAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the attributes of a topic.
       *
       * @param request GetTopicAttributesRequest
       * @return GetTopicAttributesResponse
       */
      Models::GetTopicAttributesResponse getTopicAttributes(const Models::GetTopicAttributesRequest &request);

      /**
       * @summary Queries the list of event notifications.
       *
       * @param tmpReq ListEventRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEventRulesResponse
       */
      Models::ListEventRulesResponse listEventRulesWithOptions(const Models::ListEventRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of event notifications.
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
       * @summary Queries a paginated list of subscriptions under a specific topic.
       *
       * @param request ListSubscriptionByTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubscriptionByTopicResponse
       */
      Models::ListSubscriptionByTopicResponse listSubscriptionByTopicWithOptions(const Models::ListSubscriptionByTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a paginated list of subscriptions under a specific topic.
       *
       * @param request ListSubscriptionByTopicRequest
       * @return ListSubscriptionByTopicResponse
       */
      Models::ListSubscriptionByTopicResponse listSubscriptionByTopic(const Models::ListSubscriptionByTopicRequest &request);

      /**
       * @summary Queries the topics under an Alibaba Cloud account. The query results can be paginated.
       *
       * @param request ListTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTopicResponse
       */
      Models::ListTopicResponse listTopicWithOptions(const Models::ListTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the topics under an Alibaba Cloud account. The query results can be paginated.
       *
       * @param request ListTopicRequest
       * @return ListTopicResponse
       */
      Models::ListTopicResponse listTopic(const Models::ListTopicRequest &request);

      /**
       * @summary Deletes one or more ACL rules for an endpoint of a specified type.
       *
       * @param tmpReq RevokeEndpointAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeEndpointAclResponse
       */
      Models::RevokeEndpointAclResponse revokeEndpointAclWithOptions(const Models::RevokeEndpointAclRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more ACL rules for an endpoint of a specified type.
       *
       * @param request RevokeEndpointAclRequest
       * @return RevokeEndpointAclResponse
       */
      Models::RevokeEndpointAclResponse revokeEndpointAcl(const Models::RevokeEndpointAclRequest &request);

      /**
       * @summary Configures user log settings.
       *
       * @param request SetAccountAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAccountAttributesResponse
       */
      Models::SetAccountAttributesResponse setAccountAttributesWithOptions(const Models::SetAccountAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures user log settings.
       *
       * @param request SetAccountAttributesRequest
       * @return SetAccountAttributesResponse
       */
      Models::SetAccountAttributesResponse setAccountAttributes(const Models::SetAccountAttributesRequest &request);

      /**
       * @summary Modifies the attributes of a queue by calling the SetQueueAttributes operation.
       *
       * @param tmpReq SetQueueAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetQueueAttributesResponse
       */
      Models::SetQueueAttributesResponse setQueueAttributesWithOptions(const Models::SetQueueAttributesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a queue by calling the SetQueueAttributes operation.
       *
       * @param request SetQueueAttributesRequest
       * @return SetQueueAttributesResponse
       */
      Models::SetQueueAttributesResponse setQueueAttributes(const Models::SetQueueAttributesRequest &request);

      /**
       * @summary Modifies the attributes of a subscription.
       *
       * @param tmpReq SetSubscriptionAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSubscriptionAttributesResponse
       */
      Models::SetSubscriptionAttributesResponse setSubscriptionAttributesWithOptions(const Models::SetSubscriptionAttributesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a subscription.
       *
       * @param request SetSubscriptionAttributesRequest
       * @return SetSubscriptionAttributesResponse
       */
      Models::SetSubscriptionAttributesResponse setSubscriptionAttributes(const Models::SetSubscriptionAttributesRequest &request);

      /**
       * @summary Modifies the attributes of a topic.
       *
       * @param request SetTopicAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetTopicAttributesResponse
       */
      Models::SetTopicAttributesResponse setTopicAttributesWithOptions(const Models::SetTopicAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a topic.
       *
       * @param request SetTopicAttributesRequest
       * @return SetTopicAttributesResponse
       */
      Models::SetTopicAttributesResponse setTopicAttributes(const Models::SetTopicAttributesRequest &request);

      /**
       * @summary Creates a subscription for a topic.
       *
       * @param tmpReq SubscribeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubscribeResponse
       */
      Models::SubscribeResponse subscribeWithOptions(const Models::SubscribeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a subscription for a topic.
       *
       * @param request SubscribeRequest
       * @return SubscribeResponse
       */
      Models::SubscribeResponse subscribe(const Models::SubscribeRequest &request);

      /**
       * @summary Cancels an existing subscription.
       *
       * @param request UnsubscribeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnsubscribeResponse
       */
      Models::UnsubscribeResponse unsubscribeWithOptions(const Models::UnsubscribeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an existing subscription.
       *
       * @param request UnsubscribeRequest
       * @return UnsubscribeResponse
       */
      Models::UnsubscribeResponse unsubscribe(const Models::UnsubscribeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
