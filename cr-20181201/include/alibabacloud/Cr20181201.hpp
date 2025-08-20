// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CR20181201_HPP_
#define ALIBABACLOUD_CR20181201_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Cr20181201Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Cr20181201.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Cancels an artifact building task.
       *
       * @param request CancelArtifactBuildTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelArtifactBuildTaskResponse
       */
      Models::CancelArtifactBuildTaskResponse cancelArtifactBuildTaskWithOptions(const Models::CancelArtifactBuildTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an artifact building task.
       *
       * @param request CancelArtifactBuildTaskRequest
       * @return CancelArtifactBuildTaskResponse
       */
      Models::CancelArtifactBuildTaskResponse cancelArtifactBuildTask(const Models::CancelArtifactBuildTaskRequest &request);

      /**
       * @summary Cancels an image building task of a repository.
       *
       * @param request CancelRepoBuildRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelRepoBuildRecordResponse
       */
      Models::CancelRepoBuildRecordResponse cancelRepoBuildRecordWithOptions(const Models::CancelRepoBuildRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an image building task of a repository.
       *
       * @param request CancelRepoBuildRecordRequest
       * @return CancelRepoBuildRecordResponse
       */
      Models::CancelRepoBuildRecordResponse cancelRepoBuildRecord(const Models::CancelRepoBuildRecordRequest &request);

      /**
       * @summary Cancels a single replication task.
       *
       * @param request CancelRepoSyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelRepoSyncTaskResponse
       */
      Models::CancelRepoSyncTaskResponse cancelRepoSyncTaskWithOptions(const Models::CancelRepoSyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a single replication task.
       *
       * @param request CancelRepoSyncTaskRequest
       * @return CancelRepoSyncTaskResponse
       */
      Models::CancelRepoSyncTaskResponse cancelRepoSyncTask(const Models::CancelRepoSyncTaskRequest &request);

      /**
       * @summary Changes the resource group to which a resource belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which a resource belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Create image repository acceleration rules for image building.
       *
       * @description You can create building rules of accelerated images only for image repositories of Container Registry Advanced Edition instances. You cannot create building rules of accelerated images for image repositories of Container Registry Basic Edition instances. For more information, see [Specifications of different editions](https://www.alibabacloud.com/help/en/acr/product-overview/what-is-container-registry?spm=openapi-amp.newDocPublishment.0.0.bf82281fRj7rmV#section-n3q-ps7-x6k).
       * Accelerated images are not supported in Alibaba Finance Cloud regions or Alibaba Gov Cloud regions.
       *
       * @param tmpReq CreateArtifactBuildRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateArtifactBuildRuleResponse
       */
      Models::CreateArtifactBuildRuleResponse createArtifactBuildRuleWithOptions(const Models::CreateArtifactBuildRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create image repository acceleration rules for image building.
       *
       * @description You can create building rules of accelerated images only for image repositories of Container Registry Advanced Edition instances. You cannot create building rules of accelerated images for image repositories of Container Registry Basic Edition instances. For more information, see [Specifications of different editions](https://www.alibabacloud.com/help/en/acr/product-overview/what-is-container-registry?spm=openapi-amp.newDocPublishment.0.0.bf82281fRj7rmV#section-n3q-ps7-x6k).
       * Accelerated images are not supported in Alibaba Finance Cloud regions or Alibaba Gov Cloud regions.
       *
       * @param request CreateArtifactBuildRuleRequest
       * @return CreateArtifactBuildRuleResponse
       */
      Models::CreateArtifactBuildRuleResponse createArtifactBuildRule(const Models::CreateArtifactBuildRuleRequest &request);

      /**
       * @summary Creates a lifecycle management rule for an artifact.
       *
       * @param request CreateArtifactLifecycleRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateArtifactLifecycleRuleResponse
       */
      Models::CreateArtifactLifecycleRuleResponse createArtifactLifecycleRuleWithOptions(const Models::CreateArtifactLifecycleRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a lifecycle management rule for an artifact.
       *
       * @param request CreateArtifactLifecycleRuleRequest
       * @return CreateArtifactLifecycleRuleResponse
       */
      Models::CreateArtifactLifecycleRuleResponse createArtifactLifecycleRule(const Models::CreateArtifactLifecycleRuleRequest &request);

      /**
       * @summary Creates an artifact subscription rule.
       *
       * @param request CreateArtifactSubscriptionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateArtifactSubscriptionRuleResponse
       */
      Models::CreateArtifactSubscriptionRuleResponse createArtifactSubscriptionRuleWithOptions(const Models::CreateArtifactSubscriptionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an artifact subscription rule.
       *
       * @param request CreateArtifactSubscriptionRuleRequest
       * @return CreateArtifactSubscriptionRuleResponse
       */
      Models::CreateArtifactSubscriptionRuleResponse createArtifactSubscriptionRule(const Models::CreateArtifactSubscriptionRuleRequest &request);

      /**
       * @summary Creates an artifact subscription task.
       *
       * @param request CreateArtifactSubscriptionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateArtifactSubscriptionTaskResponse
       */
      Models::CreateArtifactSubscriptionTaskResponse createArtifactSubscriptionTaskWithOptions(const Models::CreateArtifactSubscriptionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an artifact subscription task.
       *
       * @param request CreateArtifactSubscriptionTaskRequest
       * @return CreateArtifactSubscriptionTaskResponse
       */
      Models::CreateArtifactSubscriptionTaskResponse createArtifactSubscriptionTask(const Models::CreateArtifactSubscriptionTaskRequest &request);

      /**
       * @summary Creates an image building record based on an existing record.
       *
       * @param request CreateBuildRecordByRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBuildRecordByRecordResponse
       */
      Models::CreateBuildRecordByRecordResponse createBuildRecordByRecordWithOptions(const Models::CreateBuildRecordByRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image building record based on an existing record.
       *
       * @param request CreateBuildRecordByRecordRequest
       * @return CreateBuildRecordByRecordResponse
       */
      Models::CreateBuildRecordByRecordResponse createBuildRecordByRecord(const Models::CreateBuildRecordByRecordRequest &request);

      /**
       * @summary Creates an image building record based on a rule.
       *
       * @param request CreateBuildRecordByRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBuildRecordByRuleResponse
       */
      Models::CreateBuildRecordByRuleResponse createBuildRecordByRuleWithOptions(const Models::CreateBuildRecordByRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image building record based on a rule.
       *
       * @param request CreateBuildRecordByRuleRequest
       * @return CreateBuildRecordByRuleResponse
       */
      Models::CreateBuildRecordByRuleResponse createBuildRecordByRule(const Models::CreateBuildRecordByRuleRequest &request);

      /**
       * @summary Creates a delivery chain.
       *
       * @param request CreateChainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChainResponse
       */
      Models::CreateChainResponse createChainWithOptions(const Models::CreateChainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a delivery chain.
       *
       * @param request CreateChainRequest
       * @return CreateChainResponse
       */
      Models::CreateChainResponse createChain(const Models::CreateChainRequest &request);

      /**
       * @summary Creates a chart namespace in an instance.
       *
       * @param request CreateChartNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChartNamespaceResponse
       */
      Models::CreateChartNamespaceResponse createChartNamespaceWithOptions(const Models::CreateChartNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a chart namespace in an instance.
       *
       * @param request CreateChartNamespaceRequest
       * @return CreateChartNamespaceResponse
       */
      Models::CreateChartNamespaceResponse createChartNamespace(const Models::CreateChartNamespaceRequest &request);

      /**
       * @summary Creates a chart repository.
       *
       * @param request CreateChartRepositoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChartRepositoryResponse
       */
      Models::CreateChartRepositoryResponse createChartRepositoryWithOptions(const Models::CreateChartRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a chart repository.
       *
       * @param request CreateChartRepositoryRequest
       * @return CreateChartRepositoryResponse
       */
      Models::CreateChartRepositoryResponse createChartRepository(const Models::CreateChartRepositoryRequest &request);

      /**
       * @summary Creates a whitelist policy for the public endpoint of the instance.
       *
       * @param request CreateInstanceEndpointAclPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceEndpointAclPolicyResponse
       */
      Models::CreateInstanceEndpointAclPolicyResponse createInstanceEndpointAclPolicyWithOptions(const Models::CreateInstanceEndpointAclPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a whitelist policy for the public endpoint of the instance.
       *
       * @param request CreateInstanceEndpointAclPolicyRequest
       * @return CreateInstanceEndpointAclPolicyResponse
       */
      Models::CreateInstanceEndpointAclPolicyResponse createInstanceEndpointAclPolicy(const Models::CreateInstanceEndpointAclPolicyRequest &request);

      /**
       * @summary Associates a virtual private cloud (VPC) with a Container Registry instance.
       *
       * @description The VPC quota must be purchased separately.
       *
       * @param request CreateInstanceVpcEndpointLinkedVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceVpcEndpointLinkedVpcResponse
       */
      Models::CreateInstanceVpcEndpointLinkedVpcResponse createInstanceVpcEndpointLinkedVpcWithOptions(const Models::CreateInstanceVpcEndpointLinkedVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a virtual private cloud (VPC) with a Container Registry instance.
       *
       * @description The VPC quota must be purchased separately.
       *
       * @param request CreateInstanceVpcEndpointLinkedVpcRequest
       * @return CreateInstanceVpcEndpointLinkedVpcResponse
       */
      Models::CreateInstanceVpcEndpointLinkedVpcResponse createInstanceVpcEndpointLinkedVpc(const Models::CreateInstanceVpcEndpointLinkedVpcRequest &request);

      /**
       * @summary Creates a namespace of image repositories.
       *
       * @param tmpReq CreateNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespaceWithOptions(const Models::CreateNamespaceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a namespace of image repositories.
       *
       * @param request CreateNamespaceRequest
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespace(const Models::CreateNamespaceRequest &request);

      /**
       * @summary Creates an image building rule for a repository.
       *
       * @param request CreateRepoBuildRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRepoBuildRuleResponse
       */
      Models::CreateRepoBuildRuleResponse createRepoBuildRuleWithOptions(const Models::CreateRepoBuildRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image building rule for a repository.
       *
       * @param request CreateRepoBuildRuleRequest
       * @return CreateRepoBuildRuleResponse
       */
      Models::CreateRepoBuildRuleResponse createRepoBuildRule(const Models::CreateRepoBuildRuleRequest &request);

      /**
       * @summary Binds a source code repository to an image repository.
       *
       * @param request CreateRepoSourceCodeRepoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRepoSourceCodeRepoResponse
       */
      Models::CreateRepoSourceCodeRepoResponse createRepoSourceCodeRepoWithOptions(const Models::CreateRepoSourceCodeRepoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a source code repository to an image repository.
       *
       * @param request CreateRepoSourceCodeRepoRequest
       * @return CreateRepoSourceCodeRepoResponse
       */
      Models::CreateRepoSourceCodeRepoResponse createRepoSourceCodeRepo(const Models::CreateRepoSourceCodeRepoRequest &request);

      /**
       * @summary Creates an image synchronization rule for an image repository.
       *
       * @param request CreateRepoSyncRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRepoSyncRuleResponse
       */
      Models::CreateRepoSyncRuleResponse createRepoSyncRuleWithOptions(const Models::CreateRepoSyncRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image synchronization rule for an image repository.
       *
       * @param request CreateRepoSyncRuleRequest
       * @return CreateRepoSyncRuleResponse
       */
      Models::CreateRepoSyncRuleResponse createRepoSyncRule(const Models::CreateRepoSyncRuleRequest &request);

      /**
       * @param request CreateRepoSyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRepoSyncTaskResponse
       */
      Models::CreateRepoSyncTaskResponse createRepoSyncTaskWithOptions(const Models::CreateRepoSyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateRepoSyncTaskRequest
       * @return CreateRepoSyncTaskResponse
       */
      Models::CreateRepoSyncTaskResponse createRepoSyncTask(const Models::CreateRepoSyncTaskRequest &request);

      /**
       * @summary Creates an image replication task based on a manual replication rule.
       *
       * @param request CreateRepoSyncTaskByRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRepoSyncTaskByRuleResponse
       */
      Models::CreateRepoSyncTaskByRuleResponse createRepoSyncTaskByRuleWithOptions(const Models::CreateRepoSyncTaskByRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image replication task based on a manual replication rule.
       *
       * @param request CreateRepoSyncTaskByRuleRequest
       * @return CreateRepoSyncTaskByRuleResponse
       */
      Models::CreateRepoSyncTaskByRuleResponse createRepoSyncTaskByRule(const Models::CreateRepoSyncTaskByRuleRequest &request);

      /**
       * @summary Creates an image tag based on an existing image tag in an image repository.
       *
       * @param request CreateRepoTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRepoTagResponse
       */
      Models::CreateRepoTagResponse createRepoTagWithOptions(const Models::CreateRepoTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image tag based on an existing image tag in an image repository.
       *
       * @param request CreateRepoTagRequest
       * @return CreateRepoTagResponse
       */
      Models::CreateRepoTagResponse createRepoTag(const Models::CreateRepoTagRequest &request);

      /**
       * @summary Creates an image scan task.
       *
       * @param request CreateRepoTagScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRepoTagScanTaskResponse
       */
      Models::CreateRepoTagScanTaskResponse createRepoTagScanTaskWithOptions(const Models::CreateRepoTagScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image scan task.
       *
       * @param request CreateRepoTagScanTaskRequest
       * @return CreateRepoTagScanTaskResponse
       */
      Models::CreateRepoTagScanTaskResponse createRepoTagScanTask(const Models::CreateRepoTagScanTaskRequest &request);

      /**
       * @summary Creates a trigger for a repository.
       *
       * @param request CreateRepoTriggerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRepoTriggerResponse
       */
      Models::CreateRepoTriggerResponse createRepoTriggerWithOptions(const Models::CreateRepoTriggerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a trigger for a repository.
       *
       * @param request CreateRepoTriggerRequest
       * @return CreateRepoTriggerResponse
       */
      Models::CreateRepoTriggerResponse createRepoTrigger(const Models::CreateRepoTriggerRequest &request);

      /**
       * @summary Creates an image repository.
       *
       * @param request CreateRepositoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRepositoryResponse
       */
      Models::CreateRepositoryResponse createRepositoryWithOptions(const Models::CreateRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image repository.
       *
       * @param request CreateRepositoryRequest
       * @return CreateRepositoryResponse
       */
      Models::CreateRepositoryResponse createRepository(const Models::CreateRepositoryRequest &request);

      /**
       * @summary Deletes an artifact lifecycle management rule.
       *
       * @param request DeleteArtifactLifecycleRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteArtifactLifecycleRuleResponse
       */
      Models::DeleteArtifactLifecycleRuleResponse deleteArtifactLifecycleRuleWithOptions(const Models::DeleteArtifactLifecycleRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an artifact lifecycle management rule.
       *
       * @param request DeleteArtifactLifecycleRuleRequest
       * @return DeleteArtifactLifecycleRuleResponse
       */
      Models::DeleteArtifactLifecycleRuleResponse deleteArtifactLifecycleRule(const Models::DeleteArtifactLifecycleRuleRequest &request);

      /**
       * @summary Deletes an artifact subscription rule.
       *
       * @param request DeleteArtifactSubscriptionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteArtifactSubscriptionRuleResponse
       */
      Models::DeleteArtifactSubscriptionRuleResponse deleteArtifactSubscriptionRuleWithOptions(const Models::DeleteArtifactSubscriptionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an artifact subscription rule.
       *
       * @param request DeleteArtifactSubscriptionRuleRequest
       * @return DeleteArtifactSubscriptionRuleResponse
       */
      Models::DeleteArtifactSubscriptionRuleResponse deleteArtifactSubscriptionRule(const Models::DeleteArtifactSubscriptionRuleRequest &request);

      /**
       * @summary Deletes a delivery pipeline.
       *
       * @param request DeleteChainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChainResponse
       */
      Models::DeleteChainResponse deleteChainWithOptions(const Models::DeleteChainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a delivery pipeline.
       *
       * @param request DeleteChainRequest
       * @return DeleteChainResponse
       */
      Models::DeleteChainResponse deleteChain(const Models::DeleteChainRequest &request);

      /**
       * @summary Deletes a chart namespace from an instance.
       *
       * @description >  If you delete a chart namespace, all repositories in the namespace and the charts in all repositories are deleted.
       *
       * @param request DeleteChartNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChartNamespaceResponse
       */
      Models::DeleteChartNamespaceResponse deleteChartNamespaceWithOptions(const Models::DeleteChartNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a chart namespace from an instance.
       *
       * @description >  If you delete a chart namespace, all repositories in the namespace and the charts in all repositories are deleted.
       *
       * @param request DeleteChartNamespaceRequest
       * @return DeleteChartNamespaceResponse
       */
      Models::DeleteChartNamespaceResponse deleteChartNamespace(const Models::DeleteChartNamespaceRequest &request);

      /**
       * @summary Deletes a chart version from a chart repository.
       *
       * @param request DeleteChartReleaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChartReleaseResponse
       */
      Models::DeleteChartReleaseResponse deleteChartReleaseWithOptions(const Models::DeleteChartReleaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a chart version from a chart repository.
       *
       * @param request DeleteChartReleaseRequest
       * @return DeleteChartReleaseResponse
       */
      Models::DeleteChartReleaseResponse deleteChartRelease(const Models::DeleteChartReleaseRequest &request);

      /**
       * @summary Deletes a chart repository from an instance.
       *
       * @param request DeleteChartRepositoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChartRepositoryResponse
       */
      Models::DeleteChartRepositoryResponse deleteChartRepositoryWithOptions(const Models::DeleteChartRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a chart repository from an instance.
       *
       * @param request DeleteChartRepositoryRequest
       * @return DeleteChartRepositoryResponse
       */
      Models::DeleteChartRepositoryResponse deleteChartRepository(const Models::DeleteChartRepositoryRequest &request);

      /**
       * @summary Deletes an event notification rule.
       *
       * @param request DeleteEventCenterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEventCenterRuleResponse
       */
      Models::DeleteEventCenterRuleResponse deleteEventCenterRuleWithOptions(const Models::DeleteEventCenterRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an event notification rule.
       *
       * @param request DeleteEventCenterRuleRequest
       * @return DeleteEventCenterRuleResponse
       */
      Models::DeleteEventCenterRuleResponse deleteEventCenterRule(const Models::DeleteEventCenterRuleRequest &request);

      /**
       * @summary Deletes a whitelist policy for the public endpoint of an instance.
       *
       * @param request DeleteInstanceEndpointAclPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceEndpointAclPolicyResponse
       */
      Models::DeleteInstanceEndpointAclPolicyResponse deleteInstanceEndpointAclPolicyWithOptions(const Models::DeleteInstanceEndpointAclPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a whitelist policy for the public endpoint of an instance.
       *
       * @param request DeleteInstanceEndpointAclPolicyRequest
       * @return DeleteInstanceEndpointAclPolicyResponse
       */
      Models::DeleteInstanceEndpointAclPolicyResponse deleteInstanceEndpointAclPolicy(const Models::DeleteInstanceEndpointAclPolicyRequest &request);

      /**
       * @summary Disassociates a virtual private cloud (VPC) from an instance.
       *
       * @param request DeleteInstanceVpcEndpointLinkedVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceVpcEndpointLinkedVpcResponse
       */
      Models::DeleteInstanceVpcEndpointLinkedVpcResponse deleteInstanceVpcEndpointLinkedVpcWithOptions(const Models::DeleteInstanceVpcEndpointLinkedVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a virtual private cloud (VPC) from an instance.
       *
       * @param request DeleteInstanceVpcEndpointLinkedVpcRequest
       * @return DeleteInstanceVpcEndpointLinkedVpcResponse
       */
      Models::DeleteInstanceVpcEndpointLinkedVpcResponse deleteInstanceVpcEndpointLinkedVpc(const Models::DeleteInstanceVpcEndpointLinkedVpcRequest &request);

      /**
       * @summary Deletes a namespace.
       *
       * @description > After you delete a namespace, all repositories in the namespace and all images in these repositories are deleted as well.
       *
       * @param request DeleteNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespaceWithOptions(const Models::DeleteNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a namespace.
       *
       * @description > After you delete a namespace, all repositories in the namespace and all images in these repositories are deleted as well.
       *
       * @param request DeleteNamespaceRequest
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespace(const Models::DeleteNamespaceRequest &request);

      /**
       * @summary Deletes an image building rule of a repository.
       *
       * @param request DeleteRepoBuildRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRepoBuildRuleResponse
       */
      Models::DeleteRepoBuildRuleResponse deleteRepoBuildRuleWithOptions(const Models::DeleteRepoBuildRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an image building rule of a repository.
       *
       * @param request DeleteRepoBuildRuleRequest
       * @return DeleteRepoBuildRuleResponse
       */
      Models::DeleteRepoBuildRuleResponse deleteRepoBuildRule(const Models::DeleteRepoBuildRuleRequest &request);

      /**
       * @summary Deletes an image replication rule of an image repository.
       *
       * @param request DeleteRepoSyncRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRepoSyncRuleResponse
       */
      Models::DeleteRepoSyncRuleResponse deleteRepoSyncRuleWithOptions(const Models::DeleteRepoSyncRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an image replication rule of an image repository.
       *
       * @param request DeleteRepoSyncRuleRequest
       * @return DeleteRepoSyncRuleResponse
       */
      Models::DeleteRepoSyncRuleResponse deleteRepoSyncRule(const Models::DeleteRepoSyncRuleRequest &request);

      /**
       * @summary Deletes an image tag.
       *
       * @param request DeleteRepoTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRepoTagResponse
       */
      Models::DeleteRepoTagResponse deleteRepoTagWithOptions(const Models::DeleteRepoTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an image tag.
       *
       * @param request DeleteRepoTagRequest
       * @return DeleteRepoTagResponse
       */
      Models::DeleteRepoTagResponse deleteRepoTag(const Models::DeleteRepoTagRequest &request);

      /**
       * @summary Deletes a trigger of an image repository.
       *
       * @param request DeleteRepoTriggerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRepoTriggerResponse
       */
      Models::DeleteRepoTriggerResponse deleteRepoTriggerWithOptions(const Models::DeleteRepoTriggerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a trigger of an image repository.
       *
       * @param request DeleteRepoTriggerRequest
       * @return DeleteRepoTriggerResponse
       */
      Models::DeleteRepoTriggerResponse deleteRepoTrigger(const Models::DeleteRepoTriggerRequest &request);

      /**
       * @summary Deletes an image repository.
       *
       * @description If you delete a repository, all images in the repository are also deleted.
       *
       * @param request DeleteRepositoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRepositoryResponse
       */
      Models::DeleteRepositoryResponse deleteRepositoryWithOptions(const Models::DeleteRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an image repository.
       *
       * @description If you delete a repository, all images in the repository are also deleted.
       *
       * @param request DeleteRepositoryRequest
       * @return DeleteRepositoryResponse
       */
      Models::DeleteRepositoryResponse deleteRepository(const Models::DeleteRepositoryRequest &request);

      /**
       * @param request GetArtifactBuildRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetArtifactBuildRuleResponse
       */
      Models::GetArtifactBuildRuleResponse getArtifactBuildRuleWithOptions(const Models::GetArtifactBuildRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetArtifactBuildRuleRequest
       * @return GetArtifactBuildRuleResponse
       */
      Models::GetArtifactBuildRuleResponse getArtifactBuildRule(const Models::GetArtifactBuildRuleRequest &request);

      /**
       * @summary Queries the details of an artifact building task.
       *
       * @param request GetArtifactBuildTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetArtifactBuildTaskResponse
       */
      Models::GetArtifactBuildTaskResponse getArtifactBuildTaskWithOptions(const Models::GetArtifactBuildTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an artifact building task.
       *
       * @param request GetArtifactBuildTaskRequest
       * @return GetArtifactBuildTaskResponse
       */
      Models::GetArtifactBuildTaskResponse getArtifactBuildTask(const Models::GetArtifactBuildTaskRequest &request);

      /**
       * @summary Queries the lifecycle management rules of an artifact.
       *
       * @param request GetArtifactLifecycleRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetArtifactLifecycleRuleResponse
       */
      Models::GetArtifactLifecycleRuleResponse getArtifactLifecycleRuleWithOptions(const Models::GetArtifactLifecycleRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the lifecycle management rules of an artifact.
       *
       * @param request GetArtifactLifecycleRuleRequest
       * @return GetArtifactLifecycleRuleResponse
       */
      Models::GetArtifactLifecycleRuleResponse getArtifactLifecycleRule(const Models::GetArtifactLifecycleRuleRequest &request);

      /**
       * @summary Queries the information about an artifact subscription rule.
       *
       * @param request GetArtifactSubscriptionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetArtifactSubscriptionRuleResponse
       */
      Models::GetArtifactSubscriptionRuleResponse getArtifactSubscriptionRuleWithOptions(const Models::GetArtifactSubscriptionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an artifact subscription rule.
       *
       * @param request GetArtifactSubscriptionRuleRequest
       * @return GetArtifactSubscriptionRuleResponse
       */
      Models::GetArtifactSubscriptionRuleResponse getArtifactSubscriptionRule(const Models::GetArtifactSubscriptionRuleRequest &request);

      /**
       * @summary Queries an artifact subscription task.
       *
       * @param request GetArtifactSubscriptionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetArtifactSubscriptionTaskResponse
       */
      Models::GetArtifactSubscriptionTaskResponse getArtifactSubscriptionTaskWithOptions(const Models::GetArtifactSubscriptionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an artifact subscription task.
       *
       * @param request GetArtifactSubscriptionTaskRequest
       * @return GetArtifactSubscriptionTaskResponse
       */
      Models::GetArtifactSubscriptionTaskResponse getArtifactSubscriptionTask(const Models::GetArtifactSubscriptionTaskRequest &request);

      /**
       * @summary Queries the details of an artifact subscription task.
       *
       * @param request GetArtifactSubscriptionTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetArtifactSubscriptionTaskResultResponse
       */
      Models::GetArtifactSubscriptionTaskResultResponse getArtifactSubscriptionTaskResultWithOptions(const Models::GetArtifactSubscriptionTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an artifact subscription task.
       *
       * @param request GetArtifactSubscriptionTaskResultRequest
       * @return GetArtifactSubscriptionTaskResultResponse
       */
      Models::GetArtifactSubscriptionTaskResultResponse getArtifactSubscriptionTaskResult(const Models::GetArtifactSubscriptionTaskResultRequest &request);

      /**
       * @summary Queries a temporary username and a token that you can use to log on to a Container Registry instance.
       *
       * @description The ID of the Container Registry instance.
       *
       * @param request GetAuthorizationTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuthorizationTokenResponse
       */
      Models::GetAuthorizationTokenResponse getAuthorizationTokenWithOptions(const Models::GetAuthorizationTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a temporary username and a token that you can use to log on to a Container Registry instance.
       *
       * @description The ID of the Container Registry instance.
       *
       * @param request GetAuthorizationTokenRequest
       * @return GetAuthorizationTokenResponse
       */
      Models::GetAuthorizationTokenResponse getAuthorizationToken(const Models::GetAuthorizationTokenRequest &request);

      /**
       * @param request GetChainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChainResponse
       */
      Models::GetChainResponse getChainWithOptions(const Models::GetChainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetChainRequest
       * @return GetChainResponse
       */
      Models::GetChainResponse getChain(const Models::GetChainRequest &request);

      /**
       * @summary Queries a chart namespace in an instance.
       *
       * @param request GetChartNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChartNamespaceResponse
       */
      Models::GetChartNamespaceResponse getChartNamespaceWithOptions(const Models::GetChartNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a chart namespace in an instance.
       *
       * @param request GetChartNamespaceRequest
       * @return GetChartNamespaceResponse
       */
      Models::GetChartNamespaceResponse getChartNamespace(const Models::GetChartNamespaceRequest &request);

      /**
       * @summary Queries the information about a chart repository.
       *
       * @param request GetChartRepositoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChartRepositoryResponse
       */
      Models::GetChartRepositoryResponse getChartRepositoryWithOptions(const Models::GetChartRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a chart repository.
       *
       * @param request GetChartRepositoryRequest
       * @return GetChartRepositoryResponse
       */
      Models::GetChartRepositoryResponse getChartRepository(const Models::GetChartRepositoryRequest &request);

      /**
       * @summary The ID of the resource group to which the instance belongs.
       *
       * @param request GetInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const Models::GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ID of the resource group to which the instance belongs.
       *
       * @param request GetInstanceRequest
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const Models::GetInstanceRequest &request);

      /**
       * @summary Queries the number of instances.
       *
       * @param request GetInstanceCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceCountResponse
       */
      Models::GetInstanceCountResponse getInstanceCountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of instances.
       *
       * @return GetInstanceCountResponse
       */
      Models::GetInstanceCountResponse getInstanceCount();

      /**
       * @summary Queries the endpoint of an instance.
       *
       * @param request GetInstanceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceEndpointResponse
       */
      Models::GetInstanceEndpointResponse getInstanceEndpointWithOptions(const Models::GetInstanceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the endpoint of an instance.
       *
       * @param request GetInstanceEndpointRequest
       * @return GetInstanceEndpointResponse
       */
      Models::GetInstanceEndpointResponse getInstanceEndpoint(const Models::GetInstanceEndpointRequest &request);

      /**
       * @summary Queries the quota usage of an instance.
       *
       * @param request GetInstanceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceUsageResponse
       */
      Models::GetInstanceUsageResponse getInstanceUsageWithOptions(const Models::GetInstanceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quota usage of an instance.
       *
       * @param request GetInstanceUsageRequest
       * @return GetInstanceUsageResponse
       */
      Models::GetInstanceUsageResponse getInstanceUsage(const Models::GetInstanceUsageRequest &request);

      /**
       * @summary Queries the endpoints of the virtual private clouds (VPCs) in which a Container Registry instance is deployed.
       *
       * @param request GetInstanceVpcEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceVpcEndpointResponse
       */
      Models::GetInstanceVpcEndpointResponse getInstanceVpcEndpointWithOptions(const Models::GetInstanceVpcEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the endpoints of the virtual private clouds (VPCs) in which a Container Registry instance is deployed.
       *
       * @param request GetInstanceVpcEndpointRequest
       * @return GetInstanceVpcEndpointResponse
       */
      Models::GetInstanceVpcEndpointResponse getInstanceVpcEndpoint(const Models::GetInstanceVpcEndpointRequest &request);

      /**
       * @summary Queries the information about a namespace.
       *
       * @param request GetNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNamespaceResponse
       */
      Models::GetNamespaceResponse getNamespaceWithOptions(const Models::GetNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a namespace.
       *
       * @param request GetNamespaceRequest
       * @return GetNamespaceResponse
       */
      Models::GetNamespaceResponse getNamespace(const Models::GetNamespaceRequest &request);

      /**
       * @summary Queries the information about image building records of a repository.
       *
       * @description ****
       *
       * @param request GetRepoBuildRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRepoBuildRecordResponse
       */
      Models::GetRepoBuildRecordResponse getRepoBuildRecordWithOptions(const Models::GetRepoBuildRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about image building records of a repository.
       *
       * @description ****
       *
       * @param request GetRepoBuildRecordRequest
       * @return GetRepoBuildRecordResponse
       */
      Models::GetRepoBuildRecordResponse getRepoBuildRecord(const Models::GetRepoBuildRecordRequest &request);

      /**
       * @summary Queries the status of an image building task.
       *
       * @param request GetRepoBuildRecordStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRepoBuildRecordStatusResponse
       */
      Models::GetRepoBuildRecordStatusResponse getRepoBuildRecordStatusWithOptions(const Models::GetRepoBuildRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of an image building task.
       *
       * @param request GetRepoBuildRecordStatusRequest
       * @return GetRepoBuildRecordStatusResponse
       */
      Models::GetRepoBuildRecordStatusResponse getRepoBuildRecordStatus(const Models::GetRepoBuildRecordStatusRequest &request);

      /**
       * @summary Queries the information about the source code repository that is bound to an image repository.
       *
       * @param request GetRepoSourceCodeRepoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRepoSourceCodeRepoResponse
       */
      Models::GetRepoSourceCodeRepoResponse getRepoSourceCodeRepoWithOptions(const Models::GetRepoSourceCodeRepoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the source code repository that is bound to an image repository.
       *
       * @param request GetRepoSourceCodeRepoRequest
       * @return GetRepoSourceCodeRepoResponse
       */
      Models::GetRepoSourceCodeRepoResponse getRepoSourceCodeRepo(const Models::GetRepoSourceCodeRepoRequest &request);

      /**
       * @summary Queries an image synchronization task in an instance.
       *
       * @param request GetRepoSyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRepoSyncTaskResponse
       */
      Models::GetRepoSyncTaskResponse getRepoSyncTaskWithOptions(const Models::GetRepoSyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an image synchronization task in an instance.
       *
       * @param request GetRepoSyncTaskRequest
       * @return GetRepoSyncTaskResponse
       */
      Models::GetRepoSyncTaskResponse getRepoSyncTask(const Models::GetRepoSyncTaskRequest &request);

      /**
       * @summary The version of the repository.
       *
       * @param request GetRepoTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRepoTagResponse
       */
      Models::GetRepoTagResponse getRepoTagWithOptions(const Models::GetRepoTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The version of the repository.
       *
       * @param request GetRepoTagRequest
       * @return GetRepoTagResponse
       */
      Models::GetRepoTagResponse getRepoTag(const Models::GetRepoTagRequest &request);

      /**
       * @summary Queries the scanning status of an image tag.
       *
       * @param request GetRepoTagScanStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRepoTagScanStatusResponse
       */
      Models::GetRepoTagScanStatusResponse getRepoTagScanStatusWithOptions(const Models::GetRepoTagScanStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the scanning status of an image tag.
       *
       * @param request GetRepoTagScanStatusRequest
       * @return GetRepoTagScanStatusResponse
       */
      Models::GetRepoTagScanStatusResponse getRepoTagScanStatus(const Models::GetRepoTagScanStatusRequest &request);

      /**
       * @param request GetRepoTagScanSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRepoTagScanSummaryResponse
       */
      Models::GetRepoTagScanSummaryResponse getRepoTagScanSummaryWithOptions(const Models::GetRepoTagScanSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetRepoTagScanSummaryRequest
       * @return GetRepoTagScanSummaryResponse
       */
      Models::GetRepoTagScanSummaryResponse getRepoTagScanSummary(const Models::GetRepoTagScanSummaryRequest &request);

      /**
       * @summary Queries details about an image repository.
       *
       * @param request GetRepositoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRepositoryResponse
       */
      Models::GetRepositoryResponse getRepositoryWithOptions(const Models::GetRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details about an image repository.
       *
       * @param request GetRepositoryRequest
       * @return GetRepositoryResponse
       */
      Models::GetRepositoryResponse getRepository(const Models::GetRepositoryRequest &request);

      /**
       * @summary Queries the log entries of an artifact building task.
       *
       * @param request ListArtifactBuildTaskLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListArtifactBuildTaskLogResponse
       */
      Models::ListArtifactBuildTaskLogResponse listArtifactBuildTaskLogWithOptions(const Models::ListArtifactBuildTaskLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log entries of an artifact building task.
       *
       * @param request ListArtifactBuildTaskLogRequest
       * @return ListArtifactBuildTaskLogResponse
       */
      Models::ListArtifactBuildTaskLogResponse listArtifactBuildTaskLog(const Models::ListArtifactBuildTaskLogRequest &request);

      /**
       * @summary Queries the lifecycle management rules of an artifact.
       *
       * @param request ListArtifactLifecycleRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListArtifactLifecycleRuleResponse
       */
      Models::ListArtifactLifecycleRuleResponse listArtifactLifecycleRuleWithOptions(const Models::ListArtifactLifecycleRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the lifecycle management rules of an artifact.
       *
       * @param request ListArtifactLifecycleRuleRequest
       * @return ListArtifactLifecycleRuleResponse
       */
      Models::ListArtifactLifecycleRuleResponse listArtifactLifecycleRule(const Models::ListArtifactLifecycleRuleRequest &request);

      /**
       * @summary Lists the subscription rules of artifacts.
       *
       * @param request ListArtifactSubscriptionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListArtifactSubscriptionRuleResponse
       */
      Models::ListArtifactSubscriptionRuleResponse listArtifactSubscriptionRuleWithOptions(const Models::ListArtifactSubscriptionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the subscription rules of artifacts.
       *
       * @param request ListArtifactSubscriptionRuleRequest
       * @return ListArtifactSubscriptionRuleResponse
       */
      Models::ListArtifactSubscriptionRuleResponse listArtifactSubscriptionRule(const Models::ListArtifactSubscriptionRuleRequest &request);

      /**
       * @summary Lists artifact subscription tasks.
       *
       * @param request ListArtifactSubscriptionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListArtifactSubscriptionTaskResponse
       */
      Models::ListArtifactSubscriptionTaskResponse listArtifactSubscriptionTaskWithOptions(const Models::ListArtifactSubscriptionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists artifact subscription tasks.
       *
       * @param request ListArtifactSubscriptionTaskRequest
       * @return ListArtifactSubscriptionTaskResponse
       */
      Models::ListArtifactSubscriptionTaskResponse listArtifactSubscriptionTask(const Models::ListArtifactSubscriptionTaskRequest &request);

      /**
       * @summary Queries delivery chains.
       *
       * @param request ListChainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChainResponse
       */
      Models::ListChainResponse listChainWithOptions(const Models::ListChainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries delivery chains.
       *
       * @param request ListChainRequest
       * @return ListChainResponse
       */
      Models::ListChainResponse listChain(const Models::ListChainRequest &request);

      /**
       * @summary The response code.
       *
       * @param request ListChainInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChainInstanceResponse
       */
      Models::ListChainInstanceResponse listChainInstanceWithOptions(const Models::ListChainInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The response code.
       *
       * @param request ListChainInstanceRequest
       * @return ListChainInstanceResponse
       */
      Models::ListChainInstanceResponse listChainInstance(const Models::ListChainInstanceRequest &request);

      /**
       * @summary Queries the chart namespaces of a Container Registry instance.
       *
       * @param request ListChartNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChartNamespaceResponse
       */
      Models::ListChartNamespaceResponse listChartNamespaceWithOptions(const Models::ListChartNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the chart namespaces of a Container Registry instance.
       *
       * @param request ListChartNamespaceRequest
       * @return ListChartNamespaceResponse
       */
      Models::ListChartNamespaceResponse listChartNamespace(const Models::ListChartNamespaceRequest &request);

      /**
       * @summary Queries the versions of a chart in a chart repository.
       *
       * @param request ListChartReleaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChartReleaseResponse
       */
      Models::ListChartReleaseResponse listChartReleaseWithOptions(const Models::ListChartReleaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the versions of a chart in a chart repository.
       *
       * @param request ListChartReleaseRequest
       * @return ListChartReleaseResponse
       */
      Models::ListChartReleaseResponse listChartRelease(const Models::ListChartReleaseRequest &request);

      /**
       * @summary Queries the chart repositories of a Container Registry instance.
       *
       * @param request ListChartRepositoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChartRepositoryResponse
       */
      Models::ListChartRepositoryResponse listChartRepositoryWithOptions(const Models::ListChartRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the chart repositories of a Container Registry instance.
       *
       * @param request ListChartRepositoryRequest
       * @return ListChartRepositoryResponse
       */
      Models::ListChartRepositoryResponse listChartRepository(const Models::ListChartRepositoryRequest &request);

      /**
       * @summary Queries the historical events of an event rule.
       *
       * @param request ListEventCenterRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEventCenterRecordResponse
       */
      Models::ListEventCenterRecordResponse listEventCenterRecordWithOptions(const Models::ListEventCenterRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical events of an event rule.
       *
       * @param request ListEventCenterRecordRequest
       * @return ListEventCenterRecordResponse
       */
      Models::ListEventCenterRecordResponse listEventCenterRecord(const Models::ListEventCenterRecordRequest &request);

      /**
       * @summary Queries the names of event notification rules.
       *
       * @param request ListEventCenterRuleNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEventCenterRuleNameResponse
       */
      Models::ListEventCenterRuleNameResponse listEventCenterRuleNameWithOptions(const Models::ListEventCenterRuleNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the names of event notification rules.
       *
       * @param request ListEventCenterRuleNameRequest
       * @return ListEventCenterRuleNameResponse
       */
      Models::ListEventCenterRuleNameResponse listEventCenterRuleName(const Models::ListEventCenterRuleNameRequest &request);

      /**
       * @summary Queries Container Registry instances.
       *
       * @param request ListInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceResponse
       */
      Models::ListInstanceResponse listInstanceWithOptions(const Models::ListInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Container Registry instances.
       *
       * @param request ListInstanceRequest
       * @return ListInstanceResponse
       */
      Models::ListInstanceResponse listInstance(const Models::ListInstanceRequest &request);

      /**
       * @summary Queries the endpoints of a Container Registry instance.
       *
       * @param request ListInstanceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceEndpointResponse
       */
      Models::ListInstanceEndpointResponse listInstanceEndpointWithOptions(const Models::ListInstanceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the endpoints of a Container Registry instance.
       *
       * @param request ListInstanceEndpointRequest
       * @return ListInstanceEndpointResponse
       */
      Models::ListInstanceEndpointResponse listInstanceEndpoint(const Models::ListInstanceEndpointRequest &request);

      /**
       * @summary Queries regions in which you can create Container Registry instances.
       *
       * @param request ListInstanceRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceRegionResponse
       */
      Models::ListInstanceRegionResponse listInstanceRegionWithOptions(const Models::ListInstanceRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries regions in which you can create Container Registry instances.
       *
       * @param request ListInstanceRegionRequest
       * @return ListInstanceRegionResponse
       */
      Models::ListInstanceRegionResponse listInstanceRegion(const Models::ListInstanceRegionRequest &request);

      /**
       * @summary Queries namespaces in a Container Registry instance.
       *
       * @param request ListNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNamespaceResponse
       */
      Models::ListNamespaceResponse listNamespaceWithOptions(const Models::ListNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries namespaces in a Container Registry instance.
       *
       * @param request ListNamespaceRequest
       * @return ListNamespaceResponse
       */
      Models::ListNamespaceResponse listNamespace(const Models::ListNamespaceRequest &request);

      /**
       * @summary Queries image building records of an image repository.
       *
       * @param request ListRepoBuildRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRepoBuildRecordResponse
       */
      Models::ListRepoBuildRecordResponse listRepoBuildRecordWithOptions(const Models::ListRepoBuildRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries image building records of an image repository.
       *
       * @param request ListRepoBuildRecordRequest
       * @return ListRepoBuildRecordResponse
       */
      Models::ListRepoBuildRecordResponse listRepoBuildRecord(const Models::ListRepoBuildRecordRequest &request);

      /**
       * @summary Queries the log of an image building record.
       *
       * @param request ListRepoBuildRecordLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRepoBuildRecordLogResponse
       */
      Models::ListRepoBuildRecordLogResponse listRepoBuildRecordLogWithOptions(const Models::ListRepoBuildRecordLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log of an image building record.
       *
       * @param request ListRepoBuildRecordLogRequest
       * @return ListRepoBuildRecordLogResponse
       */
      Models::ListRepoBuildRecordLogResponse listRepoBuildRecordLog(const Models::ListRepoBuildRecordLogRequest &request);

      /**
       * @summary Queries image building rules of a repository.
       *
       * @param request ListRepoBuildRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRepoBuildRuleResponse
       */
      Models::ListRepoBuildRuleResponse listRepoBuildRuleWithOptions(const Models::ListRepoBuildRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries image building rules of a repository.
       *
       * @param request ListRepoBuildRuleRequest
       * @return ListRepoBuildRuleResponse
       */
      Models::ListRepoBuildRuleResponse listRepoBuildRule(const Models::ListRepoBuildRuleRequest &request);

      /**
       * @summary Queries image synchronization rules of a repository.
       *
       * @param request ListRepoSyncRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRepoSyncRuleResponse
       */
      Models::ListRepoSyncRuleResponse listRepoSyncRuleWithOptions(const Models::ListRepoSyncRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries image synchronization rules of a repository.
       *
       * @param request ListRepoSyncRuleRequest
       * @return ListRepoSyncRuleResponse
       */
      Models::ListRepoSyncRuleResponse listRepoSyncRule(const Models::ListRepoSyncRuleRequest &request);

      /**
       * @summary Queries image synchronization tasks in an image repository.
       *
       * @param request ListRepoSyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRepoSyncTaskResponse
       */
      Models::ListRepoSyncTaskResponse listRepoSyncTaskWithOptions(const Models::ListRepoSyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries image synchronization tasks in an image repository.
       *
       * @param request ListRepoSyncTaskRequest
       * @return ListRepoSyncTaskResponse
       */
      Models::ListRepoSyncTaskResponse listRepoSyncTask(const Models::ListRepoSyncTaskRequest &request);

      /**
       * @summary Queries image tags in a repository.
       *
       * @param request ListRepoTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRepoTagResponse
       */
      Models::ListRepoTagResponse listRepoTagWithOptions(const Models::ListRepoTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries image tags in a repository.
       *
       * @param request ListRepoTagRequest
       * @return ListRepoTagResponse
       */
      Models::ListRepoTagResponse listRepoTag(const Models::ListRepoTagRequest &request);

      /**
       * @summary Queries the results of a security scan that is created for an image tag.
       *
       * @param request ListRepoTagScanResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRepoTagScanResultResponse
       */
      Models::ListRepoTagScanResultResponse listRepoTagScanResultWithOptions(const Models::ListRepoTagScanResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the results of a security scan that is created for an image tag.
       *
       * @param request ListRepoTagScanResultRequest
       * @return ListRepoTagScanResultResponse
       */
      Models::ListRepoTagScanResultResponse listRepoTagScanResult(const Models::ListRepoTagScanResultRequest &request);

      /**
       * @summary Queries the triggers of a repository.
       *
       * @param request ListRepoTriggerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRepoTriggerResponse
       */
      Models::ListRepoTriggerResponse listRepoTriggerWithOptions(const Models::ListRepoTriggerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the triggers of a repository.
       *
       * @param request ListRepoTriggerRequest
       * @return ListRepoTriggerResponse
       */
      Models::ListRepoTriggerResponse listRepoTrigger(const Models::ListRepoTriggerRequest &request);

      /**
       * @summary Queries image repositories.
       *
       * @param request ListRepositoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRepositoryResponse
       */
      Models::ListRepositoryResponse listRepositoryWithOptions(const Models::ListRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries image repositories.
       *
       * @param request ListRepositoryRequest
       * @return ListRepositoryResponse
       */
      Models::ListRepositoryResponse listRepository(const Models::ListRepositoryRequest &request);

      /**
       * @summary Queries the baseline risks of a scan task by page.
       *
       * @description Before you call this operation, use a Security Center scan engine to scan the image.
       *
       * @param request ListScanBaselineByTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScanBaselineByTaskResponse
       */
      Models::ListScanBaselineByTaskResponse listScanBaselineByTaskWithOptions(const Models::ListScanBaselineByTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the baseline risks of a scan task by page.
       *
       * @description Before you call this operation, use a Security Center scan engine to scan the image.
       *
       * @param request ListScanBaselineByTaskRequest
       * @return ListScanBaselineByTaskResponse
       */
      Models::ListScanBaselineByTaskResponse listScanBaselineByTask(const Models::ListScanBaselineByTaskRequest &request);

      /**
       * @summary Queries the malicious files of a scan task by page.
       *
       * @description Before you call this operation, use a Security Center scan engine to scan the image.
       *
       * @param request ListScanMaliciousFileByTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScanMaliciousFileByTaskResponse
       */
      Models::ListScanMaliciousFileByTaskResponse listScanMaliciousFileByTaskWithOptions(const Models::ListScanMaliciousFileByTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the malicious files of a scan task by page.
       *
       * @description Before you call this operation, use a Security Center scan engine to scan the image.
       *
       * @param request ListScanMaliciousFileByTaskRequest
       * @return ListScanMaliciousFileByTaskResponse
       */
      Models::ListScanMaliciousFileByTaskResponse listScanMaliciousFileByTask(const Models::ListScanMaliciousFileByTaskRequest &request);

      /**
       * @summary Queries the tags that are added to cloud resources. Instance resources are supported.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to cloud resources. Instance resources are supported.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Resets the logon password of a Container Registry instance.
       *
       * @param request ResetLoginPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetLoginPasswordResponse
       */
      Models::ResetLoginPasswordResponse resetLoginPasswordWithOptions(const Models::ResetLoginPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the logon password of a Container Registry instance.
       *
       * @param request ResetLoginPasswordRequest
       * @return ResetLoginPasswordResponse
       */
      Models::ResetLoginPasswordResponse resetLoginPassword(const Models::ResetLoginPasswordRequest &request);

      /**
       * @summary Adds tags to resources. Instance resources are supported.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to resources. Instance resources are supported.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from resources. Instance resources are supported.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resources. Instance resources are supported.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates a lifecycle management rule of an artifact.
       *
       * @param request UpdateArtifactLifecycleRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateArtifactLifecycleRuleResponse
       */
      Models::UpdateArtifactLifecycleRuleResponse updateArtifactLifecycleRuleWithOptions(const Models::UpdateArtifactLifecycleRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a lifecycle management rule of an artifact.
       *
       * @param request UpdateArtifactLifecycleRuleRequest
       * @return UpdateArtifactLifecycleRuleResponse
       */
      Models::UpdateArtifactLifecycleRuleResponse updateArtifactLifecycleRule(const Models::UpdateArtifactLifecycleRuleRequest &request);

      /**
       * @summary Updates an artifact subscription rule.
       *
       * @param request UpdateArtifactSubscriptionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateArtifactSubscriptionRuleResponse
       */
      Models::UpdateArtifactSubscriptionRuleResponse updateArtifactSubscriptionRuleWithOptions(const Models::UpdateArtifactSubscriptionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an artifact subscription rule.
       *
       * @param request UpdateArtifactSubscriptionRuleRequest
       * @return UpdateArtifactSubscriptionRuleResponse
       */
      Models::UpdateArtifactSubscriptionRuleResponse updateArtifactSubscriptionRule(const Models::UpdateArtifactSubscriptionRuleRequest &request);

      /**
       * @summary Updates the information about a delivery chain, such as the node execution sequence of the delivery chain.
       *
       * @param request UpdateChainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateChainResponse
       */
      Models::UpdateChainResponse updateChainWithOptions(const Models::UpdateChainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a delivery chain, such as the node execution sequence of the delivery chain.
       *
       * @param request UpdateChainRequest
       * @return UpdateChainResponse
       */
      Models::UpdateChainResponse updateChain(const Models::UpdateChainRequest &request);

      /**
       * @summary Updates a chart namespace.
       *
       * @param request UpdateChartNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateChartNamespaceResponse
       */
      Models::UpdateChartNamespaceResponse updateChartNamespaceWithOptions(const Models::UpdateChartNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a chart namespace.
       *
       * @param request UpdateChartNamespaceRequest
       * @return UpdateChartNamespaceResponse
       */
      Models::UpdateChartNamespaceResponse updateChartNamespace(const Models::UpdateChartNamespaceRequest &request);

      /**
       * @summary Updates a chart repository of a Container Registry instance.
       *
       * @param request UpdateChartRepositoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateChartRepositoryResponse
       */
      Models::UpdateChartRepositoryResponse updateChartRepositoryWithOptions(const Models::UpdateChartRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a chart repository of a Container Registry instance.
       *
       * @param request UpdateChartRepositoryRequest
       * @return UpdateChartRepositoryResponse
       */
      Models::UpdateChartRepositoryResponse updateChartRepository(const Models::UpdateChartRepositoryRequest &request);

      /**
       * @summary Updates an event notification rule.
       *
       * @param tmpReq UpdateEventCenterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEventCenterRuleResponse
       */
      Models::UpdateEventCenterRuleResponse updateEventCenterRuleWithOptions(const Models::UpdateEventCenterRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an event notification rule.
       *
       * @param request UpdateEventCenterRuleRequest
       * @return UpdateEventCenterRuleResponse
       */
      Models::UpdateEventCenterRuleResponse updateEventCenterRule(const Models::UpdateEventCenterRuleRequest &request);

      /**
       * @summary Updates the status of an instance endpoint.
       *
       * @param request UpdateInstanceEndpointStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceEndpointStatusResponse
       */
      Models::UpdateInstanceEndpointStatusResponse updateInstanceEndpointStatusWithOptions(const Models::UpdateInstanceEndpointStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of an instance endpoint.
       *
       * @param request UpdateInstanceEndpointStatusRequest
       * @return UpdateInstanceEndpointStatusResponse
       */
      Models::UpdateInstanceEndpointStatusResponse updateInstanceEndpointStatus(const Models::UpdateInstanceEndpointStatusRequest &request);

      /**
       * @summary Updates a namespace.
       *
       * @param tmpReq UpdateNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNamespaceResponse
       */
      Models::UpdateNamespaceResponse updateNamespaceWithOptions(const Models::UpdateNamespaceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a namespace.
       *
       * @param request UpdateNamespaceRequest
       * @return UpdateNamespaceResponse
       */
      Models::UpdateNamespaceResponse updateNamespace(const Models::UpdateNamespaceRequest &request);

      /**
       * @summary Updates an image building rule for a repository.
       *
       * @param request UpdateRepoBuildRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRepoBuildRuleResponse
       */
      Models::UpdateRepoBuildRuleResponse updateRepoBuildRuleWithOptions(const Models::UpdateRepoBuildRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an image building rule for a repository.
       *
       * @param request UpdateRepoBuildRuleRequest
       * @return UpdateRepoBuildRuleResponse
       */
      Models::UpdateRepoBuildRuleResponse updateRepoBuildRule(const Models::UpdateRepoBuildRuleRequest &request);

      /**
       * @summary Updates the URL of the source code repository that is bound to an image repository.
       *
       * @param request UpdateRepoSourceCodeRepoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRepoSourceCodeRepoResponse
       */
      Models::UpdateRepoSourceCodeRepoResponse updateRepoSourceCodeRepoWithOptions(const Models::UpdateRepoSourceCodeRepoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the URL of the source code repository that is bound to an image repository.
       *
       * @param request UpdateRepoSourceCodeRepoRequest
       * @return UpdateRepoSourceCodeRepoResponse
       */
      Models::UpdateRepoSourceCodeRepoResponse updateRepoSourceCodeRepo(const Models::UpdateRepoSourceCodeRepoRequest &request);

      /**
       * @summary Updates a trigger of an image repository.
       *
       * @param request UpdateRepoTriggerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRepoTriggerResponse
       */
      Models::UpdateRepoTriggerResponse updateRepoTriggerWithOptions(const Models::UpdateRepoTriggerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a trigger of an image repository.
       *
       * @param request UpdateRepoTriggerRequest
       * @return UpdateRepoTriggerResponse
       */
      Models::UpdateRepoTriggerResponse updateRepoTrigger(const Models::UpdateRepoTriggerRequest &request);

      /**
       * @summary The ID of the request.
       *
       * @param request UpdateRepositoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRepositoryResponse
       */
      Models::UpdateRepositoryResponse updateRepositoryWithOptions(const Models::UpdateRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ID of the request.
       *
       * @param request UpdateRepositoryRequest
       * @return UpdateRepositoryResponse
       */
      Models::UpdateRepositoryResponse updateRepository(const Models::UpdateRepositoryRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
