// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_XRENGINE20221111_HPP_
#define ALIBABACLOUD_XRENGINE20221111_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/XrEngine20221111Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/XrEngine20221111.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 用户签署协议
       *
       * @param request AcceptAgreementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcceptAgreementResponse
       */
      Models::AcceptAgreementResponse acceptAgreementWithOptions(const Models::AcceptAgreementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用户签署协议
       *
       * @param request AcceptAgreementRequest
       * @return AcceptAgreementResponse
       */
      Models::AcceptAgreementResponse acceptAgreement(const Models::AcceptAgreementRequest &request);

      /**
       * @summary 添加白名单（云账号）
       *
       * @param request AddWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddWhitelistResponse
       */
      Models::AddWhitelistResponse addWhitelistWithOptions(const Models::AddWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加白名单（云账号）
       *
       * @param request AddWhitelistRequest
       * @return AddWhitelistResponse
       */
      Models::AddWhitelistResponse addWhitelist(const Models::AddWhitelistRequest &request);

      /**
       * @summary 申请ai试衣服务
       *
       * @param request ApplyForTryOnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyForTryOnResponse
       */
      Models::ApplyForTryOnResponse applyForTryOnWithOptions(const Models::ApplyForTryOnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请ai试衣服务
       *
       * @param request ApplyForTryOnRequest
       * @return ApplyForTryOnResponse
       */
      Models::ApplyForTryOnResponse applyForTryOn(const Models::ApplyForTryOnRequest &request);

      /**
       * @param request AuthUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthUserResponse
       */
      Models::AuthUserResponse authUserWithOptions(const Models::AuthUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AuthUserRequest
       * @return AuthUserResponse
       */
      Models::AuthUserResponse authUser(const Models::AuthUserRequest &request);

      /**
       * @param tmpReq BatchCreateSvcMapBindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateSvcMapBindResponse
       */
      Models::BatchCreateSvcMapBindResponse batchCreateSvcMapBindWithOptions(const Models::BatchCreateSvcMapBindRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchCreateSvcMapBindRequest
       * @return BatchCreateSvcMapBindResponse
       */
      Models::BatchCreateSvcMapBindResponse batchCreateSvcMapBind(const Models::BatchCreateSvcMapBindRequest &request);

      /**
       * @summary 取消关联
       *
       * @param tmpReq BatchDeleteSvcMapBindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteSvcMapBindResponse
       */
      Models::BatchDeleteSvcMapBindResponse batchDeleteSvcMapBindWithOptions(const Models::BatchDeleteSvcMapBindRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消关联
       *
       * @param request BatchDeleteSvcMapBindRequest
       * @return BatchDeleteSvcMapBindResponse
       */
      Models::BatchDeleteSvcMapBindResponse batchDeleteSvcMapBind(const Models::BatchDeleteSvcMapBindRequest &request);

      /**
       * @summary 构建项目
       *
       * @param request BuildProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BuildProjectResponse
       */
      Models::BuildProjectResponse buildProjectWithOptions(const Models::BuildProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 构建项目
       *
       * @param request BuildProjectRequest
       * @return BuildProjectResponse
       */
      Models::BuildProjectResponse buildProject(const Models::BuildProjectRequest &request);

      /**
       * @summary 创建，同时创建空白的pai占位
       *
       * @param request CreateLocationServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLocationServiceResponse
       */
      Models::CreateLocationServiceResponse createLocationServiceWithOptions(const Models::CreateLocationServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建，同时创建空白的pai占位
       *
       * @param request CreateLocationServiceRequest
       * @return CreateLocationServiceResponse
       */
      Models::CreateLocationServiceResponse createLocationService(const Models::CreateLocationServiceRequest &request);

      /**
       * @summary 创建项目
       *
       * @param tmpReq CreateProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProjectWithOptions(const Models::CreateProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建项目
       *
       * @param request CreateProjectRequest
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProject(const Models::CreateProjectRequest &request);

      /**
       * @summary 创建素材上传policy
       *
       * @param request CreateSourcePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSourcePolicyResponse
       */
      Models::CreateSourcePolicyResponse createSourcePolicyWithOptions(const Models::CreateSourcePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建素材上传policy
       *
       * @param request CreateSourcePolicyRequest
       * @return CreateSourcePolicyResponse
       */
      Models::CreateSourcePolicyResponse createSourcePolicy(const Models::CreateSourcePolicyRequest &request);

      /**
       * @summary 删除项目信息
       *
       * @param request DeleteProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProjectWithOptions(const Models::DeleteProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除项目信息
       *
       * @param request DeleteProjectRequest
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProject(const Models::DeleteProjectRequest &request);

      /**
       * @summary 删除文件
       *
       * @param request DeleteSourceFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSourceFileResponse
       */
      Models::DeleteSourceFileResponse deleteSourceFileWithOptions(const Models::DeleteSourceFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除文件
       *
       * @param request DeleteSourceFileRequest
       * @return DeleteSourceFileResponse
       */
      Models::DeleteSourceFileResponse deleteSourceFile(const Models::DeleteSourceFileRequest &request);

      /**
       * @summary 1校验部署状态，一期不支持二次部署。相关关联记录里状态智能变更
       *
       * @param request DeployLocationTreeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployLocationTreeResponse
       */
      Models::DeployLocationTreeResponse deployLocationTreeWithOptions(const Models::DeployLocationTreeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 1校验部署状态，一期不支持二次部署。相关关联记录里状态智能变更
       *
       * @param request DeployLocationTreeRequest
       * @return DeployLocationTreeResponse
       */
      Models::DeployLocationTreeResponse deployLocationTree(const Models::DeployLocationTreeRequest &request);

      /**
       * @summary 查出绑定记录
       *
       * @param request FindSvcMapBindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FindSvcMapBindResponse
       */
      Models::FindSvcMapBindResponse findSvcMapBindWithOptions(const Models::FindSvcMapBindRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查出绑定记录
       *
       * @param request FindSvcMapBindRequest
       * @return FindSvcMapBindResponse
       */
      Models::FindSvcMapBindResponse findSvcMapBind(const Models::FindSvcMapBindRequest &request);

      /**
       * @summary 获取用户申请状态
       *
       * @param request GetApplyStatusForTryOnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplyStatusForTryOnResponse
       */
      Models::GetApplyStatusForTryOnResponse getApplyStatusForTryOnWithOptions(const Models::GetApplyStatusForTryOnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户申请状态
       *
       * @param request GetApplyStatusForTryOnRequest
       * @return GetApplyStatusForTryOnResponse
       */
      Models::GetApplyStatusForTryOnResponse getApplyStatusForTryOn(const Models::GetApplyStatusForTryOnRequest &request);

      /**
       * @param request GetArEditCommonMaterialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetArEditCommonMaterialResponse
       */
      Models::GetArEditCommonMaterialResponse getArEditCommonMaterialWithOptions(const Models::GetArEditCommonMaterialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetArEditCommonMaterialRequest
       * @return GetArEditCommonMaterialResponse
       */
      Models::GetArEditCommonMaterialResponse getArEditCommonMaterial(const Models::GetArEditCommonMaterialRequest &request);

      /**
       * @param request GetArEditStsAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetArEditStsAuthResponse
       */
      Models::GetArEditStsAuthResponse getArEditStsAuthWithOptions(const Models::GetArEditStsAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetArEditStsAuthRequest
       * @return GetArEditStsAuthResponse
       */
      Models::GetArEditStsAuthResponse getArEditStsAuth(const Models::GetArEditStsAuthRequest &request);

      /**
       * @param request GetArEditUgcMaterialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetArEditUgcMaterialResponse
       */
      Models::GetArEditUgcMaterialResponse getArEditUgcMaterialWithOptions(const Models::GetArEditUgcMaterialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetArEditUgcMaterialRequest
       * @return GetArEditUgcMaterialResponse
       */
      Models::GetArEditUgcMaterialResponse getArEditUgcMaterial(const Models::GetArEditUgcMaterialRequest &request);

      /**
       * @summary 获取项目模型详情
       *
       * @param request GetProjectDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectDatasetResponse
       */
      Models::GetProjectDatasetResponse getProjectDatasetWithOptions(const Models::GetProjectDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取项目模型详情
       *
       * @param request GetProjectDatasetRequest
       * @return GetProjectDatasetResponse
       */
      Models::GetProjectDatasetResponse getProjectDataset(const Models::GetProjectDatasetRequest &request);

      /**
       * @summary 调用同步算法
       *
       * @param tmpReq InvokeSyncAlgorithmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeSyncAlgorithmResponse
       */
      Models::InvokeSyncAlgorithmResponse invokeSyncAlgorithmWithOptions(const Models::InvokeSyncAlgorithmRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用同步算法
       *
       * @param request InvokeSyncAlgorithmRequest
       * @return InvokeSyncAlgorithmResponse
       */
      Models::InvokeSyncAlgorithmResponse invokeSyncAlgorithm(const Models::InvokeSyncAlgorithmRequest &request);

      /**
       * @param request ListAreaMapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAreaMapResponse
       */
      Models::ListAreaMapResponse listAreaMapWithOptions(const Models::ListAreaMapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAreaMapRequest
       * @return ListAreaMapResponse
       */
      Models::ListAreaMapResponse listAreaMap(const Models::ListAreaMapRequest &request);

      /**
       * @summary 列举服饰类型
       *
       * @param request ListClothTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClothTypesResponse
       */
      Models::ListClothTypesResponse listClothTypesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举服饰类型
       *
       * @return ListClothTypesResponse
       */
      Models::ListClothTypesResponse listClothTypes();

      /**
       * @summary 列举服饰
       *
       * @param tmpReq ListClothesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClothesResponse
       */
      Models::ListClothesResponse listClothesWithOptions(const Models::ListClothesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举服饰
       *
       * @param request ListClothesRequest
       * @return ListClothesResponse
       */
      Models::ListClothesResponse listClothes(const Models::ListClothesRequest &request);

      /**
       * @summary hdr文件目录列表
       *
       * @param request ListHdrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHdrResponse
       */
      Models::ListHdrResponse listHdrWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary hdr文件目录列表
       *
       * @return ListHdrResponse
       */
      Models::ListHdrResponse listHdr();

      /**
       * @param request ListLocationPaiImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLocationPaiImageResponse
       */
      Models::ListLocationPaiImageResponse listLocationPaiImageWithOptions(const Models::ListLocationPaiImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListLocationPaiImageRequest
       * @return ListLocationPaiImageResponse
       */
      Models::ListLocationPaiImageResponse listLocationPaiImage(const Models::ListLocationPaiImageRequest &request);

      /**
       * @param request ListLocationServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLocationServiceResponse
       */
      Models::ListLocationServiceResponse listLocationServiceWithOptions(const Models::ListLocationServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListLocationServiceRequest
       * @return ListLocationServiceResponse
       */
      Models::ListLocationServiceResponse listLocationService(const Models::ListLocationServiceRequest &request);

      /**
       * @summary 列出当前用户项目列表
       *
       * @param request ListProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectResponse
       */
      Models::ListProjectResponse listProjectWithOptions(const Models::ListProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出当前用户项目列表
       *
       * @param request ListProjectRequest
       * @return ListProjectResponse
       */
      Models::ListProjectResponse listProject(const Models::ListProjectRequest &request);

      /**
       * @summary 根据项目Id查出依赖当前项目的项目
       *
       * @param request ListProjectsByDependencyIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectsByDependencyIdResponse
       */
      Models::ListProjectsByDependencyIdResponse listProjectsByDependencyIdWithOptions(const Models::ListProjectsByDependencyIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据项目Id查出依赖当前项目的项目
       *
       * @param request ListProjectsByDependencyIdRequest
       * @return ListProjectsByDependencyIdResponse
       */
      Models::ListProjectsByDependencyIdResponse listProjectsByDependencyId(const Models::ListProjectsByDependencyIdRequest &request);

      /**
       * @summary 列举项目中上传的文件列表
       *
       * @param request ListSourceFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSourceFileResponse
       */
      Models::ListSourceFileResponse listSourceFileWithOptions(const Models::ListSourceFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举项目中上传的文件列表
       *
       * @param request ListSourceFileRequest
       * @return ListSourceFileResponse
       */
      Models::ListSourceFileResponse listSourceFile(const Models::ListSourceFileRequest &request);

      /**
       * @summary 列举流水线
       *
       * @param request ListWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkflowResponse
       */
      Models::ListWorkflowResponse listWorkflowWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举流水线
       *
       * @return ListWorkflowResponse
       */
      Models::ListWorkflowResponse listWorkflow();

      /**
       * @param request LoginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LoginResponse
       */
      Models::LoginResponse loginWithOptions(const Models::LoginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request LoginRequest
       * @return LoginResponse
       */
      Models::LoginResponse login(const Models::LoginRequest &request);

      /**
       * @summary 无线端APP登陆
       *
       * @param request LoginAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LoginAppResponse
       */
      Models::LoginAppResponse loginAppWithOptions(const Models::LoginAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 无线端APP登陆
       *
       * @param request LoginAppRequest
       * @return LoginAppResponse
       */
      Models::LoginAppResponse loginApp(const Models::LoginAppRequest &request);

      /**
       * @param request PublishArEditProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishArEditProjectResponse
       */
      Models::PublishArEditProjectResponse publishArEditProjectWithOptions(const Models::PublishArEditProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PublishArEditProjectRequest
       * @return PublishArEditProjectResponse
       */
      Models::PublishArEditProjectResponse publishArEditProject(const Models::PublishArEditProjectRequest &request);

      /**
       * @summary 项目发布
       *
       * @param request PublishProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishProjectResponse
       */
      Models::PublishProjectResponse publishProjectWithOptions(const Models::PublishProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 项目发布
       *
       * @param request PublishProjectRequest
       * @return PublishProjectResponse
       */
      Models::PublishProjectResponse publishProject(const Models::PublishProjectRequest &request);

      /**
       * @param request QueryAreaMapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAreaMapResponse
       */
      Models::QueryAreaMapResponse queryAreaMapWithOptions(const Models::QueryAreaMapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryAreaMapRequest
       * @return QueryAreaMapResponse
       */
      Models::QueryAreaMapResponse queryAreaMap(const Models::QueryAreaMapRequest &request);

      /**
       * @summary 查找项目构建失败时的信息
       *
       * @param request QueryBuildBreakpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBuildBreakpointResponse
       */
      Models::QueryBuildBreakpointResponse queryBuildBreakpointWithOptions(const Models::QueryBuildBreakpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查找项目构建失败时的信息
       *
       * @param request QueryBuildBreakpointRequest
       * @return QueryBuildBreakpointResponse
       */
      Models::QueryBuildBreakpointResponse queryBuildBreakpoint(const Models::QueryBuildBreakpointRequest &request);

      /**
       * @param request QueryLocationServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryLocationServiceResponse
       */
      Models::QueryLocationServiceResponse queryLocationServiceWithOptions(const Models::QueryLocationServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryLocationServiceRequest
       * @return QueryLocationServiceResponse
       */
      Models::QueryLocationServiceResponse queryLocationService(const Models::QueryLocationServiceRequest &request);

      /**
       * @summary 查询项目构建详情
       *
       * @param request QueryProjectBuildDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryProjectBuildDetailResponse
       */
      Models::QueryProjectBuildDetailResponse queryProjectBuildDetailWithOptions(const Models::QueryProjectBuildDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询项目构建详情
       *
       * @param request QueryProjectBuildDetailRequest
       * @return QueryProjectBuildDetailResponse
       */
      Models::QueryProjectBuildDetailResponse queryProjectBuildDetail(const Models::QueryProjectBuildDetailRequest &request);

      /**
       * @summary 查询项目详情
       *
       * @param request QueryProjectDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryProjectDetailResponse
       */
      Models::QueryProjectDetailResponse queryProjectDetailWithOptions(const Models::QueryProjectDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询项目详情
       *
       * @param request QueryProjectDetailRequest
       * @return QueryProjectDetailResponse
       */
      Models::QueryProjectDetailResponse queryProjectDetail(const Models::QueryProjectDetailRequest &request);

      /**
       * @summary 该注册接口只用于oneconsole页面的注册
       *
       * @param request RegisterUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterUserResponse
       */
      Models::RegisterUserResponse registerUserWithOptions(const Models::RegisterUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 该注册接口只用于oneconsole页面的注册
       *
       * @param request RegisterUserRequest
       * @return RegisterUserResponse
       */
      Models::RegisterUserResponse registerUser(const Models::RegisterUserRequest &request);

      /**
       * @param request ResumeLocationServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeLocationServiceResponse
       */
      Models::ResumeLocationServiceResponse resumeLocationServiceWithOptions(const Models::ResumeLocationServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ResumeLocationServiceRequest
       * @return ResumeLocationServiceResponse
       */
      Models::ResumeLocationServiceResponse resumeLocationService(const Models::ResumeLocationServiceRequest &request);

      /**
       * @param request SaveArEditProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveArEditProjectResponse
       */
      Models::SaveArEditProjectResponse saveArEditProjectWithOptions(const Models::SaveArEditProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveArEditProjectRequest
       * @return SaveArEditProjectResponse
       */
      Models::SaveArEditProjectResponse saveArEditProject(const Models::SaveArEditProjectRequest &request);

      /**
       * @summary 保存素材
       *
       * @param request SaveSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSourceResponse
       */
      Models::SaveSourceResponse saveSourceWithOptions(const Models::SaveSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存素材
       *
       * @param request SaveSourceRequest
       * @return SaveSourceResponse
       */
      Models::SaveSourceResponse saveSource(const Models::SaveSourceRequest &request);

      /**
       * @param request SuspendLocationServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendLocationServiceResponse
       */
      Models::SuspendLocationServiceResponse suspendLocationServiceWithOptions(const Models::SuspendLocationServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SuspendLocationServiceRequest
       * @return SuspendLocationServiceResponse
       */
      Models::SuspendLocationServiceResponse suspendLocationService(const Models::SuspendLocationServiceRequest &request);

      /**
       * @summary 项目(发布状态改回隐私状态)
       *
       * @param request UnPublishProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnPublishProjectResponse
       */
      Models::UnPublishProjectResponse unPublishProjectWithOptions(const Models::UnPublishProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 项目(发布状态改回隐私状态)
       *
       * @param request UnPublishProjectRequest
       * @return UnPublishProjectResponse
       */
      Models::UnPublishProjectResponse unPublishProject(const Models::UnPublishProjectRequest &request);

      /**
       * @summary 如果不包含treeConfig则只是简单更新
       *
       * @param request UpdateLocationServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLocationServiceResponse
       */
      Models::UpdateLocationServiceResponse updateLocationServiceWithOptions(const Models::UpdateLocationServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 如果不包含treeConfig则只是简单更新
       *
       * @param request UpdateLocationServiceRequest
       * @return UpdateLocationServiceResponse
       */
      Models::UpdateLocationServiceResponse updateLocationService(const Models::UpdateLocationServiceRequest &request);

      /**
       * @summary 暂存接口比较复杂，单独拎出来
       *
       * @param request UpdateLocationTreeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLocationTreeResponse
       */
      Models::UpdateLocationTreeResponse updateLocationTreeWithOptions(const Models::UpdateLocationTreeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 暂存接口比较复杂，单独拎出来
       *
       * @param request UpdateLocationTreeRequest
       * @return UpdateLocationTreeResponse
       */
      Models::UpdateLocationTreeResponse updateLocationTree(const Models::UpdateLocationTreeRequest &request);

      /**
       * @summary 更新项目信息
       *
       * @param tmpReq UpdateProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProjectWithOptions(const Models::UpdateProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新项目信息
       *
       * @param request UpdateProjectRequest
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProject(const Models::UpdateProjectRequest &request);
  };
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
