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
       * @summary You can call this operation to add one or more rules of access control lists (ACLs) for the endpoint of a type.
       *
       * @param tmpReq AuthorizeEndpointAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeEndpointAclResponse
       */
      Models::AuthorizeEndpointAclResponse authorizeEndpointAclWithOptions(const Models::AuthorizeEndpointAclRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to add one or more rules of access control lists (ACLs) for the endpoint of a type.
       *
       * @param request AuthorizeEndpointAclRequest
       * @return AuthorizeEndpointAclResponse
       */
      Models::AuthorizeEndpointAclResponse authorizeEndpointAcl(const Models::AuthorizeEndpointAclRequest &request);

      /**
       * @summary 创建事件规则
       *
       * @param tmpReq CreateEventRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEventRuleResponse
       */
      Models::CreateEventRuleResponse createEventRuleWithOptions(const Models::CreateEventRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建事件规则
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
       * @summary Creates a topic.
       *
       * @param request CreateTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTopicResponse
       */
      Models::CreateTopicResponse createTopicWithOptions(const Models::CreateTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a topic.
       *
       * @param request CreateTopicRequest
       * @return CreateTopicResponse
       */
      Models::CreateTopicResponse createTopic(const Models::CreateTopicRequest &request);

      /**
       * @summary 删除事件规则
       *
       * @param request DeleteEventRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEventRuleResponse
       */
      Models::DeleteEventRuleResponse deleteEventRuleWithOptions(const Models::DeleteEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除事件规则
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
       * @summary You can call this operation to disenable the endpoint of a type. After the endpoint is disabled, all requests from the endpoint are blocked and an error is returned.
       *
       * @param request DisableEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableEndpointResponse
       */
      Models::DisableEndpointResponse disableEndpointWithOptions(const Models::DisableEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to disenable the endpoint of a type. After the endpoint is disabled, all requests from the endpoint are blocked and an error is returned.
       *
       * @param request DisableEndpointRequest
       * @return DisableEndpointResponse
       */
      Models::DisableEndpointResponse disableEndpoint(const Models::DisableEndpointRequest &request);

      /**
       * @summary You can call this operation to enable the endpoint of a type. If the endpoint is enabled, requests from the endpoint that are included in the access control lists (ACLs) are not blocked.
       *
       * @param request EnableEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableEndpointResponse
       */
      Models::EnableEndpointResponse enableEndpointWithOptions(const Models::EnableEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to enable the endpoint of a type. If the endpoint is enabled, requests from the endpoint that are included in the access control lists (ACLs) are not blocked.
       *
       * @param request EnableEndpointRequest
       * @return EnableEndpointResponse
       */
      Models::EnableEndpointResponse enableEndpoint(const Models::EnableEndpointRequest &request);

      /**
       * @summary GetEndpointAttribute
       *
       * @param request GetEndpointAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEndpointAttributeResponse
       */
      Models::GetEndpointAttributeResponse getEndpointAttributeWithOptions(const Models::GetEndpointAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetEndpointAttribute
       *
       * @param request GetEndpointAttributeRequest
       * @return GetEndpointAttributeResponse
       */
      Models::GetEndpointAttributeResponse getEndpointAttribute(const Models::GetEndpointAttributeRequest &request);

      /**
       * @summary 获取事件通知规则
       *
       * @param request GetEventRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEventRuleResponse
       */
      Models::GetEventRuleResponse getEventRuleWithOptions(const Models::GetEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取事件通知规则
       *
       * @param request GetEventRuleRequest
       * @return GetEventRuleResponse
       */
      Models::GetEventRuleResponse getEventRule(const Models::GetEventRuleRequest &request);

      /**
       * @summary Queries the attributes of an existing queue.
       *
       * @param request GetQueueAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQueueAttributesResponse
       */
      Models::GetQueueAttributesResponse getQueueAttributesWithOptions(const Models::GetQueueAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attributes of an existing queue.
       *
       * @param request GetQueueAttributesRequest
       * @return GetQueueAttributesResponse
       */
      Models::GetQueueAttributesResponse getQueueAttributes(const Models::GetQueueAttributesRequest &request);

      /**
       * @summary Queries the attributes of a subscription.
       *
       * @param request GetSubscriptionAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubscriptionAttributesResponse
       */
      Models::GetSubscriptionAttributesResponse getSubscriptionAttributesWithOptions(const Models::GetSubscriptionAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attributes of a subscription.
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
       * @summary 查询事件通知列表
       *
       * @param tmpReq ListEventRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEventRulesResponse
       */
      Models::ListEventRulesResponse listEventRulesWithOptions(const Models::ListEventRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询事件通知列表
       *
       * @param request ListEventRulesRequest
       * @return ListEventRulesResponse
       */
      Models::ListEventRulesResponse listEventRules(const Models::ListEventRulesRequest &request);

      /**
       * @summary Queries all queues that belong to an Alibaba Cloud account. The queues are displayed by page.
       *
       * @param request ListQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQueueResponse
       */
      Models::ListQueueResponse listQueueWithOptions(const Models::ListQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all queues that belong to an Alibaba Cloud account. The queues are displayed by page.
       *
       * @param request ListQueueRequest
       * @return ListQueueResponse
       */
      Models::ListQueueResponse listQueue(const Models::ListQueueRequest &request);

      /**
       * @summary Queries all subscriptions to a topic. The subscriptions are displayed by page.
       *
       * @param request ListSubscriptionByTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubscriptionByTopicResponse
       */
      Models::ListSubscriptionByTopicResponse listSubscriptionByTopicWithOptions(const Models::ListSubscriptionByTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all subscriptions to a topic. The subscriptions are displayed by page.
       *
       * @param request ListSubscriptionByTopicRequest
       * @return ListSubscriptionByTopicResponse
       */
      Models::ListSubscriptionByTopicResponse listSubscriptionByTopic(const Models::ListSubscriptionByTopicRequest &request);

      /**
       * @summary Queries the topics that belong to an Alibaba Cloud account. The topics are displayed by page.
       *
       * @param request ListTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTopicResponse
       */
      Models::ListTopicResponse listTopicWithOptions(const Models::ListTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the topics that belong to an Alibaba Cloud account. The topics are displayed by page.
       *
       * @param request ListTopicRequest
       * @return ListTopicResponse
       */
      Models::ListTopicResponse listTopic(const Models::ListTopicRequest &request);

      /**
       * @summary You can call this operation to delete one or more rules of access control lists (ACLs) for the endpoint of a type.
       *
       * @param tmpReq RevokeEndpointAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeEndpointAclResponse
       */
      Models::RevokeEndpointAclResponse revokeEndpointAclWithOptions(const Models::RevokeEndpointAclRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to delete one or more rules of access control lists (ACLs) for the endpoint of a type.
       *
       * @param request RevokeEndpointAclRequest
       * @return RevokeEndpointAclResponse
       */
      Models::RevokeEndpointAclResponse revokeEndpointAcl(const Models::RevokeEndpointAclRequest &request);

      /**
       * @summary Modifies a queue.
       *
       * @param tmpReq SetQueueAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetQueueAttributesResponse
       */
      Models::SetQueueAttributesResponse setQueueAttributesWithOptions(const Models::SetQueueAttributesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a queue.
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
       * @summary Creates a subscription to a topic.
       *
       * @param tmpReq SubscribeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubscribeResponse
       */
      Models::SubscribeResponse subscribeWithOptions(const Models::SubscribeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a subscription to a topic.
       *
       * @param request SubscribeRequest
       * @return SubscribeResponse
       */
      Models::SubscribeResponse subscribe(const Models::SubscribeRequest &request);

      /**
       * @summary Deletes a subscription.
       *
       * @param request UnsubscribeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnsubscribeResponse
       */
      Models::UnsubscribeResponse unsubscribeWithOptions(const Models::UnsubscribeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a subscription.
       *
       * @param request UnsubscribeRequest
       * @return UnsubscribeResponse
       */
      Models::UnsubscribeResponse unsubscribe(const Models::UnsubscribeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
