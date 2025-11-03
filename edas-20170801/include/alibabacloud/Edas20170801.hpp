// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EDAS20170801_HPP_
#define ALIBABACLOUD_EDAS20170801_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Edas20170801Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Edas20170801.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Terminates a change process and rolls back the application. This operation is applicable to applications that are deployed in Container Service for Kubernetes (ACK) clusters.
       *
       * @param request AbortAndRollbackChangeOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AbortAndRollbackChangeOrderResponse
       */
      Models::AbortAndRollbackChangeOrderResponse abortAndRollbackChangeOrderWithOptions(const Models::AbortAndRollbackChangeOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates a change process and rolls back the application. This operation is applicable to applications that are deployed in Container Service for Kubernetes (ACK) clusters.
       *
       * @param request AbortAndRollbackChangeOrderRequest
       * @return AbortAndRollbackChangeOrderResponse
       */
      Models::AbortAndRollbackChangeOrderResponse abortAndRollbackChangeOrder(const Models::AbortAndRollbackChangeOrderRequest &request);

      /**
       * @summary Terminates a change process.
       *
       * @param request AbortChangeOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AbortChangeOrderResponse
       */
      Models::AbortChangeOrderResponse abortChangeOrderWithOptions(const Models::AbortChangeOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates a change process.
       *
       * @param request AbortChangeOrderRequest
       * @return AbortChangeOrderResponse
       */
      Models::AbortChangeOrderResponse abortChangeOrder(const Models::AbortChangeOrderRequest &request);

      /**
       * @summary Adds a log directory to an application. This operation is applicable to applications that are deployed in Alibaba Cloud Elastic Compute Service (ECS) clusters and hybrid cloud ECS clusters.
       *
       * @param request AddLogPathRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLogPathResponse
       */
      Models::AddLogPathResponse addLogPathWithOptions(const Models::AddLogPathRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a log directory to an application. This operation is applicable to applications that are deployed in Alibaba Cloud Elastic Compute Service (ECS) clusters and hybrid cloud ECS clusters.
       *
       * @param request AddLogPathRequest
       * @return AddLogPathResponse
       */
      Models::AddLogPathResponse addLogPath(const Models::AddLogPathRequest &request);

      /**
       * @summary Grants a Resource Access Management (RAM) user the permissions on a specified application.
       *
       * @param request AuthorizeApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeApplicationResponse
       */
      Models::AuthorizeApplicationResponse authorizeApplicationWithOptions(const Models::AuthorizeApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants a Resource Access Management (RAM) user the permissions on a specified application.
       *
       * @param request AuthorizeApplicationRequest
       * @return AuthorizeApplicationResponse
       */
      Models::AuthorizeApplicationResponse authorizeApplication(const Models::AuthorizeApplicationRequest &request);

      /**
       * @summary Grants a Resource Access Management (RAM) user the permissions on a resource group.
       *
       * @param request AuthorizeResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeResourceGroupResponse
       */
      Models::AuthorizeResourceGroupResponse authorizeResourceGroupWithOptions(const Models::AuthorizeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants a Resource Access Management (RAM) user the permissions on a resource group.
       *
       * @param request AuthorizeResourceGroupRequest
       * @return AuthorizeResourceGroupResponse
       */
      Models::AuthorizeResourceGroupResponse authorizeResourceGroup(const Models::AuthorizeResourceGroupRequest &request);

      /**
       * @summary Assigns one or more roles to a RAM user.
       *
       * @param request AuthorizeRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeRoleResponse
       */
      Models::AuthorizeRoleResponse authorizeRoleWithOptions(const Models::AuthorizeRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns one or more roles to a RAM user.
       *
       * @param request AuthorizeRoleRequest
       * @return AuthorizeRoleResponse
       */
      Models::AuthorizeRoleResponse authorizeRole(const Models::AuthorizeRoleRequest &request);

      /**
       * @summary Binds a Server Load Balancer (SLB) instance to an application that is deployed in an Elastic Compute Service (ECS) cluster.
       *
       * @param request BindEcsSlbRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindEcsSlbResponse
       */
      Models::BindEcsSlbResponse bindEcsSlbWithOptions(const Models::BindEcsSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a Server Load Balancer (SLB) instance to an application that is deployed in an Elastic Compute Service (ECS) cluster.
       *
       * @param request BindEcsSlbRequest
       * @return BindEcsSlbResponse
       */
      Models::BindEcsSlbResponse bindEcsSlb(const Models::BindEcsSlbRequest &request);

      /**
       * @summary Binds a Server Load Balancer (SLB) instance to an application that is deployed in a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request BindK8sSlbRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindK8sSlbResponse
       */
      Models::BindK8sSlbResponse bindK8sSlbWithOptions(const Models::BindK8sSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a Server Load Balancer (SLB) instance to an application that is deployed in a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request BindK8sSlbRequest
       * @return BindK8sSlbResponse
       */
      Models::BindK8sSlbResponse bindK8sSlb(const Models::BindK8sSlbRequest &request);

      /**
       * @summary Binds a Server Load Balancer (SLB) instance to an application in Enterprise Distributed Application Service (EDAS).
       *
       * @param request BindSlbRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindSlbResponse
       */
      Models::BindSlbResponse bindSlbWithOptions(const Models::BindSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a Server Load Balancer (SLB) instance to an application in Enterprise Distributed Application Service (EDAS).
       *
       * @param request BindSlbRequest
       * @return BindSlbResponse
       */
      Models::BindSlbResponse bindSlb(const Models::BindSlbRequest &request);

      /**
       * @summary Changes the application instance group for an Elastic Compute Service (ECS) instance in an ECS cluster.
       *
       * @param request ChangeDeployGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeDeployGroupResponse
       */
      Models::ChangeDeployGroupResponse changeDeployGroupWithOptions(const Models::ChangeDeployGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the application instance group for an Elastic Compute Service (ECS) instance in an ECS cluster.
       *
       * @param request ChangeDeployGroupRequest
       * @return ChangeDeployGroupResponse
       */
      Models::ChangeDeployGroupResponse changeDeployGroup(const Models::ChangeDeployGroupRequest &request);

      /**
       * @summary Manually confirms the release of the next batch.
       *
       * @param request ContinuePipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContinuePipelineResponse
       */
      Models::ContinuePipelineResponse continuePipelineWithOptions(const Models::ContinuePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually confirms the release of the next batch.
       *
       * @param request ContinuePipelineRequest
       * @return ContinuePipelineResponse
       */
      Models::ContinuePipelineResponse continuePipeline(const Models::ContinuePipelineRequest &request);

      /**
       * @summary Converts a Deployment into an application.
       *
       * @param request ConvertK8sResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertK8sResourceResponse
       */
      Models::ConvertK8sResourceResponse convertK8sResourceWithOptions(const Models::ConvertK8sResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts a Deployment into an application.
       *
       * @param request ConvertK8sResourceRequest
       * @return ConvertK8sResourceResponse
       */
      Models::ConvertK8sResourceResponse convertK8sResource(const Models::ConvertK8sResourceRequest &request);

      /**
       * @summary Creates an auto scaling policy for an application.
       *
       * @param request CreateApplicationScalingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationScalingRuleResponse
       */
      Models::CreateApplicationScalingRuleResponse createApplicationScalingRuleWithOptions(const Models::CreateApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an auto scaling policy for an application.
       *
       * @param request CreateApplicationScalingRuleRequest
       * @return CreateApplicationScalingRuleResponse
       */
      Models::CreateApplicationScalingRuleResponse createApplicationScalingRule(const Models::CreateApplicationScalingRuleRequest &request);

      /**
       * @summary Creates a configuration template.
       *
       * @param request CreateConfigTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConfigTemplateResponse
       */
      Models::CreateConfigTemplateResponse createConfigTemplateWithOptions(const Models::CreateConfigTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a configuration template.
       *
       * @param request CreateConfigTemplateRequest
       * @return CreateConfigTemplateResponse
       */
      Models::CreateConfigTemplateResponse createConfigTemplate(const Models::CreateConfigTemplateRequest &request);

      /**
       * @summary Generates a command that is used to import instances to a hybrid cloud Elastic Compute Service (ECS) cluster.
       *
       * @description ## Description
       * You must call the CreateIDCImportCommand operation first to generate a command used to import hybrid cloud ECS instances to a hybrid cloud ECS cluster. Then, run this command on the instances to import the instances to the cluster.
       *
       * @param request CreateIDCImportCommandRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIDCImportCommandResponse
       */
      Models::CreateIDCImportCommandResponse createIDCImportCommandWithOptions(const Models::CreateIDCImportCommandRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a command that is used to import instances to a hybrid cloud Elastic Compute Service (ECS) cluster.
       *
       * @description ## Description
       * You must call the CreateIDCImportCommand operation first to generate a command used to import hybrid cloud ECS instances to a hybrid cloud ECS cluster. Then, run this command on the instances to import the instances to the cluster.
       *
       * @param request CreateIDCImportCommandRequest
       * @return CreateIDCImportCommandResponse
       */
      Models::CreateIDCImportCommandResponse createIDCImportCommand(const Models::CreateIDCImportCommandRequest &request);

      /**
       * @summary Creates a Kubernetes ConfigMap.
       *
       * @param request CreateK8sConfigMapRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateK8sConfigMapResponse
       */
      Models::CreateK8sConfigMapResponse createK8sConfigMapWithOptions(const Models::CreateK8sConfigMapRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Kubernetes ConfigMap.
       *
       * @param request CreateK8sConfigMapRequest
       * @return CreateK8sConfigMapResponse
       */
      Models::CreateK8sConfigMapResponse createK8sConfigMap(const Models::CreateK8sConfigMapRequest &request);

      /**
       * @summary Creates an Ingress.
       *
       * @param request CreateK8sIngressRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateK8sIngressRuleResponse
       */
      Models::CreateK8sIngressRuleResponse createK8sIngressRuleWithOptions(const Models::CreateK8sIngressRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Ingress.
       *
       * @param request CreateK8sIngressRuleRequest
       * @return CreateK8sIngressRuleResponse
       */
      Models::CreateK8sIngressRuleResponse createK8sIngressRule(const Models::CreateK8sIngressRuleRequest &request);

      /**
       * @summary Creates a Kubernetes Secret.
       *
       * @param request CreateK8sSecretRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateK8sSecretResponse
       */
      Models::CreateK8sSecretResponse createK8sSecretWithOptions(const Models::CreateK8sSecretRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Kubernetes Secret.
       *
       * @param request CreateK8sSecretRequest
       * @return CreateK8sSecretResponse
       */
      Models::CreateK8sSecretResponse createK8sSecret(const Models::CreateK8sSecretRequest &request);

      /**
       * @summary Creates an application service in a Kubernetes cluster.
       *
       * @param request CreateK8sServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateK8sServiceResponse
       */
      Models::CreateK8sServiceResponse createK8sServiceWithOptions(const Models::CreateK8sServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application service in a Kubernetes cluster.
       *
       * @param request CreateK8sServiceRequest
       * @return CreateK8sServiceResponse
       */
      Models::CreateK8sServiceResponse createK8sService(const Models::CreateK8sServiceRequest &request);

      /**
       * @summary Deletes an application.
       *
       * @param request DeleteApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplicationWithOptions(const Models::DeleteApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application.
       *
       * @param request DeleteApplicationRequest
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplication(const Models::DeleteApplicationRequest &request);

      /**
       * @summary Deletes an auto scaling policy for an application.
       *
       * @param request DeleteApplicationScalingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationScalingRuleResponse
       */
      Models::DeleteApplicationScalingRuleResponse deleteApplicationScalingRuleWithOptions(const Models::DeleteApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an auto scaling policy for an application.
       *
       * @param request DeleteApplicationScalingRuleRequest
       * @return DeleteApplicationScalingRuleResponse
       */
      Models::DeleteApplicationScalingRuleResponse deleteApplicationScalingRule(const Models::DeleteApplicationScalingRuleRequest &request);

      /**
       * @summary Deletes an Elastic Compute Service (ECS) cluster or cancels the import of a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DeleteClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteClusterWithOptions(const Models::DeleteClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Elastic Compute Service (ECS) cluster or cancels the import of a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DeleteClusterRequest
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteCluster(const Models::DeleteClusterRequest &request);

      /**
       * @summary Removes an Elastic Compute Service (ECS) instance from a cluster.
       *
       * @param request DeleteClusterMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterMemberResponse
       */
      Models::DeleteClusterMemberResponse deleteClusterMemberWithOptions(const Models::DeleteClusterMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an Elastic Compute Service (ECS) instance from a cluster.
       *
       * @param request DeleteClusterMemberRequest
       * @return DeleteClusterMemberResponse
       */
      Models::DeleteClusterMemberResponse deleteClusterMember(const Models::DeleteClusterMemberRequest &request);

      /**
       * @summary Deletes a configuration template.
       *
       * @param request DeleteConfigTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConfigTemplateResponse
       */
      Models::DeleteConfigTemplateResponse deleteConfigTemplateWithOptions(const Models::DeleteConfigTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a configuration template.
       *
       * @param request DeleteConfigTemplateRequest
       * @return DeleteConfigTemplateResponse
       */
      Models::DeleteConfigTemplateResponse deleteConfigTemplate(const Models::DeleteConfigTemplateRequest &request);

      /**
       * @summary Deletes an instance group for an application.
       *
       * @param request DeleteDeployGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeployGroupResponse
       */
      Models::DeleteDeployGroupResponse deleteDeployGroupWithOptions(const Models::DeleteDeployGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an instance group for an application.
       *
       * @param request DeleteDeployGroupRequest
       * @return DeleteDeployGroupResponse
       */
      Models::DeleteDeployGroupResponse deleteDeployGroup(const Models::DeleteDeployGroupRequest &request);

      /**
       * @summary Deletes an Elastic Compute Unit (ECU).
       *
       * @param request DeleteEcuRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEcuResponse
       */
      Models::DeleteEcuResponse deleteEcuWithOptions(const Models::DeleteEcuRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Elastic Compute Unit (ECU).
       *
       * @param request DeleteEcuRequest
       * @return DeleteEcuResponse
       */
      Models::DeleteEcuResponse deleteEcu(const Models::DeleteEcuRequest &request);

      /**
       * @summary Deletes an application from a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DeleteK8sApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteK8sApplicationResponse
       */
      Models::DeleteK8sApplicationResponse deleteK8sApplicationWithOptions(const Models::DeleteK8sApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application from a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DeleteK8sApplicationRequest
       * @return DeleteK8sApplicationResponse
       */
      Models::DeleteK8sApplicationResponse deleteK8sApplication(const Models::DeleteK8sApplicationRequest &request);

      /**
       * @summary Deletes a Kubernetes ConfigMap.
       *
       * @param request DeleteK8sConfigMapRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteK8sConfigMapResponse
       */
      Models::DeleteK8sConfigMapResponse deleteK8sConfigMapWithOptions(const Models::DeleteK8sConfigMapRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Kubernetes ConfigMap.
       *
       * @param request DeleteK8sConfigMapRequest
       * @return DeleteK8sConfigMapResponse
       */
      Models::DeleteK8sConfigMapResponse deleteK8sConfigMap(const Models::DeleteK8sConfigMapRequest &request);

      /**
       * @summary Deletes an ingress.
       *
       * @param request DeleteK8sIngressRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteK8sIngressRuleResponse
       */
      Models::DeleteK8sIngressRuleResponse deleteK8sIngressRuleWithOptions(const Models::DeleteK8sIngressRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an ingress.
       *
       * @param request DeleteK8sIngressRuleRequest
       * @return DeleteK8sIngressRuleResponse
       */
      Models::DeleteK8sIngressRuleResponse deleteK8sIngressRule(const Models::DeleteK8sIngressRuleRequest &request);

      /**
       * @summary Deletes a Kubernetes Secret.
       *
       * @param request DeleteK8sSecretRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteK8sSecretResponse
       */
      Models::DeleteK8sSecretResponse deleteK8sSecretWithOptions(const Models::DeleteK8sSecretRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Kubernetes Secret.
       *
       * @param request DeleteK8sSecretRequest
       * @return DeleteK8sSecretResponse
       */
      Models::DeleteK8sSecretResponse deleteK8sSecret(const Models::DeleteK8sSecretRequest &request);

      /**
       * @summary Deletes an application service from a Kubernetes cluster.
       *
       * @param request DeleteK8sServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteK8sServiceResponse
       */
      Models::DeleteK8sServiceResponse deleteK8sServiceWithOptions(const Models::DeleteK8sServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application service from a Kubernetes cluster.
       *
       * @param request DeleteK8sServiceRequest
       * @return DeleteK8sServiceResponse
       */
      Models::DeleteK8sServiceResponse deleteK8sService(const Models::DeleteK8sServiceRequest &request);

      /**
       * @summary Removes a log directory from an application. This operation is applicable to applications that are deployed in Alibaba Cloud Elastic Compute Service (ECS) clusters and hybrid cloud ECS clusters.
       *
       * @param request DeleteLogPathRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLogPathResponse
       */
      Models::DeleteLogPathResponse deleteLogPathWithOptions(const Models::DeleteLogPathRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a log directory from an application. This operation is applicable to applications that are deployed in Alibaba Cloud Elastic Compute Service (ECS) clusters and hybrid cloud ECS clusters.
       *
       * @param request DeleteLogPathRequest
       * @return DeleteLogPathResponse
       */
      Models::DeleteLogPathResponse deleteLogPath(const Models::DeleteLogPathRequest &request);

      /**
       * @summary Deletes a Resource Access Management (RAM) role.
       *
       * @param request DeleteRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRoleWithOptions(const Models::DeleteRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Resource Access Management (RAM) role.
       *
       * @param request DeleteRoleRequest
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRole(const Models::DeleteRoleRequest &request);

      /**
       * @summary Deletes a service group.
       *
       * @param request DeleteServiceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceGroupResponse
       */
      Models::DeleteServiceGroupResponse deleteServiceGroupWithOptions(const Models::DeleteServiceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service group.
       *
       * @param request DeleteServiceGroupRequest
       * @return DeleteServiceGroupResponse
       */
      Models::DeleteServiceGroupResponse deleteServiceGroup(const Models::DeleteServiceGroupRequest &request);

      /**
       * @summary Deletes a lane.
       *
       * @param request DeleteSwimmingLaneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSwimmingLaneResponse
       */
      Models::DeleteSwimmingLaneResponse deleteSwimmingLaneWithOptions(const Models::DeleteSwimmingLaneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a lane.
       *
       * @param request DeleteSwimmingLaneRequest
       * @return DeleteSwimmingLaneResponse
       */
      Models::DeleteSwimmingLaneResponse deleteSwimmingLane(const Models::DeleteSwimmingLaneRequest &request);

      /**
       * @summary Deletes a specified custom namespace.
       *
       * @param request DeleteUserDefineRegionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserDefineRegionResponse
       */
      Models::DeleteUserDefineRegionResponse deleteUserDefineRegionWithOptions(const Models::DeleteUserDefineRegionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified custom namespace.
       *
       * @param request DeleteUserDefineRegionRequest
       * @return DeleteUserDefineRegionResponse
       */
      Models::DeleteUserDefineRegionResponse deleteUserDefineRegion(const Models::DeleteUserDefineRegionRequest &request);

      /**
       * @summary Deploys an application in an Elastic Compute Service (ECS) cluster.
       *
       * @description > To deploy an application in a Container Service for Kubernetes (ACK) cluster that is imported into Enterprise Distributed Application Service (EDAS), call the DeployK8sApplication operation provided by EDAS. For more information, see [](~~149420~~)DeployK8sApplication.
       *
       * @param request DeployApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployApplicationResponse
       */
      Models::DeployApplicationResponse deployApplicationWithOptions(const Models::DeployApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys an application in an Elastic Compute Service (ECS) cluster.
       *
       * @description > To deploy an application in a Container Service for Kubernetes (ACK) cluster that is imported into Enterprise Distributed Application Service (EDAS), call the DeployK8sApplication operation provided by EDAS. For more information, see [](~~149420~~)DeployK8sApplication.
       *
       * @param request DeployApplicationRequest
       * @return DeployApplicationResponse
       */
      Models::DeployApplicationResponse deployApplication(const Models::DeployApplicationRequest &request);

      /**
       * @summary Deploys an application in a Container Service for Kubernetes (ACK) cluster or a serverless Kubernetes cluster.
       *
       * @param request DeployK8sApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployK8sApplicationResponse
       */
      Models::DeployK8sApplicationResponse deployK8sApplicationWithOptions(const Models::DeployK8sApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys an application in a Container Service for Kubernetes (ACK) cluster or a serverless Kubernetes cluster.
       *
       * @param request DeployK8sApplicationRequest
       * @return DeployK8sApplicationResponse
       */
      Models::DeployK8sApplicationResponse deployK8sApplication(const Models::DeployK8sApplicationRequest &request);

      /**
       * @summary Queries Kubernetes application instances.
       *
       * @param request DescribeAppInstanceListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppInstanceListResponse
       */
      Models::DescribeAppInstanceListResponse describeAppInstanceListWithOptions(const Models::DescribeAppInstanceListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Kubernetes application instances.
       *
       * @param request DescribeAppInstanceListRequest
       * @return DescribeAppInstanceListResponse
       */
      Models::DescribeAppInstanceListResponse describeAppInstanceList(const Models::DescribeAppInstanceListRequest &request);

      /**
       * @summary Queries the auto scaling policies of an application.
       *
       * @param request DescribeApplicationScalingRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationScalingRulesResponse
       */
      Models::DescribeApplicationScalingRulesResponse describeApplicationScalingRulesWithOptions(const Models::DescribeApplicationScalingRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the auto scaling policies of an application.
       *
       * @param request DescribeApplicationScalingRulesRequest
       * @return DescribeApplicationScalingRulesResponse
       */
      Models::DescribeApplicationScalingRulesResponse describeApplicationScalingRules(const Models::DescribeApplicationScalingRulesRequest &request);

      /**
       * @param request DescribeLocalitySettingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLocalitySettingResponse
       */
      Models::DescribeLocalitySettingResponse describeLocalitySettingWithOptions(const Models::DescribeLocalitySettingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeLocalitySettingRequest
       * @return DescribeLocalitySettingResponse
       */
      Models::DescribeLocalitySettingResponse describeLocalitySetting(const Models::DescribeLocalitySettingRequest &request);

      /**
       * @summary Disables an auto scaling policy for an application.
       *
       * @param request DisableApplicationScalingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApplicationScalingRuleResponse
       */
      Models::DisableApplicationScalingRuleResponse disableApplicationScalingRuleWithOptions(const Models::DisableApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an auto scaling policy for an application.
       *
       * @param request DisableApplicationScalingRuleRequest
       * @return DisableApplicationScalingRuleResponse
       */
      Models::DisableApplicationScalingRuleResponse disableApplicationScalingRule(const Models::DisableApplicationScalingRuleRequest &request);

      /**
       * @summary Enables an auto scaling policy for an application.
       *
       * @param request EnableApplicationScalingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApplicationScalingRuleResponse
       */
      Models::EnableApplicationScalingRuleResponse enableApplicationScalingRuleWithOptions(const Models::EnableApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an auto scaling policy for an application.
       *
       * @param request EnableApplicationScalingRuleRequest
       * @return EnableApplicationScalingRuleResponse
       */
      Models::EnableApplicationScalingRuleResponse enableApplicationScalingRule(const Models::EnableApplicationScalingRuleRequest &request);

      /**
       * @summary Queries the information about the Deployment of a Kubernetes application.
       *
       * @param request GetAppDeploymentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppDeploymentResponse
       */
      Models::GetAppDeploymentResponse getAppDeploymentWithOptions(const Models::GetAppDeploymentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the Deployment of a Kubernetes application.
       *
       * @param request GetAppDeploymentRequest
       * @return GetAppDeploymentResponse
       */
      Models::GetAppDeploymentResponse getAppDeployment(const Models::GetAppDeploymentRequest &request);

      /**
       * @summary Queries the details about a specified application in an Elastic Compute Service (ECS) cluster.
       *
       * @param request GetApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplicationWithOptions(const Models::GetApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a specified application in an Elastic Compute Service (ECS) cluster.
       *
       * @param request GetApplicationRequest
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplication(const Models::GetApplicationRequest &request);

      /**
       * @summary Queries the details about a change process.
       *
       * @param request GetChangeOrderInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChangeOrderInfoResponse
       */
      Models::GetChangeOrderInfoResponse getChangeOrderInfoWithOptions(const Models::GetChangeOrderInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a change process.
       *
       * @param request GetChangeOrderInfoRequest
       * @return GetChangeOrderInfoResponse
       */
      Models::GetChangeOrderInfoResponse getChangeOrderInfo(const Models::GetChangeOrderInfoRequest &request);

      /**
       * @summary Queries a specific cluster.
       *
       * @param request GetClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterResponse
       */
      Models::GetClusterResponse getClusterWithOptions(const Models::GetClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a specific cluster.
       *
       * @param request GetClusterRequest
       * @return GetClusterResponse
       */
      Models::GetClusterResponse getCluster(const Models::GetClusterRequest &request);

      /**
       * @summary Queries the Tomcat configuration of an application or an instance group in which an application is deployed.
       *
       * @param request GetContainerConfigurationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContainerConfigurationResponse
       */
      Models::GetContainerConfigurationResponse getContainerConfigurationWithOptions(const Models::GetContainerConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Tomcat configuration of an application or an instance group in which an application is deployed.
       *
       * @param request GetContainerConfigurationRequest
       * @return GetContainerConfigurationResponse
       */
      Models::GetContainerConfigurationResponse getContainerConfiguration(const Models::GetContainerConfigurationRequest &request);

      /**
       * @summary Queries the configuration of Java startup parameters for an application.
       *
       * @param request GetJavaStartUpConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJavaStartUpConfigResponse
       */
      Models::GetJavaStartUpConfigResponse getJavaStartUpConfigWithOptions(const Models::GetJavaStartUpConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of Java startup parameters for an application.
       *
       * @param request GetJavaStartUpConfigRequest
       * @return GetJavaStartUpConfigResponse
       */
      Models::GetJavaStartUpConfigResponse getJavaStartUpConfig(const Models::GetJavaStartUpConfigRequest &request);

      /**
       * @summary Queries the Java Virtual Machine (JVM) configuration of an application or an instance group in which an application is deployed.
       *
       * @param request GetJvmConfigurationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJvmConfigurationResponse
       */
      Models::GetJvmConfigurationResponse getJvmConfigurationWithOptions(const Models::GetJvmConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Java Virtual Machine (JVM) configuration of an application or an instance group in which an application is deployed.
       *
       * @param request GetJvmConfigurationRequest
       * @return GetJvmConfigurationResponse
       */
      Models::GetJvmConfigurationResponse getJvmConfiguration(const Models::GetJvmConfigurationRequest &request);

      /**
       * @summary Queries the precheck result of a Kubernetes application.
       *
       * @param request GetK8sAppPrecheckResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetK8sAppPrecheckResultResponse
       */
      Models::GetK8sAppPrecheckResultResponse getK8sAppPrecheckResultWithOptions(const Models::GetK8sAppPrecheckResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the precheck result of a Kubernetes application.
       *
       * @param request GetK8sAppPrecheckResultRequest
       * @return GetK8sAppPrecheckResultResponse
       */
      Models::GetK8sAppPrecheckResultResponse getK8sAppPrecheckResult(const Models::GetK8sAppPrecheckResultRequest &request);

      /**
       * @summary Queries the information about applications deployed in a Container Service for Kubernetes (ACK) cluster or a serverless Kubernetes cluster.
       *
       * @param request GetK8sApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetK8sApplicationResponse
       */
      Models::GetK8sApplicationResponse getK8sApplicationWithOptions(const Models::GetK8sApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about applications deployed in a Container Service for Kubernetes (ACK) cluster or a serverless Kubernetes cluster.
       *
       * @param request GetK8sApplicationRequest
       * @return GetK8sApplicationResponse
       */
      Models::GetK8sApplicationResponse getK8sApplication(const Models::GetK8sApplicationRequest &request);

      /**
       * @summary Queries Container Service for Kubernetes (ACK) clusters or Serverless Kubernetes clusters in a specified region.
       *
       * @param request GetK8sClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetK8sClusterResponse
       */
      Models::GetK8sClusterResponse getK8sClusterWithOptions(const Models::GetK8sClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Container Service for Kubernetes (ACK) clusters or Serverless Kubernetes clusters in a specified region.
       *
       * @param request GetK8sClusterRequest
       * @return GetK8sClusterResponse
       */
      Models::GetK8sClusterResponse getK8sCluster(const Models::GetK8sClusterRequest &request);

      /**
       * @summary Queries application services that are deployed in a Kubernetes cluster.
       *
       * @param request GetK8sServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetK8sServicesResponse
       */
      Models::GetK8sServicesResponse getK8sServicesWithOptions(const Models::GetK8sServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries application services that are deployed in a Kubernetes cluster.
       *
       * @param request GetK8sServicesRequest
       * @return GetK8sServicesResponse
       */
      Models::GetK8sServicesResponse getK8sServices(const Models::GetK8sServicesRequest &request);

      /**
       * @summary Queries the Security Token Service (STS) tokens that are required for temporary storage.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPackageStorageCredentialResponse
       */
      Models::GetPackageStorageCredentialResponse getPackageStorageCredentialWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Security Token Service (STS) tokens that are required for temporary storage.
       *
       * @return GetPackageStorageCredentialResponse
       */
      Models::GetPackageStorageCredentialResponse getPackageStorageCredential();

      /**
       * @summary Queries scaling rules.
       *
       * @param request GetScalingRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScalingRulesResponse
       */
      Models::GetScalingRulesResponse getScalingRulesWithOptions(const Models::GetScalingRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries scaling rules.
       *
       * @param request GetScalingRulesRequest
       * @return GetScalingRulesResponse
       */
      Models::GetScalingRulesResponse getScalingRules(const Models::GetScalingRulesRequest &request);

      /**
       * @summary Queries the security token information of a namespace. You can call this operation to query information, such as the AccessKey ID, AccessKey secret, tenant ID, and the domain name of Address Server, for the specified namespace.
       *
       * @param request GetSecureTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecureTokenResponse
       */
      Models::GetSecureTokenResponse getSecureTokenWithOptions(const Models::GetSecureTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security token information of a namespace. You can call this operation to query information, such as the AccessKey ID, AccessKey secret, tenant ID, and the domain name of Address Server, for the specified namespace.
       *
       * @param request GetSecureTokenRequest
       * @return GetSecureTokenResponse
       */
      Models::GetSecureTokenResponse getSecureToken(const Models::GetSecureTokenRequest &request);

      /**
       * @summary Queries service consumers.
       *
       * @param request GetServiceConsumersPageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceConsumersPageResponse
       */
      Models::GetServiceConsumersPageResponse getServiceConsumersPageWithOptions(const Models::GetServiceConsumersPageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries service consumers.
       *
       * @param request GetServiceConsumersPageRequest
       * @return GetServiceConsumersPageResponse
       */
      Models::GetServiceConsumersPageResponse getServiceConsumersPage(const Models::GetServiceConsumersPageRequest &request);

      /**
       * @summary Queries service details.
       *
       * @param request GetServiceDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceDetailResponse
       */
      Models::GetServiceDetailResponse getServiceDetailWithOptions(const Models::GetServiceDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries service details.
       *
       * @param request GetServiceDetailRequest
       * @return GetServiceDetailResponse
       */
      Models::GetServiceDetailResponse getServiceDetail(const Models::GetServiceDetailRequest &request);

      /**
       * @summary Queries services.
       *
       * @param request GetServiceListPageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceListPageResponse
       */
      Models::GetServiceListPageResponse getServiceListPageWithOptions(const Models::GetServiceListPageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries services.
       *
       * @param request GetServiceListPageRequest
       * @return GetServiceListPageResponse
       */
      Models::GetServiceListPageResponse getServiceListPage(const Models::GetServiceListPageRequest &request);

      /**
       * @summary Queries service methods.
       *
       * @param request GetServiceMethodPageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceMethodPageResponse
       */
      Models::GetServiceMethodPageResponse getServiceMethodPageWithOptions(const Models::GetServiceMethodPageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries service methods.
       *
       * @param request GetServiceMethodPageRequest
       * @return GetServiceMethodPageResponse
       */
      Models::GetServiceMethodPageResponse getServiceMethodPage(const Models::GetServiceMethodPageRequest &request);

      /**
       * @summary Queries service providers.
       *
       * @param request GetServiceProvidersPageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceProvidersPageResponse
       */
      Models::GetServiceProvidersPageResponse getServiceProvidersPageWithOptions(const Models::GetServiceProvidersPageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries service providers.
       *
       * @param request GetServiceProvidersPageRequest
       * @return GetServiceProvidersPageResponse
       */
      Models::GetServiceProvidersPageResponse getServiceProvidersPage(const Models::GetServiceProvidersPageRequest &request);

      /**
       * @summary Queries the Tomcat configurations of an application.
       *
       * @description ***
       *
       * @param request GetWebContainerConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWebContainerConfigResponse
       */
      Models::GetWebContainerConfigResponse getWebContainerConfigWithOptions(const Models::GetWebContainerConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Tomcat configurations of an application.
       *
       * @description ***
       *
       * @param request GetWebContainerConfigRequest
       * @return GetWebContainerConfigResponse
       */
      Models::GetWebContainerConfigResponse getWebContainerConfig(const Models::GetWebContainerConfigRequest &request);

      /**
       * @summary Imports a Container Service for Kubernetes (ACK) cluster or a serverless Kubernetes cluster to Enterprise Distributed Application Service (EDAS).
       *
       * @param request ImportK8sClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportK8sClusterResponse
       */
      Models::ImportK8sClusterResponse importK8sClusterWithOptions(const Models::ImportK8sClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a Container Service for Kubernetes (ACK) cluster or a serverless Kubernetes cluster to Enterprise Distributed Application Service (EDAS).
       *
       * @param request ImportK8sClusterRequest
       * @return ImportK8sClusterResponse
       */
      Models::ImportK8sClusterResponse importK8sCluster(const Models::ImportK8sClusterRequest &request);

      /**
       * @summary Creates an application in an Elastic Compute Service (ECS) cluster.
       *
       * @description > To create an application in a Kubernetes cluster, call the InsertK8sApplication operation provided by Enterprise Distributed Application Service (EDAS).
       *
       * @param request InsertApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertApplicationResponse
       */
      Models::InsertApplicationResponse insertApplicationWithOptions(const Models::InsertApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application in an Elastic Compute Service (ECS) cluster.
       *
       * @description > To create an application in a Kubernetes cluster, call the InsertK8sApplication operation provided by Enterprise Distributed Application Service (EDAS).
       *
       * @param request InsertApplicationRequest
       * @return InsertApplicationResponse
       */
      Models::InsertApplicationResponse insertApplication(const Models::InsertApplicationRequest &request);

      /**
       * @summary Creates a cluster.
       *
       * @param request InsertClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertClusterResponse
       */
      Models::InsertClusterResponse insertClusterWithOptions(const Models::InsertClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cluster.
       *
       * @param request InsertClusterRequest
       * @return InsertClusterResponse
       */
      Models::InsertClusterResponse insertCluster(const Models::InsertClusterRequest &request);

      /**
       * @summary Imports Elastic Compute Service (ECS) instances into an ECS cluster.
       *
       * @description ##
       * If you call this operation to import an ECS instance, the operating system of the ECS instance is reinstalled. After the operating system is reinstalled, all original data of the ECS instance is deleted. In addition, you must set a logon password for the ECS instance. Make sure that no important data exists on the ECS instance that you want to import or data has been backed up for the ECS instance.
       * > We recommend that you call the InstallAgent operation instead of this operation. For more information, see [InstallAgent](https://help.aliyun.com/document_detail/127023.html).
       *
       * @param request InsertClusterMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertClusterMemberResponse
       */
      Models::InsertClusterMemberResponse insertClusterMemberWithOptions(const Models::InsertClusterMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports Elastic Compute Service (ECS) instances into an ECS cluster.
       *
       * @description ##
       * If you call this operation to import an ECS instance, the operating system of the ECS instance is reinstalled. After the operating system is reinstalled, all original data of the ECS instance is deleted. In addition, you must set a logon password for the ECS instance. Make sure that no important data exists on the ECS instance that you want to import or data has been backed up for the ECS instance.
       * > We recommend that you call the InstallAgent operation instead of this operation. For more information, see [InstallAgent](https://help.aliyun.com/document_detail/127023.html).
       *
       * @param request InsertClusterMemberRequest
       * @return InsertClusterMemberResponse
       */
      Models::InsertClusterMemberResponse insertClusterMember(const Models::InsertClusterMemberRequest &request);

      /**
       * @summary Creates an instance group for a specified application.
       *
       * @param request InsertDeployGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertDeployGroupResponse
       */
      Models::InsertDeployGroupResponse insertDeployGroupWithOptions(const Models::InsertDeployGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an instance group for a specified application.
       *
       * @param request InsertDeployGroupRequest
       * @return InsertDeployGroupResponse
       */
      Models::InsertDeployGroupResponse insertDeployGroup(const Models::InsertDeployGroupRequest &request);

      /**
       * @summary Creates an application in a Container Service for Kubernetes (ACK) cluster or serverless Kubernetes cluster.
       *
       * @param request InsertK8sApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertK8sApplicationResponse
       */
      Models::InsertK8sApplicationResponse insertK8sApplicationWithOptions(const Models::InsertK8sApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application in a Container Service for Kubernetes (ACK) cluster or serverless Kubernetes cluster.
       *
       * @param request InsertK8sApplicationRequest
       * @return InsertK8sApplicationResponse
       */
      Models::InsertK8sApplicationResponse insertK8sApplication(const Models::InsertK8sApplicationRequest &request);

      /**
       * @summary Creates or edits a custom namespace.
       *
       * @param request InsertOrUpdateRegionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertOrUpdateRegionResponse
       */
      Models::InsertOrUpdateRegionResponse insertOrUpdateRegionWithOptions(const Models::InsertOrUpdateRegionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or edits a custom namespace.
       *
       * @param request InsertOrUpdateRegionRequest
       * @return InsertOrUpdateRegionResponse
       */
      Models::InsertOrUpdateRegionResponse insertOrUpdateRegion(const Models::InsertOrUpdateRegionRequest &request);

      /**
       * @summary Creates a role.
       *
       * @param request InsertRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertRoleResponse
       */
      Models::InsertRoleResponse insertRoleWithOptions(const Models::InsertRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a role.
       *
       * @param request InsertRoleRequest
       * @return InsertRoleResponse
       */
      Models::InsertRoleResponse insertRole(const Models::InsertRoleRequest &request);

      /**
       * @summary Creates a service group.
       *
       * @param request InsertServiceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertServiceGroupResponse
       */
      Models::InsertServiceGroupResponse insertServiceGroupWithOptions(const Models::InsertServiceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service group.
       *
       * @param request InsertServiceGroupRequest
       * @return InsertServiceGroupResponse
       */
      Models::InsertServiceGroupResponse insertServiceGroup(const Models::InsertServiceGroupRequest &request);

      /**
       * @summary Creates a lane.
       *
       * @param request InsertSwimmingLaneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertSwimmingLaneResponse
       */
      Models::InsertSwimmingLaneResponse insertSwimmingLaneWithOptions(const Models::InsertSwimmingLaneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a lane.
       *
       * @param request InsertSwimmingLaneRequest
       * @return InsertSwimmingLaneResponse
       */
      Models::InsertSwimmingLaneResponse insertSwimmingLane(const Models::InsertSwimmingLaneRequest &request);

      /**
       * @summary Creates a lane group.
       *
       * @param request InsertSwimmingLaneGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertSwimmingLaneGroupResponse
       */
      Models::InsertSwimmingLaneGroupResponse insertSwimmingLaneGroupWithOptions(const Models::InsertSwimmingLaneGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a lane group.
       *
       * @param request InsertSwimmingLaneGroupRequest
       * @return InsertSwimmingLaneGroupResponse
       */
      Models::InsertSwimmingLaneGroupResponse insertSwimmingLaneGroup(const Models::InsertSwimmingLaneGroupRequest &request);

      /**
       * @summary Uses the Cloud Assistant provided by Elastic Compute Service (ECS) to install Enterprise Distributed Application Service (EDAS) Agent and imports ECS instances to EDAS.
       *
       * @description If you call this operation to import an ECS instance into EDAS, the operating system of the ECS instance is not reinstalled. We recommend that you call this operation to import ECS instances into EDAS.
       *
       * @param request InstallAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallAgentResponse
       */
      Models::InstallAgentResponse installAgentWithOptions(const Models::InstallAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uses the Cloud Assistant provided by Elastic Compute Service (ECS) to install Enterprise Distributed Application Service (EDAS) Agent and imports ECS instances to EDAS.
       *
       * @description If you call this operation to import an ECS instance into EDAS, the operating system of the ECS instance is not reinstalled. We recommend that you call this operation to import ECS instances into EDAS.
       *
       * @param request InstallAgentRequest
       * @return InstallAgentResponse
       */
      Models::InstallAgentResponse installAgent(const Models::InstallAgentRequest &request);

      /**
       * @summary Queries Alibaba Cloud regions supported by Enterprise Distributed Application Service (EDAS).
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAliyunRegionResponse
       */
      Models::ListAliyunRegionResponse listAliyunRegionWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Alibaba Cloud regions supported by Enterprise Distributed Application Service (EDAS).
       *
       * @return ListAliyunRegionResponse
       */
      Models::ListAliyunRegionResponse listAliyunRegion();

      /**
       * @summary Queries a list of applications.
       *
       * @param request ListApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationResponse
       */
      Models::ListApplicationResponse listApplicationWithOptions(const Models::ListApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of applications.
       *
       * @param request ListApplicationRequest
       * @return ListApplicationResponse
       */
      Models::ListApplicationResponse listApplication(const Models::ListApplicationRequest &request);

      /**
       * @summary Queries elastic compute units (ECUs).
       *
       * @param request ListApplicationEcuRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationEcuResponse
       */
      Models::ListApplicationEcuResponse listApplicationEcuWithOptions(const Models::ListApplicationEcuRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries elastic compute units (ECUs).
       *
       * @param request ListApplicationEcuRequest
       * @return ListApplicationEcuResponse
       */
      Models::ListApplicationEcuResponse listApplicationEcu(const Models::ListApplicationEcuRequest &request);

      /**
       * @summary Queries all permissions.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorityResponse
       */
      Models::ListAuthorityResponse listAuthorityWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all permissions.
       *
       * @return ListAuthorityResponse
       */
      Models::ListAuthorityResponse listAuthority();

      /**
       * @summary Queries Enterprise Distributed Application Service (EDAS) Container versions.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBuildPackResponse
       */
      Models::ListBuildPackResponse listBuildPackWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Enterprise Distributed Application Service (EDAS) Container versions.
       *
       * @return ListBuildPackResponse
       */
      Models::ListBuildPackResponse listBuildPack();

      /**
       * @summary Queries clusters.
       *
       * @param request ListClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterResponse
       */
      Models::ListClusterResponse listClusterWithOptions(const Models::ListClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries clusters.
       *
       * @param request ListClusterRequest
       * @return ListClusterResponse
       */
      Models::ListClusterResponse listCluster(const Models::ListClusterRequest &request);

      /**
       * @summary Queries Elastic Compute Service (ECS) instances in a cluster.
       *
       * @param request ListClusterMembersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterMembersResponse
       */
      Models::ListClusterMembersResponse listClusterMembersWithOptions(const Models::ListClusterMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Elastic Compute Service (ECS) instances in a cluster.
       *
       * @param request ListClusterMembersRequest
       * @return ListClusterMembersResponse
       */
      Models::ListClusterMembersResponse listClusterMembers(const Models::ListClusterMembersRequest &request);

      /**
       * @summary Queries the components that are related to applications in Elastic Compute Service (ECS) clusters.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComponentsResponse
       */
      Models::ListComponentsResponse listComponentsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the components that are related to applications in Elastic Compute Service (ECS) clusters.
       *
       * @return ListComponentsResponse
       */
      Models::ListComponentsResponse listComponents();

      /**
       * @summary Queries configuration templates.
       *
       * @param request ListConfigTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConfigTemplatesResponse
       */
      Models::ListConfigTemplatesResponse listConfigTemplatesWithOptions(const Models::ListConfigTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries configuration templates.
       *
       * @param request ListConfigTemplatesRequest
       * @return ListConfigTemplatesResponse
       */
      Models::ListConfigTemplatesResponse listConfigTemplates(const Models::ListConfigTemplatesRequest &request);

      /**
       * @summary Queries the services that are consumed by an application.
       *
       * @param request ListConsumedServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumedServicesResponse
       */
      Models::ListConsumedServicesResponse listConsumedServicesWithOptions(const Models::ListConsumedServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the services that are consumed by an application.
       *
       * @param request ListConsumedServicesRequest
       * @return ListConsumedServicesResponse
       */
      Models::ListConsumedServicesResponse listConsumedServices(const Models::ListConsumedServicesRequest &request);

      /**
       * @summary Queries the Elastic Compute Service (ECS) instances that can be imported to a specified cluster. This operation is applicable to ECS clusters.
       *
       * @param request ListConvertableEcuRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConvertableEcuResponse
       */
      Models::ListConvertableEcuResponse listConvertableEcuWithOptions(const Models::ListConvertableEcuRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Elastic Compute Service (ECS) instances that can be imported to a specified cluster. This operation is applicable to ECS clusters.
       *
       * @param request ListConvertableEcuRequest
       * @return ListConvertableEcuResponse
       */
      Models::ListConvertableEcuResponse listConvertableEcu(const Models::ListConvertableEcuRequest &request);

      /**
       * @summary Queries the instance groups to which an application is deployed.
       *
       * @param request ListDeployGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeployGroupResponse
       */
      Models::ListDeployGroupResponse listDeployGroupWithOptions(const Models::ListDeployGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance groups to which an application is deployed.
       *
       * @param request ListDeployGroupRequest
       * @return ListDeployGroupResponse
       */
      Models::ListDeployGroupResponse listDeployGroup(const Models::ListDeployGroupRequest &request);

      /**
       * @summary Queries all Elastic Compute Service (ECS) instances that have not been imported to clusters.
       *
       * @param request ListEcsNotInClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEcsNotInClusterResponse
       */
      Models::ListEcsNotInClusterResponse listEcsNotInClusterWithOptions(const Models::ListEcsNotInClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all Elastic Compute Service (ECS) instances that have not been imported to clusters.
       *
       * @param request ListEcsNotInClusterRequest
       * @return ListEcsNotInClusterResponse
       */
      Models::ListEcsNotInClusterResponse listEcsNotInCluster(const Models::ListEcsNotInClusterRequest &request);

      /**
       * @summary Queries the available elastic compute units (ECUs) in a specified namespace.
       *
       * @description ## Terms
       * *   **Namespace**: the logical concept that is used to isolate resources such as clusters, ECS instances, and applications, and microservices published in EDAS. This concept involves the default namespace and custom namespaces. Each region has a default namespace and supports multiple custom namespaces. By default, only the default namespace is available. You do not need to create a custom namespace if you do not want to isolate resources and microservices.
       * *   **Elastic compute unit (ECU)**: After an ECS instance is imported to a cluster, the instance becomes an ECU.
       * *   **Elastic compute container (ECC)**: After you deploy an application to an ECU in a cluster, the ECU becomes an ECC.
       *
       * @param request ListEcuByRegionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEcuByRegionResponse
       */
      Models::ListEcuByRegionResponse listEcuByRegionWithOptions(const Models::ListEcuByRegionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available elastic compute units (ECUs) in a specified namespace.
       *
       * @description ## Terms
       * *   **Namespace**: the logical concept that is used to isolate resources such as clusters, ECS instances, and applications, and microservices published in EDAS. This concept involves the default namespace and custom namespaces. Each region has a default namespace and supports multiple custom namespaces. By default, only the default namespace is available. You do not need to create a custom namespace if you do not want to isolate resources and microservices.
       * *   **Elastic compute unit (ECU)**: After an ECS instance is imported to a cluster, the instance becomes an ECU.
       * *   **Elastic compute container (ECC)**: After you deploy an application to an ECU in a cluster, the ECU becomes an ECC.
       *
       * @param request ListEcuByRegionRequest
       * @return ListEcuByRegionResponse
       */
      Models::ListEcuByRegionResponse listEcuByRegion(const Models::ListEcuByRegionRequest &request);

      /**
       * @summary Queries historical deployment packages of an application.
       *
       * @param request ListHistoryDeployVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHistoryDeployVersionResponse
       */
      Models::ListHistoryDeployVersionResponse listHistoryDeployVersionWithOptions(const Models::ListHistoryDeployVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries historical deployment packages of an application.
       *
       * @param request ListHistoryDeployVersionRequest
       * @return ListHistoryDeployVersionResponse
       */
      Models::ListHistoryDeployVersionResponse listHistoryDeployVersion(const Models::ListHistoryDeployVersionRequest &request);

      /**
       * @summary Queries Kubernetes ConfigMaps.
       *
       * @param request ListK8sConfigMapsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListK8sConfigMapsResponse
       */
      Models::ListK8sConfigMapsResponse listK8sConfigMapsWithOptions(const Models::ListK8sConfigMapsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Kubernetes ConfigMaps.
       *
       * @param request ListK8sConfigMapsRequest
       * @return ListK8sConfigMapsResponse
       */
      Models::ListK8sConfigMapsResponse listK8sConfigMaps(const Models::ListK8sConfigMapsRequest &request);

      /**
       * @summary Queries ingresses.
       *
       * @param request ListK8sIngressRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListK8sIngressRulesResponse
       */
      Models::ListK8sIngressRulesResponse listK8sIngressRulesWithOptions(const Models::ListK8sIngressRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries ingresses.
       *
       * @param request ListK8sIngressRulesRequest
       * @return ListK8sIngressRulesResponse
       */
      Models::ListK8sIngressRulesResponse listK8sIngressRules(const Models::ListK8sIngressRulesRequest &request);

      /**
       * @summary Queries namespaces for a Kubernetes cluster.
       *
       * @param request ListK8sNamespacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListK8sNamespacesResponse
       */
      Models::ListK8sNamespacesResponse listK8sNamespacesWithOptions(const Models::ListK8sNamespacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries namespaces for a Kubernetes cluster.
       *
       * @param request ListK8sNamespacesRequest
       * @return ListK8sNamespacesResponse
       */
      Models::ListK8sNamespacesResponse listK8sNamespaces(const Models::ListK8sNamespacesRequest &request);

      /**
       * @summary Queries Kubernetes Secrets.
       *
       * @param request ListK8sSecretsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListK8sSecretsResponse
       */
      Models::ListK8sSecretsResponse listK8sSecretsWithOptions(const Models::ListK8sSecretsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Kubernetes Secrets.
       *
       * @param request ListK8sSecretsRequest
       * @return ListK8sSecretsResponse
       */
      Models::ListK8sSecretsResponse listK8sSecrets(const Models::ListK8sSecretsRequest &request);

      /**
       * @summary Queries service methods.
       *
       * @param request ListMethodsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMethodsResponse
       */
      Models::ListMethodsResponse listMethodsWithOptions(const Models::ListMethodsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries service methods.
       *
       * @param request ListMethodsRequest
       * @return ListMethodsResponse
       */
      Models::ListMethodsResponse listMethods(const Models::ListMethodsRequest &request);

      /**
       * @summary Queries the services that are published by an application.
       *
       * @param request ListPublishedServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublishedServicesResponse
       */
      Models::ListPublishedServicesResponse listPublishedServicesWithOptions(const Models::ListPublishedServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the services that are published by an application.
       *
       * @param request ListPublishedServicesRequest
       * @return ListPublishedServicesResponse
       */
      Models::ListPublishedServicesResponse listPublishedServices(const Models::ListPublishedServicesRequest &request);

      /**
       * @summary Queries the change processes of an application.
       *
       * @param request ListRecentChangeOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecentChangeOrderResponse
       */
      Models::ListRecentChangeOrderResponse listRecentChangeOrderWithOptions(const Models::ListRecentChangeOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the change processes of an application.
       *
       * @param request ListRecentChangeOrderRequest
       * @return ListRecentChangeOrderResponse
       */
      Models::ListRecentChangeOrderResponse listRecentChangeOrder(const Models::ListRecentChangeOrderRequest &request);

      /**
       * @summary Queries resource groups.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupResponse
       */
      Models::ListResourceGroupResponse listResourceGroupWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resource groups.
       *
       * @return ListResourceGroupResponse
       */
      Models::ListResourceGroupResponse listResourceGroup();

      /**
       * @summary Queries roles.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoleResponse
       */
      Models::ListRoleResponse listRoleWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries roles.
       *
       * @return ListRoleResponse
       */
      Models::ListRoleResponse listRole();

      /**
       * @summary Queries elastic compute units (ECUs) available for scaling out an application in a specified cluster or the cluster where the application is deployed. This operation is applicable to Elastic Compute Service (ECS) clusters.
       *
       * @description ## Terms
       * *   **Namespace**: the logical concept that is used to isolate resources such as clusters, ECS instances, and applications, and microservices published in EDAS. This concept involves the default namespace and custom namespaces. Each region has a default namespace and supports multiple custom namespaces. By default, only the default namespace is available. You do not need to create a custom namespace if you do not want to isolate resources and microservices.
       * *   **Elastic compute unit (ECU)**: After an ECS instance is imported to a cluster, the instance becomes an ECU.
       * *   **Elastic compute container (ECC)**: After you deploy an application to an ECU in a cluster, the ECU becomes an ECC.
       *
       * @param request ListScaleOutEcuRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScaleOutEcuResponse
       */
      Models::ListScaleOutEcuResponse listScaleOutEcuWithOptions(const Models::ListScaleOutEcuRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries elastic compute units (ECUs) available for scaling out an application in a specified cluster or the cluster where the application is deployed. This operation is applicable to Elastic Compute Service (ECS) clusters.
       *
       * @description ## Terms
       * *   **Namespace**: the logical concept that is used to isolate resources such as clusters, ECS instances, and applications, and microservices published in EDAS. This concept involves the default namespace and custom namespaces. Each region has a default namespace and supports multiple custom namespaces. By default, only the default namespace is available. You do not need to create a custom namespace if you do not want to isolate resources and microservices.
       * *   **Elastic compute unit (ECU)**: After an ECS instance is imported to a cluster, the instance becomes an ECU.
       * *   **Elastic compute container (ECC)**: After you deploy an application to an ECU in a cluster, the ECU becomes an ECC.
       *
       * @param request ListScaleOutEcuRequest
       * @return ListScaleOutEcuResponse
       */
      Models::ListScaleOutEcuResponse listScaleOutEcu(const Models::ListScaleOutEcuRequest &request);

      /**
       * @summary Queries the service groups of a High-Speed Service Framework (HSF) application.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceGroupsResponse
       */
      Models::ListServiceGroupsResponse listServiceGroupsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the service groups of a High-Speed Service Framework (HSF) application.
       *
       * @return ListServiceGroupsResponse
       */
      Models::ListServiceGroupsResponse listServiceGroups();

      /**
       * @summary Queries Server Load Balancer (SLB) instances.
       *
       * @param request ListSlbRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSlbResponse
       */
      Models::ListSlbResponse listSlbWithOptions(const Models::ListSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Server Load Balancer (SLB) instances.
       *
       * @param request ListSlbRequest
       * @return ListSlbResponse
       */
      Models::ListSlbResponse listSlb(const Models::ListSlbRequest &request);

      /**
       * @summary Queries the Resource Access Management (RAM) users.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubAccountResponse
       */
      Models::ListSubAccountResponse listSubAccountWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Resource Access Management (RAM) users.
       *
       * @return ListSubAccountResponse
       */
      Models::ListSubAccountResponse listSubAccount();

      /**
       * @summary Queries lanes in a lane group.
       *
       * @param request ListSwimmingLaneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSwimmingLaneResponse
       */
      Models::ListSwimmingLaneResponse listSwimmingLaneWithOptions(const Models::ListSwimmingLaneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries lanes in a lane group.
       *
       * @param request ListSwimmingLaneRequest
       * @return ListSwimmingLaneResponse
       */
      Models::ListSwimmingLaneResponse listSwimmingLane(const Models::ListSwimmingLaneRequest &request);

      /**
       * @summary Queries lane groups.
       *
       * @param request ListSwimmingLaneGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSwimmingLaneGroupResponse
       */
      Models::ListSwimmingLaneGroupResponse listSwimmingLaneGroupWithOptions(const Models::ListSwimmingLaneGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries lane groups.
       *
       * @param request ListSwimmingLaneGroupRequest
       * @return ListSwimmingLaneGroupResponse
       */
      Models::ListSwimmingLaneGroupResponse listSwimmingLaneGroup(const Models::ListSwimmingLaneGroupRequest &request);

      /**
       * @summary Queries the tags that are added to resources.
       *
       * @param request ListTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries custom namespaces.
       *
       * @param request ListUserDefineRegionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserDefineRegionResponse
       */
      Models::ListUserDefineRegionResponse listUserDefineRegionWithOptions(const Models::ListUserDefineRegionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom namespaces.
       *
       * @param request ListUserDefineRegionRequest
       * @return ListUserDefineRegionResponse
       */
      Models::ListUserDefineRegionResponse listUserDefineRegion(const Models::ListUserDefineRegionRequest &request);

      /**
       * @summary The HTTP status code returned.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcResponse
       */
      Models::ListVpcResponse listVpcWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The HTTP status code returned.
       *
       * @return ListVpcResponse
       */
      Models::ListVpcResponse listVpc();

      /**
       * @summary Migrates an elastic compute unit (ECU) to the default cluster in a specified namespace.
       *
       * @description ## Limits
       * We recommend that you do not call this operation. Instead, we recommend that you call the TransformClusterMember operation. For more information, see [TransformClusterMember](https://help.aliyun.com/document_detail/71514.html).
       * When you call this operation to import an Elastic Compute Service (ECS) instance, the operating system of the ECS instance is reinstalled. After the operating system is reinstalled, all data of the ECS instance is deleted. You must set a logon password for the ECS instance. Make sure that no important data exists on or data has been backed up for the ECS instance that you want to import.
       * ## Terms
       * *   **Namespace**: the logical concept that is used to isolate resources and microservices in Enterprise Distributed Application Service (EDAS). The resources include clusters, ECS instances, and applications. You can use a default or custom namespace. Each region has a default namespace and supports multiple custom namespaces. By default, only the default namespace is available. You do not need to create a custom namespace if you do not want to isolate resources or microservices.
       * *   **ECU**: After an ECS instance is imported to a cluster, the instance becomes an ECU.
       * *   **Elastic compute container (ECC)**: After you deploy an application to an ECU in a cluster, the ECU becomes an ECC.
       *
       * @param request MigrateEcuRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateEcuResponse
       */
      Models::MigrateEcuResponse migrateEcuWithOptions(const Models::MigrateEcuRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates an elastic compute unit (ECU) to the default cluster in a specified namespace.
       *
       * @description ## Limits
       * We recommend that you do not call this operation. Instead, we recommend that you call the TransformClusterMember operation. For more information, see [TransformClusterMember](https://help.aliyun.com/document_detail/71514.html).
       * When you call this operation to import an Elastic Compute Service (ECS) instance, the operating system of the ECS instance is reinstalled. After the operating system is reinstalled, all data of the ECS instance is deleted. You must set a logon password for the ECS instance. Make sure that no important data exists on or data has been backed up for the ECS instance that you want to import.
       * ## Terms
       * *   **Namespace**: the logical concept that is used to isolate resources and microservices in Enterprise Distributed Application Service (EDAS). The resources include clusters, ECS instances, and applications. You can use a default or custom namespace. Each region has a default namespace and supports multiple custom namespaces. By default, only the default namespace is available. You do not need to create a custom namespace if you do not want to isolate resources or microservices.
       * *   **ECU**: After an ECS instance is imported to a cluster, the instance becomes an ECU.
       * *   **Elastic compute container (ECC)**: After you deploy an application to an ECU in a cluster, the ECU becomes an ECC.
       *
       * @param request MigrateEcuRequest
       * @return MigrateEcuResponse
       */
      Models::MigrateEcuResponse migrateEcu(const Models::MigrateEcuRequest &request);

      /**
       * @summary Modifies the scaling rule for an application.
       *
       * @param request ModifyScalingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScalingRuleResponse
       */
      Models::ModifyScalingRuleResponse modifyScalingRuleWithOptions(const Models::ModifyScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the scaling rule for an application.
       *
       * @param request ModifyScalingRuleRequest
       * @return ModifyScalingRuleResponse
       */
      Models::ModifyScalingRuleResponse modifyScalingRule(const Models::ModifyScalingRuleRequest &request);

      /**
       * @summary Queries the status of an application.
       *
       * @param request QueryApplicationStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryApplicationStatusResponse
       */
      Models::QueryApplicationStatusResponse queryApplicationStatusWithOptions(const Models::QueryApplicationStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of an application.
       *
       * @param request QueryApplicationStatusRequest
       * @return QueryApplicationStatusResponse
       */
      Models::QueryApplicationStatusResponse queryApplicationStatus(const Models::QueryApplicationStatusRequest &request);

      /**
       * @summary Queries details about an elastic compute container (ECC). This operation is applicable to Container Service for Kubernetes (ACK) clusters.
       *
       * @param request QueryEccInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEccInfoResponse
       */
      Models::QueryEccInfoResponse queryEccInfoWithOptions(const Models::QueryEccInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details about an elastic compute container (ECC). This operation is applicable to Container Service for Kubernetes (ACK) clusters.
       *
       * @param request QueryEccInfoRequest
       * @return QueryEccInfoResponse
       */
      Models::QueryEccInfoResponse queryEccInfo(const Models::QueryEccInfoRequest &request);

      /**
       * @summary Queries the elastic compute units (ECUs) that can be migrated.
       *
       * @param request QueryMigrateEcuListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMigrateEcuListResponse
       */
      Models::QueryMigrateEcuListResponse queryMigrateEcuListWithOptions(const Models::QueryMigrateEcuListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the elastic compute units (ECUs) that can be migrated.
       *
       * @param request QueryMigrateEcuListRequest
       * @return QueryMigrateEcuListResponse
       */
      Models::QueryMigrateEcuListResponse queryMigrateEcuList(const Models::QueryMigrateEcuListRequest &request);

      /**
       * @summary Queries the namespaces to which an instance can be migrated.
       *
       * @param request QueryMigrateRegionListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMigrateRegionListResponse
       */
      Models::QueryMigrateRegionListResponse queryMigrateRegionListWithOptions(const Models::QueryMigrateRegionListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the namespaces to which an instance can be migrated.
       *
       * @param request QueryMigrateRegionListRequest
       * @return QueryMigrateRegionListResponse
       */
      Models::QueryMigrateRegionListResponse queryMigrateRegionList(const Models::QueryMigrateRegionListRequest &request);

      /**
       * @summary Queries the configurations of different regions that are supported by Enterprise Distributed Application Service (EDAS).
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRegionConfigResponse
       */
      Models::QueryRegionConfigResponse queryRegionConfigWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of different regions that are supported by Enterprise Distributed Application Service (EDAS).
       *
       * @return QueryRegionConfigResponse
       */
      Models::QueryRegionConfigResponse queryRegionConfig();

      /**
       * @summary Queries the configuration details of Log Service for an application.
       *
       * @param request QuerySlsLogStoreListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySlsLogStoreListResponse
       */
      Models::QuerySlsLogStoreListResponse querySlsLogStoreListWithOptions(const Models::QuerySlsLogStoreListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration details of Log Service for an application.
       *
       * @param request QuerySlsLogStoreListRequest
       * @return QuerySlsLogStoreListResponse
       */
      Models::QuerySlsLogStoreListResponse querySlsLogStoreList(const Models::QuerySlsLogStoreListRequest &request);

      /**
       * @summary Resets an application.
       *
       * @param request ResetApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetApplicationResponse
       */
      Models::ResetApplicationResponse resetApplicationWithOptions(const Models::ResetApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets an application.
       *
       * @param request ResetApplicationRequest
       * @return ResetApplicationResponse
       */
      Models::ResetApplicationResponse resetApplication(const Models::ResetApplicationRequest &request);

      /**
       * @summary Restarts an application. This operation is applicable to applications that are deployed in Elastic Compute Service (ECS) clusters.
       *
       * @param request RestartApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartApplicationResponse
       */
      Models::RestartApplicationResponse restartApplicationWithOptions(const Models::RestartApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an application. This operation is applicable to applications that are deployed in Elastic Compute Service (ECS) clusters.
       *
       * @param request RestartApplicationRequest
       * @return RestartApplicationResponse
       */
      Models::RestartApplicationResponse restartApplication(const Models::RestartApplicationRequest &request);

      /**
       * @summary Restarts an application that is deployed in a Container Service for Kubernetes (ACK) cluster or a serverless Kubernetes cluster.
       *
       * @param request RestartK8sApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartK8sApplicationResponse
       */
      Models::RestartK8sApplicationResponse restartK8sApplicationWithOptions(const Models::RestartK8sApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an application that is deployed in a Container Service for Kubernetes (ACK) cluster or a serverless Kubernetes cluster.
       *
       * @param request RestartK8sApplicationRequest
       * @return RestartK8sApplicationResponse
       */
      Models::RestartK8sApplicationResponse restartK8sApplication(const Models::RestartK8sApplicationRequest &request);

      /**
       * @summary Retries a failed process.
       *
       * @param request RetryChangeOrderTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryChangeOrderTaskResponse
       */
      Models::RetryChangeOrderTaskResponse retryChangeOrderTaskWithOptions(const Models::RetryChangeOrderTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retries a failed process.
       *
       * @param request RetryChangeOrderTaskRequest
       * @return RetryChangeOrderTaskResponse
       */
      Models::RetryChangeOrderTaskResponse retryChangeOrderTask(const Models::RetryChangeOrderTaskRequest &request);

      /**
       * @summary Rolls back an application.
       *
       * @param request RollbackApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackApplicationResponse
       */
      Models::RollbackApplicationResponse rollbackApplicationWithOptions(const Models::RollbackApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back an application.
       *
       * @param request RollbackApplicationRequest
       * @return RollbackApplicationResponse
       */
      Models::RollbackApplicationResponse rollbackApplication(const Models::RollbackApplicationRequest &request);

      /**
       * @summary Terminates an application change process and rolls back the application. This operation is applicable to applications that are deployed in Elastic Compute Service (ECS) clusters.
       *
       * @param request RollbackChangeOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackChangeOrderResponse
       */
      Models::RollbackChangeOrderResponse rollbackChangeOrderWithOptions(const Models::RollbackChangeOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates an application change process and rolls back the application. This operation is applicable to applications that are deployed in Elastic Compute Service (ECS) clusters.
       *
       * @param request RollbackChangeOrderRequest
       * @return RollbackChangeOrderResponse
       */
      Models::RollbackChangeOrderResponse rollbackChangeOrder(const Models::RollbackChangeOrderRequest &request);

      /**
       * @summary Scales in an application.
       *
       * @param request ScaleInApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScaleInApplicationResponse
       */
      Models::ScaleInApplicationResponse scaleInApplicationWithOptions(const Models::ScaleInApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales in an application.
       *
       * @param request ScaleInApplicationRequest
       * @return ScaleInApplicationResponse
       */
      Models::ScaleInApplicationResponse scaleInApplication(const Models::ScaleInApplicationRequest &request);

      /**
       * @summary Scales out or in an application that is deployed in a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request ScaleK8sApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScaleK8sApplicationResponse
       */
      Models::ScaleK8sApplicationResponse scaleK8sApplicationWithOptions(const Models::ScaleK8sApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales out or in an application that is deployed in a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request ScaleK8sApplicationRequest
       * @return ScaleK8sApplicationResponse
       */
      Models::ScaleK8sApplicationResponse scaleK8sApplication(const Models::ScaleK8sApplicationRequest &request);

      /**
       * @summary Scales out an application.
       *
       * @param request ScaleOutApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScaleOutApplicationResponse
       */
      Models::ScaleOutApplicationResponse scaleOutApplicationWithOptions(const Models::ScaleOutApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales out an application.
       *
       * @param request ScaleOutApplicationRequest
       * @return ScaleOutApplicationResponse
       */
      Models::ScaleOutApplicationResponse scaleOutApplication(const Models::ScaleOutApplicationRequest &request);

      /**
       * @summary Purchases Elastic Compute Service (ECS) instances in the Enterprise Distributed Application Service (EDAS) console and adds the purchased ECS instances to the specified instance group of an application.
       *
       * @description ## Limits
       * Assume that the auto scaling feature is configured and enabled for an application. When an auto scale-in is triggered for the application, the ECS instances that are purchased by calling this operation are removed first.
       *
       * @param request ScaleoutApplicationWithNewInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScaleoutApplicationWithNewInstancesResponse
       */
      Models::ScaleoutApplicationWithNewInstancesResponse scaleoutApplicationWithNewInstancesWithOptions(const Models::ScaleoutApplicationWithNewInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases Elastic Compute Service (ECS) instances in the Enterprise Distributed Application Service (EDAS) console and adds the purchased ECS instances to the specified instance group of an application.
       *
       * @description ## Limits
       * Assume that the auto scaling feature is configured and enabled for an application. When an auto scale-in is triggered for the application, the ECS instances that are purchased by calling this operation are removed first.
       *
       * @param request ScaleoutApplicationWithNewInstancesRequest
       * @return ScaleoutApplicationWithNewInstancesResponse
       */
      Models::ScaleoutApplicationWithNewInstancesResponse scaleoutApplicationWithNewInstances(const Models::ScaleoutApplicationWithNewInstancesRequest &request);

      /**
       * @summary Starts an application.
       *
       * @param request StartApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartApplicationResponse
       */
      Models::StartApplicationResponse startApplicationWithOptions(const Models::StartApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an application.
       *
       * @param request StartApplicationRequest
       * @return StartApplicationResponse
       */
      Models::StartApplicationResponse startApplication(const Models::StartApplicationRequest &request);

      /**
       * @summary Starts precheck for Kubernetes application changes.
       *
       * @param request StartK8sAppPrecheckRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartK8sAppPrecheckResponse
       */
      Models::StartK8sAppPrecheckResponse startK8sAppPrecheckWithOptions(const Models::StartK8sAppPrecheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts precheck for Kubernetes application changes.
       *
       * @param request StartK8sAppPrecheckRequest
       * @return StartK8sAppPrecheckResponse
       */
      Models::StartK8sAppPrecheckResponse startK8sAppPrecheck(const Models::StartK8sAppPrecheckRequest &request);

      /**
       * @summary Starts an application in a Container Service for Kubernetes (ACK) cluster or Serverless Kubernetes cluster.
       *
       * @param request StartK8sApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartK8sApplicationResponse
       */
      Models::StartK8sApplicationResponse startK8sApplicationWithOptions(const Models::StartK8sApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an application in a Container Service for Kubernetes (ACK) cluster or Serverless Kubernetes cluster.
       *
       * @param request StartK8sApplicationRequest
       * @return StartK8sApplicationResponse
       */
      Models::StartK8sApplicationResponse startK8sApplication(const Models::StartK8sApplicationRequest &request);

      /**
       * @summary Stops an application.
       *
       * @param request StopApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopApplicationResponse
       */
      Models::StopApplicationResponse stopApplicationWithOptions(const Models::StopApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an application.
       *
       * @param request StopApplicationRequest
       * @return StopApplicationResponse
       */
      Models::StopApplicationResponse stopApplication(const Models::StopApplicationRequest &request);

      /**
       * @summary Stops an application in a Container Service for Kubernetes (ACK) cluster or a Serverless Kubernetes cluster.
       *
       * @param request StopK8sApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopK8sApplicationResponse
       */
      Models::StopK8sApplicationResponse stopK8sApplicationWithOptions(const Models::StopK8sApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an application in a Container Service for Kubernetes (ACK) cluster or a Serverless Kubernetes cluster.
       *
       * @param request StopK8sApplicationRequest
       * @return StopK8sApplicationResponse
       */
      Models::StopK8sApplicationResponse stopK8sApplication(const Models::StopK8sApplicationRequest &request);

      /**
       * @summary Queries the status of the advanced application monitoring feature or configures this feature for an application that is deployed in an Elastic Compute Service (ECS) or Kubernetes cluster.
       *
       * @description To call the SwitchAdvancedMonitoring operation, you must make sure that the version of Enterprise Distributed Application Service (EDAS) SDK for Java or Python is 3.15.2 or later.
       *
       * @param request SwitchAdvancedMonitoringRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchAdvancedMonitoringResponse
       */
      Models::SwitchAdvancedMonitoringResponse switchAdvancedMonitoringWithOptions(const Models::SwitchAdvancedMonitoringRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the advanced application monitoring feature or configures this feature for an application that is deployed in an Elastic Compute Service (ECS) or Kubernetes cluster.
       *
       * @description To call the SwitchAdvancedMonitoring operation, you must make sure that the version of Enterprise Distributed Application Service (EDAS) SDK for Java or Python is 3.15.2 or later.
       *
       * @param request SwitchAdvancedMonitoringRequest
       * @return SwitchAdvancedMonitoringResponse
       */
      Models::SwitchAdvancedMonitoringResponse switchAdvancedMonitoring(const Models::SwitchAdvancedMonitoringRequest &request);

      /**
       * @summary Synchronizes the basic Alibaba Cloud resources that belong to your account to Enterprise Distributed Application Service (EDAS). This operation is applicable to Elastic Compute Service (ECS) clusters.
       *
       * @description If you call this operation to synchronize ECS resource information, all instance data is synchronized from ECS. If you have more than 100 ECS instances, we recommend that you do not frequently call this operation.
       *
       * @param request SynchronizeResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SynchronizeResourceResponse
       */
      Models::SynchronizeResourceResponse synchronizeResourceWithOptions(const Models::SynchronizeResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes the basic Alibaba Cloud resources that belong to your account to Enterprise Distributed Application Service (EDAS). This operation is applicable to Elastic Compute Service (ECS) clusters.
       *
       * @description If you call this operation to synchronize ECS resource information, all instance data is synchronized from ECS. If you have more than 100 ECS instances, we recommend that you do not frequently call this operation.
       *
       * @param request SynchronizeResourceRequest
       * @return SynchronizeResourceResponse
       */
      Models::SynchronizeResourceResponse synchronizeResource(const Models::SynchronizeResourceRequest &request);

      /**
       * @summary Creates tags and adds the tags to resources at a time.
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates tags and adds the tags to resources at a time.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Imports or migrates one or more Elastic Compute Service (ECS) instances to a cluster.
       *
       * @description ## Limits
       * When you call this operation to import an ECS instance, the operating system of the ECS instance is reinstalled. After the operating system is reinstalled, all data of the ECS instance is deleted. You must set a logon password for the ECS instance. Make sure that no important data exists on or data has been backed up for the ECS instance that you want to import.
       *
       * @param request TransformClusterMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransformClusterMemberResponse
       */
      Models::TransformClusterMemberResponse transformClusterMemberWithOptions(const Models::TransformClusterMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports or migrates one or more Elastic Compute Service (ECS) instances to a cluster.
       *
       * @description ## Limits
       * When you call this operation to import an ECS instance, the operating system of the ECS instance is reinstalled. After the operating system is reinstalled, all data of the ECS instance is deleted. You must set a logon password for the ECS instance. Make sure that no important data exists on or data has been backed up for the ECS instance that you want to import.
       *
       * @param request TransformClusterMemberRequest
       * @return TransformClusterMemberResponse
       */
      Models::TransformClusterMemberResponse transformClusterMember(const Models::TransformClusterMemberRequest &request);

      /**
       * @summary Unbinds a Server Load Balancer (SLB) instance from an application that is deployed in a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request UnbindK8sSlbRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindK8sSlbResponse
       */
      Models::UnbindK8sSlbResponse unbindK8sSlbWithOptions(const Models::UnbindK8sSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a Server Load Balancer (SLB) instance from an application that is deployed in a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request UnbindK8sSlbRequest
       * @return UnbindK8sSlbResponse
       */
      Models::UnbindK8sSlbResponse unbindK8sSlb(const Models::UnbindK8sSlbRequest &request);

      /**
       * @summary Unbinds a Server Load Balancer (SLB) instance from an application.
       *
       * @param request UnbindSlbRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindSlbResponse
       */
      Models::UnbindSlbResponse unbindSlbWithOptions(const Models::UnbindSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a Server Load Balancer (SLB) instance from an application.
       *
       * @param request UnbindSlbRequest
       * @return UnbindSlbResponse
       */
      Models::UnbindSlbResponse unbindSlb(const Models::UnbindSlbRequest &request);

      /**
       * @summary Removes one or more tags from one or more resources.
       *
       * @param request UntagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes one or more tags from one or more resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Modifies the information about an account.
       *
       * @param request UpdateAccountInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAccountInfoResponse
       */
      Models::UpdateAccountInfoResponse updateAccountInfoWithOptions(const Models::UpdateAccountInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about an account.
       *
       * @param request UpdateAccountInfoRequest
       * @return UpdateAccountInfoResponse
       */
      Models::UpdateAccountInfoResponse updateAccountInfo(const Models::UpdateAccountInfoRequest &request);

      /**
       * @summary Modifies the name, description, and owner of an application.
       *
       * @param request UpdateApplicationBaseInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationBaseInfoResponse
       */
      Models::UpdateApplicationBaseInfoResponse updateApplicationBaseInfoWithOptions(const Models::UpdateApplicationBaseInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, and owner of an application.
       *
       * @param request UpdateApplicationBaseInfoRequest
       * @return UpdateApplicationBaseInfoResponse
       */
      Models::UpdateApplicationBaseInfoResponse updateApplicationBaseInfo(const Models::UpdateApplicationBaseInfoRequest &request);

      /**
       * @summary Modifies an auto scaling policy for an application.
       *
       * @param request UpdateApplicationScalingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationScalingRuleResponse
       */
      Models::UpdateApplicationScalingRuleResponse updateApplicationScalingRuleWithOptions(const Models::UpdateApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an auto scaling policy for an application.
       *
       * @param request UpdateApplicationScalingRuleRequest
       * @return UpdateApplicationScalingRuleResponse
       */
      Models::UpdateApplicationScalingRuleResponse updateApplicationScalingRule(const Models::UpdateApplicationScalingRuleRequest &request);

      /**
       * @summary Modifies a configuration template.
       *
       * @param request UpdateConfigTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConfigTemplateResponse
       */
      Models::UpdateConfigTemplateResponse updateConfigTemplateWithOptions(const Models::UpdateConfigTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a configuration template.
       *
       * @param request UpdateConfigTemplateRequest
       * @return UpdateConfigTemplateResponse
       */
      Models::UpdateConfigTemplateResponse updateConfigTemplate(const Models::UpdateConfigTemplateRequest &request);

      /**
       * @summary Updates the Enterprise Distributed Application Service (EDAS) Container version of a High-Speed Service Framework (HSF) application. EDAS Container includes Ali-Tomcat and Pandora.
       *
       * @param request UpdateContainerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContainerResponse
       */
      Models::UpdateContainerResponse updateContainerWithOptions(const Models::UpdateContainerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the Enterprise Distributed Application Service (EDAS) Container version of a High-Speed Service Framework (HSF) application. EDAS Container includes Ali-Tomcat and Pandora.
       *
       * @param request UpdateContainerRequest
       * @return UpdateContainerResponse
       */
      Models::UpdateContainerResponse updateContainer(const Models::UpdateContainerRequest &request);

      /**
       * @summary Configures the Tomcat container for an application or application instance group in an Elastic Compute Service (ECS) cluster.
       *
       * @param request UpdateContainerConfigurationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContainerConfigurationResponse
       */
      Models::UpdateContainerConfigurationResponse updateContainerConfigurationWithOptions(const Models::UpdateContainerConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the Tomcat container for an application or application instance group in an Elastic Compute Service (ECS) cluster.
       *
       * @param request UpdateContainerConfigurationRequest
       * @return UpdateContainerConfigurationResponse
       */
      Models::UpdateContainerConfigurationResponse updateContainerConfiguration(const Models::UpdateContainerConfigurationRequest &request);

      /**
       * @summary Changes the health check URL for an application.
       *
       * @param request UpdateHealthCheckUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHealthCheckUrlResponse
       */
      Models::UpdateHealthCheckUrlResponse updateHealthCheckUrlWithOptions(const Models::UpdateHealthCheckUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the health check URL for an application.
       *
       * @param request UpdateHealthCheckUrlRequest
       * @return UpdateHealthCheckUrlResponse
       */
      Models::UpdateHealthCheckUrlResponse updateHealthCheckUrl(const Models::UpdateHealthCheckUrlRequest &request);

      /**
       * @summary Mounts a script to an application or application instance group.
       *
       * @param request UpdateHookConfigurationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHookConfigurationResponse
       */
      Models::UpdateHookConfigurationResponse updateHookConfigurationWithOptions(const Models::UpdateHookConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Mounts a script to an application or application instance group.
       *
       * @param request UpdateHookConfigurationRequest
       * @return UpdateHookConfigurationResponse
       */
      Models::UpdateHookConfigurationResponse updateHookConfiguration(const Models::UpdateHookConfigurationRequest &request);

      /**
       * @summary Configures the Java virtual machine (JVM) parameters for an application or an instance group where the application is deployed.
       *
       * @param request UpdateJvmConfigurationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJvmConfigurationResponse
       */
      Models::UpdateJvmConfigurationResponse updateJvmConfigurationWithOptions(const Models::UpdateJvmConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the Java virtual machine (JVM) parameters for an application or an instance group where the application is deployed.
       *
       * @param request UpdateJvmConfigurationRequest
       * @return UpdateJvmConfigurationResponse
       */
      Models::UpdateJvmConfigurationResponse updateJvmConfiguration(const Models::UpdateJvmConfigurationRequest &request);

      /**
       * @summary Modifies basic information about an application that is deployed in a Kubernetes cluster.
       *
       * @param request UpdateK8sApplicationBaseInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateK8sApplicationBaseInfoResponse
       */
      Models::UpdateK8sApplicationBaseInfoResponse updateK8sApplicationBaseInfoWithOptions(const Models::UpdateK8sApplicationBaseInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies basic information about an application that is deployed in a Kubernetes cluster.
       *
       * @param request UpdateK8sApplicationBaseInfoRequest
       * @return UpdateK8sApplicationBaseInfoResponse
       */
      Models::UpdateK8sApplicationBaseInfoResponse updateK8sApplicationBaseInfo(const Models::UpdateK8sApplicationBaseInfoRequest &request);

      /**
       * @summary Updates the configuration of an application in a Container Service for Kubernetes (ACK) or Serverless Kubernetes cluster.
       *
       * @param request UpdateK8sApplicationConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateK8sApplicationConfigResponse
       */
      Models::UpdateK8sApplicationConfigResponse updateK8sApplicationConfigWithOptions(const Models::UpdateK8sApplicationConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of an application in a Container Service for Kubernetes (ACK) or Serverless Kubernetes cluster.
       *
       * @param request UpdateK8sApplicationConfigRequest
       * @return UpdateK8sApplicationConfigResponse
       */
      Models::UpdateK8sApplicationConfigResponse updateK8sApplicationConfig(const Models::UpdateK8sApplicationConfigRequest &request);

      /**
       * @summary Modifies a Kubernetes ConfigMap.
       *
       * @param request UpdateK8sConfigMapRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateK8sConfigMapResponse
       */
      Models::UpdateK8sConfigMapResponse updateK8sConfigMapWithOptions(const Models::UpdateK8sConfigMapRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a Kubernetes ConfigMap.
       *
       * @param request UpdateK8sConfigMapRequest
       * @return UpdateK8sConfigMapResponse
       */
      Models::UpdateK8sConfigMapResponse updateK8sConfigMap(const Models::UpdateK8sConfigMapRequest &request);

      /**
       * @summary Updates an ingress.
       *
       * @param request UpdateK8sIngressRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateK8sIngressRuleResponse
       */
      Models::UpdateK8sIngressRuleResponse updateK8sIngressRuleWithOptions(const Models::UpdateK8sIngressRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an ingress.
       *
       * @param request UpdateK8sIngressRuleRequest
       * @return UpdateK8sIngressRuleResponse
       */
      Models::UpdateK8sIngressRuleResponse updateK8sIngressRule(const Models::UpdateK8sIngressRuleRequest &request);

      /**
       * @summary Updates a specified resource in a Kubernetes cluster.
       *
       * @description > You can update only Deployments.
       *
       * @param request UpdateK8sResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateK8sResourceResponse
       */
      Models::UpdateK8sResourceResponse updateK8sResourceWithOptions(const Models::UpdateK8sResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a specified resource in a Kubernetes cluster.
       *
       * @description > You can update only Deployments.
       *
       * @param request UpdateK8sResourceRequest
       * @return UpdateK8sResourceResponse
       */
      Models::UpdateK8sResourceResponse updateK8sResource(const Models::UpdateK8sResourceRequest &request);

      /**
       * @summary Modifies a Kubernetes Secret.
       *
       * @param request UpdateK8sSecretRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateK8sSecretResponse
       */
      Models::UpdateK8sSecretResponse updateK8sSecretWithOptions(const Models::UpdateK8sSecretRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a Kubernetes Secret.
       *
       * @param request UpdateK8sSecretRequest
       * @return UpdateK8sSecretResponse
       */
      Models::UpdateK8sSecretResponse updateK8sSecret(const Models::UpdateK8sSecretRequest &request);

      /**
       * @summary Updates an application service in a Kubernetes cluster.
       *
       * @param request UpdateK8sServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateK8sServiceResponse
       */
      Models::UpdateK8sServiceResponse updateK8sServiceWithOptions(const Models::UpdateK8sServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an application service in a Kubernetes cluster.
       *
       * @param request UpdateK8sServiceRequest
       * @return UpdateK8sServiceResponse
       */
      Models::UpdateK8sServiceResponse updateK8sService(const Models::UpdateK8sServiceRequest &request);

      /**
       * @summary Updates the Server Load Balancer (SLB) instance bound to an application that is deployed in a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request UpdateK8sSlbRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateK8sSlbResponse
       */
      Models::UpdateK8sSlbResponse updateK8sSlbWithOptions(const Models::UpdateK8sSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the Server Load Balancer (SLB) instance bound to an application that is deployed in a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request UpdateK8sSlbRequest
       * @return UpdateK8sSlbResponse
       */
      Models::UpdateK8sSlbResponse updateK8sSlb(const Models::UpdateK8sSlbRequest &request);

      /**
       * @summary 更新本地设置
       *
       * @param request UpdateLocalitySettingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLocalitySettingResponse
       */
      Models::UpdateLocalitySettingResponse updateLocalitySettingWithOptions(const Models::UpdateLocalitySettingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新本地设置
       *
       * @param request UpdateLocalitySettingRequest
       * @return UpdateLocalitySettingResponse
       */
      Models::UpdateLocalitySettingResponse updateLocalitySetting(const Models::UpdateLocalitySettingRequest &request);

      /**
       * @summary Modifies a role.
       *
       * @param request UpdateRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRoleWithOptions(const Models::UpdateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a role.
       *
       * @param request UpdateRoleRequest
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRole(const Models::UpdateRoleRequest &request);

      /**
       * @summary Configures a Logstore for an application.
       *
       * @param request UpdateSlsLogStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSlsLogStoreResponse
       */
      Models::UpdateSlsLogStoreResponse updateSlsLogStoreWithOptions(const Models::UpdateSlsLogStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a Logstore for an application.
       *
       * @param request UpdateSlsLogStoreRequest
       * @return UpdateSlsLogStoreResponse
       */
      Models::UpdateSlsLogStoreResponse updateSlsLogStore(const Models::UpdateSlsLogStoreRequest &request);

      /**
       * @summary 更新泳道
       *
       * @param request UpdateSwimmingLaneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSwimmingLaneResponse
       */
      Models::UpdateSwimmingLaneResponse updateSwimmingLaneWithOptions(const Models::UpdateSwimmingLaneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新泳道
       *
       * @param request UpdateSwimmingLaneRequest
       * @return UpdateSwimmingLaneResponse
       */
      Models::UpdateSwimmingLaneResponse updateSwimmingLane(const Models::UpdateSwimmingLaneRequest &request);

      /**
       * @summary Updates a lane group.
       *
       * @param request UpdateSwimmingLaneGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSwimmingLaneGroupResponse
       */
      Models::UpdateSwimmingLaneGroupResponse updateSwimmingLaneGroupWithOptions(const Models::UpdateSwimmingLaneGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a lane group.
       *
       * @param request UpdateSwimmingLaneGroupRequest
       * @return UpdateSwimmingLaneGroupResponse
       */
      Models::UpdateSwimmingLaneGroupResponse updateSwimmingLaneGroup(const Models::UpdateSwimmingLaneGroupRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
