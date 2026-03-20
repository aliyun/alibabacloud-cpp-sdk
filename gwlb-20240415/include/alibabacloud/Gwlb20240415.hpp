// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_GWLB20240415_HPP_
#define ALIBABACLOUD_GWLB20240415_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Gwlb20240415Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Gwlb20240415.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gwlb20240415
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds backend servers to the server group of a Gateway Load Balancer (GWLB) instance.
       *
       * @description **AddServersToServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
       * 1.  You can call the ListServerGroups operation to query the status of the server group.
       * *   If the server group is in the **Configuring** state, the server group is being modified.
       * *   If the server group is in the **Available** state, the server group is running.
       * 2.  You can call the ListServerGroupServers operation to query the status of the backend server.
       * *   If the backend server is in the **Adding** state, the backend server is being added to the server group.
       * *   If the backend server is in the **Available** state, the server is running.
       *
       * @param request AddServersToServerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddServersToServerGroupResponse
       */
      Models::AddServersToServerGroupResponse addServersToServerGroupWithOptions(const Models::AddServersToServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds backend servers to the server group of a Gateway Load Balancer (GWLB) instance.
       *
       * @description **AddServersToServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
       * 1.  You can call the ListServerGroups operation to query the status of the server group.
       * *   If the server group is in the **Configuring** state, the server group is being modified.
       * *   If the server group is in the **Available** state, the server group is running.
       * 2.  You can call the ListServerGroupServers operation to query the status of the backend server.
       * *   If the backend server is in the **Adding** state, the backend server is being added to the server group.
       * *   If the backend server is in the **Available** state, the server is running.
       *
       * @param request AddServersToServerGroupRequest
       * @return AddServersToServerGroupResponse
       */
      Models::AddServersToServerGroupResponse addServersToServerGroup(const Models::AddServersToServerGroupRequest &request);

      /**
       * @summary Creates a listener for a Gateway Load Balancer (GWLB) instance.
       *
       * @description **CreateListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **GetListenerAttribute** operation to query the status of the task.
       * *   If the listener is in the **Provisioning** state, the listener is being created.
       * *   If the listener is in the **Running** state, the listener is running.
       *
       * @param request CreateListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateListenerResponse
       */
      Models::CreateListenerResponse createListenerWithOptions(const Models::CreateListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a listener for a Gateway Load Balancer (GWLB) instance.
       *
       * @description **CreateListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **GetListenerAttribute** operation to query the status of the task.
       * *   If the listener is in the **Provisioning** state, the listener is being created.
       * *   If the listener is in the **Running** state, the listener is running.
       *
       * @param request CreateListenerRequest
       * @return CreateListenerResponse
       */
      Models::CreateListenerResponse createListener(const Models::CreateListenerRequest &request);

      /**
       * @summary Creates a Gateway Load Balancer (GWLB) instance.
       *
       * @description **Ensure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/2806160.html) of GWLB before calling this operation.**
       * *   When you create a GWLB instance, the service-linked role AliyunServiceRoleForGwlb is automatically created.
       * *   **CreateLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/2853555.html) operation to query the status of a GWLB instance.
       *     *   If the GWLB instance is in the **Provisioning** state, the GWLB instance is being created.
       *     *   If the GWLB instance is in the **Active** state, the GWLB instance is created.
       *
       * @param request CreateLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerResponse
       */
      Models::CreateLoadBalancerResponse createLoadBalancerWithOptions(const Models::CreateLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Gateway Load Balancer (GWLB) instance.
       *
       * @description **Ensure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/2806160.html) of GWLB before calling this operation.**
       * *   When you create a GWLB instance, the service-linked role AliyunServiceRoleForGwlb is automatically created.
       * *   **CreateLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/2853555.html) operation to query the status of a GWLB instance.
       *     *   If the GWLB instance is in the **Provisioning** state, the GWLB instance is being created.
       *     *   If the GWLB instance is in the **Active** state, the GWLB instance is created.
       *
       * @param request CreateLoadBalancerRequest
       * @return CreateLoadBalancerResponse
       */
      Models::CreateLoadBalancerResponse createLoadBalancer(const Models::CreateLoadBalancerRequest &request);

      /**
       * @summary Creates a server group for a Gateway Load Balancer (GWLB) instance.
       *
       * @description **CreateServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the ListServerGroups operation to query the status of the task.
       * *   If the server group is in the **Creating** state, it indicates that the server group is being created.
       * *   If the server group is in the **Available** state, it indicates that the server group is created.
       *
       * @param request CreateServerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServerGroupResponse
       */
      Models::CreateServerGroupResponse createServerGroupWithOptions(const Models::CreateServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a server group for a Gateway Load Balancer (GWLB) instance.
       *
       * @description **CreateServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the ListServerGroups operation to query the status of the task.
       * *   If the server group is in the **Creating** state, it indicates that the server group is being created.
       * *   If the server group is in the **Available** state, it indicates that the server group is created.
       *
       * @param request CreateServerGroupRequest
       * @return CreateServerGroupResponse
       */
      Models::CreateServerGroupResponse createServerGroup(const Models::CreateServerGroupRequest &request);

      /**
       * @summary Deletes a listener from a Gateway Load Balancer (GWLB) instance.
       *
       * @description **DeleteListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **GetListenerAttribute** operation to query the status of the task.
       * *   If the listener is in the **Deleting** state, the listener is being deleted.
       * *   If the listener cannot be found, the listener is deleted.
       *
       * @param request DeleteListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteListenerResponse
       */
      Models::DeleteListenerResponse deleteListenerWithOptions(const Models::DeleteListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a listener from a Gateway Load Balancer (GWLB) instance.
       *
       * @description **DeleteListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **GetListenerAttribute** operation to query the status of the task.
       * *   If the listener is in the **Deleting** state, the listener is being deleted.
       * *   If the listener cannot be found, the listener is deleted.
       *
       * @param request DeleteListenerRequest
       * @return DeleteListenerResponse
       */
      Models::DeleteListenerResponse deleteListener(const Models::DeleteListenerRequest &request);

      /**
       * @summary Deletes a Gateway Load Balancer (GWLB) instance.
       *
       * @param request DeleteLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLoadBalancerResponse
       */
      Models::DeleteLoadBalancerResponse deleteLoadBalancerWithOptions(const Models::DeleteLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Gateway Load Balancer (GWLB) instance.
       *
       * @param request DeleteLoadBalancerRequest
       * @return DeleteLoadBalancerResponse
       */
      Models::DeleteLoadBalancerResponse deleteLoadBalancer(const Models::DeleteLoadBalancerRequest &request);

      /**
       * @summary Deletes a server group from a Gateway Load Balancer (GWLB) instance.
       *
       * @description You can delete server groups that are not associated with listeners.
       *
       * @param request DeleteServerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServerGroupResponse
       */
      Models::DeleteServerGroupResponse deleteServerGroupWithOptions(const Models::DeleteServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a server group from a Gateway Load Balancer (GWLB) instance.
       *
       * @description You can delete server groups that are not associated with listeners.
       *
       * @param request DeleteServerGroupRequest
       * @return DeleteServerGroupResponse
       */
      Models::DeleteServerGroupResponse deleteServerGroup(const Models::DeleteServerGroupRequest &request);

      /**
       * @summary Queries the most recent region list of Gateway Load Balancer (GWLB).
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the most recent region list of Gateway Load Balancer (GWLB).
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the most recent zone list of Gateway Load Balancer (GWLB).
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the most recent zone list of Gateway Load Balancer (GWLB).
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Queries the details of a Gateway Load Balancer (GWLB) listener.
       *
       * @param request GetListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetListenerAttributeResponse
       */
      Models::GetListenerAttributeResponse getListenerAttributeWithOptions(const Models::GetListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a Gateway Load Balancer (GWLB) listener.
       *
       * @param request GetListenerAttributeRequest
       * @return GetListenerAttributeResponse
       */
      Models::GetListenerAttributeResponse getListenerAttribute(const Models::GetListenerAttributeRequest &request);

      /**
       * @summary Queries the health check status of a Gateway Load Balancer (GWLB) listener.
       *
       * @param request GetListenerHealthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetListenerHealthStatusResponse
       */
      Models::GetListenerHealthStatusResponse getListenerHealthStatusWithOptions(const Models::GetListenerHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the health check status of a Gateway Load Balancer (GWLB) listener.
       *
       * @param request GetListenerHealthStatusRequest
       * @return GetListenerHealthStatusResponse
       */
      Models::GetListenerHealthStatusResponse getListenerHealthStatus(const Models::GetListenerHealthStatusRequest &request);

      /**
       * @summary Queries the details of a Gateway Load Balancer (GWLB) instance.
       *
       * @param request GetLoadBalancerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLoadBalancerAttributeResponse
       */
      Models::GetLoadBalancerAttributeResponse getLoadBalancerAttributeWithOptions(const Models::GetLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a Gateway Load Balancer (GWLB) instance.
       *
       * @param request GetLoadBalancerAttributeRequest
       * @return GetLoadBalancerAttributeResponse
       */
      Models::GetLoadBalancerAttributeResponse getLoadBalancerAttribute(const Models::GetLoadBalancerAttributeRequest &request);

      /**
       * @summary Queries Gateway Load Balancer (GWLB) listeners.
       *
       * @param request ListListenersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListListenersResponse
       */
      Models::ListListenersResponse listListenersWithOptions(const Models::ListListenersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Gateway Load Balancer (GWLB) listeners.
       *
       * @param request ListListenersRequest
       * @return ListListenersResponse
       */
      Models::ListListenersResponse listListeners(const Models::ListListenersRequest &request);

      /**
       * @summary Queries Gateway Load Balancer (GWLB) instances.
       *
       * @param request ListLoadBalancersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLoadBalancersResponse
       */
      Models::ListLoadBalancersResponse listLoadBalancersWithOptions(const Models::ListLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Gateway Load Balancer (GWLB) instances.
       *
       * @param request ListLoadBalancersRequest
       * @return ListLoadBalancersResponse
       */
      Models::ListLoadBalancersResponse listLoadBalancers(const Models::ListLoadBalancersRequest &request);

      /**
       * @summary Queries the server groups of a Gateway Load Balancer (GWLB) instance.
       *
       * @param request ListServerGroupServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServerGroupServersResponse
       */
      Models::ListServerGroupServersResponse listServerGroupServersWithOptions(const Models::ListServerGroupServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the server groups of a Gateway Load Balancer (GWLB) instance.
       *
       * @param request ListServerGroupServersRequest
       * @return ListServerGroupServersResponse
       */
      Models::ListServerGroupServersResponse listServerGroupServers(const Models::ListServerGroupServersRequest &request);

      /**
       * @summary Queries the server groups of a Gateway Load Balancer (GWLB) instance.
       *
       * @param request ListServerGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServerGroupsResponse
       */
      Models::ListServerGroupsResponse listServerGroupsWithOptions(const Models::ListServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the server groups of a Gateway Load Balancer (GWLB) instance.
       *
       * @param request ListServerGroupsRequest
       * @return ListServerGroupsResponse
       */
      Models::ListServerGroupsResponse listServerGroups(const Models::ListServerGroupsRequest &request);

      /**
       * @summary Queries the tags of resources.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Changes the resource group to which a specified cloud resource belongs.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which a specified cloud resource belongs.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary Removes backend servers from the server group of a Gateway Load Balancer (GWLB) instance.
       *
       * @description **RemoveServersFromServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
       * 1.  You can call the ListServerGroups operation to query the status of a server group.
       *     *   If the server group is in the **Configuring** state, the server group is being modified.
       *     *   If the server group is in the **Available** state, the server group is running.
       * 2.  You can call the ListServerGroupServers operation to query the status of a backend server.
       *     *   If the backend server is in the **Removing** state, the backend server is being removed from the server group.
       *     *   If the backend server cannot be found, the backend server is no longer in the server group.
       * > 
       * *   If connection draining id enabled (**ConnectionDrainEnabled** set to true) for the server group of the backend server, the backend server that you remove enters the **Removing** state before entering the **Draining** state. When the connection draining timeout period (**ConnectionDrainTimeout**) ends, the backend server is removed from the server group.
       * *   You can add the backend server to the server group again before the connection draining timeout period ends. In this case, the status of the backend server changes from **Draining** to **Adding**. After the backend server is added to the server group, the backend server enters the **Available** state.
       *
       * @param request RemoveServersFromServerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveServersFromServerGroupResponse
       */
      Models::RemoveServersFromServerGroupResponse removeServersFromServerGroupWithOptions(const Models::RemoveServersFromServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes backend servers from the server group of a Gateway Load Balancer (GWLB) instance.
       *
       * @description **RemoveServersFromServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
       * 1.  You can call the ListServerGroups operation to query the status of a server group.
       *     *   If the server group is in the **Configuring** state, the server group is being modified.
       *     *   If the server group is in the **Available** state, the server group is running.
       * 2.  You can call the ListServerGroupServers operation to query the status of a backend server.
       *     *   If the backend server is in the **Removing** state, the backend server is being removed from the server group.
       *     *   If the backend server cannot be found, the backend server is no longer in the server group.
       * > 
       * *   If connection draining id enabled (**ConnectionDrainEnabled** set to true) for the server group of the backend server, the backend server that you remove enters the **Removing** state before entering the **Draining** state. When the connection draining timeout period (**ConnectionDrainTimeout**) ends, the backend server is removed from the server group.
       * *   You can add the backend server to the server group again before the connection draining timeout period ends. In this case, the status of the backend server changes from **Draining** to **Adding**. After the backend server is added to the server group, the backend server enters the **Available** state.
       *
       * @param request RemoveServersFromServerGroupRequest
       * @return RemoveServersFromServerGroupResponse
       */
      Models::RemoveServersFromServerGroupResponse removeServersFromServerGroup(const Models::RemoveServersFromServerGroupRequest &request);

      /**
       * @summary Creates and adds tags to resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and adds tags to resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates the configurations of a Gateway Load Balancer (GWLB) listener.
       *
       * @description **UpdateListenerAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **GetListenerAttribute** operation to query the status of a listener.
       * *   If the listener is in the **Configuring** state, the listener is being modified.
       * *   If the listener is in the **Running** state, the listener is modified.
       *
       * @param request UpdateListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateListenerAttributeResponse
       */
      Models::UpdateListenerAttributeResponse updateListenerAttributeWithOptions(const Models::UpdateListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of a Gateway Load Balancer (GWLB) listener.
       *
       * @description **UpdateListenerAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **GetListenerAttribute** operation to query the status of a listener.
       * *   If the listener is in the **Configuring** state, the listener is being modified.
       * *   If the listener is in the **Running** state, the listener is modified.
       *
       * @param request UpdateListenerAttributeRequest
       * @return UpdateListenerAttributeResponse
       */
      Models::UpdateListenerAttributeResponse updateListenerAttribute(const Models::UpdateListenerAttributeRequest &request);

      /**
       * @summary Updates the attributes of a Gateway Load Balancer (GWLB) instance.
       *
       * @description *   UpdateLoadBalancerAttribute is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the GetLoadBalancerAttribute operation to query the status of the GWLB instance.
       *     *   If the GWLB instance is in the Configuring state, the GWLB instance is being modified.
       *     *   If the GWLB instance is in the Active state, the GWLB instance is modified.
       *
       * @param request UpdateLoadBalancerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLoadBalancerAttributeResponse
       */
      Models::UpdateLoadBalancerAttributeResponse updateLoadBalancerAttributeWithOptions(const Models::UpdateLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the attributes of a Gateway Load Balancer (GWLB) instance.
       *
       * @description *   UpdateLoadBalancerAttribute is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the GetLoadBalancerAttribute operation to query the status of the GWLB instance.
       *     *   If the GWLB instance is in the Configuring state, the GWLB instance is being modified.
       *     *   If the GWLB instance is in the Active state, the GWLB instance is modified.
       *
       * @param request UpdateLoadBalancerAttributeRequest
       * @return UpdateLoadBalancerAttributeResponse
       */
      Models::UpdateLoadBalancerAttributeResponse updateLoadBalancerAttribute(const Models::UpdateLoadBalancerAttributeRequest &request);

      /**
       * @summary Updates the zones of a Gateway Load Balancer (GWLB) instance.
       *
       * @description **Ensure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/2806160.html) of GWLB before calling this operation.**
       * **UpdateLoadBalancerZones** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/2853555.html) operation to query the status of the GWLB instance.
       * *   If the GWLB instance is in the **Configuring** state, the GWLB instance is being modified.
       * *   If the GWLB instance is in the **Active** state, the GWLB instance is modified.
       * >  Before you initiate a call, ensure that all zones, including the current zones and the zones that you want to add, are specified. The zones that you do not specify are deleted. You can call the GetLoadBalancerAttribute operation to query the current zones of your GWLB instance.
       *
       * @param request UpdateLoadBalancerZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLoadBalancerZonesResponse
       */
      Models::UpdateLoadBalancerZonesResponse updateLoadBalancerZonesWithOptions(const Models::UpdateLoadBalancerZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the zones of a Gateway Load Balancer (GWLB) instance.
       *
       * @description **Ensure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/2806160.html) of GWLB before calling this operation.**
       * **UpdateLoadBalancerZones** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/2853555.html) operation to query the status of the GWLB instance.
       * *   If the GWLB instance is in the **Configuring** state, the GWLB instance is being modified.
       * *   If the GWLB instance is in the **Active** state, the GWLB instance is modified.
       * >  Before you initiate a call, ensure that all zones, including the current zones and the zones that you want to add, are specified. The zones that you do not specify are deleted. You can call the GetLoadBalancerAttribute operation to query the current zones of your GWLB instance.
       *
       * @param request UpdateLoadBalancerZonesRequest
       * @return UpdateLoadBalancerZonesResponse
       */
      Models::UpdateLoadBalancerZonesResponse updateLoadBalancerZones(const Models::UpdateLoadBalancerZonesRequest &request);

      /**
       * @summary Updates the attributes of a server group.
       *
       * @description **UpdateServerGroupAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the ListServerGroups operation to query the status of the task.
       * *   If the server group is in the **Configuring** state, the configuration of the server group is being modified.
       * *   If the server group is in the **Available** state, the configuration of the server group is modified.
       *
       * @param request UpdateServerGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServerGroupAttributeResponse
       */
      Models::UpdateServerGroupAttributeResponse updateServerGroupAttributeWithOptions(const Models::UpdateServerGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the attributes of a server group.
       *
       * @description **UpdateServerGroupAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the ListServerGroups operation to query the status of the task.
       * *   If the server group is in the **Configuring** state, the configuration of the server group is being modified.
       * *   If the server group is in the **Available** state, the configuration of the server group is modified.
       *
       * @param request UpdateServerGroupAttributeRequest
       * @return UpdateServerGroupAttributeResponse
       */
      Models::UpdateServerGroupAttributeResponse updateServerGroupAttribute(const Models::UpdateServerGroupAttributeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Gwlb20240415
#endif
