// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CS20151215_HPP_
#define ALIBABACLOUD_CS20151215_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/CS20151215Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/CS20151215.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds existing Elastic Compute Service (ECS) instances to a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request AttachInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachInstancesResponse
       */
      Models::AttachInstancesResponse attachInstancesWithOptions(const string &ClusterId, const Models::AttachInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds existing Elastic Compute Service (ECS) instances to a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request AttachInstancesRequest
       * @return AttachInstancesResponse
       */
      Models::AttachInstancesResponse attachInstances(const string &ClusterId, const Models::AttachInstancesRequest &request);

      /**
       * @summary Adds existing nodes to a specific node pool. You can add existing ECS instances to a specific node pool in a Container Service for Kubernetes (ACK) cluster as worker nodes. You can also add removed worker nodes back to the node pool.
       *
       * @param request AttachInstancesToNodePoolRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachInstancesToNodePoolResponse
       */
      Models::AttachInstancesToNodePoolResponse attachInstancesToNodePoolWithOptions(const string &ClusterId, const string &NodepoolId, const Models::AttachInstancesToNodePoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds existing nodes to a specific node pool. You can add existing ECS instances to a specific node pool in a Container Service for Kubernetes (ACK) cluster as worker nodes. You can also add removed worker nodes back to the node pool.
       *
       * @param request AttachInstancesToNodePoolRequest
       * @return AttachInstancesToNodePoolResponse
       */
      Models::AttachInstancesToNodePoolResponse attachInstancesToNodePool(const string &ClusterId, const string &NodepoolId, const Models::AttachInstancesToNodePoolRequest &request);

      /**
       * @deprecated OpenAPI CancelClusterUpgrade is deprecated
       *
       * @summary You can call the CancelClusterUpgrade operation to cancel the update of a cluster.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelClusterUpgradeResponse
       */
      Models::CancelClusterUpgradeResponse cancelClusterUpgradeWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CancelClusterUpgrade is deprecated
       *
       * @summary You can call the CancelClusterUpgrade operation to cancel the update of a cluster.
       *
       * @return CancelClusterUpgradeResponse
       */
      Models::CancelClusterUpgradeResponse cancelClusterUpgrade(const string &ClusterId);

      /**
       * @deprecated OpenAPI CancelComponentUpgrade is deprecated
       *
       * @summary You can call the CancelComponentUpgrade operation to cancel the update of a component.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelComponentUpgradeResponse
       */
      Models::CancelComponentUpgradeResponse cancelComponentUpgradeWithOptions(const string &clusterId, const string &componentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CancelComponentUpgrade is deprecated
       *
       * @summary You can call the CancelComponentUpgrade operation to cancel the update of a component.
       *
       * @return CancelComponentUpgradeResponse
       */
      Models::CancelComponentUpgradeResponse cancelComponentUpgrade(const string &clusterId, const string &componentId);

      /**
       * @summary You can call the CancelOperationPlan operation to cancel a pending auto O\\\\\\\\\\\\&M plan.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelOperationPlanResponse
       */
      Models::CancelOperationPlanResponse cancelOperationPlanWithOptions(const string &planId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the CancelOperationPlan operation to cancel a pending auto O\\\\\\\\\\\\&M plan.
       *
       * @return CancelOperationPlanResponse
       */
      Models::CancelOperationPlanResponse cancelOperationPlan(const string &planId);

      /**
       * @summary Cancels the execution of a cluster task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTaskWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the execution of a cluster task.
       *
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTask(const string &taskId);

      /**
       * @summary Queries the current log configuration of control plane components, including the log retention period and the log collection component. Container Service for Kubernetes (ACK) managed clusters can collect the logs of control plane components and deliver the logs to projects in Simple Log Service. These control plane components include Kube API Server, Kube Scheduler, Kube Controller Manager, and Cloud Controller Manager.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckControlPlaneLogEnableResponse
       */
      Models::CheckControlPlaneLogEnableResponse checkControlPlaneLogEnableWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current log configuration of control plane components, including the log retention period and the log collection component. Container Service for Kubernetes (ACK) managed clusters can collect the logs of control plane components and deliver the logs to projects in Simple Log Service. These control plane components include Kube API Server, Kube Scheduler, Kube Controller Manager, and Cloud Controller Manager.
       *
       * @return CheckControlPlaneLogEnableResponse
       */
      Models::CheckControlPlaneLogEnableResponse checkControlPlaneLogEnable(const string &ClusterId);

      /**
       * @summary Checks whether the specified service roles are granted to Container Service for Kubernetes (ACK) within the current Alibaba Cloud account. ACK can access other cloud services, such as Elastic Compute Service (ECS), Object Storage Service (OSS), File Storage NAS (NAS), and Server Load Balancer (SLB), only after ACK is assigned the required service roles.
       *
       * @param request CheckServiceRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceRoleResponse
       */
      Models::CheckServiceRoleResponse checkServiceRoleWithOptions(const Models::CheckServiceRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the specified service roles are granted to Container Service for Kubernetes (ACK) within the current Alibaba Cloud account. ACK can access other cloud services, such as Elastic Compute Service (ECS), Object Storage Service (OSS), File Storage NAS (NAS), and Server Load Balancer (SLB), only after ACK is assigned the required service roles.
       *
       * @param request CheckServiceRoleRequest
       * @return CheckServiceRoleResponse
       */
      Models::CheckServiceRoleResponse checkServiceRole(const Models::CheckServiceRoleRequest &request);

      /**
       * @summary Deletes kubeconfig files that may pose potential risks from a user and revokes Role-Based Access Control (RBAC) permissions on a cluster.
       *
       * @description > 
       * *   To call this operation, make sure that you have the AliyunCSFullAccess permission.
       * *   You cannot revoke the permissions of an Alibaba Cloud account.
       * *   You cannot revoke the permissions of the account that you use to call this operation.
       *
       * @param request CleanClusterUserPermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CleanClusterUserPermissionsResponse
       */
      Models::CleanClusterUserPermissionsResponse cleanClusterUserPermissionsWithOptions(const string &ClusterId, const string &Uid, const Models::CleanClusterUserPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes kubeconfig files that may pose potential risks from a user and revokes Role-Based Access Control (RBAC) permissions on a cluster.
       *
       * @description > 
       * *   To call this operation, make sure that you have the AliyunCSFullAccess permission.
       * *   You cannot revoke the permissions of an Alibaba Cloud account.
       * *   You cannot revoke the permissions of the account that you use to call this operation.
       *
       * @param request CleanClusterUserPermissionsRequest
       * @return CleanClusterUserPermissionsResponse
       */
      Models::CleanClusterUserPermissionsResponse cleanClusterUserPermissions(const string &ClusterId, const string &Uid, const Models::CleanClusterUserPermissionsRequest &request);

      /**
       * @summary You can call the CleanUserPermissions operation to delete the kubeconfig files of the specified users and revoke the relevant Role-Based Access Control (RBAC) permissions. This API operation is suitable for scenarios where employees have resigned or the accounts of employees are locked.
       *
       * @description > - To call this operation, make sure that you have the AliyunCSFullAccess permission.
       * > - You cannot revoke the permissions of an Alibaba Cloud account.
       * > - You cannot revoke the permissions of the account that you use to call this operation.
       *
       * @param tmpReq CleanUserPermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CleanUserPermissionsResponse
       */
      Models::CleanUserPermissionsResponse cleanUserPermissionsWithOptions(const string &Uid, const Models::CleanUserPermissionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the CleanUserPermissions operation to delete the kubeconfig files of the specified users and revoke the relevant Role-Based Access Control (RBAC) permissions. This API operation is suitable for scenarios where employees have resigned or the accounts of employees are locked.
       *
       * @description > - To call this operation, make sure that you have the AliyunCSFullAccess permission.
       * > - You cannot revoke the permissions of an Alibaba Cloud account.
       * > - You cannot revoke the permissions of the account that you use to call this operation.
       *
       * @param request CleanUserPermissionsRequest
       * @return CleanUserPermissionsResponse
       */
      Models::CleanUserPermissionsResponse cleanUserPermissions(const string &Uid, const Models::CleanUserPermissionsRequest &request);

      /**
       * @summary Creates a scaling configuration to allow the system to scale resources based on the given scaling rules. When you create a scaling configuration, you can specify the scaling metrics, thresholds, scaling order, and scaling interval.
       *
       * @param request CreateAutoscalingConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAutoscalingConfigResponse
       */
      Models::CreateAutoscalingConfigResponse createAutoscalingConfigWithOptions(const string &ClusterId, const Models::CreateAutoscalingConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scaling configuration to allow the system to scale resources based on the given scaling rules. When you create a scaling configuration, you can specify the scaling metrics, thresholds, scaling order, and scaling interval.
       *
       * @param request CreateAutoscalingConfigRequest
       * @return CreateAutoscalingConfigResponse
       */
      Models::CreateAutoscalingConfigResponse createAutoscalingConfig(const string &ClusterId, const Models::CreateAutoscalingConfigRequest &request);

      /**
       * @summary Creates a Container Service for Kubernetes (ACK) cluster. For example, you can create an ACK managed cluster, ACK Serverless cluster, ACK Edge cluster, or registered cluster. When you create an ACK cluster, you need to configure the cluster information, components, and cloud resources used by ACK.
       *
       * @description ### [](#-openapi-)Generate API request parameters through the ACK console
       * When calling the CreateCluster operation to create a cluster, if the API call fails due to invalid parameter settings, you can generate valid request parameters through the ACK console. Follow these steps:
       * 1.  Log on to the [ACK console](https://csnew.console.aliyun.com). In the left-side navigation pane, click **Clusters**.
       * 2.  On the **Clusters** page, click **Cluster Templates**.
       * 3.  In the Select Cluster Template dialog box, select the type of cluster you want to create and click Create. Then, configure the cluster parameters.
       * 4.  In the **Confirm** step, click **Generate API Request Parameters**.
       *     The API request parameters are displayed in the API Request Parameters dialog box.
       *
       * @param request CreateClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createClusterWithOptions(const Models::CreateClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Container Service for Kubernetes (ACK) cluster. For example, you can create an ACK managed cluster, ACK Serverless cluster, ACK Edge cluster, or registered cluster. When you create an ACK cluster, you need to configure the cluster information, components, and cloud resources used by ACK.
       *
       * @description ### [](#-openapi-)Generate API request parameters through the ACK console
       * When calling the CreateCluster operation to create a cluster, if the API call fails due to invalid parameter settings, you can generate valid request parameters through the ACK console. Follow these steps:
       * 1.  Log on to the [ACK console](https://csnew.console.aliyun.com). In the left-side navigation pane, click **Clusters**.
       * 2.  On the **Clusters** page, click **Cluster Templates**.
       * 3.  In the Select Cluster Template dialog box, select the type of cluster you want to create and click Create. Then, configure the cluster parameters.
       * 4.  In the **Confirm** step, click **Generate API Request Parameters**.
       *     The API request parameters are displayed in the API Request Parameters dialog box.
       *
       * @param request CreateClusterRequest
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createCluster(const Models::CreateClusterRequest &request);

      /**
       * @summary Starts a cluster diagnostic.
       *
       * @param request CreateClusterDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterDiagnosisResponse
       */
      Models::CreateClusterDiagnosisResponse createClusterDiagnosisWithOptions(const string &clusterId, const Models::CreateClusterDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a cluster diagnostic.
       *
       * @param request CreateClusterDiagnosisRequest
       * @return CreateClusterDiagnosisResponse
       */
      Models::CreateClusterDiagnosisResponse createClusterDiagnosis(const string &clusterId, const Models::CreateClusterDiagnosisRequest &request);

      /**
       * @summary Configures cluster inspection.
       *
       * @param request CreateClusterInspectConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterInspectConfigResponse
       */
      Models::CreateClusterInspectConfigResponse createClusterInspectConfigWithOptions(const string &clusterId, const Models::CreateClusterInspectConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures cluster inspection.
       *
       * @param request CreateClusterInspectConfigRequest
       * @return CreateClusterInspectConfigResponse
       */
      Models::CreateClusterInspectConfigResponse createClusterInspectConfig(const string &clusterId, const Models::CreateClusterInspectConfigRequest &request);

      /**
       * @summary Creates a node pool for a Container Service for Kubernetes (ACK) cluster. You can use node pools to facilitate node management. For example, you can schedule, configure, or maintain nodes by node pool, and enable auto scaling for a node pool. We recommend that you use a managed node pool, which can help automate specific O\\\\\\&M tasks for nodes, such as Common Vulnerabilities and Exposures (CVE) patching and node repair. This reduces your O\\\\\\&M workload.
       *
       * @param request CreateClusterNodePoolRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterNodePoolResponse
       */
      Models::CreateClusterNodePoolResponse createClusterNodePoolWithOptions(const string &ClusterId, const Models::CreateClusterNodePoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a node pool for a Container Service for Kubernetes (ACK) cluster. You can use node pools to facilitate node management. For example, you can schedule, configure, or maintain nodes by node pool, and enable auto scaling for a node pool. We recommend that you use a managed node pool, which can help automate specific O\\\\\\&M tasks for nodes, such as Common Vulnerabilities and Exposures (CVE) patching and node repair. This reduces your O\\\\\\&M workload.
       *
       * @param request CreateClusterNodePoolRequest
       * @return CreateClusterNodePoolResponse
       */
      Models::CreateClusterNodePoolResponse createClusterNodePool(const string &ClusterId, const Models::CreateClusterNodePoolRequest &request);

      /**
       * @deprecated OpenAPI CreateKubernetesTrigger is deprecated
       *
       * @summary You can call the CreateKubernetesTrigger operation to create a trigger for an application.
       *
       * @param request CreateKubernetesTriggerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKubernetesTriggerResponse
       */
      Models::CreateKubernetesTriggerResponse createKubernetesTriggerWithOptions(const Models::CreateKubernetesTriggerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateKubernetesTrigger is deprecated
       *
       * @summary You can call the CreateKubernetesTrigger operation to create a trigger for an application.
       *
       * @param request CreateKubernetesTriggerRequest
       * @return CreateKubernetesTriggerResponse
       */
      Models::CreateKubernetesTriggerResponse createKubernetesTrigger(const Models::CreateKubernetesTriggerRequest &request);

      /**
       * @summary Creates an orchestration template. An orchestration template defines and describes a group of Kubernetes resources. It declaratively describes the configuration of an application or how an application runs. You can use orchestration templates to manage resources in Kubernetes clusters and automate resource deployment, such as pods, Services, Deployments, ConfigMaps, and persistent volumes (PVs).
       *
       * @param request CreateTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplateWithOptions(const Models::CreateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an orchestration template. An orchestration template defines and describes a group of Kubernetes resources. It declaratively describes the configuration of an application or how an application runs. You can use orchestration templates to manage resources in Kubernetes clusters and automate resource deployment, such as pods, Services, Deployments, ConfigMaps, and persistent volumes (PVs).
       *
       * @param request CreateTemplateRequest
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplate(const Models::CreateTemplateRequest &request);

      /**
       * @summary Creates a trigger for an application to redeploy the application pods when specific conditions are met.
       *
       * @param request CreateTriggerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTriggerResponse
       */
      Models::CreateTriggerResponse createTriggerWithOptions(const string &clusterId, const Models::CreateTriggerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a trigger for an application to redeploy the application pods when specific conditions are met.
       *
       * @param request CreateTriggerRequest
       * @return CreateTriggerResponse
       */
      Models::CreateTriggerResponse createTrigger(const string &clusterId, const Models::CreateTriggerRequest &request);

      /**
       * @summary Deletes one or more ACK alert contacts.
       *
       * @param tmpReq DeleteAlertContactRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertContactResponse
       */
      Models::DeleteAlertContactResponse deleteAlertContactWithOptions(const Models::DeleteAlertContactRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more ACK alert contacts.
       *
       * @param request DeleteAlertContactRequest
       * @return DeleteAlertContactResponse
       */
      Models::DeleteAlertContactResponse deleteAlertContact(const Models::DeleteAlertContactRequest &request);

      /**
       * @summary Deletes an ACK alert contact group.
       *
       * @param tmpReq DeleteAlertContactGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertContactGroupResponse
       */
      Models::DeleteAlertContactGroupResponse deleteAlertContactGroupWithOptions(const Models::DeleteAlertContactGroupRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an ACK alert contact group.
       *
       * @param request DeleteAlertContactGroupRequest
       * @return DeleteAlertContactGroupResponse
       */
      Models::DeleteAlertContactGroupResponse deleteAlertContactGroup(const Models::DeleteAlertContactGroupRequest &request);

      /**
       * @summary You can call the DeleteCluster operation to delete a cluster and specify whether to delete or retain the relevant cluster resources. Before you delete a cluster, you must manually delete workloads in the cluster, such as Deployments, StatefulSets, Jobs, and CronJobs. Otherwise, you may fail to delete the cluster.
       *
       * @description Warning:
       * *   Subscription ECS instances and Lingjun nodes in a cluster cannot be automatically released. To avoid unnecessary costs, we recommend that you manually release the resources. For more information, see \\<a href="{0}" target="_blank">Rules for deleting clusters and releasing nodes\\</a>.
       * *   If the SLB instance of the API server uses the subscription billing method, it cannot be automatically released. To avoid unnecessary costs, we recommend that you manually release it.
       * *   By default, virtual private clouds (VPCs), vSwitches, security groups, and RAM roles are retained if they are used by other resources. To avoid unnecessary costs, we recommend that you manually release the resources.
       * *   Elastic container instances created on virtual nodes are automatically released.
       * *   Some resources created together with a cluster are not automatically released when the cluster is deleted. After the cluster is deleted, you are still charged for the resources. Release or retain the resources based on your actual needs. The resources include Simple Log Service projects automatically created by the cluster and dynamically provisioned disks.
       *
       * @param tmpReq DeleteClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteClusterWithOptions(const string &ClusterId, const Models::DeleteClusterRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DeleteCluster operation to delete a cluster and specify whether to delete or retain the relevant cluster resources. Before you delete a cluster, you must manually delete workloads in the cluster, such as Deployments, StatefulSets, Jobs, and CronJobs. Otherwise, you may fail to delete the cluster.
       *
       * @description Warning:
       * *   Subscription ECS instances and Lingjun nodes in a cluster cannot be automatically released. To avoid unnecessary costs, we recommend that you manually release the resources. For more information, see \\<a href="{0}" target="_blank">Rules for deleting clusters and releasing nodes\\</a>.
       * *   If the SLB instance of the API server uses the subscription billing method, it cannot be automatically released. To avoid unnecessary costs, we recommend that you manually release it.
       * *   By default, virtual private clouds (VPCs), vSwitches, security groups, and RAM roles are retained if they are used by other resources. To avoid unnecessary costs, we recommend that you manually release the resources.
       * *   Elastic container instances created on virtual nodes are automatically released.
       * *   Some resources created together with a cluster are not automatically released when the cluster is deleted. After the cluster is deleted, you are still charged for the resources. Release or retain the resources based on your actual needs. The resources include Simple Log Service projects automatically created by the cluster and dynamically provisioned disks.
       *
       * @param request DeleteClusterRequest
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteCluster(const string &ClusterId, const Models::DeleteClusterRequest &request);

      /**
       * @summary Deletes cluster inspection configurations.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterInspectConfigResponse
       */
      Models::DeleteClusterInspectConfigResponse deleteClusterInspectConfigWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes cluster inspection configurations.
       *
       * @return DeleteClusterInspectConfigResponse
       */
      Models::DeleteClusterInspectConfigResponse deleteClusterInspectConfig(const string &clusterId);

      /**
       * @summary null
       *
       * @param request DeleteClusterNodepoolRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterNodepoolResponse
       */
      Models::DeleteClusterNodepoolResponse deleteClusterNodepoolWithOptions(const string &ClusterId, const string &NodepoolId, const Models::DeleteClusterNodepoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary null
       *
       * @param request DeleteClusterNodepoolRequest
       * @return DeleteClusterNodepoolResponse
       */
      Models::DeleteClusterNodepoolResponse deleteClusterNodepool(const string &ClusterId, const string &NodepoolId, const Models::DeleteClusterNodepoolRequest &request);

      /**
       * @summary Removes nodes from a Container Service for Kubernetes (ACK) cluster when they are no longer required through the DeleteClusterNodes interface. When removing nodes, you can specify whether to release the Elastic Compute Service (ECS) instances and drain the nodes.
       *
       * @description *   Use this API or the [ACK console](https://cs.console.aliyun.com) for node removal. Do not remove a node by running the `kubectl delete node` command.
       * *   Never directly release or remove ECS instances through the ECS or Auto Scaling console/APIs. Renew subscription ECS instances before they expire. Violations may cause node termination and removal from the ACK console.
       * *   If a node pool has the Expected Nodes parameter configured, the node pool automatically scales other ECS instances to maintain the expected number of nodes.
       * *   When you remove a node, the pods on the node are migrated to other nodes. To prevent service interruptions, remove nodes during off-peak hours. Unexpected risks may arise during node removal. Back up the data in advance.
       * *   ACK drains the node during node removal. Make sure that other nodes in the cluster have sufficient resources to host the evicted pods.
       * *   To ensure the pods on the node you want to remove can be successfully scheduled to other nodes, check whether the node affinity rules and scheduling policies of the pods meet the requirements.
       *
       * @param request DeleteClusterNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterNodesResponse
       */
      Models::DeleteClusterNodesResponse deleteClusterNodesWithOptions(const string &ClusterId, const Models::DeleteClusterNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes nodes from a Container Service for Kubernetes (ACK) cluster when they are no longer required through the DeleteClusterNodes interface. When removing nodes, you can specify whether to release the Elastic Compute Service (ECS) instances and drain the nodes.
       *
       * @description *   Use this API or the [ACK console](https://cs.console.aliyun.com) for node removal. Do not remove a node by running the `kubectl delete node` command.
       * *   Never directly release or remove ECS instances through the ECS or Auto Scaling console/APIs. Renew subscription ECS instances before they expire. Violations may cause node termination and removal from the ACK console.
       * *   If a node pool has the Expected Nodes parameter configured, the node pool automatically scales other ECS instances to maintain the expected number of nodes.
       * *   When you remove a node, the pods on the node are migrated to other nodes. To prevent service interruptions, remove nodes during off-peak hours. Unexpected risks may arise during node removal. Back up the data in advance.
       * *   ACK drains the node during node removal. Make sure that other nodes in the cluster have sufficient resources to host the evicted pods.
       * *   To ensure the pods on the node you want to remove can be successfully scheduled to other nodes, check whether the node affinity rules and scheduling policies of the pods meet the requirements.
       *
       * @param request DeleteClusterNodesRequest
       * @return DeleteClusterNodesResponse
       */
      Models::DeleteClusterNodesResponse deleteClusterNodes(const string &ClusterId, const Models::DeleteClusterNodesRequest &request);

      /**
       * @deprecated OpenAPI DeleteKubernetesTrigger is deprecated
       *
       * @summary You can call the DeleteKubernetesTrigger operation to delete an application trigger by trigger ID
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKubernetesTriggerResponse
       */
      Models::DeleteKubernetesTriggerResponse deleteKubernetesTriggerWithOptions(const string &Id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteKubernetesTrigger is deprecated
       *
       * @summary You can call the DeleteKubernetesTrigger operation to delete an application trigger by trigger ID
       *
       * @return DeleteKubernetesTriggerResponse
       */
      Models::DeleteKubernetesTriggerResponse deleteKubernetesTrigger(const string &Id);

      /**
       * @summary Deletes policy instances in a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DeletePolicyInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyInstanceResponse
       */
      Models::DeletePolicyInstanceResponse deletePolicyInstanceWithOptions(const string &clusterId, const string &policyName, const Models::DeletePolicyInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes policy instances in a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DeletePolicyInstanceRequest
       * @return DeletePolicyInstanceResponse
       */
      Models::DeletePolicyInstanceResponse deletePolicyInstance(const string &clusterId, const string &policyName, const Models::DeletePolicyInstanceRequest &request);

      /**
       * @summary Deletes the orchestration templates that you no longer need.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplateWithOptions(const string &TemplateId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the orchestration templates that you no longer need.
       *
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplate(const string &TemplateId);

      /**
       * @summary Deletes an application trigger.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTriggerResponse
       */
      Models::DeleteTriggerResponse deleteTriggerWithOptions(const string &clusterId, const string &Id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application trigger.
       *
       * @return DeleteTriggerResponse
       */
      Models::DeleteTriggerResponse deleteTrigger(const string &clusterId, const string &Id);

      /**
       * @summary Deploys a policy in the specified namespaces of a specific Container Service for Kubernetes (ACK) cluster. You can create and deploy a security policy by specifying the policy type, action of the policy such as alerting or denying, and namespaces to which the policy applies.
       *
       * @param request DeployPolicyInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployPolicyInstanceResponse
       */
      Models::DeployPolicyInstanceResponse deployPolicyInstanceWithOptions(const string &clusterId, const string &policyName, const Models::DeployPolicyInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys a policy in the specified namespaces of a specific Container Service for Kubernetes (ACK) cluster. You can create and deploy a security policy by specifying the policy type, action of the policy such as alerting or denying, and namespaces to which the policy applies.
       *
       * @param request DeployPolicyInstanceRequest
       * @return DeployPolicyInstanceResponse
       */
      Models::DeployPolicyInstanceResponse deployPolicyInstance(const string &clusterId, const string &policyName, const Models::DeployPolicyInstanceRequest &request);

      /**
       * @summary Queries the information about a component based on specific conditions such as the region, cluster type, cluster subtype defined by cluster profile, cluster version, and component name. The information includes whether the component is managed, the component type, supported custom parameter schema, compatible operating system architecture, and earliest supported cluster version.
       *
       * @param request DescribeAddonRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAddonResponse
       */
      Models::DescribeAddonResponse describeAddonWithOptions(const string &addonName, const Models::DescribeAddonRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a component based on specific conditions such as the region, cluster type, cluster subtype defined by cluster profile, cluster version, and component name. The information includes whether the component is managed, the component type, supported custom parameter schema, compatible operating system architecture, and earliest supported cluster version.
       *
       * @param request DescribeAddonRequest
       * @return DescribeAddonResponse
       */
      Models::DescribeAddonResponse describeAddon(const string &addonName, const Models::DescribeAddonRequest &request);

      /**
       * @deprecated OpenAPI DescribeAddons is deprecated
       *
       * @summary You can call the DescribeAddons operation to query the details about all components that are supported by Container Service for Kubernetes (ACK).
       *
       * @param request DescribeAddonsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAddonsResponse
       */
      Models::DescribeAddonsResponse describeAddonsWithOptions(const Models::DescribeAddonsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeAddons is deprecated
       *
       * @summary You can call the DescribeAddons operation to query the details about all components that are supported by Container Service for Kubernetes (ACK).
       *
       * @param request DescribeAddonsRequest
       * @return DescribeAddonsResponse
       */
      Models::DescribeAddonsResponse describeAddons(const Models::DescribeAddonsRequest &request);

      /**
       * @deprecated OpenAPI DescribeClusterAddonInstance is deprecated
       *
       * @summary You can call the DescribeClusterAddonInstance operation to query the information about a cluster component, including the version, status, and configuration of the component.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterAddonInstanceResponse
       */
      Models::DescribeClusterAddonInstanceResponse describeClusterAddonInstanceWithOptions(const string &ClusterID, const string &AddonName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeClusterAddonInstance is deprecated
       *
       * @summary You can call the DescribeClusterAddonInstance operation to query the information about a cluster component, including the version, status, and configuration of the component.
       *
       * @return DescribeClusterAddonInstanceResponse
       */
      Models::DescribeClusterAddonInstanceResponse describeClusterAddonInstance(const string &ClusterID, const string &AddonName);

      /**
       * @deprecated OpenAPI DescribeClusterAddonMetadata is deprecated
       *
       * @summary You can call the DescribeClusterAddonMetadata operation to query the metadata of a component version. The metadata includes the component version and available parameters.
       *
       * @param request DescribeClusterAddonMetadataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterAddonMetadataResponse
       */
      Models::DescribeClusterAddonMetadataResponse describeClusterAddonMetadataWithOptions(const string &clusterId, const string &componentId, const Models::DescribeClusterAddonMetadataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeClusterAddonMetadata is deprecated
       *
       * @summary You can call the DescribeClusterAddonMetadata operation to query the metadata of a component version. The metadata includes the component version and available parameters.
       *
       * @param request DescribeClusterAddonMetadataRequest
       * @return DescribeClusterAddonMetadataResponse
       */
      Models::DescribeClusterAddonMetadataResponse describeClusterAddonMetadata(const string &clusterId, const string &componentId, const Models::DescribeClusterAddonMetadataRequest &request);

      /**
       * @deprecated OpenAPI DescribeClusterAddonUpgradeStatus is deprecated
       *
       * @summary You can call the DescribeClusterAddonUpgradeStatus operation to query the update progress of a cluster component.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterAddonUpgradeStatusResponse
       */
      Models::DescribeClusterAddonUpgradeStatusResponse describeClusterAddonUpgradeStatusWithOptions(const string &ClusterId, const string &ComponentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeClusterAddonUpgradeStatus is deprecated
       *
       * @summary You can call the DescribeClusterAddonUpgradeStatus operation to query the update progress of a cluster component.
       *
       * @return DescribeClusterAddonUpgradeStatusResponse
       */
      Models::DescribeClusterAddonUpgradeStatusResponse describeClusterAddonUpgradeStatus(const string &ClusterId, const string &ComponentId);

      /**
       * @deprecated OpenAPI DescribeClusterAddonsUpgradeStatus is deprecated
       *
       * @summary You can call the DescribeClusterAddonsUpgradeStatus operation to query the update progress of a component by component name.
       *
       * @param tmpReq DescribeClusterAddonsUpgradeStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterAddonsUpgradeStatusResponse
       */
      Models::DescribeClusterAddonsUpgradeStatusResponse describeClusterAddonsUpgradeStatusWithOptions(const string &ClusterId, const Models::DescribeClusterAddonsUpgradeStatusRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeClusterAddonsUpgradeStatus is deprecated
       *
       * @summary You can call the DescribeClusterAddonsUpgradeStatus operation to query the update progress of a component by component name.
       *
       * @param request DescribeClusterAddonsUpgradeStatusRequest
       * @return DescribeClusterAddonsUpgradeStatusResponse
       */
      Models::DescribeClusterAddonsUpgradeStatusResponse describeClusterAddonsUpgradeStatus(const string &ClusterId, const Models::DescribeClusterAddonsUpgradeStatusRequest &request);

      /**
       * @deprecated OpenAPI DescribeClusterAddonsVersion is deprecated
       *
       * @summary You can call the DescribeClusterAddonsVersion operation to query the details about all components in a cluster by cluster ID.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterAddonsVersionResponse
       */
      Models::DescribeClusterAddonsVersionResponse describeClusterAddonsVersionWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeClusterAddonsVersion is deprecated
       *
       * @summary You can call the DescribeClusterAddonsVersion operation to query the details about all components in a cluster by cluster ID.
       *
       * @return DescribeClusterAddonsVersionResponse
       */
      Models::DescribeClusterAddonsVersionResponse describeClusterAddonsVersion(const string &ClusterId);

      /**
       * @summary Queries the scripts used to add existing nodes to a Container Service for Kubernetes (ACK) cluster. ACK allows you to manually add existing Elastic Compute Service (ECS) instances to an ACK cluster as worker nodes or re-add worker nodes that you remove from the cluster to a node pool.
       *
       * @param request DescribeClusterAttachScriptsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterAttachScriptsResponse
       */
      Models::DescribeClusterAttachScriptsResponse describeClusterAttachScriptsWithOptions(const string &ClusterId, const Models::DescribeClusterAttachScriptsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the scripts used to add existing nodes to a Container Service for Kubernetes (ACK) cluster. ACK allows you to manually add existing Elastic Compute Service (ECS) instances to an ACK cluster as worker nodes or re-add worker nodes that you remove from the cluster to a node pool.
       *
       * @param request DescribeClusterAttachScriptsRequest
       * @return DescribeClusterAttachScriptsResponse
       */
      Models::DescribeClusterAttachScriptsResponse describeClusterAttachScripts(const string &ClusterId, const Models::DescribeClusterAttachScriptsRequest &request);

      /**
       * @summary You can call the DescribeClusterDetail operation to query the details of a Container Service for Kubernetes (ACK) cluster by cluster ID.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterDetailResponse
       */
      Models::DescribeClusterDetailResponse describeClusterDetailWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeClusterDetail operation to query the details of a Container Service for Kubernetes (ACK) cluster by cluster ID.
       *
       * @return DescribeClusterDetailResponse
       */
      Models::DescribeClusterDetailResponse describeClusterDetail(const string &ClusterId);

      /**
       * @summary Queries events and event details in a Container Service for Kubernetes (ACK) cluster, including the severity level, status, and start time of each event. Events are generated when clusters created, modified, and updated, node pools are created and scaled out, and components are installed.
       *
       * @param request DescribeClusterEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterEventsResponse
       */
      Models::DescribeClusterEventsResponse describeClusterEventsWithOptions(const string &ClusterId, const Models::DescribeClusterEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries events and event details in a Container Service for Kubernetes (ACK) cluster, including the severity level, status, and start time of each event. Events are generated when clusters created, modified, and updated, node pools are created and scaled out, and components are installed.
       *
       * @param request DescribeClusterEventsRequest
       * @return DescribeClusterEventsResponse
       */
      Models::DescribeClusterEventsResponse describeClusterEvents(const string &ClusterId, const Models::DescribeClusterEventsRequest &request);

      /**
       * @summary Queries the cluster log to help analyze cluster issues and locate the cause.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterLogsResponse
       */
      Models::DescribeClusterLogsResponse describeClusterLogsWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cluster log to help analyze cluster issues and locate the cause.
       *
       * @return DescribeClusterLogsResponse
       */
      Models::DescribeClusterLogsResponse describeClusterLogs(const string &ClusterId);

      /**
       * @summary You can call the DescribeClusterNodePoolDetail.html operation to query the details about a node pool in a cluster by node pool ID.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterNodePoolDetailResponse
       */
      Models::DescribeClusterNodePoolDetailResponse describeClusterNodePoolDetailWithOptions(const string &ClusterId, const string &NodepoolId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeClusterNodePoolDetail.html operation to query the details about a node pool in a cluster by node pool ID.
       *
       * @return DescribeClusterNodePoolDetailResponse
       */
      Models::DescribeClusterNodePoolDetailResponse describeClusterNodePoolDetail(const string &ClusterId, const string &NodepoolId);

      /**
       * @summary Queries the information about all node pools in a cluster.
       *
       * @param request DescribeClusterNodePoolsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterNodePoolsResponse
       */
      Models::DescribeClusterNodePoolsResponse describeClusterNodePoolsWithOptions(const string &ClusterId, const Models::DescribeClusterNodePoolsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all node pools in a cluster.
       *
       * @param request DescribeClusterNodePoolsRequest
       * @return DescribeClusterNodePoolsResponse
       */
      Models::DescribeClusterNodePoolsResponse describeClusterNodePools(const string &ClusterId, const Models::DescribeClusterNodePoolsRequest &request);

      /**
       * @summary null
       *
       * @param request DescribeClusterNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterNodesResponse
       */
      Models::DescribeClusterNodesResponse describeClusterNodesWithOptions(const string &ClusterId, const Models::DescribeClusterNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary null
       *
       * @param request DescribeClusterNodesRequest
       * @return DescribeClusterNodesResponse
       */
      Models::DescribeClusterNodesResponse describeClusterNodes(const string &ClusterId, const Models::DescribeClusterNodesRequest &request);

      /**
       * @summary You can call the DescribeClusterResources operation to query all resources in a cluster by cluster ID.
       *
       * @param request DescribeClusterResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterResourcesResponse
       */
      Models::DescribeClusterResourcesResponse describeClusterResourcesWithOptions(const string &ClusterId, const Models::DescribeClusterResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeClusterResources operation to query all resources in a cluster by cluster ID.
       *
       * @param request DescribeClusterResourcesRequest
       * @return DescribeClusterResourcesResponse
       */
      Models::DescribeClusterResourcesResponse describeClusterResources(const string &ClusterId, const Models::DescribeClusterResourcesRequest &request);

      /**
       * @summary Queries tasks in a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DescribeClusterTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterTasksResponse
       */
      Models::DescribeClusterTasksResponse describeClusterTasksWithOptions(const string &clusterId, const Models::DescribeClusterTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tasks in a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DescribeClusterTasksRequest
       * @return DescribeClusterTasksResponse
       */
      Models::DescribeClusterTasksResponse describeClusterTasks(const string &clusterId, const Models::DescribeClusterTasksRequest &request);

      /**
       * @summary Kubeconfig files store identity and authentication information that is used by clients to access Container Service for Kubernetes (ACK) clusters. To use a kubectl client to manage an ACK cluster, you need to use the corresponding kubeconfig file to connect to the ACK cluster. We recommend that you keep kubeconfig files confidential and revoke kubeconfig files that are not in use. This helps prevent data leaks caused by the disclosure of kubeconfig files.
       *
       * @description *   The default validity period of a kubeconfig file is 3 years. 180 days before a kubeconfig file expires, you can renew it in the Container Service for Kubernetes (ACK) console or by calling API operations. After a kubeconfig file is renewed, the kubeconfig file is valid for 3 years. The previous kubeconfig file still remains valid until expiration. We recommend that you renew your kubeconfig file at the earliest opportunity.
       * *   We recommend that you keep kubeconfig files confidential and revoke kubeconfig files that are not in use. This helps prevent data leaks caused by the disclosure of kubeconfig files.
       *
       * @param request DescribeClusterUserKubeconfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterUserKubeconfigResponse
       */
      Models::DescribeClusterUserKubeconfigResponse describeClusterUserKubeconfigWithOptions(const string &ClusterId, const Models::DescribeClusterUserKubeconfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Kubeconfig files store identity and authentication information that is used by clients to access Container Service for Kubernetes (ACK) clusters. To use a kubectl client to manage an ACK cluster, you need to use the corresponding kubeconfig file to connect to the ACK cluster. We recommend that you keep kubeconfig files confidential and revoke kubeconfig files that are not in use. This helps prevent data leaks caused by the disclosure of kubeconfig files.
       *
       * @description *   The default validity period of a kubeconfig file is 3 years. 180 days before a kubeconfig file expires, you can renew it in the Container Service for Kubernetes (ACK) console or by calling API operations. After a kubeconfig file is renewed, the kubeconfig file is valid for 3 years. The previous kubeconfig file still remains valid until expiration. We recommend that you renew your kubeconfig file at the earliest opportunity.
       * *   We recommend that you keep kubeconfig files confidential and revoke kubeconfig files that are not in use. This helps prevent data leaks caused by the disclosure of kubeconfig files.
       *
       * @param request DescribeClusterUserKubeconfigRequest
       * @return DescribeClusterUserKubeconfigResponse
       */
      Models::DescribeClusterUserKubeconfigResponse describeClusterUserKubeconfig(const string &ClusterId, const Models::DescribeClusterUserKubeconfigRequest &request);

      /**
       * @deprecated OpenAPI DescribeClusterV2UserKubeconfig is deprecated
       *
       * @summary 获取集群kubeconfig接口
       *
       * @param request DescribeClusterV2UserKubeconfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterV2UserKubeconfigResponse
       */
      Models::DescribeClusterV2UserKubeconfigResponse describeClusterV2UserKubeconfigWithOptions(const string &ClusterId, const Models::DescribeClusterV2UserKubeconfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeClusterV2UserKubeconfig is deprecated
       *
       * @summary 获取集群kubeconfig接口
       *
       * @param request DescribeClusterV2UserKubeconfigRequest
       * @return DescribeClusterV2UserKubeconfigResponse
       */
      Models::DescribeClusterV2UserKubeconfigResponse describeClusterV2UserKubeconfig(const string &ClusterId, const Models::DescribeClusterV2UserKubeconfigRequest &request);

      /**
       * @summary Queries the security vulnerability details of a cluster by cluster ID. The details include vulnerability name, vulnerability type, and vulnerability severity. We recommend that you scan your cluster on a regular basis to ensure cluster security.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterVulsResponse
       */
      Models::DescribeClusterVulsResponse describeClusterVulsWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security vulnerability details of a cluster by cluster ID. The details include vulnerability name, vulnerability type, and vulnerability severity. We recommend that you scan your cluster on a regular basis to ensure cluster security.
       *
       * @return DescribeClusterVulsResponse
       */
      Models::DescribeClusterVulsResponse describeClusterVuls(const string &clusterId);

      /**
       * @deprecated OpenAPI DescribeClusters is deprecated
       *
       * @summary Queries all the clusters that belong to the current Alibaba Cloud account, including Kubernetes clusters and Swarm clusters.
       *
       * @param request DescribeClustersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClustersResponse
       */
      Models::DescribeClustersResponse describeClustersWithOptions(const Models::DescribeClustersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeClusters is deprecated
       *
       * @summary Queries all the clusters that belong to the current Alibaba Cloud account, including Kubernetes clusters and Swarm clusters.
       *
       * @param request DescribeClustersRequest
       * @return DescribeClustersResponse
       */
      Models::DescribeClustersResponse describeClusters(const Models::DescribeClustersRequest &request);

      /**
       * @summary Queries all clusters in a specified region.
       *
       * @param request DescribeClustersForRegionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClustersForRegionResponse
       */
      Models::DescribeClustersForRegionResponse describeClustersForRegionWithOptions(const string &regionId, const Models::DescribeClustersForRegionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all clusters in a specified region.
       *
       * @param request DescribeClustersForRegionRequest
       * @return DescribeClustersForRegionResponse
       */
      Models::DescribeClustersForRegionResponse describeClustersForRegion(const string &regionId, const Models::DescribeClustersForRegionRequest &request);

      /**
       * @summary Queries the details about Container Service for Kubernetes (ACK) clusters of specified types or specifications within an account.
       *
       * @param request DescribeClustersV1Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClustersV1Response
       */
      Models::DescribeClustersV1Response describeClustersV1WithOptions(const Models::DescribeClustersV1Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about Container Service for Kubernetes (ACK) clusters of specified types or specifications within an account.
       *
       * @param request DescribeClustersV1Request
       * @return DescribeClustersV1Response
       */
      Models::DescribeClustersV1Response describeClustersV1(const Models::DescribeClustersV1Request &request);

      /**
       * @summary Queries the detailed information about a type of events, including the severity level, status, and time. Events are generated when clusters are created, modified, and updated, node pools are created and scaled out, and components are installed.
       *
       * @param request DescribeEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEventsWithOptions(const Models::DescribeEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about a type of events, including the severity level, status, and time. Events are generated when clusters are created, modified, and updated, node pools are created and scaled out, and components are installed.
       *
       * @param request DescribeEventsRequest
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEvents(const Models::DescribeEventsRequest &request);

      /**
       * @summary Queries all events in a specified region.
       *
       * @param request DescribeEventsForRegionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventsForRegionResponse
       */
      Models::DescribeEventsForRegionResponse describeEventsForRegionWithOptions(const string &regionId, const Models::DescribeEventsForRegionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all events in a specified region.
       *
       * @param request DescribeEventsForRegionRequest
       * @return DescribeEventsForRegionResponse
       */
      Models::DescribeEventsForRegionResponse describeEventsForRegion(const string &regionId, const Models::DescribeEventsForRegionRequest &request);

      /**
       * @deprecated OpenAPI DescribeExternalAgent is deprecated
       *
       * @summary Queries the proxy configurations of a registered cluster by cluster ID.
       *
       * @description For more information, see [Register an external Kubernetes cluster](https://help.aliyun.com/document_detail/121053.html).
       *
       * @param request DescribeExternalAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExternalAgentResponse
       */
      Models::DescribeExternalAgentResponse describeExternalAgentWithOptions(const string &ClusterId, const Models::DescribeExternalAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeExternalAgent is deprecated
       *
       * @summary Queries the proxy configurations of a registered cluster by cluster ID.
       *
       * @description For more information, see [Register an external Kubernetes cluster](https://help.aliyun.com/document_detail/121053.html).
       *
       * @param request DescribeExternalAgentRequest
       * @return DescribeExternalAgentResponse
       */
      Models::DescribeExternalAgentResponse describeExternalAgent(const string &ClusterId, const Models::DescribeExternalAgentRequest &request);

      /**
       * @summary Queries the detailed information about Kubernetes versions, including the version number, release date, expiration date, compatible OSs, and runtime.
       *
       * @param request DescribeKubernetesVersionMetadataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKubernetesVersionMetadataResponse
       */
      Models::DescribeKubernetesVersionMetadataResponse describeKubernetesVersionMetadataWithOptions(const Models::DescribeKubernetesVersionMetadataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about Kubernetes versions, including the version number, release date, expiration date, compatible OSs, and runtime.
       *
       * @param request DescribeKubernetesVersionMetadataRequest
       * @return DescribeKubernetesVersionMetadataResponse
       */
      Models::DescribeKubernetesVersionMetadataResponse describeKubernetesVersionMetadata(const Models::DescribeKubernetesVersionMetadataRequest &request);

      /**
       * @summary Queries the vulnerability information of a node pool, such as vulnerability names and severity levels, by specifying the ID of the node pool. We recommend that you periodically scan node pools for vulnerabilities to enhance cluster security.
       *
       * @param request DescribeNodePoolVulsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNodePoolVulsResponse
       */
      Models::DescribeNodePoolVulsResponse describeNodePoolVulsWithOptions(const string &clusterId, const string &nodepoolId, const Models::DescribeNodePoolVulsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the vulnerability information of a node pool, such as vulnerability names and severity levels, by specifying the ID of the node pool. We recommend that you periodically scan node pools for vulnerabilities to enhance cluster security.
       *
       * @param request DescribeNodePoolVulsRequest
       * @return DescribeNodePoolVulsResponse
       */
      Models::DescribeNodePoolVulsResponse describeNodePoolVuls(const string &clusterId, const string &nodepoolId, const Models::DescribeNodePoolVulsRequest &request);

      /**
       * @summary Queries a list of security policies. Container Service for Kubernetes (ACK) clusters offer a variety of built-in container security policies, such as Compliance, Infra, K8s-general, and pod security policy (PSP). You can use these policies to ensure the security of containers running in a production environment.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePoliciesResponse
       */
      Models::DescribePoliciesResponse describePoliciesWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of security policies. Container Service for Kubernetes (ACK) clusters offer a variety of built-in container security policies, such as Compliance, Infra, K8s-general, and pod security policy (PSP). You can use these policies to ensure the security of containers running in a production environment.
       *
       * @return DescribePoliciesResponse
       */
      Models::DescribePoliciesResponse describePolicies();

      /**
       * @summary Queries the detailed information about a policy. The information includes the content, action, and severity level of the policy. Container Service for Kubernetes (ACK) provides the following types of predefined security policies: Compliance, Infra, K8s-general, and pod security policy (PSP). These policies ensure that containers are running in the production environment in a secure manner.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolicyDetailsResponse
       */
      Models::DescribePolicyDetailsResponse describePolicyDetailsWithOptions(const string &policyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about a policy. The information includes the content, action, and severity level of the policy. Container Service for Kubernetes (ACK) provides the following types of predefined security policies: Compliance, Infra, K8s-general, and pod security policy (PSP). These policies ensure that containers are running in the production environment in a secure manner.
       *
       * @return DescribePolicyDetailsResponse
       */
      Models::DescribePolicyDetailsResponse describePolicyDetails(const string &policyName);

      /**
       * @summary Container Service for Kubernetes (ACK) clusters offer a variety of built-in container security policies, such as Compliance, Infra, K8s-general, and pod security policy (PSP). You can use these policies to ensure the security of containers running in a production environment. You can call the DescribePolicyGovernanceInCluster operation to query the details of policies for an ACK cluster. For example, you can query the number of policies that are enabled per severity level, the audit logs of policies, and the blocking and alerting information.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolicyGovernanceInClusterResponse
       */
      Models::DescribePolicyGovernanceInClusterResponse describePolicyGovernanceInClusterWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Container Service for Kubernetes (ACK) clusters offer a variety of built-in container security policies, such as Compliance, Infra, K8s-general, and pod security policy (PSP). You can use these policies to ensure the security of containers running in a production environment. You can call the DescribePolicyGovernanceInCluster operation to query the details of policies for an ACK cluster. For example, you can query the number of policies that are enabled per severity level, the audit logs of policies, and the blocking and alerting information.
       *
       * @return DescribePolicyGovernanceInClusterResponse
       */
      Models::DescribePolicyGovernanceInClusterResponse describePolicyGovernanceInCluster(const string &clusterId);

      /**
       * @summary Queries the detailed information about policy instances of the specified type in a Container Service for Kubernetes (ACK) cluster, such as the policy description and severity level. You can choose a type of security policy for an ACK cluster, specify the action and applicable scope of the policy, and then create and deploy a policy instance.
       *
       * @param request DescribePolicyInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolicyInstancesResponse
       */
      Models::DescribePolicyInstancesResponse describePolicyInstancesWithOptions(const string &clusterId, const Models::DescribePolicyInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about policy instances of the specified type in a Container Service for Kubernetes (ACK) cluster, such as the policy description and severity level. You can choose a type of security policy for an ACK cluster, specify the action and applicable scope of the policy, and then create and deploy a policy instance.
       *
       * @param request DescribePolicyInstancesRequest
       * @return DescribePolicyInstancesResponse
       */
      Models::DescribePolicyInstancesResponse describePolicyInstances(const string &clusterId, const Models::DescribePolicyInstancesRequest &request);

      /**
       * @summary Queries the deployment of policy instances in the current Container Service for Kubernetes (ACK) cluster, including the number of policy instances of each type and the number of policy types of each severity level.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolicyInstancesStatusResponse
       */
      Models::DescribePolicyInstancesStatusResponse describePolicyInstancesStatusWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the deployment of policy instances in the current Container Service for Kubernetes (ACK) cluster, including the number of policy instances of each type and the number of policy types of each severity level.
       *
       * @return DescribePolicyInstancesStatusResponse
       */
      Models::DescribePolicyInstancesStatusResponse describePolicyInstancesStatus(const string &clusterId);

      /**
       * @summary Queries whether the deletion protection feature is enabled for the specified resources in the cluster. The resources that you can query include namespaces and Services.
       *
       * @param request DescribeResourcesDeleteProtectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourcesDeleteProtectionResponse
       */
      Models::DescribeResourcesDeleteProtectionResponse describeResourcesDeleteProtectionWithOptions(const string &ClusterId, const string &ResourceType, const Models::DescribeResourcesDeleteProtectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the deletion protection feature is enabled for the specified resources in the cluster. The resources that you can query include namespaces and Services.
       *
       * @param request DescribeResourcesDeleteProtectionRequest
       * @return DescribeResourcesDeleteProtectionResponse
       */
      Models::DescribeResourcesDeleteProtectionResponse describeResourcesDeleteProtection(const string &ClusterId, const string &ResourceType, const Models::DescribeResourcesDeleteProtectionRequest &request);

      /**
       * @summary Queries or issues the kubeconfig credentials of a Resource Access Management (RAM) user or RAM role of the account. If you are the permission manager of a Container Service for Kubernetes (ACK) cluster, you can issue the kubeconfig credentials to a specific RAM user or RAM role of the account by using the Alibaba Cloud account. The kubeconfig credentials, which are used to connect to the ACK cluster, contain the identity information about the RAM user or RAM role.
       *
       * @description You can call this operation only by using an Alibaba Cloud account.
       *
       * @param request DescribeSubaccountK8sClusterUserConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubaccountK8sClusterUserConfigResponse
       */
      Models::DescribeSubaccountK8sClusterUserConfigResponse describeSubaccountK8sClusterUserConfigWithOptions(const string &ClusterId, const string &Uid, const Models::DescribeSubaccountK8sClusterUserConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries or issues the kubeconfig credentials of a Resource Access Management (RAM) user or RAM role of the account. If you are the permission manager of a Container Service for Kubernetes (ACK) cluster, you can issue the kubeconfig credentials to a specific RAM user or RAM role of the account by using the Alibaba Cloud account. The kubeconfig credentials, which are used to connect to the ACK cluster, contain the identity information about the RAM user or RAM role.
       *
       * @description You can call this operation only by using an Alibaba Cloud account.
       *
       * @param request DescribeSubaccountK8sClusterUserConfigRequest
       * @return DescribeSubaccountK8sClusterUserConfigResponse
       */
      Models::DescribeSubaccountK8sClusterUserConfigResponse describeSubaccountK8sClusterUserConfig(const string &ClusterId, const string &Uid, const Models::DescribeSubaccountK8sClusterUserConfigRequest &request);

      /**
       * @summary Queries detailed information about a task, such as the task type, status, and progress.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTaskInfoResponse
       */
      Models::DescribeTaskInfoResponse describeTaskInfoWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries detailed information about a task, such as the task type, status, and progress.
       *
       * @return DescribeTaskInfoResponse
       */
      Models::DescribeTaskInfoResponse describeTaskInfo(const string &taskId);

      /**
       * @summary An orchestration template defines and describes a group of Kubernetes resources. It declaratively describes the configuration of an application or how an application runs. You can call the DescribeTemplates API operation to query orchestration templates and their detailed information, including access permissions, YAML content, and labels.
       *
       * @param request DescribeTemplateAttributeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplateAttributeResponse
       */
      Models::DescribeTemplateAttributeResponse describeTemplateAttributeWithOptions(const string &TemplateId, const Models::DescribeTemplateAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary An orchestration template defines and describes a group of Kubernetes resources. It declaratively describes the configuration of an application or how an application runs. You can call the DescribeTemplates API operation to query orchestration templates and their detailed information, including access permissions, YAML content, and labels.
       *
       * @param request DescribeTemplateAttributeRequest
       * @return DescribeTemplateAttributeResponse
       */
      Models::DescribeTemplateAttributeResponse describeTemplateAttribute(const string &TemplateId, const Models::DescribeTemplateAttributeRequest &request);

      /**
       * @summary An orchestration template defines and describes a group of Kubernetes resources. It declaratively describes the configuration of an application or how an application runs. You can call the DescribeTemplates API operation to query orchestration templates and their detailed information, including access permissions, YAML content, and labels.
       *
       * @param request DescribeTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplatesResponse
       */
      Models::DescribeTemplatesResponse describeTemplatesWithOptions(const Models::DescribeTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary An orchestration template defines and describes a group of Kubernetes resources. It declaratively describes the configuration of an application or how an application runs. You can call the DescribeTemplates API operation to query orchestration templates and their detailed information, including access permissions, YAML content, and labels.
       *
       * @param request DescribeTemplatesRequest
       * @return DescribeTemplatesResponse
       */
      Models::DescribeTemplatesResponse describeTemplates(const Models::DescribeTemplatesRequest &request);

      /**
       * @summary Queries triggers that match specific conditions.
       *
       * @param request DescribeTriggerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTriggerResponse
       */
      Models::DescribeTriggerResponse describeTriggerWithOptions(const string &clusterId, const Models::DescribeTriggerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries triggers that match specific conditions.
       *
       * @param request DescribeTriggerRequest
       * @return DescribeTriggerResponse
       */
      Models::DescribeTriggerResponse describeTrigger(const string &clusterId, const Models::DescribeTriggerRequest &request);

      /**
       * @summary You can use Kubernetes namespaces to limit users from accessing resources in a Container Service for Kubernetes (ACK) cluster. Users that are granted Role-Based Access Control (RBAC) permissions only on one namespace cannot access resources in other namespaces. Queries the RBAC permissions that are granted to the current Resource Access Management (RAM) user or RAM role on an ACK cluster.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserClusterNamespacesResponse
       */
      Models::DescribeUserClusterNamespacesResponse describeUserClusterNamespacesWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can use Kubernetes namespaces to limit users from accessing resources in a Container Service for Kubernetes (ACK) cluster. Users that are granted Role-Based Access Control (RBAC) permissions only on one namespace cannot access resources in other namespaces. Queries the RBAC permissions that are granted to the current Resource Access Management (RAM) user or RAM role on an ACK cluster.
       *
       * @return DescribeUserClusterNamespacesResponse
       */
      Models::DescribeUserClusterNamespacesResponse describeUserClusterNamespaces(const string &ClusterId);

      /**
       * @summary In an Container Service for Kubernetes (ACK) cluster, you can create and specify different Resource Access Management (RAM) users or roles to have different access permissions. This ensures access control and resource isolation. You can call the DescribeUserPermission operation to query the permissions that are granted to a RAM user or RAM role on ACK clusters, including the resources that are allowed to access, the scope of the permissions, the predefined role, and the permission source.
       *
       * @description **Precautions**:
       * *   If you call this operation as a Resource Access Management (RAM) user or by assuming a RAM role, only the permissions granted on the clusters on which the current account has the role-based access control (RBAC) administrator permissions are returned. If you want to query the permissions on all clusters, you must use an account that has the RBAC administrator permissions on all clusters.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserPermissionResponse
       */
      Models::DescribeUserPermissionResponse describeUserPermissionWithOptions(const string &uid, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary In an Container Service for Kubernetes (ACK) cluster, you can create and specify different Resource Access Management (RAM) users or roles to have different access permissions. This ensures access control and resource isolation. You can call the DescribeUserPermission operation to query the permissions that are granted to a RAM user or RAM role on ACK clusters, including the resources that are allowed to access, the scope of the permissions, the predefined role, and the permission source.
       *
       * @description **Precautions**:
       * *   If you call this operation as a Resource Access Management (RAM) user or by assuming a RAM role, only the permissions granted on the clusters on which the current account has the role-based access control (RBAC) administrator permissions are returned. If you want to query the permissions on all clusters, you must use an account that has the RBAC administrator permissions on all clusters.
       *
       * @return DescribeUserPermissionResponse
       */
      Models::DescribeUserPermissionResponse describeUserPermission(const string &uid);

      /**
       * @summary Queries quotas related to Container Service for Kubernetes (ACK) clusters, node pools, and nodes. To increase a quota, submit an application in the Quota Center console.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserQuotaResponse
       */
      Models::DescribeUserQuotaResponse describeUserQuotaWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries quotas related to Container Service for Kubernetes (ACK) clusters, node pools, and nodes. To increase a quota, submit an application in the Quota Center console.
       *
       * @return DescribeUserQuotaResponse
       */
      Models::DescribeUserQuotaResponse describeUserQuota();

      /**
       * @summary Patches node vulnerabilities in a node pool to enhance node security. Cloud Security provided by Alibaba Cloud periodically scans Elastic Compute Service (ECS) instances for vulnerabilities and provides suggestions on how to patch the detected vulnerabilities. Vulnerability patching may require node restarts. Make sure that your cluster has sufficient idle nodes for node draining.
       *
       * @description 1.  The Common Vulnerabilities and Exposures (CVE) patching feature is developed based on Security Center. To use this feature, you must purchase the Security Center Ultimate Edition that supports Container Service for Kubernetes (ACK).
       * 2.  ACK may need to restart nodes to patch certain vulnerabilities. ACK drains a node before the node restarts. Make sure that the ACK cluster has sufficient idle nodes to host the pods evicted from the trained nodes. For example, you can scale out a node pool before you patch vulnerabilities for the nodes in the node pool.
       * 3.  Security Center ensures the compatibility of CVE patches. We recommend that you check the compatibility of a CVE patch with your application before you install the patch. You can pause or cancel a CVE patching task anytime.
       * 4.  CVE patching is a progressive task that consists of multiple batches. After you pause or cancel a CVE patching task, ACK continues to process the dispatched batches. Only the batches that have not been dispatched are paused or canceled.
       *
       * @param request FixNodePoolVulsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return FixNodePoolVulsResponse
       */
      Models::FixNodePoolVulsResponse fixNodePoolVulsWithOptions(const string &clusterId, const string &nodepoolId, const Models::FixNodePoolVulsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Patches node vulnerabilities in a node pool to enhance node security. Cloud Security provided by Alibaba Cloud periodically scans Elastic Compute Service (ECS) instances for vulnerabilities and provides suggestions on how to patch the detected vulnerabilities. Vulnerability patching may require node restarts. Make sure that your cluster has sufficient idle nodes for node draining.
       *
       * @description 1.  The Common Vulnerabilities and Exposures (CVE) patching feature is developed based on Security Center. To use this feature, you must purchase the Security Center Ultimate Edition that supports Container Service for Kubernetes (ACK).
       * 2.  ACK may need to restart nodes to patch certain vulnerabilities. ACK drains a node before the node restarts. Make sure that the ACK cluster has sufficient idle nodes to host the pods evicted from the trained nodes. For example, you can scale out a node pool before you patch vulnerabilities for the nodes in the node pool.
       * 3.  Security Center ensures the compatibility of CVE patches. We recommend that you check the compatibility of a CVE patch with your application before you install the patch. You can pause or cancel a CVE patching task anytime.
       * 4.  CVE patching is a progressive task that consists of multiple batches. After you pause or cancel a CVE patching task, ACK continues to process the dispatched batches. Only the batches that have not been dispatched are paused or canceled.
       *
       * @param request FixNodePoolVulsRequest
       * @return FixNodePoolVulsResponse
       */
      Models::FixNodePoolVulsResponse fixNodePoolVuls(const string &clusterId, const string &nodepoolId, const Models::FixNodePoolVulsRequest &request);

      /**
       * @summary You can call the GetClusterAddonInstance operation to query the information of a component instance in a cluster, including the version, configurations, and log status of the component instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterAddonInstanceResponse
       */
      Models::GetClusterAddonInstanceResponse getClusterAddonInstanceWithOptions(const string &clusterId, const string &instanceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the GetClusterAddonInstance operation to query the information of a component instance in a cluster, including the version, configurations, and log status of the component instance.
       *
       * @return GetClusterAddonInstanceResponse
       */
      Models::GetClusterAddonInstanceResponse getClusterAddonInstance(const string &clusterId, const string &instanceName);

      /**
       * @summary You can call the GetClusterAuditProject operation to check whether the cluster has API Server auditing enabled and the corresponding Simple Log Service project that stores API Server audit logs.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterAuditProjectResponse
       */
      Models::GetClusterAuditProjectResponse getClusterAuditProjectWithOptions(const string &clusterid, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the GetClusterAuditProject operation to check whether the cluster has API Server auditing enabled and the corresponding Simple Log Service project that stores API Server audit logs.
       *
       * @return GetClusterAuditProjectResponse
       */
      Models::GetClusterAuditProjectResponse getClusterAuditProject(const string &clusterid);

      /**
       * @summary Queries a cluster check task by cluster ID and task ID. You can view the status, check items, creation time, and end time of the task. Container Intelligence Service (CIS) provides a variety of Kubernetes cluster check features, including cluster update check, cluster migration check, component installation check, component update check, and node pool check.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterCheckResponse
       */
      Models::GetClusterCheckResponse getClusterCheckWithOptions(const string &clusterId, const string &checkId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a cluster check task by cluster ID and task ID. You can view the status, check items, creation time, and end time of the task. Container Intelligence Service (CIS) provides a variety of Kubernetes cluster check features, including cluster update check, cluster migration check, component installation check, component update check, and node pool check.
       *
       * @return GetClusterCheckResponse
       */
      Models::GetClusterCheckResponse getClusterCheck(const string &clusterId, const string &checkId);

      /**
       * @summary Queries cluster diagnostic items.
       *
       * @param request GetClusterDiagnosisCheckItemsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterDiagnosisCheckItemsResponse
       */
      Models::GetClusterDiagnosisCheckItemsResponse getClusterDiagnosisCheckItemsWithOptions(const string &clusterId, const string &diagnosisId, const Models::GetClusterDiagnosisCheckItemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cluster diagnostic items.
       *
       * @param request GetClusterDiagnosisCheckItemsRequest
       * @return GetClusterDiagnosisCheckItemsResponse
       */
      Models::GetClusterDiagnosisCheckItemsResponse getClusterDiagnosisCheckItems(const string &clusterId, const string &diagnosisId, const Models::GetClusterDiagnosisCheckItemsRequest &request);

      /**
       * @summary Queries cluster diagnostic results.
       *
       * @param request GetClusterDiagnosisResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterDiagnosisResultResponse
       */
      Models::GetClusterDiagnosisResultResponse getClusterDiagnosisResultWithOptions(const string &clusterId, const string &diagnosisId, const Models::GetClusterDiagnosisResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cluster diagnostic results.
       *
       * @param request GetClusterDiagnosisResultRequest
       * @return GetClusterDiagnosisResultResponse
       */
      Models::GetClusterDiagnosisResultResponse getClusterDiagnosisResult(const string &clusterId, const string &diagnosisId, const Models::GetClusterDiagnosisResultRequest &request);

      /**
       * @summary Retrieves cluster inspection configuration.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterInspectConfigResponse
       */
      Models::GetClusterInspectConfigResponse getClusterInspectConfigWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves cluster inspection configuration.
       *
       * @return GetClusterInspectConfigResponse
       */
      Models::GetClusterInspectConfigResponse getClusterInspectConfig(const string &clusterId);

      /**
       * @summary Obtain the details of the inspection report for the cluster
       *
       * @param request GetClusterInspectReportDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterInspectReportDetailResponse
       */
      Models::GetClusterInspectReportDetailResponse getClusterInspectReportDetailWithOptions(const string &clusterId, const string &reportId, const Models::GetClusterInspectReportDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the details of the inspection report for the cluster
       *
       * @param request GetClusterInspectReportDetailRequest
       * @return GetClusterInspectReportDetailResponse
       */
      Models::GetClusterInspectReportDetailResponse getClusterInspectReportDetail(const string &clusterId, const string &reportId, const Models::GetClusterInspectReportDetailRequest &request);

      /**
       * @deprecated OpenAPI GetKubernetesTrigger is deprecated
       *
       * @summary You can call the GetKubernetesTrigger operationto query the triggers of an application by application name.
       *
       * @param request GetKubernetesTriggerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKubernetesTriggerResponse
       */
      Models::GetKubernetesTriggerResponse getKubernetesTriggerWithOptions(const string &ClusterId, const Models::GetKubernetesTriggerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetKubernetesTrigger is deprecated
       *
       * @summary You can call the GetKubernetesTrigger operationto query the triggers of an application by application name.
       *
       * @param request GetKubernetesTriggerRequest
       * @return GetKubernetesTriggerResponse
       */
      Models::GetKubernetesTriggerResponse getKubernetesTrigger(const string &ClusterId, const Models::GetKubernetesTriggerRequest &request);

      /**
       * @deprecated OpenAPI GetUpgradeStatus is deprecated
       *
       * @summary You can call the GetUpgradeStatus operation to query the update progress of a cluster by cluster ID.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUpgradeStatusResponse
       */
      Models::GetUpgradeStatusResponse getUpgradeStatusWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetUpgradeStatus is deprecated
       *
       * @summary You can call the GetUpgradeStatus operation to query the update progress of a cluster by cluster ID.
       *
       * @return GetUpgradeStatusResponse
       */
      Models::GetUpgradeStatusResponse getUpgradeStatus(const string &ClusterId);

      /**
       * @summary Updates the role-based access control (RBAC) permissions of a Resource Access Management (RAM) user or RAM role. By default, you do not have the RBAC permissions on a Container Service for Kubernetes (ACK) cluster if you are not the cluster owner or you are not using an Alibaba Cloud account. You can call this operation to specify the resources that can be accessed, permission scope, and predefined roles. This helps you better manage the access control on resources in ACK clusters.
       *
       * @description *   If you use a Resource Access Management (RAM) account to call this operation, make sure it has permissions to modify cluster authorization information for other RAM users or RAM roles. Otherwise, the `StatusForbidden` or `ForbiddenGrantPermissions` error code is returned. For more information, see [Use a RAM user to grant RBAC permissions to other RAM users](https://help.aliyun.com/document_detail/119035.html).
       * *   This operation overwrites all existing cluster permissions for the target RAM user or RAM role. You must specify all the permissions you want to grant to the RAM user or RAM role in the request.
       *
       * @param request GrantPermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantPermissionsResponse
       */
      Models::GrantPermissionsResponse grantPermissionsWithOptions(const string &uid, const Models::GrantPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the role-based access control (RBAC) permissions of a Resource Access Management (RAM) user or RAM role. By default, you do not have the RBAC permissions on a Container Service for Kubernetes (ACK) cluster if you are not the cluster owner or you are not using an Alibaba Cloud account. You can call this operation to specify the resources that can be accessed, permission scope, and predefined roles. This helps you better manage the access control on resources in ACK clusters.
       *
       * @description *   If you use a Resource Access Management (RAM) account to call this operation, make sure it has permissions to modify cluster authorization information for other RAM users or RAM roles. Otherwise, the `StatusForbidden` or `ForbiddenGrantPermissions` error code is returned. For more information, see [Use a RAM user to grant RBAC permissions to other RAM users](https://help.aliyun.com/document_detail/119035.html).
       * *   This operation overwrites all existing cluster permissions for the target RAM user or RAM role. You must specify all the permissions you want to grant to the RAM user or RAM role in the request.
       *
       * @param request GrantPermissionsRequest
       * @return GrantPermissionsResponse
       */
      Models::GrantPermissionsResponse grantPermissions(const string &uid, const Models::GrantPermissionsRequest &request);

      /**
       * @summary 为了增强Kubernetes能力，ACK集群支持了多种组件，例如托管的核心组件，应用、日志和监控、网络、存储、安全组件等。您可以调用InstallClusterAddons接口，通过组件名称和版本安装组件。
       *
       * @param request InstallClusterAddonsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallClusterAddonsResponse
       */
      Models::InstallClusterAddonsResponse installClusterAddonsWithOptions(const string &ClusterId, const Models::InstallClusterAddonsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为了增强Kubernetes能力，ACK集群支持了多种组件，例如托管的核心组件，应用、日志和监控、网络、存储、安全组件等。您可以调用InstallClusterAddons接口，通过组件名称和版本安装组件。
       *
       * @param request InstallClusterAddonsRequest
       * @return InstallClusterAddonsResponse
       */
      Models::InstallClusterAddonsResponse installClusterAddons(const string &ClusterId, const Models::InstallClusterAddonsRequest &request);

      /**
       * @summary Queries the available components based on specific conditions such as the region, cluster type, cluster subtype defined by cluster profile, and cluster version and queries the detailed information about a component. The information includes whether the component is managed, the supported custom parameter schema, and compatible operating system architecture.
       *
       * @param request ListAddonsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAddonsResponse
       */
      Models::ListAddonsResponse listAddonsWithOptions(const Models::ListAddonsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available components based on specific conditions such as the region, cluster type, cluster subtype defined by cluster profile, and cluster version and queries the detailed information about a component. The information includes whether the component is managed, the supported custom parameter schema, and compatible operating system architecture.
       *
       * @param request ListAddonsRequest
       * @return ListAddonsResponse
       */
      Models::ListAddonsResponse listAddons(const Models::ListAddonsRequest &request);

      /**
       * @summary Queries the component instances that are running in the specified cluster and the information about the component instances. The information includes the component version and status.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterAddonInstancesResponse
       */
      Models::ListClusterAddonInstancesResponse listClusterAddonInstancesWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the component instances that are running in the specified cluster and the information about the component instances. The information includes the component version and status.
       *
       * @return ListClusterAddonInstancesResponse
       */
      Models::ListClusterAddonInstancesResponse listClusterAddonInstances(const string &clusterId);

      /**
       * @summary You can call the ListClusterChecks operation to query all the cluster check results of a cluster.
       *
       * @param request ListClusterChecksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterChecksResponse
       */
      Models::ListClusterChecksResponse listClusterChecksWithOptions(const string &clusterId, const Models::ListClusterChecksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ListClusterChecks operation to query all the cluster check results of a cluster.
       *
       * @param request ListClusterChecksRequest
       * @return ListClusterChecksResponse
       */
      Models::ListClusterChecksResponse listClusterChecks(const string &clusterId, const Models::ListClusterChecksRequest &request);

      /**
       * @summary Obtains the details of the cluster inspection report.
       *
       * @param request ListClusterInspectReportsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterInspectReportsResponse
       */
      Models::ListClusterInspectReportsResponse listClusterInspectReportsWithOptions(const string &clusterId, const Models::ListClusterInspectReportsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of the cluster inspection report.
       *
       * @param request ListClusterInspectReportsRequest
       * @return ListClusterInspectReportsResponse
       */
      Models::ListClusterInspectReportsResponse listClusterInspectReports(const string &clusterId, const Models::ListClusterInspectReportsRequest &request);

      /**
       * @summary Queries the kubeconfig files that are issued to users for the current cluster and the status of the kubeconfig files.
       *
       * @description > - To call this operation, make sure that you have ram:ListUsers and ram:ListRoles permissions.
       * > - To call this operation, make sure that you have the AliyunCSFullAccess permissions.
       *
       * @param request ListClusterKubeconfigStatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterKubeconfigStatesResponse
       */
      Models::ListClusterKubeconfigStatesResponse listClusterKubeconfigStatesWithOptions(const string &ClusterId, const Models::ListClusterKubeconfigStatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the kubeconfig files that are issued to users for the current cluster and the status of the kubeconfig files.
       *
       * @description > - To call this operation, make sure that you have ram:ListUsers and ram:ListRoles permissions.
       * > - To call this operation, make sure that you have the AliyunCSFullAccess permissions.
       *
       * @param request ListClusterKubeconfigStatesRequest
       * @return ListClusterKubeconfigStatesResponse
       */
      Models::ListClusterKubeconfigStatesResponse listClusterKubeconfigStates(const string &ClusterId, const Models::ListClusterKubeconfigStatesRequest &request);

      /**
       * @summary Queries the automated maintenance schedules of a cluster.
       *
       * @param request ListOperationPlansRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationPlansResponse
       */
      Models::ListOperationPlansResponse listOperationPlansWithOptions(const Models::ListOperationPlansRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the automated maintenance schedules of a cluster.
       *
       * @param request ListOperationPlansRequest
       * @return ListOperationPlansResponse
       */
      Models::ListOperationPlansResponse listOperationPlans(const Models::ListOperationPlansRequest &request);

      /**
       * @summary 获取单个地域的自动运维执行计划列表
       *
       * @param request ListOperationPlansForRegionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationPlansForRegionResponse
       */
      Models::ListOperationPlansForRegionResponse listOperationPlansForRegionWithOptions(const string &regionId, const Models::ListOperationPlansForRegionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取单个地域的自动运维执行计划列表
       *
       * @param request ListOperationPlansForRegionRequest
       * @return ListOperationPlansForRegionResponse
       */
      Models::ListOperationPlansForRegionResponse listOperationPlansForRegion(const string &regionId, const Models::ListOperationPlansForRegionRequest &request);

      /**
       * @summary Queries resource labels and the detailed information, such as the key-value pairs of the labels and the clusters to which the labels are added. You can use labels to classify and manage Container Service for Kubernetes (ACK) clusters in order to meet monitoring, cost analysis, and tenant isolation requirements.
       *
       * @param tmpReq ListTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resource labels and the detailed information, such as the key-value pairs of the labels and the clusters to which the labels are added. You can use labels to classify and manage Container Service for Kubernetes (ACK) clusters in order to meet monitoring, cost analysis, and tenant isolation requirements.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary You can call the ListUserKubeConfigStates operation to query the status of the kubeconfig files of all clusters managed by the current user.
       *
       * @description >  To call this operation, make sure that you have the AliyunCSFullAccess permissions.
       *
       * @param request ListUserKubeConfigStatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserKubeConfigStatesResponse
       */
      Models::ListUserKubeConfigStatesResponse listUserKubeConfigStatesWithOptions(const string &Uid, const Models::ListUserKubeConfigStatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ListUserKubeConfigStates operation to query the status of the kubeconfig files of all clusters managed by the current user.
       *
       * @description >  To call this operation, make sure that you have the AliyunCSFullAccess permissions.
       *
       * @param request ListUserKubeConfigStatesRequest
       * @return ListUserKubeConfigStatesResponse
       */
      Models::ListUserKubeConfigStatesResponse listUserKubeConfigStates(const string &Uid, const Models::ListUserKubeConfigStatesRequest &request);

      /**
       * @summary The Container Service for Kubernetes (ACK) managed Pro cluster type is developed based on the ACK managed Basic cluster type. It inherits all benefits of ACK managed clusters, such as fully-managed control planes and control plane high availability. It further enhances reliability, security, scheduling capabilities, and offers service level agreement (SLA)-backed guarantees, making it ideal for enterprise customers with large-scale production workloads requiring high stability and security. You can call the MigrateCluster operation to migrate an ACK managed Basic cluster to an ACK managed Pro cluster.
       *
       * @param request MigrateClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateClusterResponse
       */
      Models::MigrateClusterResponse migrateClusterWithOptions(const string &clusterId, const Models::MigrateClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The Container Service for Kubernetes (ACK) managed Pro cluster type is developed based on the ACK managed Basic cluster type. It inherits all benefits of ACK managed clusters, such as fully-managed control planes and control plane high availability. It further enhances reliability, security, scheduling capabilities, and offers service level agreement (SLA)-backed guarantees, making it ideal for enterprise customers with large-scale production workloads requiring high stability and security. You can call the MigrateCluster operation to migrate an ACK managed Basic cluster to an ACK managed Pro cluster.
       *
       * @param request MigrateClusterRequest
       * @return MigrateClusterResponse
       */
      Models::MigrateClusterResponse migrateCluster(const string &clusterId, const Models::MigrateClusterRequest &request);

      /**
       * @summary You can call the ModifyCluster operation to modify the cluster configurations by cluster ID.
       *
       * @param request ModifyClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterResponse
       */
      Models::ModifyClusterResponse modifyClusterWithOptions(const string &ClusterId, const Models::ModifyClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ModifyCluster operation to modify the cluster configurations by cluster ID.
       *
       * @param request ModifyClusterRequest
       * @return ModifyClusterResponse
       */
      Models::ModifyClusterResponse modifyCluster(const string &ClusterId, const Models::ModifyClusterRequest &request);

      /**
       * @summary Modifies the configuration of a cluster component. This operation may affect your businesses. We recommend that you assess the impact, back up data, and perform the operation during off-peak hours.
       *
       * @description You can call this API operation to modify the component parameters of an ACK Basic cluster or the control plane parameters of an ACK Pro cluster:
       * *   To view the component parameters of an ACK Basic cluster, call the DescribeClusterAddonMetadata API operation. For more information, see [Query the metadata of a cluster component](https://help.aliyun.com/document_detail/2667944.html).
       * *   To view the control plane parameters of an ACK Pro cluster, see [Customize the control plane parameters of an ACK Pro cluster](https://help.aliyun.com/document_detail/199588.html).
       * After you call this operation, the component may be redeployed and restarted. We recommend that you assess the impact before you call this operation.
       *
       * @param request ModifyClusterAddonRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterAddonResponse
       */
      Models::ModifyClusterAddonResponse modifyClusterAddonWithOptions(const string &clusterId, const string &componentId, const Models::ModifyClusterAddonRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a cluster component. This operation may affect your businesses. We recommend that you assess the impact, back up data, and perform the operation during off-peak hours.
       *
       * @description You can call this API operation to modify the component parameters of an ACK Basic cluster or the control plane parameters of an ACK Pro cluster:
       * *   To view the component parameters of an ACK Basic cluster, call the DescribeClusterAddonMetadata API operation. For more information, see [Query the metadata of a cluster component](https://help.aliyun.com/document_detail/2667944.html).
       * *   To view the control plane parameters of an ACK Pro cluster, see [Customize the control plane parameters of an ACK Pro cluster](https://help.aliyun.com/document_detail/199588.html).
       * After you call this operation, the component may be redeployed and restarted. We recommend that you assess the impact before you call this operation.
       *
       * @param request ModifyClusterAddonRequest
       * @return ModifyClusterAddonResponse
       */
      Models::ModifyClusterAddonResponse modifyClusterAddon(const string &clusterId, const string &componentId, const Models::ModifyClusterAddonRequest &request);

      /**
       * @summary You can call the ModifyClusterNodePool operation to modify the configuration of a node pool with the specified node pool ID.
       *
       * @param request ModifyClusterNodePoolRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterNodePoolResponse
       */
      Models::ModifyClusterNodePoolResponse modifyClusterNodePoolWithOptions(const string &ClusterId, const string &NodepoolId, const Models::ModifyClusterNodePoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ModifyClusterNodePool operation to modify the configuration of a node pool with the specified node pool ID.
       *
       * @param request ModifyClusterNodePoolRequest
       * @return ModifyClusterNodePoolResponse
       */
      Models::ModifyClusterNodePoolResponse modifyClusterNodePool(const string &ClusterId, const string &NodepoolId, const Models::ModifyClusterNodePoolRequest &request);

      /**
       * @summary You can add labels in key-value pairs to clusters. This allows cluster developers or O\\\\\\&M engineers to classify and manage clusters in a more flexible manner. This also meets the requirements for monitoring, cost analysis, and tenant isolation. You can call the ModifyClusterTags operation to modify the labels of a cluster.
       *
       * @param request ModifyClusterTagsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterTagsResponse
       */
      Models::ModifyClusterTagsResponse modifyClusterTagsWithOptions(const string &ClusterId, const Models::ModifyClusterTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can add labels in key-value pairs to clusters. This allows cluster developers or O\\\\\\&M engineers to classify and manage clusters in a more flexible manner. This also meets the requirements for monitoring, cost analysis, and tenant isolation. You can call the ModifyClusterTags operation to modify the labels of a cluster.
       *
       * @param request ModifyClusterTagsRequest
       * @return ModifyClusterTagsResponse
       */
      Models::ModifyClusterTagsResponse modifyClusterTags(const string &ClusterId, const Models::ModifyClusterTagsRequest &request);

      /**
       * @summary Modifies the configuration of a node pool, such as the kubelet configuration and node rolling update configuration. After you modify the node pool configuration, nodes are batch updated and the kubelet on each node is restarted. This may adversely affect the nodes and workloads. We recommend that you perform this operation during off-peak hours.
       *
       * @description >  Container Service for Kubernetes (ACK) allows you to modify the kubelet configuration of nodes in a node pool. After you modify the kubelet configuration, the new configuration immediately takes effect on existing nodes in the node pool and is automatically applied to newly added nodes.
       *
       * @param request ModifyNodePoolNodeConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNodePoolNodeConfigResponse
       */
      Models::ModifyNodePoolNodeConfigResponse modifyNodePoolNodeConfigWithOptions(const string &ClusterId, const string &NodepoolId, const Models::ModifyNodePoolNodeConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a node pool, such as the kubelet configuration and node rolling update configuration. After you modify the node pool configuration, nodes are batch updated and the kubelet on each node is restarted. This may adversely affect the nodes and workloads. We recommend that you perform this operation during off-peak hours.
       *
       * @description >  Container Service for Kubernetes (ACK) allows you to modify the kubelet configuration of nodes in a node pool. After you modify the kubelet configuration, the new configuration immediately takes effect on existing nodes in the node pool and is automatically applied to newly added nodes.
       *
       * @param request ModifyNodePoolNodeConfigRequest
       * @return ModifyNodePoolNodeConfigResponse
       */
      Models::ModifyNodePoolNodeConfigResponse modifyNodePoolNodeConfig(const string &ClusterId, const string &NodepoolId, const Models::ModifyNodePoolNodeConfigRequest &request);

      /**
       * @summary Updates a policy in a specific Container Service for Kubernetes (ACK) cluster. You can modify the action of the policy such as alerting or denying and namespaces to which the policy applies.
       *
       * @param request ModifyPolicyInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPolicyInstanceResponse
       */
      Models::ModifyPolicyInstanceResponse modifyPolicyInstanceWithOptions(const string &clusterId, const string &policyName, const Models::ModifyPolicyInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a policy in a specific Container Service for Kubernetes (ACK) cluster. You can modify the action of the policy such as alerting or denying and namespaces to which the policy applies.
       *
       * @param request ModifyPolicyInstanceRequest
       * @return ModifyPolicyInstanceResponse
       */
      Models::ModifyPolicyInstanceResponse modifyPolicyInstance(const string &clusterId, const string &policyName, const Models::ModifyPolicyInstanceRequest &request);

      /**
       * @summary When using Container Service for Kubernetes (ACK) for the first time, you must call the OpenAckService operation to activate the service.
       *
       * @description *   You can activate ACK by using Alibaba Cloud accounts.
       * *   To activate ACK by using RAM users, you need to grant the AdministratorAccess permission to the RAM users.
       *
       * @param request OpenAckServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenAckServiceResponse
       */
      Models::OpenAckServiceResponse openAckServiceWithOptions(const Models::OpenAckServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary When using Container Service for Kubernetes (ACK) for the first time, you must call the OpenAckService operation to activate the service.
       *
       * @description *   You can activate ACK by using Alibaba Cloud accounts.
       * *   To activate ACK by using RAM users, you need to grant the AdministratorAccess permission to the RAM users.
       *
       * @param request OpenAckServiceRequest
       * @return OpenAckServiceResponse
       */
      Models::OpenAckServiceResponse openAckService(const Models::OpenAckServiceRequest &request);

      /**
       * @deprecated OpenAPI PauseClusterUpgrade is deprecated
       *
       * @summary You can call the PauseClusterUpgrade operation to pause the update of a Container Service for Kubernetes (ACK) cluster.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseClusterUpgradeResponse
       */
      Models::PauseClusterUpgradeResponse pauseClusterUpgradeWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI PauseClusterUpgrade is deprecated
       *
       * @summary You can call the PauseClusterUpgrade operation to pause the update of a Container Service for Kubernetes (ACK) cluster.
       *
       * @return PauseClusterUpgradeResponse
       */
      Models::PauseClusterUpgradeResponse pauseClusterUpgrade(const string &ClusterId);

      /**
       * @deprecated OpenAPI PauseComponentUpgrade is deprecated
       *
       * @summary You can call the PauseComponentUpgrade operation to pause the update of a component.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseComponentUpgradeResponse
       */
      Models::PauseComponentUpgradeResponse pauseComponentUpgradeWithOptions(const string &clusterid, const string &componentid, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI PauseComponentUpgrade is deprecated
       *
       * @summary You can call the PauseComponentUpgrade operation to pause the update of a component.
       *
       * @return PauseComponentUpgradeResponse
       */
      Models::PauseComponentUpgradeResponse pauseComponentUpgrade(const string &clusterid, const string &componentid);

      /**
       * @summary Pauses an on-going task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseTaskResponse
       */
      Models::PauseTaskResponse pauseTaskWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses an on-going task.
       *
       * @return PauseTaskResponse
       */
      Models::PauseTaskResponse pauseTask(const string &taskId);

      /**
       * @deprecated OpenAPI RemoveClusterNodes is deprecated
       *
       * @summary You can call the RemoveClusterNodes operation to remove nodes from a Container Service for Kubernetes (ACK) cluster.
       *
       * @description ****
       * *   When you remove a node, the pods that run on the node are migrated to other nodes. This may cause service interruptions. We recommend that you remove nodes during off-peak hours.
       * *   Unknown errors may occur when you remove nodes. Before you remove nodes, back up the data on the nodes.
       * *   Nodes remain in the Unschedulable state when they are being removed.
       * *   You can remove only worker nodes. You cannot remove master nodes.
       *
       * @param request RemoveClusterNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveClusterNodesResponse
       */
      Models::RemoveClusterNodesResponse removeClusterNodesWithOptions(const string &ClusterId, const Models::RemoveClusterNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI RemoveClusterNodes is deprecated
       *
       * @summary You can call the RemoveClusterNodes operation to remove nodes from a Container Service for Kubernetes (ACK) cluster.
       *
       * @description ****
       * *   When you remove a node, the pods that run on the node are migrated to other nodes. This may cause service interruptions. We recommend that you remove nodes during off-peak hours.
       * *   Unknown errors may occur when you remove nodes. Before you remove nodes, back up the data on the nodes.
       * *   Nodes remain in the Unschedulable state when they are being removed.
       * *   You can remove only worker nodes. You cannot remove master nodes.
       *
       * @param request RemoveClusterNodesRequest
       * @return RemoveClusterNodesResponse
       */
      Models::RemoveClusterNodesResponse removeClusterNodes(const string &ClusterId, const Models::RemoveClusterNodesRequest &request);

      /**
       * @summary Removes nodes from a node pool.
       *
       * @description *   When you remove a node, the pods on the node are migrated to other nodes. This may cause service interruptions. We recommend that you remove nodes during off-peak hours.
       * *   The operation may have unexpected risks. Back up the data before you perform this operation.
       * *   Nodes remain in the Unschedulable state when they are being removed.
       * *   The system removes only worker nodes. It does not remove master nodes.
       * *   Even if you set the `release_node` parameter to `true`, subscription nodes are not released. You must release the subscription nodes in the [ECS console](https://ecs.console.aliyun.com/) after you remove the nodes.
       *
       * @param tmpReq RemoveNodePoolNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveNodePoolNodesResponse
       */
      Models::RemoveNodePoolNodesResponse removeNodePoolNodesWithOptions(const string &ClusterId, const string &NodepoolId, const Models::RemoveNodePoolNodesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes nodes from a node pool.
       *
       * @description *   When you remove a node, the pods on the node are migrated to other nodes. This may cause service interruptions. We recommend that you remove nodes during off-peak hours.
       * *   The operation may have unexpected risks. Back up the data before you perform this operation.
       * *   Nodes remain in the Unschedulable state when they are being removed.
       * *   The system removes only worker nodes. It does not remove master nodes.
       * *   Even if you set the `release_node` parameter to `true`, subscription nodes are not released. You must release the subscription nodes in the [ECS console](https://ecs.console.aliyun.com/) after you remove the nodes.
       *
       * @param request RemoveNodePoolNodesRequest
       * @return RemoveNodePoolNodesResponse
       */
      Models::RemoveNodePoolNodesResponse removeNodePoolNodes(const string &ClusterId, const string &NodepoolId, const Models::RemoveNodePoolNodesRequest &request);

      /**
       * @summary Repairs a node pool.
       *
       * @param request RepairClusterNodePoolRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RepairClusterNodePoolResponse
       */
      Models::RepairClusterNodePoolResponse repairClusterNodePoolWithOptions(const string &clusterId, const string &nodepoolId, const Models::RepairClusterNodePoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Repairs a node pool.
       *
       * @param request RepairClusterNodePoolRequest
       * @return RepairClusterNodePoolResponse
       */
      Models::RepairClusterNodePoolResponse repairClusterNodePool(const string &clusterId, const string &nodepoolId, const Models::RepairClusterNodePoolRequest &request);

      /**
       * @deprecated OpenAPI ResumeComponentUpgrade is deprecated
       *
       * @summary You can call the ResumeComponentUpgrade operation to resume the update of a component.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeComponentUpgradeResponse
       */
      Models::ResumeComponentUpgradeResponse resumeComponentUpgradeWithOptions(const string &clusterid, const string &componentid, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ResumeComponentUpgrade is deprecated
       *
       * @summary You can call the ResumeComponentUpgrade operation to resume the update of a component.
       *
       * @return ResumeComponentUpgradeResponse
       */
      Models::ResumeComponentUpgradeResponse resumeComponentUpgrade(const string &clusterid, const string &componentid);

      /**
       * @summary Resumes a task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeTaskResponse
       */
      Models::ResumeTaskResponse resumeTaskWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a task.
       *
       * @return ResumeTaskResponse
       */
      Models::ResumeTaskResponse resumeTask(const string &taskId);

      /**
       * @deprecated OpenAPI ResumeUpgradeCluster is deprecated
       *
       * @summary You can call the ResumeUpgradeCluster operation to resume the update of a cluster by cluster ID.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeUpgradeClusterResponse
       */
      Models::ResumeUpgradeClusterResponse resumeUpgradeClusterWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ResumeUpgradeCluster is deprecated
       *
       * @summary You can call the ResumeUpgradeCluster operation to resume the update of a cluster by cluster ID.
       *
       * @return ResumeUpgradeClusterResponse
       */
      Models::ResumeUpgradeClusterResponse resumeUpgradeCluster(const string &ClusterId);

      /**
       * @summary You can call the RevokeK8sClusterKubeConfig operation to revoke the kubeconfig file of a cluster that belongs to the current Alibaba Cloud account or RAM user. After the kubeconfig file is revoked, the cluster generates a new kubeconfig file, and the original kubeconfig file becomes invalid.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeK8sClusterKubeConfigResponse
       */
      Models::RevokeK8sClusterKubeConfigResponse revokeK8sClusterKubeConfigWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the RevokeK8sClusterKubeConfig operation to revoke the kubeconfig file of a cluster that belongs to the current Alibaba Cloud account or RAM user. After the kubeconfig file is revoked, the cluster generates a new kubeconfig file, and the original kubeconfig file becomes invalid.
       *
       * @return RevokeK8sClusterKubeConfigResponse
       */
      Models::RevokeK8sClusterKubeConfigResponse revokeK8sClusterKubeConfig(const string &ClusterId);

      /**
       * @summary Container Intelligence Service (CIS) provides a variety of cluster check capabilities to allow you to perform cluster update check, cluster migration check, component installation check, component update check, and node pool check. A precheck is automatically triggered before an update, migration, or installation is performed. You can perform changes only if the cluster passes the precheck. You can also manually call the RunClusterCheck operation to initiate cluster checks. We recommend that you periodically check and maintain your cluster to mitigate potential risks.
       *
       * @param request RunClusterCheckRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunClusterCheckResponse
       */
      Models::RunClusterCheckResponse runClusterCheckWithOptions(const string &clusterId, const Models::RunClusterCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Container Intelligence Service (CIS) provides a variety of cluster check capabilities to allow you to perform cluster update check, cluster migration check, component installation check, component update check, and node pool check. A precheck is automatically triggered before an update, migration, or installation is performed. You can perform changes only if the cluster passes the precheck. You can also manually call the RunClusterCheck operation to initiate cluster checks. We recommend that you periodically check and maintain your cluster to mitigate potential risks.
       *
       * @param request RunClusterCheckRequest
       * @return RunClusterCheckResponse
       */
      Models::RunClusterCheckResponse runClusterCheck(const string &clusterId, const Models::RunClusterCheckRequest &request);

      /**
       * @summary Triggers a cluster inspection and generates a report.
       *
       * @param request RunClusterInspectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunClusterInspectResponse
       */
      Models::RunClusterInspectResponse runClusterInspectWithOptions(const string &clusterId, const Models::RunClusterInspectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers a cluster inspection and generates a report.
       *
       * @param request RunClusterInspectRequest
       * @return RunClusterInspectResponse
       */
      Models::RunClusterInspectResponse runClusterInspect(const string &clusterId, const Models::RunClusterInspectRequest &request);

      /**
       * @summary Scales out a node pool.
       *
       * @param request ScaleClusterNodePoolRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScaleClusterNodePoolResponse
       */
      Models::ScaleClusterNodePoolResponse scaleClusterNodePoolWithOptions(const string &ClusterId, const string &NodepoolId, const Models::ScaleClusterNodePoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales out a node pool.
       *
       * @param request ScaleClusterNodePoolRequest
       * @return ScaleClusterNodePoolResponse
       */
      Models::ScaleClusterNodePoolResponse scaleClusterNodePool(const string &ClusterId, const string &NodepoolId, const Models::ScaleClusterNodePoolRequest &request);

      /**
       * @summary You can call the ScaleOutCluster operation to scale out a cluster by cluster ID.
       *
       * @description **
       * ****The ScaleOutCluster API operation is phased out. You must call the node pool-related API operations to manage nodes. If you want to add worker nodes to a Container Service for Kubernetes (ACK) cluster, call the ScaleClusterNodePool API operation. For more information, see [ScaleClusterNodePool](https://help.aliyun.com/document_detail/184928.html).
       *
       * @param request ScaleOutClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScaleOutClusterResponse
       */
      Models::ScaleOutClusterResponse scaleOutClusterWithOptions(const string &ClusterId, const Models::ScaleOutClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ScaleOutCluster operation to scale out a cluster by cluster ID.
       *
       * @description **
       * ****The ScaleOutCluster API operation is phased out. You must call the node pool-related API operations to manage nodes. If you want to add worker nodes to a Container Service for Kubernetes (ACK) cluster, call the ScaleClusterNodePool API operation. For more information, see [ScaleClusterNodePool](https://help.aliyun.com/document_detail/184928.html).
       *
       * @param request ScaleOutClusterRequest
       * @return ScaleOutClusterResponse
       */
      Models::ScaleOutClusterResponse scaleOutCluster(const string &ClusterId, const Models::ScaleOutClusterRequest &request);

      /**
       * @summary Scans for vulnerabilities in a Container Service for Kubernetes (ACK) cluster, including workload vulnerabilities, third-party software vulnerabilities, CVE vulnerabilities, WebCMS vulnerabilities, and Windows vulnerabilities. We recommend that you scan your cluster on a regular basis to ensure cluster security.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScanClusterVulsResponse
       */
      Models::ScanClusterVulsResponse scanClusterVulsWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scans for vulnerabilities in a Container Service for Kubernetes (ACK) cluster, including workload vulnerabilities, third-party software vulnerabilities, CVE vulnerabilities, WebCMS vulnerabilities, and Windows vulnerabilities. We recommend that you scan your cluster on a regular basis to ensure cluster security.
       *
       * @return ScanClusterVulsResponse
       */
      Models::ScanClusterVulsResponse scanClusterVuls(const string &clusterId);

      /**
       * @summary Activates the specified alert rule(s).
       *
       * @param request StartAlertRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAlertResponse
       */
      Models::StartAlertResponse startAlertWithOptions(const string &ClusterId, const Models::StartAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the specified alert rule(s).
       *
       * @param request StartAlertRequest
       * @return StartAlertResponse
       */
      Models::StartAlertResponse startAlert(const string &ClusterId, const Models::StartAlertRequest &request);

      /**
       * @summary You can call the StopAlert operation to disable an alert rule or an alert rule set in the alert center of Container Service for Kubernetes (ACK).
       *
       * @param request StopAlertRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAlertResponse
       */
      Models::StopAlertResponse stopAlertWithOptions(const string &ClusterId, const Models::StopAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the StopAlert operation to disable an alert rule or an alert rule set in the alert center of Container Service for Kubernetes (ACK).
       *
       * @param request StopAlertRequest
       * @return StopAlertResponse
       */
      Models::StopAlertResponse stopAlert(const string &ClusterId, const Models::StopAlertRequest &request);

      /**
       * @summary Synchronizes the information about a node pool, including the metadata and node information of the node pool.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncClusterNodePoolResponse
       */
      Models::SyncClusterNodePoolResponse syncClusterNodePoolWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes the information about a node pool, including the metadata and node information of the node pool.
       *
       * @return SyncClusterNodePoolResponse
       */
      Models::SyncClusterNodePoolResponse syncClusterNodePool(const string &ClusterId);

      /**
       * @summary You can add labels in key-value pairs to clusters. This allows cluster developers or O\\&M engineers to classify and manage clusters in a more flexible manner. This also meets the requirements for monitoring, cost analysis, and tenant isolation. You can call the TagResources operation to add labels to a cluster.
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can add labels in key-value pairs to clusters. This allows cluster developers or O\\&M engineers to classify and manage clusters in a more flexible manner. This also meets the requirements for monitoring, cost analysis, and tenant isolation. You can call the TagResources operation to add labels to a cluster.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Uninstalls components that you no longer need from a cluster. You must specify the name of the components and specify whether to release associated Alibaba Cloud resources from the cluster.
       *
       * @param request UnInstallClusterAddonsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnInstallClusterAddonsResponse
       */
      Models::UnInstallClusterAddonsResponse unInstallClusterAddonsWithOptions(const string &ClusterId, const Models::UnInstallClusterAddonsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls components that you no longer need from a cluster. You must specify the name of the components and specify whether to release associated Alibaba Cloud resources from the cluster.
       *
       * @param request UnInstallClusterAddonsRequest
       * @return UnInstallClusterAddonsResponse
       */
      Models::UnInstallClusterAddonsResponse unInstallClusterAddons(const string &ClusterId, const Models::UnInstallClusterAddonsRequest &request);

      /**
       * @summary If you no longer need the labels (key-value pairs) of a cluster, you can call the UntagResources operation to delete the labels.
       *
       * @param tmpReq UntagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If you no longer need the labels (key-value pairs) of a cluster, you can call the UntagResources operation to delete the labels.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary You can call the UpdateClusterAuditLogConfig operation to enable or disable the audit log feature in a Container Service for Kubernetes (ACK) cluster and update the audit log configuration. This operation also allows you to record requests to the Kubernetes API and the responses, which can be used to trace cluster operation history and troubleshoot cluster issues.
       *
       * @description Before you call this operation, ensure that you understand the billing methods and pricing of [Simple Log Service](https://www.alibabacloud.com/product/log-service/pricing).
       *
       * @param request UpdateClusterAuditLogConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClusterAuditLogConfigResponse
       */
      Models::UpdateClusterAuditLogConfigResponse updateClusterAuditLogConfigWithOptions(const string &clusterid, const Models::UpdateClusterAuditLogConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the UpdateClusterAuditLogConfig operation to enable or disable the audit log feature in a Container Service for Kubernetes (ACK) cluster and update the audit log configuration. This operation also allows you to record requests to the Kubernetes API and the responses, which can be used to trace cluster operation history and troubleshoot cluster issues.
       *
       * @description Before you call this operation, ensure that you understand the billing methods and pricing of [Simple Log Service](https://www.alibabacloud.com/product/log-service/pricing).
       *
       * @param request UpdateClusterAuditLogConfigRequest
       * @return UpdateClusterAuditLogConfigResponse
       */
      Models::UpdateClusterAuditLogConfigResponse updateClusterAuditLogConfig(const string &clusterid, const Models::UpdateClusterAuditLogConfigRequest &request);

      /**
       * @summary Modifies cluster inspection configurations.
       *
       * @param request UpdateClusterInspectConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClusterInspectConfigResponse
       */
      Models::UpdateClusterInspectConfigResponse updateClusterInspectConfigWithOptions(const string &clusterId, const Models::UpdateClusterInspectConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies cluster inspection configurations.
       *
       * @param request UpdateClusterInspectConfigRequest
       * @return UpdateClusterInspectConfigResponse
       */
      Models::UpdateClusterInspectConfigResponse updateClusterInspectConfig(const string &clusterId, const Models::UpdateClusterInspectConfigRequest &request);

      /**
       * @summary You can call the UpdateContactGroupForAlert operation to specify a contact group for an alert rule in an ACK cluster.
       *
       * @param request UpdateContactGroupForAlertRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContactGroupForAlertResponse
       */
      Models::UpdateContactGroupForAlertResponse updateContactGroupForAlertWithOptions(const string &ClusterId, const Models::UpdateContactGroupForAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the UpdateContactGroupForAlert operation to specify a contact group for an alert rule in an ACK cluster.
       *
       * @param request UpdateContactGroupForAlertRequest
       * @return UpdateContactGroupForAlertResponse
       */
      Models::UpdateContactGroupForAlertResponse updateContactGroupForAlert(const string &ClusterId, const Models::UpdateContactGroupForAlertRequest &request);

      /**
       * @summary Modifies the log configurations of control plane components. The configurations include the log retention period and components whose logs that you want to collect. Container Service for Kubernetes (ACK) managed clusters can collect the logs of control plane components and deliver the logs to projects in Simple Log Service. These control plane components include Kube-apiserver, kube-scheduler, Kubernetes controller manager, and cloud controller manager (CCM).
       *
       * @param request UpdateControlPlaneLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateControlPlaneLogResponse
       */
      Models::UpdateControlPlaneLogResponse updateControlPlaneLogWithOptions(const string &ClusterId, const Models::UpdateControlPlaneLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the log configurations of control plane components. The configurations include the log retention period and components whose logs that you want to collect. Container Service for Kubernetes (ACK) managed clusters can collect the logs of control plane components and deliver the logs to projects in Simple Log Service. These control plane components include Kube-apiserver, kube-scheduler, Kubernetes controller manager, and cloud controller manager (CCM).
       *
       * @param request UpdateControlPlaneLogRequest
       * @return UpdateControlPlaneLogResponse
       */
      Models::UpdateControlPlaneLogResponse updateControlPlaneLog(const string &ClusterId, const Models::UpdateControlPlaneLogRequest &request);

      /**
       * @summary Sets the validity period of a kubeconfig file used by a Resource Access Management (RAM) user or RAM role to connect to a Container Service for Kubernetes (ACK) cluster. The validity period ranges from 1 to 876,000 hours. You can call this API operation when you customize configurations by using an Alibaba Cloud account. The default validity period of a kubeconfig file is three years.
       *
       * @description *   You can call this operation only with an Alibaba Cloud account.
       * *   If the kubeconfig file used by your cluster is revoked, the custom validity period of the kubeconfig file is reset. In this case, you need to call this API operation to reconfigure the validity period of the kubeconfig file.
       *
       * @param request UpdateK8sClusterUserConfigExpireRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateK8sClusterUserConfigExpireResponse
       */
      Models::UpdateK8sClusterUserConfigExpireResponse updateK8sClusterUserConfigExpireWithOptions(const string &ClusterId, const Models::UpdateK8sClusterUserConfigExpireRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the validity period of a kubeconfig file used by a Resource Access Management (RAM) user or RAM role to connect to a Container Service for Kubernetes (ACK) cluster. The validity period ranges from 1 to 876,000 hours. You can call this API operation when you customize configurations by using an Alibaba Cloud account. The default validity period of a kubeconfig file is three years.
       *
       * @description *   You can call this operation only with an Alibaba Cloud account.
       * *   If the kubeconfig file used by your cluster is revoked, the custom validity period of the kubeconfig file is reset. In this case, you need to call this API operation to reconfigure the validity period of the kubeconfig file.
       *
       * @param request UpdateK8sClusterUserConfigExpireRequest
       * @return UpdateK8sClusterUserConfigExpireResponse
       */
      Models::UpdateK8sClusterUserConfigExpireResponse updateK8sClusterUserConfigExpire(const string &ClusterId, const Models::UpdateK8sClusterUserConfigExpireRequest &request);

      /**
       * @summary Updates the deletion protection status of the specified resources. You can enable or disable deletion protection for namespaces and Services. You can call this operation to enable deletion protection for namespaces or Services that involve businesses-critical and sensitive data to avoid incurring maintenance costs caused by accidental namespace or Service deletion.
       *
       * @param request UpdateResourcesDeleteProtectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourcesDeleteProtectionResponse
       */
      Models::UpdateResourcesDeleteProtectionResponse updateResourcesDeleteProtectionWithOptions(const string &ClusterId, const Models::UpdateResourcesDeleteProtectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the deletion protection status of the specified resources. You can enable or disable deletion protection for namespaces and Services. You can call this operation to enable deletion protection for namespaces or Services that involve businesses-critical and sensitive data to avoid incurring maintenance costs caused by accidental namespace or Service deletion.
       *
       * @param request UpdateResourcesDeleteProtectionRequest
       * @return UpdateResourcesDeleteProtectionResponse
       */
      Models::UpdateResourcesDeleteProtectionResponse updateResourcesDeleteProtection(const string &ClusterId, const Models::UpdateResourcesDeleteProtectionRequest &request);

      /**
       * @summary Updates the configurations of an orchestration template. An orchestration template defines and describes a group of Container Service for Kubernetes (ACK) resources. An orchestration template describes the configurations of an application or how an application runs in a declarative manner.
       *
       * @param request UpdateTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplateWithOptions(const string &TemplateId, const Models::UpdateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of an orchestration template. An orchestration template defines and describes a group of Container Service for Kubernetes (ACK) resources. An orchestration template describes the configurations of an application or how an application runs in a declarative manner.
       *
       * @param request UpdateTemplateRequest
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplate(const string &TemplateId, const Models::UpdateTemplateRequest &request);

      /**
       * @summary Updates the role-based access control (RBAC) permissions of a Resource Access Management (RAM) user or RAM role. By default, you do not have the RBAC permissions on a Container Service for Kubernetes (ACK) cluster if you are not the cluster owner or you are not using an Alibaba Cloud account. You can call this operation to specify the resources that can be accessed, permission scope, and predefined roles. This helps you better manage the access control on resources in ACK clusters.
       *
       * @description **Precautions**:
       * *   You can update the permissions of a RAM user or RAM role on a cluster by using full update or incremental update. If you use full update, the existing permissions of the RAM user or RAM role on the cluster are overwritten. You must specify all the permissions that you want to grant to the RAM user or RAM role in the request parameters when you call the operation. If you use incremental update, you can grant permissions to or revoke permissions from the RAM user or RAM role on the cluster. In this case, only the permissions that you specify in the request parameters when you call the operation are granted or revoked, other permissions of the RAM user or RAM role on the cluster are not affected.
       *
       * @param request UpdateUserPermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserPermissionsResponse
       */
      Models::UpdateUserPermissionsResponse updateUserPermissionsWithOptions(const string &uid, const Models::UpdateUserPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the role-based access control (RBAC) permissions of a Resource Access Management (RAM) user or RAM role. By default, you do not have the RBAC permissions on a Container Service for Kubernetes (ACK) cluster if you are not the cluster owner or you are not using an Alibaba Cloud account. You can call this operation to specify the resources that can be accessed, permission scope, and predefined roles. This helps you better manage the access control on resources in ACK clusters.
       *
       * @description **Precautions**:
       * *   You can update the permissions of a RAM user or RAM role on a cluster by using full update or incremental update. If you use full update, the existing permissions of the RAM user or RAM role on the cluster are overwritten. You must specify all the permissions that you want to grant to the RAM user or RAM role in the request parameters when you call the operation. If you use incremental update, you can grant permissions to or revoke permissions from the RAM user or RAM role on the cluster. In this case, only the permissions that you specify in the request parameters when you call the operation are granted or revoked, other permissions of the RAM user or RAM role on the cluster are not affected.
       *
       * @param request UpdateUserPermissionsRequest
       * @return UpdateUserPermissionsResponse
       */
      Models::UpdateUserPermissionsResponse updateUserPermissions(const string &uid, const Models::UpdateUserPermissionsRequest &request);

      /**
       * @summary Outdated Kubernetes versions may have security and stability issues. We recommend that you update the Kubernetes version of your cluster at the earliest opportunity to enjoy the new features of the new Kubernetes version. You can call the UpgradeCluster operation to manually upgrade a cluster.
       *
       * @description After successfully calling the UpgradeCluster interface, this API returns the `task_id` of the upgrade task. You can manage this operation task by calling the following task APIs:
       * - [Call DescribeTaskInfo to query task details](https://help.aliyun.com/document_detail/2667985.html)
       * - [Call PauseTask to pause a running task](https://help.aliyun.com/document_detail/2667986.html) 
       * - [Call ResumeTask to resume a task that has been paused](https://help.aliyun.com/document_detail/2667987.html) 
       * - [Call CancelTask to cancel a running task](https://help.aliyun.com/document_detail/2667988.html)
       *
       * @param request UpgradeClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeClusterResponse
       */
      Models::UpgradeClusterResponse upgradeClusterWithOptions(const string &ClusterId, const Models::UpgradeClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Outdated Kubernetes versions may have security and stability issues. We recommend that you update the Kubernetes version of your cluster at the earliest opportunity to enjoy the new features of the new Kubernetes version. You can call the UpgradeCluster operation to manually upgrade a cluster.
       *
       * @description After successfully calling the UpgradeCluster interface, this API returns the `task_id` of the upgrade task. You can manage this operation task by calling the following task APIs:
       * - [Call DescribeTaskInfo to query task details](https://help.aliyun.com/document_detail/2667985.html)
       * - [Call PauseTask to pause a running task](https://help.aliyun.com/document_detail/2667986.html) 
       * - [Call ResumeTask to resume a task that has been paused](https://help.aliyun.com/document_detail/2667987.html) 
       * - [Call CancelTask to cancel a running task](https://help.aliyun.com/document_detail/2667988.html)
       *
       * @param request UpgradeClusterRequest
       * @return UpgradeClusterResponse
       */
      Models::UpgradeClusterResponse upgradeCluster(const string &ClusterId, const Models::UpgradeClusterRequest &request);

      /**
       * @summary Updates cluster components to use new features and patch vulnerabilities. You must update cluster components one after one and update a component only after the previous one is successfully updated. Before you update a component, we recommend that you read the update notes for each component. Cluster component updates may affect your businesses. Assess the impact, back up data, and perform the update during off-peak hours.
       *
       * @param request UpgradeClusterAddonsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeClusterAddonsResponse
       */
      Models::UpgradeClusterAddonsResponse upgradeClusterAddonsWithOptions(const string &ClusterId, const Models::UpgradeClusterAddonsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates cluster components to use new features and patch vulnerabilities. You must update cluster components one after one and update a component only after the previous one is successfully updated. Before you update a component, we recommend that you read the update notes for each component. Cluster component updates may affect your businesses. Assess the impact, back up data, and perform the update during off-peak hours.
       *
       * @param request UpgradeClusterAddonsRequest
       * @return UpgradeClusterAddonsResponse
       */
      Models::UpgradeClusterAddonsResponse upgradeClusterAddons(const string &ClusterId, const Models::UpgradeClusterAddonsRequest &request);

      /**
       * @summary You can call the UpgradeClusterNodepool operation to update the Kubernetes version, OS version, or container runtime version of the nodes in a node pool.
       *
       * @description This operation allows you to update the Kubernetes version, OS version, or container runtime version of the nodes in a node pool.
       *
       * @param request UpgradeClusterNodepoolRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeClusterNodepoolResponse
       */
      Models::UpgradeClusterNodepoolResponse upgradeClusterNodepoolWithOptions(const string &ClusterId, const string &NodepoolId, const Models::UpgradeClusterNodepoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the UpgradeClusterNodepool operation to update the Kubernetes version, OS version, or container runtime version of the nodes in a node pool.
       *
       * @description This operation allows you to update the Kubernetes version, OS version, or container runtime version of the nodes in a node pool.
       *
       * @param request UpgradeClusterNodepoolRequest
       * @return UpgradeClusterNodepoolResponse
       */
      Models::UpgradeClusterNodepoolResponse upgradeClusterNodepool(const string &ClusterId, const string &NodepoolId, const Models::UpgradeClusterNodepoolRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
