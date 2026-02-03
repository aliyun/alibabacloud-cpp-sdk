// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AIWORKSPACE20210204_HPP_
#define ALIBABACLOUD_AIWORKSPACE20210204_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AIWorkSpace20210204Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AIWorkSpace20210204.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Receives and processes system event messages sent by DataWorks.
       *
       * @description This operation can be called only by the internal system and cannot be called by external users.
       *
       * @param request AcceptDataworksEventRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcceptDataworksEventResponse
       */
      Models::AcceptDataworksEventResponse acceptDataworksEventWithOptions(const Models::AcceptDataworksEventRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Receives and processes system event messages sent by DataWorks.
       *
       * @description This operation can be called only by the internal system and cannot be called by external users.
       *
       * @param request AcceptDataworksEventRequest
       * @return AcceptDataworksEventResponse
       */
      Models::AcceptDataworksEventResponse acceptDataworksEvent(const Models::AcceptDataworksEventRequest &request);

      /**
       * @summary Adds a custom image to a workspace.
       *
       * @param request AddImageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddImageResponse
       */
      Models::AddImageResponse addImageWithOptions(const Models::AddImageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a custom image to a workspace.
       *
       * @param request AddImageRequest
       * @return AddImageResponse
       */
      Models::AddImageResponse addImage(const Models::AddImageRequest &request);

      /**
       * @summary Adds tags to an image.
       *
       * @param request AddImageLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddImageLabelsResponse
       */
      Models::AddImageLabelsResponse addImageLabelsWithOptions(const string &ImageId, const Models::AddImageLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to an image.
       *
       * @param request AddImageLabelsRequest
       * @return AddImageLabelsResponse
       */
      Models::AddImageLabelsResponse addImageLabels(const string &ImageId, const Models::AddImageLabelsRequest &request);

      /**
       * @summary Adds a role to a member in a workspace. After you add a role to a member, the member is granted the permissions of the role.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMemberRoleResponse
       */
      Models::AddMemberRoleResponse addMemberRoleWithOptions(const string &WorkspaceId, const string &MemberId, const string &RoleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a role to a member in a workspace. After you add a role to a member, the member is granted the permissions of the role.
       *
       * @return AddMemberRoleResponse
       */
      Models::AddMemberRoleResponse addMemberRole(const string &WorkspaceId, const string &MemberId, const string &RoleName);

      /**
       * @summary Changes the resource group to which a resource belongs based on the ID.
       *
       * @param request ChangeResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which a resource belongs based on the ID.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Creates a code build in Platform for AI (PAI). You can configure Git branches and commit IDs. After the code build is created, you can reference the code build in a Deep Learning Containers (DLC) job.
       *
       * @param request CreateCodeSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCodeSourceResponse
       */
      Models::CreateCodeSourceResponse createCodeSourceWithOptions(const Models::CreateCodeSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a code build in Platform for AI (PAI). You can configure Git branches and commit IDs. After the code build is created, you can reference the code build in a Deep Learning Containers (DLC) job.
       *
       * @param request CreateCodeSourceRequest
       * @return CreateCodeSourceResponse
       */
      Models::CreateCodeSourceResponse createCodeSource(const Models::CreateCodeSourceRequest &request);

      /**
       * @summary Creates a connection. This API is used to connect Platform for AI (PAI) to customer models and databases in LangStudio and multimodal dataset search scenarios.
       *
       * @param request CreateConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConnectionResponse
       */
      Models::CreateConnectionResponse createConnectionWithOptions(const Models::CreateConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a connection. This API is used to connect Platform for AI (PAI) to customer models and databases in LangStudio and multimodal dataset search scenarios.
       *
       * @param request CreateConnectionRequest
       * @return CreateConnectionResponse
       */
      Models::CreateConnectionResponse createConnection(const Models::CreateConnectionRequest &request);

      /**
       * @summary Creates a dataset.
       *
       * @param request CreateDatasetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDatasetWithOptions(const Models::CreateDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dataset.
       *
       * @param request CreateDatasetRequest
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDataset(const Models::CreateDatasetRequest &request);

      /**
       * @summary Creates the metadata records of multiple files in a dataset at a time.
       *
       * @param request CreateDatasetFileMetasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetFileMetasResponse
       */
      Models::CreateDatasetFileMetasResponse createDatasetFileMetasWithOptions(const string &DatasetId, const Models::CreateDatasetFileMetasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates the metadata records of multiple files in a dataset at a time.
       *
       * @param request CreateDatasetFileMetasRequest
       * @return CreateDatasetFileMetasResponse
       */
      Models::CreateDatasetFileMetasResponse createDatasetFileMetas(const string &DatasetId, const Models::CreateDatasetFileMetasRequest &request);

      /**
       * @summary Creates a dataset job.
       *
       * @param request CreateDatasetJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetJobResponse
       */
      Models::CreateDatasetJobResponse createDatasetJobWithOptions(const string &DatasetId, const Models::CreateDatasetJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dataset job.
       *
       * @param request CreateDatasetJobRequest
       * @return CreateDatasetJobResponse
       */
      Models::CreateDatasetJobResponse createDatasetJob(const string &DatasetId, const Models::CreateDatasetJobRequest &request);

      /**
       * @summary Creates a job configuration for a dataset.
       *
       * @param request CreateDatasetJobConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetJobConfigResponse
       */
      Models::CreateDatasetJobConfigResponse createDatasetJobConfigWithOptions(const string &DatasetId, const Models::CreateDatasetJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a job configuration for a dataset.
       *
       * @param request CreateDatasetJobConfigRequest
       * @return CreateDatasetJobConfigResponse
       */
      Models::CreateDatasetJobConfigResponse createDatasetJobConfig(const string &DatasetId, const Models::CreateDatasetJobConfigRequest &request);

      /**
       * @summary Creates tags for a dataset.
       *
       * @description Before you call this operation, take note of the following items:
       * *   The tag key and value are not empty strings and cannot exceed 128 characters in length.
       * *   The tag key cannot start with any of the following strings: "aliyun", "acs", "http://", and "https://".
       *
       * @param request CreateDatasetLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetLabelsResponse
       */
      Models::CreateDatasetLabelsResponse createDatasetLabelsWithOptions(const string &DatasetId, const Models::CreateDatasetLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates tags for a dataset.
       *
       * @description Before you call this operation, take note of the following items:
       * *   The tag key and value are not empty strings and cannot exceed 128 characters in length.
       * *   The tag key cannot start with any of the following strings: "aliyun", "acs", "http://", and "https://".
       *
       * @param request CreateDatasetLabelsRequest
       * @return CreateDatasetLabelsResponse
       */
      Models::CreateDatasetLabelsResponse createDatasetLabels(const string &DatasetId, const Models::CreateDatasetLabelsRequest &request);

      /**
       * @summary Creates a dataset version.
       *
       * @param request CreateDatasetVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetVersionResponse
       */
      Models::CreateDatasetVersionResponse createDatasetVersionWithOptions(const string &DatasetId, const Models::CreateDatasetVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dataset version.
       *
       * @param request CreateDatasetVersionRequest
       * @return CreateDatasetVersionResponse
       */
      Models::CreateDatasetVersionResponse createDatasetVersion(const string &DatasetId, const Models::CreateDatasetVersionRequest &request);

      /**
       * @summary Creates tags for a dataset version.
       *
       * @param request CreateDatasetVersionLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetVersionLabelsResponse
       */
      Models::CreateDatasetVersionLabelsResponse createDatasetVersionLabelsWithOptions(const string &DatasetId, const string &VersionName, const Models::CreateDatasetVersionLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates tags for a dataset version.
       *
       * @param request CreateDatasetVersionLabelsRequest
       * @return CreateDatasetVersionLabelsResponse
       */
      Models::CreateDatasetVersionLabelsResponse createDatasetVersionLabels(const string &DatasetId, const string &VersionName, const Models::CreateDatasetVersionLabelsRequest &request);

      /**
       * @summary Creates an experiment.
       *
       * @param request CreateExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExperimentResponse
       */
      Models::CreateExperimentResponse createExperimentWithOptions(const Models::CreateExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an experiment.
       *
       * @param request CreateExperimentRequest
       * @return CreateExperimentResponse
       */
      Models::CreateExperimentResponse createExperiment(const Models::CreateExperimentRequest &request);

      /**
       * @summary 创建镜像构建任务
       *
       * @param request CreateImageBuildRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageBuildResponse
       */
      Models::CreateImageBuildResponse createImageBuildWithOptions(const Models::CreateImageBuildRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建镜像构建任务
       *
       * @param request CreateImageBuildRequest
       * @return CreateImageBuildResponse
       */
      Models::CreateImageBuildResponse createImageBuild(const Models::CreateImageBuildRequest &request);

      /**
       * @summary Adds a user to a workspace as a member. You can add multiple users as members.
       *
       * @param request CreateMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMemberResponse
       */
      Models::CreateMemberResponse createMemberWithOptions(const string &WorkspaceId, const Models::CreateMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a user to a workspace as a member. You can add multiple users as members.
       *
       * @param request CreateMemberRequest
       * @return CreateMemberResponse
       */
      Models::CreateMemberResponse createMember(const string &WorkspaceId, const Models::CreateMemberRequest &request);

      /**
       * @summary Creates a model. A model is a collection of model versions. When you create a model, you must specify the model name and description.
       *
       * @param request CreateModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelResponse
       */
      Models::CreateModelResponse createModelWithOptions(const Models::CreateModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model. A model is a collection of model versions. When you create a model, you must specify the model name and description.
       *
       * @param request CreateModelRequest
       * @return CreateModelResponse
       */
      Models::CreateModelResponse createModel(const Models::CreateModelRequest &request);

      /**
       * @summary Creates a tag for a model.
       *
       * @param request CreateModelLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelLabelsResponse
       */
      Models::CreateModelLabelsResponse createModelLabelsWithOptions(const string &ModelId, const Models::CreateModelLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a tag for a model.
       *
       * @param request CreateModelLabelsRequest
       * @return CreateModelLabelsResponse
       */
      Models::CreateModelLabelsResponse createModelLabels(const string &ModelId, const Models::CreateModelLabelsRequest &request);

      /**
       * @summary Creates a new version for the specified model.
       *
       * @param request CreateModelVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelVersionResponse
       */
      Models::CreateModelVersionResponse createModelVersionWithOptions(const string &ModelId, const Models::CreateModelVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new version for the specified model.
       *
       * @param request CreateModelVersionRequest
       * @return CreateModelVersionResponse
       */
      Models::CreateModelVersionResponse createModelVersion(const string &ModelId, const Models::CreateModelVersionRequest &request);

      /**
       * @summary Creates a tag for a model version.
       *
       * @param request CreateModelVersionLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelVersionLabelsResponse
       */
      Models::CreateModelVersionLabelsResponse createModelVersionLabelsWithOptions(const string &ModelId, const string &VersionName, const Models::CreateModelVersionLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a tag for a model version.
       *
       * @param request CreateModelVersionLabelsRequest
       * @return CreateModelVersionLabelsResponse
       */
      Models::CreateModelVersionLabelsResponse createModelVersionLabels(const string &ModelId, const string &VersionName, const Models::CreateModelVersionLabelsRequest &request);

      /**
       * @summary Creates a pay-as-you-go order for DataWorks, OSS, PAI, or MaxCompute.
       *
       * @param request CreateProductOrdersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProductOrdersResponse
       */
      Models::CreateProductOrdersResponse createProductOrdersWithOptions(const Models::CreateProductOrdersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a pay-as-you-go order for DataWorks, OSS, PAI, or MaxCompute.
       *
       * @param request CreateProductOrdersRequest
       * @return CreateProductOrdersResponse
       */
      Models::CreateProductOrdersResponse createProductOrders(const Models::CreateProductOrdersRequest &request);

      /**
       * @summary Creates a run. A run is an experiment that can be associated with a specific workload or simply a code execution.
       *
       * @param request CreateRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRunResponse
       */
      Models::CreateRunResponse createRunWithOptions(const Models::CreateRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a run. A run is an experiment that can be associated with a specific workload or simply a code execution.
       *
       * @param request CreateRunRequest
       * @return CreateRunResponse
       */
      Models::CreateRunResponse createRun(const Models::CreateRunRequest &request);

      /**
       * @summary Creates a workspace.
       *
       * @param request CreateWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspaceWithOptions(const Models::CreateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workspace.
       *
       * @param request CreateWorkspaceRequest
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspace(const Models::CreateWorkspaceRequest &request);

      /**
       * @summary Associates resources with a workspace.
       *
       * @param request CreateWorkspaceResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkspaceResourceResponse
       */
      Models::CreateWorkspaceResourceResponse createWorkspaceResourceWithOptions(const string &WorkspaceId, const Models::CreateWorkspaceResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates resources with a workspace.
       *
       * @param request CreateWorkspaceResourceRequest
       * @return CreateWorkspaceResourceResponse
       */
      Models::CreateWorkspaceResourceResponse createWorkspaceResource(const string &WorkspaceId, const Models::CreateWorkspaceResourceRequest &request);

      /**
       * @summary Deletes a code source based on the provided ID.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCodeSourceResponse
       */
      Models::DeleteCodeSourceResponse deleteCodeSourceWithOptions(const string &CodeSourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a code source based on the provided ID.
       *
       * @return DeleteCodeSourceResponse
       */
      Models::DeleteCodeSourceResponse deleteCodeSource(const string &CodeSourceId);

      /**
       * @summary Deletes workspace configurations.
       *
       * @param request DeleteConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConfigResponse
       */
      Models::DeleteConfigResponse deleteConfigWithOptions(const string &WorkspaceId, const string &ConfigKey, const Models::DeleteConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes workspace configurations.
       *
       * @param request DeleteConfigRequest
       * @return DeleteConfigResponse
       */
      Models::DeleteConfigResponse deleteConfig(const string &WorkspaceId, const string &ConfigKey, const Models::DeleteConfigRequest &request);

      /**
       * @summary Deletes a connection.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConnectionResponse
       */
      Models::DeleteConnectionResponse deleteConnectionWithOptions(const string &ConnectionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a connection.
       *
       * @return DeleteConnectionResponse
       */
      Models::DeleteConnectionResponse deleteConnection(const string &ConnectionId);

      /**
       * @summary Deletes a dataset.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDatasetWithOptions(const string &DatasetId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dataset.
       *
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDataset(const string &DatasetId);

      /**
       * @summary Deletes the metadata records of multiple files in a dataset at a time.
       *
       * @param request DeleteDatasetFileMetasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetFileMetasResponse
       */
      Models::DeleteDatasetFileMetasResponse deleteDatasetFileMetasWithOptions(const string &DatasetId, const Models::DeleteDatasetFileMetasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the metadata records of multiple files in a dataset at a time.
       *
       * @param request DeleteDatasetFileMetasRequest
       * @return DeleteDatasetFileMetasResponse
       */
      Models::DeleteDatasetFileMetasResponse deleteDatasetFileMetas(const string &DatasetId, const Models::DeleteDatasetFileMetasRequest &request);

      /**
       * @summary Deletes a dataset job.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetJobResponse
       */
      Models::DeleteDatasetJobResponse deleteDatasetJobWithOptions(const string &DatasetId, const string &DatasetJobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dataset job.
       *
       * @return DeleteDatasetJobResponse
       */
      Models::DeleteDatasetJobResponse deleteDatasetJob(const string &DatasetId, const string &DatasetJobId);

      /**
       * @summary Deletes a job configuration for a dataset.
       *
       * @param request DeleteDatasetJobConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetJobConfigResponse
       */
      Models::DeleteDatasetJobConfigResponse deleteDatasetJobConfigWithOptions(const string &DatasetId, const string &DatasetJobConfigId, const Models::DeleteDatasetJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a job configuration for a dataset.
       *
       * @param request DeleteDatasetJobConfigRequest
       * @return DeleteDatasetJobConfigResponse
       */
      Models::DeleteDatasetJobConfigResponse deleteDatasetJobConfig(const string &DatasetId, const string &DatasetJobConfigId, const Models::DeleteDatasetJobConfigRequest &request);

      /**
       * @summary Deletes a dataset tag.
       *
       * @param request DeleteDatasetLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetLabelsResponse
       */
      Models::DeleteDatasetLabelsResponse deleteDatasetLabelsWithOptions(const string &DatasetId, const Models::DeleteDatasetLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dataset tag.
       *
       * @param request DeleteDatasetLabelsRequest
       * @return DeleteDatasetLabelsResponse
       */
      Models::DeleteDatasetLabelsResponse deleteDatasetLabels(const string &DatasetId, const Models::DeleteDatasetLabelsRequest &request);

      /**
       * @summary Deletes the information about a specified version of a dataset. Version v1 cannot be deleted by using this operation. When you call the DeleteDataset operation to delete a dataset, it can be deleted at the same time.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetVersionResponse
       */
      Models::DeleteDatasetVersionResponse deleteDatasetVersionWithOptions(const string &DatasetId, const string &VersionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the information about a specified version of a dataset. Version v1 cannot be deleted by using this operation. When you call the DeleteDataset operation to delete a dataset, it can be deleted at the same time.
       *
       * @return DeleteDatasetVersionResponse
       */
      Models::DeleteDatasetVersionResponse deleteDatasetVersion(const string &DatasetId, const string &VersionName);

      /**
       * @summary Deletes tags for a dataset version.
       *
       * @param request DeleteDatasetVersionLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetVersionLabelsResponse
       */
      Models::DeleteDatasetVersionLabelsResponse deleteDatasetVersionLabelsWithOptions(const string &DatasetId, const string &VersionName, const Models::DeleteDatasetVersionLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes tags for a dataset version.
       *
       * @param request DeleteDatasetVersionLabelsRequest
       * @return DeleteDatasetVersionLabelsResponse
       */
      Models::DeleteDatasetVersionLabelsResponse deleteDatasetVersionLabels(const string &DatasetId, const string &VersionName, const Models::DeleteDatasetVersionLabelsRequest &request);

      /**
       * @summary Deletes an experiment.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExperimentResponse
       */
      Models::DeleteExperimentResponse deleteExperimentWithOptions(const string &ExperimentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an experiment.
       *
       * @return DeleteExperimentResponse
       */
      Models::DeleteExperimentResponse deleteExperiment(const string &ExperimentId);

      /**
       * @summary Deletes an experiment tag.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExperimentLabelResponse
       */
      Models::DeleteExperimentLabelResponse deleteExperimentLabelWithOptions(const string &ExperimentId, const string &Key, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an experiment tag.
       *
       * @return DeleteExperimentLabelResponse
       */
      Models::DeleteExperimentLabelResponse deleteExperimentLabel(const string &ExperimentId, const string &Key);

      /**
       * @summary Deletes a member from a workspace.
       *
       * @param request DeleteMembersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMembersResponse
       */
      Models::DeleteMembersResponse deleteMembersWithOptions(const string &WorkspaceId, const Models::DeleteMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a member from a workspace.
       *
       * @param request DeleteMembersRequest
       * @return DeleteMembersResponse
       */
      Models::DeleteMembersResponse deleteMembers(const string &WorkspaceId, const Models::DeleteMembersRequest &request);

      /**
       * @summary Deletes a model.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModelWithOptions(const string &ModelId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a model.
       *
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModel(const string &ModelId);

      /**
       * @summary Deletes the labels of a model.
       *
       * @param request DeleteModelLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelLabelsResponse
       */
      Models::DeleteModelLabelsResponse deleteModelLabelsWithOptions(const string &ModelId, const Models::DeleteModelLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the labels of a model.
       *
       * @param request DeleteModelLabelsRequest
       * @return DeleteModelLabelsResponse
       */
      Models::DeleteModelLabelsResponse deleteModelLabels(const string &ModelId, const Models::DeleteModelLabelsRequest &request);

      /**
       * @summary Deletes a model version.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelVersionResponse
       */
      Models::DeleteModelVersionResponse deleteModelVersionWithOptions(const string &ModelId, const string &VersionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a model version.
       *
       * @return DeleteModelVersionResponse
       */
      Models::DeleteModelVersionResponse deleteModelVersion(const string &ModelId, const string &VersionName);

      /**
       * @summary Delete a model version tag.
       *
       * @param request DeleteModelVersionLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelVersionLabelsResponse
       */
      Models::DeleteModelVersionLabelsResponse deleteModelVersionLabelsWithOptions(const string &ModelId, const string &VersionName, const Models::DeleteModelVersionLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a model version tag.
       *
       * @param request DeleteModelVersionLabelsRequest
       * @return DeleteModelVersionLabelsResponse
       */
      Models::DeleteModelVersionLabelsResponse deleteModelVersionLabels(const string &ModelId, const string &VersionName, const Models::DeleteModelVersionLabelsRequest &request);

      /**
       * @summary Deletes a run.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRunResponse
       */
      Models::DeleteRunResponse deleteRunWithOptions(const string &RunId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a run.
       *
       * @return DeleteRunResponse
       */
      Models::DeleteRunResponse deleteRun(const string &RunId);

      /**
       * @summary Deletes a tag that is added to a run.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRunLabelResponse
       */
      Models::DeleteRunLabelResponse deleteRunLabelWithOptions(const string &RunId, const string &Key, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a tag that is added to a run.
       *
       * @return DeleteRunLabelResponse
       */
      Models::DeleteRunLabelResponse deleteRunLabel(const string &RunId, const string &Key);

      /**
       * @summary Deletes user configurations.
       *
       * @param request DeleteUserConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserConfigResponse
       */
      Models::DeleteUserConfigResponse deleteUserConfigWithOptions(const string &CategoryName, const Models::DeleteUserConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes user configurations.
       *
       * @param request DeleteUserConfigRequest
       * @return DeleteUserConfigResponse
       */
      Models::DeleteUserConfigResponse deleteUserConfig(const string &CategoryName, const Models::DeleteUserConfigRequest &request);

      /**
       * @summary Deletes a workspace. After you delete a workspace, the associated resources are not automatically released. You must manually release the resources.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspaceWithOptions(const string &WorkspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a workspace. After you delete a workspace, the associated resources are not automatically released. You must manually release the resources.
       *
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspace(const string &WorkspaceId);

      /**
       * @summary Deletes a resource from a workspace. The resource is not deleted at the underlying layer.
       *
       * @param request DeleteWorkspaceResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceResourceResponse
       */
      Models::DeleteWorkspaceResourceResponse deleteWorkspaceResourceWithOptions(const string &WorkspaceId, const Models::DeleteWorkspaceResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a resource from a workspace. The resource is not deleted at the underlying layer.
       *
       * @param request DeleteWorkspaceResourceRequest
       * @return DeleteWorkspaceResourceResponse
       */
      Models::DeleteWorkspaceResourceResponse deleteWorkspaceResource(const string &WorkspaceId, const Models::DeleteWorkspaceResourceRequest &request);

      /**
       * @summary Obtains the details of a code source.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCodeSourceResponse
       */
      Models::GetCodeSourceResponse getCodeSourceWithOptions(const string &CodeSourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of a code source.
       *
       * @return GetCodeSourceResponse
       */
      Models::GetCodeSourceResponse getCodeSource(const string &CodeSourceId);

      /**
       * @summary Obtains a workspace configuration item.
       *
       * @param request GetConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConfigResponse
       */
      Models::GetConfigResponse getConfigWithOptions(const string &WorkspaceId, const Models::GetConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a workspace configuration item.
       *
       * @param request GetConfigRequest
       * @return GetConfigResponse
       */
      Models::GetConfigResponse getConfig(const string &WorkspaceId, const Models::GetConfigRequest &request);

      /**
       * @summary Obtains the connection details.
       *
       * @param request GetConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConnectionResponse
       */
      Models::GetConnectionResponse getConnectionWithOptions(const string &ConnectionId, const Models::GetConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the connection details.
       *
       * @param request GetConnectionRequest
       * @return GetConnectionResponse
       */
      Models::GetConnectionResponse getConnection(const string &ConnectionId, const Models::GetConnectionRequest &request);

      /**
       * @summary Obtains a dataset.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasetResponse
       */
      Models::GetDatasetResponse getDatasetWithOptions(const string &DatasetId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a dataset.
       *
       * @return GetDatasetResponse
       */
      Models::GetDatasetResponse getDataset(const string &DatasetId);

      /**
       * @summary Queries the metadata records of specific files in a dataset.
       *
       * @param request GetDatasetFileMetaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasetFileMetaResponse
       */
      Models::GetDatasetFileMetaResponse getDatasetFileMetaWithOptions(const string &DatasetId, const string &DatasetFileMetaId, const Models::GetDatasetFileMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metadata records of specific files in a dataset.
       *
       * @param request GetDatasetFileMetaRequest
       * @return GetDatasetFileMetaResponse
       */
      Models::GetDatasetFileMetaResponse getDatasetFileMeta(const string &DatasetId, const string &DatasetFileMetaId, const Models::GetDatasetFileMetaRequest &request);

      /**
       * @summary Obtains metadata statistics of a dataset.
       *
       * @param request GetDatasetFileMetasStatisticsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasetFileMetasStatisticsResponse
       */
      Models::GetDatasetFileMetasStatisticsResponse getDatasetFileMetasStatisticsWithOptions(const string &DatasetId, const Models::GetDatasetFileMetasStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains metadata statistics of a dataset.
       *
       * @param request GetDatasetFileMetasStatisticsRequest
       * @return GetDatasetFileMetasStatisticsResponse
       */
      Models::GetDatasetFileMetasStatisticsResponse getDatasetFileMetasStatistics(const string &DatasetId, const Models::GetDatasetFileMetasStatisticsRequest &request);

      /**
       * @summary Obtains a dataset job.
       *
       * @param request GetDatasetJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasetJobResponse
       */
      Models::GetDatasetJobResponse getDatasetJobWithOptions(const string &DatasetId, const string &DatasetJobId, const Models::GetDatasetJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a dataset job.
       *
       * @param request GetDatasetJobRequest
       * @return GetDatasetJobResponse
       */
      Models::GetDatasetJobResponse getDatasetJob(const string &DatasetId, const string &DatasetJobId, const Models::GetDatasetJobRequest &request);

      /**
       * @summary Obtains a job configuration for a dataset.
       *
       * @param request GetDatasetJobConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasetJobConfigResponse
       */
      Models::GetDatasetJobConfigResponse getDatasetJobConfigWithOptions(const string &DatasetId, const string &DatasetJobConfigId, const Models::GetDatasetJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a job configuration for a dataset.
       *
       * @param request GetDatasetJobConfigRequest
       * @return GetDatasetJobConfigResponse
       */
      Models::GetDatasetJobConfigResponse getDatasetJobConfig(const string &DatasetId, const string &DatasetJobConfigId, const Models::GetDatasetJobConfigRequest &request);

      /**
       * @summary Obtains the information about a specified version of a dataset.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasetVersionResponse
       */
      Models::GetDatasetVersionResponse getDatasetVersionWithOptions(const string &DatasetId, const string &VersionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information about a specified version of a dataset.
       *
       * @return GetDatasetVersionResponse
       */
      Models::GetDatasetVersionResponse getDatasetVersion(const string &DatasetId, const string &VersionName);

      /**
       * @summary Queries information about the default workspace.
       *
       * @param request GetDefaultWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDefaultWorkspaceResponse
       */
      Models::GetDefaultWorkspaceResponse getDefaultWorkspaceWithOptions(const Models::GetDefaultWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the default workspace.
       *
       * @param request GetDefaultWorkspaceRequest
       * @return GetDefaultWorkspaceResponse
       */
      Models::GetDefaultWorkspaceResponse getDefaultWorkspace(const Models::GetDefaultWorkspaceRequest &request);

      /**
       * @summary Obtains an experiment.
       *
       * @param request GetExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExperimentResponse
       */
      Models::GetExperimentResponse getExperimentWithOptions(const string &ExperimentId, const Models::GetExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains an experiment.
       *
       * @param request GetExperimentRequest
       * @return GetExperimentResponse
       */
      Models::GetExperimentResponse getExperiment(const string &ExperimentId, const Models::GetExperimentRequest &request);

      /**
       * @summary Obtains the information about an image.
       *
       * @param request GetImageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageResponse
       */
      Models::GetImageResponse getImageWithOptions(const string &ImageId, const Models::GetImageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information about an image.
       *
       * @param request GetImageRequest
       * @return GetImageResponse
       */
      Models::GetImageResponse getImage(const string &ImageId, const Models::GetImageRequest &request);

      /**
       * @summary Obtains a member in a workspace.
       *
       * @param request GetMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemberResponse
       */
      Models::GetMemberResponse getMemberWithOptions(const string &WorkspaceId, const Models::GetMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a member in a workspace.
       *
       * @param request GetMemberRequest
       * @return GetMemberResponse
       */
      Models::GetMemberResponse getMember(const string &WorkspaceId, const Models::GetMemberRequest &request);

      /**
       * @summary Obtains the details of a specified model.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelResponse
       */
      Models::GetModelResponse getModelWithOptions(const string &ModelId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of a specified model.
       *
       * @return GetModelResponse
       */
      Models::GetModelResponse getModel(const string &ModelId);

      /**
       * @summary Queries a model version.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelVersionResponse
       */
      Models::GetModelVersionResponse getModelVersionWithOptions(const string &ModelId, const string &VersionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a model version.
       *
       * @return GetModelVersionResponse
       */
      Models::GetModelVersionResponse getModelVersion(const string &ModelId, const string &VersionName);

      /**
       * @summary Obtains permissions on a workspace.
       *
       * @param tmpReq GetPermissionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPermissionResponse
       */
      Models::GetPermissionResponse getPermissionWithOptions(const string &WorkspaceId, const string &PermissionCode, const Models::GetPermissionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains permissions on a workspace.
       *
       * @param request GetPermissionRequest
       * @return GetPermissionResponse
       */
      Models::GetPermissionResponse getPermission(const string &WorkspaceId, const string &PermissionCode, const Models::GetPermissionRequest &request);

      /**
       * @summary Queries the run information.
       *
       * @param request GetRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRunResponse
       */
      Models::GetRunResponse getRunWithOptions(const string &RunId, const Models::GetRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the run information.
       *
       * @param request GetRunRequest
       * @return GetRunResponse
       */
      Models::GetRunResponse getRun(const string &RunId, const Models::GetRunRequest &request);

      /**
       * @summary Queries the details about a workspace.
       *
       * @param request GetWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspaceWithOptions(const string &WorkspaceId, const Models::GetWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a workspace.
       *
       * @param request GetWorkspaceRequest
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspace(const string &WorkspaceId, const Models::GetWorkspaceRequest &request);

      /**
       * @summary Lists code sources. Pagination, sorting, and filtering by condition are supported.
       *
       * @param request ListCodeSourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCodeSourcesResponse
       */
      Models::ListCodeSourcesResponse listCodeSourcesWithOptions(const Models::ListCodeSourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists code sources. Pagination, sorting, and filtering by condition are supported.
       *
       * @param request ListCodeSourcesRequest
       * @return ListCodeSourcesResponse
       */
      Models::ListCodeSourcesResponse listCodeSources(const Models::ListCodeSourcesRequest &request);

      /**
       * @summary Obtains a list of workspace configurations.
       *
       * @param request ListConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConfigsResponse
       */
      Models::ListConfigsResponse listConfigsWithOptions(const string &WorkspaceId, const Models::ListConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of workspace configurations.
       *
       * @param request ListConfigsRequest
       * @return ListConfigsResponse
       */
      Models::ListConfigsResponse listConfigs(const string &WorkspaceId, const Models::ListConfigsRequest &request);

      /**
       * @summary Lists connections.
       *
       * @param tmpReq ListConnectionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConnectionsResponse
       */
      Models::ListConnectionsResponse listConnectionsWithOptions(const Models::ListConnectionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists connections.
       *
       * @param request ListConnectionsRequest
       * @return ListConnectionsResponse
       */
      Models::ListConnectionsResponse listConnections(const Models::ListConnectionsRequest &request);

      /**
       * @summary Queries a list of dataset files.
       *
       * @param tmpReq ListDatasetFileMetasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasetFileMetasResponse
       */
      Models::ListDatasetFileMetasResponse listDatasetFileMetasWithOptions(const string &DatasetId, const Models::ListDatasetFileMetasRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of dataset files.
       *
       * @param request ListDatasetFileMetasRequest
       * @return ListDatasetFileMetasResponse
       */
      Models::ListDatasetFileMetasResponse listDatasetFileMetas(const string &DatasetId, const Models::ListDatasetFileMetasRequest &request);

      /**
       * @summary Queries the dataset job configurations at a time.
       *
       * @param request ListDatasetJobConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasetJobConfigsResponse
       */
      Models::ListDatasetJobConfigsResponse listDatasetJobConfigsWithOptions(const string &DatasetId, const Models::ListDatasetJobConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the dataset job configurations at a time.
       *
       * @param request ListDatasetJobConfigsRequest
       * @return ListDatasetJobConfigsResponse
       */
      Models::ListDatasetJobConfigsResponse listDatasetJobConfigs(const string &DatasetId, const Models::ListDatasetJobConfigsRequest &request);

      /**
       * @summary Lists jobs in a dataset.
       *
       * @param request ListDatasetJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasetJobsResponse
       */
      Models::ListDatasetJobsResponse listDatasetJobsWithOptions(const string &DatasetId, const Models::ListDatasetJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists jobs in a dataset.
       *
       * @param request ListDatasetJobsRequest
       * @return ListDatasetJobsResponse
       */
      Models::ListDatasetJobsResponse listDatasetJobs(const string &DatasetId, const Models::ListDatasetJobsRequest &request);

      /**
       * @summary Lists dataset versions.
       *
       * @param request ListDatasetVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasetVersionsResponse
       */
      Models::ListDatasetVersionsResponse listDatasetVersionsWithOptions(const string &DatasetId, const Models::ListDatasetVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists dataset versions.
       *
       * @param request ListDatasetVersionsRequest
       * @return ListDatasetVersionsResponse
       */
      Models::ListDatasetVersionsResponse listDatasetVersions(const string &DatasetId, const Models::ListDatasetVersionsRequest &request);

      /**
       * @summary Lists the datasets in a workspace.
       *
       * @param request ListDatasetsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasetsResponse
       */
      Models::ListDatasetsResponse listDatasetsWithOptions(const Models::ListDatasetsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the datasets in a workspace.
       *
       * @param request ListDatasetsRequest
       * @return ListDatasetsResponse
       */
      Models::ListDatasetsResponse listDatasets(const Models::ListDatasetsRequest &request);

      /**
       * @summary Lists experiments.
       *
       * @param tmpReq ListExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExperimentResponse
       */
      Models::ListExperimentResponse listExperimentWithOptions(const Models::ListExperimentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists experiments.
       *
       * @param request ListExperimentRequest
       * @return ListExperimentResponse
       */
      Models::ListExperimentResponse listExperiment(const Models::ListExperimentRequest &request);

      /**
       * @summary 列举特性
       *
       * @param request ListFeaturesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeaturesResponse
       */
      Models::ListFeaturesResponse listFeaturesWithOptions(const Models::ListFeaturesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举特性
       *
       * @param request ListFeaturesRequest
       * @return ListFeaturesResponse
       */
      Models::ListFeaturesResponse listFeatures(const Models::ListFeaturesRequest &request);

      /**
       * @summary Lists all tags of an image.
       *
       * @param request ListImageLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImageLabelsResponse
       */
      Models::ListImageLabelsResponse listImageLabelsWithOptions(const Models::ListImageLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all tags of an image.
       *
       * @param request ListImageLabelsRequest
       * @return ListImageLabelsResponse
       */
      Models::ListImageLabelsResponse listImageLabels(const Models::ListImageLabelsRequest &request);

      /**
       * @summary Queries a list of images.
       *
       * @param request ListImagesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImagesResponse
       */
      Models::ListImagesResponse listImagesWithOptions(const Models::ListImagesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of images.
       *
       * @param request ListImagesRequest
       * @return ListImagesResponse
       */
      Models::ListImagesResponse listImages(const Models::ListImagesRequest &request);

      /**
       * @summary Obtains the members in a workspace.
       *
       * @param request ListMembersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMembersResponse
       */
      Models::ListMembersResponse listMembersWithOptions(const string &WorkspaceId, const Models::ListMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the members in a workspace.
       *
       * @param request ListMembersRequest
       * @return ListMembersResponse
       */
      Models::ListMembersResponse listMembers(const string &WorkspaceId, const Models::ListMembersRequest &request);

      /**
       * @summary Queries a list of model versions.
       *
       * @param request ListModelVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelVersionsResponse
       */
      Models::ListModelVersionsResponse listModelVersionsWithOptions(const string &ModelId, const Models::ListModelVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of model versions.
       *
       * @param request ListModelVersionsRequest
       * @return ListModelVersionsResponse
       */
      Models::ListModelVersionsResponse listModelVersions(const string &ModelId, const Models::ListModelVersionsRequest &request);

      /**
       * @summary Queries a list of models.
       *
       * @param tmpReq ListModelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelsResponse
       */
      Models::ListModelsResponse listModelsWithOptions(const Models::ListModelsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of models.
       *
       * @param request ListModelsRequest
       * @return ListModelsResponse
       */
      Models::ListModelsResponse listModels(const Models::ListModelsRequest &request);

      /**
       * @summary Lists the permissions that a user has in a workspace.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPermissionsResponse
       */
      Models::ListPermissionsResponse listPermissionsWithOptions(const string &WorkspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the permissions that a user has in a workspace.
       *
       * @return ListPermissionsResponse
       */
      Models::ListPermissionsResponse listPermissions(const string &WorkspaceId);

      /**
       * @summary 列举产品
       *
       * @param request ListProductsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProductsWithOptions(const Models::ListProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举产品
       *
       * @param request ListProductsRequest
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProducts(const Models::ListProductsRequest &request);

      /**
       * @summary Obtains the list of quotas.
       *
       * @param request ListQuotasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotasResponse
       */
      Models::ListQuotasResponse listQuotasWithOptions(const Models::ListQuotasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the list of quotas.
       *
       * @param request ListQuotasRequest
       * @return ListQuotasResponse
       */
      Models::ListQuotasResponse listQuotas(const Models::ListQuotasRequest &request);

      /**
       * @summary Queries the resources that are associated with a workspace.
       *
       * @param request ListResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResourcesWithOptions(const Models::ListResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources that are associated with a workspace.
       *
       * @param request ListResourcesRequest
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResources(const Models::ListResourcesRequest &request);

      /**
       * @summary Lists the metrics for a run.
       *
       * @param request ListRunMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRunMetricsResponse
       */
      Models::ListRunMetricsResponse listRunMetricsWithOptions(const string &RunId, const Models::ListRunMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the metrics for a run.
       *
       * @param request ListRunMetricsRequest
       * @return ListRunMetricsResponse
       */
      Models::ListRunMetricsResponse listRunMetrics(const string &RunId, const Models::ListRunMetricsRequest &request);

      /**
       * @summary Queries a list of runs.
       *
       * @param request ListRunsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRunsResponse
       */
      Models::ListRunsResponse listRunsWithOptions(const Models::ListRunsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of runs.
       *
       * @param request ListRunsRequest
       * @return ListRunsResponse
       */
      Models::ListRunsResponse listRuns(const Models::ListRunsRequest &request);

      /**
       * @summary Queries user information.
       *
       * @param request ListUserConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserConfigsResponse
       */
      Models::ListUserConfigsResponse listUserConfigsWithOptions(const Models::ListUserConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user information.
       *
       * @param request ListUserConfigsRequest
       * @return ListUserConfigsResponse
       */
      Models::ListUserConfigsResponse listUserConfigs(const Models::ListUserConfigsRequest &request);

      /**
       * @summary Lists the users who do not belong to a workspace. These users can be added to the workspace as members.
       *
       * @param request ListWorkspaceUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspaceUsersResponse
       */
      Models::ListWorkspaceUsersResponse listWorkspaceUsersWithOptions(const string &WorkspaceId, const Models::ListWorkspaceUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the users who do not belong to a workspace. These users can be added to the workspace as members.
       *
       * @param request ListWorkspaceUsersRequest
       * @return ListWorkspaceUsersResponse
       */
      Models::ListWorkspaceUsersResponse listWorkspaceUsers(const string &WorkspaceId, const Models::ListWorkspaceUsersRequest &request);

      /**
       * @summary Lists all workspaces in a region.
       *
       * @description You can use the option parameter to specify query options, so as to obtain different information about the workspaces.
       *
       * @param request ListWorkspacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all workspaces in a region.
       *
       * @description You can use the option parameter to specify query options, so as to obtain different information about the workspaces.
       *
       * @param request ListWorkspacesRequest
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspaces(const Models::ListWorkspacesRequest &request);

      /**
       * @summary Logs multiple metrics for a run at a time.
       *
       * @param request LogRunMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return LogRunMetricsResponse
       */
      Models::LogRunMetricsResponse logRunMetricsWithOptions(const string &RunId, const Models::LogRunMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Logs multiple metrics for a run at a time.
       *
       * @param request LogRunMetricsRequest
       * @return LogRunMetricsResponse
       */
      Models::LogRunMetricsResponse logRunMetrics(const string &RunId, const Models::LogRunMetricsRequest &request);

      /**
       * @summary Publishes a private code source to a workspace to make the code source publicly accessible.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishCodeSourceResponse
       */
      Models::PublishCodeSourceResponse publishCodeSourceWithOptions(const string &CodeSourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a private code source to a workspace to make the code source publicly accessible.
       *
       * @return PublishCodeSourceResponse
       */
      Models::PublishCodeSourceResponse publishCodeSource(const string &CodeSourceId);

      /**
       * @summary Publishes a private dataset in a workspace.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishDatasetResponse
       */
      Models::PublishDatasetResponse publishDatasetWithOptions(const string &DatasetId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a private dataset in a workspace.
       *
       * @return PublishDatasetResponse
       */
      Models::PublishDatasetResponse publishDataset(const string &DatasetId);

      /**
       * @summary Publishes an image. After the image is published, the visibility of the image is changed from PRIVATE to PUBLIC.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishImageResponse
       */
      Models::PublishImageResponse publishImageWithOptions(const string &ImageId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes an image. After the image is published, the visibility of the image is changed from PRIVATE to PUBLIC.
       *
       * @return PublishImageResponse
       */
      Models::PublishImageResponse publishImage(const string &ImageId);

      /**
       * @summary Removes an image.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveImageResponse
       */
      Models::RemoveImageResponse removeImageWithOptions(const string &ImageId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an image.
       *
       * @return RemoveImageResponse
       */
      Models::RemoveImageResponse removeImage(const string &ImageId);

      /**
       * @summary Removes an image tag.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveImageLabelsResponse
       */
      Models::RemoveImageLabelsResponse removeImageLabelsWithOptions(const string &ImageId, const string &LabelKey, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an image tag.
       *
       * @return RemoveImageLabelsResponse
       */
      Models::RemoveImageLabelsResponse removeImageLabels(const string &ImageId, const string &LabelKey);

      /**
       * @summary Removes a member role.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveMemberRoleResponse
       */
      Models::RemoveMemberRoleResponse removeMemberRoleWithOptions(const string &WorkspaceId, const string &MemberId, const string &RoleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a member role.
       *
       * @return RemoveMemberRoleResponse
       */
      Models::RemoveMemberRoleResponse removeMemberRole(const string &WorkspaceId, const string &MemberId, const string &RoleName);

      /**
       * @summary Updates a experiment tag.
       *
       * @param request SetExperimentLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetExperimentLabelsResponse
       */
      Models::SetExperimentLabelsResponse setExperimentLabelsWithOptions(const string &ExperimentId, const Models::SetExperimentLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a experiment tag.
       *
       * @param request SetExperimentLabelsRequest
       * @return SetExperimentLabelsResponse
       */
      Models::SetExperimentLabelsResponse setExperimentLabels(const string &ExperimentId, const Models::SetExperimentLabelsRequest &request);

      /**
       * @summary Updates the user configurations.
       *
       * @param request SetUserConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetUserConfigsResponse
       */
      Models::SetUserConfigsResponse setUserConfigsWithOptions(const Models::SetUserConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the user configurations.
       *
       * @param request SetUserConfigsRequest
       * @return SetUserConfigsResponse
       */
      Models::SetUserConfigsResponse setUserConfigs(const Models::SetUserConfigsRequest &request);

      /**
       * @summary Stops a dataset job.
       *
       * @param request StopDatasetJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDatasetJobResponse
       */
      Models::StopDatasetJobResponse stopDatasetJobWithOptions(const string &DatasetId, const string &DatasetJobId, const Models::StopDatasetJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a dataset job.
       *
       * @param request StopDatasetJobRequest
       * @return StopDatasetJobResponse
       */
      Models::StopDatasetJobResponse stopDatasetJob(const string &DatasetId, const string &DatasetJobId, const Models::StopDatasetJobRequest &request);

      /**
       * @summary Updates a code build.
       *
       * @param request UpdateCodeSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCodeSourceResponse
       */
      Models::UpdateCodeSourceResponse updateCodeSourceWithOptions(const string &CodeSourceId, const Models::UpdateCodeSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a code build.
       *
       * @param request UpdateCodeSourceRequest
       * @return UpdateCodeSourceResponse
       */
      Models::UpdateCodeSourceResponse updateCodeSource(const string &CodeSourceId, const Models::UpdateCodeSourceRequest &request);

      /**
       * @summary Updates or adds a workspace configuration item.
       *
       * @param request UpdateConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConfigResponse
       */
      Models::UpdateConfigResponse updateConfigWithOptions(const string &WorkspaceId, const Models::UpdateConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates or adds a workspace configuration item.
       *
       * @param request UpdateConfigRequest
       * @return UpdateConfigResponse
       */
      Models::UpdateConfigResponse updateConfig(const string &WorkspaceId, const Models::UpdateConfigRequest &request);

      /**
       * @summary Updates or adds workspace configurations in batches.
       *
       * @param request UpdateConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConfigsResponse
       */
      Models::UpdateConfigsResponse updateConfigsWithOptions(const string &WorkspaceId, const Models::UpdateConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates or adds workspace configurations in batches.
       *
       * @param request UpdateConfigsRequest
       * @return UpdateConfigsResponse
       */
      Models::UpdateConfigsResponse updateConfigs(const string &WorkspaceId, const Models::UpdateConfigsRequest &request);

      /**
       * @summary Updates a connection.
       *
       * @param request UpdateConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConnectionResponse
       */
      Models::UpdateConnectionResponse updateConnectionWithOptions(const string &ConnectionId, const Models::UpdateConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a connection.
       *
       * @param request UpdateConnectionRequest
       * @return UpdateConnectionResponse
       */
      Models::UpdateConnectionResponse updateConnection(const string &ConnectionId, const Models::UpdateConnectionRequest &request);

      /**
       * @summary Updates the name, description, and other information about a dataset.
       *
       * @param request UpdateDatasetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasetResponse
       */
      Models::UpdateDatasetResponse updateDatasetWithOptions(const string &DatasetId, const Models::UpdateDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name, description, and other information about a dataset.
       *
       * @param request UpdateDatasetRequest
       * @return UpdateDatasetResponse
       */
      Models::UpdateDatasetResponse updateDataset(const string &DatasetId, const Models::UpdateDatasetRequest &request);

      /**
       * @summary Updates the metadata records of multiple files in a dataset at a time.
       *
       * @param request UpdateDatasetFileMetasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasetFileMetasResponse
       */
      Models::UpdateDatasetFileMetasResponse updateDatasetFileMetasWithOptions(const string &DatasetId, const Models::UpdateDatasetFileMetasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the metadata records of multiple files in a dataset at a time.
       *
       * @param request UpdateDatasetFileMetasRequest
       * @return UpdateDatasetFileMetasResponse
       */
      Models::UpdateDatasetFileMetasResponse updateDatasetFileMetas(const string &DatasetId, const Models::UpdateDatasetFileMetasRequest &request);

      /**
       * @summary Updates a dataset job.
       *
       * @param request UpdateDatasetJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasetJobResponse
       */
      Models::UpdateDatasetJobResponse updateDatasetJobWithOptions(const string &DatasetId, const string &DatasetJobId, const Models::UpdateDatasetJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a dataset job.
       *
       * @param request UpdateDatasetJobRequest
       * @return UpdateDatasetJobResponse
       */
      Models::UpdateDatasetJobResponse updateDatasetJob(const string &DatasetId, const string &DatasetJobId, const Models::UpdateDatasetJobRequest &request);

      /**
       * @summary Updates a job configuration for a dataset.
       *
       * @param request UpdateDatasetJobConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasetJobConfigResponse
       */
      Models::UpdateDatasetJobConfigResponse updateDatasetJobConfigWithOptions(const string &DatasetId, const string &DatasetJobConfigId, const Models::UpdateDatasetJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a job configuration for a dataset.
       *
       * @param request UpdateDatasetJobConfigRequest
       * @return UpdateDatasetJobConfigResponse
       */
      Models::UpdateDatasetJobConfigResponse updateDatasetJobConfig(const string &DatasetId, const string &DatasetJobConfigId, const Models::UpdateDatasetJobConfigRequest &request);

      /**
       * @summary Updates the information about a specified version of a dataset.
       *
       * @param request UpdateDatasetVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasetVersionResponse
       */
      Models::UpdateDatasetVersionResponse updateDatasetVersionWithOptions(const string &DatasetId, const string &VersionName, const Models::UpdateDatasetVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a specified version of a dataset.
       *
       * @param request UpdateDatasetVersionRequest
       * @return UpdateDatasetVersionResponse
       */
      Models::UpdateDatasetVersionResponse updateDatasetVersion(const string &DatasetId, const string &VersionName, const Models::UpdateDatasetVersionRequest &request);

      /**
       * @summary Specifies a workspace as the default workspace.
       *
       * @param request UpdateDefaultWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDefaultWorkspaceResponse
       */
      Models::UpdateDefaultWorkspaceResponse updateDefaultWorkspaceWithOptions(const Models::UpdateDefaultWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies a workspace as the default workspace.
       *
       * @param request UpdateDefaultWorkspaceRequest
       * @return UpdateDefaultWorkspaceResponse
       */
      Models::UpdateDefaultWorkspaceResponse updateDefaultWorkspace(const Models::UpdateDefaultWorkspaceRequest &request);

      /**
       * @summary Updates an experiment.
       *
       * @param request UpdateExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExperimentResponse
       */
      Models::UpdateExperimentResponse updateExperimentWithOptions(const string &ExperimentId, const Models::UpdateExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an experiment.
       *
       * @param request UpdateExperimentRequest
       * @return UpdateExperimentResponse
       */
      Models::UpdateExperimentResponse updateExperiment(const string &ExperimentId, const Models::UpdateExperimentRequest &request);

      /**
       * @summary Updates the basic configuration information about a model.
       *
       * @param request UpdateModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelResponse
       */
      Models::UpdateModelResponse updateModelWithOptions(const string &ModelId, const Models::UpdateModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic configuration information about a model.
       *
       * @param request UpdateModelRequest
       * @return UpdateModelResponse
       */
      Models::UpdateModelResponse updateModel(const string &ModelId, const Models::UpdateModelRequest &request);

      /**
       * @summary Updates a model version.
       *
       * @param request UpdateModelVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelVersionResponse
       */
      Models::UpdateModelVersionResponse updateModelVersionWithOptions(const string &ModelId, const string &VersionName, const Models::UpdateModelVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a model version.
       *
       * @param request UpdateModelVersionRequest
       * @return UpdateModelVersionResponse
       */
      Models::UpdateModelVersionResponse updateModelVersion(const string &ModelId, const string &VersionName, const Models::UpdateModelVersionRequest &request);

      /**
       * @summary Updates the run information.
       *
       * @param request UpdateRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRunResponse
       */
      Models::UpdateRunResponse updateRunWithOptions(const string &RunId, const Models::UpdateRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the run information.
       *
       * @param request UpdateRunRequest
       * @return UpdateRunResponse
       */
      Models::UpdateRunResponse updateRun(const string &RunId, const Models::UpdateRunRequest &request);

      /**
       * @summary Updates the name and description of a workspace.
       *
       * @param request UpdateWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkspaceResponse
       */
      Models::UpdateWorkspaceResponse updateWorkspaceWithOptions(const string &WorkspaceId, const Models::UpdateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name and description of a workspace.
       *
       * @param request UpdateWorkspaceRequest
       * @return UpdateWorkspaceResponse
       */
      Models::UpdateWorkspaceResponse updateWorkspace(const string &WorkspaceId, const Models::UpdateWorkspaceRequest &request);

      /**
       * @summary Updates the resources of a workspace.
       *
       * @param request UpdateWorkspaceResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkspaceResourceResponse
       */
      Models::UpdateWorkspaceResourceResponse updateWorkspaceResourceWithOptions(const string &WorkspaceId, const Models::UpdateWorkspaceResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the resources of a workspace.
       *
       * @param request UpdateWorkspaceResourceRequest
       * @return UpdateWorkspaceResourceResponse
       */
      Models::UpdateWorkspaceResourceResponse updateWorkspaceResource(const string &WorkspaceId, const Models::UpdateWorkspaceResourceRequest &request);

      /**
       * @summary 验证连接
       *
       * @param request ValidateConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateConnectionResponse
       */
      Models::ValidateConnectionResponse validateConnectionWithOptions(const Models::ValidateConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 验证连接
       *
       * @param request ValidateConnectionRequest
       * @return ValidateConnectionResponse
       */
      Models::ValidateConnectionResponse validateConnection(const Models::ValidateConnectionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
