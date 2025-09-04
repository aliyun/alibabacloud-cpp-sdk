// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AMQPOPEN20191212_HPP_
#define ALIBABACLOUD_AMQPOPEN20191212_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AmqpOpen20191212Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AmqpOpen20191212.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates a pair of static username and password. If you access an ApsaraMQ for RabbitMQ broker from an open source RabbitMQ client, you must use a pair of username and password for authentication. You can access the ApsaraMQ for RabbitMQ broker only after the authentication is passed. ApsaraMQ for RabbitMQ allows you to generate usernames and passwords by using AccessKey pairs provided by Alibaba Cloud Resource Access Management (RAM).
       *
       * @param request CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a pair of static username and password. If you access an ApsaraMQ for RabbitMQ broker from an open source RabbitMQ client, you must use a pair of username and password for authentication. You can access the ApsaraMQ for RabbitMQ broker only after the authentication is passed. ApsaraMQ for RabbitMQ allows you to generate usernames and passwords by using AccessKey pairs provided by Alibaba Cloud Resource Access Management (RAM).
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary Creates a binding. In ApsaraMQ for RabbitMQ, after a producer sends a message to an exchange, the exchange routes the message to a queue or another exchange based on the binding relationship and the routing rule.
       *
       * @param request CreateBindingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBindingResponse
       */
      Models::CreateBindingResponse createBindingWithOptions(const Models::CreateBindingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a binding. In ApsaraMQ for RabbitMQ, after a producer sends a message to an exchange, the exchange routes the message to a queue or another exchange based on the binding relationship and the routing rule.
       *
       * @param request CreateBindingRequest
       * @return CreateBindingResponse
       */
      Models::CreateBindingResponse createBinding(const Models::CreateBindingRequest &request);

      /**
       * @summary Creates an exchange. In ApsaraMQ for RabbitMQ, an exchange is used to route a message that is received from a producer to one or more queues or to discard the message. An exchange routes a message to queues by using the routing key and binding keys.
       *
       * @param request CreateExchangeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExchangeResponse
       */
      Models::CreateExchangeResponse createExchangeWithOptions(const Models::CreateExchangeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an exchange. In ApsaraMQ for RabbitMQ, an exchange is used to route a message that is received from a producer to one or more queues or to discard the message. An exchange routes a message to queues by using the routing key and binding keys.
       *
       * @param request CreateExchangeRequest
       * @return CreateExchangeResponse
       */
      Models::CreateExchangeResponse createExchange(const Models::CreateExchangeRequest &request);

      /**
       * @summary Creates an ApsaraMQ for RabbitMQ instance.
       *
       * @description **Before you call this operation, make sure that you fully understand the [billing methods and pricing](https://help.aliyun.com/document_detail/606747.html) of ApsaraMQ for RabbitMQ.
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ApsaraMQ for RabbitMQ instance.
       *
       * @description **Before you call this operation, make sure that you fully understand the [billing methods and pricing](https://help.aliyun.com/document_detail/606747.html) of ApsaraMQ for RabbitMQ.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Creates a queue. In ApsaraMQ for RabbitMQ, a queue is a message queue. All messages in ApsaraMQ for RabbitMQ are sent to a specific exchange and then routed to a bound queue by the exchange.
       *
       * @param request CreateQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQueueResponse
       */
      Models::CreateQueueResponse createQueueWithOptions(const Models::CreateQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a queue. In ApsaraMQ for RabbitMQ, a queue is a message queue. All messages in ApsaraMQ for RabbitMQ are sent to a specific exchange and then routed to a bound queue by the exchange.
       *
       * @param request CreateQueueRequest
       * @return CreateQueueResponse
       */
      Models::CreateQueueResponse createQueue(const Models::CreateQueueRequest &request);

      /**
       * @summary Creates a vhost. A vhost is used to logically isolate resources. Each vhost manages its own exchanges, queues, and bindings. Applications can run on independent vhosts in a secure manner. This way, the business of an application is not affected by other applications. Before you connect producers and consumers to an ApsaraMQ for RabbitMQ instance, you must specify vhosts for the producers and consumers.
       *
       * @param request CreateVirtualHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVirtualHostResponse
       */
      Models::CreateVirtualHostResponse createVirtualHostWithOptions(const Models::CreateVirtualHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a vhost. A vhost is used to logically isolate resources. Each vhost manages its own exchanges, queues, and bindings. Applications can run on independent vhosts in a secure manner. This way, the business of an application is not affected by other applications. Before you connect producers and consumers to an ApsaraMQ for RabbitMQ instance, you must specify vhosts for the producers and consumers.
       *
       * @param request CreateVirtualHostRequest
       * @return CreateVirtualHostResponse
       */
      Models::CreateVirtualHostResponse createVirtualHost(const Models::CreateVirtualHostRequest &request);

      /**
       * @summary Deletes a pair of username and password.
       *
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a pair of username and password.
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary Deletes a binding to unbind a queue or an exchange from a source exchange.
       *
       * @param request DeleteBindingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBindingResponse
       */
      Models::DeleteBindingResponse deleteBindingWithOptions(const Models::DeleteBindingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a binding to unbind a queue or an exchange from a source exchange.
       *
       * @param request DeleteBindingRequest
       * @return DeleteBindingResponse
       */
      Models::DeleteBindingResponse deleteBinding(const Models::DeleteBindingRequest &request);

      /**
       * @summary Deletes an exchange.
       *
       * @description ## [](#)Usage notes
       * *   You cannot delete exchanges of the **headers** and **x-jms-topic** types.
       * *   You cannot delete built-in exchanges in a vhost. These exchanges are amq.direct, amq.topic, and amq.fanout.
       *
       * @param request DeleteExchangeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExchangeResponse
       */
      Models::DeleteExchangeResponse deleteExchangeWithOptions(const Models::DeleteExchangeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an exchange.
       *
       * @description ## [](#)Usage notes
       * *   You cannot delete exchanges of the **headers** and **x-jms-topic** types.
       * *   You cannot delete built-in exchanges in a vhost. These exchanges are amq.direct, amq.topic, and amq.fanout.
       *
       * @param request DeleteExchangeRequest
       * @return DeleteExchangeResponse
       */
      Models::DeleteExchangeResponse deleteExchange(const Models::DeleteExchangeRequest &request);

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
       * @summary Deletes a virtual host (vhost).
       *
       * @description Before you delete a vhost, make sure that all exchanges and queues in the vhost are deleted.
       *
       * @param request DeleteVirtualHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVirtualHostResponse
       */
      Models::DeleteVirtualHostResponse deleteVirtualHostWithOptions(const Models::DeleteVirtualHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual host (vhost).
       *
       * @description Before you delete a vhost, make sure that all exchanges and queues in the vhost are deleted.
       *
       * @param request DeleteVirtualHostRequest
       * @return DeleteVirtualHostResponse
       */
      Models::DeleteVirtualHostResponse deleteVirtualHost(const Models::DeleteVirtualHostRequest &request);

      /**
       * @summary 获取实例详情
       *
       * @param request GetInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const Models::GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例详情
       *
       * @param request GetInstanceRequest
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const Models::GetInstanceRequest &request);

      /**
       * @summary Queries the maximum number of vhosts, exchanges, and queues that you can create and the number of created vhosts, exchanges, and queues on an ApsaraMQ for RabbitMQ instance.
       *
       * @param request GetMetadataAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetadataAmountResponse
       */
      Models::GetMetadataAmountResponse getMetadataAmountWithOptions(const Models::GetMetadataAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the maximum number of vhosts, exchanges, and queues that you can create and the number of created vhosts, exchanges, and queues on an ApsaraMQ for RabbitMQ instance.
       *
       * @param request GetMetadataAmountRequest
       * @return GetMetadataAmountResponse
       */
      Models::GetMetadataAmountResponse getMetadataAmount(const Models::GetMetadataAmountRequest &request);

      /**
       * @summary Queries the static username and password of an ApsaraMQ for RabbitMQ.
       *
       * @param request ListAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccountsResponse
       */
      Models::ListAccountsResponse listAccountsWithOptions(const Models::ListAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the static username and password of an ApsaraMQ for RabbitMQ.
       *
       * @param request ListAccountsRequest
       * @return ListAccountsResponse
       */
      Models::ListAccountsResponse listAccounts(const Models::ListAccountsRequest &request);

      /**
       * @summary Queries all bindings of a virtual host (vhost) on an ApsaraMQ for RabbitMQ instance.
       *
       * @param request ListBindingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBindingsResponse
       */
      Models::ListBindingsResponse listBindingsWithOptions(const Models::ListBindingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all bindings of a virtual host (vhost) on an ApsaraMQ for RabbitMQ instance.
       *
       * @param request ListBindingsRequest
       * @return ListBindingsResponse
       */
      Models::ListBindingsResponse listBindings(const Models::ListBindingsRequest &request);

      /**
       * @summary Queries all exchanges or queues to which an exchange is bound.
       *
       * @param request ListDownStreamBindingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDownStreamBindingsResponse
       */
      Models::ListDownStreamBindingsResponse listDownStreamBindingsWithOptions(const Models::ListDownStreamBindingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all exchanges or queues to which an exchange is bound.
       *
       * @param request ListDownStreamBindingsRequest
       * @return ListDownStreamBindingsResponse
       */
      Models::ListDownStreamBindingsResponse listDownStreamBindings(const Models::ListDownStreamBindingsRequest &request);

      /**
       * @summary Queries all queues or exchanges that are bound to an exchange.
       *
       * @param request ListExchangeUpStreamBindingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExchangeUpStreamBindingsResponse
       */
      Models::ListExchangeUpStreamBindingsResponse listExchangeUpStreamBindingsWithOptions(const Models::ListExchangeUpStreamBindingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all queues or exchanges that are bound to an exchange.
       *
       * @param request ListExchangeUpStreamBindingsRequest
       * @return ListExchangeUpStreamBindingsResponse
       */
      Models::ListExchangeUpStreamBindingsResponse listExchangeUpStreamBindings(const Models::ListExchangeUpStreamBindingsRequest &request);

      /**
       * @summary Queries all exchanges that are created in a virtual host (vhost).
       *
       * @param request ListExchangesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExchangesResponse
       */
      Models::ListExchangesResponse listExchangesWithOptions(const Models::ListExchangesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all exchanges that are created in a virtual host (vhost).
       *
       * @param request ListExchangesRequest
       * @return ListExchangesResponse
       */
      Models::ListExchangesResponse listExchanges(const Models::ListExchangesRequest &request);

      /**
       * @summary Queries all AparaMQ for RabbitMQ instances in a region. The returned data includes the basic information, endpoint, and specification limits of each instance.
       *
       * @param request ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all AparaMQ for RabbitMQ instances in a region. The returned data includes the basic information, endpoint, and specification limits of each instance.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Queries the online consumers of a queue.
       *
       * @description ApsaraMQ for RabbitMQ allows you to query only online consumers.
       *
       * @param request ListQueueConsumersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQueueConsumersResponse
       */
      Models::ListQueueConsumersResponse listQueueConsumersWithOptions(const Models::ListQueueConsumersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the online consumers of a queue.
       *
       * @description ApsaraMQ for RabbitMQ allows you to query only online consumers.
       *
       * @param request ListQueueConsumersRequest
       * @return ListQueueConsumersResponse
       */
      Models::ListQueueConsumersResponse listQueueConsumers(const Models::ListQueueConsumersRequest &request);

      /**
       * @summary Queries the exchanges that are bound to a queue.
       *
       * @param request ListQueueUpStreamBindingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQueueUpStreamBindingsResponse
       */
      Models::ListQueueUpStreamBindingsResponse listQueueUpStreamBindingsWithOptions(const Models::ListQueueUpStreamBindingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the exchanges that are bound to a queue.
       *
       * @param request ListQueueUpStreamBindingsRequest
       * @return ListQueueUpStreamBindingsResponse
       */
      Models::ListQueueUpStreamBindingsResponse listQueueUpStreamBindings(const Models::ListQueueUpStreamBindingsRequest &request);

      /**
       * @summary Queries all queues in a vhost of an ApsaraMQ for RabbitMQ instance.
       *
       * @param request ListQueuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQueuesResponse
       */
      Models::ListQueuesResponse listQueuesWithOptions(const Models::ListQueuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all queues in a vhost of an ApsaraMQ for RabbitMQ instance.
       *
       * @param request ListQueuesRequest
       * @return ListQueuesResponse
       */
      Models::ListQueuesResponse listQueues(const Models::ListQueuesRequest &request);

      /**
       * @summary Queries all virtual hosts (vhosts) on an ApsaraMQ for RabbitMQ instance.
       *
       * @param request ListVirtualHostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVirtualHostsResponse
       */
      Models::ListVirtualHostsResponse listVirtualHostsWithOptions(const Models::ListVirtualHostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all virtual hosts (vhosts) on an ApsaraMQ for RabbitMQ instance.
       *
       * @param request ListVirtualHostsRequest
       * @return ListVirtualHostsResponse
       */
      Models::ListVirtualHostsResponse listVirtualHosts(const Models::ListVirtualHostsRequest &request);

      /**
       * @summary Upgrades or downgrades the configurations of an ApsaraMQ for RabbitMQ instance.
       *
       * @param request UpdateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const Models::UpdateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades or downgrades the configurations of an ApsaraMQ for RabbitMQ instance.
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const Models::UpdateInstanceRequest &request);

      /**
       * @summary Updates the name of an ApsaraMQ for RabbitMQ instance. After an ApsaraMQ for RabbitMQ instance is created, the ID of the instance is used as its name by default. You can specify a custom name for an instance to facilitate instance identification.
       *
       * @param request UpdateInstanceNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceNameResponse
       */
      Models::UpdateInstanceNameResponse updateInstanceNameWithOptions(const Models::UpdateInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name of an ApsaraMQ for RabbitMQ instance. After an ApsaraMQ for RabbitMQ instance is created, the ID of the instance is used as its name by default. You can specify a custom name for an instance to facilitate instance identification.
       *
       * @param request UpdateInstanceNameRequest
       * @return UpdateInstanceNameResponse
       */
      Models::UpdateInstanceNameResponse updateInstanceName(const Models::UpdateInstanceNameRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
