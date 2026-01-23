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
       * @summary 添加数据服务项目用户并设置角色。
       *
       * @param tmpReq AddDataServiceProjectMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDataServiceProjectMemberResponse
       */
      Models::AddDataServiceProjectMemberResponse addDataServiceProjectMemberWithOptions(const Models::AddDataServiceProjectMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加数据服务项目用户并设置角色。
       *
       * @param request AddDataServiceProjectMemberRequest
       * @return AddDataServiceProjectMemberResponse
       */
      Models::AddDataServiceProjectMemberResponse addDataServiceProjectMember(const Models::AddDataServiceProjectMemberRequest &request);

      /**
       * @summary 增加项目成员。
       *
       * @param tmpReq AddProjectMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddProjectMemberResponse
       */
      Models::AddProjectMemberResponse addProjectMemberWithOptions(const Models::AddProjectMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 增加项目成员。
       *
       * @param request AddProjectMemberRequest
       * @return AddProjectMemberResponse
       */
      Models::AddProjectMemberResponse addProjectMember(const Models::AddProjectMemberRequest &request);

      /**
       * @summary 新增注册血缘。
       *
       * @param tmpReq AddRegisterLineageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRegisterLineageResponse
       */
      Models::AddRegisterLineageResponse addRegisterLineageWithOptions(const Models::AddRegisterLineageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增注册血缘。
       *
       * @param request AddRegisterLineageRequest
       * @return AddRegisterLineageResponse
       */
      Models::AddRegisterLineageResponse addRegisterLineage(const Models::AddRegisterLineageRequest &request);

      /**
       * @summary 新增租户成员
       *
       * @param tmpReq AddTenantMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTenantMembersResponse
       */
      Models::AddTenantMembersResponse addTenantMembersWithOptions(const Models::AddTenantMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增租户成员
       *
       * @param request AddTenantMembersRequest
       * @return AddTenantMembersResponse
       */
      Models::AddTenantMembersResponse addTenantMembers(const Models::AddTenantMembersRequest &request);

      /**
       * @summary 通过原始用户添加租户成员.
       *
       * @param tmpReq AddTenantMembersBySourceUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTenantMembersBySourceUserResponse
       */
      Models::AddTenantMembersBySourceUserResponse addTenantMembersBySourceUserWithOptions(const Models::AddTenantMembersBySourceUserRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过原始用户添加租户成员.
       *
       * @param request AddTenantMembersBySourceUserRequest
       * @return AddTenantMembersBySourceUserResponse
       */
      Models::AddTenantMembersBySourceUserResponse addTenantMembersBySourceUser(const Models::AddTenantMembersBySourceUserRequest &request);

      /**
       * @summary 添加用户组成员.
       *
       * @param tmpReq AddUserGroupMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserGroupMemberResponse
       */
      Models::AddUserGroupMemberResponse addUserGroupMemberWithOptions(const Models::AddUserGroupMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加用户组成员.
       *
       * @param request AddUserGroupMemberRequest
       * @return AddUserGroupMemberResponse
       */
      Models::AddUserGroupMemberResponse addUserGroupMember(const Models::AddUserGroupMemberRequest &request);

      /**
       * @summary 申请API权限。
       *
       * @param tmpReq ApplyDataServiceApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyDataServiceApiResponse
       */
      Models::ApplyDataServiceApiResponse applyDataServiceApiWithOptions(const Models::ApplyDataServiceApiRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请API权限。
       *
       * @param request ApplyDataServiceApiRequest
       * @return ApplyDataServiceApiResponse
       */
      Models::ApplyDataServiceApiResponse applyDataServiceApi(const Models::ApplyDataServiceApiRequest &request);

      /**
       * @summary 申请应用权限。
       *
       * @param tmpReq ApplyDataServiceAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyDataServiceAppResponse
       */
      Models::ApplyDataServiceAppResponse applyDataServiceAppWithOptions(const Models::ApplyDataServiceAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请应用权限。
       *
       * @param request ApplyDataServiceAppRequest
       * @return ApplyDataServiceAppResponse
       */
      Models::ApplyDataServiceAppResponse applyDataServiceApp(const Models::ApplyDataServiceAppRequest &request);

      /**
       * @summary 指定质量规则和调度设置进行绑定。
       *
       * @param tmpReq AssignQualityRuleOfAllRuleScopeSchedulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignQualityRuleOfAllRuleScopeSchedulesResponse
       */
      Models::AssignQualityRuleOfAllRuleScopeSchedulesResponse assignQualityRuleOfAllRuleScopeSchedulesWithOptions(const Models::AssignQualityRuleOfAllRuleScopeSchedulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指定质量规则和调度设置进行绑定。
       *
       * @param request AssignQualityRuleOfAllRuleScopeSchedulesRequest
       * @return AssignQualityRuleOfAllRuleScopeSchedulesResponse
       */
      Models::AssignQualityRuleOfAllRuleScopeSchedulesResponse assignQualityRuleOfAllRuleScopeSchedules(const Models::AssignQualityRuleOfAllRuleScopeSchedulesRequest &request);

      /**
       * @summary 项目计算源连通性检查。
       *
       * @param tmpReq CheckComputeSourceConnectivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckComputeSourceConnectivityResponse
       */
      Models::CheckComputeSourceConnectivityResponse checkComputeSourceConnectivityWithOptions(const Models::CheckComputeSourceConnectivityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 项目计算源连通性检查。
       *
       * @param request CheckComputeSourceConnectivityRequest
       * @return CheckComputeSourceConnectivityResponse
       */
      Models::CheckComputeSourceConnectivityResponse checkComputeSourceConnectivity(const Models::CheckComputeSourceConnectivityRequest &request);

      /**
       * @summary 计算源连通性检查。
       *
       * @param request CheckComputeSourceConnectivityByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckComputeSourceConnectivityByIdResponse
       */
      Models::CheckComputeSourceConnectivityByIdResponse checkComputeSourceConnectivityByIdWithOptions(const Models::CheckComputeSourceConnectivityByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 计算源连通性检查。
       *
       * @param request CheckComputeSourceConnectivityByIdRequest
       * @return CheckComputeSourceConnectivityByIdResponse
       */
      Models::CheckComputeSourceConnectivityByIdResponse checkComputeSourceConnectivityById(const Models::CheckComputeSourceConnectivityByIdRequest &request);

      /**
       * @summary 检查数据源连通性
       *
       * @param tmpReq CheckDataSourceConnectivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDataSourceConnectivityResponse
       */
      Models::CheckDataSourceConnectivityResponse checkDataSourceConnectivityWithOptions(const Models::CheckDataSourceConnectivityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查数据源连通性
       *
       * @param request CheckDataSourceConnectivityRequest
       * @return CheckDataSourceConnectivityResponse
       */
      Models::CheckDataSourceConnectivityResponse checkDataSourceConnectivity(const Models::CheckDataSourceConnectivityRequest &request);

      /**
       * @summary 检查已创建的数据源是否正常连通
       *
       * @param request CheckDataSourceConnectivityByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDataSourceConnectivityByIdResponse
       */
      Models::CheckDataSourceConnectivityByIdResponse checkDataSourceConnectivityByIdWithOptions(const Models::CheckDataSourceConnectivityByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查已创建的数据源是否正常连通
       *
       * @param request CheckDataSourceConnectivityByIdRequest
       * @return CheckDataSourceConnectivityByIdResponse
       */
      Models::CheckDataSourceConnectivityByIdResponse checkDataSourceConnectivityById(const Models::CheckDataSourceConnectivityByIdRequest &request);

      /**
       * @summary 检查项目是否存在依赖。
       *
       * @param request CheckProjectHasDependencyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckProjectHasDependencyResponse
       */
      Models::CheckProjectHasDependencyResponse checkProjectHasDependencyWithOptions(const Models::CheckProjectHasDependencyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查项目是否存在依赖。
       *
       * @param request CheckProjectHasDependencyRequest
       * @return CheckProjectHasDependencyResponse
       */
      Models::CheckProjectHasDependencyResponse checkProjectHasDependency(const Models::CheckProjectHasDependencyRequest &request);

      /**
       * @summary 校验用户是否有指定资源权限点.
       *
       * @param tmpReq CheckResourcePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckResourcePermissionResponse
       */
      Models::CheckResourcePermissionResponse checkResourcePermissionWithOptions(const Models::CheckResourcePermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验用户是否有指定资源权限点.
       *
       * @param request CheckResourcePermissionRequest
       * @return CheckResourcePermissionResponse
       */
      Models::CheckResourcePermissionResponse checkResourcePermission(const Models::CheckResourcePermissionRequest &request);

      /**
       * @summary 创建即席查询文件
       *
       * @param tmpReq CreateAdHocFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAdHocFileResponse
       */
      Models::CreateAdHocFileResponse createAdHocFileWithOptions(const Models::CreateAdHocFileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建即席查询文件
       *
       * @param request CreateAdHocFileRequest
       * @return CreateAdHocFileResponse
       */
      Models::CreateAdHocFileResponse createAdHocFile(const Models::CreateAdHocFileRequest &request);

      /**
       * @summary 创建离线计算任务。
       *
       * @param tmpReq CreateBatchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBatchTaskResponse
       */
      Models::CreateBatchTaskResponse createBatchTaskWithOptions(const Models::CreateBatchTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建离线计算任务。
       *
       * @param request CreateBatchTaskRequest
       * @return CreateBatchTaskResponse
       */
      Models::CreateBatchTaskResponse createBatchTask(const Models::CreateBatchTaskRequest &request);

      /**
       * @summary 创建业务实体。
       *
       * @param tmpReq CreateBizEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBizEntityResponse
       */
      Models::CreateBizEntityResponse createBizEntityWithOptions(const Models::CreateBizEntityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建业务实体。
       *
       * @param request CreateBizEntityRequest
       * @return CreateBizEntityResponse
       */
      Models::CreateBizEntityResponse createBizEntity(const Models::CreateBizEntityRequest &request);

      /**
       * @summary 新建业务指标
       *
       * @param tmpReq CreateBizMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBizMetricResponse
       */
      Models::CreateBizMetricResponse createBizMetricWithOptions(const Models::CreateBizMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建业务指标
       *
       * @param request CreateBizMetricRequest
       * @return CreateBizMetricResponse
       */
      Models::CreateBizMetricResponse createBizMetric(const Models::CreateBizMetricRequest &request);

      /**
       * @summary 创建数据板块。
       *
       * @param tmpReq CreateBizUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBizUnitResponse
       */
      Models::CreateBizUnitResponse createBizUnitWithOptions(const Models::CreateBizUnitRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据板块。
       *
       * @param request CreateBizUnitRequest
       * @return CreateBizUnitResponse
       */
      Models::CreateBizUnitResponse createBizUnit(const Models::CreateBizUnitRequest &request);

      /**
       * @summary 创建计算源。
       *
       * @param tmpReq CreateComputeSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComputeSourceResponse
       */
      Models::CreateComputeSourceResponse createComputeSourceWithOptions(const Models::CreateComputeSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建计算源。
       *
       * @param request CreateComputeSourceRequest
       * @return CreateComputeSourceResponse
       */
      Models::CreateComputeSourceResponse createComputeSource(const Models::CreateComputeSourceRequest &request);

      /**
       * @summary 创建主题域。
       *
       * @param tmpReq CreateDataDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataDomainResponse
       */
      Models::CreateDataDomainResponse createDataDomainWithOptions(const Models::CreateDataDomainRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建主题域。
       *
       * @param request CreateDataDomainRequest
       * @return CreateDataDomainResponse
       */
      Models::CreateDataDomainResponse createDataDomain(const Models::CreateDataDomainRequest &request);

      /**
       * @summary 创建新的数据服务API并提交。
       *
       * @param tmpReq CreateDataServiceApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataServiceApiResponse
       */
      Models::CreateDataServiceApiResponse createDataServiceApiWithOptions(const Models::CreateDataServiceApiRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建新的数据服务API并提交。
       *
       * @param request CreateDataServiceApiRequest
       * @return CreateDataServiceApiResponse
       */
      Models::CreateDataServiceApiResponse createDataServiceApi(const Models::CreateDataServiceApiRequest &request);

      /**
       * @summary 新建数据源
       *
       * @param tmpReq CreateDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataSourceResponse
       */
      Models::CreateDataSourceResponse createDataSourceWithOptions(const Models::CreateDataSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建数据源
       *
       * @param request CreateDataSourceRequest
       * @return CreateDataSourceResponse
       */
      Models::CreateDataSourceResponse createDataSource(const Models::CreateDataSourceRequest &request);

      /**
       * @summary 创建菜单树文件目录
       *
       * @param tmpReq CreateDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDirectoryResponse
       */
      Models::CreateDirectoryResponse createDirectoryWithOptions(const Models::CreateDirectoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建菜单树文件目录
       *
       * @param request CreateDirectoryRequest
       * @return CreateDirectoryResponse
       */
      Models::CreateDirectoryResponse createDirectory(const Models::CreateDirectoryRequest &request);

      /**
       * @summary 通用补数据接口 1.会生成补数据实例运行：影响相关产产出表数据 2.会进行任务运行：造成计算的费用以及存储的费用
       *
       * @param tmpReq CreateNodeSupplementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNodeSupplementResponse
       */
      Models::CreateNodeSupplementResponse createNodeSupplementWithOptions(const Models::CreateNodeSupplementRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通用补数据接口 1.会生成补数据实例运行：影响相关产产出表数据 2.会进行任务运行：造成计算的费用以及存储的费用
       *
       * @param request CreateNodeSupplementRequest
       * @return CreateNodeSupplementResponse
       */
      Models::CreateNodeSupplementResponse createNodeSupplement(const Models::CreateNodeSupplementRequest &request);

      /**
       * @summary 创建集成管道任务。
       *
       * @param tmpReq CreatePipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePipelineResponse
       */
      Models::CreatePipelineResponse createPipelineWithOptions(const Models::CreatePipelineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建集成管道任务。
       *
       * @param request CreatePipelineRequest
       * @return CreatePipelineResponse
       */
      Models::CreatePipelineResponse createPipeline(const Models::CreatePipelineRequest &request);

      /**
       * @summary 异步创建集成管道任务。
       *
       * @param tmpReq CreatePipelineByAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePipelineByAsyncResponse
       */
      Models::CreatePipelineByAsyncResponse createPipelineByAsyncWithOptions(const Models::CreatePipelineByAsyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 异步创建集成管道任务。
       *
       * @param request CreatePipelineByAsyncRequest
       * @return CreatePipelineByAsyncResponse
       */
      Models::CreatePipelineByAsyncResponse createPipelineByAsync(const Models::CreatePipelineByAsyncRequest &request);

      /**
       * @summary 创建数据集成任务。
       *
       * @param tmpReq CreatePipelineNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePipelineNodeResponse
       */
      Models::CreatePipelineNodeResponse createPipelineNodeWithOptions(const Models::CreatePipelineNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据集成任务。
       *
       * @param request CreatePipelineNodeRequest
       * @return CreatePipelineNodeResponse
       */
      Models::CreatePipelineNodeResponse createPipelineNode(const Models::CreatePipelineNodeRequest &request);

      /**
       * @summary 创建资源文件。
       *
       * @param tmpReq CreateResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceResponse
       */
      Models::CreateResourceResponse createResourceWithOptions(const Models::CreateResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建资源文件。
       *
       * @param request CreateResourceRequest
       * @return CreateResourceResponse
       */
      Models::CreateResourceResponse createResource(const Models::CreateResourceRequest &request);

      /**
       * @summary 创建行级权限
       *
       * @param tmpReq CreateRowPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRowPermissionResponse
       */
      Models::CreateRowPermissionResponse createRowPermissionWithOptions(const Models::CreateRowPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建行级权限
       *
       * @param request CreateRowPermissionRequest
       * @return CreateRowPermissionResponse
       */
      Models::CreateRowPermissionResponse createRowPermission(const Models::CreateRowPermissionRequest &request);

      /**
       * @summary 新建数据分类。
       *
       * @param tmpReq CreateSecurityClassifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityClassifyResponse
       */
      Models::CreateSecurityClassifyResponse createSecurityClassifyWithOptions(const Models::CreateSecurityClassifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建数据分类。
       *
       * @param request CreateSecurityClassifyRequest
       * @return CreateSecurityClassifyResponse
       */
      Models::CreateSecurityClassifyResponse createSecurityClassify(const Models::CreateSecurityClassifyRequest &request);

      /**
       * @summary 新建数据分类目录。
       *
       * @param tmpReq CreateSecurityClassifyCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityClassifyCatalogResponse
       */
      Models::CreateSecurityClassifyCatalogResponse createSecurityClassifyCatalogWithOptions(const Models::CreateSecurityClassifyCatalogRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建数据分类目录。
       *
       * @param request CreateSecurityClassifyCatalogRequest
       * @return CreateSecurityClassifyCatalogResponse
       */
      Models::CreateSecurityClassifyCatalogResponse createSecurityClassifyCatalog(const Models::CreateSecurityClassifyCatalogRequest &request);

      /**
       * @summary 新建安全识别结果。
       *
       * @param tmpReq CreateSecurityIdentifyResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityIdentifyResultResponse
       */
      Models::CreateSecurityIdentifyResultResponse createSecurityIdentifyResultWithOptions(const Models::CreateSecurityIdentifyResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建安全识别结果。
       *
       * @param request CreateSecurityIdentifyResultRequest
       * @return CreateSecurityIdentifyResultResponse
       */
      Models::CreateSecurityIdentifyResultResponse createSecurityIdentifyResult(const Models::CreateSecurityIdentifyResultRequest &request);

      /**
       * @summary 新建数据分级。
       *
       * @param tmpReq CreateSecurityLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityLevelResponse
       */
      Models::CreateSecurityLevelResponse createSecurityLevelWithOptions(const Models::CreateSecurityLevelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建数据分级。
       *
       * @param request CreateSecurityLevelRequest
       * @return CreateSecurityLevelResponse
       */
      Models::CreateSecurityLevelResponse createSecurityLevel(const Models::CreateSecurityLevelRequest &request);

      /**
       * @summary 创建标准。
       *
       * @param tmpReq CreateStandardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStandardResponse
       */
      Models::CreateStandardResponse createStandardWithOptions(const Models::CreateStandardRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建标准。
       *
       * @param request CreateStandardRequest
       * @return CreateStandardResponse
       */
      Models::CreateStandardResponse createStandard(const Models::CreateStandardRequest &request);

      /**
       * @summary 创建数据标准码表。
       *
       * @param tmpReq CreateStandardLookupTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStandardLookupTableResponse
       */
      Models::CreateStandardLookupTableResponse createStandardLookupTableWithOptions(const Models::CreateStandardLookupTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据标准码表。
       *
       * @param request CreateStandardLookupTableRequest
       * @return CreateStandardLookupTableResponse
       */
      Models::CreateStandardLookupTableResponse createStandardLookupTable(const Models::CreateStandardLookupTableRequest &request);

      /**
       * @summary 创建标准映射关系, 包括有效映射和无效映射。
       *
       * @param tmpReq CreateStandardMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStandardMappingResponse
       */
      Models::CreateStandardMappingResponse createStandardMappingWithOptions(const Models::CreateStandardMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建标准映射关系, 包括有效映射和无效映射。
       *
       * @param request CreateStandardMappingRequest
       * @return CreateStandardMappingResponse
       */
      Models::CreateStandardMappingResponse createStandardMapping(const Models::CreateStandardMappingRequest &request);

      /**
       * @summary 创建标准关联关系。
       *
       * @param tmpReq CreateStandardRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStandardRelationsResponse
       */
      Models::CreateStandardRelationsResponse createStandardRelationsWithOptions(const Models::CreateStandardRelationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建标准关联关系。
       *
       * @param request CreateStandardRelationsRequest
       * @return CreateStandardRelationsResponse
       */
      Models::CreateStandardRelationsResponse createStandardRelations(const Models::CreateStandardRelationsRequest &request);

      /**
       * @summary 创建标准集。
       *
       * @param tmpReq CreateStandardSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStandardSetResponse
       */
      Models::CreateStandardSetResponse createStandardSetWithOptions(const Models::CreateStandardSetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建标准集。
       *
       * @param request CreateStandardSetRequest
       * @return CreateStandardSetResponse
       */
      Models::CreateStandardSetResponse createStandardSet(const Models::CreateStandardSetRequest &request);

      /**
       * @summary 创建数据标准模板。
       *
       * @param tmpReq CreateStandardTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStandardTemplateResponse
       */
      Models::CreateStandardTemplateResponse createStandardTemplateWithOptions(const Models::CreateStandardTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据标准模板。
       *
       * @param request CreateStandardTemplateRequest
       * @return CreateStandardTemplateResponse
       */
      Models::CreateStandardTemplateResponse createStandardTemplate(const Models::CreateStandardTemplateRequest &request);

      /**
       * @summary 创建数据标准词根。
       *
       * @param tmpReq CreateStandardWordRootRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStandardWordRootResponse
       */
      Models::CreateStandardWordRootResponse createStandardWordRootWithOptions(const Models::CreateStandardWordRootRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据标准词根。
       *
       * @param request CreateStandardWordRootRequest
       * @return CreateStandardWordRootResponse
       */
      Models::CreateStandardWordRootResponse createStandardWordRoot(const Models::CreateStandardWordRootRequest &request);

      /**
       * @summary 创建流批一体任务
       *
       * @param tmpReq CreateStreamBatchJobMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStreamBatchJobMappingResponse
       */
      Models::CreateStreamBatchJobMappingResponse createStreamBatchJobMappingWithOptions(const Models::CreateStreamBatchJobMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建流批一体任务
       *
       * @param request CreateStreamBatchJobMappingRequest
       * @return CreateStreamBatchJobMappingResponse
       */
      Models::CreateStreamBatchJobMappingResponse createStreamBatchJobMapping(const Models::CreateStreamBatchJobMappingRequest &request);

      /**
       * @summary 创建自定义函数。
       *
       * @param tmpReq CreateUdfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUdfResponse
       */
      Models::CreateUdfResponse createUdfWithOptions(const Models::CreateUdfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建自定义函数。
       *
       * @param request CreateUdfRequest
       * @return CreateUdfResponse
       */
      Models::CreateUdfResponse createUdf(const Models::CreateUdfRequest &request);

      /**
       * @summary 新建用户组.
       *
       * @param tmpReq CreateUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserGroupResponse
       */
      Models::CreateUserGroupResponse createUserGroupWithOptions(const Models::CreateUserGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建用户组.
       *
       * @param request CreateUserGroupRequest
       * @return CreateUserGroupResponse
       */
      Models::CreateUserGroupResponse createUserGroup(const Models::CreateUserGroupRequest &request);

      /**
       * @summary 删除菜单树即席查询文件
       *
       * @param request DeleteAdHocFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAdHocFileResponse
       */
      Models::DeleteAdHocFileResponse deleteAdHocFileWithOptions(const Models::DeleteAdHocFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除菜单树即席查询文件
       *
       * @param request DeleteAdHocFileRequest
       * @return DeleteAdHocFileResponse
       */
      Models::DeleteAdHocFileResponse deleteAdHocFile(const Models::DeleteAdHocFileRequest &request);

      /**
       * @summary 删除离线计算任务，如果任务还没下线需要先下线再删除。
       *
       * @param tmpReq DeleteBatchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBatchTaskResponse
       */
      Models::DeleteBatchTaskResponse deleteBatchTaskWithOptions(const Models::DeleteBatchTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除离线计算任务，如果任务还没下线需要先下线再删除。
       *
       * @param request DeleteBatchTaskRequest
       * @return DeleteBatchTaskResponse
       */
      Models::DeleteBatchTaskResponse deleteBatchTask(const Models::DeleteBatchTaskRequest &request);

      /**
       * @summary 删除业务实体。
       *
       * @param request DeleteBizEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBizEntityResponse
       */
      Models::DeleteBizEntityResponse deleteBizEntityWithOptions(const Models::DeleteBizEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除业务实体。
       *
       * @param request DeleteBizEntityRequest
       * @return DeleteBizEntityResponse
       */
      Models::DeleteBizEntityResponse deleteBizEntity(const Models::DeleteBizEntityRequest &request);

      /**
       * @summary 删除业务指标
       *
       * @param tmpReq DeleteBizMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBizMetricResponse
       */
      Models::DeleteBizMetricResponse deleteBizMetricWithOptions(const Models::DeleteBizMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除业务指标
       *
       * @param request DeleteBizMetricRequest
       * @return DeleteBizMetricResponse
       */
      Models::DeleteBizMetricResponse deleteBizMetric(const Models::DeleteBizMetricRequest &request);

      /**
       * @summary 删除数据板块。
       *
       * @param request DeleteBizUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBizUnitResponse
       */
      Models::DeleteBizUnitResponse deleteBizUnitWithOptions(const Models::DeleteBizUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据板块。
       *
       * @param request DeleteBizUnitRequest
       * @return DeleteBizUnitResponse
       */
      Models::DeleteBizUnitResponse deleteBizUnit(const Models::DeleteBizUnitRequest &request);

      /**
       * @summary 删除计算源。
       *
       * @param request DeleteComputeSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComputeSourceResponse
       */
      Models::DeleteComputeSourceResponse deleteComputeSourceWithOptions(const Models::DeleteComputeSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除计算源。
       *
       * @param request DeleteComputeSourceRequest
       * @return DeleteComputeSourceResponse
       */
      Models::DeleteComputeSourceResponse deleteComputeSource(const Models::DeleteComputeSourceRequest &request);

      /**
       * @summary 删除主题域。
       *
       * @param request DeleteDataDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataDomainResponse
       */
      Models::DeleteDataDomainResponse deleteDataDomainWithOptions(const Models::DeleteDataDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除主题域。
       *
       * @param request DeleteDataDomainRequest
       * @return DeleteDataDomainResponse
       */
      Models::DeleteDataDomainResponse deleteDataDomain(const Models::DeleteDataDomainRequest &request);

      /**
       * @summary 删除数据源
       *
       * @param tmpReq DeleteDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSourceWithOptions(const Models::DeleteDataSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据源
       *
       * @param request DeleteDataSourceRequest
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSource(const Models::DeleteDataSourceRequest &request);

      /**
       * @summary 删除菜单树文件目录
       *
       * @param request DeleteDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDirectoryResponse
       */
      Models::DeleteDirectoryResponse deleteDirectoryWithOptions(const Models::DeleteDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除菜单树文件目录
       *
       * @param request DeleteDirectoryRequest
       * @return DeleteDirectoryResponse
       */
      Models::DeleteDirectoryResponse deleteDirectory(const Models::DeleteDirectoryRequest &request);

      /**
       * @summary 批量删除质量规则对象。
       *
       * @param tmpReq DeleteQualityRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQualityRulesResponse
       */
      Models::DeleteQualityRulesResponse deleteQualityRulesWithOptions(const Models::DeleteQualityRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除质量规则对象。
       *
       * @param request DeleteQualityRulesRequest
       * @return DeleteQualityRulesResponse
       */
      Models::DeleteQualityRulesResponse deleteQualityRules(const Models::DeleteQualityRulesRequest &request);

      /**
       * @summary 批量删除质量调度对象。
       *
       * @param tmpReq DeleteQualitySchedulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQualitySchedulesResponse
       */
      Models::DeleteQualitySchedulesResponse deleteQualitySchedulesWithOptions(const Models::DeleteQualitySchedulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除质量调度对象。
       *
       * @param request DeleteQualitySchedulesRequest
       * @return DeleteQualitySchedulesResponse
       */
      Models::DeleteQualitySchedulesResponse deleteQualitySchedules(const Models::DeleteQualitySchedulesRequest &request);

      /**
       * @summary 批量删除质量模板对象。
       *
       * @param tmpReq DeleteQualityTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQualityTemplatesResponse
       */
      Models::DeleteQualityTemplatesResponse deleteQualityTemplatesWithOptions(const Models::DeleteQualityTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除质量模板对象。
       *
       * @param request DeleteQualityTemplatesRequest
       * @return DeleteQualityTemplatesResponse
       */
      Models::DeleteQualityTemplatesResponse deleteQualityTemplates(const Models::DeleteQualityTemplatesRequest &request);

      /**
       * @summary 批量删除质量监控对象。
       *
       * @param tmpReq DeleteQualityWatchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQualityWatchesResponse
       */
      Models::DeleteQualityWatchesResponse deleteQualityWatchesWithOptions(const Models::DeleteQualityWatchesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除质量监控对象。
       *
       * @param request DeleteQualityWatchesRequest
       * @return DeleteQualityWatchesResponse
       */
      Models::DeleteQualityWatchesResponse deleteQualityWatches(const Models::DeleteQualityWatchesRequest &request);

      /**
       * @summary 删除注册血缘。
       *
       * @param tmpReq DeleteRegisterLineageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRegisterLineageResponse
       */
      Models::DeleteRegisterLineageResponse deleteRegisterLineageWithOptions(const Models::DeleteRegisterLineageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除注册血缘。
       *
       * @param request DeleteRegisterLineageRequest
       * @return DeleteRegisterLineageResponse
       */
      Models::DeleteRegisterLineageResponse deleteRegisterLineage(const Models::DeleteRegisterLineageRequest &request);

      /**
       * @summary 删除资源文件。
       *
       * @param request DeleteResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceResponse
       */
      Models::DeleteResourceResponse deleteResourceWithOptions(const Models::DeleteResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除资源文件。
       *
       * @param request DeleteResourceRequest
       * @return DeleteResourceResponse
       */
      Models::DeleteResourceResponse deleteResource(const Models::DeleteResourceRequest &request);

      /**
       * @summary 删除行级权限
       *
       * @param tmpReq DeleteRowPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRowPermissionResponse
       */
      Models::DeleteRowPermissionResponse deleteRowPermissionWithOptions(const Models::DeleteRowPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除行级权限
       *
       * @param request DeleteRowPermissionRequest
       * @return DeleteRowPermissionResponse
       */
      Models::DeleteRowPermissionResponse deleteRowPermission(const Models::DeleteRowPermissionRequest &request);

      /**
       * @summary 删除数据分类。
       *
       * @param tmpReq DeleteSecurityClassifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityClassifyResponse
       */
      Models::DeleteSecurityClassifyResponse deleteSecurityClassifyWithOptions(const Models::DeleteSecurityClassifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据分类。
       *
       * @param request DeleteSecurityClassifyRequest
       * @return DeleteSecurityClassifyResponse
       */
      Models::DeleteSecurityClassifyResponse deleteSecurityClassify(const Models::DeleteSecurityClassifyRequest &request);

      /**
       * @summary 删除数据分类目录。
       *
       * @param tmpReq DeleteSecurityClassifyCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityClassifyCatalogResponse
       */
      Models::DeleteSecurityClassifyCatalogResponse deleteSecurityClassifyCatalogWithOptions(const Models::DeleteSecurityClassifyCatalogRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据分类目录。
       *
       * @param request DeleteSecurityClassifyCatalogRequest
       * @return DeleteSecurityClassifyCatalogResponse
       */
      Models::DeleteSecurityClassifyCatalogResponse deleteSecurityClassifyCatalog(const Models::DeleteSecurityClassifyCatalogRequest &request);

      /**
       * @summary 批量删除安全识别结果。
       *
       * @param tmpReq DeleteSecurityIdentifyResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityIdentifyResultsResponse
       */
      Models::DeleteSecurityIdentifyResultsResponse deleteSecurityIdentifyResultsWithOptions(const Models::DeleteSecurityIdentifyResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除安全识别结果。
       *
       * @param request DeleteSecurityIdentifyResultsRequest
       * @return DeleteSecurityIdentifyResultsResponse
       */
      Models::DeleteSecurityIdentifyResultsResponse deleteSecurityIdentifyResults(const Models::DeleteSecurityIdentifyResultsRequest &request);

      /**
       * @summary 删除数据分级。
       *
       * @param tmpReq DeleteSecurityLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityLevelResponse
       */
      Models::DeleteSecurityLevelResponse deleteSecurityLevelWithOptions(const Models::DeleteSecurityLevelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据分级。
       *
       * @param request DeleteSecurityLevelRequest
       * @return DeleteSecurityLevelResponse
       */
      Models::DeleteSecurityLevelResponse deleteSecurityLevel(const Models::DeleteSecurityLevelRequest &request);

      /**
       * @summary 删除标准。
       *
       * @param tmpReq DeleteStandardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStandardResponse
       */
      Models::DeleteStandardResponse deleteStandardWithOptions(const Models::DeleteStandardRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除标准。
       *
       * @param request DeleteStandardRequest
       * @return DeleteStandardResponse
       */
      Models::DeleteStandardResponse deleteStandard(const Models::DeleteStandardRequest &request);

      /**
       * @summary 删除无效映射关系。
       *
       * @param tmpReq DeleteStandardInValidMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStandardInValidMappingResponse
       */
      Models::DeleteStandardInValidMappingResponse deleteStandardInValidMappingWithOptions(const Models::DeleteStandardInValidMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除无效映射关系。
       *
       * @param request DeleteStandardInValidMappingRequest
       * @return DeleteStandardInValidMappingResponse
       */
      Models::DeleteStandardInValidMappingResponse deleteStandardInValidMapping(const Models::DeleteStandardInValidMappingRequest &request);

      /**
       * @summary 删除数据标准码表。
       *
       * @param request DeleteStandardLookupTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStandardLookupTableResponse
       */
      Models::DeleteStandardLookupTableResponse deleteStandardLookupTableWithOptions(const Models::DeleteStandardLookupTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据标准码表。
       *
       * @param request DeleteStandardLookupTableRequest
       * @return DeleteStandardLookupTableResponse
       */
      Models::DeleteStandardLookupTableResponse deleteStandardLookupTable(const Models::DeleteStandardLookupTableRequest &request);

      /**
       * @summary 批量删除标准关联关系。
       *
       * @param tmpReq DeleteStandardRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStandardRelationsResponse
       */
      Models::DeleteStandardRelationsResponse deleteStandardRelationsWithOptions(const Models::DeleteStandardRelationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除标准关联关系。
       *
       * @param request DeleteStandardRelationsRequest
       * @return DeleteStandardRelationsResponse
       */
      Models::DeleteStandardRelationsResponse deleteStandardRelations(const Models::DeleteStandardRelationsRequest &request);

      /**
       * @summary 删除标准集。
       *
       * @param request DeleteStandardSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStandardSetResponse
       */
      Models::DeleteStandardSetResponse deleteStandardSetWithOptions(const Models::DeleteStandardSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除标准集。
       *
       * @param request DeleteStandardSetRequest
       * @return DeleteStandardSetResponse
       */
      Models::DeleteStandardSetResponse deleteStandardSet(const Models::DeleteStandardSetRequest &request);

      /**
       * @summary 删除有效映射关系。
       *
       * @param tmpReq DeleteStandardValidMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStandardValidMappingResponse
       */
      Models::DeleteStandardValidMappingResponse deleteStandardValidMappingWithOptions(const Models::DeleteStandardValidMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除有效映射关系。
       *
       * @param request DeleteStandardValidMappingRequest
       * @return DeleteStandardValidMappingResponse
       */
      Models::DeleteStandardValidMappingResponse deleteStandardValidMapping(const Models::DeleteStandardValidMappingRequest &request);

      /**
       * @summary 删除数据标准词根。
       *
       * @param request DeleteStandardWordRootRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStandardWordRootResponse
       */
      Models::DeleteStandardWordRootResponse deleteStandardWordRootWithOptions(const Models::DeleteStandardWordRootRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据标准词根。
       *
       * @param request DeleteStandardWordRootRequest
       * @return DeleteStandardWordRootResponse
       */
      Models::DeleteStandardWordRootResponse deleteStandardWordRoot(const Models::DeleteStandardWordRootRequest &request);

      /**
       * @summary 删除自定义函数。
       *
       * @param request DeleteUdfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUdfResponse
       */
      Models::DeleteUdfResponse deleteUdfWithOptions(const Models::DeleteUdfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除自定义函数。
       *
       * @param request DeleteUdfRequest
       * @return DeleteUdfResponse
       */
      Models::DeleteUdfResponse deleteUdf(const Models::DeleteUdfRequest &request);

      /**
       * @summary 删除用户组.
       *
       * @param request DeleteUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserGroupResponse
       */
      Models::DeleteUserGroupResponse deleteUserGroupWithOptions(const Models::DeleteUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除用户组.
       *
       * @param request DeleteUserGroupRequest
       * @return DeleteUserGroupResponse
       */
      Models::DeleteUserGroupResponse deleteUserGroup(const Models::DeleteUserGroupRequest &request);

      /**
       * @summary 执行即席查询任务。
       *
       * @param tmpReq ExecuteAdHocTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAdHocTaskResponse
       */
      Models::ExecuteAdHocTaskResponse executeAdHocTaskWithOptions(const Models::ExecuteAdHocTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行即席查询任务。
       *
       * @param request ExecuteAdHocTaskRequest
       * @return ExecuteAdHocTaskResponse
       */
      Models::ExecuteAdHocTaskResponse executeAdHocTask(const Models::ExecuteAdHocTaskRequest &request);

      /**
       * @summary 运行手动调度节点。
       *
       * @param tmpReq ExecuteManualNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteManualNodeResponse
       */
      Models::ExecuteManualNodeResponse executeManualNodeWithOptions(const Models::ExecuteManualNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 运行手动调度节点。
       *
       * @param request ExecuteManualNodeRequest
       * @return ExecuteManualNodeResponse
       */
      Models::ExecuteManualNodeResponse executeManualNode(const Models::ExecuteManualNodeRequest &request);

      /**
       * @summary 运行触发式节点。
       *
       * @param request ExecuteTriggerNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTriggerNodeResponse
       */
      Models::ExecuteTriggerNodeResponse executeTriggerNodeWithOptions(const Models::ExecuteTriggerNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 运行触发式节点。
       *
       * @param request ExecuteTriggerNodeRequest
       * @return ExecuteTriggerNodeResponse
       */
      Models::ExecuteTriggerNodeResponse executeTriggerNode(const Models::ExecuteTriggerNodeRequest &request);

      /**
       * @summary 重跑下游(修复链路数据), 支持强制重跑下游。影响范围: 1. 会产生计算成本；2. 会影响数据产出
       *
       * @param tmpReq FixDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FixDataResponse
       */
      Models::FixDataResponse fixDataWithOptions(const Models::FixDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重跑下游(修复链路数据), 支持强制重跑下游。影响范围: 1. 会产生计算成本；2. 会影响数据产出
       *
       * @param request FixDataRequest
       * @return FixDataResponse
       */
      Models::FixDataResponse fixData(const Models::FixDataRequest &request);

      /**
       * @summary 根据行级权限ID获取某一行级权限下的所有授权账号
       *
       * @param tmpReq GetAccountByRowPermissionIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountByRowPermissionIdResponse
       */
      Models::GetAccountByRowPermissionIdResponse getAccountByRowPermissionIdWithOptions(const Models::GetAccountByRowPermissionIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据行级权限ID获取某一行级权限下的所有授权账号
       *
       * @param request GetAccountByRowPermissionIdRequest
       * @return GetAccountByRowPermissionIdResponse
       */
      Models::GetAccountByRowPermissionIdResponse getAccountByRowPermissionId(const Models::GetAccountByRowPermissionIdRequest &request);

      /**
       * @summary 查询即席查询文件。
       *
       * @param request GetAdHocFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAdHocFileResponse
       */
      Models::GetAdHocFileResponse getAdHocFileWithOptions(const Models::GetAdHocFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询即席查询文件。
       *
       * @param request GetAdHocFileRequest
       * @return GetAdHocFileResponse
       */
      Models::GetAdHocFileResponse getAdHocFile(const Models::GetAdHocFileRequest &request);

      /**
       * @summary 获取即席查询任务运行日志。
       *
       * @param request GetAdHocTaskLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAdHocTaskLogResponse
       */
      Models::GetAdHocTaskLogResponse getAdHocTaskLogWithOptions(const Models::GetAdHocTaskLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取即席查询任务运行日志。
       *
       * @param request GetAdHocTaskLogRequest
       * @return GetAdHocTaskLogResponse
       */
      Models::GetAdHocTaskLogResponse getAdHocTaskLog(const Models::GetAdHocTaskLogRequest &request);

      /**
       * @summary 获取即席查询的任务运行结果。
       *
       * @param request GetAdHocTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAdHocTaskResultResponse
       */
      Models::GetAdHocTaskResultResponse getAdHocTaskResultWithOptions(const Models::GetAdHocTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取即席查询的任务运行结果。
       *
       * @param request GetAdHocTaskResultRequest
       * @return GetAdHocTaskResultResponse
       */
      Models::GetAdHocTaskResultResponse getAdHocTaskResult(const Models::GetAdHocTaskResultRequest &request);

      /**
       * @summary 获取告警事件详情
       *
       * @param request GetAlertEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlertEventResponse
       */
      Models::GetAlertEventResponse getAlertEventWithOptions(const Models::GetAlertEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取告警事件详情
       *
       * @param request GetAlertEventRequest
       * @return GetAlertEventResponse
       */
      Models::GetAlertEventResponse getAlertEvent(const Models::GetAlertEventRequest &request);

      /**
       * @summary 根据资产对象GUID查询映射关系。
       *
       * @param tmpReq GetAssetMappingRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAssetMappingRelationsResponse
       */
      Models::GetAssetMappingRelationsResponse getAssetMappingRelationsWithOptions(const Models::GetAssetMappingRelationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据资产对象GUID查询映射关系。
       *
       * @param request GetAssetMappingRelationsRequest
       * @return GetAssetMappingRelationsResponse
       */
      Models::GetAssetMappingRelationsResponse getAssetMappingRelations(const Models::GetAssetMappingRelationsRequest &request);

      /**
       * @summary 获取离线计算任务详情。
       *
       * @param request GetBatchTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBatchTaskInfoResponse
       */
      Models::GetBatchTaskInfoResponse getBatchTaskInfoWithOptions(const Models::GetBatchTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取离线计算任务详情。
       *
       * @param request GetBatchTaskInfoRequest
       * @return GetBatchTaskInfoResponse
       */
      Models::GetBatchTaskInfoResponse getBatchTaskInfo(const Models::GetBatchTaskInfoRequest &request);

      /**
       * @summary 获取离线计算任务指定版本任务详情。
       *
       * @param request GetBatchTaskInfoByVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBatchTaskInfoByVersionResponse
       */
      Models::GetBatchTaskInfoByVersionResponse getBatchTaskInfoByVersionWithOptions(const Models::GetBatchTaskInfoByVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取离线计算任务指定版本任务详情。
       *
       * @param request GetBatchTaskInfoByVersionRequest
       * @return GetBatchTaskInfoByVersionResponse
       */
      Models::GetBatchTaskInfoByVersionResponse getBatchTaskInfoByVersion(const Models::GetBatchTaskInfoByVersionRequest &request);

      /**
       * @summary 获取离线任务自定义血缘。
       *
       * @param request GetBatchTaskUdfLineagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBatchTaskUdfLineagesResponse
       */
      Models::GetBatchTaskUdfLineagesResponse getBatchTaskUdfLineagesWithOptions(const Models::GetBatchTaskUdfLineagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取离线任务自定义血缘。
       *
       * @param request GetBatchTaskUdfLineagesRequest
       * @return GetBatchTaskUdfLineagesResponse
       */
      Models::GetBatchTaskUdfLineagesResponse getBatchTaskUdfLineages(const Models::GetBatchTaskUdfLineagesRequest &request);

      /**
       * @summary 获取离线计算任务版本列表。
       *
       * @param request GetBatchTaskVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBatchTaskVersionsResponse
       */
      Models::GetBatchTaskVersionsResponse getBatchTaskVersionsWithOptions(const Models::GetBatchTaskVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取离线计算任务版本列表。
       *
       * @param request GetBatchTaskVersionsRequest
       * @return GetBatchTaskVersionsResponse
       */
      Models::GetBatchTaskVersionsResponse getBatchTaskVersions(const Models::GetBatchTaskVersionsRequest &request);

      /**
       * @summary 根据归属资产GUID查询映射关系。
       *
       * @param tmpReq GetBelongAssetMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBelongAssetMappingResponse
       */
      Models::GetBelongAssetMappingResponse getBelongAssetMappingWithOptions(const Models::GetBelongAssetMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据归属资产GUID查询映射关系。
       *
       * @param request GetBelongAssetMappingRequest
       * @return GetBelongAssetMappingResponse
       */
      Models::GetBelongAssetMappingResponse getBelongAssetMapping(const Models::GetBelongAssetMappingRequest &request);

      /**
       * @summary 获取业务实体详情。
       *
       * @param request GetBizEntityInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBizEntityInfoResponse
       */
      Models::GetBizEntityInfoResponse getBizEntityInfoWithOptions(const Models::GetBizEntityInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取业务实体详情。
       *
       * @param request GetBizEntityInfoRequest
       * @return GetBizEntityInfoResponse
       */
      Models::GetBizEntityInfoResponse getBizEntityInfo(const Models::GetBizEntityInfoRequest &request);

      /**
       * @summary 查询指定版本的业务实体的详情。
       *
       * @param request GetBizEntityInfoByVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBizEntityInfoByVersionResponse
       */
      Models::GetBizEntityInfoByVersionResponse getBizEntityInfoByVersionWithOptions(const Models::GetBizEntityInfoByVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定版本的业务实体的详情。
       *
       * @param request GetBizEntityInfoByVersionRequest
       * @return GetBizEntityInfoByVersionResponse
       */
      Models::GetBizEntityInfoByVersionResponse getBizEntityInfoByVersion(const Models::GetBizEntityInfoByVersionRequest &request);

      /**
       * @summary 查询业务指标详情
       *
       * @param tmpReq GetBizMetricByNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBizMetricByNameResponse
       */
      Models::GetBizMetricByNameResponse getBizMetricByNameWithOptions(const Models::GetBizMetricByNameRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询业务指标详情
       *
       * @param request GetBizMetricByNameRequest
       * @return GetBizMetricByNameResponse
       */
      Models::GetBizMetricByNameResponse getBizMetricByName(const Models::GetBizMetricByNameRequest &request);

      /**
       * @summary 获取数据板块详情。
       *
       * @param request GetBizUnitInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBizUnitInfoResponse
       */
      Models::GetBizUnitInfoResponse getBizUnitInfoWithOptions(const Models::GetBizUnitInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据板块详情。
       *
       * @param request GetBizUnitInfoRequest
       * @return GetBizUnitInfoResponse
       */
      Models::GetBizUnitInfoResponse getBizUnitInfo(const Models::GetBizUnitInfoRequest &request);

      /**
       * @summary 查询数据源连通性检查任务。
       *
       * @param request GetCheckConnectivityJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCheckConnectivityJobsResponse
       */
      Models::GetCheckConnectivityJobsResponse getCheckConnectivityJobsWithOptions(const Models::GetCheckConnectivityJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据源连通性检查任务。
       *
       * @param request GetCheckConnectivityJobsRequest
       * @return GetCheckConnectivityJobsResponse
       */
      Models::GetCheckConnectivityJobsResponse getCheckConnectivityJobs(const Models::GetCheckConnectivityJobsRequest &request);

      /**
       * @summary 根据环境获取集群信息
       *
       * @param request GetClusterQueueInfoByEnvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterQueueInfoByEnvResponse
       */
      Models::GetClusterQueueInfoByEnvResponse getClusterQueueInfoByEnvWithOptions(const Models::GetClusterQueueInfoByEnvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据环境获取集群信息
       *
       * @param request GetClusterQueueInfoByEnvRequest
       * @return GetClusterQueueInfoByEnvResponse
       */
      Models::GetClusterQueueInfoByEnvResponse getClusterQueueInfoByEnv(const Models::GetClusterQueueInfoByEnvRequest &request);

      /**
       * @summary 获取计算源详情。
       *
       * @param request GetComputeSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComputeSourceResponse
       */
      Models::GetComputeSourceResponse getComputeSourceWithOptions(const Models::GetComputeSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取计算源详情。
       *
       * @param request GetComputeSourceRequest
       * @return GetComputeSourceResponse
       */
      Models::GetComputeSourceResponse getComputeSource(const Models::GetComputeSourceRequest &request);

      /**
       * @summary 获取主题域详情。
       *
       * @param request GetDataDomainInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataDomainInfoResponse
       */
      Models::GetDataDomainInfoResponse getDataDomainInfoWithOptions(const Models::GetDataDomainInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取主题域详情。
       *
       * @param request GetDataDomainInfoRequest
       * @return GetDataDomainInfoResponse
       */
      Models::GetDataDomainInfoResponse getDataDomainInfo(const Models::GetDataDomainInfoRequest &request);

      /**
       * @summary 运维监控Api调用汇总统计。
       *
       * @param request GetDataServiceApiCallSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceApiCallSummaryResponse
       */
      Models::GetDataServiceApiCallSummaryResponse getDataServiceApiCallSummaryWithOptions(const Models::GetDataServiceApiCallSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 运维监控Api调用汇总统计。
       *
       * @param request GetDataServiceApiCallSummaryRequest
       * @return GetDataServiceApiCallSummaryResponse
       */
      Models::GetDataServiceApiCallSummaryResponse getDataServiceApiCallSummary(const Models::GetDataServiceApiCallSummaryRequest &request);

      /**
       * @summary 运维监控Api访问趋势分析。
       *
       * @param request GetDataServiceApiCallTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceApiCallTrendResponse
       */
      Models::GetDataServiceApiCallTrendResponse getDataServiceApiCallTrendWithOptions(const Models::GetDataServiceApiCallTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 运维监控Api访问趋势分析。
       *
       * @param request GetDataServiceApiCallTrendRequest
       * @return GetDataServiceApiCallTrendResponse
       */
      Models::GetDataServiceApiCallTrendResponse getDataServiceApiCallTrend(const Models::GetDataServiceApiCallTrendRequest &request);

      /**
       * @summary 获取API文档。
       *
       * @param request GetDataServiceApiDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceApiDocumentResponse
       */
      Models::GetDataServiceApiDocumentResponse getDataServiceApiDocumentWithOptions(const Models::GetDataServiceApiDocumentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取API文档。
       *
       * @param request GetDataServiceApiDocumentRequest
       * @return GetDataServiceApiDocumentResponse
       */
      Models::GetDataServiceApiDocumentResponse getDataServiceApiDocument(const Models::GetDataServiceApiDocumentRequest &request);

      /**
       * @summary 获取API异常影响汇总。
       *
       * @param request GetDataServiceApiErrorImpactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceApiErrorImpactResponse
       */
      Models::GetDataServiceApiErrorImpactResponse getDataServiceApiErrorImpactWithOptions(const Models::GetDataServiceApiErrorImpactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取API异常影响汇总。
       *
       * @param request GetDataServiceApiErrorImpactRequest
       * @return GetDataServiceApiErrorImpactResponse
       */
      Models::GetDataServiceApiErrorImpactResponse getDataServiceApiErrorImpact(const Models::GetDataServiceApiErrorImpactRequest &request);

      /**
       * @summary 查询数据服务API分组列表。
       *
       * @param request GetDataServiceApiGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceApiGroupsResponse
       */
      Models::GetDataServiceApiGroupsResponse getDataServiceApiGroupsWithOptions(const Models::GetDataServiceApiGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据服务API分组列表。
       *
       * @param request GetDataServiceApiGroupsRequest
       * @return GetDataServiceApiGroupsResponse
       */
      Models::GetDataServiceApiGroupsResponse getDataServiceApiGroups(const Models::GetDataServiceApiGroupsRequest &request);

      /**
       * @summary 获取应用有权限的用户列表。
       *
       * @param request GetDataServiceAppAuthorizedUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceAppAuthorizedUsersResponse
       */
      Models::GetDataServiceAppAuthorizedUsersResponse getDataServiceAppAuthorizedUsersWithOptions(const Models::GetDataServiceAppAuthorizedUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取应用有权限的用户列表。
       *
       * @param request GetDataServiceAppAuthorizedUsersRequest
       * @return GetDataServiceAppAuthorizedUsersResponse
       */
      Models::GetDataServiceAppAuthorizedUsersResponse getDataServiceAppAuthorizedUsers(const Models::GetDataServiceAppAuthorizedUsersRequest &request);

      /**
       * @summary 查询数据服务项目的应用分组列表。
       *
       * @param request GetDataServiceAppGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceAppGroupsResponse
       */
      Models::GetDataServiceAppGroupsResponse getDataServiceAppGroupsWithOptions(const Models::GetDataServiceAppGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据服务项目的应用分组列表。
       *
       * @param request GetDataServiceAppGroupsRequest
       * @return GetDataServiceAppGroupsResponse
       */
      Models::GetDataServiceAppGroupsResponse getDataServiceAppGroups(const Models::GetDataServiceAppGroupsRequest &request);

      /**
       * @summary 查询分组下应用列表。
       *
       * @param request GetDataServiceAppsByGroupIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceAppsByGroupIdResponse
       */
      Models::GetDataServiceAppsByGroupIdResponse getDataServiceAppsByGroupIdWithOptions(const Models::GetDataServiceAppsByGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询分组下应用列表。
       *
       * @param request GetDataServiceAppsByGroupIdRequest
       * @return GetDataServiceAppsByGroupIdResponse
       */
      Models::GetDataServiceAppsByGroupIdResponse getDataServiceAppsByGroupId(const Models::GetDataServiceAppsByGroupIdRequest &request);

      /**
       * @summary 根据App分组Id查询账号有权限的应用列表。
       *
       * @param request GetDataServiceAuthorizedAppsByGroupIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceAuthorizedAppsByGroupIdResponse
       */
      Models::GetDataServiceAuthorizedAppsByGroupIdResponse getDataServiceAuthorizedAppsByGroupIdWithOptions(const Models::GetDataServiceAuthorizedAppsByGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据App分组Id查询账号有权限的应用列表。
       *
       * @param request GetDataServiceAuthorizedAppsByGroupIdRequest
       * @return GetDataServiceAuthorizedAppsByGroupIdResponse
       */
      Models::GetDataServiceAuthorizedAppsByGroupIdResponse getDataServiceAuthorizedAppsByGroupId(const Models::GetDataServiceAuthorizedAppsByGroupIdRequest &request);

      /**
       * @summary 查询有权限的项目列表。
       *
       * @param request GetDataServiceAuthorizedProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceAuthorizedProjectsResponse
       */
      Models::GetDataServiceAuthorizedProjectsResponse getDataServiceAuthorizedProjectsWithOptions(const Models::GetDataServiceAuthorizedProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询有权限的项目列表。
       *
       * @param request GetDataServiceAuthorizedProjectsRequest
       * @return GetDataServiceAuthorizedProjectsResponse
       */
      Models::GetDataServiceAuthorizedProjectsResponse getDataServiceAuthorizedProjects(const Models::GetDataServiceAuthorizedProjectsRequest &request);

      /**
       * @summary 当前登录当前用户作为负责人的项目列表。
       *
       * @param request GetDataServiceMyProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceMyProjectsResponse
       */
      Models::GetDataServiceMyProjectsResponse getDataServiceMyProjectsWithOptions(const Models::GetDataServiceMyProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 当前登录当前用户作为负责人的项目列表。
       *
       * @param request GetDataServiceMyProjectsRequest
       * @return GetDataServiceMyProjectsResponse
       */
      Models::GetDataServiceMyProjectsResponse getDataServiceMyProjects(const Models::GetDataServiceMyProjectsRequest &request);

      /**
       * @summary 获取可添加到项目成员的用户列表。
       *
       * @param request GetDataServiceProjectAddableUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceProjectAddableUsersResponse
       */
      Models::GetDataServiceProjectAddableUsersResponse getDataServiceProjectAddableUsersWithOptions(const Models::GetDataServiceProjectAddableUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取可添加到项目成员的用户列表。
       *
       * @param request GetDataServiceProjectAddableUsersRequest
       * @return GetDataServiceProjectAddableUsersResponse
       */
      Models::GetDataServiceProjectAddableUsersResponse getDataServiceProjectAddableUsers(const Models::GetDataServiceProjectAddableUsersRequest &request);

      /**
       * @summary 查询数据源变更影响的集成任务及数据库SQL任务。
       *
       * @param request GetDataSourceDependenciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataSourceDependenciesResponse
       */
      Models::GetDataSourceDependenciesResponse getDataSourceDependenciesWithOptions(const Models::GetDataSourceDependenciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据源变更影响的集成任务及数据库SQL任务。
       *
       * @param request GetDataSourceDependenciesRequest
       * @return GetDataSourceDependenciesResponse
       */
      Models::GetDataSourceDependenciesResponse getDataSourceDependencies(const Models::GetDataSourceDependenciesRequest &request);

      /**
       * @summary 查询开发态对象上游依赖。
       *
       * @param request GetDevObjectDependencyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDevObjectDependencyResponse
       */
      Models::GetDevObjectDependencyResponse getDevObjectDependencyWithOptions(const Models::GetDevObjectDependencyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询开发态对象上游依赖。
       *
       * @param request GetDevObjectDependencyRequest
       * @return GetDevObjectDependencyResponse
       */
      Models::GetDevObjectDependencyResponse getDevObjectDependency(const Models::GetDevObjectDependencyRequest &request);

      /**
       * @summary 获取文件夹目录树
       *
       * @param request GetDirectoryTreeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDirectoryTreeResponse
       */
      Models::GetDirectoryTreeResponse getDirectoryTreeWithOptions(const Models::GetDirectoryTreeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文件夹目录树
       *
       * @param request GetDirectoryTreeRequest
       * @return GetDirectoryTreeResponse
       */
      Models::GetDirectoryTreeResponse getDirectoryTree(const Models::GetDirectoryTreeRequest &request);

      /**
       * @summary 获取文件存储临时读写授权。
       *
       * @param request GetFileStorageCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileStorageCredentialResponse
       */
      Models::GetFileStorageCredentialResponse getFileStorageCredentialWithOptions(const Models::GetFileStorageCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文件存储临时读写授权。
       *
       * @param request GetFileStorageCredentialRequest
       * @return GetFileStorageCredentialResponse
       */
      Models::GetFileStorageCredentialResponse getFileStorageCredential(const Models::GetFileStorageCredentialRequest &request);

      /**
       * @summary 根据起始的实例查询该实例的下游
       *
       * @param tmpReq GetInstanceDownStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceDownStreamResponse
       */
      Models::GetInstanceDownStreamResponse getInstanceDownStreamWithOptions(const Models::GetInstanceDownStreamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据起始的实例查询该实例的下游
       *
       * @param request GetInstanceDownStreamRequest
       * @return GetInstanceDownStreamResponse
       */
      Models::GetInstanceDownStreamResponse getInstanceDownStream(const Models::GetInstanceDownStreamRequest &request);

      /**
       * @summary 查询实例的上下游，支持逻辑表和代码任务。
       *
       * @param tmpReq GetInstanceUpDownStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceUpDownStreamResponse
       */
      Models::GetInstanceUpDownStreamResponse getInstanceUpDownStreamWithOptions(const Models::GetInstanceUpDownStreamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例的上下游，支持逻辑表和代码任务。
       *
       * @param request GetInstanceUpDownStreamRequest
       * @return GetInstanceUpDownStreamResponse
       */
      Models::GetInstanceUpDownStreamResponse getInstanceUpDownStream(const Models::GetInstanceUpDownStreamRequest &request);

      /**
       * @summary 获取最新的待发布记录详情
       *
       * @param tmpReq GetLatestSubmitDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLatestSubmitDetailResponse
       */
      Models::GetLatestSubmitDetailResponse getLatestSubmitDetailWithOptions(const Models::GetLatestSubmitDetailRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取最新的待发布记录详情
       *
       * @param request GetLatestSubmitDetailRequest
       * @return GetLatestSubmitDetailResponse
       */
      Models::GetLatestSubmitDetailResponse getLatestSubmitDetail(const Models::GetLatestSubmitDetailRequest &request);

      /**
       * @summary 获取用户角色列表
       *
       * @param request GetMyRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMyRolesResponse
       */
      Models::GetMyRolesResponse getMyRolesWithOptions(const Models::GetMyRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户角色列表
       *
       * @param request GetMyRolesRequest
       * @return GetMyRolesResponse
       */
      Models::GetMyRolesResponse getMyRoles(const Models::GetMyRolesRequest &request);

      /**
       * @summary 获取当前用户归属租户.
       *
       * @param tmpReq GetMyTenantsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMyTenantsResponse
       */
      Models::GetMyTenantsResponse getMyTenantsWithOptions(const Models::GetMyTenantsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取当前用户归属租户.
       *
       * @param request GetMyTenantsRequest
       * @return GetMyTenantsResponse
       */
      Models::GetMyTenantsResponse getMyTenants(const Models::GetMyTenantsRequest &request);

      /**
       * @summary 通用查询节点上下游接口
       *
       * @param tmpReq GetNodeUpDownStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeUpDownStreamResponse
       */
      Models::GetNodeUpDownStreamResponse getNodeUpDownStreamWithOptions(const Models::GetNodeUpDownStreamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通用查询节点上下游接口
       *
       * @param request GetNodeUpDownStreamRequest
       * @return GetNodeUpDownStreamResponse
       */
      Models::GetNodeUpDownStreamResponse getNodeUpDownStream(const Models::GetNodeUpDownStreamRequest &request);

      /**
       * @summary 查询补数据提交的状态
       *
       * @param request GetOperationSubmitStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOperationSubmitStatusResponse
       */
      Models::GetOperationSubmitStatusResponse getOperationSubmitStatusWithOptions(const Models::GetOperationSubmitStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询补数据提交的状态
       *
       * @param request GetOperationSubmitStatusRequest
       * @return GetOperationSubmitStatusResponse
       */
      Models::GetOperationSubmitStatusResponse getOperationSubmitStatus(const Models::GetOperationSubmitStatusRequest &request);

      /**
       * @summary 查询脚本的实例信息, 包括实例状态、运行时间等信息.
       *
       * @param request GetPhysicalInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhysicalInstanceResponse
       */
      Models::GetPhysicalInstanceResponse getPhysicalInstanceWithOptions(const Models::GetPhysicalInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询脚本的实例信息, 包括实例状态、运行时间等信息.
       *
       * @param request GetPhysicalInstanceRequest
       * @return GetPhysicalInstanceResponse
       */
      Models::GetPhysicalInstanceResponse getPhysicalInstance(const Models::GetPhysicalInstanceRequest &request);

      /**
       * @summary 获取实例执行的日志，如果实例重跑了多次，则会有多条日志
       *
       * @param request GetPhysicalInstanceLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhysicalInstanceLogResponse
       */
      Models::GetPhysicalInstanceLogResponse getPhysicalInstanceLogWithOptions(const Models::GetPhysicalInstanceLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例执行的日志，如果实例重跑了多次，则会有多条日志
       *
       * @param request GetPhysicalInstanceLogRequest
       * @return GetPhysicalInstanceLogResponse
       */
      Models::GetPhysicalInstanceLogResponse getPhysicalInstanceLog(const Models::GetPhysicalInstanceLogRequest &request);

      /**
       * @summary 查询物理调度节点。
       *
       * @param request GetPhysicalNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhysicalNodeResponse
       */
      Models::GetPhysicalNodeResponse getPhysicalNodeWithOptions(const Models::GetPhysicalNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询物理调度节点。
       *
       * @param request GetPhysicalNodeRequest
       * @return GetPhysicalNodeResponse
       */
      Models::GetPhysicalNodeResponse getPhysicalNode(const Models::GetPhysicalNodeRequest &request);

      /**
       * @summary 根据输出名查询对应的物理节点。
       *
       * @param request GetPhysicalNodeByOutputNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhysicalNodeByOutputNameResponse
       */
      Models::GetPhysicalNodeByOutputNameResponse getPhysicalNodeByOutputNameWithOptions(const Models::GetPhysicalNodeByOutputNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据输出名查询对应的物理节点。
       *
       * @param request GetPhysicalNodeByOutputNameRequest
       * @return GetPhysicalNodeByOutputNameResponse
       */
      Models::GetPhysicalNodeByOutputNameResponse getPhysicalNodeByOutputName(const Models::GetPhysicalNodeByOutputNameRequest &request);

      /**
       * @summary 查询调度节点代码内容。
       *
       * @param request GetPhysicalNodeContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhysicalNodeContentResponse
       */
      Models::GetPhysicalNodeContentResponse getPhysicalNodeContentWithOptions(const Models::GetPhysicalNodeContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询调度节点代码内容。
       *
       * @param request GetPhysicalNodeContentRequest
       * @return GetPhysicalNodeContentResponse
       */
      Models::GetPhysicalNodeContentResponse getPhysicalNodeContent(const Models::GetPhysicalNodeContentRequest &request);

      /**
       * @summary 查询节点的操作日志。
       *
       * @param request GetPhysicalNodeOperationLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhysicalNodeOperationLogResponse
       */
      Models::GetPhysicalNodeOperationLogResponse getPhysicalNodeOperationLogWithOptions(const Models::GetPhysicalNodeOperationLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询节点的操作日志。
       *
       * @param request GetPhysicalNodeOperationLogRequest
       * @return GetPhysicalNodeOperationLogResponse
       */
      Models::GetPhysicalNodeOperationLogResponse getPhysicalNodeOperationLog(const Models::GetPhysicalNodeOperationLogRequest &request);

      /**
       * @summary 查询异步操作管道任务的执行结果。
       *
       * @param tmpReq GetPipelineAsyncResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineAsyncResultResponse
       */
      Models::GetPipelineAsyncResultResponse getPipelineAsyncResultWithOptions(const Models::GetPipelineAsyncResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询异步操作管道任务的执行结果。
       *
       * @param request GetPipelineAsyncResultRequest
       * @return GetPipelineAsyncResultResponse
       */
      Models::GetPipelineAsyncResultResponse getPipelineAsyncResult(const Models::GetPipelineAsyncResultRequest &request);

      /**
       * @summary 根据管道任务id查询管道任务。
       *
       * @param tmpReq GetPipelineByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineByIdResponse
       */
      Models::GetPipelineByIdResponse getPipelineByIdWithOptions(const Models::GetPipelineByIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据管道任务id查询管道任务。
       *
       * @param request GetPipelineByIdRequest
       * @return GetPipelineByIdResponse
       */
      Models::GetPipelineByIdResponse getPipelineById(const Models::GetPipelineByIdRequest &request);

      /**
       * @summary 获取项目详情。
       *
       * @param request GetProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProjectWithOptions(const Models::GetProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取项目详情。
       *
       * @param request GetProjectRequest
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProject(const Models::GetProjectRequest &request);

      /**
       * @summary 通过项目名获取项目详情。
       *
       * @param request GetProjectByNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectByNameResponse
       */
      Models::GetProjectByNameResponse getProjectByNameWithOptions(const Models::GetProjectByNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过项目名获取项目详情。
       *
       * @param request GetProjectByNameRequest
       * @return GetProjectByNameResponse
       */
      Models::GetProjectByNameResponse getProjectByName(const Models::GetProjectByNameRequest &request);

      /**
       * @summary 获取项目生产账号
       *
       * @param request GetProjectProduceUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectProduceUserResponse
       */
      Models::GetProjectProduceUserResponse getProjectProduceUserWithOptions(const Models::GetProjectProduceUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取项目生产账号
       *
       * @param request GetProjectProduceUserRequest
       * @return GetProjectProduceUserResponse
       */
      Models::GetProjectProduceUserResponse getProjectProduceUser(const Models::GetProjectProduceUserRequest &request);

      /**
       * @summary 获取项目白名单。
       *
       * @param request GetProjectWhiteListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectWhiteListsResponse
       */
      Models::GetProjectWhiteListsResponse getProjectWhiteListsWithOptions(const Models::GetProjectWhiteListsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取项目白名单。
       *
       * @param request GetProjectWhiteListsRequest
       * @return GetProjectWhiteListsResponse
       */
      Models::GetProjectWhiteListsResponse getProjectWhiteLists(const Models::GetProjectWhiteListsRequest &request);

      /**
       * @summary 通过监控对象ID获取告警设置。
       *
       * @param request GetQualityAlertOfAllRuleScopeByWatchIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityAlertOfAllRuleScopeByWatchIdResponse
       */
      Models::GetQualityAlertOfAllRuleScopeByWatchIdResponse getQualityAlertOfAllRuleScopeByWatchIdWithOptions(const Models::GetQualityAlertOfAllRuleScopeByWatchIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过监控对象ID获取告警设置。
       *
       * @param request GetQualityAlertOfAllRuleScopeByWatchIdRequest
       * @return GetQualityAlertOfAllRuleScopeByWatchIdResponse
       */
      Models::GetQualityAlertOfAllRuleScopeByWatchIdResponse getQualityAlertOfAllRuleScopeByWatchId(const Models::GetQualityAlertOfAllRuleScopeByWatchIdRequest &request);

      /**
       * @summary 获取质量规则对象。
       *
       * @param request GetQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityRuleResponse
       */
      Models::GetQualityRuleResponse getQualityRuleWithOptions(const Models::GetQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取质量规则对象。
       *
       * @param request GetQualityRuleRequest
       * @return GetQualityRuleResponse
       */
      Models::GetQualityRuleResponse getQualityRule(const Models::GetQualityRuleRequest &request);

      /**
       * @summary 获取质量任务对象详情。
       *
       * @param request GetQualityRuleTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityRuleTaskResponse
       */
      Models::GetQualityRuleTaskResponse getQualityRuleTaskWithOptions(const Models::GetQualityRuleTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取质量任务对象详情。
       *
       * @param request GetQualityRuleTaskRequest
       * @return GetQualityRuleTaskResponse
       */
      Models::GetQualityRuleTaskResponse getQualityRuleTask(const Models::GetQualityRuleTaskRequest &request);

      /**
       * @summary 获取质量任务对象日志内容。
       *
       * @param request GetQualityRuleTaskLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityRuleTaskLogResponse
       */
      Models::GetQualityRuleTaskLogResponse getQualityRuleTaskLogWithOptions(const Models::GetQualityRuleTaskLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取质量任务对象日志内容。
       *
       * @param request GetQualityRuleTaskLogRequest
       * @return GetQualityRuleTaskLogResponse
       */
      Models::GetQualityRuleTaskLogResponse getQualityRuleTaskLog(const Models::GetQualityRuleTaskLogRequest &request);

      /**
       * @summary 获取质量调度对象。
       *
       * @param request GetQualityScheduleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityScheduleResponse
       */
      Models::GetQualityScheduleResponse getQualityScheduleWithOptions(const Models::GetQualityScheduleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取质量调度对象。
       *
       * @param request GetQualityScheduleRequest
       * @return GetQualityScheduleResponse
       */
      Models::GetQualityScheduleResponse getQualitySchedule(const Models::GetQualityScheduleRequest &request);

      /**
       * @summary 通过监控对象ID获取调度设置列表。
       *
       * @param request GetQualitySchedulesByWatchIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualitySchedulesByWatchIdResponse
       */
      Models::GetQualitySchedulesByWatchIdResponse getQualitySchedulesByWatchIdWithOptions(const Models::GetQualitySchedulesByWatchIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过监控对象ID获取调度设置列表。
       *
       * @param request GetQualitySchedulesByWatchIdRequest
       * @return GetQualitySchedulesByWatchIdResponse
       */
      Models::GetQualitySchedulesByWatchIdResponse getQualitySchedulesByWatchId(const Models::GetQualitySchedulesByWatchIdRequest &request);

      /**
       * @summary 获取质量模板对象。
       *
       * @param request GetQualityTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityTemplateResponse
       */
      Models::GetQualityTemplateResponse getQualityTemplateWithOptions(const Models::GetQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取质量模板对象。
       *
       * @param request GetQualityTemplateRequest
       * @return GetQualityTemplateResponse
       */
      Models::GetQualityTemplateResponse getQualityTemplate(const Models::GetQualityTemplateRequest &request);

      /**
       * @summary 获取质量监控对象。
       *
       * @param request GetQualityWatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityWatchResponse
       */
      Models::GetQualityWatchResponse getQualityWatchWithOptions(const Models::GetQualityWatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取质量监控对象。
       *
       * @param request GetQualityWatchRequest
       * @return GetQualityWatchResponse
       */
      Models::GetQualityWatchResponse getQualityWatch(const Models::GetQualityWatchRequest &request);

      /**
       * @summary 通过监控对象原始ID获取监控对象记录，例如：数据源、表、指标等的ID。
       *
       * @param request GetQualityWatchByObjectIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityWatchByObjectIdResponse
       */
      Models::GetQualityWatchByObjectIdResponse getQualityWatchByObjectIdWithOptions(const Models::GetQualityWatchByObjectIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过监控对象原始ID获取监控对象记录，例如：数据源、表、指标等的ID。
       *
       * @param request GetQualityWatchByObjectIdRequest
       * @return GetQualityWatchByObjectIdResponse
       */
      Models::GetQualityWatchByObjectIdResponse getQualityWatchByObjectId(const Models::GetQualityWatchByObjectIdRequest &request);

      /**
       * @summary 获取监控任务对象。
       *
       * @param request GetQualityWatchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityWatchTaskResponse
       */
      Models::GetQualityWatchTaskResponse getQualityWatchTaskWithOptions(const Models::GetQualityWatchTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取监控任务对象。
       *
       * @param request GetQualityWatchTaskRequest
       * @return GetQualityWatchTaskResponse
       */
      Models::GetQualityWatchTaskResponse getQualityWatchTask(const Models::GetQualityWatchTaskRequest &request);

      /**
       * @summary 获取监控任务对象的日志内容。
       *
       * @param request GetQualityWatchTaskLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityWatchTaskLogResponse
       */
      Models::GetQualityWatchTaskLogResponse getQualityWatchTaskLogWithOptions(const Models::GetQualityWatchTaskLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取监控任务对象的日志内容。
       *
       * @param request GetQualityWatchTaskLogRequest
       * @return GetQualityWatchTaskLogResponse
       */
      Models::GetQualityWatchTaskLogResponse getQualityWatchTaskLog(const Models::GetQualityWatchTaskLogRequest &request);

      /**
       * @summary 根据集群ID获取集群版本
       *
       * @param request GetQueueEngineVersionByEnvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQueueEngineVersionByEnvResponse
       */
      Models::GetQueueEngineVersionByEnvResponse getQueueEngineVersionByEnvWithOptions(const Models::GetQueueEngineVersionByEnvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据集群ID获取集群版本
       *
       * @param request GetQueueEngineVersionByEnvRequest
       * @return GetQueueEngineVersionByEnvResponse
       */
      Models::GetQueueEngineVersionByEnvResponse getQueueEngineVersionByEnv(const Models::GetQueueEngineVersionByEnvRequest &request);

      /**
       * @summary 获取资源文件详情。
       *
       * @param request GetResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceResponse
       */
      Models::GetResourceResponse getResourceWithOptions(const Models::GetResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取资源文件详情。
       *
       * @param request GetResourceRequest
       * @return GetResourceResponse
       */
      Models::GetResourceResponse getResource(const Models::GetResourceRequest &request);

      /**
       * @summary 获取资源文件指定版本详情。
       *
       * @param request GetResourceByVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceByVersionResponse
       */
      Models::GetResourceByVersionResponse getResourceByVersionWithOptions(const Models::GetResourceByVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取资源文件指定版本详情。
       *
       * @param request GetResourceByVersionRequest
       * @return GetResourceByVersionResponse
       */
      Models::GetResourceByVersionResponse getResourceByVersion(const Models::GetResourceByVersionRequest &request);

      /**
       * @summary 获取数据分类详情。
       *
       * @param request GetSecurityClassifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecurityClassifyResponse
       */
      Models::GetSecurityClassifyResponse getSecurityClassifyWithOptions(const Models::GetSecurityClassifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据分类详情。
       *
       * @param request GetSecurityClassifyRequest
       * @return GetSecurityClassifyResponse
       */
      Models::GetSecurityClassifyResponse getSecurityClassify(const Models::GetSecurityClassifyRequest &request);

      /**
       * @summary 获取识别结果详情。
       *
       * @param request GetSecurityIdentifyResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecurityIdentifyResultResponse
       */
      Models::GetSecurityIdentifyResultResponse getSecurityIdentifyResultWithOptions(const Models::GetSecurityIdentifyResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取识别结果详情。
       *
       * @param request GetSecurityIdentifyResultRequest
       * @return GetSecurityIdentifyResultResponse
       */
      Models::GetSecurityIdentifyResultResponse getSecurityIdentifyResult(const Models::GetSecurityIdentifyResultRequest &request);

      /**
       * @summary 获取数据分级详情。
       *
       * @param request GetSecurityLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecurityLevelResponse
       */
      Models::GetSecurityLevelResponse getSecurityLevelWithOptions(const Models::GetSecurityLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据分级详情。
       *
       * @param request GetSecurityLevelRequest
       * @return GetSecurityLevelResponse
       */
      Models::GetSecurityLevelResponse getSecurityLevel(const Models::GetSecurityLevelRequest &request);

      /**
       * @summary 通过密钥名称获取密钥值。
       *
       * @param request GetSecuritySecretKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecuritySecretKeyResponse
       */
      Models::GetSecuritySecretKeyResponse getSecuritySecretKeyWithOptions(const Models::GetSecuritySecretKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过密钥名称获取密钥值。
       *
       * @param request GetSecuritySecretKeyRequest
       * @return GetSecuritySecretKeyResponse
       */
      Models::GetSecuritySecretKeyResponse getSecuritySecretKey(const Models::GetSecuritySecretKeyRequest &request);

      /**
       * @summary 获取计算源对应集群的spark客户信息
       *
       * @param request GetSparkLocalClientInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSparkLocalClientInfoResponse
       */
      Models::GetSparkLocalClientInfoResponse getSparkLocalClientInfoWithOptions(const Models::GetSparkLocalClientInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取计算源对应集群的spark客户信息
       *
       * @param request GetSparkLocalClientInfoRequest
       * @return GetSparkLocalClientInfoResponse
       */
      Models::GetSparkLocalClientInfoResponse getSparkLocalClientInfo(const Models::GetSparkLocalClientInfoRequest &request);

      /**
       * @summary 获取标准详情。
       *
       * @param tmpReq GetStandardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStandardResponse
       */
      Models::GetStandardResponse getStandardWithOptions(const Models::GetStandardRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取标准详情。
       *
       * @param request GetStandardRequest
       * @return GetStandardResponse
       */
      Models::GetStandardResponse getStandard(const Models::GetStandardRequest &request);

      /**
       * @summary 获取数据标准码表详情。
       *
       * @param request GetStandardLookupTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStandardLookupTableResponse
       */
      Models::GetStandardLookupTableResponse getStandardLookupTableWithOptions(const Models::GetStandardLookupTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据标准码表详情。
       *
       * @param request GetStandardLookupTableRequest
       * @return GetStandardLookupTableResponse
       */
      Models::GetStandardLookupTableResponse getStandardLookupTable(const Models::GetStandardLookupTableRequest &request);

      /**
       * @summary 获取标准集详情。
       *
       * @param request GetStandardSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStandardSetResponse
       */
      Models::GetStandardSetResponse getStandardSetWithOptions(const Models::GetStandardSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取标准集详情。
       *
       * @param request GetStandardSetRequest
       * @return GetStandardSetResponse
       */
      Models::GetStandardSetResponse getStandardSet(const Models::GetStandardSetRequest &request);

      /**
       * @summary 查询目录下按照标准类型统计标准数目。
       *
       * @param tmpReq GetStandardStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStandardStatisticsResponse
       */
      Models::GetStandardStatisticsResponse getStandardStatisticsWithOptions(const Models::GetStandardStatisticsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询目录下按照标准类型统计标准数目。
       *
       * @param request GetStandardStatisticsRequest
       * @return GetStandardStatisticsResponse
       */
      Models::GetStandardStatisticsResponse getStandardStatistics(const Models::GetStandardStatisticsRequest &request);

      /**
       * @summary 获取数据标准模板详情。
       *
       * @param tmpReq GetStandardTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStandardTemplateResponse
       */
      Models::GetStandardTemplateResponse getStandardTemplateWithOptions(const Models::GetStandardTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据标准模板详情。
       *
       * @param request GetStandardTemplateRequest
       * @return GetStandardTemplateResponse
       */
      Models::GetStandardTemplateResponse getStandardTemplate(const Models::GetStandardTemplateRequest &request);

      /**
       * @summary 获取数据标准词根详情。
       *
       * @param request GetStandardWordRootRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStandardWordRootResponse
       */
      Models::GetStandardWordRootResponse getStandardWordRootWithOptions(const Models::GetStandardWordRootRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据标准词根详情。
       *
       * @param request GetStandardWordRootRequest
       * @return GetStandardWordRootResponse
       */
      Models::GetStandardWordRootResponse getStandardWordRoot(const Models::GetStandardWordRootRequest &request);

      /**
       * @summary 获取dataphin实时研发任务集合
       *
       * @param request GetStreamJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStreamJobsResponse
       */
      Models::GetStreamJobsResponse getStreamJobsWithOptions(const Models::GetStreamJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取dataphin实时研发任务集合
       *
       * @param request GetStreamJobsRequest
       * @return GetStreamJobsResponse
       */
      Models::GetStreamJobsResponse getStreamJobs(const Models::GetStreamJobsRequest &request);

      /**
       * @summary 获取补数据工作流所有业务日期的Dagrun信息。
       *
       * @param request GetSupplementDagrunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSupplementDagrunResponse
       */
      Models::GetSupplementDagrunResponse getSupplementDagrunWithOptions(const Models::GetSupplementDagrunRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取补数据工作流所有业务日期的Dagrun信息。
       *
       * @param request GetSupplementDagrunRequest
       * @return GetSupplementDagrunResponse
       */
      Models::GetSupplementDagrunResponse getSupplementDagrun(const Models::GetSupplementDagrunRequest &request);

      /**
       * @summary 列出补数据工作流下具体一个业务日期的所有节点的实例。
       *
       * @param request GetSupplementDagrunInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSupplementDagrunInstanceResponse
       */
      Models::GetSupplementDagrunInstanceResponse getSupplementDagrunInstanceWithOptions(const Models::GetSupplementDagrunInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出补数据工作流下具体一个业务日期的所有节点的实例。
       *
       * @param request GetSupplementDagrunInstanceRequest
       * @return GetSupplementDagrunInstanceResponse
       */
      Models::GetSupplementDagrunInstanceResponse getSupplementDagrunInstance(const Models::GetSupplementDagrunInstanceRequest &request);

      /**
       * @summary 查询表字段血缘信息
       *
       * @param tmpReq GetTableColumnLineageByTaskIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableColumnLineageByTaskIdResponse
       */
      Models::GetTableColumnLineageByTaskIdResponse getTableColumnLineageByTaskIdWithOptions(const Models::GetTableColumnLineageByTaskIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询表字段血缘信息
       *
       * @param request GetTableColumnLineageByTaskIdRequest
       * @return GetTableColumnLineageByTaskIdResponse
       */
      Models::GetTableColumnLineageByTaskIdResponse getTableColumnLineageByTaskId(const Models::GetTableColumnLineageByTaskIdRequest &request);

      /**
       * @summary 查询资产表字段血缘信息。
       *
       * @param tmpReq GetTableColumnLineagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableColumnLineagesResponse
       */
      Models::GetTableColumnLineagesResponse getTableColumnLineagesWithOptions(const Models::GetTableColumnLineagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资产表字段血缘信息。
       *
       * @param request GetTableColumnLineagesRequest
       * @return GetTableColumnLineagesResponse
       */
      Models::GetTableColumnLineagesResponse getTableColumnLineages(const Models::GetTableColumnLineagesRequest &request);

      /**
       * @summary 查询资产清单中Dataphin表的字段。
       *
       * @param request GetTableColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableColumnsResponse
       */
      Models::GetTableColumnsResponse getTableColumnsWithOptions(const Models::GetTableColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资产清单中Dataphin表的字段。
       *
       * @param request GetTableColumnsRequest
       * @return GetTableColumnsResponse
       */
      Models::GetTableColumnsResponse getTableColumns(const Models::GetTableColumnsRequest &request);

      /**
       * @summary 查询表血缘信息
       *
       * @param tmpReq GetTableLineageByTaskIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableLineageByTaskIdResponse
       */
      Models::GetTableLineageByTaskIdResponse getTableLineageByTaskIdWithOptions(const Models::GetTableLineageByTaskIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询表血缘信息
       *
       * @param request GetTableLineageByTaskIdRequest
       * @return GetTableLineageByTaskIdResponse
       */
      Models::GetTableLineageByTaskIdResponse getTableLineageByTaskId(const Models::GetTableLineageByTaskIdRequest &request);

      /**
       * @summary 查询资产表血缘信息。
       *
       * @param tmpReq GetTableLineagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableLineagesResponse
       */
      Models::GetTableLineagesResponse getTableLineagesWithOptions(const Models::GetTableLineagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资产表血缘信息。
       *
       * @param request GetTableLineagesRequest
       * @return GetTableLineagesResponse
       */
      Models::GetTableLineagesResponse getTableLineages(const Models::GetTableLineagesRequest &request);

      /**
       * @summary 根据转交任务ID查询转交任务的进度
       *
       * @param request GetTransferInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTransferInfoResponse
       */
      Models::GetTransferInfoResponse getTransferInfoWithOptions(const Models::GetTransferInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据转交任务ID查询转交任务的进度
       *
       * @param request GetTransferInfoRequest
       * @return GetTransferInfoResponse
       */
      Models::GetTransferInfoResponse getTransferInfo(const Models::GetTransferInfoRequest &request);

      /**
       * @summary 获取自定义函数详情。
       *
       * @param request GetUdfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUdfResponse
       */
      Models::GetUdfResponse getUdfWithOptions(const Models::GetUdfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取自定义函数详情。
       *
       * @param request GetUdfRequest
       * @return GetUdfResponse
       */
      Models::GetUdfResponse getUdf(const Models::GetUdfRequest &request);

      /**
       * @summary 查询自定义函数版本详情。
       *
       * @param request GetUdfByVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUdfByVersionResponse
       */
      Models::GetUdfByVersionResponse getUdfByVersionWithOptions(const Models::GetUdfByVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询自定义函数版本详情。
       *
       * @param request GetUdfByVersionRequest
       * @return GetUdfByVersionResponse
       */
      Models::GetUdfByVersionResponse getUdfByVersion(const Models::GetUdfByVersionRequest &request);

      /**
       * @summary 通过用户原始Id（如阿里云Id）获取用户详情
       *
       * @param request GetUserBySourceIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserBySourceIdResponse
       */
      Models::GetUserBySourceIdResponse getUserBySourceIdWithOptions(const Models::GetUserBySourceIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过用户原始Id（如阿里云Id）获取用户详情
       *
       * @param request GetUserBySourceIdRequest
       * @return GetUserBySourceIdResponse
       */
      Models::GetUserBySourceIdResponse getUserBySourceId(const Models::GetUserBySourceIdRequest &request);

      /**
       * @summary 获取用户组详情.
       *
       * @param request GetUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserGroupResponse
       */
      Models::GetUserGroupResponse getUserGroupWithOptions(const Models::GetUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户组详情.
       *
       * @param request GetUserGroupRequest
       * @return GetUserGroupResponse
       */
      Models::GetUserGroupResponse getUserGroup(const Models::GetUserGroupRequest &request);

      /**
       * @summary 获取用户详情
       *
       * @param tmpReq GetUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUsersResponse
       */
      Models::GetUsersResponse getUsersWithOptions(const Models::GetUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户详情
       *
       * @param request GetUsersRequest
       * @return GetUsersResponse
       */
      Models::GetUsersResponse getUsers(const Models::GetUsersRequest &request);

      /**
       * @summary API授权。
       *
       * @param tmpReq GrantDataServiceApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantDataServiceApiResponse
       */
      Models::GrantDataServiceApiResponse grantDataServiceApiWithOptions(const Models::GrantDataServiceApiRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary API授权。
       *
       * @param request GrantDataServiceApiRequest
       * @return GrantDataServiceApiResponse
       */
      Models::GrantDataServiceApiResponse grantDataServiceApi(const Models::GrantDataServiceApiRequest &request);

      /**
       * @summary 通过资源点对用户授权
       *
       * @param tmpReq GrantResourcePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantResourcePermissionResponse
       */
      Models::GrantResourcePermissionResponse grantResourcePermissionWithOptions(const Models::GrantResourcePermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过资源点对用户授权
       *
       * @param request GrantResourcePermissionRequest
       * @return GrantResourcePermissionResponse
       */
      Models::GrantResourcePermissionResponse grantResourcePermission(const Models::GrantResourcePermissionRequest &request);

      /**
       * @summary 获取用户角色列表
       *
       * @param request ListAddableRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAddableRolesResponse
       */
      Models::ListAddableRolesResponse listAddableRolesWithOptions(const Models::ListAddableRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户角色列表
       *
       * @param request ListAddableRolesRequest
       * @return ListAddableRolesResponse
       */
      Models::ListAddableRolesResponse listAddableRoles(const Models::ListAddableRolesRequest &request);

      /**
       * @summary 获取可加入租户成员列表的用户
       *
       * @param tmpReq ListAddableUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAddableUsersResponse
       */
      Models::ListAddableUsersResponse listAddableUsersWithOptions(const Models::ListAddableUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取可加入租户成员列表的用户
       *
       * @param request ListAddableUsersRequest
       * @return ListAddableUsersResponse
       */
      Models::ListAddableUsersResponse listAddableUsers(const Models::ListAddableUsersRequest &request);

      /**
       * @summary 根据条件查询多个告警事件
       *
       * @param tmpReq ListAlertEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertEventsResponse
       */
      Models::ListAlertEventsResponse listAlertEventsWithOptions(const Models::ListAlertEventsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据条件查询多个告警事件
       *
       * @param request ListAlertEventsRequest
       * @return ListAlertEventsResponse
       */
      Models::ListAlertEventsResponse listAlertEvents(const Models::ListAlertEventsRequest &request);

      /**
       * @summary 根据条件查询多个推送记录
       *
       * @param tmpReq ListAlertNotificationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertNotificationsResponse
       */
      Models::ListAlertNotificationsResponse listAlertNotificationsWithOptions(const Models::ListAlertNotificationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据条件查询多个推送记录
       *
       * @param request ListAlertNotificationsRequest
       * @return ListAlertNotificationsResponse
       */
      Models::ListAlertNotificationsResponse listAlertNotifications(const Models::ListAlertNotificationsRequest &request);

      /**
       * @summary 根据app查询api列表
       *
       * @param tmpReq ListApiByAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiByAppResponse
       */
      Models::ListApiByAppResponse listApiByAppWithOptions(const Models::ListApiByAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据app查询api列表
       *
       * @param request ListApiByAppRequest
       * @return ListApiByAppResponse
       */
      Models::ListApiByAppResponse listApiByApp(const Models::ListApiByAppRequest &request);

      /**
       * @summary 查询应用已申请的API的具体的字段列表
       *
       * @param tmpReq ListAuthorizedDataServiceApiDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizedDataServiceApiDetailsResponse
       */
      Models::ListAuthorizedDataServiceApiDetailsResponse listAuthorizedDataServiceApiDetailsWithOptions(const Models::ListAuthorizedDataServiceApiDetailsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询应用已申请的API的具体的字段列表
       *
       * @param request ListAuthorizedDataServiceApiDetailsRequest
       * @return ListAuthorizedDataServiceApiDetailsResponse
       */
      Models::ListAuthorizedDataServiceApiDetailsResponse listAuthorizedDataServiceApiDetails(const Models::ListAuthorizedDataServiceApiDetailsRequest &request);

      /**
       * @summary 查询业务实体列表。
       *
       * @param tmpReq ListBizEntitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBizEntitiesResponse
       */
      Models::ListBizEntitiesResponse listBizEntitiesWithOptions(const Models::ListBizEntitiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询业务实体列表。
       *
       * @param request ListBizEntitiesRequest
       * @return ListBizEntitiesResponse
       */
      Models::ListBizEntitiesResponse listBizEntities(const Models::ListBizEntitiesRequest &request);

      /**
       * @summary 获取当前租户下的所有数据板块
       *
       * @param request ListBizUnitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBizUnitsResponse
       */
      Models::ListBizUnitsResponse listBizUnitsWithOptions(const Models::ListBizUnitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取当前租户下的所有数据板块
       *
       * @param request ListBizUnitsRequest
       * @return ListBizUnitsResponse
       */
      Models::ListBizUnitsResponse listBizUnits(const Models::ListBizUnitsRequest &request);

      /**
       * @summary 查询计算源列表。
       *
       * @param tmpReq ListComputeSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComputeSourcesResponse
       */
      Models::ListComputeSourcesResponse listComputeSourcesWithOptions(const Models::ListComputeSourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询计算源列表。
       *
       * @param request ListComputeSourcesRequest
       * @return ListComputeSourcesResponse
       */
      Models::ListComputeSourcesResponse listComputeSources(const Models::ListComputeSourcesRequest &request);

      /**
       * @summary 获取主题域列表。
       *
       * @param tmpReq ListDataDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataDomainsResponse
       */
      Models::ListDataDomainsResponse listDataDomainsWithOptions(const Models::ListDataDomainsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取主题域列表。
       *
       * @param request ListDataDomainsRequest
       * @return ListDataDomainsResponse
       */
      Models::ListDataDomainsResponse listDataDomains(const Models::ListDataDomainsRequest &request);

      /**
       * @summary 查询API运维统计信息。
       *
       * @param tmpReq ListDataServiceApiCallStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceApiCallStatisticsResponse
       */
      Models::ListDataServiceApiCallStatisticsResponse listDataServiceApiCallStatisticsWithOptions(const Models::ListDataServiceApiCallStatisticsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询API运维统计信息。
       *
       * @param request ListDataServiceApiCallStatisticsRequest
       * @return ListDataServiceApiCallStatisticsResponse
       */
      Models::ListDataServiceApiCallStatisticsResponse listDataServiceApiCallStatistics(const Models::ListDataServiceApiCallStatisticsRequest &request);

      /**
       * @summary 分页查询数据服务调用日志。
       *
       * @param tmpReq ListDataServiceApiCallsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceApiCallsResponse
       */
      Models::ListDataServiceApiCallsResponse listDataServiceApiCallsWithOptions(const Models::ListDataServiceApiCallsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询数据服务调用日志。
       *
       * @param request ListDataServiceApiCallsRequest
       * @return ListDataServiceApiCallsResponse
       */
      Models::ListDataServiceApiCallsResponse listDataServiceApiCalls(const Models::ListDataServiceApiCallsRequest &request);

      /**
       * @summary API影响分析列表。
       *
       * @param tmpReq ListDataServiceApiImpactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceApiImpactsResponse
       */
      Models::ListDataServiceApiImpactsResponse listDataServiceApiImpactsWithOptions(const Models::ListDataServiceApiImpactsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary API影响分析列表。
       *
       * @param request ListDataServiceApiImpactsRequest
       * @return ListDataServiceApiImpactsResponse
       */
      Models::ListDataServiceApiImpactsResponse listDataServiceApiImpacts(const Models::ListDataServiceApiImpactsRequest &request);

      /**
       * @summary 查询当前用户有权限的应用列表。
       *
       * @param tmpReq ListDataServiceAuthorizedAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceAuthorizedAppsResponse
       */
      Models::ListDataServiceAuthorizedAppsResponse listDataServiceAuthorizedAppsWithOptions(const Models::ListDataServiceAuthorizedAppsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询当前用户有权限的应用列表。
       *
       * @param request ListDataServiceAuthorizedAppsRequest
       * @return ListDataServiceAuthorizedAppsResponse
       */
      Models::ListDataServiceAuthorizedAppsResponse listDataServiceAuthorizedApps(const Models::ListDataServiceAuthorizedAppsRequest &request);

      /**
       * @summary 获取我管理的API权限列表。
       *
       * @param tmpReq ListDataServiceMyApiPermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceMyApiPermissionsResponse
       */
      Models::ListDataServiceMyApiPermissionsResponse listDataServiceMyApiPermissionsWithOptions(const Models::ListDataServiceMyApiPermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取我管理的API权限列表。
       *
       * @param request ListDataServiceMyApiPermissionsRequest
       * @return ListDataServiceMyApiPermissionsResponse
       */
      Models::ListDataServiceMyApiPermissionsResponse listDataServiceMyApiPermissions(const Models::ListDataServiceMyApiPermissionsRequest &request);

      /**
       * @summary 查询当前用户有权限的应用。
       *
       * @param tmpReq ListDataServiceMyAppPermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceMyAppPermissionsResponse
       */
      Models::ListDataServiceMyAppPermissionsResponse listDataServiceMyAppPermissionsWithOptions(const Models::ListDataServiceMyAppPermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询当前用户有权限的应用。
       *
       * @param request ListDataServiceMyAppPermissionsRequest
       * @return ListDataServiceMyAppPermissionsResponse
       */
      Models::ListDataServiceMyAppPermissionsResponse listDataServiceMyAppPermissions(const Models::ListDataServiceMyAppPermissionsRequest &request);

      /**
       * @summary 分页查询已发布的API列表。
       *
       * @param tmpReq ListDataServicePublishedApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServicePublishedApisResponse
       */
      Models::ListDataServicePublishedApisResponse listDataServicePublishedApisWithOptions(const Models::ListDataServicePublishedApisRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询已发布的API列表。
       *
       * @param request ListDataServicePublishedApisRequest
       * @return ListDataServicePublishedApisResponse
       */
      Models::ListDataServicePublishedApisResponse listDataServicePublishedApis(const Models::ListDataServicePublishedApisRequest &request);

      /**
       * @summary 搜索数据源，所属结果包含数据源配置项
       *
       * @param tmpReq ListDataSourceWithConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourceWithConfigResponse
       */
      Models::ListDataSourceWithConfigResponse listDataSourceWithConfigWithOptions(const Models::ListDataSourceWithConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 搜索数据源，所属结果包含数据源配置项
       *
       * @param request ListDataSourceWithConfigRequest
       * @return ListDataSourceWithConfigResponse
       */
      Models::ListDataSourceWithConfigResponse listDataSourceWithConfig(const Models::ListDataSourceWithConfigRequest &request);

      /**
       * @summary 遍历菜单树目录文件。
       *
       * @param tmpReq ListFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFilesResponse
       */
      Models::ListFilesResponse listFilesWithOptions(const Models::ListFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 遍历菜单树目录文件。
       *
       * @param request ListFilesRequest
       * @return ListFilesResponse
       */
      Models::ListFilesResponse listFiles(const Models::ListFilesRequest &request);

      /**
       * @summary 分页查询实例。
       *
       * @param tmpReq ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询实例。
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary 查询节点下游，创建补数据工作流时可以作为数据参考
       *
       * @param tmpReq ListNodeDownStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodeDownStreamResponse
       */
      Models::ListNodeDownStreamResponse listNodeDownStreamWithOptions(const Models::ListNodeDownStreamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询节点下游，创建补数据工作流时可以作为数据参考
       *
       * @param request ListNodeDownStreamRequest
       * @return ListNodeDownStreamResponse
       */
      Models::ListNodeDownStreamResponse listNodeDownStream(const Models::ListNodeDownStreamRequest &request);

      /**
       * @summary 查询调度节点列表。
       *
       * @param tmpReq ListNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodesWithOptions(const Models::ListNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询调度节点列表。
       *
       * @param request ListNodesRequest
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodes(const Models::ListNodesRequest &request);

      /**
       * @summary 获取项目成员列表。
       *
       * @param tmpReq ListProjectMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectMembersResponse
       */
      Models::ListProjectMembersResponse listProjectMembersWithOptions(const Models::ListProjectMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取项目成员列表。
       *
       * @param request ListProjectMembersRequest
       * @return ListProjectMembersResponse
       */
      Models::ListProjectMembersResponse listProjectMembers(const Models::ListProjectMembersRequest &request);

      /**
       * @summary 获取项目列表。
       *
       * @param tmpReq ListProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjectsWithOptions(const Models::ListProjectsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取项目列表。
       *
       * @param request ListProjectsRequest
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjects(const Models::ListProjectsRequest &request);

      /**
       * @summary 分页获取发布记录列表
       *
       * @param tmpReq ListPublishRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublishRecordsResponse
       */
      Models::ListPublishRecordsResponse listPublishRecordsWithOptions(const Models::ListPublishRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页获取发布记录列表
       *
       * @param request ListPublishRecordsRequest
       * @return ListPublishRecordsResponse
       */
      Models::ListPublishRecordsResponse listPublishRecords(const Models::ListPublishRecordsRequest &request);

      /**
       * @summary 分页查询质量规则任务。
       *
       * @param tmpReq ListQualityRuleTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQualityRuleTasksResponse
       */
      Models::ListQualityRuleTasksResponse listQualityRuleTasksWithOptions(const Models::ListQualityRuleTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询质量规则任务。
       *
       * @param request ListQualityRuleTasksRequest
       * @return ListQualityRuleTasksResponse
       */
      Models::ListQualityRuleTasksResponse listQualityRuleTasks(const Models::ListQualityRuleTasksRequest &request);

      /**
       * @summary 分页查询质量规则。
       *
       * @param tmpReq ListQualityRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQualityRulesResponse
       */
      Models::ListQualityRulesResponse listQualityRulesWithOptions(const Models::ListQualityRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询质量规则。
       *
       * @param request ListQualityRulesRequest
       * @return ListQualityRulesResponse
       */
      Models::ListQualityRulesResponse listQualityRules(const Models::ListQualityRulesRequest &request);

      /**
       * @summary 分页查询质量模板。
       *
       * @param tmpReq ListQualityTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQualityTemplatesResponse
       */
      Models::ListQualityTemplatesResponse listQualityTemplatesWithOptions(const Models::ListQualityTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询质量模板。
       *
       * @param request ListQualityTemplatesRequest
       * @return ListQualityTemplatesResponse
       */
      Models::ListQualityTemplatesResponse listQualityTemplates(const Models::ListQualityTemplatesRequest &request);

      /**
       * @summary 分页查询质量监控任务。
       *
       * @param tmpReq ListQualityWatchTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQualityWatchTasksResponse
       */
      Models::ListQualityWatchTasksResponse listQualityWatchTasksWithOptions(const Models::ListQualityWatchTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询质量监控任务。
       *
       * @param request ListQualityWatchTasksRequest
       * @return ListQualityWatchTasksResponse
       */
      Models::ListQualityWatchTasksResponse listQualityWatchTasks(const Models::ListQualityWatchTasksRequest &request);

      /**
       * @summary 分页查询质量监控对象。
       *
       * @param tmpReq ListQualityWatchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQualityWatchesResponse
       */
      Models::ListQualityWatchesResponse listQualityWatchesWithOptions(const Models::ListQualityWatchesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询质量监控对象。
       *
       * @param request ListQualityWatchesRequest
       * @return ListQualityWatchesResponse
       */
      Models::ListQualityWatchesResponse listQualityWatches(const Models::ListQualityWatchesRequest &request);

      /**
       * @summary 分页获取权限操作列表
       *
       * @param tmpReq ListResourcePermissionOperationLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourcePermissionOperationLogResponse
       */
      Models::ListResourcePermissionOperationLogResponse listResourcePermissionOperationLogWithOptions(const Models::ListResourcePermissionOperationLogRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页获取权限操作列表
       *
       * @param request ListResourcePermissionOperationLogRequest
       * @return ListResourcePermissionOperationLogResponse
       */
      Models::ListResourcePermissionOperationLogResponse listResourcePermissionOperationLog(const Models::ListResourcePermissionOperationLogRequest &request);

      /**
       * @summary 分页获取权限记录列表
       *
       * @param tmpReq ListResourcePermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourcePermissionsResponse
       */
      Models::ListResourcePermissionsResponse listResourcePermissionsWithOptions(const Models::ListResourcePermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页获取权限记录列表
       *
       * @param request ListResourcePermissionsRequest
       * @return ListResourcePermissionsResponse
       */
      Models::ListResourcePermissionsResponse listResourcePermissions(const Models::ListResourcePermissionsRequest &request);

      /**
       * @summary 分页查询行级权限
       *
       * @param tmpReq ListRowPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRowPermissionResponse
       */
      Models::ListRowPermissionResponse listRowPermissionWithOptions(const Models::ListRowPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询行级权限
       *
       * @param request ListRowPermissionRequest
       * @return ListRowPermissionResponse
       */
      Models::ListRowPermissionResponse listRowPermission(const Models::ListRowPermissionRequest &request);

      /**
       * @summary 分页查询指定用户行级权限
       *
       * @param tmpReq ListRowPermissionByUserIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRowPermissionByUserIdResponse
       */
      Models::ListRowPermissionByUserIdResponse listRowPermissionByUserIdWithOptions(const Models::ListRowPermissionByUserIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询指定用户行级权限
       *
       * @param request ListRowPermissionByUserIdRequest
       * @return ListRowPermissionByUserIdResponse
       */
      Models::ListRowPermissionByUserIdResponse listRowPermissionByUserId(const Models::ListRowPermissionByUserIdRequest &request);

      /**
       * @summary 分页查询安全识别结果的识别记录。
       *
       * @param tmpReq ListSecurityIdentifyRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecurityIdentifyRecordsResponse
       */
      Models::ListSecurityIdentifyRecordsResponse listSecurityIdentifyRecordsWithOptions(const Models::ListSecurityIdentifyRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询安全识别结果的识别记录。
       *
       * @param request ListSecurityIdentifyRecordsRequest
       * @return ListSecurityIdentifyRecordsResponse
       */
      Models::ListSecurityIdentifyRecordsResponse listSecurityIdentifyRecords(const Models::ListSecurityIdentifyRecordsRequest &request);

      /**
       * @summary 分页查询安全识别结果。
       *
       * @param tmpReq ListSecurityIdentifyResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecurityIdentifyResultsResponse
       */
      Models::ListSecurityIdentifyResultsResponse listSecurityIdentifyResultsWithOptions(const Models::ListSecurityIdentifyResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询安全识别结果。
       *
       * @param request ListSecurityIdentifyResultsRequest
       * @return ListSecurityIdentifyResultsResponse
       */
      Models::ListSecurityIdentifyResultsResponse listSecurityIdentifyResults(const Models::ListSecurityIdentifyResultsRequest &request);

      /**
       * @summary 分页查询标准列表。
       *
       * @param tmpReq ListStandardsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStandardsResponse
       */
      Models::ListStandardsResponse listStandardsWithOptions(const Models::ListStandardsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询标准列表。
       *
       * @param request ListStandardsRequest
       * @return ListStandardsResponse
       */
      Models::ListStandardsResponse listStandards(const Models::ListStandardsRequest &request);

      /**
       * @summary 分页获取待发布记录列表
       *
       * @param tmpReq ListSubmitRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubmitRecordsResponse
       */
      Models::ListSubmitRecordsResponse listSubmitRecordsWithOptions(const Models::ListSubmitRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页获取待发布记录列表
       *
       * @param request ListSubmitRecordsRequest
       * @return ListSubmitRecordsResponse
       */
      Models::ListSubmitRecordsResponse listSubmitRecords(const Models::ListSubmitRecordsRequest &request);

      /**
       * @summary 分页查询查询资产表元数据。
       *
       * @param tmpReq ListTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTablesWithOptions(const Models::ListTablesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询查询资产表元数据。
       *
       * @param request ListTablesRequest
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTables(const Models::ListTablesRequest &request);

      /**
       * @summary 查询租户成员列表
       *
       * @param tmpReq ListTenantMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTenantMembersResponse
       */
      Models::ListTenantMembersResponse listTenantMembersWithOptions(const Models::ListTenantMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询租户成员列表
       *
       * @param request ListTenantMembersRequest
       * @return ListTenantMembersResponse
       */
      Models::ListTenantMembersResponse listTenantMembers(const Models::ListTenantMembersRequest &request);

      /**
       * @summary 用户组成员列表分页查询.
       *
       * @param tmpReq ListUserGroupMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserGroupMembersResponse
       */
      Models::ListUserGroupMembersResponse listUserGroupMembersWithOptions(const Models::ListUserGroupMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用户组成员列表分页查询.
       *
       * @param request ListUserGroupMembersRequest
       * @return ListUserGroupMembersResponse
       */
      Models::ListUserGroupMembersResponse listUserGroupMembers(const Models::ListUserGroupMembersRequest &request);

      /**
       * @summary 用户组列表分页查询.
       *
       * @param tmpReq ListUserGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserGroupsResponse
       */
      Models::ListUserGroupsResponse listUserGroupsWithOptions(const Models::ListUserGroupsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用户组列表分页查询.
       *
       * @param request ListUserGroupsRequest
       * @return ListUserGroupsResponse
       */
      Models::ListUserGroupsResponse listUserGroups(const Models::ListUserGroupsRequest &request);

      /**
       * @summary 下线离线计算任务。
       *
       * @param request OfflineBatchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineBatchTaskResponse
       */
      Models::OfflineBatchTaskResponse offlineBatchTaskWithOptions(const Models::OfflineBatchTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下线离线计算任务。
       *
       * @param request OfflineBatchTaskRequest
       * @return OfflineBatchTaskResponse
       */
      Models::OfflineBatchTaskResponse offlineBatchTask(const Models::OfflineBatchTaskRequest &request);

      /**
       * @summary 下线业务实体、
       *
       * @param tmpReq OfflineBizEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineBizEntityResponse
       */
      Models::OfflineBizEntityResponse offlineBizEntityWithOptions(const Models::OfflineBizEntityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下线业务实体、
       *
       * @param request OfflineBizEntityRequest
       * @return OfflineBizEntityResponse
       */
      Models::OfflineBizEntityResponse offlineBizEntity(const Models::OfflineBizEntityRequest &request);

      /**
       * @summary 下线集成管道任务。
       *
       * @param tmpReq OfflinePipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflinePipelineResponse
       */
      Models::OfflinePipelineResponse offlinePipelineWithOptions(const Models::OfflinePipelineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下线集成管道任务。
       *
       * @param request OfflinePipelineRequest
       * @return OfflinePipelineResponse
       */
      Models::OfflinePipelineResponse offlinePipeline(const Models::OfflinePipelineRequest &request);

      /**
       * @summary 异步下线集成管道任务。
       *
       * @param tmpReq OfflinePipelineByAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflinePipelineByAsyncResponse
       */
      Models::OfflinePipelineByAsyncResponse offlinePipelineByAsyncWithOptions(const Models::OfflinePipelineByAsyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 异步下线集成管道任务。
       *
       * @param request OfflinePipelineByAsyncRequest
       * @return OfflinePipelineByAsyncResponse
       */
      Models::OfflinePipelineByAsyncResponse offlinePipelineByAsync(const Models::OfflinePipelineByAsyncRequest &request);

      /**
       * @summary 下线标准。
       *
       * @param tmpReq OfflineStandardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineStandardResponse
       */
      Models::OfflineStandardResponse offlineStandardWithOptions(const Models::OfflineStandardRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下线标准。
       *
       * @param request OfflineStandardRequest
       * @return OfflineStandardResponse
       */
      Models::OfflineStandardResponse offlineStandard(const Models::OfflineStandardRequest &request);

      /**
       * @summary 上线业务实体。
       *
       * @param tmpReq OnlineBizEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineBizEntityResponse
       */
      Models::OnlineBizEntityResponse onlineBizEntityWithOptions(const Models::OnlineBizEntityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上线业务实体。
       *
       * @param request OnlineBizEntityRequest
       * @return OnlineBizEntityResponse
       */
      Models::OnlineBizEntityResponse onlineBizEntity(const Models::OnlineBizEntityRequest &request);

      /**
       * @summary 运维实例。
       *
       * @param tmpReq OperateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateInstanceResponse
       */
      Models::OperateInstanceResponse operateInstanceWithOptions(const Models::OperateInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 运维实例。
       *
       * @param request OperateInstanceRequest
       * @return OperateInstanceResponse
       */
      Models::OperateInstanceResponse operateInstance(const Models::OperateInstanceRequest &request);

      /**
       * @summary 解析离线计算任务的逻辑表依赖，注意解析结果上游依赖信息中可能包含自依赖节点（上游节点ID和解析代码的任务节点ID相同）需要用户自己进行处理。
       *
       * @param tmpReq ParseBatchTaskDependencyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ParseBatchTaskDependencyResponse
       */
      Models::ParseBatchTaskDependencyResponse parseBatchTaskDependencyWithOptions(const Models::ParseBatchTaskDependencyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解析离线计算任务的逻辑表依赖，注意解析结果上游依赖信息中可能包含自依赖节点（上游节点ID和解析代码的任务节点ID相同）需要用户自己进行处理。
       *
       * @param request ParseBatchTaskDependencyRequest
       * @return ParseBatchTaskDependencyResponse
       */
      Models::ParseBatchTaskDependencyResponse parseBatchTaskDependency(const Models::ParseBatchTaskDependencyRequest &request);

      /**
       * @summary 暂停物理节点调度。
       *
       * @param tmpReq PausePhysicalNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PausePhysicalNodeResponse
       */
      Models::PausePhysicalNodeResponse pausePhysicalNodeWithOptions(const Models::PausePhysicalNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 暂停物理节点调度。
       *
       * @param request PausePhysicalNodeRequest
       * @return PausePhysicalNodeResponse
       */
      Models::PausePhysicalNodeResponse pausePhysicalNode(const Models::PausePhysicalNodeRequest &request);

      /**
       * @summary 发布数据服务API到生产环境。
       *
       * @param request PublishDataServiceApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishDataServiceApiResponse
       */
      Models::PublishDataServiceApiResponse publishDataServiceApiWithOptions(const Models::PublishDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布数据服务API到生产环境。
       *
       * @param request PublishDataServiceApiRequest
       * @return PublishDataServiceApiResponse
       */
      Models::PublishDataServiceApiResponse publishDataServiceApi(const Models::PublishDataServiceApiRequest &request);

      /**
       * @summary 批量发布对象
       *
       * @param tmpReq PublishObjectListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishObjectListResponse
       */
      Models::PublishObjectListResponse publishObjectListWithOptions(const Models::PublishObjectListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量发布对象
       *
       * @param request PublishObjectListRequest
       * @return PublishObjectListResponse
       */
      Models::PublishObjectListResponse publishObjectList(const Models::PublishObjectListRequest &request);

      /**
       * @summary 发布标准。
       *
       * @param tmpReq PublishStandardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishStandardResponse
       */
      Models::PublishStandardResponse publishStandardWithOptions(const Models::PublishStandardRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布标准。
       *
       * @param request PublishStandardRequest
       * @return PublishStandardResponse
       */
      Models::PublishStandardResponse publishStandard(const Models::PublishStandardRequest &request);

      /**
       * @summary 删除项目成员。
       *
       * @param tmpReq RemoveProjectMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveProjectMemberResponse
       */
      Models::RemoveProjectMemberResponse removeProjectMemberWithOptions(const Models::RemoveProjectMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除项目成员。
       *
       * @param request RemoveProjectMemberRequest
       * @return RemoveProjectMemberResponse
       */
      Models::RemoveProjectMemberResponse removeProjectMember(const Models::RemoveProjectMemberRequest &request);

      /**
       * @summary 批量删除质量规则和调度的绑定关系。
       *
       * @param tmpReq RemoveQualityRuleSchedulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveQualityRuleSchedulesResponse
       */
      Models::RemoveQualityRuleSchedulesResponse removeQualityRuleSchedulesWithOptions(const Models::RemoveQualityRuleSchedulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除质量规则和调度的绑定关系。
       *
       * @param request RemoveQualityRuleSchedulesRequest
       * @return RemoveQualityRuleSchedulesResponse
       */
      Models::RemoveQualityRuleSchedulesResponse removeQualityRuleSchedules(const Models::RemoveQualityRuleSchedulesRequest &request);

      /**
       * @summary 删除租户成员
       *
       * @param tmpReq RemoveTenantMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTenantMemberResponse
       */
      Models::RemoveTenantMemberResponse removeTenantMemberWithOptions(const Models::RemoveTenantMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除租户成员
       *
       * @param request RemoveTenantMemberRequest
       * @return RemoveTenantMemberResponse
       */
      Models::RemoveTenantMemberResponse removeTenantMember(const Models::RemoveTenantMemberRequest &request);

      /**
       * @summary 移除用户组成员.
       *
       * @param tmpReq RemoveUserGroupMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserGroupMemberResponse
       */
      Models::RemoveUserGroupMemberResponse removeUserGroupMemberWithOptions(const Models::RemoveUserGroupMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移除用户组成员.
       *
       * @param request RemoveUserGroupMemberRequest
       * @return RemoveUserGroupMemberResponse
       */
      Models::RemoveUserGroupMemberResponse removeUserGroupMember(const Models::RemoveUserGroupMemberRequest &request);

      /**
       * @summary 更新项目白名单。
       *
       * @param tmpReq ReplaceProjectWhiteListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceProjectWhiteListsResponse
       */
      Models::ReplaceProjectWhiteListsResponse replaceProjectWhiteListsWithOptions(const Models::ReplaceProjectWhiteListsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新项目白名单。
       *
       * @param request ReplaceProjectWhiteListsRequest
       * @return ReplaceProjectWhiteListsResponse
       */
      Models::ReplaceProjectWhiteListsResponse replaceProjectWhiteLists(const Models::ReplaceProjectWhiteListsRequest &request);

      /**
       * @summary 恢复物理节点调度。
       *
       * @param tmpReq ResumePhysicalNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumePhysicalNodeResponse
       */
      Models::ResumePhysicalNodeResponse resumePhysicalNodeWithOptions(const Models::ResumePhysicalNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 恢复物理节点调度。
       *
       * @param request ResumePhysicalNodeRequest
       * @return ResumePhysicalNodeResponse
       */
      Models::ResumePhysicalNodeResponse resumePhysicalNode(const Models::ResumePhysicalNodeRequest &request);

      /**
       * @summary 重新转交运行失败的转交任务
       *
       * @param tmpReq RetryTransferOwnershipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryTransferOwnershipResponse
       */
      Models::RetryTransferOwnershipResponse retryTransferOwnershipWithOptions(const Models::RetryTransferOwnershipRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重新转交运行失败的转交任务
       *
       * @param request RetryTransferOwnershipRequest
       * @return RetryTransferOwnershipResponse
       */
      Models::RetryTransferOwnershipResponse retryTransferOwnership(const Models::RetryTransferOwnershipRequest &request);

      /**
       * @summary 回收API授权。
       *
       * @param tmpReq RevokeDataServiceApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeDataServiceApiResponse
       */
      Models::RevokeDataServiceApiResponse revokeDataServiceApiWithOptions(const Models::RevokeDataServiceApiRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 回收API授权。
       *
       * @param request RevokeDataServiceApiRequest
       * @return RevokeDataServiceApiResponse
       */
      Models::RevokeDataServiceApiResponse revokeDataServiceApi(const Models::RevokeDataServiceApiRequest &request);

      /**
       * @summary 回收用户资源授权
       *
       * @param tmpReq RevokeResourcePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeResourcePermissionResponse
       */
      Models::RevokeResourcePermissionResponse revokeResourcePermissionWithOptions(const Models::RevokeResourcePermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 回收用户资源授权
       *
       * @param request RevokeResourcePermissionRequest
       * @return RevokeResourcePermissionResponse
       */
      Models::RevokeResourcePermissionResponse revokeResourcePermission(const Models::RevokeResourcePermissionRequest &request);

      /**
       * @summary 终止即席查询任务。
       *
       * @param request StopAdHocTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAdHocTaskResponse
       */
      Models::StopAdHocTaskResponse stopAdHocTaskWithOptions(const Models::StopAdHocTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 终止即席查询任务。
       *
       * @param request StopAdHocTaskRequest
       * @return StopAdHocTaskResponse
       */
      Models::StopAdHocTaskResponse stopAdHocTask(const Models::StopAdHocTaskRequest &request);

      /**
       * @summary 提交离线计算任务。
       *
       * @param tmpReq SubmitBatchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitBatchTaskResponse
       */
      Models::SubmitBatchTaskResponse submitBatchTaskWithOptions(const Models::SubmitBatchTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交离线计算任务。
       *
       * @param request SubmitBatchTaskRequest
       * @return SubmitBatchTaskResponse
       */
      Models::SubmitBatchTaskResponse submitBatchTask(const Models::SubmitBatchTaskRequest &request);

      /**
       * @summary 批量提交规则任务,支持试跑。
       *
       * @param tmpReq SubmitQualityRuleTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitQualityRuleTasksResponse
       */
      Models::SubmitQualityRuleTasksResponse submitQualityRuleTasksWithOptions(const Models::SubmitQualityRuleTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量提交规则任务,支持试跑。
       *
       * @param request SubmitQualityRuleTasksRequest
       * @return SubmitQualityRuleTasksResponse
       */
      Models::SubmitQualityRuleTasksResponse submitQualityRuleTasks(const Models::SubmitQualityRuleTasksRequest &request);

      /**
       * @summary 批量提交监控对象校验任务。
       *
       * @param tmpReq SubmitQualityWatchTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitQualityWatchTasksResponse
       */
      Models::SubmitQualityWatchTasksResponse submitQualityWatchTasksWithOptions(const Models::SubmitQualityWatchTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量提交监控对象校验任务。
       *
       * @param request SubmitQualityWatchTasksRequest
       * @return SubmitQualityWatchTasksResponse
       */
      Models::SubmitQualityWatchTasksResponse submitQualityWatchTasks(const Models::SubmitQualityWatchTasksRequest &request);

      /**
       * @summary 同步部门信息。
       *
       * @param tmpReq SyncDepartmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncDepartmentResponse
       */
      Models::SyncDepartmentResponse syncDepartmentWithOptions(const Models::SyncDepartmentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步部门信息。
       *
       * @param request SyncDepartmentRequest
       * @return SyncDepartmentResponse
       */
      Models::SyncDepartmentResponse syncDepartment(const Models::SyncDepartmentRequest &request);

      /**
       * @summary 同步部门成员信息
       *
       * @param tmpReq SyncDepartmentUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncDepartmentUserResponse
       */
      Models::SyncDepartmentUserResponse syncDepartmentUserWithOptions(const Models::SyncDepartmentUserRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步部门成员信息
       *
       * @param request SyncDepartmentUserRequest
       * @return SyncDepartmentUserResponse
       */
      Models::SyncDepartmentUserResponse syncDepartmentUser(const Models::SyncDepartmentUserRequest &request);

      /**
       * @summary 一键转交负责人
       *
       * @param tmpReq TransferOwnershipForAllObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferOwnershipForAllObjectResponse
       */
      Models::TransferOwnershipForAllObjectResponse transferOwnershipForAllObjectWithOptions(const Models::TransferOwnershipForAllObjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 一键转交负责人
       *
       * @param request TransferOwnershipForAllObjectRequest
       * @return TransferOwnershipForAllObjectResponse
       */
      Models::TransferOwnershipForAllObjectResponse transferOwnershipForAllObject(const Models::TransferOwnershipForAllObjectRequest &request);

      /**
       * @summary 编辑即席查询文件。
       *
       * @param tmpReq UpdateAdHocFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAdHocFileResponse
       */
      Models::UpdateAdHocFileResponse updateAdHocFileWithOptions(const Models::UpdateAdHocFileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑即席查询文件。
       *
       * @param request UpdateAdHocFileRequest
       * @return UpdateAdHocFileResponse
       */
      Models::UpdateAdHocFileResponse updateAdHocFile(const Models::UpdateAdHocFileRequest &request);

      /**
       * @summary 编辑离线计算任务。
       *
       * @param tmpReq UpdateBatchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBatchTaskResponse
       */
      Models::UpdateBatchTaskResponse updateBatchTaskWithOptions(const Models::UpdateBatchTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑离线计算任务。
       *
       * @param request UpdateBatchTaskRequest
       * @return UpdateBatchTaskResponse
       */
      Models::UpdateBatchTaskResponse updateBatchTask(const Models::UpdateBatchTaskRequest &request);

      /**
       * @summary 编辑离线计算任务自定义血缘。
       *
       * @param tmpReq UpdateBatchTaskUdfLineagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBatchTaskUdfLineagesResponse
       */
      Models::UpdateBatchTaskUdfLineagesResponse updateBatchTaskUdfLineagesWithOptions(const Models::UpdateBatchTaskUdfLineagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑离线计算任务自定义血缘。
       *
       * @param request UpdateBatchTaskUdfLineagesRequest
       * @return UpdateBatchTaskUdfLineagesResponse
       */
      Models::UpdateBatchTaskUdfLineagesResponse updateBatchTaskUdfLineages(const Models::UpdateBatchTaskUdfLineagesRequest &request);

      /**
       * @summary 更新业务实体、
       *
       * @param tmpReq UpdateBizEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBizEntityResponse
       */
      Models::UpdateBizEntityResponse updateBizEntityWithOptions(const Models::UpdateBizEntityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新业务实体、
       *
       * @param request UpdateBizEntityRequest
       * @return UpdateBizEntityResponse
       */
      Models::UpdateBizEntityResponse updateBizEntity(const Models::UpdateBizEntityRequest &request);

      /**
       * @summary 更新业务指标
       *
       * @param tmpReq UpdateBizMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBizMetricResponse
       */
      Models::UpdateBizMetricResponse updateBizMetricWithOptions(const Models::UpdateBizMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新业务指标
       *
       * @param request UpdateBizMetricRequest
       * @return UpdateBizMetricResponse
       */
      Models::UpdateBizMetricResponse updateBizMetric(const Models::UpdateBizMetricRequest &request);

      /**
       * @summary 更新数据板块。
       *
       * @param tmpReq UpdateBizUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBizUnitResponse
       */
      Models::UpdateBizUnitResponse updateBizUnitWithOptions(const Models::UpdateBizUnitRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据板块。
       *
       * @param request UpdateBizUnitRequest
       * @return UpdateBizUnitResponse
       */
      Models::UpdateBizUnitResponse updateBizUnit(const Models::UpdateBizUnitRequest &request);

      /**
       * @summary 修改计算源。
       *
       * @param tmpReq UpdateComputeSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeSourceResponse
       */
      Models::UpdateComputeSourceResponse updateComputeSourceWithOptions(const Models::UpdateComputeSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改计算源。
       *
       * @param request UpdateComputeSourceRequest
       * @return UpdateComputeSourceResponse
       */
      Models::UpdateComputeSourceResponse updateComputeSource(const Models::UpdateComputeSourceRequest &request);

      /**
       * @summary 更新主题域。
       *
       * @param tmpReq UpdateDataDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataDomainResponse
       */
      Models::UpdateDataDomainResponse updateDataDomainWithOptions(const Models::UpdateDataDomainRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新主题域。
       *
       * @param request UpdateDataDomainRequest
       * @return UpdateDataDomainResponse
       */
      Models::UpdateDataDomainResponse updateDataDomain(const Models::UpdateDataDomainRequest &request);

      /**
       * @summary 编辑数据源基本信息
       *
       * @param tmpReq UpdateDataSourceBasicInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataSourceBasicInfoResponse
       */
      Models::UpdateDataSourceBasicInfoResponse updateDataSourceBasicInfoWithOptions(const Models::UpdateDataSourceBasicInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑数据源基本信息
       *
       * @param request UpdateDataSourceBasicInfoRequest
       * @return UpdateDataSourceBasicInfoResponse
       */
      Models::UpdateDataSourceBasicInfoResponse updateDataSourceBasicInfo(const Models::UpdateDataSourceBasicInfoRequest &request);

      /**
       * @summary 编辑数据源连接配置项
       *
       * @param tmpReq UpdateDataSourceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataSourceConfigResponse
       */
      Models::UpdateDataSourceConfigResponse updateDataSourceConfigWithOptions(const Models::UpdateDataSourceConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑数据源连接配置项
       *
       * @param request UpdateDataSourceConfigRequest
       * @return UpdateDataSourceConfigResponse
       */
      Models::UpdateDataSourceConfigResponse updateDataSourceConfig(const Models::UpdateDataSourceConfigRequest &request);

      /**
       * @summary 修改菜单树文件所在目录
       *
       * @param request UpdateFileDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFileDirectoryResponse
       */
      Models::UpdateFileDirectoryResponse updateFileDirectoryWithOptions(const Models::UpdateFileDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改菜单树文件所在目录
       *
       * @param request UpdateFileDirectoryRequest
       * @return UpdateFileDirectoryResponse
       */
      Models::UpdateFileDirectoryResponse updateFileDirectory(const Models::UpdateFileDirectoryRequest &request);

      /**
       * @summary 修改菜单树文件名称
       *
       * @param request UpdateFileNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFileNameResponse
       */
      Models::UpdateFileNameResponse updateFileNameWithOptions(const Models::UpdateFileNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改菜单树文件名称
       *
       * @param request UpdateFileNameRequest
       * @return UpdateFileNameResponse
       */
      Models::UpdateFileNameResponse updateFileName(const Models::UpdateFileNameRequest &request);

      /**
       * @summary 更新集成管道任务。
       *
       * @param tmpReq UpdatePipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePipelineResponse
       */
      Models::UpdatePipelineResponse updatePipelineWithOptions(const Models::UpdatePipelineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新集成管道任务。
       *
       * @param request UpdatePipelineRequest
       * @return UpdatePipelineResponse
       */
      Models::UpdatePipelineResponse updatePipeline(const Models::UpdatePipelineRequest &request);

      /**
       * @summary 异步更新集成管道任务。
       *
       * @param tmpReq UpdatePipelineByAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePipelineByAsyncResponse
       */
      Models::UpdatePipelineByAsyncResponse updatePipelineByAsyncWithOptions(const Models::UpdatePipelineByAsyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 异步更新集成管道任务。
       *
       * @param request UpdatePipelineByAsyncRequest
       * @return UpdatePipelineByAsyncResponse
       */
      Models::UpdatePipelineByAsyncResponse updatePipelineByAsync(const Models::UpdatePipelineByAsyncRequest &request);

      /**
       * @summary 增加项目成员。
       *
       * @param tmpReq UpdateProjectMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectMemberResponse
       */
      Models::UpdateProjectMemberResponse updateProjectMemberWithOptions(const Models::UpdateProjectMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 增加项目成员。
       *
       * @param request UpdateProjectMemberRequest
       * @return UpdateProjectMemberResponse
       */
      Models::UpdateProjectMemberResponse updateProjectMember(const Models::UpdateProjectMemberRequest &request);

      /**
       * @summary 批量开启或关闭质量规则。
       *
       * @param tmpReq UpdateQualityRuleSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQualityRuleSwitchResponse
       */
      Models::UpdateQualityRuleSwitchResponse updateQualityRuleSwitchWithOptions(const Models::UpdateQualityRuleSwitchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量开启或关闭质量规则。
       *
       * @param request UpdateQualityRuleSwitchRequest
       * @return UpdateQualityRuleSwitchResponse
       */
      Models::UpdateQualityRuleSwitchResponse updateQualityRuleSwitch(const Models::UpdateQualityRuleSwitchRequest &request);

      /**
       * @summary 批量开启或关闭质量监控对象。
       *
       * @param tmpReq UpdateQualityWatchSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQualityWatchSwitchResponse
       */
      Models::UpdateQualityWatchSwitchResponse updateQualityWatchSwitchWithOptions(const Models::UpdateQualityWatchSwitchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量开启或关闭质量监控对象。
       *
       * @param request UpdateQualityWatchSwitchRequest
       * @return UpdateQualityWatchSwitchResponse
       */
      Models::UpdateQualityWatchSwitchResponse updateQualityWatchSwitch(const Models::UpdateQualityWatchSwitchRequest &request);

      /**
       * @summary 编辑资源文件。
       *
       * @param tmpReq UpdateResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceResponse
       */
      Models::UpdateResourceResponse updateResourceWithOptions(const Models::UpdateResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑资源文件。
       *
       * @param request UpdateResourceRequest
       * @return UpdateResourceResponse
       */
      Models::UpdateResourceResponse updateResource(const Models::UpdateResourceRequest &request);

      /**
       * @summary 更新行级权限
       *
       * @param tmpReq UpdateRowPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRowPermissionResponse
       */
      Models::UpdateRowPermissionResponse updateRowPermissionWithOptions(const Models::UpdateRowPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新行级权限
       *
       * @param request UpdateRowPermissionRequest
       * @return UpdateRowPermissionResponse
       */
      Models::UpdateRowPermissionResponse updateRowPermission(const Models::UpdateRowPermissionRequest &request);

      /**
       * @summary 更新数据分类。
       *
       * @param tmpReq UpdateSecurityClassifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecurityClassifyResponse
       */
      Models::UpdateSecurityClassifyResponse updateSecurityClassifyWithOptions(const Models::UpdateSecurityClassifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据分类。
       *
       * @param request UpdateSecurityClassifyRequest
       * @return UpdateSecurityClassifyResponse
       */
      Models::UpdateSecurityClassifyResponse updateSecurityClassify(const Models::UpdateSecurityClassifyRequest &request);

      /**
       * @summary 更新数据分类目录。
       *
       * @param tmpReq UpdateSecurityClassifyCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecurityClassifyCatalogResponse
       */
      Models::UpdateSecurityClassifyCatalogResponse updateSecurityClassifyCatalogWithOptions(const Models::UpdateSecurityClassifyCatalogRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据分类目录。
       *
       * @param request UpdateSecurityClassifyCatalogRequest
       * @return UpdateSecurityClassifyCatalogResponse
       */
      Models::UpdateSecurityClassifyCatalogResponse updateSecurityClassifyCatalog(const Models::UpdateSecurityClassifyCatalogRequest &request);

      /**
       * @summary 更新安全识别结果的生效状态。
       *
       * @param tmpReq UpdateSecurityIdentifyResultStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecurityIdentifyResultStatusResponse
       */
      Models::UpdateSecurityIdentifyResultStatusResponse updateSecurityIdentifyResultStatusWithOptions(const Models::UpdateSecurityIdentifyResultStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新安全识别结果的生效状态。
       *
       * @param request UpdateSecurityIdentifyResultStatusRequest
       * @return UpdateSecurityIdentifyResultStatusResponse
       */
      Models::UpdateSecurityIdentifyResultStatusResponse updateSecurityIdentifyResultStatus(const Models::UpdateSecurityIdentifyResultStatusRequest &request);

      /**
       * @summary 通过分级顺序更新数据分级。
       *
       * @param tmpReq UpdateSecurityLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecurityLevelResponse
       */
      Models::UpdateSecurityLevelResponse updateSecurityLevelWithOptions(const Models::UpdateSecurityLevelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过分级顺序更新数据分级。
       *
       * @param request UpdateSecurityLevelRequest
       * @return UpdateSecurityLevelResponse
       */
      Models::UpdateSecurityLevelResponse updateSecurityLevel(const Models::UpdateSecurityLevelRequest &request);

      /**
       * @summary 更新标准。
       *
       * @param tmpReq UpdateStandardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStandardResponse
       */
      Models::UpdateStandardResponse updateStandardWithOptions(const Models::UpdateStandardRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新标准。
       *
       * @param request UpdateStandardRequest
       * @return UpdateStandardResponse
       */
      Models::UpdateStandardResponse updateStandard(const Models::UpdateStandardRequest &request);

      /**
       * @summary 更新数据标准码表。
       *
       * @param tmpReq UpdateStandardLookupTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStandardLookupTableResponse
       */
      Models::UpdateStandardLookupTableResponse updateStandardLookupTableWithOptions(const Models::UpdateStandardLookupTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据标准码表。
       *
       * @param request UpdateStandardLookupTableRequest
       * @return UpdateStandardLookupTableResponse
       */
      Models::UpdateStandardLookupTableResponse updateStandardLookupTable(const Models::UpdateStandardLookupTableRequest &request);

      /**
       * @summary 将标准映射关系置为无效映射。
       *
       * @param tmpReq UpdateStandardMappingToInvalidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStandardMappingToInvalidResponse
       */
      Models::UpdateStandardMappingToInvalidResponse updateStandardMappingToInvalidWithOptions(const Models::UpdateStandardMappingToInvalidRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将标准映射关系置为无效映射。
       *
       * @param request UpdateStandardMappingToInvalidRequest
       * @return UpdateStandardMappingToInvalidResponse
       */
      Models::UpdateStandardMappingToInvalidResponse updateStandardMappingToInvalid(const Models::UpdateStandardMappingToInvalidRequest &request);

      /**
       * @summary 更新标准集。
       *
       * @param tmpReq UpdateStandardSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStandardSetResponse
       */
      Models::UpdateStandardSetResponse updateStandardSetWithOptions(const Models::UpdateStandardSetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新标准集。
       *
       * @param request UpdateStandardSetRequest
       * @return UpdateStandardSetResponse
       */
      Models::UpdateStandardSetResponse updateStandardSet(const Models::UpdateStandardSetRequest &request);

      /**
       * @summary 更新数据标准模板。
       *
       * @param tmpReq UpdateStandardTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStandardTemplateResponse
       */
      Models::UpdateStandardTemplateResponse updateStandardTemplateWithOptions(const Models::UpdateStandardTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据标准模板。
       *
       * @param request UpdateStandardTemplateRequest
       * @return UpdateStandardTemplateResponse
       */
      Models::UpdateStandardTemplateResponse updateStandardTemplate(const Models::UpdateStandardTemplateRequest &request);

      /**
       * @summary 更新数据标准词根。
       *
       * @param tmpReq UpdateStandardWordRootRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStandardWordRootResponse
       */
      Models::UpdateStandardWordRootResponse updateStandardWordRootWithOptions(const Models::UpdateStandardWordRootRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据标准词根。
       *
       * @param request UpdateStandardWordRootRequest
       * @return UpdateStandardWordRootResponse
       */
      Models::UpdateStandardWordRootResponse updateStandardWordRoot(const Models::UpdateStandardWordRootRequest &request);

      /**
       * @summary 修改租户计算设置。
       *
       * @param tmpReq UpdateTenantComputeEngineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTenantComputeEngineResponse
       */
      Models::UpdateTenantComputeEngineResponse updateTenantComputeEngineWithOptions(const Models::UpdateTenantComputeEngineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改租户计算设置。
       *
       * @param request UpdateTenantComputeEngineRequest
       * @return UpdateTenantComputeEngineResponse
       */
      Models::UpdateTenantComputeEngineResponse updateTenantComputeEngine(const Models::UpdateTenantComputeEngineRequest &request);

      /**
       * @summary 编辑租户成员
       *
       * @param tmpReq UpdateTenantMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTenantMemberResponse
       */
      Models::UpdateTenantMemberResponse updateTenantMemberWithOptions(const Models::UpdateTenantMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑租户成员
       *
       * @param request UpdateTenantMemberRequest
       * @return UpdateTenantMemberResponse
       */
      Models::UpdateTenantMemberResponse updateTenantMember(const Models::UpdateTenantMemberRequest &request);

      /**
       * @summary 编辑自定义函数。
       *
       * @param tmpReq UpdateUdfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUdfResponse
       */
      Models::UpdateUdfResponse updateUdfWithOptions(const Models::UpdateUdfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑自定义函数。
       *
       * @param request UpdateUdfRequest
       * @return UpdateUdfResponse
       */
      Models::UpdateUdfResponse updateUdf(const Models::UpdateUdfRequest &request);

      /**
       * @summary 编辑用户组.
       *
       * @param tmpReq UpdateUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserGroupResponse
       */
      Models::UpdateUserGroupResponse updateUserGroupWithOptions(const Models::UpdateUserGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑用户组.
       *
       * @param request UpdateUserGroupRequest
       * @return UpdateUserGroupResponse
       */
      Models::UpdateUserGroupResponse updateUserGroup(const Models::UpdateUserGroupRequest &request);

      /**
       * @summary 编辑用户组启用开关.
       *
       * @param request UpdateUserGroupSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserGroupSwitchResponse
       */
      Models::UpdateUserGroupSwitchResponse updateUserGroupSwitchWithOptions(const Models::UpdateUserGroupSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑用户组启用开关.
       *
       * @param request UpdateUserGroupSwitchRequest
       * @return UpdateUserGroupSwitchResponse
       */
      Models::UpdateUserGroupSwitchResponse updateUserGroupSwitch(const Models::UpdateUserGroupSwitchRequest &request);

      /**
       * @summary 新建或者修改质量规则。
       *
       * @param tmpReq UpsertQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertQualityRuleResponse
       */
      Models::UpsertQualityRuleResponse upsertQualityRuleWithOptions(const Models::UpsertQualityRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建或者修改质量规则。
       *
       * @param request UpsertQualityRuleRequest
       * @return UpsertQualityRuleResponse
       */
      Models::UpsertQualityRuleResponse upsertQualityRule(const Models::UpsertQualityRuleRequest &request);

      /**
       * @summary 新建或者修改调度设置。
       *
       * @param tmpReq UpsertQualityScheduleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertQualityScheduleResponse
       */
      Models::UpsertQualityScheduleResponse upsertQualityScheduleWithOptions(const Models::UpsertQualityScheduleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建或者修改调度设置。
       *
       * @param request UpsertQualityScheduleRequest
       * @return UpsertQualityScheduleResponse
       */
      Models::UpsertQualityScheduleResponse upsertQualitySchedule(const Models::UpsertQualityScheduleRequest &request);

      /**
       * @summary 新建或者修改质量模板。
       *
       * @param tmpReq UpsertQualityTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertQualityTemplateResponse
       */
      Models::UpsertQualityTemplateResponse upsertQualityTemplateWithOptions(const Models::UpsertQualityTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建或者修改质量模板。
       *
       * @param request UpsertQualityTemplateRequest
       * @return UpsertQualityTemplateResponse
       */
      Models::UpsertQualityTemplateResponse upsertQualityTemplate(const Models::UpsertQualityTemplateRequest &request);

      /**
       * @summary 新建或更改质量监控对象, 支持添加多种类型的质量监控对象，包括：Dataphin表，全域表，数据源，指标，实时元表。
       *
       * @param tmpReq UpsertQualityWatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertQualityWatchResponse
       */
      Models::UpsertQualityWatchResponse upsertQualityWatchWithOptions(const Models::UpsertQualityWatchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建或更改质量监控对象, 支持添加多种类型的质量监控对象，包括：Dataphin表，全域表，数据源，指标，实时元表。
       *
       * @param request UpsertQualityWatchRequest
       * @return UpsertQualityWatchResponse
       */
      Models::UpsertQualityWatchResponse upsertQualityWatch(const Models::UpsertQualityWatchRequest &request);

      /**
       * @summary 新建或者修改监控对象告警设置。
       *
       * @param tmpReq UpsertQualityWatchAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertQualityWatchAlertResponse
       */
      Models::UpsertQualityWatchAlertResponse upsertQualityWatchAlertWithOptions(const Models::UpsertQualityWatchAlertRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建或者修改监控对象告警设置。
       *
       * @param request UpsertQualityWatchAlertRequest
       * @return UpsertQualityWatchAlertResponse
       */
      Models::UpsertQualityWatchAlertResponse upsertQualityWatchAlert(const Models::UpsertQualityWatchAlertRequest &request);
  };
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
