// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DATAPHINPUBLIC20230630_HPP_
#define ALIBABACLOUD_DATAPHINPUBLIC20230630_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/DataphinPublic20230630Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/DataphinPublic20230630.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a regular member to a data service application. Only the application owner can perform this operation.
       * Online version: v6.0.0.
       *
       * @param tmpReq AddDataServiceAppMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDataServiceAppMemberResponse
       */
      Models::AddDataServiceAppMemberResponse addDataServiceAppMemberWithOptions(const Models::AddDataServiceAppMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a regular member to a data service application. Only the application owner can perform this operation.
       * Online version: v6.0.0.
       *
       * @param request AddDataServiceAppMemberRequest
       * @return AddDataServiceAppMemberResponse
       */
      Models::AddDataServiceAppMemberResponse addDataServiceAppMember(const Models::AddDataServiceAppMemberRequest &request);

      /**
       * @summary Adds users to a data service project and assigns roles to them.
       *
       * @param tmpReq AddDataServiceProjectMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDataServiceProjectMemberResponse
       */
      Models::AddDataServiceProjectMemberResponse addDataServiceProjectMemberWithOptions(const Models::AddDataServiceProjectMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds users to a data service project and assigns roles to them.
       *
       * @param request AddDataServiceProjectMemberRequest
       * @return AddDataServiceProjectMemberResponse
       */
      Models::AddDataServiceProjectMemberResponse addDataServiceProjectMember(const Models::AddDataServiceProjectMemberRequest &request);

      /**
       * @summary Adds members to a project.
       *
       * @param tmpReq AddProjectMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddProjectMemberResponse
       */
      Models::AddProjectMemberResponse addProjectMemberWithOptions(const Models::AddProjectMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds members to a project.
       *
       * @param request AddProjectMemberRequest
       * @return AddProjectMemberResponse
       */
      Models::AddProjectMemberResponse addProjectMember(const Models::AddProjectMemberRequest &request);

      /**
       * @summary Registers data lineage. Available since version v5.4.0.
       *
       * @param tmpReq AddRegisterLineageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRegisterLineageResponse
       */
      Models::AddRegisterLineageResponse addRegisterLineageWithOptions(const Models::AddRegisterLineageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers data lineage. Available since version v5.4.0.
       *
       * @param request AddRegisterLineageRequest
       * @return AddRegisterLineageResponse
       */
      Models::AddRegisterLineageResponse addRegisterLineage(const Models::AddRegisterLineageRequest &request);

      /**
       * @summary Adds users to a tenant in batches. Only super administrators (SuperAdmin) and system administrators can invoke this API operation.
       *
       * @param tmpReq AddTenantMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTenantMembersResponse
       */
      Models::AddTenantMembersResponse addTenantMembersWithOptions(const Models::AddTenantMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds users to a tenant in batches. Only super administrators (SuperAdmin) and system administrators can invoke this API operation.
       *
       * @param request AddTenantMembersRequest
       * @return AddTenantMembersResponse
       */
      Models::AddTenantMembersResponse addTenantMembers(const Models::AddTenantMembersRequest &request);

      /**
       * @summary Adds tenant members by using original user identities.
       *
       * @param tmpReq AddTenantMembersBySourceUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTenantMembersBySourceUserResponse
       */
      Models::AddTenantMembersBySourceUserResponse addTenantMembersBySourceUserWithOptions(const Models::AddTenantMembersBySourceUserRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tenant members by using original user identities.
       *
       * @param request AddTenantMembersBySourceUserRequest
       * @return AddTenantMembersBySourceUserResponse
       */
      Models::AddTenantMembersBySourceUserResponse addTenantMembersBySourceUser(const Models::AddTenantMembersBySourceUserRequest &request);

      /**
       * @summary Adds members to a user group.
       *
       * @param tmpReq AddUserGroupMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserGroupMemberResponse
       */
      Models::AddUserGroupMemberResponse addUserGroupMemberWithOptions(const Models::AddUserGroupMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds members to a user group.
       *
       * @param request AddUserGroupMemberRequest
       * @return AddUserGroupMemberResponse
       */
      Models::AddUserGroupMemberResponse addUserGroupMember(const Models::AddUserGroupMemberRequest &request);

      /**
       * @summary Applies for API permissions.
       *
       * @param tmpReq ApplyDataServiceApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyDataServiceApiResponse
       */
      Models::ApplyDataServiceApiResponse applyDataServiceApiWithOptions(const Models::ApplyDataServiceApiRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for API permissions.
       *
       * @param request ApplyDataServiceApiRequest
       * @return ApplyDataServiceApiResponse
       */
      Models::ApplyDataServiceApiResponse applyDataServiceApi(const Models::ApplyDataServiceApiRequest &request);

      /**
       * @summary Applies for application permissions.
       *
       * @param tmpReq ApplyDataServiceAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyDataServiceAppResponse
       */
      Models::ApplyDataServiceAppResponse applyDataServiceAppWithOptions(const Models::ApplyDataServiceAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for application permissions.
       *
       * @param request ApplyDataServiceAppRequest
       * @return ApplyDataServiceAppResponse
       */
      Models::ApplyDataServiceAppResponse applyDataServiceApp(const Models::ApplyDataServiceAppRequest &request);

      /**
       * @summary Binds specified quality rules to schedule settings.
       * Release version: v5.4.2.
       *
       * @param tmpReq AssignQualityRuleOfAllRuleScopeSchedulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignQualityRuleOfAllRuleScopeSchedulesResponse
       */
      Models::AssignQualityRuleOfAllRuleScopeSchedulesResponse assignQualityRuleOfAllRuleScopeSchedulesWithOptions(const Models::AssignQualityRuleOfAllRuleScopeSchedulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds specified quality rules to schedule settings.
       * Release version: v5.4.2.
       *
       * @param request AssignQualityRuleOfAllRuleScopeSchedulesRequest
       * @return AssignQualityRuleOfAllRuleScopeSchedulesResponse
       */
      Models::AssignQualityRuleOfAllRuleScopeSchedulesResponse assignQualityRuleOfAllRuleScopeSchedules(const Models::AssignQualityRuleOfAllRuleScopeSchedulesRequest &request);

      /**
       * @summary Checks the connectivity of a compute source.
       *
       * @param tmpReq CheckComputeSourceConnectivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckComputeSourceConnectivityResponse
       */
      Models::CheckComputeSourceConnectivityResponse checkComputeSourceConnectivityWithOptions(const Models::CheckComputeSourceConnectivityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the connectivity of a compute source.
       *
       * @param request CheckComputeSourceConnectivityRequest
       * @return CheckComputeSourceConnectivityResponse
       */
      Models::CheckComputeSourceConnectivityResponse checkComputeSourceConnectivity(const Models::CheckComputeSourceConnectivityRequest &request);

      /**
       * @summary Checks the connectivity of an existing compute source by compute source ID.
       *
       * @param request CheckComputeSourceConnectivityByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckComputeSourceConnectivityByIdResponse
       */
      Models::CheckComputeSourceConnectivityByIdResponse checkComputeSourceConnectivityByIdWithOptions(const Models::CheckComputeSourceConnectivityByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the connectivity of an existing compute source by compute source ID.
       *
       * @param request CheckComputeSourceConnectivityByIdRequest
       * @return CheckComputeSourceConnectivityByIdResponse
       */
      Models::CheckComputeSourceConnectivityByIdResponse checkComputeSourceConnectivityById(const Models::CheckComputeSourceConnectivityByIdRequest &request);

      /**
       * @summary Checks the connectivity of a data source.
       *
       * @param tmpReq CheckDataSourceConnectivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDataSourceConnectivityResponse
       */
      Models::CheckDataSourceConnectivityResponse checkDataSourceConnectivityWithOptions(const Models::CheckDataSourceConnectivityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the connectivity of a data source.
       *
       * @param request CheckDataSourceConnectivityRequest
       * @return CheckDataSourceConnectivityResponse
       */
      Models::CheckDataSourceConnectivityResponse checkDataSourceConnectivity(const Models::CheckDataSourceConnectivityRequest &request);

      /**
       * @summary Checks the connectivity of a data source.
       *
       * @param request CheckDataSourceConnectivityByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDataSourceConnectivityByIdResponse
       */
      Models::CheckDataSourceConnectivityByIdResponse checkDataSourceConnectivityByIdWithOptions(const Models::CheckDataSourceConnectivityByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the connectivity of a data source.
       *
       * @param request CheckDataSourceConnectivityByIdRequest
       * @return CheckDataSourceConnectivityByIdResponse
       */
      Models::CheckDataSourceConnectivityByIdResponse checkDataSourceConnectivityById(const Models::CheckDataSourceConnectivityByIdRequest &request);

      /**
       * @summary Checks whether a project has data dependencies such as tasks.
       *
       * @param request CheckProjectHasDependencyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckProjectHasDependencyResponse
       */
      Models::CheckProjectHasDependencyResponse checkProjectHasDependencyWithOptions(const Models::CheckProjectHasDependencyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a project has data dependencies such as tasks.
       *
       * @param request CheckProjectHasDependencyRequest
       * @return CheckProjectHasDependencyResponse
       */
      Models::CheckProjectHasDependencyResponse checkProjectHasDependency(const Models::CheckProjectHasDependencyRequest &request);

      /**
       * @summary Checks whether a user has the permission on a specified resource.
       *
       * @param tmpReq CheckResourcePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckResourcePermissionResponse
       */
      Models::CheckResourcePermissionResponse checkResourcePermissionWithOptions(const Models::CheckResourcePermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a user has the permission on a specified resource.
       *
       * @param request CheckResourcePermissionRequest
       * @return CheckResourcePermissionResponse
       */
      Models::CheckResourcePermissionResponse checkResourcePermission(const Models::CheckResourcePermissionRequest &request);

      /**
       * @summary Creates an ad hoc query file.
       *
       * @param tmpReq CreateAdHocFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAdHocFileResponse
       */
      Models::CreateAdHocFileResponse createAdHocFileWithOptions(const Models::CreateAdHocFileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ad hoc query file.
       *
       * @param request CreateAdHocFileRequest
       * @return CreateAdHocFileResponse
       */
      Models::CreateAdHocFileResponse createAdHocFile(const Models::CreateAdHocFileRequest &request);

      /**
       * @summary Creates a batch task.
       *
       * @param tmpReq CreateBatchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBatchTaskResponse
       */
      Models::CreateBatchTaskResponse createBatchTaskWithOptions(const Models::CreateBatchTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a batch task.
       *
       * @param request CreateBatchTaskRequest
       * @return CreateBatchTaskResponse
       */
      Models::CreateBatchTaskResponse createBatchTask(const Models::CreateBatchTaskRequest &request);

      /**
       * @summary Creates a business entity.
       *
       * @param tmpReq CreateBizEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBizEntityResponse
       */
      Models::CreateBizEntityResponse createBizEntityWithOptions(const Models::CreateBizEntityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a business entity.
       *
       * @param request CreateBizEntityRequest
       * @return CreateBizEntityResponse
       */
      Models::CreateBizEntityResponse createBizEntity(const Models::CreateBizEntityRequest &request);

      /**
       * @summary Creates a business metric.
       * Release version: v5.5.0.
       *
       * @param tmpReq CreateBizMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBizMetricResponse
       */
      Models::CreateBizMetricResponse createBizMetricWithOptions(const Models::CreateBizMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a business metric.
       * Release version: v5.5.0.
       *
       * @param request CreateBizMetricRequest
       * @return CreateBizMetricResponse
       */
      Models::CreateBizMetricResponse createBizMetric(const Models::CreateBizMetricRequest &request);

      /**
       * @summary Creates a data domain.
       *
       * @param tmpReq CreateBizUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBizUnitResponse
       */
      Models::CreateBizUnitResponse createBizUnitWithOptions(const Models::CreateBizUnitRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data domain.
       *
       * @param request CreateBizUnitRequest
       * @return CreateBizUnitResponse
       */
      Models::CreateBizUnitResponse createBizUnit(const Models::CreateBizUnitRequest &request);

      /**
       * @summary Creates a compute source. Business unit administrators and project administrators have permissions to perform this operation.
       *
       * @param tmpReq CreateComputeSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComputeSourceResponse
       */
      Models::CreateComputeSourceResponse createComputeSourceWithOptions(const Models::CreateComputeSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a compute source. Business unit administrators and project administrators have permissions to perform this operation.
       *
       * @param request CreateComputeSourceRequest
       * @return CreateComputeSourceResponse
       */
      Models::CreateComputeSourceResponse createComputeSource(const Models::CreateComputeSourceRequest &request);

      /**
       * @summary Creates a data domain.
       *
       * @param tmpReq CreateDataDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataDomainResponse
       */
      Models::CreateDataDomainResponse createDataDomainWithOptions(const Models::CreateDataDomainRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data domain.
       *
       * @param request CreateDataDomainRequest
       * @return CreateDataDomainResponse
       */
      Models::CreateDataDomainResponse createDataDomain(const Models::CreateDataDomainRequest &request);

      /**
       * @summary Creates a data service API and submits it.
       *
       * @param tmpReq CreateDataServiceApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataServiceApiResponse
       */
      Models::CreateDataServiceApiResponse createDataServiceApiWithOptions(const Models::CreateDataServiceApiRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data service API and submits it.
       *
       * @param request CreateDataServiceApiRequest
       * @return CreateDataServiceApiResponse
       */
      Models::CreateDataServiceApiResponse createDataServiceApi(const Models::CreateDataServiceApiRequest &request);

      /**
       * @summary Creates a data service application. Only super administrators or system administrators can perform this operation.
       * Online version: v6.0.0.
       *
       * @param tmpReq CreateDataServiceAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataServiceAppResponse
       */
      Models::CreateDataServiceAppResponse createDataServiceAppWithOptions(const Models::CreateDataServiceAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data service application. Only super administrators or system administrators can perform this operation.
       * Online version: v6.0.0.
       *
       * @param request CreateDataServiceAppRequest
       * @return CreateDataServiceAppResponse
       */
      Models::CreateDataServiceAppResponse createDataServiceApp(const Models::CreateDataServiceAppRequest &request);

      /**
       * @summary Creates a data service application group. Only superusers and system administrators can perform this operation.
       * Online version: v6.0.0.
       *
       * @param request CreateDataServiceAppGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataServiceAppGroupResponse
       */
      Models::CreateDataServiceAppGroupResponse createDataServiceAppGroupWithOptions(const Models::CreateDataServiceAppGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data service application group. Only superusers and system administrators can perform this operation.
       * Online version: v6.0.0.
       *
       * @param request CreateDataServiceAppGroupRequest
       * @return CreateDataServiceAppGroupResponse
       */
      Models::CreateDataServiceAppGroupResponse createDataServiceAppGroup(const Models::CreateDataServiceAppGroupRequest &request);

      /**
       * @summary Create Data Source: Tenant administrators, data administrators, business unit administrators, project administrators, and operations administrators have permission to perform this operation.
       *
       * @param tmpReq CreateDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataSourceResponse
       */
      Models::CreateDataSourceResponse createDataSourceWithOptions(const Models::CreateDataSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Data Source: Tenant administrators, data administrators, business unit administrators, project administrators, and operations administrators have permission to perform this operation.
       *
       * @param request CreateDataSourceRequest
       * @return CreateDataSourceResponse
       */
      Models::CreateDataSourceResponse createDataSource(const Models::CreateDataSourceRequest &request);

      /**
       * @summary Creates a new dataset under a specified project. Available since v6.2.0.
       *
       * @description ## Operation description
       * - This API creates a new dataset in a specified project.
       * - `ProjectId` is a required parameter that specifies the ID of the project in which to create the dataset.
       * - `CreateCommand` is a complex object that contains the configuration information required to create the dataset.
       * - `Name`, `Type`, `ContentType`, and `Scenario` are required fields that specify the dataset name, type, content type, and scenarios respectively.
       * - `FileStorageConfig` and `MetadataStorageConfig` in `VersionConfig` can be configured as needed.
       * - If you need a real-time meta table configuration, provide the `RealtimeMetaTableConfig` information.
       * - Ensure that all required fields are correctly specified. Otherwise, the request failed.
       *
       * @param tmpReq CreateDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDatasetWithOptions(const Models::CreateDatasetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new dataset under a specified project. Available since v6.2.0.
       *
       * @description ## Operation description
       * - This API creates a new dataset in a specified project.
       * - `ProjectId` is a required parameter that specifies the ID of the project in which to create the dataset.
       * - `CreateCommand` is a complex object that contains the configuration information required to create the dataset.
       * - `Name`, `Type`, `ContentType`, and `Scenario` are required fields that specify the dataset name, type, content type, and scenarios respectively.
       * - `FileStorageConfig` and `MetadataStorageConfig` in `VersionConfig` can be configured as needed.
       * - If you need a real-time meta table configuration, provide the `RealtimeMetaTableConfig` information.
       * - Ensure that all required fields are correctly specified. Otherwise, the request failed.
       *
       * @param request CreateDatasetRequest
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDataset(const Models::CreateDatasetRequest &request);

      /**
       * @summary Creates a menu tree directory. This operation supports features such as compute nodes, data integration, and synchronization tasks.
       *
       * @param tmpReq CreateDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDirectoryResponse
       */
      Models::CreateDirectoryResponse createDirectoryWithOptions(const Models::CreateDirectoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a menu tree directory. This operation supports features such as compute nodes, data integration, and synchronization tasks.
       *
       * @param request CreateDirectoryRequest
       * @return CreateDirectoryResponse
       */
      Models::CreateDirectoryResponse createDirectory(const Models::CreateDirectoryRequest &request);

      /**
       * @summary General-purpose backfill API that supports both list-mode and bulk-mode backfill:
       * 1. Backfill instances will be generated and executed, affecting the data output of related tables.
       * 2. Task execution will incur computing costs and storage costs.
       *
       * @param tmpReq CreateNodeSupplementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNodeSupplementResponse
       */
      Models::CreateNodeSupplementResponse createNodeSupplementWithOptions(const Models::CreateNodeSupplementRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary General-purpose backfill API that supports both list-mode and bulk-mode backfill:
       * 1. Backfill instances will be generated and executed, affecting the data output of related tables.
       * 2. Task execution will incur computing costs and storage costs.
       *
       * @param request CreateNodeSupplementRequest
       * @return CreateNodeSupplementResponse
       */
      Models::CreateNodeSupplementResponse createNodeSupplement(const Models::CreateNodeSupplementRequest &request);

      /**
       * @summary Create an integration pipeline/unstructured workflow task.
       *
       * @param tmpReq CreatePipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePipelineResponse
       */
      Models::CreatePipelineResponse createPipelineWithOptions(const Models::CreatePipelineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an integration pipeline/unstructured workflow task.
       *
       * @param request CreatePipelineRequest
       * @return CreatePipelineResponse
       */
      Models::CreatePipelineResponse createPipeline(const Models::CreatePipelineRequest &request);

      /**
       * @summary Asynchronously create a pipeline/unstructured workflow.
       *
       * @param tmpReq CreatePipelineByAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePipelineByAsyncResponse
       */
      Models::CreatePipelineByAsyncResponse createPipelineByAsyncWithOptions(const Models::CreatePipelineByAsyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Asynchronously create a pipeline/unstructured workflow.
       *
       * @param request CreatePipelineByAsyncRequest
       * @return CreatePipelineByAsyncResponse
       */
      Models::CreatePipelineByAsyncResponse createPipelineByAsync(const Models::CreatePipelineByAsyncRequest &request);

      /**
       * @summary Creates a data integration task. Note: This operation is deprecated starting from Dataphin v5.3.1. Use CreatePipeline instead.
       *
       * @param tmpReq CreatePipelineNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePipelineNodeResponse
       */
      Models::CreatePipelineNodeResponse createPipelineNodeWithOptions(const Models::CreatePipelineNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data integration task. Note: This operation is deprecated starting from Dataphin v5.3.1. Use CreatePipeline instead.
       *
       * @param request CreatePipelineNodeRequest
       * @return CreatePipelineNodeResponse
       */
      Models::CreatePipelineNodeResponse createPipelineNode(const Models::CreatePipelineNodeRequest &request);

      /**
       * @summary Creates a resource file.
       *
       * @param tmpReq CreateResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceResponse
       */
      Models::CreateResourceResponse createResourceWithOptions(const Models::CreateResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource file.
       *
       * @param request CreateResourceRequest
       * @return CreateResourceResponse
       */
      Models::CreateResourceResponse createResource(const Models::CreateResourceRequest &request);

      /**
       * @summary Creates a row-level permission.
       *
       * @description You can query detailed information about published APIs based on the appKey.
       *
       * @param tmpReq CreateRowPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRowPermissionResponse
       */
      Models::CreateRowPermissionResponse createRowPermissionWithOptions(const Models::CreateRowPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a row-level permission.
       *
       * @description You can query detailed information about published APIs based on the appKey.
       *
       * @param request CreateRowPermissionRequest
       * @return CreateRowPermissionResponse
       */
      Models::CreateRowPermissionResponse createRowPermission(const Models::CreateRowPermissionRequest &request);

      /**
       * @summary Creates a data classification. Available since v5.4.2.
       *
       * @param tmpReq CreateSecurityClassifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityClassifyResponse
       */
      Models::CreateSecurityClassifyResponse createSecurityClassifyWithOptions(const Models::CreateSecurityClassifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data classification. Available since v5.4.2.
       *
       * @param request CreateSecurityClassifyRequest
       * @return CreateSecurityClassifyResponse
       */
      Models::CreateSecurityClassifyResponse createSecurityClassify(const Models::CreateSecurityClassifyRequest &request);

      /**
       * @summary Creates a data classification folder. Available since v5.4.2.
       *
       * @param tmpReq CreateSecurityClassifyCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityClassifyCatalogResponse
       */
      Models::CreateSecurityClassifyCatalogResponse createSecurityClassifyCatalogWithOptions(const Models::CreateSecurityClassifyCatalogRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data classification folder. Available since v5.4.2.
       *
       * @param request CreateSecurityClassifyCatalogRequest
       * @return CreateSecurityClassifyCatalogResponse
       */
      Models::CreateSecurityClassifyCatalogResponse createSecurityClassifyCatalog(const Models::CreateSecurityClassifyCatalogRequest &request);

      /**
       * @summary Creates a security identification result.
       * Release version: v5.4.2.
       *
       * @param tmpReq CreateSecurityIdentifyResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityIdentifyResultResponse
       */
      Models::CreateSecurityIdentifyResultResponse createSecurityIdentifyResultWithOptions(const Models::CreateSecurityIdentifyResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a security identification result.
       * Release version: v5.4.2.
       *
       * @param request CreateSecurityIdentifyResultRequest
       * @return CreateSecurityIdentifyResultResponse
       */
      Models::CreateSecurityIdentifyResultResponse createSecurityIdentifyResult(const Models::CreateSecurityIdentifyResultRequest &request);

      /**
       * @summary Creates a data classification level. Available since v5.4.2.
       *
       * @param tmpReq CreateSecurityLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityLevelResponse
       */
      Models::CreateSecurityLevelResponse createSecurityLevelWithOptions(const Models::CreateSecurityLevelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data classification level. Available since v5.4.2.
       *
       * @param request CreateSecurityLevelRequest
       * @return CreateSecurityLevelResponse
       */
      Models::CreateSecurityLevelResponse createSecurityLevel(const Models::CreateSecurityLevelRequest &request);

      /**
       * @summary Creates a standard.
       * Release version: v5.4.2.
       *
       * @param tmpReq CreateStandardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStandardResponse
       */
      Models::CreateStandardResponse createStandardWithOptions(const Models::CreateStandardRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a standard.
       * Release version: v5.4.2.
       *
       * @param request CreateStandardRequest
       * @return CreateStandardResponse
       */
      Models::CreateStandardResponse createStandard(const Models::CreateStandardRequest &request);

      /**
       * @summary Creates a data standard lookup table.
       * Release version: v5.4.2.
       *
       * @param tmpReq CreateStandardLookupTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStandardLookupTableResponse
       */
      Models::CreateStandardLookupTableResponse createStandardLookupTableWithOptions(const Models::CreateStandardLookupTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data standard lookup table.
       * Release version: v5.4.2.
       *
       * @param request CreateStandardLookupTableRequest
       * @return CreateStandardLookupTableResponse
       */
      Models::CreateStandardLookupTableResponse createStandardLookupTable(const Models::CreateStandardLookupTableRequest &request);

      /**
       * @summary Creates standard mapping relationships, including valid mappings and invalid mappings.
       * Release version: v5.4.2.
       *
       * @param tmpReq CreateStandardMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStandardMappingResponse
       */
      Models::CreateStandardMappingResponse createStandardMappingWithOptions(const Models::CreateStandardMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates standard mapping relationships, including valid mappings and invalid mappings.
       * Release version: v5.4.2.
       *
       * @param request CreateStandardMappingRequest
       * @return CreateStandardMappingResponse
       */
      Models::CreateStandardMappingResponse createStandardMapping(const Models::CreateStandardMappingRequest &request);

      /**
       * @summary Creates a standard association. Release version: v5.4.2.
       *
       * @param tmpReq CreateStandardRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStandardRelationsResponse
       */
      Models::CreateStandardRelationsResponse createStandardRelationsWithOptions(const Models::CreateStandardRelationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a standard association. Release version: v5.4.2.
       *
       * @param request CreateStandardRelationsRequest
       * @return CreateStandardRelationsResponse
       */
      Models::CreateStandardRelationsResponse createStandardRelations(const Models::CreateStandardRelationsRequest &request);

      /**
       * @summary Creates a standard set.
       * Available since: v5.4.2.
       *
       * @param tmpReq CreateStandardSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStandardSetResponse
       */
      Models::CreateStandardSetResponse createStandardSetWithOptions(const Models::CreateStandardSetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a standard set.
       * Available since: v5.4.2.
       *
       * @param request CreateStandardSetRequest
       * @return CreateStandardSetResponse
       */
      Models::CreateStandardSetResponse createStandardSet(const Models::CreateStandardSetRequest &request);

      /**
       * @summary Create a data standard template.
       * Release version: v5.4.2.
       *
       * @param tmpReq CreateStandardTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStandardTemplateResponse
       */
      Models::CreateStandardTemplateResponse createStandardTemplateWithOptions(const Models::CreateStandardTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a data standard template.
       * Release version: v5.4.2.
       *
       * @param request CreateStandardTemplateRequest
       * @return CreateStandardTemplateResponse
       */
      Models::CreateStandardTemplateResponse createStandardTemplate(const Models::CreateStandardTemplateRequest &request);

      /**
       * @summary Creates a data standard root word.
       * Release version: v5.4.2.
       *
       * @param tmpReq CreateStandardWordRootRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStandardWordRootResponse
       */
      Models::CreateStandardWordRootResponse createStandardWordRootWithOptions(const Models::CreateStandardWordRootRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data standard root word.
       * Release version: v5.4.2.
       *
       * @param request CreateStandardWordRootRequest
       * @return CreateStandardWordRootResponse
       */
      Models::CreateStandardWordRootResponse createStandardWordRoot(const Models::CreateStandardWordRootRequest &request);

      /**
       * @summary Creates a stream-batch integrated node.
       *
       * @param tmpReq CreateStreamBatchJobMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStreamBatchJobMappingResponse
       */
      Models::CreateStreamBatchJobMappingResponse createStreamBatchJobMappingWithOptions(const Models::CreateStreamBatchJobMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a stream-batch integrated node.
       *
       * @param request CreateStreamBatchJobMappingRequest
       * @return CreateStreamBatchJobMappingResponse
       */
      Models::CreateStreamBatchJobMappingResponse createStreamBatchJobMapping(const Models::CreateStreamBatchJobMappingRequest &request);

      /**
       * @summary Creates a user-defined function.
       *
       * @param tmpReq CreateUdfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUdfResponse
       */
      Models::CreateUdfResponse createUdfWithOptions(const Models::CreateUdfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user-defined function.
       *
       * @param request CreateUdfRequest
       * @return CreateUdfResponse
       */
      Models::CreateUdfResponse createUdf(const Models::CreateUdfRequest &request);

      /**
       * @summary Creates a user group.
       *
       * @param tmpReq CreateUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserGroupResponse
       */
      Models::CreateUserGroupResponse createUserGroupWithOptions(const Models::CreateUserGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user group.
       *
       * @param request CreateUserGroupRequest
       * @return CreateUserGroupResponse
       */
      Models::CreateUserGroupResponse createUserGroup(const Models::CreateUserGroupRequest &request);

      /**
       * @summary Deletes an ad hoc query file from the menu tree.
       *
       * @param request DeleteAdHocFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAdHocFileResponse
       */
      Models::DeleteAdHocFileResponse deleteAdHocFileWithOptions(const Models::DeleteAdHocFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an ad hoc query file from the menu tree.
       *
       * @param request DeleteAdHocFileRequest
       * @return DeleteAdHocFileResponse
       */
      Models::DeleteAdHocFileResponse deleteAdHocFile(const Models::DeleteAdHocFileRequest &request);

      /**
       * @summary Deletes a batch task. If the node has not been offlined, you must offline it before deleting it.
       *
       * @param tmpReq DeleteBatchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBatchTaskResponse
       */
      Models::DeleteBatchTaskResponse deleteBatchTaskWithOptions(const Models::DeleteBatchTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a batch task. If the node has not been offlined, you must offline it before deleting it.
       *
       * @param request DeleteBatchTaskRequest
       * @return DeleteBatchTaskResponse
       */
      Models::DeleteBatchTaskResponse deleteBatchTask(const Models::DeleteBatchTaskRequest &request);

      /**
       * @summary Deletes a business entity.
       *
       * @param request DeleteBizEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBizEntityResponse
       */
      Models::DeleteBizEntityResponse deleteBizEntityWithOptions(const Models::DeleteBizEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a business entity.
       *
       * @param request DeleteBizEntityRequest
       * @return DeleteBizEntityResponse
       */
      Models::DeleteBizEntityResponse deleteBizEntity(const Models::DeleteBizEntityRequest &request);

      /**
       * @summary Deletes a business metric.
       * Release version: v5.5.0.
       *
       * @param tmpReq DeleteBizMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBizMetricResponse
       */
      Models::DeleteBizMetricResponse deleteBizMetricWithOptions(const Models::DeleteBizMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a business metric.
       * Release version: v5.5.0.
       *
       * @param request DeleteBizMetricRequest
       * @return DeleteBizMetricResponse
       */
      Models::DeleteBizMetricResponse deleteBizMetric(const Models::DeleteBizMetricRequest &request);

      /**
       * @summary Deletes a data domain.
       *
       * @param request DeleteBizUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBizUnitResponse
       */
      Models::DeleteBizUnitResponse deleteBizUnitWithOptions(const Models::DeleteBizUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data domain.
       *
       * @param request DeleteBizUnitRequest
       * @return DeleteBizUnitResponse
       */
      Models::DeleteBizUnitResponse deleteBizUnit(const Models::DeleteBizUnitRequest &request);

      /**
       * @summary Deletes a compute source.
       *
       * @param request DeleteComputeSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComputeSourceResponse
       */
      Models::DeleteComputeSourceResponse deleteComputeSourceWithOptions(const Models::DeleteComputeSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a compute source.
       *
       * @param request DeleteComputeSourceRequest
       * @return DeleteComputeSourceResponse
       */
      Models::DeleteComputeSourceResponse deleteComputeSource(const Models::DeleteComputeSourceRequest &request);

      /**
       * @summary Deletes a subject domain.
       *
       * @param request DeleteDataDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataDomainResponse
       */
      Models::DeleteDataDomainResponse deleteDataDomainWithOptions(const Models::DeleteDataDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a subject domain.
       *
       * @param request DeleteDataDomainRequest
       * @return DeleteDataDomainResponse
       */
      Models::DeleteDataDomainResponse deleteDataDomain(const Models::DeleteDataDomainRequest &request);

      /**
       * @summary Deletes a data service application. Only superusers, system administrators, or application owners can perform this operation.
       * Online version: v6.0.0.
       *
       * @param request DeleteDataServiceAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataServiceAppResponse
       */
      Models::DeleteDataServiceAppResponse deleteDataServiceAppWithOptions(const Models::DeleteDataServiceAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data service application. Only superusers, system administrators, or application owners can perform this operation.
       * Online version: v6.0.0.
       *
       * @param request DeleteDataServiceAppRequest
       * @return DeleteDataServiceAppResponse
       */
      Models::DeleteDataServiceAppResponse deleteDataServiceApp(const Models::DeleteDataServiceAppRequest &request);

      /**
       * @summary Deletes a data service application group. Only superusers and system administrators can perform this operation.
       * Online version: v6.0.0.
       *
       * @param request DeleteDataServiceAppGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataServiceAppGroupResponse
       */
      Models::DeleteDataServiceAppGroupResponse deleteDataServiceAppGroupWithOptions(const Models::DeleteDataServiceAppGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data service application group. Only superusers and system administrators can perform this operation.
       * Online version: v6.0.0.
       *
       * @param request DeleteDataServiceAppGroupRequest
       * @return DeleteDataServiceAppGroupResponse
       */
      Models::DeleteDataServiceAppGroupResponse deleteDataServiceAppGroup(const Models::DeleteDataServiceAppGroupRequest &request);

      /**
       * @summary Deletes a data source.
       *
       * @param tmpReq DeleteDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSourceWithOptions(const Models::DeleteDataSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data source.
       *
       * @param request DeleteDataSourceRequest
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSource(const Models::DeleteDataSourceRequest &request);

      /**
       * @summary Deletes a dataset. Release version: v6.2.0.
       *
       * @param request DeleteDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDatasetWithOptions(const Models::DeleteDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dataset. Release version: v6.2.0.
       *
       * @param request DeleteDatasetRequest
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDataset(const Models::DeleteDatasetRequest &request);

      /**
       * @summary Deletes a file directory from the menu tree.
       *
       * @param request DeleteDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDirectoryResponse
       */
      Models::DeleteDirectoryResponse deleteDirectoryWithOptions(const Models::DeleteDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a file directory from the menu tree.
       *
       * @param request DeleteDirectoryRequest
       * @return DeleteDirectoryResponse
       */
      Models::DeleteDirectoryResponse deleteDirectory(const Models::DeleteDirectoryRequest &request);

      /**
       * @summary Deletes quality rule objects in batches.
       * Release version: v5.4.2.
       *
       * @param tmpReq DeleteQualityRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQualityRulesResponse
       */
      Models::DeleteQualityRulesResponse deleteQualityRulesWithOptions(const Models::DeleteQualityRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes quality rule objects in batches.
       * Release version: v5.4.2.
       *
       * @param request DeleteQualityRulesRequest
       * @return DeleteQualityRulesResponse
       */
      Models::DeleteQualityRulesResponse deleteQualityRules(const Models::DeleteQualityRulesRequest &request);

      /**
       * @summary Deletes quality scheduling objects in batches.
       * Release version: v5.4.2.
       *
       * @param tmpReq DeleteQualitySchedulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQualitySchedulesResponse
       */
      Models::DeleteQualitySchedulesResponse deleteQualitySchedulesWithOptions(const Models::DeleteQualitySchedulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes quality scheduling objects in batches.
       * Release version: v5.4.2.
       *
       * @param request DeleteQualitySchedulesRequest
       * @return DeleteQualitySchedulesResponse
       */
      Models::DeleteQualitySchedulesResponse deleteQualitySchedules(const Models::DeleteQualitySchedulesRequest &request);

      /**
       * @summary Deletes quality template objects in batches.
       * Online version: v5.4.2.
       *
       * @param tmpReq DeleteQualityTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQualityTemplatesResponse
       */
      Models::DeleteQualityTemplatesResponse deleteQualityTemplatesWithOptions(const Models::DeleteQualityTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes quality template objects in batches.
       * Online version: v5.4.2.
       *
       * @param request DeleteQualityTemplatesRequest
       * @return DeleteQualityTemplatesResponse
       */
      Models::DeleteQualityTemplatesResponse deleteQualityTemplates(const Models::DeleteQualityTemplatesRequest &request);

      /**
       * @summary Deletes monitored objects in batches.
       * Release version: v5.4.2.
       *
       * @param tmpReq DeleteQualityWatchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQualityWatchesResponse
       */
      Models::DeleteQualityWatchesResponse deleteQualityWatchesWithOptions(const Models::DeleteQualityWatchesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes monitored objects in batches.
       * Release version: v5.4.2.
       *
       * @param request DeleteQualityWatchesRequest
       * @return DeleteQualityWatchesResponse
       */
      Models::DeleteQualityWatchesResponse deleteQualityWatches(const Models::DeleteQualityWatchesRequest &request);

      /**
       * @summary Deletes registered lineage. Available since version v5.4.0.
       *
       * @param tmpReq DeleteRegisterLineageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRegisterLineageResponse
       */
      Models::DeleteRegisterLineageResponse deleteRegisterLineageWithOptions(const Models::DeleteRegisterLineageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes registered lineage. Available since version v5.4.0.
       *
       * @param request DeleteRegisterLineageRequest
       * @return DeleteRegisterLineageResponse
       */
      Models::DeleteRegisterLineageResponse deleteRegisterLineage(const Models::DeleteRegisterLineageRequest &request);

      /**
       * @summary Delete a resource file.
       *
       * @param request DeleteResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceResponse
       */
      Models::DeleteResourceResponse deleteResourceWithOptions(const Models::DeleteResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a resource file.
       *
       * @param request DeleteResourceRequest
       * @return DeleteResourceResponse
       */
      Models::DeleteResourceResponse deleteResource(const Models::DeleteResourceRequest &request);

      /**
       * @summary Deletes a row-level permission.
       *
       * @param tmpReq DeleteRowPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRowPermissionResponse
       */
      Models::DeleteRowPermissionResponse deleteRowPermissionWithOptions(const Models::DeleteRowPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a row-level permission.
       *
       * @param request DeleteRowPermissionRequest
       * @return DeleteRowPermissionResponse
       */
      Models::DeleteRowPermissionResponse deleteRowPermission(const Models::DeleteRowPermissionRequest &request);

      /**
       * @summary Deletes a data categorization. Available since v5.4.2.
       *
       * @param tmpReq DeleteSecurityClassifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityClassifyResponse
       */
      Models::DeleteSecurityClassifyResponse deleteSecurityClassifyWithOptions(const Models::DeleteSecurityClassifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data categorization. Available since v5.4.2.
       *
       * @param request DeleteSecurityClassifyRequest
       * @return DeleteSecurityClassifyResponse
       */
      Models::DeleteSecurityClassifyResponse deleteSecurityClassify(const Models::DeleteSecurityClassifyRequest &request);

      /**
       * @summary Deletes a data classification catalog. Release version: v5.4.2.
       *
       * @param tmpReq DeleteSecurityClassifyCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityClassifyCatalogResponse
       */
      Models::DeleteSecurityClassifyCatalogResponse deleteSecurityClassifyCatalogWithOptions(const Models::DeleteSecurityClassifyCatalogRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data classification catalog. Release version: v5.4.2.
       *
       * @param request DeleteSecurityClassifyCatalogRequest
       * @return DeleteSecurityClassifyCatalogResponse
       */
      Models::DeleteSecurityClassifyCatalogResponse deleteSecurityClassifyCatalog(const Models::DeleteSecurityClassifyCatalogRequest &request);

      /**
       * @summary Deletes security identification results in batches. Release version: v5.4.2.
       *
       * @param tmpReq DeleteSecurityIdentifyResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityIdentifyResultsResponse
       */
      Models::DeleteSecurityIdentifyResultsResponse deleteSecurityIdentifyResultsWithOptions(const Models::DeleteSecurityIdentifyResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes security identification results in batches. Release version: v5.4.2.
       *
       * @param request DeleteSecurityIdentifyResultsRequest
       * @return DeleteSecurityIdentifyResultsResponse
       */
      Models::DeleteSecurityIdentifyResultsResponse deleteSecurityIdentifyResults(const Models::DeleteSecurityIdentifyResultsRequest &request);

      /**
       * @summary Deletes a data classification level. Available since v5.4.2.
       *
       * @param tmpReq DeleteSecurityLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityLevelResponse
       */
      Models::DeleteSecurityLevelResponse deleteSecurityLevelWithOptions(const Models::DeleteSecurityLevelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data classification level. Available since v5.4.2.
       *
       * @param request DeleteSecurityLevelRequest
       * @return DeleteSecurityLevelResponse
       */
      Models::DeleteSecurityLevelResponse deleteSecurityLevel(const Models::DeleteSecurityLevelRequest &request);

      /**
       * @summary Deletes a standard.
       * Online version: v5.4.2.
       *
       * @param tmpReq DeleteStandardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStandardResponse
       */
      Models::DeleteStandardResponse deleteStandardWithOptions(const Models::DeleteStandardRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a standard.
       * Online version: v5.4.2.
       *
       * @param request DeleteStandardRequest
       * @return DeleteStandardResponse
       */
      Models::DeleteStandardResponse deleteStandard(const Models::DeleteStandardRequest &request);

      /**
       * @summary Deletes invalid mapping relationships.
       * Online version: v5.4.2.
       *
       * @param tmpReq DeleteStandardInValidMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStandardInValidMappingResponse
       */
      Models::DeleteStandardInValidMappingResponse deleteStandardInValidMappingWithOptions(const Models::DeleteStandardInValidMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes invalid mapping relationships.
       * Online version: v5.4.2.
       *
       * @param request DeleteStandardInValidMappingRequest
       * @return DeleteStandardInValidMappingResponse
       */
      Models::DeleteStandardInValidMappingResponse deleteStandardInValidMapping(const Models::DeleteStandardInValidMappingRequest &request);

      /**
       * @summary Deletes a data standard lookup table. Release version: v5.4.2.
       *
       * @param request DeleteStandardLookupTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStandardLookupTableResponse
       */
      Models::DeleteStandardLookupTableResponse deleteStandardLookupTableWithOptions(const Models::DeleteStandardLookupTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data standard lookup table. Release version: v5.4.2.
       *
       * @param request DeleteStandardLookupTableRequest
       * @return DeleteStandardLookupTableResponse
       */
      Models::DeleteStandardLookupTableResponse deleteStandardLookupTable(const Models::DeleteStandardLookupTableRequest &request);

      /**
       * @summary Deletes standard associations in batches.
       * Release version: v5.4.2.
       *
       * @param tmpReq DeleteStandardRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStandardRelationsResponse
       */
      Models::DeleteStandardRelationsResponse deleteStandardRelationsWithOptions(const Models::DeleteStandardRelationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes standard associations in batches.
       * Release version: v5.4.2.
       *
       * @param request DeleteStandardRelationsRequest
       * @return DeleteStandardRelationsResponse
       */
      Models::DeleteStandardRelationsResponse deleteStandardRelations(const Models::DeleteStandardRelationsRequest &request);

      /**
       * @summary Deletes a standard set.
       * Online version: v5.4.2.
       *
       * @param request DeleteStandardSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStandardSetResponse
       */
      Models::DeleteStandardSetResponse deleteStandardSetWithOptions(const Models::DeleteStandardSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a standard set.
       * Online version: v5.4.2.
       *
       * @param request DeleteStandardSetRequest
       * @return DeleteStandardSetResponse
       */
      Models::DeleteStandardSetResponse deleteStandardSet(const Models::DeleteStandardSetRequest &request);

      /**
       * @summary Deletes valid mapping relationships.
       * Release version: v5.4.2.
       *
       * @param tmpReq DeleteStandardValidMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStandardValidMappingResponse
       */
      Models::DeleteStandardValidMappingResponse deleteStandardValidMappingWithOptions(const Models::DeleteStandardValidMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes valid mapping relationships.
       * Release version: v5.4.2.
       *
       * @param request DeleteStandardValidMappingRequest
       * @return DeleteStandardValidMappingResponse
       */
      Models::DeleteStandardValidMappingResponse deleteStandardValidMapping(const Models::DeleteStandardValidMappingRequest &request);

      /**
       * @summary Deletes a data standard root word.
       * Online version: v5.4.2.
       *
       * @param request DeleteStandardWordRootRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStandardWordRootResponse
       */
      Models::DeleteStandardWordRootResponse deleteStandardWordRootWithOptions(const Models::DeleteStandardWordRootRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data standard root word.
       * Online version: v5.4.2.
       *
       * @param request DeleteStandardWordRootRequest
       * @return DeleteStandardWordRootResponse
       */
      Models::DeleteStandardWordRootResponse deleteStandardWordRoot(const Models::DeleteStandardWordRootRequest &request);

      /**
       * @summary Deletes a user-defined function.
       *
       * @param request DeleteUdfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUdfResponse
       */
      Models::DeleteUdfResponse deleteUdfWithOptions(const Models::DeleteUdfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user-defined function.
       *
       * @param request DeleteUdfRequest
       * @return DeleteUdfResponse
       */
      Models::DeleteUdfResponse deleteUdf(const Models::DeleteUdfRequest &request);

      /**
       * @summary Deletes a user group.
       *
       * @param request DeleteUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserGroupResponse
       */
      Models::DeleteUserGroupResponse deleteUserGroupWithOptions(const Models::DeleteUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user group.
       *
       * @param request DeleteUserGroupRequest
       * @return DeleteUserGroupResponse
       */
      Models::DeleteUserGroupResponse deleteUserGroup(const Models::DeleteUserGroupRequest &request);

      /**
       * @summary Executes an ad hoc query task.
       *
       * @param tmpReq ExecuteAdHocTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAdHocTaskResponse
       */
      Models::ExecuteAdHocTaskResponse executeAdHocTaskWithOptions(const Models::ExecuteAdHocTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes an ad hoc query task.
       *
       * @param request ExecuteAdHocTaskRequest
       * @return ExecuteAdHocTaskResponse
       */
      Models::ExecuteAdHocTaskResponse executeAdHocTask(const Models::ExecuteAdHocTaskRequest &request);

      /**
       * @summary Runs a manually scheduled node.
       *
       * @param tmpReq ExecuteManualNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteManualNodeResponse
       */
      Models::ExecuteManualNodeResponse executeManualNodeWithOptions(const Models::ExecuteManualNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a manually scheduled node.
       *
       * @param request ExecuteManualNodeRequest
       * @return ExecuteManualNodeResponse
       */
      Models::ExecuteManualNodeResponse executeManualNode(const Models::ExecuteManualNodeRequest &request);

      /**
       * @summary Runs a trigger-based node.
       *
       * @param request ExecuteTriggerNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTriggerNodeResponse
       */
      Models::ExecuteTriggerNodeResponse executeTriggerNodeWithOptions(const Models::ExecuteTriggerNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a trigger-based node.
       *
       * @param request ExecuteTriggerNodeRequest
       * @return ExecuteTriggerNodeResponse
       */
      Models::ExecuteTriggerNodeResponse executeTriggerNode(const Models::ExecuteTriggerNodeRequest &request);

      /**
       * @summary Reruns downstream nodes to fix data link issues. Supports forced rerun of downstream nodes. Impact: incurs compute costs and affects data output.
       *
       * @param tmpReq FixDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FixDataResponse
       */
      Models::FixDataResponse fixDataWithOptions(const Models::FixDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reruns downstream nodes to fix data link issues. Supports forced rerun of downstream nodes. Impact: incurs compute costs and affects data output.
       *
       * @param request FixDataRequest
       * @return FixDataResponse
       */
      Models::FixDataResponse fixData(const Models::FixDataRequest &request);

      /**
       * @summary Retrieves all authorized accounts under a specific row-level permission by row-level permission ID.
       *
       * @param tmpReq GetAccountByRowPermissionIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountByRowPermissionIdResponse
       */
      Models::GetAccountByRowPermissionIdResponse getAccountByRowPermissionIdWithOptions(const Models::GetAccountByRowPermissionIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all authorized accounts under a specific row-level permission by row-level permission ID.
       *
       * @param request GetAccountByRowPermissionIdRequest
       * @return GetAccountByRowPermissionIdResponse
       */
      Models::GetAccountByRowPermissionIdResponse getAccountByRowPermissionId(const Models::GetAccountByRowPermissionIdRequest &request);

      /**
       * @summary Queries a custom query file in the directory tree.
       *
       * @param request GetAdHocFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAdHocFileResponse
       */
      Models::GetAdHocFileResponse getAdHocFileWithOptions(const Models::GetAdHocFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a custom query file in the directory tree.
       *
       * @param request GetAdHocFileRequest
       * @return GetAdHocFileResponse
       */
      Models::GetAdHocFileResponse getAdHocFile(const Models::GetAdHocFileRequest &request);

      /**
       * @summary Retrieves the runtime logs of an ad hoc query task.
       *
       * @param request GetAdHocTaskLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAdHocTaskLogResponse
       */
      Models::GetAdHocTaskLogResponse getAdHocTaskLogWithOptions(const Models::GetAdHocTaskLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the runtime logs of an ad hoc query task.
       *
       * @param request GetAdHocTaskLogRequest
       * @return GetAdHocTaskLogResponse
       */
      Models::GetAdHocTaskLogResponse getAdHocTaskLog(const Models::GetAdHocTaskLogRequest &request);

      /**
       * @summary Retrieves the task execution result of an ad hoc query.
       *
       * @param request GetAdHocTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAdHocTaskResultResponse
       */
      Models::GetAdHocTaskResultResponse getAdHocTaskResultWithOptions(const Models::GetAdHocTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the task execution result of an ad hoc query.
       *
       * @param request GetAdHocTaskResultRequest
       * @return GetAdHocTaskResultResponse
       */
      Models::GetAdHocTaskResultResponse getAdHocTaskResult(const Models::GetAdHocTaskResultRequest &request);

      /**
       * @summary Retrieves the details of an alert event.
       *
       * @param request GetAlertEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlertEventResponse
       */
      Models::GetAlertEventResponse getAlertEventWithOptions(const Models::GetAlertEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an alert event.
       *
       * @param request GetAlertEventRequest
       * @return GetAlertEventResponse
       */
      Models::GetAlertEventResponse getAlertEvent(const Models::GetAlertEventRequest &request);

      /**
       * @summary Queries mapping relationships by asset object GUID.
       * Available since: v5.4.2.
       *
       * @param tmpReq GetAssetMappingRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAssetMappingRelationsResponse
       */
      Models::GetAssetMappingRelationsResponse getAssetMappingRelationsWithOptions(const Models::GetAssetMappingRelationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries mapping relationships by asset object GUID.
       * Available since: v5.4.2.
       *
       * @param request GetAssetMappingRelationsRequest
       * @return GetAssetMappingRelationsResponse
       */
      Models::GetAssetMappingRelationsResponse getAssetMappingRelations(const Models::GetAssetMappingRelationsRequest &request);

      /**
       * @summary Retrieves the details of an offline compute node.
       *
       * @param request GetBatchTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBatchTaskInfoResponse
       */
      Models::GetBatchTaskInfoResponse getBatchTaskInfoWithOptions(const Models::GetBatchTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an offline compute node.
       *
       * @param request GetBatchTaskInfoRequest
       * @return GetBatchTaskInfoResponse
       */
      Models::GetBatchTaskInfoResponse getBatchTaskInfo(const Models::GetBatchTaskInfoRequest &request);

      /**
       * @summary Retrieves the details of a specified version of a batch task.
       *
       * @param request GetBatchTaskInfoByVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBatchTaskInfoByVersionResponse
       */
      Models::GetBatchTaskInfoByVersionResponse getBatchTaskInfoByVersionWithOptions(const Models::GetBatchTaskInfoByVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified version of a batch task.
       *
       * @param request GetBatchTaskInfoByVersionRequest
       * @return GetBatchTaskInfoByVersionResponse
       */
      Models::GetBatchTaskInfoByVersionResponse getBatchTaskInfoByVersion(const Models::GetBatchTaskInfoByVersionRequest &request);

      /**
       * @summary Obtains the custom lineage of an offline task.
       *
       * @param request GetBatchTaskUdfLineagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBatchTaskUdfLineagesResponse
       */
      Models::GetBatchTaskUdfLineagesResponse getBatchTaskUdfLineagesWithOptions(const Models::GetBatchTaskUdfLineagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the custom lineage of an offline task.
       *
       * @param request GetBatchTaskUdfLineagesRequest
       * @return GetBatchTaskUdfLineagesResponse
       */
      Models::GetBatchTaskUdfLineagesResponse getBatchTaskUdfLineages(const Models::GetBatchTaskUdfLineagesRequest &request);

      /**
       * @summary Retrieves the version list of a batch task.
       *
       * @param request GetBatchTaskVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBatchTaskVersionsResponse
       */
      Models::GetBatchTaskVersionsResponse getBatchTaskVersionsWithOptions(const Models::GetBatchTaskVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the version list of a batch task.
       *
       * @param request GetBatchTaskVersionsRequest
       * @return GetBatchTaskVersionsResponse
       */
      Models::GetBatchTaskVersionsResponse getBatchTaskVersions(const Models::GetBatchTaskVersionsRequest &request);

      /**
       * @summary 获取指定离线模板ID版本列表。
       *
       * @param request GetBatchTemplateVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBatchTemplateVersionsResponse
       */
      Models::GetBatchTemplateVersionsResponse getBatchTemplateVersionsWithOptions(const Models::GetBatchTemplateVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定离线模板ID版本列表。
       *
       * @param request GetBatchTemplateVersionsRequest
       * @return GetBatchTemplateVersionsResponse
       */
      Models::GetBatchTemplateVersionsResponse getBatchTemplateVersions(const Models::GetBatchTemplateVersionsRequest &request);

      /**
       * @summary Query mapping relationships by belonging asset GUID.
       * Release version: v5.4.2.
       *
       * @param tmpReq GetBelongAssetMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBelongAssetMappingResponse
       */
      Models::GetBelongAssetMappingResponse getBelongAssetMappingWithOptions(const Models::GetBelongAssetMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query mapping relationships by belonging asset GUID.
       * Release version: v5.4.2.
       *
       * @param request GetBelongAssetMappingRequest
       * @return GetBelongAssetMappingResponse
       */
      Models::GetBelongAssetMappingResponse getBelongAssetMapping(const Models::GetBelongAssetMappingRequest &request);

      /**
       * @summary Retrieves the details of a business entity.
       *
       * @param request GetBizEntityInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBizEntityInfoResponse
       */
      Models::GetBizEntityInfoResponse getBizEntityInfoWithOptions(const Models::GetBizEntityInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a business entity.
       *
       * @param request GetBizEntityInfoRequest
       * @return GetBizEntityInfoResponse
       */
      Models::GetBizEntityInfoResponse getBizEntityInfo(const Models::GetBizEntityInfoRequest &request);

      /**
       * @summary Queries the details of a business entity of a specified version.
       *
       * @param request GetBizEntityInfoByVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBizEntityInfoByVersionResponse
       */
      Models::GetBizEntityInfoByVersionResponse getBizEntityInfoByVersionWithOptions(const Models::GetBizEntityInfoByVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a business entity of a specified version.
       *
       * @param request GetBizEntityInfoByVersionRequest
       * @return GetBizEntityInfoByVersionResponse
       */
      Models::GetBizEntityInfoByVersionResponse getBizEntityInfoByVersion(const Models::GetBizEntityInfoByVersionRequest &request);

      /**
       * @summary Query business metric details by name.
       * Release version: v5.5.0.
       *
       * @param tmpReq GetBizMetricByNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBizMetricByNameResponse
       */
      Models::GetBizMetricByNameResponse getBizMetricByNameWithOptions(const Models::GetBizMetricByNameRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query business metric details by name.
       * Release version: v5.5.0.
       *
       * @param request GetBizMetricByNameRequest
       * @return GetBizMetricByNameResponse
       */
      Models::GetBizMetricByNameResponse getBizMetricByName(const Models::GetBizMetricByNameRequest &request);

      /**
       * @summary Retrieves the details of a data domain.
       *
       * @param request GetBizUnitInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBizUnitInfoResponse
       */
      Models::GetBizUnitInfoResponse getBizUnitInfoWithOptions(const Models::GetBizUnitInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a data domain.
       *
       * @param request GetBizUnitInfoRequest
       * @return GetBizUnitInfoResponse
       */
      Models::GetBizUnitInfoResponse getBizUnitInfo(const Models::GetBizUnitInfoRequest &request);

      /**
       * @summary Queries asset details. Release version: v6.1.0.
       *
       * @param tmpReq GetCatalogAssetDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCatalogAssetDetailsResponse
       */
      Models::GetCatalogAssetDetailsResponse getCatalogAssetDetailsWithOptions(const Models::GetCatalogAssetDetailsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries asset details. Release version: v6.1.0.
       *
       * @param request GetCatalogAssetDetailsRequest
       * @return GetCatalogAssetDetailsResponse
       */
      Models::GetCatalogAssetDetailsResponse getCatalogAssetDetails(const Models::GetCatalogAssetDetailsRequest &request);

      /**
       * @summary Queries the list of connectivity check tasks for a specified data source ID. This operation includes null value validation and tenant permission verification to prevent cross-tenant access.
       * Release version: v5.5.0.
       *
       * @description Queries the details of connectivity tasks that have been tested for a specified data source ID.
       *
       * @param request GetCheckConnectivityJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCheckConnectivityJobsResponse
       */
      Models::GetCheckConnectivityJobsResponse getCheckConnectivityJobsWithOptions(const Models::GetCheckConnectivityJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of connectivity check tasks for a specified data source ID. This operation includes null value validation and tenant permission verification to prevent cross-tenant access.
       * Release version: v5.5.0.
       *
       * @description Queries the details of connectivity tasks that have been tested for a specified data source ID.
       *
       * @param request GetCheckConnectivityJobsRequest
       * @return GetCheckConnectivityJobsResponse
       */
      Models::GetCheckConnectivityJobsResponse getCheckConnectivityJobs(const Models::GetCheckConnectivityJobsRequest &request);

      /**
       * @summary Retrieves cluster information based on the environment.
       *
       * @param request GetClusterQueueInfoByEnvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterQueueInfoByEnvResponse
       */
      Models::GetClusterQueueInfoByEnvResponse getClusterQueueInfoByEnvWithOptions(const Models::GetClusterQueueInfoByEnvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves cluster information based on the environment.
       *
       * @param request GetClusterQueueInfoByEnvRequest
       * @return GetClusterQueueInfoByEnvResponse
       */
      Models::GetClusterQueueInfoByEnvResponse getClusterQueueInfoByEnv(const Models::GetClusterQueueInfoByEnvRequest &request);

      /**
       * @summary Retrieves the details of a compute source by compute source ID.
       *
       * @param request GetComputeSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComputeSourceResponse
       */
      Models::GetComputeSourceResponse getComputeSourceWithOptions(const Models::GetComputeSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a compute source by compute source ID.
       *
       * @param request GetComputeSourceRequest
       * @return GetComputeSourceResponse
       */
      Models::GetComputeSourceResponse getComputeSource(const Models::GetComputeSourceRequest &request);

      /**
       * @summary Retrieves the details of a data domain.
       *
       * @param request GetDataDomainInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataDomainInfoResponse
       */
      Models::GetDataDomainInfoResponse getDataDomainInfoWithOptions(const Models::GetDataDomainInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a data domain.
       *
       * @param request GetDataDomainInfoRequest
       * @return GetDataDomainInfoResponse
       */
      Models::GetDataDomainInfoResponse getDataDomainInfo(const Models::GetDataDomainInfoRequest &request);

      /**
       * @summary Service Monitoring: Retrieves the aggregate statistics of API calls.
       *
       * @param request GetDataServiceApiCallSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceApiCallSummaryResponse
       */
      Models::GetDataServiceApiCallSummaryResponse getDataServiceApiCallSummaryWithOptions(const Models::GetDataServiceApiCallSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Service Monitoring: Retrieves the aggregate statistics of API calls.
       *
       * @param request GetDataServiceApiCallSummaryRequest
       * @return GetDataServiceApiCallSummaryResponse
       */
      Models::GetDataServiceApiCallSummaryResponse getDataServiceApiCallSummary(const Models::GetDataServiceApiCallSummaryRequest &request);

      /**
       * @summary Service Monitoring: Analyzes API access trends.
       *
       * @param request GetDataServiceApiCallTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceApiCallTrendResponse
       */
      Models::GetDataServiceApiCallTrendResponse getDataServiceApiCallTrendWithOptions(const Models::GetDataServiceApiCallTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Service Monitoring: Analyzes API access trends.
       *
       * @param request GetDataServiceApiCallTrendRequest
       * @return GetDataServiceApiCallTrendResponse
       */
      Models::GetDataServiceApiCallTrendResponse getDataServiceApiCallTrend(const Models::GetDataServiceApiCallTrendRequest &request);

      /**
       * @summary Retrieves API documentation.
       *
       * @param request GetDataServiceApiDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceApiDocumentResponse
       */
      Models::GetDataServiceApiDocumentResponse getDataServiceApiDocumentWithOptions(const Models::GetDataServiceApiDocumentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves API documentation.
       *
       * @param request GetDataServiceApiDocumentRequest
       * @return GetDataServiceApiDocumentResponse
       */
      Models::GetDataServiceApiDocumentResponse getDataServiceApiDocument(const Models::GetDataServiceApiDocumentRequest &request);

      /**
       * @summary Retrieves the summary of API exception impacts.
       *
       * @param request GetDataServiceApiErrorImpactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceApiErrorImpactResponse
       */
      Models::GetDataServiceApiErrorImpactResponse getDataServiceApiErrorImpactWithOptions(const Models::GetDataServiceApiErrorImpactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the summary of API exception impacts.
       *
       * @param request GetDataServiceApiErrorImpactRequest
       * @return GetDataServiceApiErrorImpactResponse
       */
      Models::GetDataServiceApiErrorImpactResponse getDataServiceApiErrorImpact(const Models::GetDataServiceApiErrorImpactRequest &request);

      /**
       * @summary Queries the list of API groups in Data Service.
       *
       * @param request GetDataServiceApiGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceApiGroupsResponse
       */
      Models::GetDataServiceApiGroupsResponse getDataServiceApiGroupsWithOptions(const Models::GetDataServiceApiGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of API groups in Data Service.
       *
       * @param request GetDataServiceApiGroupsRequest
       * @return GetDataServiceApiGroupsResponse
       */
      Models::GetDataServiceApiGroupsResponse getDataServiceApiGroups(const Models::GetDataServiceApiGroupsRequest &request);

      /**
       * @summary Queries the details of a data service application, including the project, application name, authentication information, and IP whitelist. Only application members can view the details.
       * Release version: v6.0.0.
       *
       * @param request GetDataServiceAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceAppResponse
       */
      Models::GetDataServiceAppResponse getDataServiceAppWithOptions(const Models::GetDataServiceAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a data service application, including the project, application name, authentication information, and IP whitelist. Only application members can view the details.
       * Release version: v6.0.0.
       *
       * @param request GetDataServiceAppRequest
       * @return GetDataServiceAppResponse
       */
      Models::GetDataServiceAppResponse getDataServiceApp(const Models::GetDataServiceAppRequest &request);

      /**
       * @summary Retrieves the list of users who have permissions on an application.
       *
       * @param request GetDataServiceAppAuthorizedUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceAppAuthorizedUsersResponse
       */
      Models::GetDataServiceAppAuthorizedUsersResponse getDataServiceAppAuthorizedUsersWithOptions(const Models::GetDataServiceAppAuthorizedUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of users who have permissions on an application.
       *
       * @param request GetDataServiceAppAuthorizedUsersRequest
       * @return GetDataServiceAppAuthorizedUsersResponse
       */
      Models::GetDataServiceAppAuthorizedUsersResponse getDataServiceAppAuthorizedUsers(const Models::GetDataServiceAppAuthorizedUsersRequest &request);

      /**
       * @summary Queries the list of application groups for a data service project.
       *
       * @param request GetDataServiceAppGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceAppGroupsResponse
       */
      Models::GetDataServiceAppGroupsResponse getDataServiceAppGroupsWithOptions(const Models::GetDataServiceAppGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of application groups for a data service project.
       *
       * @param request GetDataServiceAppGroupsRequest
       * @return GetDataServiceAppGroupsResponse
       */
      Models::GetDataServiceAppGroupsResponse getDataServiceAppGroups(const Models::GetDataServiceAppGroupsRequest &request);

      /**
       * @summary Queries the member list of a data service application, including regular members and owners. Only application owners can call this operation.
       * Online version: v6.0.0.
       *
       * @param request GetDataServiceAppMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceAppMembersResponse
       */
      Models::GetDataServiceAppMembersResponse getDataServiceAppMembersWithOptions(const Models::GetDataServiceAppMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the member list of a data service application, including regular members and owners. Only application owners can call this operation.
       * Online version: v6.0.0.
       *
       * @param request GetDataServiceAppMembersRequest
       * @return GetDataServiceAppMembersResponse
       */
      Models::GetDataServiceAppMembersResponse getDataServiceAppMembers(const Models::GetDataServiceAppMembersRequest &request);

      /**
       * @summary Queries the list of applications in a group.
       *
       * @param request GetDataServiceAppsByGroupIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceAppsByGroupIdResponse
       */
      Models::GetDataServiceAppsByGroupIdResponse getDataServiceAppsByGroupIdWithOptions(const Models::GetDataServiceAppsByGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of applications in a group.
       *
       * @param request GetDataServiceAppsByGroupIdRequest
       * @return GetDataServiceAppsByGroupIdResponse
       */
      Models::GetDataServiceAppsByGroupIdResponse getDataServiceAppsByGroupId(const Models::GetDataServiceAppsByGroupIdRequest &request);

      /**
       * @summary Queries the list of applications that the account has permissions to access based on the app group ID.
       *
       * @param request GetDataServiceAuthorizedAppsByGroupIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceAuthorizedAppsByGroupIdResponse
       */
      Models::GetDataServiceAuthorizedAppsByGroupIdResponse getDataServiceAuthorizedAppsByGroupIdWithOptions(const Models::GetDataServiceAuthorizedAppsByGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of applications that the account has permissions to access based on the app group ID.
       *
       * @param request GetDataServiceAuthorizedAppsByGroupIdRequest
       * @return GetDataServiceAuthorizedAppsByGroupIdResponse
       */
      Models::GetDataServiceAuthorizedAppsByGroupIdResponse getDataServiceAuthorizedAppsByGroupId(const Models::GetDataServiceAuthorizedAppsByGroupIdRequest &request);

      /**
       * @summary Queries the list of projects that the current user has permissions to access.
       *
       * @param request GetDataServiceAuthorizedProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceAuthorizedProjectsResponse
       */
      Models::GetDataServiceAuthorizedProjectsResponse getDataServiceAuthorizedProjectsWithOptions(const Models::GetDataServiceAuthorizedProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of projects that the current user has permissions to access.
       *
       * @param request GetDataServiceAuthorizedProjectsRequest
       * @return GetDataServiceAuthorizedProjectsResponse
       */
      Models::GetDataServiceAuthorizedProjectsResponse getDataServiceAuthorizedProjects(const Models::GetDataServiceAuthorizedProjectsRequest &request);

      /**
       * @summary Retrieves the list of projects for which the current user is the owner.
       *
       * @param request GetDataServiceMyProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceMyProjectsResponse
       */
      Models::GetDataServiceMyProjectsResponse getDataServiceMyProjectsWithOptions(const Models::GetDataServiceMyProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of projects for which the current user is the owner.
       *
       * @param request GetDataServiceMyProjectsRequest
       * @return GetDataServiceMyProjectsResponse
       */
      Models::GetDataServiceMyProjectsResponse getDataServiceMyProjects(const Models::GetDataServiceMyProjectsRequest &request);

      /**
       * @summary Retrieves the list of users who can be added as project members.
       *
       * @param request GetDataServiceProjectAddableUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceProjectAddableUsersResponse
       */
      Models::GetDataServiceProjectAddableUsersResponse getDataServiceProjectAddableUsersWithOptions(const Models::GetDataServiceProjectAddableUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of users who can be added as project members.
       *
       * @param request GetDataServiceProjectAddableUsersRequest
       * @return GetDataServiceProjectAddableUsersResponse
       */
      Models::GetDataServiceProjectAddableUsersResponse getDataServiceProjectAddableUsers(const Models::GetDataServiceProjectAddableUsersRequest &request);

      /**
       * @summary Queries the integration tasks and database SQL tasks affected by data source changes.
       *
       * @param request GetDataSourceDependenciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataSourceDependenciesResponse
       */
      Models::GetDataSourceDependenciesResponse getDataSourceDependenciesWithOptions(const Models::GetDataSourceDependenciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the integration tasks and database SQL tasks affected by data source changes.
       *
       * @param request GetDataSourceDependenciesRequest
       * @return GetDataSourceDependenciesResponse
       */
      Models::GetDataSourceDependenciesResponse getDataSourceDependencies(const Models::GetDataSourceDependenciesRequest &request);

      /**
       * @summary Retrieves a dataset. Release version: v6.2.0.
       *
       * @description Queries the details of a tested connectivity task based on the data source ID.
       *
       * @param request GetDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasetResponse
       */
      Models::GetDatasetResponse getDatasetWithOptions(const Models::GetDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a dataset. Release version: v6.2.0.
       *
       * @description Queries the details of a tested connectivity task based on the data source ID.
       *
       * @param request GetDatasetRequest
       * @return GetDatasetResponse
       */
      Models::GetDatasetResponse getDataset(const Models::GetDatasetRequest &request);

      /**
       * @summary Query upstream dependencies of development objects.
       *
       * @param request GetDevObjectDependencyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDevObjectDependencyResponse
       */
      Models::GetDevObjectDependencyResponse getDevObjectDependencyWithOptions(const Models::GetDevObjectDependencyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query upstream dependencies of development objects.
       *
       * @param request GetDevObjectDependencyRequest
       * @return GetDevObjectDependencyResponse
       */
      Models::GetDevObjectDependencyResponse getDevObjectDependency(const Models::GetDevObjectDependencyRequest &request);

      /**
       * @summary Retrieves the folder directory tree.
       *
       * @param request GetDirectoryTreeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDirectoryTreeResponse
       */
      Models::GetDirectoryTreeResponse getDirectoryTreeWithOptions(const Models::GetDirectoryTreeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the folder directory tree.
       *
       * @param request GetDirectoryTreeRequest
       * @return GetDirectoryTreeResponse
       */
      Models::GetDirectoryTreeResponse getDirectoryTree(const Models::GetDirectoryTreeRequest &request);

      /**
       * @summary Obtains temporary read/write authorization for file storage.
       *
       * @param request GetFileStorageCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileStorageCredentialResponse
       */
      Models::GetFileStorageCredentialResponse getFileStorageCredentialWithOptions(const Models::GetFileStorageCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains temporary read/write authorization for file storage.
       *
       * @param request GetFileStorageCredentialRequest
       * @return GetFileStorageCredentialResponse
       */
      Models::GetFileStorageCredentialResponse getFileStorageCredential(const Models::GetFileStorageCredentialRequest &request);

      /**
       * @summary Queries the downstream instances of a specified instance.
       *
       * @param tmpReq GetInstanceDownStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceDownStreamResponse
       */
      Models::GetInstanceDownStreamResponse getInstanceDownStreamWithOptions(const Models::GetInstanceDownStreamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the downstream instances of a specified instance.
       *
       * @param request GetInstanceDownStreamRequest
       * @return GetInstanceDownStreamResponse
       */
      Models::GetInstanceDownStreamResponse getInstanceDownStream(const Models::GetInstanceDownStreamRequest &request);

      /**
       * @summary Queries the dag of an instance. Logical tables and code nodes are supported.
       *
       * @param tmpReq GetInstanceUpDownStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceUpDownStreamResponse
       */
      Models::GetInstanceUpDownStreamResponse getInstanceUpDownStreamWithOptions(const Models::GetInstanceUpDownStreamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the dag of an instance. Logical tables and code nodes are supported.
       *
       * @param request GetInstanceUpDownStreamRequest
       * @return GetInstanceUpDownStreamResponse
       */
      Models::GetInstanceUpDownStreamResponse getInstanceUpDownStream(const Models::GetInstanceUpDownStreamRequest &request);

      /**
       * @summary Retrieves the details of the latest pending submit record.
       *
       * @param tmpReq GetLatestSubmitDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLatestSubmitDetailResponse
       */
      Models::GetLatestSubmitDetailResponse getLatestSubmitDetailWithOptions(const Models::GetLatestSubmitDetailRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of the latest pending submit record.
       *
       * @param request GetLatestSubmitDetailRequest
       * @return GetLatestSubmitDetailResponse
       */
      Models::GetLatestSubmitDetailResponse getLatestSubmitDetail(const Models::GetLatestSubmitDetailRequest &request);

      /**
       * @summary Retrieves the list of roles for the current user.
       *
       * @param request GetMyRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMyRolesResponse
       */
      Models::GetMyRolesResponse getMyRolesWithOptions(const Models::GetMyRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of roles for the current user.
       *
       * @param request GetMyRolesRequest
       * @return GetMyRolesResponse
       */
      Models::GetMyRolesResponse getMyRoles(const Models::GetMyRolesRequest &request);

      /**
       * @summary Retrieves the tenants to which the current user belongs.
       *
       * @param tmpReq GetMyTenantsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMyTenantsResponse
       */
      Models::GetMyTenantsResponse getMyTenantsWithOptions(const Models::GetMyTenantsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the tenants to which the current user belongs.
       *
       * @param request GetMyTenantsRequest
       * @return GetMyTenantsResponse
       */
      Models::GetMyTenantsResponse getMyTenants(const Models::GetMyTenantsRequest &request);

      /**
       * @summary Queries the dag of a node. This is a general-purpose operation.
       *
       * @param tmpReq GetNodeUpDownStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeUpDownStreamResponse
       */
      Models::GetNodeUpDownStreamResponse getNodeUpDownStreamWithOptions(const Models::GetNodeUpDownStreamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the dag of a node. This is a general-purpose operation.
       *
       * @param request GetNodeUpDownStreamRequest
       * @return GetNodeUpDownStreamResponse
       */
      Models::GetNodeUpDownStreamResponse getNodeUpDownStream(const Models::GetNodeUpDownStreamRequest &request);

      /**
       * @summary 根据Id查询运行记录
       *
       * @param tmpReq GetOperationRecordByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOperationRecordByIdResponse
       */
      Models::GetOperationRecordByIdResponse getOperationRecordByIdWithOptions(const Models::GetOperationRecordByIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据Id查询运行记录
       *
       * @param request GetOperationRecordByIdRequest
       * @return GetOperationRecordByIdResponse
       */
      Models::GetOperationRecordByIdResponse getOperationRecordById(const Models::GetOperationRecordByIdRequest &request);

      /**
       * @summary Queries the details of an execution record. Released in version v6.2.0.
       *
       * @param tmpReq GetOperationRecordDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOperationRecordDetailResponse
       */
      Models::GetOperationRecordDetailResponse getOperationRecordDetailWithOptions(const Models::GetOperationRecordDetailRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an execution record. Released in version v6.2.0.
       *
       * @param request GetOperationRecordDetailRequest
       * @return GetOperationRecordDetailResponse
       */
      Models::GetOperationRecordDetailResponse getOperationRecordDetail(const Models::GetOperationRecordDetailRequest &request);

      /**
       * @summary Queries the execution code of an operation log. Online version: v6.2.0.
       *
       * @param tmpReq GetOperationRecordRunCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOperationRecordRunCodeResponse
       */
      Models::GetOperationRecordRunCodeResponse getOperationRecordRunCodeWithOptions(const Models::GetOperationRecordRunCodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution code of an operation log. Online version: v6.2.0.
       *
       * @param request GetOperationRecordRunCodeRequest
       * @return GetOperationRecordRunCodeResponse
       */
      Models::GetOperationRecordRunCodeResponse getOperationRecordRunCode(const Models::GetOperationRecordRunCodeRequest &request);

      /**
       * @summary Queries the submit status of a data backfill request.
       *
       * @param request GetOperationSubmitStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOperationSubmitStatusResponse
       */
      Models::GetOperationSubmitStatusResponse getOperationSubmitStatusWithOptions(const Models::GetOperationSubmitStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the submit status of a data backfill request.
       *
       * @param request GetOperationSubmitStatusRequest
       * @return GetOperationSubmitStatusResponse
       */
      Models::GetOperationSubmitStatusResponse getOperationSubmitStatus(const Models::GetOperationSubmitStatusRequest &request);

      /**
       * @summary Gets instance information.
       *
       * @param request GetPhysicalInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhysicalInstanceResponse
       */
      Models::GetPhysicalInstanceResponse getPhysicalInstanceWithOptions(const Models::GetPhysicalInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets instance information.
       *
       * @param request GetPhysicalInstanceRequest
       * @return GetPhysicalInstanceResponse
       */
      Models::GetPhysicalInstanceResponse getPhysicalInstance(const Models::GetPhysicalInstanceRequest &request);

      /**
       * @summary Retrieves the execution logs of an instance. If the instance has been rerun multiple times, multiple log entries are returned.
       *
       * @param request GetPhysicalInstanceLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhysicalInstanceLogResponse
       */
      Models::GetPhysicalInstanceLogResponse getPhysicalInstanceLogWithOptions(const Models::GetPhysicalInstanceLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the execution logs of an instance. If the instance has been rerun multiple times, multiple log entries are returned.
       *
       * @param request GetPhysicalInstanceLogRequest
       * @return GetPhysicalInstanceLogResponse
       */
      Models::GetPhysicalInstanceLogResponse getPhysicalInstanceLog(const Models::GetPhysicalInstanceLogRequest &request);

      /**
       * @summary Queries a physical schedule resource.
       *
       * @param request GetPhysicalNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhysicalNodeResponse
       */
      Models::GetPhysicalNodeResponse getPhysicalNodeWithOptions(const Models::GetPhysicalNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a physical schedule resource.
       *
       * @param request GetPhysicalNodeRequest
       * @return GetPhysicalNodeResponse
       */
      Models::GetPhysicalNodeResponse getPhysicalNode(const Models::GetPhysicalNodeRequest &request);

      /**
       * @summary Queries a physical node by output name. Only offline code nodes and integration task nodes are supported.
       *
       * @param request GetPhysicalNodeByOutputNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhysicalNodeByOutputNameResponse
       */
      Models::GetPhysicalNodeByOutputNameResponse getPhysicalNodeByOutputNameWithOptions(const Models::GetPhysicalNodeByOutputNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a physical node by output name. Only offline code nodes and integration task nodes are supported.
       *
       * @param request GetPhysicalNodeByOutputNameRequest
       * @return GetPhysicalNodeByOutputNameResponse
       */
      Models::GetPhysicalNodeByOutputNameResponse getPhysicalNodeByOutputName(const Models::GetPhysicalNodeByOutputNameRequest &request);

      /**
       * @summary Queries the code content of a schedule resource node.
       *
       * @param request GetPhysicalNodeContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhysicalNodeContentResponse
       */
      Models::GetPhysicalNodeContentResponse getPhysicalNodeContentWithOptions(const Models::GetPhysicalNodeContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the code content of a schedule resource node.
       *
       * @param request GetPhysicalNodeContentRequest
       * @return GetPhysicalNodeContentResponse
       */
      Models::GetPhysicalNodeContentResponse getPhysicalNodeContent(const Models::GetPhysicalNodeContentRequest &request);

      /**
       * @summary Queries the operation logs of a node.
       *
       * @param request GetPhysicalNodeOperationLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhysicalNodeOperationLogResponse
       */
      Models::GetPhysicalNodeOperationLogResponse getPhysicalNodeOperationLogWithOptions(const Models::GetPhysicalNodeOperationLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operation logs of a node.
       *
       * @param request GetPhysicalNodeOperationLogRequest
       * @return GetPhysicalNodeOperationLogResponse
       */
      Models::GetPhysicalNodeOperationLogResponse getPhysicalNodeOperationLog(const Models::GetPhysicalNodeOperationLogRequest &request);

      /**
       * @summary Queries the execution result of an asynchronous pipeline task.
       *
       * @param tmpReq GetPipelineAsyncResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineAsyncResultResponse
       */
      Models::GetPipelineAsyncResultResponse getPipelineAsyncResultWithOptions(const Models::GetPipelineAsyncResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution result of an asynchronous pipeline task.
       *
       * @param request GetPipelineAsyncResultRequest
       * @return GetPipelineAsyncResultResponse
       */
      Models::GetPipelineAsyncResultResponse getPipelineAsyncResult(const Models::GetPipelineAsyncResultRequest &request);

      /**
       * @summary Queries a pipeline task by pipeline task ID.
       *
       * @param tmpReq GetPipelineByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineByIdResponse
       */
      Models::GetPipelineByIdResponse getPipelineByIdWithOptions(const Models::GetPipelineByIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a pipeline task by pipeline task ID.
       *
       * @param request GetPipelineByIdRequest
       * @return GetPipelineByIdResponse
       */
      Models::GetPipelineByIdResponse getPipelineById(const Models::GetPipelineByIdRequest &request);

      /**
       * @summary Get project details by project ID.
       *
       * @param request GetProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProjectWithOptions(const Models::GetProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get project details by project ID.
       *
       * @param request GetProjectRequest
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProject(const Models::GetProjectRequest &request);

      /**
       * @summary Retrieves project details by project name.
       *
       * @param request GetProjectByNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectByNameResponse
       */
      Models::GetProjectByNameResponse getProjectByNameWithOptions(const Models::GetProjectByNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves project details by project name.
       *
       * @param request GetProjectByNameRequest
       * @return GetProjectByNameResponse
       */
      Models::GetProjectByNameResponse getProjectByName(const Models::GetProjectByNameRequest &request);

      /**
       * @summary Retrieves the production account of a project. Only a super administrator (SuperAdmin) can call this API operation.
       *
       * @param request GetProjectProduceUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectProduceUserResponse
       */
      Models::GetProjectProduceUserResponse getProjectProduceUserWithOptions(const Models::GetProjectProduceUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the production account of a project. Only a super administrator (SuperAdmin) can call this API operation.
       *
       * @param request GetProjectProduceUserRequest
       * @return GetProjectProduceUserResponse
       */
      Models::GetProjectProduceUserResponse getProjectProduceUser(const Models::GetProjectProduceUserRequest &request);

      /**
       * @summary Retrieves the whitelist of a project.
       *
       * @param request GetProjectWhiteListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectWhiteListsResponse
       */
      Models::GetProjectWhiteListsResponse getProjectWhiteListsWithOptions(const Models::GetProjectWhiteListsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the whitelist of a project.
       *
       * @param request GetProjectWhiteListsRequest
       * @return GetProjectWhiteListsResponse
       */
      Models::GetProjectWhiteListsResponse getProjectWhiteLists(const Models::GetProjectWhiteListsRequest &request);

      /**
       * @summary Retrieves alert settings by monitored object ID. Release version: v5.4.2.
       *
       * @param request GetQualityAlertOfAllRuleScopeByWatchIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityAlertOfAllRuleScopeByWatchIdResponse
       */
      Models::GetQualityAlertOfAllRuleScopeByWatchIdResponse getQualityAlertOfAllRuleScopeByWatchIdWithOptions(const Models::GetQualityAlertOfAllRuleScopeByWatchIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves alert settings by monitored object ID. Release version: v5.4.2.
       *
       * @param request GetQualityAlertOfAllRuleScopeByWatchIdRequest
       * @return GetQualityAlertOfAllRuleScopeByWatchIdResponse
       */
      Models::GetQualityAlertOfAllRuleScopeByWatchIdResponse getQualityAlertOfAllRuleScopeByWatchId(const Models::GetQualityAlertOfAllRuleScopeByWatchIdRequest &request);

      /**
       * @summary Retrieves a quality rule object.
       * Release version: v5.4.2.
       *
       * @param request GetQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityRuleResponse
       */
      Models::GetQualityRuleResponse getQualityRuleWithOptions(const Models::GetQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a quality rule object.
       * Release version: v5.4.2.
       *
       * @param request GetQualityRuleRequest
       * @return GetQualityRuleResponse
       */
      Models::GetQualityRuleResponse getQualityRule(const Models::GetQualityRuleRequest &request);

      /**
       * @summary Retrieves the details of a quality node task object. Online version: v5.4.2.
       *
       * @param request GetQualityRuleTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityRuleTaskResponse
       */
      Models::GetQualityRuleTaskResponse getQualityRuleTaskWithOptions(const Models::GetQualityRuleTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a quality node task object. Online version: v5.4.2.
       *
       * @param request GetQualityRuleTaskRequest
       * @return GetQualityRuleTaskResponse
       */
      Models::GetQualityRuleTaskResponse getQualityRuleTask(const Models::GetQualityRuleTaskRequest &request);

      /**
       * @summary Retrieves the log content of a quality node task object.
       * Online version: v5.4.2.
       *
       * @param request GetQualityRuleTaskLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityRuleTaskLogResponse
       */
      Models::GetQualityRuleTaskLogResponse getQualityRuleTaskLogWithOptions(const Models::GetQualityRuleTaskLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the log content of a quality node task object.
       * Online version: v5.4.2.
       *
       * @param request GetQualityRuleTaskLogRequest
       * @return GetQualityRuleTaskLogResponse
       */
      Models::GetQualityRuleTaskLogResponse getQualityRuleTaskLog(const Models::GetQualityRuleTaskLogRequest &request);

      /**
       * @summary Retrieves a quality schedule object.
       * Release version: v5.4.2.
       *
       * @param request GetQualityScheduleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityScheduleResponse
       */
      Models::GetQualityScheduleResponse getQualityScheduleWithOptions(const Models::GetQualityScheduleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a quality schedule object.
       * Release version: v5.4.2.
       *
       * @param request GetQualityScheduleRequest
       * @return GetQualityScheduleResponse
       */
      Models::GetQualityScheduleResponse getQualitySchedule(const Models::GetQualityScheduleRequest &request);

      /**
       * @summary Retrieves a list of schedule settings by monitored object ID.
       * Release version: v5.4.2.
       *
       * @param request GetQualitySchedulesByWatchIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualitySchedulesByWatchIdResponse
       */
      Models::GetQualitySchedulesByWatchIdResponse getQualitySchedulesByWatchIdWithOptions(const Models::GetQualitySchedulesByWatchIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of schedule settings by monitored object ID.
       * Release version: v5.4.2.
       *
       * @param request GetQualitySchedulesByWatchIdRequest
       * @return GetQualitySchedulesByWatchIdResponse
       */
      Models::GetQualitySchedulesByWatchIdResponse getQualitySchedulesByWatchId(const Models::GetQualitySchedulesByWatchIdRequest &request);

      /**
       * @summary Retrieves a quality template object.
       * Release version: v5.4.2.
       *
       * @param request GetQualityTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityTemplateResponse
       */
      Models::GetQualityTemplateResponse getQualityTemplateWithOptions(const Models::GetQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a quality template object.
       * Release version: v5.4.2.
       *
       * @param request GetQualityTemplateRequest
       * @return GetQualityTemplateResponse
       */
      Models::GetQualityTemplateResponse getQualityTemplate(const Models::GetQualityTemplateRequest &request);

      /**
       * @summary Retrieves a quality monitored object.
       * Release version: v5.4.2.
       *
       * @param request GetQualityWatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityWatchResponse
       */
      Models::GetQualityWatchResponse getQualityWatchWithOptions(const Models::GetQualityWatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a quality monitored object.
       * Release version: v5.4.2.
       *
       * @param request GetQualityWatchRequest
       * @return GetQualityWatchResponse
       */
      Models::GetQualityWatchResponse getQualityWatch(const Models::GetQualityWatchRequest &request);

      /**
       * @summary Retrieves a quality watchtask record by the original ID of the monitored object, such as the ID of a datasource, table, or metric.
       * Release version: v5.4.2.
       *
       * @param request GetQualityWatchByObjectIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityWatchByObjectIdResponse
       */
      Models::GetQualityWatchByObjectIdResponse getQualityWatchByObjectIdWithOptions(const Models::GetQualityWatchByObjectIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a quality watchtask record by the original ID of the monitored object, such as the ID of a datasource, table, or metric.
       * Release version: v5.4.2.
       *
       * @param request GetQualityWatchByObjectIdRequest
       * @return GetQualityWatchByObjectIdResponse
       */
      Models::GetQualityWatchByObjectIdResponse getQualityWatchByObjectId(const Models::GetQualityWatchByObjectIdRequest &request);

      /**
       * @summary Retrieves a monitoring node task object.
       * Online version: v5.4.2.
       *
       * @param request GetQualityWatchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityWatchTaskResponse
       */
      Models::GetQualityWatchTaskResponse getQualityWatchTaskWithOptions(const Models::GetQualityWatchTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a monitoring node task object.
       * Online version: v5.4.2.
       *
       * @param request GetQualityWatchTaskRequest
       * @return GetQualityWatchTaskResponse
       */
      Models::GetQualityWatchTaskResponse getQualityWatchTask(const Models::GetQualityWatchTaskRequest &request);

      /**
       * @summary Retrieves the log content of a monitoring task object.
       * Online version: v5.4.2.
       *
       * @param request GetQualityWatchTaskLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityWatchTaskLogResponse
       */
      Models::GetQualityWatchTaskLogResponse getQualityWatchTaskLogWithOptions(const Models::GetQualityWatchTaskLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the log content of a monitoring task object.
       * Online version: v5.4.2.
       *
       * @param request GetQualityWatchTaskLogRequest
       * @return GetQualityWatchTaskLogResponse
       */
      Models::GetQualityWatchTaskLogResponse getQualityWatchTaskLog(const Models::GetQualityWatchTaskLogRequest &request);

      /**
       * @summary Retrieves the cluster version based on the cluster ID.
       *
       * @param request GetQueueEngineVersionByEnvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQueueEngineVersionByEnvResponse
       */
      Models::GetQueueEngineVersionByEnvResponse getQueueEngineVersionByEnvWithOptions(const Models::GetQueueEngineVersionByEnvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the cluster version based on the cluster ID.
       *
       * @param request GetQueueEngineVersionByEnvRequest
       * @return GetQueueEngineVersionByEnvResponse
       */
      Models::GetQueueEngineVersionByEnvResponse getQueueEngineVersionByEnv(const Models::GetQueueEngineVersionByEnvRequest &request);

      /**
       * @summary Retrieves the details of a resource file.
       *
       * @param request GetResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceResponse
       */
      Models::GetResourceResponse getResourceWithOptions(const Models::GetResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a resource file.
       *
       * @param request GetResourceRequest
       * @return GetResourceResponse
       */
      Models::GetResourceResponse getResource(const Models::GetResourceRequest &request);

      /**
       * @summary Gets the details of a specified version of a resource file.
       *
       * @param request GetResourceByVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceByVersionResponse
       */
      Models::GetResourceByVersionResponse getResourceByVersionWithOptions(const Models::GetResourceByVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of a specified version of a resource file.
       *
       * @param request GetResourceByVersionRequest
       * @return GetResourceByVersionResponse
       */
      Models::GetResourceByVersionResponse getResourceByVersion(const Models::GetResourceByVersionRequest &request);

      /**
       * @summary Release version: v5.4.2.
       *
       * @param tmpReq GetRowPermissionByTableGuidsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRowPermissionByTableGuidsResponse
       */
      Models::GetRowPermissionByTableGuidsResponse getRowPermissionByTableGuidsWithOptions(const Models::GetRowPermissionByTableGuidsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Release version: v5.4.2.
       *
       * @param request GetRowPermissionByTableGuidsRequest
       * @return GetRowPermissionByTableGuidsResponse
       */
      Models::GetRowPermissionByTableGuidsResponse getRowPermissionByTableGuids(const Models::GetRowPermissionByTableGuidsRequest &request);

      /**
       * @summary Retrieves the details of a data classification. Release version: v5.4.2.
       *
       * @param request GetSecurityClassifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecurityClassifyResponse
       */
      Models::GetSecurityClassifyResponse getSecurityClassifyWithOptions(const Models::GetSecurityClassifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a data classification. Release version: v5.4.2.
       *
       * @param request GetSecurityClassifyRequest
       * @return GetSecurityClassifyResponse
       */
      Models::GetSecurityClassifyResponse getSecurityClassify(const Models::GetSecurityClassifyRequest &request);

      /**
       * @summary Retrieves the details of an identification result.
       * Release version: v5.4.2.
       *
       * @param request GetSecurityIdentifyResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecurityIdentifyResultResponse
       */
      Models::GetSecurityIdentifyResultResponse getSecurityIdentifyResultWithOptions(const Models::GetSecurityIdentifyResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an identification result.
       * Release version: v5.4.2.
       *
       * @param request GetSecurityIdentifyResultRequest
       * @return GetSecurityIdentifyResultResponse
       */
      Models::GetSecurityIdentifyResultResponse getSecurityIdentifyResult(const Models::GetSecurityIdentifyResultRequest &request);

      /**
       * @summary Retrieves the details of a data classification level. Available since v5.4.2.
       *
       * @param request GetSecurityLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecurityLevelResponse
       */
      Models::GetSecurityLevelResponse getSecurityLevelWithOptions(const Models::GetSecurityLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a data classification level. Available since v5.4.2.
       *
       * @param request GetSecurityLevelRequest
       * @return GetSecurityLevelResponse
       */
      Models::GetSecurityLevelResponse getSecurityLevel(const Models::GetSecurityLevelRequest &request);

      /**
       * @summary Retrieves a key value by key name. Online version: v5.4.2.
       *
       * @param request GetSecuritySecretKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecuritySecretKeyResponse
       */
      Models::GetSecuritySecretKeyResponse getSecuritySecretKeyWithOptions(const Models::GetSecuritySecretKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a key value by key name. Online version: v5.4.2.
       *
       * @param request GetSecuritySecretKeyRequest
       * @return GetSecuritySecretKeyResponse
       */
      Models::GetSecuritySecretKeyResponse getSecuritySecretKey(const Models::GetSecuritySecretKeyRequest &request);

      /**
       * @summary Retrieves the Spark client information of the cluster associated with a compute source.
       *
       * @param request GetSparkLocalClientInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSparkLocalClientInfoResponse
       */
      Models::GetSparkLocalClientInfoResponse getSparkLocalClientInfoWithOptions(const Models::GetSparkLocalClientInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the Spark client information of the cluster associated with a compute source.
       *
       * @param request GetSparkLocalClientInfoRequest
       * @return GetSparkLocalClientInfoResponse
       */
      Models::GetSparkLocalClientInfoResponse getSparkLocalClientInfo(const Models::GetSparkLocalClientInfoRequest &request);

      /**
       * @summary Retrieves the details of a standard.
       * Release version: v5.4.2.
       *
       * @param tmpReq GetStandardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStandardResponse
       */
      Models::GetStandardResponse getStandardWithOptions(const Models::GetStandardRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a standard.
       * Release version: v5.4.2.
       *
       * @param request GetStandardRequest
       * @return GetStandardResponse
       */
      Models::GetStandardResponse getStandard(const Models::GetStandardRequest &request);

      /**
       * @summary Retrieves the details of a data standard lookup table.
       * Online version: v5.4.2.
       *
       * @param request GetStandardLookupTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStandardLookupTableResponse
       */
      Models::GetStandardLookupTableResponse getStandardLookupTableWithOptions(const Models::GetStandardLookupTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a data standard lookup table.
       * Online version: v5.4.2.
       *
       * @param request GetStandardLookupTableRequest
       * @return GetStandardLookupTableResponse
       */
      Models::GetStandardLookupTableResponse getStandardLookupTable(const Models::GetStandardLookupTableRequest &request);

      /**
       * @summary Retrieves the details of a standard set.
       * Release version: v5.4.2.
       *
       * @param request GetStandardSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStandardSetResponse
       */
      Models::GetStandardSetResponse getStandardSetWithOptions(const Models::GetStandardSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a standard set.
       * Release version: v5.4.2.
       *
       * @param request GetStandardSetRequest
       * @return GetStandardSetResponse
       */
      Models::GetStandardSetResponse getStandardSet(const Models::GetStandardSetRequest &request);

      /**
       * @summary Queries the number of standards grouped by standard type under a specified folder.
       * Online version: v5.4.2.
       *
       * @param tmpReq GetStandardStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStandardStatisticsResponse
       */
      Models::GetStandardStatisticsResponse getStandardStatisticsWithOptions(const Models::GetStandardStatisticsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of standards grouped by standard type under a specified folder.
       * Online version: v5.4.2.
       *
       * @param request GetStandardStatisticsRequest
       * @return GetStandardStatisticsResponse
       */
      Models::GetStandardStatisticsResponse getStandardStatistics(const Models::GetStandardStatisticsRequest &request);

      /**
       * @summary Retrieves the details of a data standard template.
       * Online version: v5.4.2.
       *
       * @param tmpReq GetStandardTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStandardTemplateResponse
       */
      Models::GetStandardTemplateResponse getStandardTemplateWithOptions(const Models::GetStandardTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a data standard template.
       * Online version: v5.4.2.
       *
       * @param request GetStandardTemplateRequest
       * @return GetStandardTemplateResponse
       */
      Models::GetStandardTemplateResponse getStandardTemplate(const Models::GetStandardTemplateRequest &request);

      /**
       * @summary Retrieves the details of a data standard word root.
       * Online version: v5.4.2.
       *
       * @param request GetStandardWordRootRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStandardWordRootResponse
       */
      Models::GetStandardWordRootResponse getStandardWordRootWithOptions(const Models::GetStandardWordRootRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a data standard word root.
       * Online version: v5.4.2.
       *
       * @param request GetStandardWordRootRequest
       * @return GetStandardWordRootResponse
       */
      Models::GetStandardWordRootResponse getStandardWordRoot(const Models::GetStandardWordRootRequest &request);

      /**
       * @summary Retrieves the list of real-time development nodes.
       *
       * @param request GetStreamJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStreamJobsResponse
       */
      Models::GetStreamJobsResponse getStreamJobsWithOptions(const Models::GetStreamJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of real-time development nodes.
       *
       * @param request GetStreamJobsRequest
       * @return GetStreamJobsResponse
       */
      Models::GetStreamJobsResponse getStreamJobs(const Models::GetStreamJobsRequest &request);

      /**
       * @summary Retrieves dagrun information for all business dates of a data backfill instance workflow.
       *
       * @param request GetSupplementDagrunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSupplementDagrunResponse
       */
      Models::GetSupplementDagrunResponse getSupplementDagrunWithOptions(const Models::GetSupplementDagrunRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves dagrun information for all business dates of a data backfill instance workflow.
       *
       * @param request GetSupplementDagrunRequest
       * @return GetSupplementDagrunResponse
       */
      Models::GetSupplementDagrunResponse getSupplementDagrun(const Models::GetSupplementDagrunRequest &request);

      /**
       * @summary Lists the instances of all nodes for a specific business date in a data backfill workflow.
       *
       * @param request GetSupplementDagrunInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSupplementDagrunInstanceResponse
       */
      Models::GetSupplementDagrunInstanceResponse getSupplementDagrunInstanceWithOptions(const Models::GetSupplementDagrunInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the instances of all nodes for a specific business date in a data backfill workflow.
       *
       * @param request GetSupplementDagrunInstanceRequest
       * @return GetSupplementDagrunInstanceResponse
       */
      Models::GetSupplementDagrunInstanceResponse getSupplementDagrunInstance(const Models::GetSupplementDagrunInstanceRequest &request);

      /**
       * @summary Queries table column lineage information.
       *
       * @param tmpReq GetTableColumnLineageByTaskIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableColumnLineageByTaskIdResponse
       */
      Models::GetTableColumnLineageByTaskIdResponse getTableColumnLineageByTaskIdWithOptions(const Models::GetTableColumnLineageByTaskIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries table column lineage information.
       *
       * @param request GetTableColumnLineageByTaskIdRequest
       * @return GetTableColumnLineageByTaskIdResponse
       */
      Models::GetTableColumnLineageByTaskIdResponse getTableColumnLineageByTaskId(const Models::GetTableColumnLineageByTaskIdRequest &request);

      /**
       * @summary Queries the column-level data lineage of an asset table.
       * Online version: v5.4.2.
       *
       * @param tmpReq GetTableColumnLineagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableColumnLineagesResponse
       */
      Models::GetTableColumnLineagesResponse getTableColumnLineagesWithOptions(const Models::GetTableColumnLineagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the column-level data lineage of an asset table.
       * Online version: v5.4.2.
       *
       * @param request GetTableColumnLineagesRequest
       * @return GetTableColumnLineagesResponse
       */
      Models::GetTableColumnLineagesResponse getTableColumnLineages(const Models::GetTableColumnLineagesRequest &request);

      /**
       * @summary Queries columns of a Dataphin table in the asset inventory. Supported table types: dimension logical table, fact logical table, aggregate logical table, tag logical table, logical table view, physical table, physical view, and materialized view.
       * Release version: v5.4.2.
       *
       * @param request GetTableColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableColumnsResponse
       */
      Models::GetTableColumnsResponse getTableColumnsWithOptions(const Models::GetTableColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries columns of a Dataphin table in the asset inventory. Supported table types: dimension logical table, fact logical table, aggregate logical table, tag logical table, logical table view, physical table, physical view, and materialized view.
       * Release version: v5.4.2.
       *
       * @param request GetTableColumnsRequest
       * @return GetTableColumnsResponse
       */
      Models::GetTableColumnsResponse getTableColumns(const Models::GetTableColumnsRequest &request);

      /**
       * @summary Queries table lineage information.
       *
       * @param tmpReq GetTableLineageByTaskIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableLineageByTaskIdResponse
       */
      Models::GetTableLineageByTaskIdResponse getTableLineageByTaskIdWithOptions(const Models::GetTableLineageByTaskIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries table lineage information.
       *
       * @param request GetTableLineageByTaskIdRequest
       * @return GetTableLineageByTaskIdResponse
       */
      Models::GetTableLineageByTaskIdResponse getTableLineageByTaskId(const Models::GetTableLineageByTaskIdRequest &request);

      /**
       * @summary Queries lineage information of an asset table.
       * Release version: v5.4.2.
       *
       * @param tmpReq GetTableLineagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableLineagesResponse
       */
      Models::GetTableLineagesResponse getTableLineagesWithOptions(const Models::GetTableLineagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries lineage information of an asset table.
       * Release version: v5.4.2.
       *
       * @param request GetTableLineagesRequest
       * @return GetTableLineagesResponse
       */
      Models::GetTableLineagesResponse getTableLineages(const Models::GetTableLineagesRequest &request);

      /**
       * @summary Queries the progress of a transfer task by transfer task ID.
       *
       * @param request GetTransferInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTransferInfoResponse
       */
      Models::GetTransferInfoResponse getTransferInfoWithOptions(const Models::GetTransferInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress of a transfer task by transfer task ID.
       *
       * @param request GetTransferInfoRequest
       * @return GetTransferInfoResponse
       */
      Models::GetTransferInfoResponse getTransferInfo(const Models::GetTransferInfoRequest &request);

      /**
       * @summary Retrieves the details of a user-defined function.
       *
       * @param request GetUdfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUdfResponse
       */
      Models::GetUdfResponse getUdfWithOptions(const Models::GetUdfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a user-defined function.
       *
       * @param request GetUdfRequest
       * @return GetUdfResponse
       */
      Models::GetUdfResponse getUdf(const Models::GetUdfRequest &request);

      /**
       * @summary Queries the details of a specific version of a user-defined function.
       *
       * @param request GetUdfByVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUdfByVersionResponse
       */
      Models::GetUdfByVersionResponse getUdfByVersionWithOptions(const Models::GetUdfByVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific version of a user-defined function.
       *
       * @param request GetUdfByVersionRequest
       * @return GetUdfByVersionResponse
       */
      Models::GetUdfByVersionResponse getUdfByVersion(const Models::GetUdfByVersionRequest &request);

      /**
       * @summary Retrieves user details by original user ID.
       *
       * @param request GetUserBySourceIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserBySourceIdResponse
       */
      Models::GetUserBySourceIdResponse getUserBySourceIdWithOptions(const Models::GetUserBySourceIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves user details by original user ID.
       *
       * @param request GetUserBySourceIdRequest
       * @return GetUserBySourceIdResponse
       */
      Models::GetUserBySourceIdResponse getUserBySourceId(const Models::GetUserBySourceIdRequest &request);

      /**
       * @summary Retrieves the details of a user group.
       *
       * @param request GetUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserGroupResponse
       */
      Models::GetUserGroupResponse getUserGroupWithOptions(const Models::GetUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a user group.
       *
       * @param request GetUserGroupRequest
       * @return GetUserGroupResponse
       */
      Models::GetUserGroupResponse getUserGroup(const Models::GetUserGroupRequest &request);

      /**
       * @summary Retrieves user information in batches by user ID.
       *
       * @param tmpReq GetUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUsersResponse
       */
      Models::GetUsersResponse getUsersWithOptions(const Models::GetUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves user information in batches by user ID.
       *
       * @param request GetUsersRequest
       * @return GetUsersResponse
       */
      Models::GetUsersResponse getUsers(const Models::GetUsersRequest &request);

      /**
       * @summary Grants API authorization.
       *
       * @param tmpReq GrantDataServiceApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantDataServiceApiResponse
       */
      Models::GrantDataServiceApiResponse grantDataServiceApiWithOptions(const Models::GrantDataServiceApiRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants API authorization.
       *
       * @param request GrantDataServiceApiRequest
       * @return GrantDataServiceApiResponse
       */
      Models::GrantDataServiceApiResponse grantDataServiceApi(const Models::GrantDataServiceApiRequest &request);

      /**
       * @summary Grants permissions on resources to users by resource point.
       *
       * @param tmpReq GrantResourcePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantResourcePermissionResponse
       */
      Models::GrantResourcePermissionResponse grantResourcePermissionWithOptions(const Models::GrantResourcePermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants permissions on resources to users by resource point.
       *
       * @param request GrantResourcePermissionRequest
       * @return GrantResourcePermissionResponse
       */
      Models::GrantResourcePermissionResponse grantResourcePermission(const Models::GrantResourcePermissionRequest &request);

      /**
       * @summary Retrieves the global roles that can be assigned to tenant members. Only built-in global roles are supported. Custom global roles are not supported.
       *
       * @param request ListAddableRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAddableRolesResponse
       */
      Models::ListAddableRolesResponse listAddableRolesWithOptions(const Models::ListAddableRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the global roles that can be assigned to tenant members. Only built-in global roles are supported. Custom global roles are not supported.
       *
       * @param request ListAddableRolesRequest
       * @return ListAddableRolesResponse
       */
      Models::ListAddableRolesResponse listAddableRoles(const Models::ListAddableRolesRequest &request);

      /**
       * @summary Queries users that can be added to a tenant. Only the super administrator (SuperAdmin) and system administrator can call this operation. The users must already exist in the Dataphin instance member list but have not yet been added to the tenant member list.
       *
       * @param tmpReq ListAddableUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAddableUsersResponse
       */
      Models::ListAddableUsersResponse listAddableUsersWithOptions(const Models::ListAddableUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries users that can be added to a tenant. Only the super administrator (SuperAdmin) and system administrator can call this operation. The users must already exist in the Dataphin instance member list but have not yet been added to the tenant member list.
       *
       * @param request ListAddableUsersRequest
       * @return ListAddableUsersResponse
       */
      Models::ListAddableUsersResponse listAddableUsers(const Models::ListAddableUsersRequest &request);

      /**
       * @summary Performs a conditional query to list multiple alerting events.
       *
       * @param tmpReq ListAlertEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertEventsResponse
       */
      Models::ListAlertEventsResponse listAlertEventsWithOptions(const Models::ListAlertEventsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a conditional query to list multiple alerting events.
       *
       * @param request ListAlertEventsRequest
       * @return ListAlertEventsResponse
       */
      Models::ListAlertEventsResponse listAlertEvents(const Models::ListAlertEventsRequest &request);

      /**
       * @summary Performs a conditional query to list multiple push records.
       *
       * @param tmpReq ListAlertNotificationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertNotificationsResponse
       */
      Models::ListAlertNotificationsResponse listAlertNotificationsWithOptions(const Models::ListAlertNotificationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a conditional query to list multiple push records.
       *
       * @param request ListAlertNotificationsRequest
       * @return ListAlertNotificationsResponse
       */
      Models::ListAlertNotificationsResponse listAlertNotifications(const Models::ListAlertNotificationsRequest &request);

      /**
       * @summary Queries the list of APIs by application.
       *
       * @description Queries the detailed information of published APIs by appKey.
       *
       * @param tmpReq ListApiByAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiByAppResponse
       */
      Models::ListApiByAppResponse listApiByAppWithOptions(const Models::ListApiByAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of APIs by application.
       *
       * @description Queries the detailed information of published APIs by appKey.
       *
       * @param request ListApiByAppRequest
       * @return ListApiByAppResponse
       */
      Models::ListApiByAppResponse listApiByApp(const Models::ListApiByAppRequest &request);

      /**
       * @summary Queries the list of specific fields for APIs that an application has requested.
       *
       * @param tmpReq ListAuthorizedDataServiceApiDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizedDataServiceApiDetailsResponse
       */
      Models::ListAuthorizedDataServiceApiDetailsResponse listAuthorizedDataServiceApiDetailsWithOptions(const Models::ListAuthorizedDataServiceApiDetailsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of specific fields for APIs that an application has requested.
       *
       * @param request ListAuthorizedDataServiceApiDetailsRequest
       * @return ListAuthorizedDataServiceApiDetailsResponse
       */
      Models::ListAuthorizedDataServiceApiDetailsResponse listAuthorizedDataServiceApiDetails(const Models::ListAuthorizedDataServiceApiDetailsRequest &request);

      /**
       * @summary Queries offline computing templates by paging. Online version: v6.2.0.
       *
       * @param tmpReq ListBatchTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBatchTemplatesResponse
       */
      Models::ListBatchTemplatesResponse listBatchTemplatesWithOptions(const Models::ListBatchTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries offline computing templates by paging. Online version: v6.2.0.
       *
       * @param request ListBatchTemplatesRequest
       * @return ListBatchTemplatesResponse
       */
      Models::ListBatchTemplatesResponse listBatchTemplates(const Models::ListBatchTemplatesRequest &request);

      /**
       * @summary Queries a list of business entities.
       *
       * @param tmpReq ListBizEntitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBizEntitiesResponse
       */
      Models::ListBizEntitiesResponse listBizEntitiesWithOptions(const Models::ListBizEntitiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of business entities.
       *
       * @param request ListBizEntitiesRequest
       * @return ListBizEntitiesResponse
       */
      Models::ListBizEntitiesResponse listBizEntities(const Models::ListBizEntitiesRequest &request);

      /**
       * @summary Retrieves all business units under the current tenant.
       *
       * @param request ListBizUnitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBizUnitsResponse
       */
      Models::ListBizUnitsResponse listBizUnitsWithOptions(const Models::ListBizUnitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all business units under the current tenant.
       *
       * @param request ListBizUnitsRequest
       * @return ListBizUnitsResponse
       */
      Models::ListBizUnitsResponse listBizUnits(const Models::ListBizUnitsRequest &request);

      /**
       * @summary Queries the list of asset catalog entries. Online version: v6.1.0.
       *
       * @param tmpReq ListCatalogAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCatalogAssetsResponse
       */
      Models::ListCatalogAssetsResponse listCatalogAssetsWithOptions(const Models::ListCatalogAssetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of asset catalog entries. Online version: v6.1.0.
       *
       * @param request ListCatalogAssetsRequest
       * @return ListCatalogAssetsResponse
       */
      Models::ListCatalogAssetsResponse listCatalogAssets(const Models::ListCatalogAssetsRequest &request);

      /**
       * @summary Query the list of compute sources.
       *
       * @param tmpReq ListComputeSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComputeSourcesResponse
       */
      Models::ListComputeSourcesResponse listComputeSourcesWithOptions(const Models::ListComputeSourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of compute sources.
       *
       * @param request ListComputeSourcesRequest
       * @return ListComputeSourcesResponse
       */
      Models::ListComputeSourcesResponse listComputeSources(const Models::ListComputeSourcesRequest &request);

      /**
       * @summary Retrieves a list of data domains.
       *
       * @param tmpReq ListDataDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataDomainsResponse
       */
      Models::ListDataDomainsResponse listDataDomainsWithOptions(const Models::ListDataDomainsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of data domains.
       *
       * @param request ListDataDomainsRequest
       * @return ListDataDomainsResponse
       */
      Models::ListDataDomainsResponse listDataDomains(const Models::ListDataDomainsRequest &request);

      /**
       * @summary O&M analysis: API call statistics.
       *
       * @param tmpReq ListDataServiceApiCallStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceApiCallStatisticsResponse
       */
      Models::ListDataServiceApiCallStatisticsResponse listDataServiceApiCallStatisticsWithOptions(const Models::ListDataServiceApiCallStatisticsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary O&M analysis: API call statistics.
       *
       * @param request ListDataServiceApiCallStatisticsRequest
       * @return ListDataServiceApiCallStatisticsResponse
       */
      Models::ListDataServiceApiCallStatisticsResponse listDataServiceApiCallStatistics(const Models::ListDataServiceApiCallStatisticsRequest &request);

      /**
       * @summary Queries data service call logs with pagination.
       *
       * @param tmpReq ListDataServiceApiCallsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceApiCallsResponse
       */
      Models::ListDataServiceApiCallsResponse listDataServiceApiCallsWithOptions(const Models::ListDataServiceApiCallsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data service call logs with pagination.
       *
       * @param request ListDataServiceApiCallsRequest
       * @return ListDataServiceApiCallsResponse
       */
      Models::ListDataServiceApiCallsResponse listDataServiceApiCalls(const Models::ListDataServiceApiCallsRequest &request);

      /**
       * @summary Operations analysis: analyzes the impact of abnormal API calls.
       *
       * @param tmpReq ListDataServiceApiImpactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceApiImpactsResponse
       */
      Models::ListDataServiceApiImpactsResponse listDataServiceApiImpactsWithOptions(const Models::ListDataServiceApiImpactsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Operations analysis: analyzes the impact of abnormal API calls.
       *
       * @param request ListDataServiceApiImpactsRequest
       * @return ListDataServiceApiImpactsResponse
       */
      Models::ListDataServiceApiImpactsResponse listDataServiceApiImpacts(const Models::ListDataServiceApiImpactsRequest &request);

      /**
       * @summary Queries the list of all applications under a data service tenant. All tenant members can perform this operation.
       * Release version: v6.0.0.
       *
       * @param tmpReq ListDataServiceAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceAppsResponse
       */
      Models::ListDataServiceAppsResponse listDataServiceAppsWithOptions(const Models::ListDataServiceAppsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of all applications under a data service tenant. All tenant members can perform this operation.
       * Release version: v6.0.0.
       *
       * @param request ListDataServiceAppsRequest
       * @return ListDataServiceAppsResponse
       */
      Models::ListDataServiceAppsResponse listDataServiceApps(const Models::ListDataServiceAppsRequest &request);

      /**
       * @summary Queries the list of applications that the current user has permissions to access.
       *
       * @param tmpReq ListDataServiceAuthorizedAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceAuthorizedAppsResponse
       */
      Models::ListDataServiceAuthorizedAppsResponse listDataServiceAuthorizedAppsWithOptions(const Models::ListDataServiceAuthorizedAppsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of applications that the current user has permissions to access.
       *
       * @param request ListDataServiceAuthorizedAppsRequest
       * @return ListDataServiceAuthorizedAppsResponse
       */
      Models::ListDataServiceAuthorizedAppsResponse listDataServiceAuthorizedApps(const Models::ListDataServiceAuthorizedAppsRequest &request);

      /**
       * @summary Obtain the list of API permissions managed by me.
       *
       * @param tmpReq ListDataServiceMyApiPermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceMyApiPermissionsResponse
       */
      Models::ListDataServiceMyApiPermissionsResponse listDataServiceMyApiPermissionsWithOptions(const Models::ListDataServiceMyApiPermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the list of API permissions managed by me.
       *
       * @param request ListDataServiceMyApiPermissionsRequest
       * @return ListDataServiceMyApiPermissionsResponse
       */
      Models::ListDataServiceMyApiPermissionsResponse listDataServiceMyApiPermissions(const Models::ListDataServiceMyApiPermissionsRequest &request);

      /**
       * @summary Queries the applications that the current user has permissions to access.
       *
       * @param tmpReq ListDataServiceMyAppPermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceMyAppPermissionsResponse
       */
      Models::ListDataServiceMyAppPermissionsResponse listDataServiceMyAppPermissionsWithOptions(const Models::ListDataServiceMyAppPermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the applications that the current user has permissions to access.
       *
       * @param request ListDataServiceMyAppPermissionsRequest
       * @return ListDataServiceMyAppPermissionsResponse
       */
      Models::ListDataServiceMyAppPermissionsResponse listDataServiceMyAppPermissions(const Models::ListDataServiceMyAppPermissionsRequest &request);

      /**
       * @summary Queries the list of published APIs by page.
       *
       * @param tmpReq ListDataServicePublishedApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServicePublishedApisResponse
       */
      Models::ListDataServicePublishedApisResponse listDataServicePublishedApisWithOptions(const Models::ListDataServicePublishedApisRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of published APIs by page.
       *
       * @param request ListDataServicePublishedApisRequest
       * @return ListDataServicePublishedApisResponse
       */
      Models::ListDataServicePublishedApisResponse listDataServicePublishedApis(const Models::ListDataServicePublishedApisRequest &request);

      /**
       * @summary Search for data sources. The results include data source configuration items.
       *
       * @param tmpReq ListDataSourceWithConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourceWithConfigResponse
       */
      Models::ListDataSourceWithConfigResponse listDataSourceWithConfigWithOptions(const Models::ListDataSourceWithConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Search for data sources. The results include data source configuration items.
       *
       * @param request ListDataSourceWithConfigRequest
       * @return ListDataSourceWithConfigResponse
       */
      Models::ListDataSourceWithConfigResponse listDataSourceWithConfig(const Models::ListDataSourceWithConfigRequest &request);

      /**
       * @summary Lists datasets in a project based on specified conditional query criteria. Online version: v6.2.0.
       *
       * @description ## Operation description
       * This API allows you to retrieve dataset information for a specific project by providing a tenant ID, project ID, and other optional parameters such as keywords and type lists. Paging is supported. The returned data includes basic dataset information and version details. ProjectId is required. Other parameters are optional and can be configured as needed to filter results.
       *
       * @param tmpReq ListDatasetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasetsResponse
       */
      Models::ListDatasetsResponse listDatasetsWithOptions(const Models::ListDatasetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists datasets in a project based on specified conditional query criteria. Online version: v6.2.0.
       *
       * @description ## Operation description
       * This API allows you to retrieve dataset information for a specific project by providing a tenant ID, project ID, and other optional parameters such as keywords and type lists. Paging is supported. The returned data includes basic dataset information and version details. ProjectId is required. Other parameters are optional and can be configured as needed to filter results.
       *
       * @param request ListDatasetsRequest
       * @return ListDatasetsResponse
       */
      Models::ListDatasetsResponse listDatasets(const Models::ListDatasetsRequest &request);

      /**
       * @summary Query the directory tree file list.
       *
       * @param tmpReq ListFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFilesResponse
       */
      Models::ListFilesResponse listFilesWithOptions(const Models::ListFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the directory tree file list.
       *
       * @param request ListFilesRequest
       * @return ListFilesResponse
       */
      Models::ListFilesResponse listFiles(const Models::ListFilesRequest &request);

      /**
       * @summary Paginate and query instances.
       *
       * @param tmpReq ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Paginate and query instances.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Queries the downstream nodes of a node. The query results can be used as a data reference when you create a data backfill workflow.
       *
       * @param tmpReq ListNodeDownStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodeDownStreamResponse
       */
      Models::ListNodeDownStreamResponse listNodeDownStreamWithOptions(const Models::ListNodeDownStreamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the downstream nodes of a node. The query results can be used as a data reference when you create a data backfill workflow.
       *
       * @param request ListNodeDownStreamRequest
       * @return ListNodeDownStreamResponse
       */
      Models::ListNodeDownStreamResponse listNodeDownStream(const Models::ListNodeDownStreamRequest &request);

      /**
       * @summary Retrieves a list of scheduling nodes.
       *
       * @param tmpReq ListNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodesWithOptions(const Models::ListNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of scheduling nodes.
       *
       * @param request ListNodesRequest
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodes(const Models::ListNodesRequest &request);

      /**
       * @summary Performs a paged query on the list of operation records. Online version: v6.2.0.
       *
       * @param tmpReq ListOperationRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationRecordResponse
       */
      Models::ListOperationRecordResponse listOperationRecordWithOptions(const Models::ListOperationRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query on the list of operation records. Online version: v6.2.0.
       *
       * @param request ListOperationRecordRequest
       * @return ListOperationRecordResponse
       */
      Models::ListOperationRecordResponse listOperationRecord(const Models::ListOperationRecordRequest &request);

      /**
       * @summary Queries the list of project members.
       *
       * @param tmpReq ListProjectMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectMembersResponse
       */
      Models::ListProjectMembersResponse listProjectMembersWithOptions(const Models::ListProjectMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of project members.
       *
       * @param request ListProjectMembersRequest
       * @return ListProjectMembersResponse
       */
      Models::ListProjectMembersResponse listProjectMembers(const Models::ListProjectMembersRequest &request);

      /**
       * @summary Retrieves a list of projects.
       *
       * @param tmpReq ListProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjectsWithOptions(const Models::ListProjectsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of projects.
       *
       * @param request ListProjectsRequest
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjects(const Models::ListProjectsRequest &request);

      /**
       * @summary Retrieves a paginated list of publish records.
       *
       * @param tmpReq ListPublishRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublishRecordsResponse
       */
      Models::ListPublishRecordsResponse listPublishRecordsWithOptions(const Models::ListPublishRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of publish records.
       *
       * @param request ListPublishRecordsRequest
       * @return ListPublishRecordsResponse
       */
      Models::ListPublishRecordsResponse listPublishRecords(const Models::ListPublishRecordsRequest &request);

      /**
       * @summary Queries quality rule tasks by paging.
       * Online version: v5.4.2.
       *
       * @param tmpReq ListQualityRuleTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQualityRuleTasksResponse
       */
      Models::ListQualityRuleTasksResponse listQualityRuleTasksWithOptions(const Models::ListQualityRuleTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries quality rule tasks by paging.
       * Online version: v5.4.2.
       *
       * @param request ListQualityRuleTasksRequest
       * @return ListQualityRuleTasksResponse
       */
      Models::ListQualityRuleTasksResponse listQualityRuleTasks(const Models::ListQualityRuleTasksRequest &request);

      /**
       * @summary Queries quality rules by paging.
       * Online version: v5.4.2.
       *
       * @param tmpReq ListQualityRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQualityRulesResponse
       */
      Models::ListQualityRulesResponse listQualityRulesWithOptions(const Models::ListQualityRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries quality rules by paging.
       * Online version: v5.4.2.
       *
       * @param request ListQualityRulesRequest
       * @return ListQualityRulesResponse
       */
      Models::ListQualityRulesResponse listQualityRules(const Models::ListQualityRulesRequest &request);

      /**
       * @summary Queries quality templates by paging.
       * Online version: v5.4.2.
       *
       * @param tmpReq ListQualityTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQualityTemplatesResponse
       */
      Models::ListQualityTemplatesResponse listQualityTemplatesWithOptions(const Models::ListQualityTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries quality templates by paging.
       * Online version: v5.4.2.
       *
       * @param request ListQualityTemplatesRequest
       * @return ListQualityTemplatesResponse
       */
      Models::ListQualityTemplatesResponse listQualityTemplates(const Models::ListQualityTemplatesRequest &request);

      /**
       * @summary Queries quality monitoring nodes by paged query.
       * Online version: v5.4.2.
       *
       * @param tmpReq ListQualityWatchTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQualityWatchTasksResponse
       */
      Models::ListQualityWatchTasksResponse listQualityWatchTasksWithOptions(const Models::ListQualityWatchTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries quality monitoring nodes by paged query.
       * Online version: v5.4.2.
       *
       * @param request ListQualityWatchTasksRequest
       * @return ListQualityWatchTasksResponse
       */
      Models::ListQualityWatchTasksResponse listQualityWatchTasks(const Models::ListQualityWatchTasksRequest &request);

      /**
       * @summary Performs a paged query of quality monitored objects.
       * Online version: v5.4.2.
       *
       * @param tmpReq ListQualityWatchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQualityWatchesResponse
       */
      Models::ListQualityWatchesResponse listQualityWatchesWithOptions(const Models::ListQualityWatchesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query of quality monitored objects.
       * Online version: v5.4.2.
       *
       * @param request ListQualityWatchesRequest
       * @return ListQualityWatchesResponse
       */
      Models::ListQualityWatchesResponse listQualityWatches(const Models::ListQualityWatchesRequest &request);

      /**
       * @summary Retrieves a paginated list of permission operation logs.
       *
       * @param tmpReq ListResourcePermissionOperationLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourcePermissionOperationLogResponse
       */
      Models::ListResourcePermissionOperationLogResponse listResourcePermissionOperationLogWithOptions(const Models::ListResourcePermissionOperationLogRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of permission operation logs.
       *
       * @param request ListResourcePermissionOperationLogRequest
       * @return ListResourcePermissionOperationLogResponse
       */
      Models::ListResourcePermissionOperationLogResponse listResourcePermissionOperationLog(const Models::ListResourcePermissionOperationLogRequest &request);

      /**
       * @summary Retrieves permission authorization records with pagination.
       *
       * @param tmpReq ListResourcePermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourcePermissionsResponse
       */
      Models::ListResourcePermissionsResponse listResourcePermissionsWithOptions(const Models::ListResourcePermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves permission authorization records with pagination.
       *
       * @param request ListResourcePermissionsRequest
       * @return ListResourcePermissionsResponse
       */
      Models::ListResourcePermissionsResponse listResourcePermissions(const Models::ListResourcePermissionsRequest &request);

      /**
       * @summary Performs a paged query of row-level permissions.
       *
       * @param tmpReq ListRowPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRowPermissionResponse
       */
      Models::ListRowPermissionResponse listRowPermissionWithOptions(const Models::ListRowPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query of row-level permissions.
       *
       * @param request ListRowPermissionRequest
       * @return ListRowPermissionResponse
       */
      Models::ListRowPermissionResponse listRowPermission(const Models::ListRowPermissionRequest &request);

      /**
       * @summary Queries row-level permissions of a specified user by paging.
       *
       * @param tmpReq ListRowPermissionByUserIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRowPermissionByUserIdResponse
       */
      Models::ListRowPermissionByUserIdResponse listRowPermissionByUserIdWithOptions(const Models::ListRowPermissionByUserIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries row-level permissions of a specified user by paging.
       *
       * @param request ListRowPermissionByUserIdRequest
       * @return ListRowPermissionByUserIdResponse
       */
      Models::ListRowPermissionByUserIdResponse listRowPermissionByUserId(const Models::ListRowPermissionByUserIdRequest &request);

      /**
       * @summary Queries identification records of security identification results by paging.
       * Online version: v5.4.2.
       *
       * @param tmpReq ListSecurityIdentifyRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecurityIdentifyRecordsResponse
       */
      Models::ListSecurityIdentifyRecordsResponse listSecurityIdentifyRecordsWithOptions(const Models::ListSecurityIdentifyRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries identification records of security identification results by paging.
       * Online version: v5.4.2.
       *
       * @param request ListSecurityIdentifyRecordsRequest
       * @return ListSecurityIdentifyRecordsResponse
       */
      Models::ListSecurityIdentifyRecordsResponse listSecurityIdentifyRecords(const Models::ListSecurityIdentifyRecordsRequest &request);

      /**
       * @summary Query security identification results by page.
       * Release version: v5.4.2.
       *
       * @param tmpReq ListSecurityIdentifyResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecurityIdentifyResultsResponse
       */
      Models::ListSecurityIdentifyResultsResponse listSecurityIdentifyResultsWithOptions(const Models::ListSecurityIdentifyResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query security identification results by page.
       * Release version: v5.4.2.
       *
       * @param request ListSecurityIdentifyResultsRequest
       * @return ListSecurityIdentifyResultsResponse
       */
      Models::ListSecurityIdentifyResultsResponse listSecurityIdentifyResults(const Models::ListSecurityIdentifyResultsRequest &request);

      /**
       * @summary Query the standard list by page.
       * Release version: v5.4.2.
       *
       * @param tmpReq ListStandardsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStandardsResponse
       */
      Models::ListStandardsResponse listStandardsWithOptions(const Models::ListStandardsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the standard list by page.
       * Release version: v5.4.2.
       *
       * @param request ListStandardsRequest
       * @return ListStandardsResponse
       */
      Models::ListStandardsResponse listStandards(const Models::ListStandardsRequest &request);

      /**
       * @summary Paginate and retrieve the list of pending deployment records.
       *
       * @param tmpReq ListSubmitRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubmitRecordsResponse
       */
      Models::ListSubmitRecordsResponse listSubmitRecordsWithOptions(const Models::ListSubmitRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Paginate and retrieve the list of pending deployment records.
       *
       * @param request ListSubmitRecordsRequest
       * @return ListSubmitRecordsResponse
       */
      Models::ListSubmitRecordsResponse listSubmitRecords(const Models::ListSubmitRecordsRequest &request);

      /**
       * @summary Performs a paged query to retrieve asset table metadata.
       * Online version: v5.4.2.
       *
       * @param tmpReq ListTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTablesWithOptions(const Models::ListTablesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query to retrieve asset table metadata.
       * Online version: v5.4.2.
       *
       * @param request ListTablesRequest
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTables(const Models::ListTablesRequest &request);

      /**
       * @summary Queries the list of tenant members.
       *
       * @param tmpReq ListTenantMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTenantMembersResponse
       */
      Models::ListTenantMembersResponse listTenantMembersWithOptions(const Models::ListTenantMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of tenant members.
       *
       * @param request ListTenantMembersRequest
       * @return ListTenantMembersResponse
       */
      Models::ListTenantMembersResponse listTenantMembers(const Models::ListTenantMembersRequest &request);

      /**
       * @summary Performs a paging query of user group members.
       *
       * @param tmpReq ListUserGroupMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserGroupMembersResponse
       */
      Models::ListUserGroupMembersResponse listUserGroupMembersWithOptions(const Models::ListUserGroupMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query of user group members.
       *
       * @param request ListUserGroupMembersRequest
       * @return ListUserGroupMembersResponse
       */
      Models::ListUserGroupMembersResponse listUserGroupMembers(const Models::ListUserGroupMembersRequest &request);

      /**
       * @summary Queries user groups by paging.
       *
       * @param tmpReq ListUserGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserGroupsResponse
       */
      Models::ListUserGroupsResponse listUserGroupsWithOptions(const Models::ListUserGroupsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user groups by paging.
       *
       * @param request ListUserGroupsRequest
       * @return ListUserGroupsResponse
       */
      Models::ListUserGroupsResponse listUserGroups(const Models::ListUserGroupsRequest &request);

      /**
       * @summary Offlines a batch task.
       *
       * @param request OfflineBatchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineBatchTaskResponse
       */
      Models::OfflineBatchTaskResponse offlineBatchTaskWithOptions(const Models::OfflineBatchTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Offlines a batch task.
       *
       * @param request OfflineBatchTaskRequest
       * @return OfflineBatchTaskResponse
       */
      Models::OfflineBatchTaskResponse offlineBatchTask(const Models::OfflineBatchTaskRequest &request);

      /**
       * @summary Offline a business entity.
       *
       * @param tmpReq OfflineBizEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineBizEntityResponse
       */
      Models::OfflineBizEntityResponse offlineBizEntityWithOptions(const Models::OfflineBizEntityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Offline a business entity.
       *
       * @param request OfflineBizEntityRequest
       * @return OfflineBizEntityResponse
       */
      Models::OfflineBizEntityResponse offlineBizEntity(const Models::OfflineBizEntityRequest &request);

      /**
       * @summary Offlines an integration pipeline node.
       *
       * @param tmpReq OfflinePipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflinePipelineResponse
       */
      Models::OfflinePipelineResponse offlinePipelineWithOptions(const Models::OfflinePipelineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Offlines an integration pipeline node.
       *
       * @param request OfflinePipelineRequest
       * @return OfflinePipelineResponse
       */
      Models::OfflinePipelineResponse offlinePipeline(const Models::OfflinePipelineRequest &request);

      /**
       * @summary Asynchronously offlines an integration pipeline node.
       *
       * @param tmpReq OfflinePipelineByAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflinePipelineByAsyncResponse
       */
      Models::OfflinePipelineByAsyncResponse offlinePipelineByAsyncWithOptions(const Models::OfflinePipelineByAsyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Asynchronously offlines an integration pipeline node.
       *
       * @param request OfflinePipelineByAsyncRequest
       * @return OfflinePipelineByAsyncResponse
       */
      Models::OfflinePipelineByAsyncResponse offlinePipelineByAsync(const Models::OfflinePipelineByAsyncRequest &request);

      /**
       * @summary Offlines a standard.
       * Online version: v5.4.2.
       *
       * @param tmpReq OfflineStandardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineStandardResponse
       */
      Models::OfflineStandardResponse offlineStandardWithOptions(const Models::OfflineStandardRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Offlines a standard.
       * Online version: v5.4.2.
       *
       * @param request OfflineStandardRequest
       * @return OfflineStandardResponse
       */
      Models::OfflineStandardResponse offlineStandard(const Models::OfflineStandardRequest &request);

      /**
       * @summary Brings a business entity online.
       *
       * @param tmpReq OnlineBizEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineBizEntityResponse
       */
      Models::OnlineBizEntityResponse onlineBizEntityWithOptions(const Models::OnlineBizEntityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Brings a business entity online.
       *
       * @param request OnlineBizEntityRequest
       * @return OnlineBizEntityResponse
       */
      Models::OnlineBizEntityResponse onlineBizEntity(const Models::OnlineBizEntityRequest &request);

      /**
       * @summary Performs batch O&M operations on instances. Both physical instances and logical table instances are supported.
       *
       * @param tmpReq OperateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateInstanceResponse
       */
      Models::OperateInstanceResponse operateInstanceWithOptions(const Models::OperateInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs batch O&M operations on instances. Both physical instances and logical table instances are supported.
       *
       * @param request OperateInstanceRequest
       * @return OperateInstanceResponse
       */
      Models::OperateInstanceResponse operateInstance(const Models::OperateInstanceRequest &request);

      /**
       * @summary Parses the logical table dependencies of an offline compute node. The parsing result may contain self-dependent nodes in the upstream dependency information, where the upstream node ID is the same as the node ID of the parsed code. You must handle such cases on your own.
       *
       * @param tmpReq ParseBatchTaskDependencyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ParseBatchTaskDependencyResponse
       */
      Models::ParseBatchTaskDependencyResponse parseBatchTaskDependencyWithOptions(const Models::ParseBatchTaskDependencyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Parses the logical table dependencies of an offline compute node. The parsing result may contain self-dependent nodes in the upstream dependency information, where the upstream node ID is the same as the node ID of the parsed code. You must handle such cases on your own.
       *
       * @param request ParseBatchTaskDependencyRequest
       * @return ParseBatchTaskDependencyResponse
       */
      Models::ParseBatchTaskDependencyResponse parseBatchTaskDependency(const Models::ParseBatchTaskDependencyRequest &request);

      /**
       * @summary Pauses the scheduling of physical nodes. This stops the scheduling of nodes, and downstream nodes cannot be triggered. Currently, only offline code nodes and integration nodes are supported.
       *
       * @param tmpReq PausePhysicalNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PausePhysicalNodeResponse
       */
      Models::PausePhysicalNodeResponse pausePhysicalNodeWithOptions(const Models::PausePhysicalNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses the scheduling of physical nodes. This stops the scheduling of nodes, and downstream nodes cannot be triggered. Currently, only offline code nodes and integration nodes are supported.
       *
       * @param request PausePhysicalNodeRequest
       * @return PausePhysicalNodeResponse
       */
      Models::PausePhysicalNodeResponse pausePhysicalNode(const Models::PausePhysicalNodeRequest &request);

      /**
       * @summary Publishes a data service API to the production environment.
       *
       * @param request PublishDataServiceApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishDataServiceApiResponse
       */
      Models::PublishDataServiceApiResponse publishDataServiceApiWithOptions(const Models::PublishDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a data service API to the production environment.
       *
       * @param request PublishDataServiceApiRequest
       * @return PublishDataServiceApiResponse
       */
      Models::PublishDataServiceApiResponse publishDataServiceApi(const Models::PublishDataServiceApiRequest &request);

      /**
       * @summary Publishes objects in batches.
       *
       * @param tmpReq PublishObjectListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishObjectListResponse
       */
      Models::PublishObjectListResponse publishObjectListWithOptions(const Models::PublishObjectListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes objects in batches.
       *
       * @param request PublishObjectListRequest
       * @return PublishObjectListResponse
       */
      Models::PublishObjectListResponse publishObjectList(const Models::PublishObjectListRequest &request);

      /**
       * @summary Publishes a standard.
       * Release version: v5.4.2.
       *
       * @param tmpReq PublishStandardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishStandardResponse
       */
      Models::PublishStandardResponse publishStandardWithOptions(const Models::PublishStandardRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a standard.
       * Release version: v5.4.2.
       *
       * @param request PublishStandardRequest
       * @return PublishStandardResponse
       */
      Models::PublishStandardResponse publishStandard(const Models::PublishStandardRequest &request);

      /**
       * @summary Remove regular members from a data service application. Only the application owner can perform this operation.
       * Released version: v6.0.0.
       *
       * @param tmpReq RemoveDataServiceAppMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveDataServiceAppMemberResponse
       */
      Models::RemoveDataServiceAppMemberResponse removeDataServiceAppMemberWithOptions(const Models::RemoveDataServiceAppMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Remove regular members from a data service application. Only the application owner can perform this operation.
       * Released version: v6.0.0.
       *
       * @param request RemoveDataServiceAppMemberRequest
       * @return RemoveDataServiceAppMemberResponse
       */
      Models::RemoveDataServiceAppMemberResponse removeDataServiceAppMember(const Models::RemoveDataServiceAppMemberRequest &request);

      /**
       * @summary Deletes a project member.
       *
       * @param tmpReq RemoveProjectMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveProjectMemberResponse
       */
      Models::RemoveProjectMemberResponse removeProjectMemberWithOptions(const Models::RemoveProjectMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a project member.
       *
       * @param request RemoveProjectMemberRequest
       * @return RemoveProjectMemberResponse
       */
      Models::RemoveProjectMemberResponse removeProjectMember(const Models::RemoveProjectMemberRequest &request);

      /**
       * @summary Deletes the bindings between quality rules and schedules in batches.
       * Release version: v5.4.2.
       *
       * @param tmpReq RemoveQualityRuleSchedulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveQualityRuleSchedulesResponse
       */
      Models::RemoveQualityRuleSchedulesResponse removeQualityRuleSchedulesWithOptions(const Models::RemoveQualityRuleSchedulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the bindings between quality rules and schedules in batches.
       * Release version: v5.4.2.
       *
       * @param request RemoveQualityRuleSchedulesRequest
       * @return RemoveQualityRuleSchedulesResponse
       */
      Models::RemoveQualityRuleSchedulesResponse removeQualityRuleSchedules(const Models::RemoveQualityRuleSchedulesRequest &request);

      /**
       * @summary Removes a tenant member. Only superusers and system administrators can call this API operation.
       *
       * @param tmpReq RemoveTenantMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTenantMemberResponse
       */
      Models::RemoveTenantMemberResponse removeTenantMemberWithOptions(const Models::RemoveTenantMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a tenant member. Only superusers and system administrators can call this API operation.
       *
       * @param request RemoveTenantMemberRequest
       * @return RemoveTenantMemberResponse
       */
      Models::RemoveTenantMemberResponse removeTenantMember(const Models::RemoveTenantMemberRequest &request);

      /**
       * @summary Removes members from a user group.
       *
       * @param tmpReq RemoveUserGroupMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserGroupMemberResponse
       */
      Models::RemoveUserGroupMemberResponse removeUserGroupMemberWithOptions(const Models::RemoveUserGroupMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes members from a user group.
       *
       * @param request RemoveUserGroupMemberRequest
       * @return RemoveUserGroupMemberResponse
       */
      Models::RemoveUserGroupMemberResponse removeUserGroupMember(const Models::RemoveUserGroupMemberRequest &request);

      /**
       * @summary Updates the whitelist of a project.
       *
       * @param tmpReq ReplaceProjectWhiteListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceProjectWhiteListsResponse
       */
      Models::ReplaceProjectWhiteListsResponse replaceProjectWhiteListsWithOptions(const Models::ReplaceProjectWhiteListsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the whitelist of a project.
       *
       * @param request ReplaceProjectWhiteListsRequest
       * @return ReplaceProjectWhiteListsResponse
       */
      Models::ReplaceProjectWhiteListsResponse replaceProjectWhiteLists(const Models::ReplaceProjectWhiteListsRequest &request);

      /**
       * @summary Reset the Data Service application key. Only the application owner can perform this operation.
       * Release version: v6.0.0.
       *
       * @param tmpReq ResetDataServiceAppSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetDataServiceAppSecretResponse
       */
      Models::ResetDataServiceAppSecretResponse resetDataServiceAppSecretWithOptions(const Models::ResetDataServiceAppSecretRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reset the Data Service application key. Only the application owner can perform this operation.
       * Release version: v6.0.0.
       *
       * @param request ResetDataServiceAppSecretRequest
       * @return ResetDataServiceAppSecretResponse
       */
      Models::ResetDataServiceAppSecretResponse resetDataServiceAppSecret(const Models::ResetDataServiceAppSecretRequest &request);

      /**
       * @summary Resume physical node scheduling.
       *
       * @param tmpReq ResumePhysicalNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumePhysicalNodeResponse
       */
      Models::ResumePhysicalNodeResponse resumePhysicalNodeWithOptions(const Models::ResumePhysicalNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resume physical node scheduling.
       *
       * @param request ResumePhysicalNodeRequest
       * @return ResumePhysicalNodeResponse
       */
      Models::ResumePhysicalNodeResponse resumePhysicalNode(const Models::ResumePhysicalNodeRequest &request);

      /**
       * @summary Retransfers a failed transfer task.
       *
       * @param tmpReq RetryTransferOwnershipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryTransferOwnershipResponse
       */
      Models::RetryTransferOwnershipResponse retryTransferOwnershipWithOptions(const Models::RetryTransferOwnershipRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retransfers a failed transfer task.
       *
       * @param request RetryTransferOwnershipRequest
       * @return RetryTransferOwnershipResponse
       */
      Models::RetryTransferOwnershipResponse retryTransferOwnership(const Models::RetryTransferOwnershipRequest &request);

      /**
       * @summary Revokes API authorization.
       *
       * @param tmpReq RevokeDataServiceApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeDataServiceApiResponse
       */
      Models::RevokeDataServiceApiResponse revokeDataServiceApiWithOptions(const Models::RevokeDataServiceApiRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes API authorization.
       *
       * @param request RevokeDataServiceApiRequest
       * @return RevokeDataServiceApiResponse
       */
      Models::RevokeDataServiceApiResponse revokeDataServiceApi(const Models::RevokeDataServiceApiRequest &request);

      /**
       * @summary Revokes resource authorization from a user.
       *
       * @param tmpReq RevokeResourcePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeResourcePermissionResponse
       */
      Models::RevokeResourcePermissionResponse revokeResourcePermissionWithOptions(const Models::RevokeResourcePermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes resource authorization from a user.
       *
       * @param request RevokeResourcePermissionRequest
       * @return RevokeResourcePermissionResponse
       */
      Models::RevokeResourcePermissionResponse revokeResourcePermission(const Models::RevokeResourcePermissionRequest &request);

      /**
       * @summary Stops an ad hoc query task.
       *
       * @param request StopAdHocTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAdHocTaskResponse
       */
      Models::StopAdHocTaskResponse stopAdHocTaskWithOptions(const Models::StopAdHocTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an ad hoc query task.
       *
       * @param request StopAdHocTaskRequest
       * @return StopAdHocTaskResponse
       */
      Models::StopAdHocTaskResponse stopAdHocTask(const Models::StopAdHocTaskRequest &request);

      /**
       * @summary Submits a batch task.
       *
       * @param tmpReq SubmitBatchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitBatchTaskResponse
       */
      Models::SubmitBatchTaskResponse submitBatchTaskWithOptions(const Models::SubmitBatchTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a batch task.
       *
       * @param request SubmitBatchTaskRequest
       * @return SubmitBatchTaskResponse
       */
      Models::SubmitBatchTaskResponse submitBatchTask(const Models::SubmitBatchTaskRequest &request);

      /**
       * @summary Batch submit rule tasks with support for test runs.
       * Release version: v5.4.2.
       *
       * @param tmpReq SubmitQualityRuleTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitQualityRuleTasksResponse
       */
      Models::SubmitQualityRuleTasksResponse submitQualityRuleTasksWithOptions(const Models::SubmitQualityRuleTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch submit rule tasks with support for test runs.
       * Release version: v5.4.2.
       *
       * @param request SubmitQualityRuleTasksRequest
       * @return SubmitQualityRuleTasksResponse
       */
      Models::SubmitQualityRuleTasksResponse submitQualityRuleTasks(const Models::SubmitQualityRuleTasksRequest &request);

      /**
       * @summary Submits quality watchtask check tasks in batches.
       * Online version: v5.4.2.
       *
       * @param tmpReq SubmitQualityWatchTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitQualityWatchTasksResponse
       */
      Models::SubmitQualityWatchTasksResponse submitQualityWatchTasksWithOptions(const Models::SubmitQualityWatchTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits quality watchtask check tasks in batches.
       * Online version: v5.4.2.
       *
       * @param request SubmitQualityWatchTasksRequest
       * @return SubmitQualityWatchTasksResponse
       */
      Models::SubmitQualityWatchTasksResponse submitQualityWatchTasks(const Models::SubmitQualityWatchTasksRequest &request);

      /**
       * @summary Synchronizes department information.
       *
       * @description Queries the details of a published API operation by AppKey.
       *
       * @param tmpReq SyncDepartmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncDepartmentResponse
       */
      Models::SyncDepartmentResponse syncDepartmentWithOptions(const Models::SyncDepartmentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes department information.
       *
       * @description Queries the details of a published API operation by AppKey.
       *
       * @param request SyncDepartmentRequest
       * @return SyncDepartmentResponse
       */
      Models::SyncDepartmentResponse syncDepartment(const Models::SyncDepartmentRequest &request);

      /**
       * @summary Synchronizes department member information.
       *
       * @param tmpReq SyncDepartmentUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncDepartmentUserResponse
       */
      Models::SyncDepartmentUserResponse syncDepartmentUserWithOptions(const Models::SyncDepartmentUserRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes department member information.
       *
       * @param request SyncDepartmentUserRequest
       * @return SyncDepartmentUserResponse
       */
      Models::SyncDepartmentUserResponse syncDepartmentUser(const Models::SyncDepartmentUserRequest &request);

      /**
       * @summary Transfers ownership to a new owner in one click.
       *
       * @param tmpReq TransferOwnershipForAllObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferOwnershipForAllObjectResponse
       */
      Models::TransferOwnershipForAllObjectResponse transferOwnershipForAllObjectWithOptions(const Models::TransferOwnershipForAllObjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transfers ownership to a new owner in one click.
       *
       * @param request TransferOwnershipForAllObjectRequest
       * @return TransferOwnershipForAllObjectResponse
       */
      Models::TransferOwnershipForAllObjectResponse transferOwnershipForAllObject(const Models::TransferOwnershipForAllObjectRequest &request);

      /**
       * @summary Modifies an ad hoc query file.
       *
       * @param tmpReq UpdateAdHocFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAdHocFileResponse
       */
      Models::UpdateAdHocFileResponse updateAdHocFileWithOptions(const Models::UpdateAdHocFileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an ad hoc query file.
       *
       * @param request UpdateAdHocFileRequest
       * @return UpdateAdHocFileResponse
       */
      Models::UpdateAdHocFileResponse updateAdHocFile(const Models::UpdateAdHocFileRequest &request);

      /**
       * @summary Updates an offline compute node.
       *
       * @param tmpReq UpdateBatchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBatchTaskResponse
       */
      Models::UpdateBatchTaskResponse updateBatchTaskWithOptions(const Models::UpdateBatchTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an offline compute node.
       *
       * @param request UpdateBatchTaskRequest
       * @return UpdateBatchTaskResponse
       */
      Models::UpdateBatchTaskResponse updateBatchTask(const Models::UpdateBatchTaskRequest &request);

      /**
       * @summary Edits the custom data lineage of a batch task.
       *
       * @param tmpReq UpdateBatchTaskUdfLineagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBatchTaskUdfLineagesResponse
       */
      Models::UpdateBatchTaskUdfLineagesResponse updateBatchTaskUdfLineagesWithOptions(const Models::UpdateBatchTaskUdfLineagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits the custom data lineage of a batch task.
       *
       * @param request UpdateBatchTaskUdfLineagesRequest
       * @return UpdateBatchTaskUdfLineagesResponse
       */
      Models::UpdateBatchTaskUdfLineagesResponse updateBatchTaskUdfLineages(const Models::UpdateBatchTaskUdfLineagesRequest &request);

      /**
       * @summary Updates a business entity.
       *
       * @param tmpReq UpdateBizEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBizEntityResponse
       */
      Models::UpdateBizEntityResponse updateBizEntityWithOptions(const Models::UpdateBizEntityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a business entity.
       *
       * @param request UpdateBizEntityRequest
       * @return UpdateBizEntityResponse
       */
      Models::UpdateBizEntityResponse updateBizEntity(const Models::UpdateBizEntityRequest &request);

      /**
       * @summary Update a business metric.
       * Release version: v5.5.0.
       *
       * @param tmpReq UpdateBizMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBizMetricResponse
       */
      Models::UpdateBizMetricResponse updateBizMetricWithOptions(const Models::UpdateBizMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update a business metric.
       * Release version: v5.5.0.
       *
       * @param request UpdateBizMetricRequest
       * @return UpdateBizMetricResponse
       */
      Models::UpdateBizMetricResponse updateBizMetric(const Models::UpdateBizMetricRequest &request);

      /**
       * @summary Updates a data domain.
       *
       * @param tmpReq UpdateBizUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBizUnitResponse
       */
      Models::UpdateBizUnitResponse updateBizUnitWithOptions(const Models::UpdateBizUnitRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data domain.
       *
       * @param request UpdateBizUnitRequest
       * @return UpdateBizUnitResponse
       */
      Models::UpdateBizUnitResponse updateBizUnit(const Models::UpdateBizUnitRequest &request);

      /**
       * @summary Edits a compute source. Business unit administrators and project administrators have permissions to perform this operation.
       *
       * @param tmpReq UpdateComputeSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeSourceResponse
       */
      Models::UpdateComputeSourceResponse updateComputeSourceWithOptions(const Models::UpdateComputeSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits a compute source. Business unit administrators and project administrators have permissions to perform this operation.
       *
       * @param request UpdateComputeSourceRequest
       * @return UpdateComputeSourceResponse
       */
      Models::UpdateComputeSourceResponse updateComputeSource(const Models::UpdateComputeSourceRequest &request);

      /**
       * @summary Updates a data domain.
       *
       * @param tmpReq UpdateDataDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataDomainResponse
       */
      Models::UpdateDataDomainResponse updateDataDomainWithOptions(const Models::UpdateDataDomainRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data domain.
       *
       * @param request UpdateDataDomainRequest
       * @return UpdateDataDomainResponse
       */
      Models::UpdateDataDomainResponse updateDataDomain(const Models::UpdateDataDomainRequest &request);

      /**
       * @summary Updates a data service application. Only super administrators, system administrators, and application owners can perform this operation.
       * Release version: v6.0.0.
       *
       * @param tmpReq UpdateDataServiceAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataServiceAppResponse
       */
      Models::UpdateDataServiceAppResponse updateDataServiceAppWithOptions(const Models::UpdateDataServiceAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data service application. Only super administrators, system administrators, and application owners can perform this operation.
       * Release version: v6.0.0.
       *
       * @param request UpdateDataServiceAppRequest
       * @return UpdateDataServiceAppResponse
       */
      Models::UpdateDataServiceAppResponse updateDataServiceApp(const Models::UpdateDataServiceAppRequest &request);

      /**
       * @summary Updates a data service application group. Only superusers and system administrators can perform this operation.
       * Online version: v6.0.0.
       *
       * @param tmpReq UpdateDataServiceAppGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataServiceAppGroupResponse
       */
      Models::UpdateDataServiceAppGroupResponse updateDataServiceAppGroupWithOptions(const Models::UpdateDataServiceAppGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data service application group. Only superusers and system administrators can perform this operation.
       * Online version: v6.0.0.
       *
       * @param request UpdateDataServiceAppGroupRequest
       * @return UpdateDataServiceAppGroupResponse
       */
      Models::UpdateDataServiceAppGroupResponse updateDataServiceAppGroup(const Models::UpdateDataServiceAppGroupRequest &request);

      /**
       * @summary Updates the regular members of a data service application. Only the application owner can perform this operation.
       * Online version: v6.0.0.
       *
       * @param tmpReq UpdateDataServiceAppMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataServiceAppMemberResponse
       */
      Models::UpdateDataServiceAppMemberResponse updateDataServiceAppMemberWithOptions(const Models::UpdateDataServiceAppMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the regular members of a data service application. Only the application owner can perform this operation.
       * Online version: v6.0.0.
       *
       * @param request UpdateDataServiceAppMemberRequest
       * @return UpdateDataServiceAppMemberResponse
       */
      Models::UpdateDataServiceAppMemberResponse updateDataServiceAppMember(const Models::UpdateDataServiceAppMemberRequest &request);

      /**
       * @summary Edits the basic information of a data source. Tenant administrators, data administrators, business segment administrators, project administrators, and operations administrators have permissions to perform this operation.
       *
       * @param tmpReq UpdateDataSourceBasicInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataSourceBasicInfoResponse
       */
      Models::UpdateDataSourceBasicInfoResponse updateDataSourceBasicInfoWithOptions(const Models::UpdateDataSourceBasicInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits the basic information of a data source. Tenant administrators, data administrators, business segment administrators, project administrators, and operations administrators have permissions to perform this operation.
       *
       * @param request UpdateDataSourceBasicInfoRequest
       * @return UpdateDataSourceBasicInfoResponse
       */
      Models::UpdateDataSourceBasicInfoResponse updateDataSourceBasicInfo(const Models::UpdateDataSourceBasicInfoRequest &request);

      /**
       * @summary Edits the connection configuration items of a data source. Tenant administrators, data administrators, business unit administrators, project administrators, and operations administrators have permissions to perform this operation.
       *
       * @param tmpReq UpdateDataSourceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataSourceConfigResponse
       */
      Models::UpdateDataSourceConfigResponse updateDataSourceConfigWithOptions(const Models::UpdateDataSourceConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits the connection configuration items of a data source. Tenant administrators, data administrators, business unit administrators, project administrators, and operations administrators have permissions to perform this operation.
       *
       * @param request UpdateDataSourceConfigRequest
       * @return UpdateDataSourceConfigResponse
       */
      Models::UpdateDataSourceConfigResponse updateDataSourceConfig(const Models::UpdateDataSourceConfigRequest &request);

      /**
       * @summary Dataphin OpenAPI 模板。
       *
       * @description ## 请求说明
       * - 该 API 用于更新特定项目下已存在的数据集的详细信息。
       * - 必须提供 `ProjectId` 和 `UpdateCommand` 参数，其中 `UpdateCommand` 包含了需要更新的数据集的具体字段。
       * - `UpdateCommand` 中的 `Id` 字段是必需的，用来标识要更新的数据集。
       * - 其他字段如 `Name`, `Type`, `DataCellId` 等为可选项，根据实际需求选择性填写。
       * - 版本配置（`VersionConfig`）和实时元表配置（`RealtimeMetaTableConfig`）提供了更详细的设置选项，包括存储路径、表结构等，这些也是可选的。
       * - 注意确保所有提供的 ID 值（如 `ProjectId`, `Id`, `DataSourceId` 等）在系统中有效且正确关联。
       *
       * @param tmpReq UpdateDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasetResponse
       */
      Models::UpdateDatasetResponse updateDatasetWithOptions(const Models::UpdateDatasetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dataphin OpenAPI 模板。
       *
       * @description ## 请求说明
       * - 该 API 用于更新特定项目下已存在的数据集的详细信息。
       * - 必须提供 `ProjectId` 和 `UpdateCommand` 参数，其中 `UpdateCommand` 包含了需要更新的数据集的具体字段。
       * - `UpdateCommand` 中的 `Id` 字段是必需的，用来标识要更新的数据集。
       * - 其他字段如 `Name`, `Type`, `DataCellId` 等为可选项，根据实际需求选择性填写。
       * - 版本配置（`VersionConfig`）和实时元表配置（`RealtimeMetaTableConfig`）提供了更详细的设置选项，包括存储路径、表结构等，这些也是可选的。
       * - 注意确保所有提供的 ID 值（如 `ProjectId`, `Id`, `DataSourceId` 等）在系统中有效且正确关联。
       *
       * @param request UpdateDatasetRequest
       * @return UpdateDatasetResponse
       */
      Models::UpdateDatasetResponse updateDataset(const Models::UpdateDatasetRequest &request);

      /**
       * @summary Moves the file position in the menu tree.
       *
       * @param request UpdateFileDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFileDirectoryResponse
       */
      Models::UpdateFileDirectoryResponse updateFileDirectoryWithOptions(const Models::UpdateFileDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves the file position in the menu tree.
       *
       * @param request UpdateFileDirectoryRequest
       * @return UpdateFileDirectoryResponse
       */
      Models::UpdateFileDirectoryResponse updateFileDirectory(const Models::UpdateFileDirectoryRequest &request);

      /**
       * @summary Updates a file name.
       *
       * @param request UpdateFileNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFileNameResponse
       */
      Models::UpdateFileNameResponse updateFileNameWithOptions(const Models::UpdateFileNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a file name.
       *
       * @param request UpdateFileNameRequest
       * @return UpdateFileNameResponse
       */
      Models::UpdateFileNameResponse updateFileName(const Models::UpdateFileNameRequest &request);

      /**
       * @summary Updates an integration pipeline or unstructured workflow node.
       *
       * @param tmpReq UpdatePipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePipelineResponse
       */
      Models::UpdatePipelineResponse updatePipelineWithOptions(const Models::UpdatePipelineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an integration pipeline or unstructured workflow node.
       *
       * @param request UpdatePipelineRequest
       * @return UpdatePipelineResponse
       */
      Models::UpdatePipelineResponse updatePipeline(const Models::UpdatePipelineRequest &request);

      /**
       * @summary Asynchronously updates a pipeline or unstructured workflow node.
       *
       * @param tmpReq UpdatePipelineByAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePipelineByAsyncResponse
       */
      Models::UpdatePipelineByAsyncResponse updatePipelineByAsyncWithOptions(const Models::UpdatePipelineByAsyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Asynchronously updates a pipeline or unstructured workflow node.
       *
       * @param request UpdatePipelineByAsyncRequest
       * @return UpdatePipelineByAsyncResponse
       */
      Models::UpdatePipelineByAsyncResponse updatePipelineByAsync(const Models::UpdatePipelineByAsyncRequest &request);

      /**
       * @summary Edits project members.
       *
       * @param tmpReq UpdateProjectMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectMemberResponse
       */
      Models::UpdateProjectMemberResponse updateProjectMemberWithOptions(const Models::UpdateProjectMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits project members.
       *
       * @param request UpdateProjectMemberRequest
       * @return UpdateProjectMemberResponse
       */
      Models::UpdateProjectMemberResponse updateProjectMember(const Models::UpdateProjectMemberRequest &request);

      /**
       * @summary Enables or disables quality rules in batches.
       * Release version: v5.4.2.
       *
       * @param tmpReq UpdateQualityRuleSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQualityRuleSwitchResponse
       */
      Models::UpdateQualityRuleSwitchResponse updateQualityRuleSwitchWithOptions(const Models::UpdateQualityRuleSwitchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables quality rules in batches.
       * Release version: v5.4.2.
       *
       * @param request UpdateQualityRuleSwitchRequest
       * @return UpdateQualityRuleSwitchResponse
       */
      Models::UpdateQualityRuleSwitchResponse updateQualityRuleSwitch(const Models::UpdateQualityRuleSwitchRequest &request);

      /**
       * @summary Starts or stops quality monitored objects in batches.
       * Release version: v5.4.2.
       *
       * @param tmpReq UpdateQualityWatchSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQualityWatchSwitchResponse
       */
      Models::UpdateQualityWatchSwitchResponse updateQualityWatchSwitchWithOptions(const Models::UpdateQualityWatchSwitchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts or stops quality monitored objects in batches.
       * Release version: v5.4.2.
       *
       * @param request UpdateQualityWatchSwitchRequest
       * @return UpdateQualityWatchSwitchResponse
       */
      Models::UpdateQualityWatchSwitchResponse updateQualityWatchSwitch(const Models::UpdateQualityWatchSwitchRequest &request);

      /**
       * @summary Edits a resource file.
       *
       * @param tmpReq UpdateResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceResponse
       */
      Models::UpdateResourceResponse updateResourceWithOptions(const Models::UpdateResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits a resource file.
       *
       * @param request UpdateResourceRequest
       * @return UpdateResourceResponse
       */
      Models::UpdateResourceResponse updateResource(const Models::UpdateResourceRequest &request);

      /**
       * @summary Updates a row-level permission.
       *
       * @param tmpReq UpdateRowPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRowPermissionResponse
       */
      Models::UpdateRowPermissionResponse updateRowPermissionWithOptions(const Models::UpdateRowPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a row-level permission.
       *
       * @param request UpdateRowPermissionRequest
       * @return UpdateRowPermissionResponse
       */
      Models::UpdateRowPermissionResponse updateRowPermission(const Models::UpdateRowPermissionRequest &request);

      /**
       * @summary Updates a data classification.
       * Release version: v5.4.2.
       *
       * @param tmpReq UpdateSecurityClassifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecurityClassifyResponse
       */
      Models::UpdateSecurityClassifyResponse updateSecurityClassifyWithOptions(const Models::UpdateSecurityClassifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data classification.
       * Release version: v5.4.2.
       *
       * @param request UpdateSecurityClassifyRequest
       * @return UpdateSecurityClassifyResponse
       */
      Models::UpdateSecurityClassifyResponse updateSecurityClassify(const Models::UpdateSecurityClassifyRequest &request);

      /**
       * @summary Updates a data classification folder. Release version: v5.4.2.
       *
       * @param tmpReq UpdateSecurityClassifyCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecurityClassifyCatalogResponse
       */
      Models::UpdateSecurityClassifyCatalogResponse updateSecurityClassifyCatalogWithOptions(const Models::UpdateSecurityClassifyCatalogRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data classification folder. Release version: v5.4.2.
       *
       * @param request UpdateSecurityClassifyCatalogRequest
       * @return UpdateSecurityClassifyCatalogResponse
       */
      Models::UpdateSecurityClassifyCatalogResponse updateSecurityClassifyCatalog(const Models::UpdateSecurityClassifyCatalogRequest &request);

      /**
       * @summary Updates the effective status of security identification results.
       * Release version: v5.4.2.
       *
       * @param tmpReq UpdateSecurityIdentifyResultStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecurityIdentifyResultStatusResponse
       */
      Models::UpdateSecurityIdentifyResultStatusResponse updateSecurityIdentifyResultStatusWithOptions(const Models::UpdateSecurityIdentifyResultStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the effective status of security identification results.
       * Release version: v5.4.2.
       *
       * @param request UpdateSecurityIdentifyResultStatusRequest
       * @return UpdateSecurityIdentifyResultStatusResponse
       */
      Models::UpdateSecurityIdentifyResultStatusResponse updateSecurityIdentifyResultStatus(const Models::UpdateSecurityIdentifyResultStatusRequest &request);

      /**
       * @summary Updates data classification.
       * Online version: v5.4.2.
       *
       * @param tmpReq UpdateSecurityLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecurityLevelResponse
       */
      Models::UpdateSecurityLevelResponse updateSecurityLevelWithOptions(const Models::UpdateSecurityLevelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates data classification.
       * Online version: v5.4.2.
       *
       * @param request UpdateSecurityLevelRequest
       * @return UpdateSecurityLevelResponse
       */
      Models::UpdateSecurityLevelResponse updateSecurityLevel(const Models::UpdateSecurityLevelRequest &request);

      /**
       * @summary Updates a standard.
       * Release version: v5.4.2.
       *
       * @param tmpReq UpdateStandardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStandardResponse
       */
      Models::UpdateStandardResponse updateStandardWithOptions(const Models::UpdateStandardRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a standard.
       * Release version: v5.4.2.
       *
       * @param request UpdateStandardRequest
       * @return UpdateStandardResponse
       */
      Models::UpdateStandardResponse updateStandard(const Models::UpdateStandardRequest &request);

      /**
       * @summary Updates a data standard lookup table.
       * Release version: v5.4.2.
       *
       * @param tmpReq UpdateStandardLookupTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStandardLookupTableResponse
       */
      Models::UpdateStandardLookupTableResponse updateStandardLookupTableWithOptions(const Models::UpdateStandardLookupTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data standard lookup table.
       * Release version: v5.4.2.
       *
       * @param request UpdateStandardLookupTableRequest
       * @return UpdateStandardLookupTableResponse
       */
      Models::UpdateStandardLookupTableResponse updateStandardLookupTable(const Models::UpdateStandardLookupTableRequest &request);

      /**
       * @summary Sets the standard mapping relationship to invalid mapping.
       * Release version: v5.4.2.
       *
       * @param tmpReq UpdateStandardMappingToInvalidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStandardMappingToInvalidResponse
       */
      Models::UpdateStandardMappingToInvalidResponse updateStandardMappingToInvalidWithOptions(const Models::UpdateStandardMappingToInvalidRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the standard mapping relationship to invalid mapping.
       * Release version: v5.4.2.
       *
       * @param request UpdateStandardMappingToInvalidRequest
       * @return UpdateStandardMappingToInvalidResponse
       */
      Models::UpdateStandardMappingToInvalidResponse updateStandardMappingToInvalid(const Models::UpdateStandardMappingToInvalidRequest &request);

      /**
       * @summary Update standard set.
       * Release version: v5.4.2.
       *
       * @param tmpReq UpdateStandardSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStandardSetResponse
       */
      Models::UpdateStandardSetResponse updateStandardSetWithOptions(const Models::UpdateStandardSetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update standard set.
       * Release version: v5.4.2.
       *
       * @param request UpdateStandardSetRequest
       * @return UpdateStandardSetResponse
       */
      Models::UpdateStandardSetResponse updateStandardSet(const Models::UpdateStandardSetRequest &request);

      /**
       * @summary Updates a data standard template.
       * Release version: v5.4.2.
       *
       * @param tmpReq UpdateStandardTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStandardTemplateResponse
       */
      Models::UpdateStandardTemplateResponse updateStandardTemplateWithOptions(const Models::UpdateStandardTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data standard template.
       * Release version: v5.4.2.
       *
       * @param request UpdateStandardTemplateRequest
       * @return UpdateStandardTemplateResponse
       */
      Models::UpdateStandardTemplateResponse updateStandardTemplate(const Models::UpdateStandardTemplateRequest &request);

      /**
       * @summary Updates a data standard root word.
       * Online version: v5.4.2.
       *
       * @param tmpReq UpdateStandardWordRootRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStandardWordRootResponse
       */
      Models::UpdateStandardWordRootResponse updateStandardWordRootWithOptions(const Models::UpdateStandardWordRootRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data standard root word.
       * Online version: v5.4.2.
       *
       * @param request UpdateStandardWordRootRequest
       * @return UpdateStandardWordRootResponse
       */
      Models::UpdateStandardWordRootResponse updateStandardWordRoot(const Models::UpdateStandardWordRootRequest &request);

      /**
       * @summary Modifies the compute settings of a tenant.
       *
       * @param tmpReq UpdateTenantComputeEngineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTenantComputeEngineResponse
       */
      Models::UpdateTenantComputeEngineResponse updateTenantComputeEngineWithOptions(const Models::UpdateTenantComputeEngineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the compute settings of a tenant.
       *
       * @param request UpdateTenantComputeEngineRequest
       * @return UpdateTenantComputeEngineResponse
       */
      Models::UpdateTenantComputeEngineResponse updateTenantComputeEngine(const Models::UpdateTenantComputeEngineRequest &request);

      /**
       * @summary Edits tenant members.
       *
       * @param tmpReq UpdateTenantMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTenantMemberResponse
       */
      Models::UpdateTenantMemberResponse updateTenantMemberWithOptions(const Models::UpdateTenantMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits tenant members.
       *
       * @param request UpdateTenantMemberRequest
       * @return UpdateTenantMemberResponse
       */
      Models::UpdateTenantMemberResponse updateTenantMember(const Models::UpdateTenantMemberRequest &request);

      /**
       * @summary Edits a user-defined function.
       *
       * @param tmpReq UpdateUdfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUdfResponse
       */
      Models::UpdateUdfResponse updateUdfWithOptions(const Models::UpdateUdfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits a user-defined function.
       *
       * @param request UpdateUdfRequest
       * @return UpdateUdfResponse
       */
      Models::UpdateUdfResponse updateUdf(const Models::UpdateUdfRequest &request);

      /**
       * @summary Edits a user group.
       *
       * @param tmpReq UpdateUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserGroupResponse
       */
      Models::UpdateUserGroupResponse updateUserGroupWithOptions(const Models::UpdateUserGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits a user group.
       *
       * @param request UpdateUserGroupRequest
       * @return UpdateUserGroupResponse
       */
      Models::UpdateUserGroupResponse updateUserGroup(const Models::UpdateUserGroupRequest &request);

      /**
       * @summary Modifies the enabled status of a user group.
       *
       * @param request UpdateUserGroupSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserGroupSwitchResponse
       */
      Models::UpdateUserGroupSwitchResponse updateUserGroupSwitchWithOptions(const Models::UpdateUserGroupSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the enabled status of a user group.
       *
       * @param request UpdateUserGroupSwitchRequest
       * @return UpdateUserGroupSwitchResponse
       */
      Models::UpdateUserGroupSwitchResponse updateUserGroupSwitch(const Models::UpdateUserGroupSwitchRequest &request);

      /**
       * @summary Create or modify a quality rule.
       * Release version: v5.4.2.
       *
       * @param tmpReq UpsertQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertQualityRuleResponse
       */
      Models::UpsertQualityRuleResponse upsertQualityRuleWithOptions(const Models::UpsertQualityRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create or modify a quality rule.
       * Release version: v5.4.2.
       *
       * @param request UpsertQualityRuleRequest
       * @return UpsertQualityRuleResponse
       */
      Models::UpsertQualityRuleResponse upsertQualityRule(const Models::UpsertQualityRuleRequest &request);

      /**
       * @summary Creates or updates scheduling settings.
       * Release version: v5.4.2.
       *
       * @param tmpReq UpsertQualityScheduleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertQualityScheduleResponse
       */
      Models::UpsertQualityScheduleResponse upsertQualityScheduleWithOptions(const Models::UpsertQualityScheduleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates scheduling settings.
       * Release version: v5.4.2.
       *
       * @param request UpsertQualityScheduleRequest
       * @return UpsertQualityScheduleResponse
       */
      Models::UpsertQualityScheduleResponse upsertQualitySchedule(const Models::UpsertQualityScheduleRequest &request);

      /**
       * @summary Creates or updates a quality template.
       * Release version: v5.4.2.
       *
       * @param tmpReq UpsertQualityTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertQualityTemplateResponse
       */
      Models::UpsertQualityTemplateResponse upsertQualityTemplateWithOptions(const Models::UpsertQualityTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates a quality template.
       * Release version: v5.4.2.
       *
       * @param request UpsertQualityTemplateRequest
       * @return UpsertQualityTemplateResponse
       */
      Models::UpsertQualityTemplateResponse upsertQualityTemplate(const Models::UpsertQualityTemplateRequest &request);

      /**
       * @summary Creates or updates a quality monitored object. You can add multiple types of quality monitored objects, including Dataphin tables, global tables, data sources, metrics, and real-time meta tables.
       * Release version: v5.4.2.
       *
       * @param tmpReq UpsertQualityWatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertQualityWatchResponse
       */
      Models::UpsertQualityWatchResponse upsertQualityWatchWithOptions(const Models::UpsertQualityWatchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates a quality monitored object. You can add multiple types of quality monitored objects, including Dataphin tables, global tables, data sources, metrics, and real-time meta tables.
       * Release version: v5.4.2.
       *
       * @param request UpsertQualityWatchRequest
       * @return UpsertQualityWatchResponse
       */
      Models::UpsertQualityWatchResponse upsertQualityWatch(const Models::UpsertQualityWatchRequest &request);

      /**
       * @summary Creates or updates alert settings for a monitored object.
       * Release version: v5.4.2.
       *
       * @param tmpReq UpsertQualityWatchAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertQualityWatchAlertResponse
       */
      Models::UpsertQualityWatchAlertResponse upsertQualityWatchAlertWithOptions(const Models::UpsertQualityWatchAlertRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates alert settings for a monitored object.
       * Release version: v5.4.2.
       *
       * @param request UpsertQualityWatchAlertRequest
       * @return UpsertQualityWatchAlertResponse
       */
      Models::UpsertQualityWatchAlertResponse upsertQualityWatchAlert(const Models::UpsertQualityWatchAlertRequest &request);
  };
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
