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
       * @deprecated OpenAPI AttachInstances is deprecated
       *
       * @summary Attaches existing Elastic Compute Service (ECS) instances to an Alibaba Cloud Container Service for Kubernetes (ACK) cluster. You can call this operation to add purchased ECS instances to an ACK cluster as worker nodes, or re-add removed worker nodes to a node pool.
       *
       * @description Before calling this operation, read [Limits](https://help.aliyun.com/document_detail/86919.html) to ensure that the ECS instances to be added meet the requirements.
       *
       * @param request AttachInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachInstancesResponse
       */
      Models::AttachInstancesResponse attachInstancesWithOptions(const string &ClusterId, const Models::AttachInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AttachInstances is deprecated
       *
       * @summary Attaches existing Elastic Compute Service (ECS) instances to an Alibaba Cloud Container Service for Kubernetes (ACK) cluster. You can call this operation to add purchased ECS instances to an ACK cluster as worker nodes, or re-add removed worker nodes to a node pool.
       *
       * @description Before calling this operation, read [Limits](https://help.aliyun.com/document_detail/86919.html) to ensure that the ECS instances to be added meet the requirements.
       *
       * @param request AttachInstancesRequest
       * @return AttachInstancesResponse
       */
      Models::AttachInstancesResponse attachInstances(const string &ClusterId, const Models::AttachInstancesRequest &request);

      /**
       * @summary Adds existing ECS instances to a node pool in an ACK cluster as worker nodes, or re-adds removed worker node instances to a node pool.
       *
       * @param request AttachInstancesToNodePoolRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachInstancesToNodePoolResponse
       */
      Models::AttachInstancesToNodePoolResponse attachInstancesToNodePoolWithOptions(const string &ClusterId, const string &NodepoolId, const Models::AttachInstancesToNodePoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds existing ECS instances to a node pool in an ACK cluster as worker nodes, or re-adds removed worker node instances to a node pool.
       *
       * @param request AttachInstancesToNodePoolRequest
       * @return AttachInstancesToNodePoolResponse
       */
      Models::AttachInstancesToNodePoolResponse attachInstancesToNodePool(const string &ClusterId, const string &NodepoolId, const Models::AttachInstancesToNodePoolRequest &request);

      /**
       * @deprecated OpenAPI CancelClusterUpgrade is deprecated
       *
       * @summary Cancels the upgrade of an ACK cluster.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelClusterUpgradeResponse
       */
      Models::CancelClusterUpgradeResponse cancelClusterUpgradeWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CancelClusterUpgrade is deprecated
       *
       * @summary Cancels the upgrade of an ACK cluster.
       *
       * @return CancelClusterUpgradeResponse
       */
      Models::CancelClusterUpgradeResponse cancelClusterUpgrade(const string &ClusterId);

      /**
       * @deprecated OpenAPI CancelComponentUpgrade is deprecated
       *
       * @summary Cancels the upgrade of a cluster component.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelComponentUpgradeResponse
       */
      Models::CancelComponentUpgradeResponse cancelComponentUpgradeWithOptions(const string &clusterId, const string &componentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CancelComponentUpgrade is deprecated
       *
       * @summary Cancels the upgrade of a cluster component.
       *
       * @return CancelComponentUpgradeResponse
       */
      Models::CancelComponentUpgradeResponse cancelComponentUpgrade(const string &clusterId, const string &componentId);

      /**
       * @summary Cancels an existing but unexecuted automated O&M task execution plan.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelOperationPlanResponse
       */
      Models::CancelOperationPlanResponse cancelOperationPlanWithOptions(const string &planId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an existing but unexecuted automated O&M task execution plan.
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
       * @summary Queries the log configuration of control plane components in an ACK managed cluster. ACK managed clusters support collecting logs of control plane components and delivering them to your Simple Log Service (SLS) project. Control plane components include core components such as Kube API Server, Kube Scheduler, Kube Controller Manager, and Cloud Controller Manager. You can call the CheckControlPlaneLogEnable operation to query the current log configuration of control plane components, including the log retention period and collected components.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckControlPlaneLogEnableResponse
       */
      Models::CheckControlPlaneLogEnableResponse checkControlPlaneLogEnableWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log configuration of control plane components in an ACK managed cluster. ACK managed clusters support collecting logs of control plane components and delivering them to your Simple Log Service (SLS) project. Control plane components include core components such as Kube API Server, Kube Scheduler, Kube Controller Manager, and Cloud Controller Manager. You can call the CheckControlPlaneLogEnable operation to query the current log configuration of control plane components, including the log retention period and collected components.
       *
       * @return CheckControlPlaneLogEnableResponse
       */
      Models::CheckControlPlaneLogEnableResponse checkControlPlaneLogEnable(const string &ClusterId);

      /**
       * @summary Checks whether the specified service role permissions are granted to the current service account. Container Service can call other cloud services related to the service roles, such as ECS, OSS, NAS, and SLB, only after the corresponding role permissions are granted.
       *
       * @param request CheckServiceRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceRoleResponse
       */
      Models::CheckServiceRoleResponse checkServiceRoleWithOptions(const Models::CheckServiceRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the specified service role permissions are granted to the current service account. Container Service can call other cloud services related to the service roles, such as ECS, OSS, NAS, and SLB, only after the corresponding role permissions are granted.
       *
       * @param request CheckServiceRoleRequest
       * @return CheckServiceRoleResponse
       */
      Models::CheckServiceRoleResponse checkServiceRole(const Models::CheckServiceRoleRequest &request);

      /**
       * @summary Revokes the issued KubeConfig credentials and RBAC permissions of a specified user in a specified cluster to clean up KubeConfigs with security risks.
       *
       * @description > 1. You must have the permissions to manage Container Service (CS) (AliyunCSFullAccess). 
       * > 2. You cannot clear the permissions of an Alibaba Cloud account.
       * > 3. You cannot clear the permissions of the user who performs the operation.
       *
       * @param request CleanClusterUserPermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CleanClusterUserPermissionsResponse
       */
      Models::CleanClusterUserPermissionsResponse cleanClusterUserPermissionsWithOptions(const string &ClusterId, const string &Uid, const Models::CleanClusterUserPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the issued KubeConfig credentials and RBAC permissions of a specified user in a specified cluster to clean up KubeConfigs with security risks.
       *
       * @description > 1. You must have the permissions to manage Container Service (CS) (AliyunCSFullAccess). 
       * > 2. You cannot clear the permissions of an Alibaba Cloud account.
       * > 3. You cannot clear the permissions of the user who performs the operation.
       *
       * @param request CleanClusterUserPermissionsRequest
       * @return CleanClusterUserPermissionsResponse
       */
      Models::CleanClusterUserPermissionsResponse cleanClusterUserPermissions(const string &ClusterId, const string &Uid, const Models::CleanClusterUserPermissionsRequest &request);

      /**
       * @summary Cleans up the KubeConfig credentials and revokes the RBAC permissions issued to a specified user. This operation is applicable to risky users, such as resigned employees or users with frozen accounts.
       *
       * @description >- You must have the permissions to manage Container Service for Kubernetes (CS), specifically the AliyunCSFullAccess policy.
       * >- You cannot clear the permissions of an Alibaba Cloud account.
       * >- You cannot clear the permissions of the user who performs this operation.
       *
       * @param tmpReq CleanUserPermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CleanUserPermissionsResponse
       */
      Models::CleanUserPermissionsResponse cleanUserPermissionsWithOptions(const string &Uid, const Models::CleanUserPermissionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cleans up the KubeConfig credentials and revokes the RBAC permissions issued to a specified user. This operation is applicable to risky users, such as resigned employees or users with frozen accounts.
       *
       * @description >- You must have the permissions to manage Container Service for Kubernetes (CS), specifically the AliyunCSFullAccess policy.
       * >- You cannot clear the permissions of an Alibaba Cloud account.
       * >- You cannot clear the permissions of the user who performs this operation.
       *
       * @param request CleanUserPermissionsRequest
       * @return CleanUserPermissionsResponse
       */
      Models::CleanUserPermissionsResponse cleanUserPermissions(const string &Uid, const Models::CleanUserPermissionsRequest &request);

      /**
       * @summary Creates a self-healing rule.
       *
       * @description >Notice: This API is not yet available. Stay tuned.
       *
       * @param request CreateAutoRepairPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAutoRepairPolicyResponse
       */
      Models::CreateAutoRepairPolicyResponse createAutoRepairPolicyWithOptions(const string &clusterId, const Models::CreateAutoRepairPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a self-healing rule.
       *
       * @description >Notice: This API is not yet available. Stay tuned.
       *
       * @param request CreateAutoRepairPolicyRequest
       * @return CreateAutoRepairPolicyResponse
       */
      Models::CreateAutoRepairPolicyResponse createAutoRepairPolicy(const string &clusterId, const Models::CreateAutoRepairPolicyRequest &request);

      /**
       * @summary Creates an automatic scaling configuration that enables the system to automatically increase or decrease compute resources based on configured elastic scaling rules to meet cluster workload requirements. During the creation procedure, you can specify elastic scaling metrics and thresholds, scale-out order, and cool-down periods.
       *
       * @param request CreateAutoscalingConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAutoscalingConfigResponse
       */
      Models::CreateAutoscalingConfigResponse createAutoscalingConfigWithOptions(const string &ClusterId, const Models::CreateAutoscalingConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an automatic scaling configuration that enables the system to automatically increase or decrease compute resources based on configured elastic scaling rules to meet cluster workload requirements. During the creation procedure, you can specify elastic scaling metrics and thresholds, scale-out order, and cool-down periods.
       *
       * @param request CreateAutoscalingConfigRequest
       * @return CreateAutoscalingConfigResponse
       */
      Models::CreateAutoscalingConfigResponse createAutoscalingConfig(const string &ClusterId, const Models::CreateAutoscalingConfigRequest &request);

      /**
       * @summary Creates an ACK cluster, including an ACK managed cluster, an ACK Serverless cluster, an ACK Edge cluster, or a registered cluster. When you create a cluster, you configure cluster information, cluster components, and ACK-related cloud resources.
       *
       * @description ### Generate OpenAPI request parameters in the console
       * When you call the CreateCluster operation, if the call fails due to an incorrect combination of request parameters, you can generate the required combination of request parameters in the console. Perform the following steps:
       * 1. Log on to the [Container Service console](https://csnew.console.aliyun.com). In the left-side navigation pane, choose **Clusters**.
       * 1. On the **Clusters** page, click **Cluster Templates**.
       * 1. In the dialog box, select the type of cluster that you want to create, click Create, and then configure the cluster information on the cluster configuration page.
       * 1. After the configuration is complete, on the **Confirm Configuration** page, click **Equivalent Code** in the upper-right corner. The dialog box displays the combination of parameters required to create the cluster. You can copy and use it.
       * >Notice: Starting July 4, 2026, some request parameters will no longer take effect. For details about the changes and replacement parameters, see [Announcement on changes to request and response parameters of ACK cluster management OpenAPI operations and OpenAPI deprecation](https://help.aliyun.com/document_detail/2932733.html).</notice>
       *
       * @param request CreateClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createClusterWithOptions(const Models::CreateClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ACK cluster, including an ACK managed cluster, an ACK Serverless cluster, an ACK Edge cluster, or a registered cluster. When you create a cluster, you configure cluster information, cluster components, and ACK-related cloud resources.
       *
       * @description ### Generate OpenAPI request parameters in the console
       * When you call the CreateCluster operation, if the call fails due to an incorrect combination of request parameters, you can generate the required combination of request parameters in the console. Perform the following steps:
       * 1. Log on to the [Container Service console](https://csnew.console.aliyun.com). In the left-side navigation pane, choose **Clusters**.
       * 1. On the **Clusters** page, click **Cluster Templates**.
       * 1. In the dialog box, select the type of cluster that you want to create, click Create, and then configure the cluster information on the cluster configuration page.
       * 1. After the configuration is complete, on the **Confirm Configuration** page, click **Equivalent Code** in the upper-right corner. The dialog box displays the combination of parameters required to create the cluster. You can copy and use it.
       * >Notice: Starting July 4, 2026, some request parameters will no longer take effect. For details about the changes and replacement parameters, see [Announcement on changes to request and response parameters of ACK cluster management OpenAPI operations and OpenAPI deprecation](https://help.aliyun.com/document_detail/2932733.html).</notice>
       *
       * @param request CreateClusterRequest
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createCluster(const Models::CreateClusterRequest &request);

      /**
       * @summary Initiates a cluster diagnosis.
       *
       * @param request CreateClusterDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterDiagnosisResponse
       */
      Models::CreateClusterDiagnosisResponse createClusterDiagnosisWithOptions(const string &clusterId, const Models::CreateClusterDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a cluster diagnosis.
       *
       * @param request CreateClusterDiagnosisRequest
       * @return CreateClusterDiagnosisResponse
       */
      Models::CreateClusterDiagnosisResponse createClusterDiagnosis(const string &clusterId, const Models::CreateClusterDiagnosisRequest &request);

      /**
       * @summary Creates a cluster inspection configuration.
       *
       * @param request CreateClusterInspectConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterInspectConfigResponse
       */
      Models::CreateClusterInspectConfigResponse createClusterInspectConfigWithOptions(const string &clusterId, const Models::CreateClusterInspectConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cluster inspection configuration.
       *
       * @param request CreateClusterInspectConfigRequest
       * @return CreateClusterInspectConfigResponse
       */
      Models::CreateClusterInspectConfigResponse createClusterInspectConfig(const string &clusterId, const Models::CreateClusterInspectConfigRequest &request);

      /**
       * @summary Creates a node pool for a cluster. A node pool is a logical collection of nodes that share the same property. It allows unified management and O&M of nodes, such as node upgrades and elastic scaling. You can further use the automated O&M capabilities of node pools to reduce O&M costs. These features include automatic repair of OS CVE vulnerabilities, automatic recovery of faulty nodes, and automatic upgrades of kubelet and containerd versions. You can invoke CreateClusterNodePool to create a node pool for a cluster.
       *
       * @param request CreateClusterNodePoolRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterNodePoolResponse
       */
      Models::CreateClusterNodePoolResponse createClusterNodePoolWithOptions(const string &ClusterId, const Models::CreateClusterNodePoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a node pool for a cluster. A node pool is a logical collection of nodes that share the same property. It allows unified management and O&M of nodes, such as node upgrades and elastic scaling. You can further use the automated O&M capabilities of node pools to reduce O&M costs. These features include automatic repair of OS CVE vulnerabilities, automatic recovery of faulty nodes, and automatic upgrades of kubelet and containerd versions. You can invoke CreateClusterNodePool to create a node pool for a cluster.
       *
       * @param request CreateClusterNodePoolRequest
       * @return CreateClusterNodePoolResponse
       */
      Models::CreateClusterNodePoolResponse createClusterNodePool(const string &ClusterId, const Models::CreateClusterNodePoolRequest &request);

      /**
       * @deprecated OpenAPI CreateKubernetesTrigger is deprecated
       *
       * @summary Creates a trigger for an application.
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
       * @summary Creates a trigger for an application.
       *
       * @param request CreateKubernetesTriggerRequest
       * @return CreateKubernetesTriggerResponse
       */
      Models::CreateKubernetesTriggerResponse createKubernetesTrigger(const Models::CreateKubernetesTriggerRequest &request);

      /**
       * @summary Installs node components.
       *
       * @param request CreateNodePoolComponentInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNodePoolComponentInstancesResponse
       */
      Models::CreateNodePoolComponentInstancesResponse createNodePoolComponentInstancesWithOptions(const string &clusterId, const string &nodepoolId, const Models::CreateNodePoolComponentInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs node components.
       *
       * @param request CreateNodePoolComponentInstancesRequest
       * @return CreateNodePoolComponentInstancesResponse
       */
      Models::CreateNodePoolComponentInstancesResponse createNodePoolComponentInstances(const string &clusterId, const string &nodepoolId, const Models::CreateNodePoolComponentInstancesRequest &request);

      /**
       * @summary Creates an orchestration template. An orchestration template defines and describes a set of Kubernetes cluster resources in a declarative way to specify how applications should run or be configured. You can use these templates to automate the deployment and management of resources in a cluster, such as Pods, Services, Deployments, ConfigMaps, and PersistentVolumes. You can call the CreateTemplate operation to create an orchestration template.
       *
       * @param request CreateTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplateWithOptions(const Models::CreateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an orchestration template. An orchestration template defines and describes a set of Kubernetes cluster resources in a declarative way to specify how applications should run or be configured. You can use these templates to automate the deployment and management of resources in a cluster, such as Pods, Services, Deployments, ConfigMaps, and PersistentVolumes. You can call the CreateTemplate operation to create an orchestration template.
       *
       * @param request CreateTemplateRequest
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplate(const Models::CreateTemplateRequest &request);

      /**
       * @summary Creates a trigger for a cluster application to redeploy pods when specified conditions are met.
       *
       * @description > Creating a trigger only supports the redeployment of pods.
       *
       * @param request CreateTriggerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTriggerResponse
       */
      Models::CreateTriggerResponse createTriggerWithOptions(const string &clusterId, const Models::CreateTriggerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a trigger for a cluster application to redeploy pods when specified conditions are met.
       *
       * @description > Creating a trigger only supports the redeployment of pods.
       *
       * @param request CreateTriggerRequest
       * @return CreateTriggerResponse
       */
      Models::CreateTriggerResponse createTrigger(const string &clusterId, const Models::CreateTriggerRequest &request);

      /**
       * @summary Deletes ACK alert contacts.
       *
       * @param tmpReq DeleteAlertContactRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertContactResponse
       */
      Models::DeleteAlertContactResponse deleteAlertContactWithOptions(const Models::DeleteAlertContactRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes ACK alert contacts.
       *
       * @param request DeleteAlertContactRequest
       * @return DeleteAlertContactResponse
       */
      Models::DeleteAlertContactResponse deleteAlertContact(const Models::DeleteAlertContactRequest &request);

      /**
       * @summary Deletes ACK alert contact groups.
       *
       * @param tmpReq DeleteAlertContactGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertContactGroupResponse
       */
      Models::DeleteAlertContactGroupResponse deleteAlertContactGroupWithOptions(const Models::DeleteAlertContactGroupRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes ACK alert contact groups.
       *
       * @param request DeleteAlertContactGroupRequest
       * @return DeleteAlertContactGroupResponse
       */
      Models::DeleteAlertContactGroupResponse deleteAlertContactGroup(const Models::DeleteAlertContactGroupRequest &request);

      /**
       * @summary Deletes a self-healing rule.
       *
       * @description >Notice: This API is not yet available. Stay tuned.</notice>
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoRepairPolicyResponse
       */
      Models::DeleteAutoRepairPolicyResponse deleteAutoRepairPolicyWithOptions(const string &clusterId, const string &policyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a self-healing rule.
       *
       * @description >Notice: This API is not yet available. Stay tuned.</notice>
       *
       * @return DeleteAutoRepairPolicyResponse
       */
      Models::DeleteAutoRepairPolicyResponse deleteAutoRepairPolicy(const string &clusterId, const string &policyId);

      /**
       * @summary Deletes a cluster and specifies whether to delete or retain the associated resources of the cluster. Before you delete a cluster, manually clean up workloads such as Deployments, StatefulSets, Jobs, and CronJobs. Otherwise, the cluster deletion may fail.
       *
       * @description Risk warnings:
       * - Subscription ECS instances and Lingjun computing nodes in the cluster cannot be automatically released. To avoid unnecessary fees, perform manual release. For more information, see Cluster deletion and node release rules.
       * - Subscription APIServer SLB resources cannot be automatically released. To avoid unnecessary fees, perform manual release.
       * - VPCs, vSwitches, security groups, and RAM roles are retained by default if they are occupied by other resources and cannot be deleted. Perform manual release.
       * - Elastic Container Instance (ECI) resources created by using virtual nodes are automatically released.
       * - Some cloud resources created by the cluster are not automatically released when the cluster is deleted. Billing continues for these resources after the cluster is deleted. Release or retain them based on your actual needs. These resources include: Simple Log Service (SLS) projects automatically created by the cluster, and cloud disks purchased by using dynamic volumes.
       *
       * @param tmpReq DeleteClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteClusterWithOptions(const string &ClusterId, const Models::DeleteClusterRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cluster and specifies whether to delete or retain the associated resources of the cluster. Before you delete a cluster, manually clean up workloads such as Deployments, StatefulSets, Jobs, and CronJobs. Otherwise, the cluster deletion may fail.
       *
       * @description Risk warnings:
       * - Subscription ECS instances and Lingjun computing nodes in the cluster cannot be automatically released. To avoid unnecessary fees, perform manual release. For more information, see Cluster deletion and node release rules.
       * - Subscription APIServer SLB resources cannot be automatically released. To avoid unnecessary fees, perform manual release.
       * - VPCs, vSwitches, security groups, and RAM roles are retained by default if they are occupied by other resources and cannot be deleted. Perform manual release.
       * - Elastic Container Instance (ECI) resources created by using virtual nodes are automatically released.
       * - Some cloud resources created by the cluster are not automatically released when the cluster is deleted. Billing continues for these resources after the cluster is deleted. Release or retain them based on your actual needs. These resources include: Simple Log Service (SLS) projects automatically created by the cluster, and cloud disks purchased by using dynamic volumes.
       *
       * @param request DeleteClusterRequest
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteCluster(const string &ClusterId, const Models::DeleteClusterRequest &request);

      /**
       * @summary Deletes the cluster inspection configuration.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterInspectConfigResponse
       */
      Models::DeleteClusterInspectConfigResponse deleteClusterInspectConfigWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the cluster inspection configuration.
       *
       * @return DeleteClusterInspectConfigResponse
       */
      Models::DeleteClusterInspectConfigResponse deleteClusterInspectConfig(const string &clusterId);

      /**
       * @summary Deletes an unused node pool. When a node pool is deleted, all pods on its nodes are deleted, which may trigger rescheduling. If rescheduling fails, your services may be affected. Ensure that the cluster has sufficient resources for rescheduling.
       *
       * @param request DeleteClusterNodepoolRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterNodepoolResponse
       */
      Models::DeleteClusterNodepoolResponse deleteClusterNodepoolWithOptions(const string &ClusterId, const string &NodepoolId, const Models::DeleteClusterNodepoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an unused node pool. When a node pool is deleted, all pods on its nodes are deleted, which may trigger rescheduling. If rescheduling fails, your services may be affected. Ensure that the cluster has sufficient resources for rescheduling.
       *
       * @param request DeleteClusterNodepoolRequest
       * @return DeleteClusterNodepoolResponse
       */
      Models::DeleteClusterNodepoolResponse deleteClusterNodepool(const string &ClusterId, const string &NodepoolId, const Models::DeleteClusterNodepoolRequest &request);

      /**
       * @summary Removes nodes from a cluster. You can specify whether to release the associated ECS instances and whether to automatically drain the nodes during the removal process.
       *
       * @description - When removing nodes, perform standard operations by using this API operation or the [Container Service console](https://cs.console.aliyun.com). Do not manually remove nodes by running the `kubectl delete node` command.
       * - Do not actively release nodes or remove instances in the ECS or Auto Scaling console (or by calling related API operations), or passively release nodes because a subscription instance expires. In these cases, the nodes are directly stopped and automatically removed from the Container Service console.
       * - If the expected number of nodes is configured for the node pool, the node pool automatically scales out other instances based on the corresponding configurations to maintain the expected number of nodes.
       * - Removing nodes involves pod migration, which may affect your services. Perform this operation during off-peak hours. Unexpected risks may occur during the operation. Back up your data in advance.
       * - When you remove nodes, ACK executes a drain operation. Ensure that other nodes in the cluster have sufficient resources to prevent scheduling failures of application pods.
       * - Check the node affinity rules and scheduling policies of the pods on the nodes to be removed. Ensure that the pods can be scheduled to other nodes after the nodes are removed.
       *
       * @param request DeleteClusterNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterNodesResponse
       */
      Models::DeleteClusterNodesResponse deleteClusterNodesWithOptions(const string &ClusterId, const Models::DeleteClusterNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes nodes from a cluster. You can specify whether to release the associated ECS instances and whether to automatically drain the nodes during the removal process.
       *
       * @description - When removing nodes, perform standard operations by using this API operation or the [Container Service console](https://cs.console.aliyun.com). Do not manually remove nodes by running the `kubectl delete node` command.
       * - Do not actively release nodes or remove instances in the ECS or Auto Scaling console (or by calling related API operations), or passively release nodes because a subscription instance expires. In these cases, the nodes are directly stopped and automatically removed from the Container Service console.
       * - If the expected number of nodes is configured for the node pool, the node pool automatically scales out other instances based on the corresponding configurations to maintain the expected number of nodes.
       * - Removing nodes involves pod migration, which may affect your services. Perform this operation during off-peak hours. Unexpected risks may occur during the operation. Back up your data in advance.
       * - When you remove nodes, ACK executes a drain operation. Ensure that other nodes in the cluster have sufficient resources to prevent scheduling failures of application pods.
       * - Check the node affinity rules and scheduling policies of the pods on the nodes to be removed. Ensure that the pods can be scheduled to other nodes after the nodes are removed.
       *
       * @param request DeleteClusterNodesRequest
       * @return DeleteClusterNodesResponse
       */
      Models::DeleteClusterNodesResponse deleteClusterNodes(const string &ClusterId, const Models::DeleteClusterNodesRequest &request);

      /**
       * @deprecated OpenAPI DeleteKubernetesTrigger is deprecated
       *
       * @summary Deletes an application trigger based on the application trigger ID.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKubernetesTriggerResponse
       */
      Models::DeleteKubernetesTriggerResponse deleteKubernetesTriggerWithOptions(const string &Id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteKubernetesTrigger is deprecated
       *
       * @summary Deletes an application trigger based on the application trigger ID.
       *
       * @return DeleteKubernetesTriggerResponse
       */
      Models::DeleteKubernetesTriggerResponse deleteKubernetesTrigger(const string &Id);

      /**
       * @summary Uninstalls a node component.
       *
       * @param tmpReq DeleteNodePoolComponentInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNodePoolComponentInstanceResponse
       */
      Models::DeleteNodePoolComponentInstanceResponse deleteNodePoolComponentInstanceWithOptions(const string &clusterId, const string &nodepoolId, const string &name, const Models::DeleteNodePoolComponentInstanceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls a node component.
       *
       * @param request DeleteNodePoolComponentInstanceRequest
       * @return DeleteNodePoolComponentInstanceResponse
       */
      Models::DeleteNodePoolComponentInstanceResponse deleteNodePoolComponentInstance(const string &clusterId, const string &nodepoolId, const string &name, const Models::DeleteNodePoolComponentInstanceRequest &request);

      /**
       * @summary Deletes a policy rule instance in a specified cluster.
       *
       * @param request DeletePolicyInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyInstanceResponse
       */
      Models::DeletePolicyInstanceResponse deletePolicyInstanceWithOptions(const string &clusterId, const string &policyName, const Models::DeletePolicyInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a policy rule instance in a specified cluster.
       *
       * @param request DeletePolicyInstanceRequest
       * @return DeletePolicyInstanceResponse
       */
      Models::DeletePolicyInstanceResponse deletePolicyInstance(const string &clusterId, const string &policyName, const Models::DeletePolicyInstanceRequest &request);

      /**
       * @summary Deletes an orchestration template that is no longer needed.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplateWithOptions(const string &TemplateId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an orchestration template that is no longer needed.
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
       * @summary Creates and deploys a policy instance in an ACK cluster by specifying the security policy type, governance action (alert or block), and namespace scope. You can call this operation to deploy a policy rule instance in a specified namespace of a cluster.
       *
       * @param request DeployPolicyInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployPolicyInstanceResponse
       */
      Models::DeployPolicyInstanceResponse deployPolicyInstanceWithOptions(const string &clusterId, const string &policyName, const Models::DeployPolicyInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and deploys a policy instance in an ACK cluster by specifying the security policy type, governance action (alert or block), and namespace scope. You can call this operation to deploy a policy rule instance in a specified namespace of a cluster.
       *
       * @param request DeployPolicyInstanceRequest
       * @return DeployPolicyInstanceResponse
       */
      Models::DeployPolicyInstanceResponse deployPolicyInstance(const string &clusterId, const string &policyName, const Models::DeployPolicyInstanceRequest &request);

      /**
       * @summary Queries the information about a target component based on parameters such as the specified region, cluster type, cluster profile, cluster version, and component name. The information includes whether the component is managed, the component category, the supported custom parameter schema, the compatible operating system architecture, and the minimum cluster version required by the component version.
       *
       * @param request DescribeAddonRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAddonResponse
       */
      Models::DescribeAddonResponse describeAddonWithOptions(const string &addonName, const Models::DescribeAddonRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a target component based on parameters such as the specified region, cluster type, cluster profile, cluster version, and component name. The information includes whether the component is managed, the component category, the supported custom parameter schema, the compatible operating system architecture, and the minimum cluster version required by the component version.
       *
       * @param request DescribeAddonRequest
       * @return DescribeAddonResponse
       */
      Models::DescribeAddonResponse describeAddon(const string &addonName, const Models::DescribeAddonRequest &request);

      /**
       * @deprecated OpenAPI DescribeAddons is deprecated
       *
       * @summary Queries the details of all components supported by the platform.
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
       * @summary Queries the details of all components supported by the platform.
       *
       * @param request DescribeAddonsRequest
       * @return DescribeAddonsResponse
       */
      Models::DescribeAddonsResponse describeAddons(const Models::DescribeAddonsRequest &request);

      /**
       * @summary Queries self-healing rules.
       *
       * @description >Notice: This API is not yet available. Please stay tuned.</notice>
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoRepairPolicyResponse
       */
      Models::DescribeAutoRepairPolicyResponse describeAutoRepairPolicyWithOptions(const string &clusterId, const string &policyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries self-healing rules.
       *
       * @description >Notice: This API is not yet available. Please stay tuned.</notice>
       *
       * @return DescribeAutoRepairPolicyResponse
       */
      Models::DescribeAutoRepairPolicyResponse describeAutoRepairPolicy(const string &clusterId, const string &policyId);

      /**
       * @deprecated OpenAPI DescribeClusterAddonInstance is deprecated
       *
       * @summary Queries the version, state, and configuration of installed cluster add-ons.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterAddonInstanceResponse
       */
      Models::DescribeClusterAddonInstanceResponse describeClusterAddonInstanceWithOptions(const string &ClusterID, const string &AddonName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeClusterAddonInstance is deprecated
       *
       * @summary Queries the version, state, and configuration of installed cluster add-ons.
       *
       * @return DescribeClusterAddonInstanceResponse
       */
      Models::DescribeClusterAddonInstanceResponse describeClusterAddonInstance(const string &ClusterID, const string &AddonName);

      /**
       * @deprecated OpenAPI DescribeClusterAddonMetadata is deprecated
       *
       * @summary Queries the metadata of a specified add-on version available for a specific cluster, including the add-on version and configurable parameters.
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
       * @summary Queries the metadata of a specified add-on version available for a specific cluster, including the add-on version and configurable parameters.
       *
       * @param request DescribeClusterAddonMetadataRequest
       * @return DescribeClusterAddonMetadataResponse
       */
      Models::DescribeClusterAddonMetadataResponse describeClusterAddonMetadata(const string &clusterId, const string &componentId, const Models::DescribeClusterAddonMetadataRequest &request);

      /**
       * @deprecated OpenAPI DescribeClusterAddonUpgradeStatus is deprecated
       *
       * @summary Queries the upgrade status of cluster add-ons.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterAddonUpgradeStatusResponse
       */
      Models::DescribeClusterAddonUpgradeStatusResponse describeClusterAddonUpgradeStatusWithOptions(const string &ClusterId, const string &ComponentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeClusterAddonUpgradeStatus is deprecated
       *
       * @summary Queries the upgrade status of cluster add-ons.
       *
       * @return DescribeClusterAddonUpgradeStatusResponse
       */
      Models::DescribeClusterAddonUpgradeStatusResponse describeClusterAddonUpgradeStatus(const string &ClusterId, const string &ComponentId);

      /**
       * @deprecated OpenAPI DescribeClusterAddonsUpgradeStatus is deprecated
       *
       * @summary Queries the upgrade status of components by name.
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
       * @summary Queries the upgrade status of components by name.
       *
       * @param request DescribeClusterAddonsUpgradeStatusRequest
       * @return DescribeClusterAddonsUpgradeStatusResponse
       */
      Models::DescribeClusterAddonsUpgradeStatusResponse describeClusterAddonsUpgradeStatus(const string &ClusterId, const Models::DescribeClusterAddonsUpgradeStatusRequest &request);

      /**
       * @deprecated OpenAPI DescribeClusterAddonsVersion is deprecated
       *
       * @summary Queries the details of all installed components in a cluster by cluster ID.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterAddonsVersionResponse
       */
      Models::DescribeClusterAddonsVersionResponse describeClusterAddonsVersionWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeClusterAddonsVersion is deprecated
       *
       * @summary Queries the details of all installed components in a cluster by cluster ID.
       *
       * @return DescribeClusterAddonsVersionResponse
       */
      Models::DescribeClusterAddonsVersionResponse describeClusterAddonsVersion(const string &ClusterId);

      /**
       * @summary Queries the script for adding existing nodes to a cluster node pool. If you need to add existing ECS instances to an ACK cluster as worker nodes or re-add removed worker nodes to a node pool, you can manually add the existing nodes to a node pool. You can call this operation to obtain the script for adding existing nodes.
       *
       * @param request DescribeClusterAttachScriptsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterAttachScriptsResponse
       */
      Models::DescribeClusterAttachScriptsResponse describeClusterAttachScriptsWithOptions(const string &ClusterId, const Models::DescribeClusterAttachScriptsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the script for adding existing nodes to a cluster node pool. If you need to add existing ECS instances to an ACK cluster as worker nodes or re-add removed worker nodes to a node pool, you can manually add the existing nodes to a node pool. You can call this operation to obtain the script for adding existing nodes.
       *
       * @param request DescribeClusterAttachScriptsRequest
       * @return DescribeClusterAttachScriptsResponse
       */
      Models::DescribeClusterAttachScriptsResponse describeClusterAttachScripts(const string &ClusterId, const Models::DescribeClusterAttachScriptsRequest &request);

      /**
       * @summary Queries the details of a specified cluster by cluster ID.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterDetailResponse
       */
      Models::DescribeClusterDetailResponse describeClusterDetailWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified cluster by cluster ID.
       *
       * @return DescribeClusterDetailResponse
       */
      Models::DescribeClusterDetailResponse describeClusterDetail(const string &ClusterId);

      /**
       * @summary Queries the events of a specified cluster. Cluster operation events include cluster creation, cluster modification, node pool creation, node pool scale-out, add-on installation, and cluster upgrade. You can call the DescribeClusterEvents operation to retrieve a list of events that occurred in the specified cluster and query event details, including the event level, event status, and event time.
       *
       * @param request DescribeClusterEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterEventsResponse
       */
      Models::DescribeClusterEventsResponse describeClusterEventsWithOptions(const string &ClusterId, const Models::DescribeClusterEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the events of a specified cluster. Cluster operation events include cluster creation, cluster modification, node pool creation, node pool scale-out, add-on installation, and cluster upgrade. You can call the DescribeClusterEvents operation to retrieve a list of events that occurred in the specified cluster and query event details, including the event level, event status, and event time.
       *
       * @param request DescribeClusterEventsRequest
       * @return DescribeClusterEventsResponse
       */
      Models::DescribeClusterEventsResponse describeClusterEvents(const string &ClusterId, const Models::DescribeClusterEventsRequest &request);

      /**
       * @summary Retrieves the log data of a cluster for root cause analysis and tracing when cluster issues occur.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterLogsResponse
       */
      Models::DescribeClusterLogsResponse describeClusterLogsWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the log data of a cluster for root cause analysis and tracing when cluster issues occur.
       *
       * @return DescribeClusterLogsResponse
       */
      Models::DescribeClusterLogsResponse describeClusterLogs(const string &ClusterId);

      /**
       * @summary Queries the configuration of a specified node pool in a cluster.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterNodePoolDetailResponse
       */
      Models::DescribeClusterNodePoolDetailResponse describeClusterNodePoolDetailWithOptions(const string &ClusterId, const string &NodepoolId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of a specified node pool in a cluster.
       *
       * @return DescribeClusterNodePoolDetailResponse
       */
      Models::DescribeClusterNodePoolDetailResponse describeClusterNodePoolDetail(const string &ClusterId, const string &NodepoolId);

      /**
       * @summary Queries all node pools in a cluster.
       *
       * @description - When you remove a node, perform standard operations by using this API operation or the [Container Service console](https://cs.console.aliyun.com). Do not manually remove nodes by running the `kubectl delete node` command.
       * - Do not proactively release nodes or remove instances in the ECS or Auto Scaling (ESS) console or by calling related API operations, or passively release nodes when a subscription instance expires. In these cases, the nodes are directly shut down and automatically removed from the Container Service console.
       * - If the expected number of nodes is configured for a node pool, the node pool automatically scales out other instances based on the configurations to maintain the expected number of nodes.
       * - Removing a node involves pod migration and may affect your services. Perform this operation during off-peak hours. Unexpected risks may occur during the operation. Back up your data in advance.
       * - When a node is removed, ACK performs a drain operation. Make sure that other nodes in the cluster have sufficient resources to prevent application pods from failing to be scheduled.
       * - Check the node affinity rules and scheduling policies of the pods on the node to be removed. Make sure that the pods can be scheduled to other nodes after the node is removed.
       *
       * @param request DescribeClusterNodePoolsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterNodePoolsResponse
       */
      Models::DescribeClusterNodePoolsResponse describeClusterNodePoolsWithOptions(const string &ClusterId, const Models::DescribeClusterNodePoolsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all node pools in a cluster.
       *
       * @description - When you remove a node, perform standard operations by using this API operation or the [Container Service console](https://cs.console.aliyun.com). Do not manually remove nodes by running the `kubectl delete node` command.
       * - Do not proactively release nodes or remove instances in the ECS or Auto Scaling (ESS) console or by calling related API operations, or passively release nodes when a subscription instance expires. In these cases, the nodes are directly shut down and automatically removed from the Container Service console.
       * - If the expected number of nodes is configured for a node pool, the node pool automatically scales out other instances based on the configurations to maintain the expected number of nodes.
       * - Removing a node involves pod migration and may affect your services. Perform this operation during off-peak hours. Unexpected risks may occur during the operation. Back up your data in advance.
       * - When a node is removed, ACK performs a drain operation. Make sure that other nodes in the cluster have sufficient resources to prevent application pods from failing to be scheduled.
       * - Check the node affinity rules and scheduling policies of the pods on the node to be removed. Make sure that the pods can be scheduled to other nodes after the node is removed.
       *
       * @param request DescribeClusterNodePoolsRequest
       * @return DescribeClusterNodePoolsResponse
       */
      Models::DescribeClusterNodePoolsResponse describeClusterNodePools(const string &ClusterId, const Models::DescribeClusterNodePoolsRequest &request);

      /**
       * @summary Queries a list of nodes that meet specified conditions.
       *
       * @param request DescribeClusterNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterNodesResponse
       */
      Models::DescribeClusterNodesResponse describeClusterNodesWithOptions(const string &ClusterId, const Models::DescribeClusterNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of nodes that meet specified conditions.
       *
       * @param request DescribeClusterNodesRequest
       * @return DescribeClusterNodesResponse
       */
      Models::DescribeClusterNodesResponse describeClusterNodes(const string &ClusterId, const Models::DescribeClusterNodesRequest &request);

      /**
       * @summary Queries the associated resources of a specified cluster. When you use Container Service for Kubernetes (ACK), you also use resources of other associated Alibaba Cloud services. You can call this operation to query the associated resources of a specified cluster, such as VPCs and SLB instances. To query node pools or nodes, call the DescribeClusterNodePools or DescribeClusterNodes operation.
       *
       * @param request DescribeClusterResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterResourcesResponse
       */
      Models::DescribeClusterResourcesResponse describeClusterResourcesWithOptions(const string &ClusterId, const Models::DescribeClusterResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the associated resources of a specified cluster. When you use Container Service for Kubernetes (ACK), you also use resources of other associated Alibaba Cloud services. You can call this operation to query the associated resources of a specified cluster, such as VPCs and SLB instances. To query node pools or nodes, call the DescribeClusterNodePools or DescribeClusterNodes operation.
       *
       * @param request DescribeClusterResourcesRequest
       * @return DescribeClusterResourcesResponse
       */
      Models::DescribeClusterResourcesResponse describeClusterResources(const string &ClusterId, const Models::DescribeClusterResourcesRequest &request);

      /**
       * @summary Queries a list of tasks in a cluster.
       *
       * @param request DescribeClusterTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterTasksResponse
       */
      Models::DescribeClusterTasksResponse describeClusterTasksWithOptions(const string &clusterId, const Models::DescribeClusterTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tasks in a cluster.
       *
       * @param request DescribeClusterTasksRequest
       * @return DescribeClusterTasksResponse
       */
      Models::DescribeClusterTasksResponse describeClusterTasks(const string &clusterId, const Models::DescribeClusterTasksRequest &request);

      /**
       * @summary Retrieves the kubeconfig of a cluster.
       *
       * @description - The default validity period of a certificate issued for a kubeconfig is three years. Within 180 days before expiration, you can obtain a refreshed kubeconfig after rotation through the Container Service console or the Retrieve cluster kubeconfig API operation. The validity period of the new kubeconfig certificate remains three years. The old kubeconfig credentials remain valid until the certificate expires. Obtain the rotated credentials promptly based on the kubeconfig expiration time displayed in the console or returned by the API operation.
       * - Properly manage the kubeconfig credentials for cluster management, and revoke them promptly when they are no longer needed to avoid security risks such as data leaks caused by kubeconfig leaks.
       *
       * @param request DescribeClusterUserKubeconfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterUserKubeconfigResponse
       */
      Models::DescribeClusterUserKubeconfigResponse describeClusterUserKubeconfigWithOptions(const string &ClusterId, const Models::DescribeClusterUserKubeconfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the kubeconfig of a cluster.
       *
       * @description - The default validity period of a certificate issued for a kubeconfig is three years. Within 180 days before expiration, you can obtain a refreshed kubeconfig after rotation through the Container Service console or the Retrieve cluster kubeconfig API operation. The validity period of the new kubeconfig certificate remains three years. The old kubeconfig credentials remain valid until the certificate expires. Obtain the rotated credentials promptly based on the kubeconfig expiration time displayed in the console or returned by the API operation.
       * - Properly manage the kubeconfig credentials for cluster management, and revoke them promptly when they are no longer needed to avoid security risks such as data leaks caused by kubeconfig leaks.
       *
       * @param request DescribeClusterUserKubeconfigRequest
       * @return DescribeClusterUserKubeconfigResponse
       */
      Models::DescribeClusterUserKubeconfigResponse describeClusterUserKubeconfig(const string &ClusterId, const Models::DescribeClusterUserKubeconfigRequest &request);

      /**
       * @deprecated OpenAPI DescribeClusterV2UserKubeconfig is deprecated
       *
       * @summary Retrieves the kubeconfig of a cluster.
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
       * @summary Retrieves the kubeconfig of a cluster.
       *
       * @param request DescribeClusterV2UserKubeconfigRequest
       * @return DescribeClusterV2UserKubeconfigResponse
       */
      Models::DescribeClusterV2UserKubeconfigResponse describeClusterV2UserKubeconfig(const string &ClusterId, const Models::DescribeClusterV2UserKubeconfigRequest &request);

      /**
       * @summary Invokes the DescribeClusterVuls operation to query the security vulnerability details of a cluster by cluster ID, including the vulnerability name, type, and severity level. Regularly scan clusters for security vulnerabilities to improve cluster security.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterVulsResponse
       */
      Models::DescribeClusterVulsResponse describeClusterVulsWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the DescribeClusterVuls operation to query the security vulnerability details of a cluster by cluster ID, including the vulnerability name, type, and severity level. Regularly scan clusters for security vulnerabilities to improve cluster security.
       *
       * @return DescribeClusterVulsResponse
       */
      Models::DescribeClusterVulsResponse describeClusterVuls(const string &clusterId);

      /**
       * @deprecated OpenAPI DescribeClusters is deprecated
       *
       * @summary Queries all clusters created in Container Service, including Swarm and Kubernetes clusters.
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
       * @summary Queries all clusters created in Container Service, including Swarm and Kubernetes clusters.
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
       * @summary Invokes the DescribeClustersV1 operation to query a list of conditional ACK clusters, such as those with a specified cluster type and cluster specifications, under the current account.
       *
       * @param request DescribeClustersV1Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClustersV1Response
       */
      Models::DescribeClustersV1Response describeClustersV1WithOptions(const Models::DescribeClustersV1Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the DescribeClustersV1 operation to query a list of conditional ACK clusters, such as those with a specified cluster type and cluster specifications, under the current account.
       *
       * @param request DescribeClustersV1Request
       * @return DescribeClustersV1Response
       */
      Models::DescribeClustersV1Response describeClustersV1(const Models::DescribeClustersV1Request &request);

      /**
       * @summary Queries the details of cluster operation events, such as cluster creation, cluster modification, node pool creation, node pool scale-out, add-on installation, and cluster upgrades. You can call this operation to retrieve detailed information about specific events, including the event level, status, and occurrence time.
       *
       * @param request DescribeEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEventsWithOptions(const Models::DescribeEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of cluster operation events, such as cluster creation, cluster modification, node pool creation, node pool scale-out, add-on installation, and cluster upgrades. You can call this operation to retrieve detailed information about specific events, including the event level, status, and occurrence time.
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
       * @summary Queries the agent configuration of a registered cluster based on the cluster ID.
       *
       * @description For more information about cluster registration, see [Register an external Kubernetes cluster](https://help.aliyun.com/document_detail/121053.html).
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
       * @summary Queries the agent configuration of a registered cluster based on the cluster ID.
       *
       * @description For more information about cluster registration, see [Register an external Kubernetes cluster](https://help.aliyun.com/document_detail/121053.html).
       *
       * @param request DescribeExternalAgentRequest
       * @return DescribeExternalAgentResponse
       */
      Models::DescribeExternalAgentResponse describeExternalAgent(const string &ClusterId, const Models::DescribeExternalAgentRequest &request);

      /**
       * @summary Queries the details of Kubernetes versions, including version information, release and expiration dates, compatible operating systems, and used runtimes.
       *
       * @param request DescribeKubernetesVersionMetadataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKubernetesVersionMetadataResponse
       */
      Models::DescribeKubernetesVersionMetadataResponse describeKubernetesVersionMetadataWithOptions(const Models::DescribeKubernetesVersionMetadataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of Kubernetes versions, including version information, release and expiration dates, compatible operating systems, and used runtimes.
       *
       * @param request DescribeKubernetesVersionMetadataRequest
       * @return DescribeKubernetesVersionMetadataResponse
       */
      Models::DescribeKubernetesVersionMetadataResponse describeKubernetesVersionMetadata(const Models::DescribeKubernetesVersionMetadataRequest &request);

      /**
       * @summary Invokes the DescribeNodePoolVuls API operation to query the details of security vulnerability in a node pool based on the node pool ID, including vulnerability names and levels. Regularly scan node pools for security vulnerability to improve cluster security.
       *
       * @param request DescribeNodePoolVulsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNodePoolVulsResponse
       */
      Models::DescribeNodePoolVulsResponse describeNodePoolVulsWithOptions(const string &clusterId, const string &nodepoolId, const Models::DescribeNodePoolVulsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the DescribeNodePoolVuls API operation to query the details of security vulnerability in a node pool based on the node pool ID, including vulnerability names and levels. Regularly scan node pools for security vulnerability to improve cluster security.
       *
       * @param request DescribeNodePoolVulsRequest
       * @return DescribeNodePoolVulsResponse
       */
      Models::DescribeNodePoolVulsResponse describeNodePoolVuls(const string &clusterId, const string &nodepoolId, const Models::DescribeNodePoolVulsRequest &request);

      /**
       * @summary Queries the list of policy governance rule libraries for container security policies in ACK clusters. These policies provide various built-in rule libraries, including Compliance, Infra, K8s-general, and PSP, to ensure secure container operations in production environments.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePoliciesResponse
       */
      Models::DescribePoliciesResponse describePoliciesWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of policy governance rule libraries for container security policies in ACK clusters. These policies provide various built-in rule libraries, including Compliance, Infra, K8s-general, and PSP, to ensure secure container operations in production environments.
       *
       * @return DescribePoliciesResponse
       */
      Models::DescribePoliciesResponse describePolicies();

      /**
       * @summary Queries the details of a specified policy governance rule. ACK cluster container security policies provide a comprehensive built-in rule library that includes Compliance, Infra, K8s-general, and PSP to ensure the secure operation of containers in production environments. You can call this operation to query details such as the rule template description, rule governance action, and rule governance severity.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolicyDetailsResponse
       */
      Models::DescribePolicyDetailsResponse describePolicyDetailsWithOptions(const string &policyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified policy governance rule. ACK cluster container security policies provide a comprehensive built-in rule library that includes Compliance, Infra, K8s-general, and PSP to ensure the secure operation of containers in production environments. You can call this operation to query details such as the rule template description, rule governance action, and rule governance severity.
       *
       * @return DescribePolicyDetailsResponse
       */
      Models::DescribePolicyDetailsResponse describePolicyDetails(const string &policyName);

      /**
       * @summary Queries the details of policy governance in a specified ACK cluster. Container security policies for ACK clusters provide a rich built-in rule library, including Compliance, Infra, K8s-general, and PSP, to ensure the secure operation of containers in production environments. You can call this operation to obtain information such as the counts of enabled policies at different severity levels, policy governance audit logs, and interception and alerting status.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolicyGovernanceInClusterResponse
       */
      Models::DescribePolicyGovernanceInClusterResponse describePolicyGovernanceInClusterWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of policy governance in a specified ACK cluster. Container security policies for ACK clusters provide a rich built-in rule library, including Compliance, Infra, K8s-general, and PSP, to ensure the secure operation of containers in production environments. You can call this operation to obtain information such as the counts of enabled policies at different severity levels, policy governance audit logs, and interception and alerting status.
       *
       * @return DescribePolicyGovernanceInClusterResponse
       */
      Models::DescribePolicyGovernanceInClusterResponse describePolicyGovernanceInCluster(const string &clusterId);

      /**
       * @summary Queries the details of specified policy rule instances in an ACK cluster, such as the policy description and governance level. You can select a security policy type, configure related enforcement actions and scopes, and create and deploy a policy instance in the cluster.
       *
       * @param request DescribePolicyInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolicyInstancesResponse
       */
      Models::DescribePolicyInstancesResponse describePolicyInstancesWithOptions(const string &clusterId, const Models::DescribePolicyInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of specified policy rule instances in an ACK cluster, such as the policy description and governance level. You can select a security policy type, configure related enforcement actions and scopes, and create and deploy a policy instance in the cluster.
       *
       * @param request DescribePolicyInstancesRequest
       * @return DescribePolicyInstancesResponse
       */
      Models::DescribePolicyInstancesResponse describePolicyInstances(const string &clusterId, const Models::DescribePolicyInstancesRequest &request);

      /**
       * @summary Queries the deployment status of instances for different policy types in a cluster, including the number of enabled instances for each policy rule and the number of enabled policy types at different governance levels.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolicyInstancesStatusResponse
       */
      Models::DescribePolicyInstancesStatusResponse describePolicyInstancesStatusWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the deployment status of instances for different policy types in a cluster, including the number of enabled instances for each policy rule and the number of enabled policy types at different governance levels.
       *
       * @return DescribePolicyInstancesStatusResponse
       */
      Models::DescribePolicyInstancesStatusResponse describePolicyInstancesStatus(const string &clusterId);

      /**
       * @summary Queries a list of regions.
       *
       * @param request DescribeRegionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of regions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries whether deletion protection is enabled for specified resources in a cluster. Currently, supported resources include namespaces and services.
       *
       * @param request DescribeResourcesDeleteProtectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourcesDeleteProtectionResponse
       */
      Models::DescribeResourcesDeleteProtectionResponse describeResourcesDeleteProtectionWithOptions(const string &ClusterId, const string &ResourceType, const Models::DescribeResourcesDeleteProtectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether deletion protection is enabled for specified resources in a cluster. Currently, supported resources include namespaces and services.
       *
       * @param request DescribeResourcesDeleteProtectionRequest
       * @return DescribeResourcesDeleteProtectionResponse
       */
      Models::DescribeResourcesDeleteProtectionResponse describeResourcesDeleteProtection(const string &ClusterId, const string &ResourceType, const Models::DescribeResourcesDeleteProtectionRequest &request);

      /**
       * @summary Issues or retrieves the KubeConfig credentials for a specified Resource Access Management (RAM) user or RAM role within an Alibaba Cloud account. As an administrator responsible for cluster permission management, you can use an Alibaba Cloud account to issue KubeConfig credentials that contain identity information and are used to connect to an ACK cluster. You can invoke the DescribeSubaccountK8sClusterUserConfig operation to issue or obtain the KubeConfig for any RAM user or role within the account.
       *
       * @description Only an Alibaba Cloud account can call this operation.
       *
       * @param request DescribeSubaccountK8sClusterUserConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubaccountK8sClusterUserConfigResponse
       */
      Models::DescribeSubaccountK8sClusterUserConfigResponse describeSubaccountK8sClusterUserConfigWithOptions(const string &ClusterId, const string &Uid, const Models::DescribeSubaccountK8sClusterUserConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Issues or retrieves the KubeConfig credentials for a specified Resource Access Management (RAM) user or RAM role within an Alibaba Cloud account. As an administrator responsible for cluster permission management, you can use an Alibaba Cloud account to issue KubeConfig credentials that contain identity information and are used to connect to an ACK cluster. You can invoke the DescribeSubaccountK8sClusterUserConfig operation to issue or obtain the KubeConfig for any RAM user or role within the account.
       *
       * @description Only an Alibaba Cloud account can call this operation.
       *
       * @param request DescribeSubaccountK8sClusterUserConfigRequest
       * @return DescribeSubaccountK8sClusterUserConfigResponse
       */
      Models::DescribeSubaccountK8sClusterUserConfigResponse describeSubaccountK8sClusterUserConfig(const string &ClusterId, const string &Uid, const Models::DescribeSubaccountK8sClusterUserConfigRequest &request);

      /**
       * @summary Queries the details of a cluster task, such as the task type, running status, and running stage.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTaskInfoResponse
       */
      Models::DescribeTaskInfoResponse describeTaskInfoWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a cluster task, such as the task type, running status, and running stage.
       *
       * @return DescribeTaskInfoResponse
       */
      Models::DescribeTaskInfoResponse describeTaskInfo(const string &taskId);

      /**
       * @summary Queries the details of a specified orchestration template, including access permissions, YAML content, and tags. An orchestration template defines and describes a set of Kubernetes cluster resources declaratively to specify how an application should run or be configured.
       *
       * @param request DescribeTemplateAttributeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplateAttributeResponse
       */
      Models::DescribeTemplateAttributeResponse describeTemplateAttributeWithOptions(const string &TemplateId, const Models::DescribeTemplateAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified orchestration template, including access permissions, YAML content, and tags. An orchestration template defines and describes a set of Kubernetes cluster resources declaratively to specify how an application should run or be configured.
       *
       * @param request DescribeTemplateAttributeRequest
       * @return DescribeTemplateAttributeResponse
       */
      Models::DescribeTemplateAttributeResponse describeTemplateAttribute(const string &TemplateId, const Models::DescribeTemplateAttributeRequest &request);

      /**
       * @summary Queries a list of orchestration templates and retrieves their details, including access permissions, YAML content, and tags. An orchestration template defines and describes a set of Kubernetes cluster resources in a declarative manner to specify how an application should run or be configured.
       *
       * @param request DescribeTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplatesResponse
       */
      Models::DescribeTemplatesResponse describeTemplatesWithOptions(const Models::DescribeTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of orchestration templates and retrieves their details, including access permissions, YAML content, and tags. An orchestration template defines and describes a set of Kubernetes cluster resources in a declarative manner to specify how an application should run or be configured.
       *
       * @param request DescribeTemplatesRequest
       * @return DescribeTemplatesResponse
       */
      Models::DescribeTemplatesResponse describeTemplates(const Models::DescribeTemplatesRequest &request);

      /**
       * @summary Queries triggers that meet specified conditions.
       *
       * @param request DescribeTriggerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTriggerResponse
       */
      Models::DescribeTriggerResponse describeTriggerWithOptions(const string &clusterId, const Models::DescribeTriggerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries triggers that meet specified conditions.
       *
       * @param request DescribeTriggerRequest
       * @return DescribeTriggerResponse
       */
      Models::DescribeTriggerResponse describeTrigger(const string &clusterId, const Models::DescribeTriggerRequest &request);

      /**
       * @summary Queries the Kubernetes namespaces in an ACK cluster for which the current Resource Access Management (RAM) user or role has been granted RBAC access permissions. In ACK clusters, Kubernetes namespaces keep the access permissions and resources of cluster visitors logically isolated. Users granted RBAC permissions only for a specific namespace cannot access resources in other namespaces of the cluster. You can invoke the DescribeUserClusterNamespaces operation to view the RBAC access permissions granted to the current Resource Access Management (RAM) user or role for resources in specific namespaces within a specified ACK cluster.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserClusterNamespacesResponse
       */
      Models::DescribeUserClusterNamespacesResponse describeUserClusterNamespacesWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Kubernetes namespaces in an ACK cluster for which the current Resource Access Management (RAM) user or role has been granted RBAC access permissions. In ACK clusters, Kubernetes namespaces keep the access permissions and resources of cluster visitors logically isolated. Users granted RBAC permissions only for a specific namespace cannot access resources in other namespaces of the cluster. You can invoke the DescribeUserClusterNamespaces operation to view the RBAC access permissions granted to the current Resource Access Management (RAM) user or role for resources in specific namespaces within a specified ACK cluster.
       *
       * @return DescribeUserClusterNamespacesResponse
       */
      Models::DescribeUserClusterNamespacesResponse describeUserClusterNamespaces(const string &ClusterId);

      /**
       * @summary Queries the details of cluster permissions granted to a Resource Access Management (RAM) user or role. In an ACK cluster, you can create and specify different access permissions for different RAM users or roles to ensure secure access control and resource isolation. You can invoke the DescribeUserPermission operation to query the details of cluster permissions granted to a RAM user or role, including accessible resources, permission scope, preset role types, and permission sources.
       *
       * @description **Precautions**:
       * - If the account that invokes this API operation is a Resource Access Management (RAM) user or RAM role, the API operation returns only the permissions for the clusters on which the caller has RBAC administrator permissions. To list the permissions for all clusters, the caller must have RBAC administrator permissions on all clusters.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserPermissionResponse
       */
      Models::DescribeUserPermissionResponse describeUserPermissionWithOptions(const string &uid, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of cluster permissions granted to a Resource Access Management (RAM) user or role. In an ACK cluster, you can create and specify different access permissions for different RAM users or roles to ensure secure access control and resource isolation. You can invoke the DescribeUserPermission operation to query the details of cluster permissions granted to a RAM user or role, including accessible resources, permission scope, preset role types, and permission sources.
       *
       * @description **Precautions**:
       * - If the account that invokes this API operation is a Resource Access Management (RAM) user or RAM role, the API operation returns only the permissions for the clusters on which the caller has RBAC administrator permissions. To list the permissions for all clusters, the caller must have RBAC administrator permissions on all clusters.
       *
       * @return DescribeUserPermissionResponse
       */
      Models::DescribeUserPermissionResponse describeUserPermission(const string &uid);

      /**
       * @summary Queries the quotas for ACK clusters, node pools, and nodes. To increase a quota, go to Quota Center.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserQuotaResponse
       */
      Models::DescribeUserQuotaResponse describeUserQuotaWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quotas for ACK clusters, node pools, and nodes. To increase a quota, go to Quota Center.
       *
       * @return DescribeUserQuotaResponse
       */
      Models::DescribeUserQuotaResponse describeUserQuota();

      /**
       * @summary Scans Elastic Compute Service (ECS) nodes for security vulnerability on a regular basis and provides corresponding fix suggestions and methods. Fixing certain Common Vulnerabilities and Exposures (CVEs) may require restarting nodes. Ensure that the cluster has sufficient nodes for draining operations. You can invoke the FixNodePoolVuls operation to fix node vulnerabilities in a specified node pool of a cluster to improve cluster security.
       *
       * @description - CVE compatibility is guaranteed by Security Center. Ensure that you have activated the Ultimate Edition of Security Center or [purchased the vulnerability fix feature (pay-as-you-go)](https://help.aliyun.com/document_detail/42308.html).
       * - Fixing certain CVEs requires restarting nodes. Container Service performs draining operations on a node before it is restarted. Ensure that the cluster has sufficient idle resources for draining, such as scaling out the node pool in advance.
       * - Pay attention to the compatibility between your applications and CVEs. CVE fixes are performed in batches. During the fix process, you can pause or cancel the task. After you pause or cancel the task, the batches to which fix tasks have been delivered continue to run until completion. The delivery of fix tasks to undelivered batches is paused or canceled.
       *
       * @param request FixNodePoolVulsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return FixNodePoolVulsResponse
       */
      Models::FixNodePoolVulsResponse fixNodePoolVulsWithOptions(const string &clusterId, const string &nodepoolId, const Models::FixNodePoolVulsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scans Elastic Compute Service (ECS) nodes for security vulnerability on a regular basis and provides corresponding fix suggestions and methods. Fixing certain Common Vulnerabilities and Exposures (CVEs) may require restarting nodes. Ensure that the cluster has sufficient nodes for draining operations. You can invoke the FixNodePoolVuls operation to fix node vulnerabilities in a specified node pool of a cluster to improve cluster security.
       *
       * @description - CVE compatibility is guaranteed by Security Center. Ensure that you have activated the Ultimate Edition of Security Center or [purchased the vulnerability fix feature (pay-as-you-go)](https://help.aliyun.com/document_detail/42308.html).
       * - Fixing certain CVEs requires restarting nodes. Container Service performs draining operations on a node before it is restarted. Ensure that the cluster has sufficient idle resources for draining, such as scaling out the node pool in advance.
       * - Pay attention to the compatibility between your applications and CVEs. CVE fixes are performed in batches. During the fix process, you can pause or cancel the task. After you pause or cancel the task, the batches to which fix tasks have been delivered continue to run until completion. The delivery of fix tasks to undelivered batches is paused or canceled.
       *
       * @param request FixNodePoolVulsRequest
       * @return FixNodePoolVulsResponse
       */
      Models::FixNodePoolVulsResponse fixNodePoolVuls(const string &clusterId, const string &nodepoolId, const Models::FixNodePoolVulsRequest &request);

      /**
       * @summary Queries the details of a specified component in a cluster, including the version, parameter settings, and logging status of the component instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterAddonInstanceResponse
       */
      Models::GetClusterAddonInstanceResponse getClusterAddonInstanceWithOptions(const string &clusterId, const string &instanceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified component in a cluster, including the version, parameter settings, and logging status of the component instance.
       *
       * @return GetClusterAddonInstanceResponse
       */
      Models::GetClusterAddonInstanceResponse getClusterAddonInstance(const string &clusterId, const string &instanceName);

      /**
       * @summary Queries whether the API server audit feature is enabled for a cluster and the Simple Log Service (SLS) project associated with the API server audit logs.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterAuditProjectResponse
       */
      Models::GetClusterAuditProjectResponse getClusterAuditProjectWithOptions(const string &clusterid, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the API server audit feature is enabled for a cluster and the Simple Log Service (SLS) project associated with the API server audit logs.
       *
       * @return GetClusterAuditProjectResponse
       */
      Models::GetClusterAuditProjectResponse getClusterAuditProject(const string &clusterid);

      /**
       * @summary Queries the details of a specific check task based on the cluster ID and check task ID. The intelligent O&M platform for containers provides comprehensive Kubernetes cluster check capabilities, including cluster upgrade checks, cluster migration checks, component installation checks, component upgrade checks, and node pool checks. The response includes information such as the check status, specific check items, and the creation and completion time of the check.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterCheckResponse
       */
      Models::GetClusterCheckResponse getClusterCheckWithOptions(const string &clusterId, const string &checkId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific check task based on the cluster ID and check task ID. The intelligent O&M platform for containers provides comprehensive Kubernetes cluster check capabilities, including cluster upgrade checks, cluster migration checks, component installation checks, component upgrade checks, and node pool checks. The response includes information such as the check status, specific check items, and the creation and completion time of the check.
       *
       * @return GetClusterCheckResponse
       */
      Models::GetClusterCheckResponse getClusterCheck(const string &clusterId, const string &checkId);

      /**
       * @summary Retrieves the cluster diagnostic check items.
       *
       * @param request GetClusterDiagnosisCheckItemsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterDiagnosisCheckItemsResponse
       */
      Models::GetClusterDiagnosisCheckItemsResponse getClusterDiagnosisCheckItemsWithOptions(const string &clusterId, const string &diagnosisId, const Models::GetClusterDiagnosisCheckItemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the cluster diagnostic check items.
       *
       * @param request GetClusterDiagnosisCheckItemsRequest
       * @return GetClusterDiagnosisCheckItemsResponse
       */
      Models::GetClusterDiagnosisCheckItemsResponse getClusterDiagnosisCheckItems(const string &clusterId, const string &diagnosisId, const Models::GetClusterDiagnosisCheckItemsRequest &request);

      /**
       * @summary Retrieves the cluster diagnosis results.
       *
       * @param request GetClusterDiagnosisResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterDiagnosisResultResponse
       */
      Models::GetClusterDiagnosisResultResponse getClusterDiagnosisResultWithOptions(const string &clusterId, const string &diagnosisId, const Models::GetClusterDiagnosisResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the cluster diagnosis results.
       *
       * @param request GetClusterDiagnosisResultRequest
       * @return GetClusterDiagnosisResultResponse
       */
      Models::GetClusterDiagnosisResultResponse getClusterDiagnosisResult(const string &clusterId, const string &diagnosisId, const Models::GetClusterDiagnosisResultRequest &request);

      /**
       * @summary Retrieves the cluster inspection configuration.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterInspectConfigResponse
       */
      Models::GetClusterInspectConfigResponse getClusterInspectConfigWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the cluster inspection configuration.
       *
       * @return GetClusterInspectConfigResponse
       */
      Models::GetClusterInspectConfigResponse getClusterInspectConfig(const string &clusterId);

      /**
       * @summary Retrieves the details of a cluster inspection report.
       *
       * @param request GetClusterInspectReportDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterInspectReportDetailResponse
       */
      Models::GetClusterInspectReportDetailResponse getClusterInspectReportDetailWithOptions(const string &clusterId, const string &reportId, const Models::GetClusterInspectReportDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a cluster inspection report.
       *
       * @param request GetClusterInspectReportDetailRequest
       * @return GetClusterInspectReportDetailResponse
       */
      Models::GetClusterInspectReportDetailResponse getClusterInspectReportDetail(const string &clusterId, const string &reportId, const Models::GetClusterInspectReportDetailRequest &request);

      /**
       * @deprecated OpenAPI GetKubernetesTrigger is deprecated
       *
       * @summary Queries the triggers of an application based on the application name.
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
       * @summary Queries the triggers of an application based on the application name.
       *
       * @param request GetKubernetesTriggerRequest
       * @return GetKubernetesTriggerResponse
       */
      Models::GetKubernetesTriggerResponse getKubernetesTrigger(const string &ClusterId, const Models::GetKubernetesTriggerRequest &request);

      /**
       * @deprecated OpenAPI GetUpgradeStatus is deprecated
       *
       * @summary Queries the upgrade status of a cluster by cluster ID.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUpgradeStatusResponse
       */
      Models::GetUpgradeStatusResponse getUpgradeStatusWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetUpgradeStatus is deprecated
       *
       * @summary Queries the upgrade status of a cluster by cluster ID.
       *
       * @return GetUpgradeStatusResponse
       */
      Models::GetUpgradeStatusResponse getUpgradeStatus(const string &ClusterId);

      /**
       * @summary Updates the RBAC access permissions of a Resource Access Management (RAM) user or RAM role for a cluster. By default, RAM users or roles that are not the cluster creator and have not been granted permissions at all cluster dimensions do not have any RBAC permissions in the cluster. You can call the GrantPermissions operation to update the RBAC access permissions of the RAM user or role, including the accessible resources, the scope of the permissions, and the preset role types, to better manage secure access control in cluster management.
       *
       * @description - If the account that calls this API is a RAM user, make sure that the account has the permissions to modify the RBAC authorization information of other RAM users or RAM roles. Otherwise, the API returns the `StatusForbidden` or `ForbiddenGrantPermissions` error code. For more information, see [How a RAM user grants RBAC permissions to other RAM users](https://help.aliyun.com/document_detail/119035.html).
       * - The operation to fully update the RBAC authorization information of a RAM user or RAM role overwrites the existing cluster permissions of the target RAM user or RAM role. The request must include all permission configurations that you want to grant to the target RAM user or RAM role.
       *
       * @param request GrantPermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantPermissionsResponse
       */
      Models::GrantPermissionsResponse grantPermissionsWithOptions(const string &uid, const Models::GrantPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the RBAC access permissions of a Resource Access Management (RAM) user or RAM role for a cluster. By default, RAM users or roles that are not the cluster creator and have not been granted permissions at all cluster dimensions do not have any RBAC permissions in the cluster. You can call the GrantPermissions operation to update the RBAC access permissions of the RAM user or role, including the accessible resources, the scope of the permissions, and the preset role types, to better manage secure access control in cluster management.
       *
       * @description - If the account that calls this API is a RAM user, make sure that the account has the permissions to modify the RBAC authorization information of other RAM users or RAM roles. Otherwise, the API returns the `StatusForbidden` or `ForbiddenGrantPermissions` error code. For more information, see [How a RAM user grants RBAC permissions to other RAM users](https://help.aliyun.com/document_detail/119035.html).
       * - The operation to fully update the RBAC authorization information of a RAM user or RAM role overwrites the existing cluster permissions of the target RAM user or RAM role. The request must include all permission configurations that you want to grant to the target RAM user or RAM role.
       *
       * @param request GrantPermissionsRequest
       * @return GrantPermissionsResponse
       */
      Models::GrantPermissionsResponse grantPermissions(const string &uid, const Models::GrantPermissionsRequest &request);

      /**
       * @summary Hibernates a cluster.
       *
       * @param request HibernateClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return HibernateClusterResponse
       */
      Models::HibernateClusterResponse hibernateClusterWithOptions(const string &clusterId, const Models::HibernateClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Hibernates a cluster.
       *
       * @param request HibernateClusterRequest
       * @return HibernateClusterResponse
       */
      Models::HibernateClusterResponse hibernateCluster(const string &clusterId, const Models::HibernateClusterRequest &request);

      /**
       * @summary To enhance Kubernetes capabilities, ACK clusters support various components, such as managed core components, and application, logging and monitoring, networking, storage, and security components. You can call the InstallClusterAddons operation to install components by specifying the component name and version.
       *
       * @param request InstallClusterAddonsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallClusterAddonsResponse
       */
      Models::InstallClusterAddonsResponse installClusterAddonsWithOptions(const string &ClusterId, const Models::InstallClusterAddonsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary To enhance Kubernetes capabilities, ACK clusters support various components, such as managed core components, and application, logging and monitoring, networking, storage, and security components. You can call the InstallClusterAddons operation to install components by specifying the component name and version.
       *
       * @param request InstallClusterAddonsRequest
       * @return InstallClusterAddonsResponse
       */
      Models::InstallClusterAddonsResponse installClusterAddons(const string &ClusterId, const Models::InstallClusterAddonsRequest &request);

      /**
       * @deprecated OpenAPI InstallNodePoolComponents is deprecated
       *
       * @summary Installs node components and allows you to configure the components and specify the nodes on which to install them.
       *
       * @param request InstallNodePoolComponentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallNodePoolComponentsResponse
       */
      Models::InstallNodePoolComponentsResponse installNodePoolComponentsWithOptions(const string &clusterId, const string &nodePoolId, const Models::InstallNodePoolComponentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI InstallNodePoolComponents is deprecated
       *
       * @summary Installs node components and allows you to configure the components and specify the nodes on which to install them.
       *
       * @param request InstallNodePoolComponentsRequest
       * @return InstallNodePoolComponentsResponse
       */
      Models::InstallNodePoolComponentsResponse installNodePoolComponents(const string &clusterId, const string &nodePoolId, const Models::InstallNodePoolComponentsRequest &request);

      /**
       * @summary Initiates an intelligent assistant session run over the AG-UI protocol.
       *
       * @description The standalone native AG-UI API that returns a text/event-stream upon successful stream establishment.
       *
       * @param request InvokeAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeAgentResponse
       */
      FutureGenerator<Models::InvokeAgentResponse> invokeAgentWithSSE(const Models::InvokeAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates an intelligent assistant session run over the AG-UI protocol.
       *
       * @description The standalone native AG-UI API that returns a text/event-stream upon successful stream establishment.
       *
       * @param request InvokeAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeAgentResponse
       */
      Models::InvokeAgentResponse invokeAgentWithOptions(const Models::InvokeAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates an intelligent assistant session run over the AG-UI protocol.
       *
       * @description The standalone native AG-UI API that returns a text/event-stream upon successful stream establishment.
       *
       * @param request InvokeAgentRequest
       * @return InvokeAgentResponse
       */
      Models::InvokeAgentResponse invokeAgent(const Models::InvokeAgentRequest &request);

      /**
       * @summary Queries the list of available add-ons and their details based on parameters such as region, cluster type, cluster profile, and cluster version. The details include whether the add-on is managed, the schema for custom parameters, and compatible operating system architectures.
       *
       * @param request ListAddonsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAddonsResponse
       */
      Models::ListAddonsResponse listAddonsWithOptions(const Models::ListAddonsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of available add-ons and their details based on parameters such as region, cluster type, cluster profile, and cluster version. The details include whether the add-on is managed, the schema for custom parameters, and compatible operating system architectures.
       *
       * @param request ListAddonsRequest
       * @return ListAddonsResponse
       */
      Models::ListAddonsResponse listAddons(const Models::ListAddonsRequest &request);

      /**
       * @summary Retrieves a list of self-healing rules.
       *
       * @description >Notice: This API is not yet available. Stay tuned.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAutoRepairPoliciesResponse
       */
      Models::ListAutoRepairPoliciesResponse listAutoRepairPoliciesWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of self-healing rules.
       *
       * @description >Notice: This API is not yet available. Stay tuned.
       *
       * @return ListAutoRepairPoliciesResponse
       */
      Models::ListAutoRepairPoliciesResponse listAutoRepairPolicies(const string &clusterId);

      /**
       * @summary Queries the resources contained in an installed cluster component instance, including Kubernetes cluster resources and Helm releases.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterAddonInstanceResourcesResponse
       */
      Models::ListClusterAddonInstanceResourcesResponse listClusterAddonInstanceResourcesWithOptions(const string &clusterId, const string &instanceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources contained in an installed cluster component instance, including Kubernetes cluster resources and Helm releases.
       *
       * @return ListClusterAddonInstanceResourcesResponse
       */
      Models::ListClusterAddonInstanceResourcesResponse listClusterAddonInstanceResources(const string &clusterId, const string &instanceName);

      /**
       * @summary Retrieves a list of installed add-on instances in a specified cluster and queries related information about the add-on instances, including the add-on version and status.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterAddonInstancesResponse
       */
      Models::ListClusterAddonInstancesResponse listClusterAddonInstancesWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of installed add-on instances in a specified cluster and queries related information about the add-on instances, including the add-on version and status.
       *
       * @return ListClusterAddonInstancesResponse
       */
      Models::ListClusterAddonInstancesResponse listClusterAddonInstances(const string &clusterId);

      /**
       * @summary Queries the list of cluster checks and related information based on the cluster ID. The container intelligent O&M platform provides comprehensive Kubernetes cluster check capabilities, including cluster upgrade checks, cluster migration checks, component installation checks, component upgrade checks, and node pool checks. The related information includes the check type, status, creation time, and completion time.
       *
       * @param request ListClusterChecksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterChecksResponse
       */
      Models::ListClusterChecksResponse listClusterChecksWithOptions(const string &clusterId, const Models::ListClusterChecksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of cluster checks and related information based on the cluster ID. The container intelligent O&M platform provides comprehensive Kubernetes cluster check capabilities, including cluster upgrade checks, cluster migration checks, component installation checks, component upgrade checks, and node pool checks. The related information includes the check type, status, creation time, and completion time.
       *
       * @param request ListClusterChecksRequest
       * @return ListClusterChecksResponse
       */
      Models::ListClusterChecksResponse listClusterChecks(const string &clusterId, const Models::ListClusterChecksRequest &request);

      /**
       * @summary Retrieves a list of cluster inspection reports.
       *
       * @param request ListClusterInspectReportsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterInspectReportsResponse
       */
      Models::ListClusterInspectReportsResponse listClusterInspectReportsWithOptions(const string &clusterId, const Models::ListClusterInspectReportsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of cluster inspection reports.
       *
       * @param request ListClusterInspectReportsRequest
       * @return ListClusterInspectReportsResponse
       */
      Models::ListClusterInspectReportsResponse listClusterInspectReports(const string &clusterId, const Models::ListClusterInspectReportsRequest &request);

      /**
       * @summary Queries the list and status of KubeConfigs issued to users for a cluster.
       *
       * @description > - To call this operation, you must have the ram:ListUsers and ram:ListRoles permissions.
       * > - To call this operation, you must have the permissions to manage Container Service (CS) (AliyunCSFullAccess).
       *
       * @param request ListClusterKubeconfigStatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterKubeconfigStatesResponse
       */
      Models::ListClusterKubeconfigStatesResponse listClusterKubeconfigStatesWithOptions(const string &ClusterId, const Models::ListClusterKubeconfigStatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list and status of KubeConfigs issued to users for a cluster.
       *
       * @description > - To call this operation, you must have the ram:ListUsers and ram:ListRoles permissions.
       * > - To call this operation, you must have the permissions to manage Container Service (CS) (AliyunCSFullAccess).
       *
       * @param request ListClusterKubeconfigStatesRequest
       * @return ListClusterKubeconfigStatesResponse
       */
      Models::ListClusterKubeconfigStatesResponse listClusterKubeconfigStates(const string &ClusterId, const Models::ListClusterKubeconfigStatesRequest &request);

      /**
       * @summary Queries the status of node components on nodes.
       *
       * @param tmpReq ListNodePoolComponentInstanceNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodePoolComponentInstanceNodesResponse
       */
      Models::ListNodePoolComponentInstanceNodesResponse listNodePoolComponentInstanceNodesWithOptions(const string &clusterId, const string &nodepoolId, const string &name, const Models::ListNodePoolComponentInstanceNodesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of node components on nodes.
       *
       * @param request ListNodePoolComponentInstanceNodesRequest
       * @return ListNodePoolComponentInstanceNodesResponse
       */
      Models::ListNodePoolComponentInstanceNodesResponse listNodePoolComponentInstanceNodes(const string &clusterId, const string &nodepoolId, const string &name, const Models::ListNodePoolComponentInstanceNodesRequest &request);

      /**
       * @summary Queries the list of node component instances.
       *
       * @param request ListNodePoolComponentInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodePoolComponentInstancesResponse
       */
      Models::ListNodePoolComponentInstancesResponse listNodePoolComponentInstancesWithOptions(const string &clusterId, const string &nodepoolId, const Models::ListNodePoolComponentInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of node component instances.
       *
       * @param request ListNodePoolComponentInstancesRequest
       * @return ListNodePoolComponentInstancesResponse
       */
      Models::ListNodePoolComponentInstancesResponse listNodePoolComponentInstances(const string &clusterId, const string &nodepoolId, const Models::ListNodePoolComponentInstancesRequest &request);

      /**
       * @summary Queries the node components that can be installed in a node pool.
       *
       * @param tmpReq ListNodePoolComponentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodePoolComponentsResponse
       */
      Models::ListNodePoolComponentsResponse listNodePoolComponentsWithOptions(const string &clusterId, const Models::ListNodePoolComponentsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the node components that can be installed in a node pool.
       *
       * @param request ListNodePoolComponentsRequest
       * @return ListNodePoolComponentsResponse
       */
      Models::ListNodePoolComponentsResponse listNodePoolComponents(const string &clusterId, const Models::ListNodePoolComponentsRequest &request);

      /**
       * @summary Retrieves the list of automated O&M execution plans.
       *
       * @param request ListOperationPlansRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationPlansResponse
       */
      Models::ListOperationPlansResponse listOperationPlansWithOptions(const Models::ListOperationPlansRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of automated O&M execution plans.
       *
       * @param request ListOperationPlansRequest
       * @return ListOperationPlansResponse
       */
      Models::ListOperationPlansResponse listOperationPlans(const Models::ListOperationPlansRequest &request);

      /**
       * @summary Queries the latest 100 automated O&M execution plans in a specified region. When features such as Auto Mode for intelligent cluster management, automatic cluster upgrades, and automated O&M for node pools are enabled, you can use this operation to query system-generated O&M plans and their execution status, such as cluster upgrades and node pool CVE fixes.
       *
       * @param request ListOperationPlansForRegionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationPlansForRegionResponse
       */
      Models::ListOperationPlansForRegionResponse listOperationPlansForRegionWithOptions(const string &regionId, const Models::ListOperationPlansForRegionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the latest 100 automated O&M execution plans in a specified region. When features such as Auto Mode for intelligent cluster management, automatic cluster upgrades, and automated O&M for node pools are enabled, you can use this operation to query system-generated O&M plans and their execution status, such as cluster upgrades and node pool CVE fixes.
       *
       * @param request ListOperationPlansForRegionRequest
       * @return ListOperationPlansForRegionResponse
       */
      Models::ListOperationPlansForRegionResponse listOperationPlansForRegion(const string &regionId, const Models::ListOperationPlansForRegionRequest &request);

      /**
       * @summary Queries the tag list of clusters. You can add tag key-value pairs to clusters so that developers and O&M engineers can classify and manage clusters more flexibly. This better supports requirements such as monitoring, cost analysis, and tenant isolation. You can call the ListTagResources operation to obtain the list of resource tags and query tag details, such as key-value pairs and associated clusters.
       *
       * @param tmpReq ListTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag list of clusters. You can add tag key-value pairs to clusters so that developers and O&M engineers can classify and manage clusters more flexibly. This better supports requirements such as monitoring, cost analysis, and tenant isolation. You can call the ListTagResources operation to obtain the list of resource tags and query tag details, such as key-value pairs and associated clusters.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the KubeConfig status list for all clusters of the current user.
       *
       * @description > To call this operation, you must have the permissions to manage Container Service for Kubernetes (CS) (AliyunCSFullAccess).
       *
       * @param request ListUserKubeConfigStatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserKubeConfigStatesResponse
       */
      Models::ListUserKubeConfigStatesResponse listUserKubeConfigStatesWithOptions(const string &Uid, const Models::ListUserKubeConfigStatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the KubeConfig status list for all clusters of the current user.
       *
       * @description > To call this operation, you must have the permissions to manage Container Service for Kubernetes (CS) (AliyunCSFullAccess).
       *
       * @param request ListUserKubeConfigStatesRequest
       * @return ListUserKubeConfigStatesResponse
       */
      Models::ListUserKubeConfigStatesResponse listUserKubeConfigStates(const string &Uid, const Models::ListUserKubeConfigStatesRequest &request);

      /**
       * @summary Migrates a cluster.
       *
       * @description After an ACK managed cluster is migrated from the Basic Edition to the Pro Edition, a [cluster management fee](https://help.aliyun.com/document_detail/462278.html) (charged by ACK) is added. The billing of other cloud resources remains unchanged.
       *
       * @param request MigrateClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateClusterResponse
       */
      Models::MigrateClusterResponse migrateClusterWithOptions(const string &clusterId, const Models::MigrateClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates a cluster.
       *
       * @description After an ACK managed cluster is migrated from the Basic Edition to the Pro Edition, a [cluster management fee](https://help.aliyun.com/document_detail/462278.html) (charged by ACK) is added. The billing of other cloud resources remains unchanged.
       *
       * @param request MigrateClusterRequest
       * @return MigrateClusterResponse
       */
      Models::MigrateClusterResponse migrateCluster(const string &clusterId, const Models::MigrateClusterRequest &request);

      /**
       * @summary Modifies a self-healing rule.
       *
       * @description >Notice: This API is not yet available. Stay tuned.
       *
       * @param request ModifyAutoRepairPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAutoRepairPolicyResponse
       */
      Models::ModifyAutoRepairPolicyResponse modifyAutoRepairPolicyWithOptions(const string &clusterId, const string &policyId, const Models::ModifyAutoRepairPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a self-healing rule.
       *
       * @description >Notice: This API is not yet available. Stay tuned.
       *
       * @param request ModifyAutoRepairPolicyRequest
       * @return ModifyAutoRepairPolicyResponse
       */
      Models::ModifyAutoRepairPolicyResponse modifyAutoRepairPolicy(const string &clusterId, const string &policyId, const Models::ModifyAutoRepairPolicyRequest &request);

      /**
       * @summary Modifies the configurations of an ACK cluster.
       *
       * @description <notice>Starting July 4, 2026, the request parameters instance_deletion_protection, ingress_loadbalancer_id, and access_control_list will no longer take effect. For more information about the changes, see [Announcement on changes to request and response parameters of ACK cluster management API operations and API operation deprecation](https://help.aliyun.com/document_detail/2932733.html).</notice>
       *
       * @param request ModifyClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterResponse
       */
      Models::ModifyClusterResponse modifyClusterWithOptions(const string &ClusterId, const Models::ModifyClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of an ACK cluster.
       *
       * @description <notice>Starting July 4, 2026, the request parameters instance_deletion_protection, ingress_loadbalancer_id, and access_control_list will no longer take effect. For more information about the changes, see [Announcement on changes to request and response parameters of ACK cluster management API operations and API operation deprecation](https://help.aliyun.com/document_detail/2932733.html).</notice>
       *
       * @param request ModifyClusterRequest
       * @return ModifyClusterResponse
       */
      Models::ModifyClusterResponse modifyCluster(const string &ClusterId, const Models::ModifyClusterRequest &request);

      /**
       * @summary Modifies the configuration of an installed cluster add-on instance. Modifying the configuration may affect your workloads. Evaluate the impact, perform this operation during off-peak hours, and back up your data in advance.
       *
       * @description You can call this operation to modify the configuration of components in common clusters and the control plane parameter settings of ACK Pro clusters:
       * - You can query the list of configurable parameters for common components by calling the DescribeClusterAddonMetadata API. For details, see [Query cluster component version metadata](https://help.aliyun.com/document_detail/2667944.html).
       * - For the list of configurable parameters for the control plane components of ACK Pro clusters, see [Customize control plane parameter settings for ACK Pro clusters](https://help.aliyun.com/document_detail/199588.html).
       * Modifying the configuration may trigger a new deployment and restart of the component. Evaluate the impact before you proceed.
       *
       * @param request ModifyClusterAddonRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterAddonResponse
       */
      Models::ModifyClusterAddonResponse modifyClusterAddonWithOptions(const string &clusterId, const string &componentId, const Models::ModifyClusterAddonRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an installed cluster add-on instance. Modifying the configuration may affect your workloads. Evaluate the impact, perform this operation during off-peak hours, and back up your data in advance.
       *
       * @description You can call this operation to modify the configuration of components in common clusters and the control plane parameter settings of ACK Pro clusters:
       * - You can query the list of configurable parameters for common components by calling the DescribeClusterAddonMetadata API. For details, see [Query cluster component version metadata](https://help.aliyun.com/document_detail/2667944.html).
       * - For the list of configurable parameters for the control plane components of ACK Pro clusters, see [Customize control plane parameter settings for ACK Pro clusters](https://help.aliyun.com/document_detail/199588.html).
       * Modifying the configuration may trigger a new deployment and restart of the component. Evaluate the impact before you proceed.
       *
       * @param request ModifyClusterAddonRequest
       * @return ModifyClusterAddonResponse
       */
      Models::ModifyClusterAddonResponse modifyClusterAddon(const string &clusterId, const string &componentId, const Models::ModifyClusterAddonRequest &request);

      /**
       * @summary Modifies the configurations of a specified node pool.
       *
       * @description <notice>Starting July 4, 2026, the request parameters instance_deletion_protection, ingress_loadbalancer_id, and access_control_list will no longer take effect. For more information about the changes, see [Announcement on changes to request and response parameters of ACK cluster management API operations and API operation deprecation](https://help.aliyun.com/document_detail/2932733.html).</notice>
       *
       * @param request ModifyClusterNodePoolRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterNodePoolResponse
       */
      Models::ModifyClusterNodePoolResponse modifyClusterNodePoolWithOptions(const string &ClusterId, const string &NodepoolId, const Models::ModifyClusterNodePoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a specified node pool.
       *
       * @description <notice>Starting July 4, 2026, the request parameters instance_deletion_protection, ingress_loadbalancer_id, and access_control_list will no longer take effect. For more information about the changes, see [Announcement on changes to request and response parameters of ACK cluster management API operations and API operation deprecation](https://help.aliyun.com/document_detail/2932733.html).</notice>
       *
       * @param request ModifyClusterNodePoolRequest
       * @return ModifyClusterNodePoolResponse
       */
      Models::ModifyClusterNodePoolResponse modifyClusterNodePool(const string &ClusterId, const string &NodepoolId, const Models::ModifyClusterNodePoolRequest &request);

      /**
       * @summary Updates the tags of a cluster. You can add tag key-value pairs to a cluster so that developers and O&M engineers can classify and manage clusters more flexibly and better support requirements such as monitoring, cost analysis, and tenant isolation.
       *
       * @description - This operation performs a full update. When you call this operation, specify all target tags in the request parameters to prevent existing tags from being lost. For incremental updates, use the [TagResources](https://help.aliyun.com/document_detail/2667969.html) operation to add tags to the cluster.
       *
       * @param request ModifyClusterTagsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterTagsResponse
       */
      Models::ModifyClusterTagsResponse modifyClusterTagsWithOptions(const string &ClusterId, const Models::ModifyClusterTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the tags of a cluster. You can add tag key-value pairs to a cluster so that developers and O&M engineers can classify and manage clusters more flexibly and better support requirements such as monitoring, cost analysis, and tenant isolation.
       *
       * @description - This operation performs a full update. When you call this operation, specify all target tags in the request parameters to prevent existing tags from being lost. For incremental updates, use the [TagResources](https://help.aliyun.com/document_detail/2667969.html) operation to add tags to the cluster.
       *
       * @param request ModifyClusterTagsRequest
       * @return ModifyClusterTagsResponse
       */
      Models::ModifyClusterTagsResponse modifyClusterTags(const string &ClusterId, const Models::ModifyClusterTagsRequest &request);

      /**
       * @summary Modifies the node configurations in a node pool of a cluster, such as kubelet configurations and node rolling update configurations. Modifying node configurations updates the configurations in batches and restarts kubelet, which may affect node and workload operations. Perform this operation during off-peak hours.
       *
       * @description > ACK allows you to modify the kubelet configurations of nodes in a node pool. After the modification, the new configurations automatically take effect on the existing nodes in the node pool and are applied to newly added nodes.
       *
       * @param request ModifyNodePoolNodeConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNodePoolNodeConfigResponse
       */
      Models::ModifyNodePoolNodeConfigResponse modifyNodePoolNodeConfigWithOptions(const string &ClusterId, const string &NodepoolId, const Models::ModifyNodePoolNodeConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the node configurations in a node pool of a cluster, such as kubelet configurations and node rolling update configurations. Modifying node configurations updates the configurations in batches and restarts kubelet, which may affect node and workload operations. Perform this operation during off-peak hours.
       *
       * @description > ACK allows you to modify the kubelet configurations of nodes in a node pool. After the modification, the new configurations automatically take effect on the existing nodes in the node pool and are applied to newly added nodes.
       *
       * @param request ModifyNodePoolNodeConfigRequest
       * @return ModifyNodePoolNodeConfigResponse
       */
      Models::ModifyNodePoolNodeConfigResponse modifyNodePoolNodeConfig(const string &ClusterId, const string &NodepoolId, const Models::ModifyNodePoolNodeConfigRequest &request);

      /**
       * @summary Updates a policy rule instance in a specified cluster. You can modify the governance action, such as alert or block, and the namespace scope of the policy instance.
       *
       * @param request ModifyPolicyInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPolicyInstanceResponse
       */
      Models::ModifyPolicyInstanceResponse modifyPolicyInstanceWithOptions(const string &clusterId, const string &policyName, const Models::ModifyPolicyInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a policy rule instance in a specified cluster. You can modify the governance action, such as alert or block, and the namespace scope of the policy instance.
       *
       * @param request ModifyPolicyInstanceRequest
       * @return ModifyPolicyInstanceResponse
       */
      Models::ModifyPolicyInstanceResponse modifyPolicyInstance(const string &clusterId, const string &policyName, const Models::ModifyPolicyInstanceRequest &request);

      /**
       * @summary Activates Alibaba Cloud Container Service for Kubernetes (ACK) for first-time use.
       *
       * @description - An Alibaba Cloud account can activate the container service ACK.
       * - A Resource Access Management (RAM) user that is granted the AdministratorAccess permission can activate the service.
       *
       * @param request OpenAckServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenAckServiceResponse
       */
      Models::OpenAckServiceResponse openAckServiceWithOptions(const Models::OpenAckServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates Alibaba Cloud Container Service for Kubernetes (ACK) for first-time use.
       *
       * @description - An Alibaba Cloud account can activate the container service ACK.
       * - A Resource Access Management (RAM) user that is granted the AdministratorAccess permission can activate the service.
       *
       * @param request OpenAckServiceRequest
       * @return OpenAckServiceResponse
       */
      Models::OpenAckServiceResponse openAckService(const Models::OpenAckServiceRequest &request);

      /**
       * @deprecated OpenAPI PauseClusterUpgrade is deprecated
       *
       * @summary Pauses a cluster upgrade.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseClusterUpgradeResponse
       */
      Models::PauseClusterUpgradeResponse pauseClusterUpgradeWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI PauseClusterUpgrade is deprecated
       *
       * @summary Pauses a cluster upgrade.
       *
       * @return PauseClusterUpgradeResponse
       */
      Models::PauseClusterUpgradeResponse pauseClusterUpgrade(const string &ClusterId);

      /**
       * @deprecated OpenAPI PauseComponentUpgrade is deprecated
       *
       * @summary Pauses a component upgrade.
       *
       * @description 暂停集群组件的升级任务。
       * 请求说明：该接口为 POST 请求，请求体不可为空，至少需传入空 JSON 对象 `{}`，否则返回 400（Request body can\\"t be empty）。
       * > 该接口已废弃，建议改用 PauseTask 暂停组件升级任务。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseComponentUpgradeResponse
       */
      Models::PauseComponentUpgradeResponse pauseComponentUpgradeWithOptions(const string &clusterid, const string &componentid, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI PauseComponentUpgrade is deprecated
       *
       * @summary Pauses a component upgrade.
       *
       * @description 暂停集群组件的升级任务。
       * 请求说明：该接口为 POST 请求，请求体不可为空，至少需传入空 JSON 对象 `{}`，否则返回 400（Request body can\\"t be empty）。
       * > 该接口已废弃，建议改用 PauseTask 暂停组件升级任务。
       *
       * @return PauseComponentUpgradeResponse
       */
      Models::PauseComponentUpgradeResponse pauseComponentUpgrade(const string &clusterid, const string &componentid);

      /**
       * @summary Pauses a running cluster task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseTaskResponse
       */
      Models::PauseTaskResponse pauseTaskWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses a running cluster task.
       *
       * @return PauseTaskResponse
       */
      Models::PauseTaskResponse pauseTask(const string &taskId);

      /**
       * @deprecated OpenAPI RemoveClusterNodes is deprecated
       *
       * @summary 移除集群节点
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
       * @summary 移除集群节点
       *
       * @param request RemoveClusterNodesRequest
       * @return RemoveClusterNodesResponse
       */
      Models::RemoveClusterNodesResponse removeClusterNodes(const string &ClusterId, const Models::RemoveClusterNodesRequest &request);

      /**
       * @summary Removes nodes from a node pool in a cluster and adjusts the expected number of nodes when the nodes are no longer needed. When removing nodes, you can specify whether to release the Elastic Compute Service (ECS) instances and whether to automatically drain the nodes. Node removal involves pod migration and may affect your services. Perform this operation during off-peak hours and back up your data in advance.
       *
       * @description - Removing nodes involves pod migration and may affect your services. Perform this operation during off-peak hours.
       * - Unexpected risks may occur during the operation. Back up your data in advance.
       * - During the operation, the system sets the nodes to the unschedulable state.
       * - Only worker nodes are removed. Master nodes are not removed.
       * - Even if you choose to release nodes (that is, release_node is set to true), subscription nodes are not released. To release subscription nodes, you must release them in the [ECS console](https://ecs.console.aliyun.com/) after removing the nodes.
       *
       * @param tmpReq RemoveNodePoolNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveNodePoolNodesResponse
       */
      Models::RemoveNodePoolNodesResponse removeNodePoolNodesWithOptions(const string &ClusterId, const string &NodepoolId, const Models::RemoveNodePoolNodesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes nodes from a node pool in a cluster and adjusts the expected number of nodes when the nodes are no longer needed. When removing nodes, you can specify whether to release the Elastic Compute Service (ECS) instances and whether to automatically drain the nodes. Node removal involves pod migration and may affect your services. Perform this operation during off-peak hours and back up your data in advance.
       *
       * @description - Removing nodes involves pod migration and may affect your services. Perform this operation during off-peak hours.
       * - Unexpected risks may occur during the operation. Back up your data in advance.
       * - During the operation, the system sets the nodes to the unschedulable state.
       * - Only worker nodes are removed. Master nodes are not removed.
       * - Even if you choose to release nodes (that is, release_node is set to true), subscription nodes are not released. To release subscription nodes, you must release them in the [ECS console](https://ecs.console.aliyun.com/) after removing the nodes.
       *
       * @param request RemoveNodePoolNodesRequest
       * @return RemoveNodePoolNodesResponse
       */
      Models::RemoveNodePoolNodesResponse removeNodePoolNodes(const string &ClusterId, const string &NodepoolId, const Models::RemoveNodePoolNodesRequest &request);

      /**
       * @summary Repairs a node pool in a cluster.
       *
       * @param request RepairClusterNodePoolRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RepairClusterNodePoolResponse
       */
      Models::RepairClusterNodePoolResponse repairClusterNodePoolWithOptions(const string &clusterId, const string &nodepoolId, const Models::RepairClusterNodePoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Repairs a node pool in a cluster.
       *
       * @param request RepairClusterNodePoolRequest
       * @return RepairClusterNodePoolResponse
       */
      Models::RepairClusterNodePoolResponse repairClusterNodePool(const string &clusterId, const string &nodepoolId, const Models::RepairClusterNodePoolRequest &request);

      /**
       * @deprecated OpenAPI ResumeComponentUpgrade is deprecated
       *
       * @summary Resumes a paused component upgrade task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeComponentUpgradeResponse
       */
      Models::ResumeComponentUpgradeResponse resumeComponentUpgradeWithOptions(const string &clusterid, const string &componentid, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ResumeComponentUpgrade is deprecated
       *
       * @summary Resumes a paused component upgrade task.
       *
       * @return ResumeComponentUpgradeResponse
       */
      Models::ResumeComponentUpgradeResponse resumeComponentUpgrade(const string &clusterid, const string &componentid);

      /**
       * @summary Resumes a paused cluster task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeTaskResponse
       */
      Models::ResumeTaskResponse resumeTaskWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a paused cluster task.
       *
       * @return ResumeTaskResponse
       */
      Models::ResumeTaskResponse resumeTask(const string &taskId);

      /**
       * @deprecated OpenAPI ResumeUpgradeCluster is deprecated
       *
       * @summary Resumes the upgrade of a cluster that is paused during an upgrade based on the cluster ID.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeUpgradeClusterResponse
       */
      Models::ResumeUpgradeClusterResponse resumeUpgradeClusterWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ResumeUpgradeCluster is deprecated
       *
       * @summary Resumes the upgrade of a cluster that is paused during an upgrade based on the cluster ID.
       *
       * @return ResumeUpgradeClusterResponse
       */
      Models::ResumeUpgradeClusterResponse resumeUpgradeCluster(const string &ClusterId);

      /**
       * @summary Revokes the cluster KubeConfig credentials of the current logon Alibaba Cloud account or Resource Access Management (RAM) user. You can invoke the RevokeK8sClusterKubeConfig operation to revoke the credentials. After the revocation succeeds, the cluster generates a new KubeConfig and the original KubeConfig becomes invalid.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeK8sClusterKubeConfigResponse
       */
      Models::RevokeK8sClusterKubeConfigResponse revokeK8sClusterKubeConfigWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the cluster KubeConfig credentials of the current logon Alibaba Cloud account or Resource Access Management (RAM) user. You can invoke the RevokeK8sClusterKubeConfig operation to revoke the credentials. After the revocation succeeds, the cluster generates a new KubeConfig and the original KubeConfig becomes invalid.
       *
       * @return RevokeK8sClusterKubeConfigResponse
       */
      Models::RevokeK8sClusterKubeConfigResponse revokeK8sClusterKubeConfig(const string &ClusterId);

      /**
       * @summary Provides comprehensive Kubernetes cluster check capabilities, including cluster upgrade, cluster migration, component installation, component upgrade, and node pool checks. The container intelligent O&M platform automatically triggers checks before upgrade, migration, or installation operations. You can perform change operations only after the checks pass. You can also manually call the RunClusterCheck operation to perform cluster checks. Regularly check and maintain clusters to prevent security risks.
       *
       * @param request RunClusterCheckRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunClusterCheckResponse
       */
      Models::RunClusterCheckResponse runClusterCheckWithOptions(const string &clusterId, const Models::RunClusterCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides comprehensive Kubernetes cluster check capabilities, including cluster upgrade, cluster migration, component installation, component upgrade, and node pool checks. The container intelligent O&M platform automatically triggers checks before upgrade, migration, or installation operations. You can perform change operations only after the checks pass. You can also manually call the RunClusterCheck operation to perform cluster checks. Regularly check and maintain clusters to prevent security risks.
       *
       * @param request RunClusterCheckRequest
       * @return RunClusterCheckResponse
       */
      Models::RunClusterCheckResponse runClusterCheck(const string &clusterId, const Models::RunClusterCheckRequest &request);

      /**
       * @summary Initiates a cluster inspection and creates an inspection report.
       *
       * @param request RunClusterInspectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunClusterInspectResponse
       */
      Models::RunClusterInspectResponse runClusterInspectWithOptions(const string &clusterId, const Models::RunClusterInspectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a cluster inspection and creates an inspection report.
       *
       * @param request RunClusterInspectRequest
       * @return RunClusterInspectResponse
       */
      Models::RunClusterInspectResponse runClusterInspect(const string &clusterId, const Models::RunClusterInspectRequest &request);

      /**
       * @summary Performs O&M operations on a node.
       *
       * @param request RunNodeOperationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunNodeOperationResponse
       */
      Models::RunNodeOperationResponse runNodeOperationWithOptions(const string &clusterId, const string &nodepoolId, const string &nodeName, const Models::RunNodeOperationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs O&M operations on a node.
       *
       * @param request RunNodeOperationRequest
       * @return RunNodeOperationResponse
       */
      Models::RunNodeOperationResponse runNodeOperation(const string &clusterId, const string &nodepoolId, const string &nodeName, const Models::RunNodeOperationRequest &request);

      /**
       * @summary Scales out a node pool to ensure that the number of nodes is sufficient to support your workloads.
       *
       * @param request ScaleClusterNodePoolRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScaleClusterNodePoolResponse
       */
      Models::ScaleClusterNodePoolResponse scaleClusterNodePoolWithOptions(const string &ClusterId, const string &NodepoolId, const Models::ScaleClusterNodePoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales out a node pool to ensure that the number of nodes is sufficient to support your workloads.
       *
       * @param request ScaleClusterNodePoolRequest
       * @return ScaleClusterNodePoolResponse
       */
      Models::ScaleClusterNodePoolResponse scaleClusterNodePool(const string &ClusterId, const string &NodepoolId, const Models::ScaleClusterNodePoolRequest &request);

      /**
       * @summary 扩容Kubernetes集群
       *
       * @param request ScaleOutClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScaleOutClusterResponse
       */
      Models::ScaleOutClusterResponse scaleOutClusterWithOptions(const string &ClusterId, const Models::ScaleOutClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 扩容Kubernetes集群
       *
       * @param request ScaleOutClusterRequest
       * @return ScaleOutClusterResponse
       */
      Models::ScaleOutClusterResponse scaleOutCluster(const string &ClusterId, const Models::ScaleOutClusterRequest &request);

      /**
       * @summary Invokes the ScanClusterVuls API operation to scan ACK clusters for potential security vulnerabilities, including container workload vulnerabilities, third-party software vulnerabilities, CVE vulnerabilities, WebCMS vulnerabilities, and Windows operating system vulnerabilities. Regularly scan clusters for security vulnerabilities to improve cluster security.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScanClusterVulsResponse
       */
      Models::ScanClusterVulsResponse scanClusterVulsWithOptions(const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the ScanClusterVuls API operation to scan ACK clusters for potential security vulnerabilities, including container workload vulnerabilities, third-party software vulnerabilities, CVE vulnerabilities, WebCMS vulnerabilities, and Windows operating system vulnerabilities. Regularly scan clusters for security vulnerabilities to improve cluster security.
       *
       * @return ScanClusterVulsResponse
       */
      Models::ScanClusterVulsResponse scanClusterVuls(const string &clusterId);

      /**
       * @summary Starts the specified alert rule.
       *
       * @param request StartAlertRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAlertResponse
       */
      Models::StartAlertResponse startAlertWithOptions(const string &ClusterId, const Models::StartAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts the specified alert rule.
       *
       * @param request StartAlertRequest
       * @return StartAlertResponse
       */
      Models::StartAlertResponse startAlert(const string &ClusterId, const Models::StartAlertRequest &request);

      /**
       * @summary Stops an entire alert rule group or a single alert rule in the ACK alert center.
       *
       * @param request StopAlertRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAlertResponse
       */
      Models::StopAlertResponse stopAlertWithOptions(const string &ClusterId, const Models::StopAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an entire alert rule group or a single alert rule in the ACK alert center.
       *
       * @param request StopAlertRequest
       * @return StopAlertResponse
       */
      Models::StopAlertResponse stopAlert(const string &ClusterId, const Models::StopAlertRequest &request);

      /**
       * @summary Synchronizes a cluster node pool, including node pool metadata and information about the nodes in the node pool.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncClusterNodePoolResponse
       */
      Models::SyncClusterNodePoolResponse syncClusterNodePoolWithOptions(const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes a cluster node pool, including node pool metadata and information about the nodes in the node pool.
       *
       * @return SyncClusterNodePoolResponse
       */
      Models::SyncClusterNodePoolResponse syncClusterNodePool(const string &ClusterId);

      /**
       * @summary Adds label key-value pairs to a cluster so that cluster developers or O&M engineers can more flexibly perform categorization and management, and better support requirements such as monitoring, cost analysis, and tenant isolation. You can invoke the TagResources operation to attach labels to a cluster.
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds label key-value pairs to a cluster so that cluster developers or O&M engineers can more flexibly perform categorization and management, and better support requirements such as monitoring, cost analysis, and tenant isolation. You can invoke the TagResources operation to attach labels to a cluster.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Uninstalls specified add-ons from a cluster and specifies whether to delete the associated Alibaba Cloud resources.
       *
       * @param request UnInstallClusterAddonsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnInstallClusterAddonsResponse
       */
      Models::UnInstallClusterAddonsResponse unInstallClusterAddonsWithOptions(const string &ClusterId, const Models::UnInstallClusterAddonsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls specified add-ons from a cluster and specifies whether to delete the associated Alibaba Cloud resources.
       *
       * @param request UnInstallClusterAddonsRequest
       * @return UnInstallClusterAddonsResponse
       */
      Models::UnInstallClusterAddonsResponse unInstallClusterAddons(const string &ClusterId, const Models::UnInstallClusterAddonsRequest &request);

      /**
       * @summary Deletes resource tags when you no longer need the tag key-value pairs of a cluster.
       *
       * @param tmpReq UntagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes resource tags when you no longer need the tag key-value pairs of a cluster.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates the audit log configuration of a specified ACK cluster. You can call this operation to enable or disable the audit log feature, or update the audit log configuration to record requests to the Kubernetes API and their results for tracing cluster operation history and troubleshooting cluster faults.
       *
       * @description Before calling this operation, make sure that you fully understand the billing methods and pricing of <props="china">[Simple Log Service](https://www.aliyun.com/price/product#/sls/detail/sls)<props="intl">[Simple Log Service](https://www.alibabacloud.com/product/log-service/pricing).
       *
       * @param request UpdateClusterAuditLogConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClusterAuditLogConfigResponse
       */
      Models::UpdateClusterAuditLogConfigResponse updateClusterAuditLogConfigWithOptions(const string &clusterid, const Models::UpdateClusterAuditLogConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the audit log configuration of a specified ACK cluster. You can call this operation to enable or disable the audit log feature, or update the audit log configuration to record requests to the Kubernetes API and their results for tracing cluster operation history and troubleshooting cluster faults.
       *
       * @description Before calling this operation, make sure that you fully understand the billing methods and pricing of <props="china">[Simple Log Service](https://www.aliyun.com/price/product#/sls/detail/sls)<props="intl">[Simple Log Service](https://www.alibabacloud.com/product/log-service/pricing).
       *
       * @param request UpdateClusterAuditLogConfigRequest
       * @return UpdateClusterAuditLogConfigResponse
       */
      Models::UpdateClusterAuditLogConfigResponse updateClusterAuditLogConfig(const string &clusterid, const Models::UpdateClusterAuditLogConfigRequest &request);

      /**
       * @summary Updates the cluster inspection configuration.
       *
       * @param request UpdateClusterInspectConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClusterInspectConfigResponse
       */
      Models::UpdateClusterInspectConfigResponse updateClusterInspectConfigWithOptions(const string &clusterId, const Models::UpdateClusterInspectConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the cluster inspection configuration.
       *
       * @param request UpdateClusterInspectConfigRequest
       * @return UpdateClusterInspectConfigResponse
       */
      Models::UpdateClusterInspectConfigResponse updateClusterInspectConfig(const string &clusterId, const Models::UpdateClusterInspectConfigRequest &request);

      /**
       * @summary Sets the specified contact group for an alert rule set in an ACK cluster.
       *
       * @param request UpdateContactGroupForAlertRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContactGroupForAlertResponse
       */
      Models::UpdateContactGroupForAlertResponse updateContactGroupForAlertWithOptions(const string &ClusterId, const Models::UpdateContactGroupForAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the specified contact group for an alert rule set in an ACK cluster.
       *
       * @param request UpdateContactGroupForAlertRequest
       * @return UpdateContactGroupForAlertResponse
       */
      Models::UpdateContactGroupForAlertResponse updateContactGroupForAlert(const string &ClusterId, const Models::UpdateContactGroupForAlertRequest &request);

      /**
       * @summary Modifies the log configurations for control plane components in an ACK managed cluster. ACK managed clusters support collecting control plane component logs and delivering them to your Simple Log Service (SLS) project. Control plane components include core components such as Kube API Server, Kube Scheduler, Kube Controller Manager, and Cloud Controller Manager. You can call the UpdateControlPlaneLog operation to modify the log configurations for control plane components, such as the log retention period and the components to collect.
       *
       * @param request UpdateControlPlaneLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateControlPlaneLogResponse
       */
      Models::UpdateControlPlaneLogResponse updateControlPlaneLogWithOptions(const string &ClusterId, const Models::UpdateControlPlaneLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the log configurations for control plane components in an ACK managed cluster. ACK managed clusters support collecting control plane component logs and delivering them to your Simple Log Service (SLS) project. Control plane components include core components such as Kube API Server, Kube Scheduler, Kube Controller Manager, and Cloud Controller Manager. You can call the UpdateControlPlaneLog operation to modify the log configurations for control plane components, such as the log retention period and the components to collect.
       *
       * @param request UpdateControlPlaneLogRequest
       * @return UpdateControlPlaneLogResponse
       */
      Models::UpdateControlPlaneLogResponse updateControlPlaneLog(const string &ClusterId, const Models::UpdateControlPlaneLogRequest &request);

      /**
       * @summary Updates the expiration time of the KubeConfig file issued for an ACK cluster. By default, the KubeConfig file expires after three years. You can use an Alibaba Cloud account to invoke the UpdateK8sClusterUserConfigExpire operation to specify the expiration time of the KubeConfig file issued for a Resource Access Management (RAM) user or role in an ACK cluster. Valid values: 1 to 876000 hours.
       *
       * @description - Only Alibaba Cloud accounts can call this operation.
       * - If the kubeconfig credentials used for the cluster are revoked, the custom expiration time of the kubeconfig file is also reset. You must call this operation again to specify the expiration time.
       *
       * @param request UpdateK8sClusterUserConfigExpireRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateK8sClusterUserConfigExpireResponse
       */
      Models::UpdateK8sClusterUserConfigExpireResponse updateK8sClusterUserConfigExpireWithOptions(const string &ClusterId, const Models::UpdateK8sClusterUserConfigExpireRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the expiration time of the KubeConfig file issued for an ACK cluster. By default, the KubeConfig file expires after three years. You can use an Alibaba Cloud account to invoke the UpdateK8sClusterUserConfigExpire operation to specify the expiration time of the KubeConfig file issued for a Resource Access Management (RAM) user or role in an ACK cluster. Valid values: 1 to 876000 hours.
       *
       * @description - Only Alibaba Cloud accounts can call this operation.
       * - If the kubeconfig credentials used for the cluster are revoked, the custom expiration time of the kubeconfig file is also reset. You must call this operation again to specify the expiration time.
       *
       * @param request UpdateK8sClusterUserConfigExpireRequest
       * @return UpdateK8sClusterUserConfigExpireResponse
       */
      Models::UpdateK8sClusterUserConfigExpireResponse updateK8sClusterUserConfigExpire(const string &ClusterId, const Models::UpdateK8sClusterUserConfigExpireRequest &request);

      /**
       * @summary Updates the encryption at rest configuration for Secrets in a specified cluster.
       *
       * @description * Do not disable or delete the KMS key used for encryption at rest in the KMS console or by calling API operations while enabling or disabling the feature, or after the feature is enabled. Otherwise, the API server of the cluster becomes unavailable. As a result, objects such as Secrets and ServiceAccounts cannot be retrieved, which affects the normal operation of your applications. For more information, see [Use Alibaba Cloud KMS to encrypt Secrets at rest](https://help.aliyun.com/document_detail/177372.html).
       * * The user or role that calls this API operation must be granted the required cluster RBAC permissions, such as the O&M engineer or administrator permissions. Otherwise, the "ForbiddenUpdateKMSState" error code is returned.
       * * After this API operation is successfully called, the cluster status changes to "Updating". After the update is complete, the cluster status changes back to "Running". You must wait at least 5 minutes after an update is complete before you can call this API operation for the same cluster again. Otherwise, the "409" status code is returned.
       *
       * @param request UpdateKMSEncryptionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKMSEncryptionResponse
       */
      Models::UpdateKMSEncryptionResponse updateKMSEncryptionWithOptions(const string &ClusterId, const Models::UpdateKMSEncryptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the encryption at rest configuration for Secrets in a specified cluster.
       *
       * @description * Do not disable or delete the KMS key used for encryption at rest in the KMS console or by calling API operations while enabling or disabling the feature, or after the feature is enabled. Otherwise, the API server of the cluster becomes unavailable. As a result, objects such as Secrets and ServiceAccounts cannot be retrieved, which affects the normal operation of your applications. For more information, see [Use Alibaba Cloud KMS to encrypt Secrets at rest](https://help.aliyun.com/document_detail/177372.html).
       * * The user or role that calls this API operation must be granted the required cluster RBAC permissions, such as the O&M engineer or administrator permissions. Otherwise, the "ForbiddenUpdateKMSState" error code is returned.
       * * After this API operation is successfully called, the cluster status changes to "Updating". After the update is complete, the cluster status changes back to "Running". You must wait at least 5 minutes after an update is complete before you can call this API operation for the same cluster again. Otherwise, the "409" status code is returned.
       *
       * @param request UpdateKMSEncryptionRequest
       * @return UpdateKMSEncryptionResponse
       */
      Models::UpdateKMSEncryptionResponse updateKMSEncryption(const string &ClusterId, const Models::UpdateKMSEncryptionRequest &request);

      /**
       * @deprecated OpenAPI UpdateNodePoolComponent is deprecated
       *
       * @summary Updates a node component.
       *
       * @param request UpdateNodePoolComponentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNodePoolComponentResponse
       */
      Models::UpdateNodePoolComponentResponse updateNodePoolComponentWithOptions(const string &clusterId, const string &nodepoolId, const Models::UpdateNodePoolComponentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdateNodePoolComponent is deprecated
       *
       * @summary Updates a node component.
       *
       * @param request UpdateNodePoolComponentRequest
       * @return UpdateNodePoolComponentResponse
       */
      Models::UpdateNodePoolComponentResponse updateNodePoolComponent(const string &clusterId, const string &nodepoolId, const Models::UpdateNodePoolComponentRequest &request);

      /**
       * @summary Updates a node component.
       *
       * @param request UpdateNodePoolComponentInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNodePoolComponentInstanceResponse
       */
      Models::UpdateNodePoolComponentInstanceResponse updateNodePoolComponentInstanceWithOptions(const string &clusterId, const string &nodepoolId, const string &name, const Models::UpdateNodePoolComponentInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a node component.
       *
       * @param request UpdateNodePoolComponentInstanceRequest
       * @return UpdateNodePoolComponentInstanceResponse
       */
      Models::UpdateNodePoolComponentInstanceResponse updateNodePoolComponentInstance(const string &clusterId, const string &nodepoolId, const string &name, const Models::UpdateNodePoolComponentInstanceRequest &request);

      /**
       * @summary Updates the deletion protection status of a specified resource. Supported resource types include namespaces and services. You can use this operation to enable deletion protection for namespaces or services that involve critical workloads or sensitive data to prevent accidental deletion and reduce maintenance costs.
       *
       * @description Before you call this operation, you must install or upgrade the security policy component for the cluster. For more information, see [Enable security policy management](https://help.aliyun.com/document_detail/359818.html).
       *
       * @param request UpdateResourcesDeleteProtectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourcesDeleteProtectionResponse
       */
      Models::UpdateResourcesDeleteProtectionResponse updateResourcesDeleteProtectionWithOptions(const string &ClusterId, const Models::UpdateResourcesDeleteProtectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the deletion protection status of a specified resource. Supported resource types include namespaces and services. You can use this operation to enable deletion protection for namespaces or services that involve critical workloads or sensitive data to prevent accidental deletion and reduce maintenance costs.
       *
       * @description Before you call this operation, you must install or upgrade the security policy component for the cluster. For more information, see [Enable security policy management](https://help.aliyun.com/document_detail/359818.html).
       *
       * @param request UpdateResourcesDeleteProtectionRequest
       * @return UpdateResourcesDeleteProtectionResponse
       */
      Models::UpdateResourcesDeleteProtectionResponse updateResourcesDeleteProtection(const string &ClusterId, const Models::UpdateResourcesDeleteProtectionRequest &request);

      /**
       * @summary Updates the configuration of an orchestration template. An orchestration template defines and describes a set of Kubernetes cluster resources declaratively to specify how an application should run or be configured.
       *
       * @param request UpdateTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplateWithOptions(const string &TemplateId, const Models::UpdateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of an orchestration template. An orchestration template defines and describes a set of Kubernetes cluster resources declaratively to specify how an application should run or be configured.
       *
       * @param request UpdateTemplateRequest
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplate(const string &TemplateId, const Models::UpdateTemplateRequest &request);

      /**
       * @summary Updates the Role-Based Access Control (RBAC) access permissions of a Resource Access Management (RAM) user or RAM role in an ACK cluster. By default, RAM users, RAM roles, and users other than the cluster creator do not have any RBAC access permissions in the cluster. You can invoke the UpdateUserPermissions operation to update the RBAC access permissions of a RAM user or RAM role, including the accessible resources, the scope of the permissions, and the preset role types, for better cluster management and secure access control.
       *
       * @description You can update the cluster authorization information of a target Resource Access Management (RAM) user or RAM role by using full update or incremental update. A full update overwrites the existing cluster permissions of the target RAM user or RAM role. The request must include all permission configurations that you want to grant to the target RAM user or RAM role. An incremental update includes add and delete operations. It only modifies the permissions based on the cluster authorization information included in the request and does not affect other cluster permissions of the RAM user or RAM role.
       *
       * @param request UpdateUserPermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserPermissionsResponse
       */
      Models::UpdateUserPermissionsResponse updateUserPermissionsWithOptions(const string &uid, const Models::UpdateUserPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the Role-Based Access Control (RBAC) access permissions of a Resource Access Management (RAM) user or RAM role in an ACK cluster. By default, RAM users, RAM roles, and users other than the cluster creator do not have any RBAC access permissions in the cluster. You can invoke the UpdateUserPermissions operation to update the RBAC access permissions of a RAM user or RAM role, including the accessible resources, the scope of the permissions, and the preset role types, for better cluster management and secure access control.
       *
       * @description You can update the cluster authorization information of a target Resource Access Management (RAM) user or RAM role by using full update or incremental update. A full update overwrites the existing cluster permissions of the target RAM user or RAM role. The request must include all permission configurations that you want to grant to the target RAM user or RAM role. An incremental update includes add and delete operations. It only modifies the permissions based on the cluster authorization information included in the request and does not affect other cluster permissions of the RAM user or RAM role.
       *
       * @param request UpdateUserPermissionsRequest
       * @return UpdateUserPermissionsResponse
       */
      Models::UpdateUserPermissionsResponse updateUserPermissions(const string &uid, const Models::UpdateUserPermissionsRequest &request);

      /**
       * @summary Upgrades an ACK cluster to mitigate potential security and stability risks associated with outdated versions and enable new features of the latest cluster version. You can call the UpgradeCluster operation to manually upgrade the cluster.
       *
       * @description After you successfully call the UpgradeCluster operation, the API returns the task_id of the upgrade task. You can manage the task by calling the following task operations:
       * - [Call DescribeTaskInfo to query task details](https://help.aliyun.com/document_detail/2667985.html)
       * - [Call PauseTask to pause a running task](https://help.aliyun.com/document_detail/2667986.html)
       * - [Call ResumeTask to resume a paused task](https://help.aliyun.com/document_detail/2667987.html)
       * - [Call CancelTask to cancel a running task](https://help.aliyun.com/document_detail/2667988.html)
       * >Notice: Starting from July 4, 2026, the request parameters rolling_policy and rolling_policy.max_parallelism no longer take effect. Use [UpgradeClusterNodepool](https://help.aliyun.com/document_detail/2667922.html) to upgrade worker nodes. For more information about the changes, see [Announcement on changes to request and response parameters of ACK cluster management operations and operation deprecation](https://help.aliyun.com/document_detail/2932733.html).</notice>
       *
       * @param request UpgradeClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeClusterResponse
       */
      Models::UpgradeClusterResponse upgradeClusterWithOptions(const string &ClusterId, const Models::UpgradeClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades an ACK cluster to mitigate potential security and stability risks associated with outdated versions and enable new features of the latest cluster version. You can call the UpgradeCluster operation to manually upgrade the cluster.
       *
       * @description After you successfully call the UpgradeCluster operation, the API returns the task_id of the upgrade task. You can manage the task by calling the following task operations:
       * - [Call DescribeTaskInfo to query task details](https://help.aliyun.com/document_detail/2667985.html)
       * - [Call PauseTask to pause a running task](https://help.aliyun.com/document_detail/2667986.html)
       * - [Call ResumeTask to resume a paused task](https://help.aliyun.com/document_detail/2667987.html)
       * - [Call CancelTask to cancel a running task](https://help.aliyun.com/document_detail/2667988.html)
       * >Notice: Starting from July 4, 2026, the request parameters rolling_policy and rolling_policy.max_parallelism no longer take effect. Use [UpgradeClusterNodepool](https://help.aliyun.com/document_detail/2667922.html) to upgrade worker nodes. For more information about the changes, see [Announcement on changes to request and response parameters of ACK cluster management operations and operation deprecation](https://help.aliyun.com/document_detail/2932733.html).</notice>
       *
       * @param request UpgradeClusterRequest
       * @return UpgradeClusterResponse
       */
      Models::UpgradeClusterResponse upgradeCluster(const string &ClusterId, const Models::UpgradeClusterRequest &request);

      /**
       * @summary Upgrades the versions of cluster add-ons to benefit from the feature optimizations provided by the new versions.
       *
       * @description - Upgrading the versions of cluster add-ons may affect your workloads. Evaluate the impact, perform the upgrade during off-peak hours, and back up your data in advance.
       * - Before upgrading an add-on, refer to [Add-on release notes](https://help.aliyun.com/document_detail/176087.html) to understand the changes and impact of the specified add-on.
       * - Upgrade add-ons one by one. Make sure that an add-on is upgraded successfully before you upgrade the next one.
       *
       * @param request UpgradeClusterAddonsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeClusterAddonsResponse
       */
      Models::UpgradeClusterAddonsResponse upgradeClusterAddonsWithOptions(const string &ClusterId, const Models::UpgradeClusterAddonsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the versions of cluster add-ons to benefit from the feature optimizations provided by the new versions.
       *
       * @description - Upgrading the versions of cluster add-ons may affect your workloads. Evaluate the impact, perform the upgrade during off-peak hours, and back up your data in advance.
       * - Before upgrading an add-on, refer to [Add-on release notes](https://help.aliyun.com/document_detail/176087.html) to understand the changes and impact of the specified add-on.
       * - Upgrade add-ons one by one. Make sure that an add-on is upgraded successfully before you upgrade the next one.
       *
       * @param request UpgradeClusterAddonsRequest
       * @return UpgradeClusterAddonsResponse
       */
      Models::UpgradeClusterAddonsResponse upgradeClusterAddons(const string &ClusterId, const Models::UpgradeClusterAddonsRequest &request);

      /**
       * @summary Upgrades the kubelet version (recommended to be consistent with the control plane version), operating system version, or container runtime version of a specified node pool in a cluster.
       *
       * @description You can call the UpgradeClusterNodepool operation to upgrade the Kubernetes version, operating system version, or container runtime version of nodes in a specified node pool of a cluster. After a successful call to the UpgradeClusterNodepool operation, the API returns the `task_id` of the upgrade task. You can manage the task by calling the following task APIs:
       * - [Call DescribeTaskInfo to query task details](https://help.aliyun.com/document_detail/2667985.html)
       * - [Call PauseTask to pause a running task](https://help.aliyun.com/document_detail/2667986.html)
       * - [Call ResumeTask to resume a paused task](https://help.aliyun.com/document_detail/2667987.html)
       * - [Call CancelTask to cancel a running task](https://help.aliyun.com/document_detail/2667988.html)
       *
       * @param request UpgradeClusterNodepoolRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeClusterNodepoolResponse
       */
      Models::UpgradeClusterNodepoolResponse upgradeClusterNodepoolWithOptions(const string &ClusterId, const string &NodepoolId, const Models::UpgradeClusterNodepoolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the kubelet version (recommended to be consistent with the control plane version), operating system version, or container runtime version of a specified node pool in a cluster.
       *
       * @description You can call the UpgradeClusterNodepool operation to upgrade the Kubernetes version, operating system version, or container runtime version of nodes in a specified node pool of a cluster. After a successful call to the UpgradeClusterNodepool operation, the API returns the `task_id` of the upgrade task. You can manage the task by calling the following task APIs:
       * - [Call DescribeTaskInfo to query task details](https://help.aliyun.com/document_detail/2667985.html)
       * - [Call PauseTask to pause a running task](https://help.aliyun.com/document_detail/2667986.html)
       * - [Call ResumeTask to resume a paused task](https://help.aliyun.com/document_detail/2667987.html)
       * - [Call CancelTask to cancel a running task](https://help.aliyun.com/document_detail/2667988.html)
       *
       * @param request UpgradeClusterNodepoolRequest
       * @return UpgradeClusterNodepoolResponse
       */
      Models::UpgradeClusterNodepoolResponse upgradeClusterNodepool(const string &ClusterId, const string &NodepoolId, const Models::UpgradeClusterNodepoolRequest &request);

      /**
       * @summary Wakes up a cluster.
       *
       * @param request WakeUpClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return WakeUpClusterResponse
       */
      Models::WakeUpClusterResponse wakeUpClusterWithOptions(const string &clusterId, const Models::WakeUpClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Wakes up a cluster.
       *
       * @param request WakeUpClusterRequest
       * @return WakeUpClusterResponse
       */
      Models::WakeUpClusterResponse wakeUpCluster(const string &clusterId, const Models::WakeUpClusterRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
