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
       * @summary Adds an entry to the whitelist of an instance.
       *
       * @param tmpReq AddInstanceWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddInstanceWhiteListResponse
       */
      Models::AddInstanceWhiteListResponse addInstanceWhiteListWithOptions(const Models::AddInstanceWhiteListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an entry to the whitelist of an instance.
       *
       * @param request AddInstanceWhiteListRequest
       * @return AddInstanceWhiteListResponse
       */
      Models::AddInstanceWhiteListResponse addInstanceWhiteList(const Models::AddInstanceWhiteListRequest &request);

      /**
       * @summary When an open-source client accesses an ApsaraMQ for RabbitMQ server, it must provide a username and password for authentication. ApsaraMQ for RabbitMQ lets you generate a username and password from an AccessKey ID and AccessKey secret provided by Resource Access Management (RAM).
       *
       * @param request CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary When an open-source client accesses an ApsaraMQ for RabbitMQ server, it must provide a username and password for authentication. ApsaraMQ for RabbitMQ lets you generate a username and password from an AccessKey ID and AccessKey secret provided by Resource Access Management (RAM).
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary A producer sends a message to an exchange, which then routes the message to a specified queue or another exchange based on the binding and routing rules.
       *
       * @param request CreateBindingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBindingResponse
       */
      Models::CreateBindingResponse createBindingWithOptions(const Models::CreateBindingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A producer sends a message to an exchange, which then routes the message to a specified queue or another exchange based on the binding and routing rules.
       *
       * @param request CreateBindingRequest
       * @return CreateBindingResponse
       */
      Models::CreateBindingResponse createBinding(const Models::CreateBindingRequest &request);

      /**
       * @summary A producer sends a message to an exchange. The exchange then routes the message to one or more queues based on the routing key and the binding key, or discards the message.
       *
       * @param request CreateExchangeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExchangeResponse
       */
      Models::CreateExchangeResponse createExchangeWithOptions(const Models::CreateExchangeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A producer sends a message to an exchange. The exchange then routes the message to one or more queues based on the routing key and the binding key, or discards the message.
       *
       * @param request CreateExchangeRequest
       * @return CreateExchangeResponse
       */
      Models::CreateExchangeResponse createExchange(const Models::CreateExchangeRequest &request);

      /**
       * @summary Creates an ApsaraMQ for RabbitMQ instance.
       *
       * @param tmpReq CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ApsaraMQ for RabbitMQ instance.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Creates an open-source username and password.
       *
       * @param request CreateOpenSourceAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOpenSourceAccountResponse
       */
      Models::CreateOpenSourceAccountResponse createOpenSourceAccountWithOptions(const Models::CreateOpenSourceAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an open-source username and password.
       *
       * @param request CreateOpenSourceAccountRequest
       * @return CreateOpenSourceAccountResponse
       */
      Models::CreateOpenSourceAccountResponse createOpenSourceAccount(const Models::CreateOpenSourceAccountRequest &request);

      /**
       * @summary Creates an open source permission.
       *
       * @param request CreateOpenSourcePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOpenSourcePermissionResponse
       */
      Models::CreateOpenSourcePermissionResponse createOpenSourcePermissionWithOptions(const Models::CreateOpenSourcePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an open source permission.
       *
       * @param request CreateOpenSourcePermissionRequest
       * @return CreateOpenSourcePermissionResponse
       */
      Models::CreateOpenSourcePermissionResponse createOpenSourcePermission(const Models::CreateOpenSourcePermissionRequest &request);

      /**
       * @summary A queue is a buffer that stores messages. In ApsaraMQ for RabbitMQ, messages are sent to a specified exchange and then routed to a bound queue.
       *
       * @param request CreateQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQueueResponse
       */
      Models::CreateQueueResponse createQueueWithOptions(const Models::CreateQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A queue is a buffer that stores messages. In ApsaraMQ for RabbitMQ, messages are sent to a specified exchange and then routed to a bound queue.
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
       * @summary Deletes a static username and password.
       *
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a static username and password.
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary The DeleteBinding operation detaches a source exchange from a target queue or another exchange.
       *
       * @param request DeleteBindingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBindingResponse
       */
      Models::DeleteBindingResponse deleteBindingWithOptions(const Models::DeleteBindingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The DeleteBinding operation detaches a source exchange from a target queue or another exchange.
       *
       * @param request DeleteBindingRequest
       * @return DeleteBindingResponse
       */
      Models::DeleteBindingResponse deleteBinding(const Models::DeleteBindingRequest &request);

      /**
       * @summary Deletes an exchange.
       *
       * @description ## Usage notes
       * - You cannot delete exchanges with the type **headers**.
       * - You cannot delete the three built-in exchanges in a vhost: amq.direct, amq.topic, or amq.fanout.
       *
       * @param request DeleteExchangeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExchangeResponse
       */
      Models::DeleteExchangeResponse deleteExchangeWithOptions(const Models::DeleteExchangeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an exchange.
       *
       * @description ## Usage notes
       * - You cannot delete exchanges with the type **headers**.
       * - You cannot delete the three built-in exchanges in a vhost: amq.direct, amq.topic, or amq.fanout.
       *
       * @param request DeleteExchangeRequest
       * @return DeleteExchangeResponse
       */
      Models::DeleteExchangeResponse deleteExchange(const Models::DeleteExchangeRequest &request);

      /**
       * @summary Deletes the username and password of an open-source user.
       *
       * @param request DeleteOpenSourceAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOpenSourceAccountResponse
       */
      Models::DeleteOpenSourceAccountResponse deleteOpenSourceAccountWithOptions(const Models::DeleteOpenSourceAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the username and password of an open-source user.
       *
       * @param request DeleteOpenSourceAccountRequest
       * @return DeleteOpenSourceAccountResponse
       */
      Models::DeleteOpenSourceAccountResponse deleteOpenSourceAccount(const Models::DeleteOpenSourceAccountRequest &request);

      /**
       * @summary Deletes an open source permission.
       *
       * @param request DeleteOpenSourcePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOpenSourcePermissionResponse
       */
      Models::DeleteOpenSourcePermissionResponse deleteOpenSourcePermissionWithOptions(const Models::DeleteOpenSourcePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an open source permission.
       *
       * @param request DeleteOpenSourcePermissionRequest
       * @return DeleteOpenSourcePermissionResponse
       */
      Models::DeleteOpenSourcePermissionResponse deleteOpenSourcePermission(const Models::DeleteOpenSourcePermissionRequest &request);

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
       * @description Before you delete a vhost, you must delete all exchanges and queues in it.
       *
       * @param request DeleteVirtualHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVirtualHostResponse
       */
      Models::DeleteVirtualHostResponse deleteVirtualHostWithOptions(const Models::DeleteVirtualHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual host (vhost).
       *
       * @description Before you delete a vhost, you must delete all exchanges and queues in it.
       *
       * @param request DeleteVirtualHostRequest
       * @return DeleteVirtualHostResponse
       */
      Models::DeleteVirtualHostResponse deleteVirtualHost(const Models::DeleteVirtualHostRequest &request);

      /**
       * @summary Retrieves the details of an ApsaraMQ for RabbitMQ instance.
       *
       * @param request GetInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const Models::GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an ApsaraMQ for RabbitMQ instance.
       *
       * @param request GetInstanceRequest
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const Models::GetInstanceRequest &request);

      /**
       * @summary Queries the current and maximum numbers of vhosts, exchanges, and queues for a specified ApsaraMQ for RabbitMQ instance.
       *
       * @param request GetMetadataAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetadataAmountResponse
       */
      Models::GetMetadataAmountResponse getMetadataAmountWithOptions(const Models::GetMetadataAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current and maximum numbers of vhosts, exchanges, and queues for a specified ApsaraMQ for RabbitMQ instance.
       *
       * @param request GetMetadataAmountRequest
       * @return GetMetadataAmountResponse
       */
      Models::GetMetadataAmountResponse getMetadataAmount(const Models::GetMetadataAmountRequest &request);

      /**
       * @summary Lists the usernames and passwords for a specified ApsaraMQ for RabbitMQ instance.
       *
       * @param request ListAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccountsResponse
       */
      Models::ListAccountsResponse listAccountsWithOptions(const Models::ListAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the usernames and passwords for a specified ApsaraMQ for RabbitMQ instance.
       *
       * @param request ListAccountsRequest
       * @return ListAccountsResponse
       */
      Models::ListAccountsResponse listAccounts(const Models::ListAccountsRequest &request);

      /**
       * @summary Queries all bindings that are created in a vhost of a specified ApsaraMQ for RabbitMQ instance.
       *
       * @param request ListBindingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBindingsResponse
       */
      Models::ListBindingsResponse listBindingsWithOptions(const Models::ListBindingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all bindings that are created in a vhost of a specified ApsaraMQ for RabbitMQ instance.
       *
       * @param request ListBindingsRequest
       * @return ListBindingsResponse
       */
      Models::ListBindingsResponse listBindings(const Models::ListBindingsRequest &request);

      /**
       * @summary Queries the exchanges or queues that are bound to a specified exchange.
       *
       * @param request ListDownStreamBindingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDownStreamBindingsResponse
       */
      Models::ListDownStreamBindingsResponse listDownStreamBindingsWithOptions(const Models::ListDownStreamBindingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the exchanges or queues that are bound to a specified exchange.
       *
       * @param request ListDownStreamBindingsRequest
       * @return ListDownStreamBindingsResponse
       */
      Models::ListDownStreamBindingsResponse listDownStreamBindings(const Models::ListDownStreamBindingsRequest &request);

      /**
       * @summary Queries the queues or other exchanges that are bound to a specified exchange.
       *
       * @param request ListExchangeUpStreamBindingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExchangeUpStreamBindingsResponse
       */
      Models::ListExchangeUpStreamBindingsResponse listExchangeUpStreamBindingsWithOptions(const Models::ListExchangeUpStreamBindingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the queues or other exchanges that are bound to a specified exchange.
       *
       * @param request ListExchangeUpStreamBindingsRequest
       * @return ListExchangeUpStreamBindingsResponse
       */
      Models::ListExchangeUpStreamBindingsResponse listExchangeUpStreamBindings(const Models::ListExchangeUpStreamBindingsRequest &request);

      /**
       * @summary Lists all exchanges in a specified vhost of an instance.
       *
       * @param request ListExchangesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExchangesResponse
       */
      Models::ListExchangesResponse listExchangesWithOptions(const Models::ListExchangesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all exchanges in a specified vhost of an instance.
       *
       * @param request ListExchangesRequest
       * @return ListExchangesResponse
       */
      Models::ListExchangesResponse listExchanges(const Models::ListExchangesRequest &request);

      /**
       * @summary Queries the IP or VPC whitelist for an instance.
       *
       * @param request ListInstanceWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceWhiteListResponse
       */
      Models::ListInstanceWhiteListResponse listInstanceWhiteListWithOptions(const Models::ListInstanceWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP or VPC whitelist for an instance.
       *
       * @param request ListInstanceWhiteListRequest
       * @return ListInstanceWhiteListResponse
       */
      Models::ListInstanceWhiteListResponse listInstanceWhiteList(const Models::ListInstanceWhiteListRequest &request);

      /**
       * @summary Queries a list of ApsaraMQ for RabbitMQ instances in a specified region and returns basic information about each instance, such as its endpoints and specification limits.
       *
       * @param request ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of ApsaraMQ for RabbitMQ instances in a specified region and returns basic information about each instance, such as its endpoints and specification limits.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Enumerates open-source usernames and passwords.
       *
       * @param request ListOpenSourceAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOpenSourceAccountsResponse
       */
      Models::ListOpenSourceAccountsResponse listOpenSourceAccountsWithOptions(const Models::ListOpenSourceAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enumerates open-source usernames and passwords.
       *
       * @param request ListOpenSourceAccountsRequest
       * @return ListOpenSourceAccountsResponse
       */
      Models::ListOpenSourceAccountsResponse listOpenSourceAccounts(const Models::ListOpenSourceAccountsRequest &request);

      /**
       * @summary Lists open source permissions.
       *
       * @param request ListOpenSourcePermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOpenSourcePermissionsResponse
       */
      Models::ListOpenSourcePermissionsResponse listOpenSourcePermissionsWithOptions(const Models::ListOpenSourcePermissionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists open source permissions.
       *
       * @param request ListOpenSourcePermissionsRequest
       * @return ListOpenSourcePermissionsResponse
       */
      Models::ListOpenSourcePermissionsResponse listOpenSourcePermissions(const Models::ListOpenSourcePermissionsRequest &request);

      /**
       * @summary Queries the online consumer clients of a specified queue.
       *
       * @description ApsaraMQ for RabbitMQ lets you query only online consumer clients. You cannot query offline consumer clients.
       *
       * @param request ListQueueConsumersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQueueConsumersResponse
       */
      Models::ListQueueConsumersResponse listQueueConsumersWithOptions(const Models::ListQueueConsumersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the online consumer clients of a specified queue.
       *
       * @description ApsaraMQ for RabbitMQ lets you query only online consumer clients. You cannot query offline consumer clients.
       *
       * @param request ListQueueConsumersRequest
       * @return ListQueueConsumersResponse
       */
      Models::ListQueueConsumersResponse listQueueConsumers(const Models::ListQueueConsumersRequest &request);

      /**
       * @summary Queries the exchanges that are bound to a specified queue.
       *
       * @param request ListQueueUpStreamBindingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQueueUpStreamBindingsResponse
       */
      Models::ListQueueUpStreamBindingsResponse listQueueUpStreamBindingsWithOptions(const Models::ListQueueUpStreamBindingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the exchanges that are bound to a specified queue.
       *
       * @param request ListQueueUpStreamBindingsRequest
       * @return ListQueueUpStreamBindingsResponse
       */
      Models::ListQueueUpStreamBindingsResponse listQueueUpStreamBindings(const Models::ListQueueUpStreamBindingsRequest &request);

      /**
       * @summary Queries information about all queues in a vhost on a specified ApsaraMQ for RabbitMQ instance.
       *
       * @param request ListQueuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQueuesResponse
       */
      Models::ListQueuesResponse listQueuesWithOptions(const Models::ListQueuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about all queues in a vhost on a specified ApsaraMQ for RabbitMQ instance.
       *
       * @param request ListQueuesRequest
       * @return ListQueuesResponse
       */
      Models::ListQueuesResponse listQueues(const Models::ListQueuesRequest &request);

      /**
       * @summary Lists all vhosts in a specified ApsaraMQ for RabbitMQ instance.
       *
       * @param request ListVirtualHostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVirtualHostsResponse
       */
      Models::ListVirtualHostsResponse listVirtualHostsWithOptions(const Models::ListVirtualHostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all vhosts in a specified ApsaraMQ for RabbitMQ instance.
       *
       * @param request ListVirtualHostsRequest
       * @return ListVirtualHostsResponse
       */
      Models::ListVirtualHostsResponse listVirtualHosts(const Models::ListVirtualHostsRequest &request);

      /**
       * @summary Removes an IP address or a VPC from an instance\\"s whitelist.
       *
       * @param request RemoveInstanceWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveInstanceWhiteListResponse
       */
      Models::RemoveInstanceWhiteListResponse removeInstanceWhiteListWithOptions(const Models::RemoveInstanceWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an IP address or a VPC from an instance\\"s whitelist.
       *
       * @param request RemoveInstanceWhiteListRequest
       * @return RemoveInstanceWhiteListResponse
       */
      Models::RemoveInstanceWhiteListResponse removeInstanceWhiteList(const Models::RemoveInstanceWhiteListRequest &request);

      /**
       * @summary Upgrades or downgrades the specifications of an ApsaraMQ for RabbitMQ instance.
       *
       * @param request UpdateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const Models::UpdateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades or downgrades the specifications of an ApsaraMQ for RabbitMQ instance.
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const Models::UpdateInstanceRequest &request);

      /**
       * @summary An ApsaraMQ for RabbitMQ instance is named after its instance ID by default. You can change the name for easier identification.
       *
       * @param request UpdateInstanceNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceNameResponse
       */
      Models::UpdateInstanceNameResponse updateInstanceNameWithOptions(const Models::UpdateInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary An ApsaraMQ for RabbitMQ instance is named after its instance ID by default. You can change the name for easier identification.
       *
       * @param request UpdateInstanceNameRequest
       * @return UpdateInstanceNameResponse
       */
      Models::UpdateInstanceNameResponse updateInstanceName(const Models::UpdateInstanceNameRequest &request);

      /**
       * @summary Update serverless switch
       *
       * @param request UpdateInstanceServerlessSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceServerlessSwitchResponse
       */
      Models::UpdateInstanceServerlessSwitchResponse updateInstanceServerlessSwitchWithOptions(const Models::UpdateInstanceServerlessSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update serverless switch
       *
       * @param request UpdateInstanceServerlessSwitchRequest
       * @return UpdateInstanceServerlessSwitchResponse
       */
      Models::UpdateInstanceServerlessSwitchResponse updateInstanceServerlessSwitch(const Models::UpdateInstanceServerlessSwitchRequest &request);

      /**
       * @summary Updates the username and password for open-source access.
       *
       * @param request UpdateOpenSourceAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOpenSourceAccountResponse
       */
      Models::UpdateOpenSourceAccountResponse updateOpenSourceAccountWithOptions(const Models::UpdateOpenSourceAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the username and password for open-source access.
       *
       * @param request UpdateOpenSourceAccountRequest
       * @return UpdateOpenSourceAccountResponse
       */
      Models::UpdateOpenSourceAccountResponse updateOpenSourceAccount(const Models::UpdateOpenSourceAccountRequest &request);

      /**
       * @summary Updates open source permissions.
       *
       * @param request UpdateOpenSourcePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOpenSourcePermissionResponse
       */
      Models::UpdateOpenSourcePermissionResponse updateOpenSourcePermissionWithOptions(const Models::UpdateOpenSourcePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates open source permissions.
       *
       * @param request UpdateOpenSourcePermissionRequest
       * @return UpdateOpenSourcePermissionResponse
       */
      Models::UpdateOpenSourcePermissionResponse updateOpenSourcePermission(const Models::UpdateOpenSourcePermissionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
