// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_TDSR20200101_HPP_
#define ALIBABACLOUD_TDSR20200101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Tdsr20200101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Tdsr20200101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 保存模型文件
       *
       * @param request AddHotspotFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddHotspotFileResponse
       */
      Models::AddHotspotFileResponse addHotspotFileWithOptions(const Models::AddHotspotFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存模型文件
       *
       * @param request AddHotspotFileRequest
       * @return AddHotspotFileResponse
       */
      Models::AddHotspotFileResponse addHotspotFile(const Models::AddHotspotFileRequest &request);

      /**
       * @summary 打马赛克
       *
       * @param request AddMosaicsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMosaicsResponse
       */
      Models::AddMosaicsResponse addMosaicsWithOptions(const Models::AddMosaicsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 打马赛克
       *
       * @param request AddMosaicsRequest
       * @return AddMosaicsResponse
       */
      Models::AddMosaicsResponse addMosaics(const Models::AddMosaicsRequest &request);

      /**
       * @summary 添加项目
       *
       * @param request AddProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddProjectResponse
       */
      Models::AddProjectResponse addProjectWithOptions(const Models::AddProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加项目
       *
       * @param request AddProjectRequest
       * @return AddProjectResponse
       */
      Models::AddProjectResponse addProject(const Models::AddProjectRequest &request);

      /**
       * @deprecated OpenAPI AddRelativePosition is deprecated
       *
       * @summary 添加相对位置
       *
       * @param request AddRelativePositionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRelativePositionResponse
       */
      Models::AddRelativePositionResponse addRelativePositionWithOptions(const Models::AddRelativePositionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddRelativePosition is deprecated
       *
       * @summary 添加相对位置
       *
       * @param request AddRelativePositionRequest
       * @return AddRelativePositionResponse
       */
      Models::AddRelativePositionResponse addRelativePosition(const Models::AddRelativePositionRequest &request);

      /**
       * @summary 移动端添加rooms.json
       *
       * @param request AddRoomPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRoomPlanResponse
       */
      Models::AddRoomPlanResponse addRoomPlanWithOptions(const Models::AddRoomPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移动端添加rooms.json
       *
       * @param request AddRoomPlanRequest
       * @return AddRoomPlanResponse
       */
      Models::AddRoomPlanResponse addRoomPlan(const Models::AddRoomPlanRequest &request);

      /**
       * @summary 添加主场景
       *
       * @param request AddSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSceneResponse
       */
      Models::AddSceneResponse addSceneWithOptions(const Models::AddSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加主场景
       *
       * @param request AddSceneRequest
       * @return AddSceneResponse
       */
      Models::AddSceneResponse addScene(const Models::AddSceneRequest &request);

      /**
       * @summary 创建子场景
       *
       * @param request AddSubSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSubSceneResponse
       */
      Models::AddSubSceneResponse addSubSceneWithOptions(const Models::AddSubSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建子场景
       *
       * @param request AddSubSceneRequest
       * @return AddSubSceneResponse
       */
      Models::AddSubSceneResponse addSubScene(const Models::AddSubSceneRequest &request);

      /**
       * @summary 检查指定uid用户属性
       *
       * @param request CheckUserPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckUserPropertyResponse
       */
      Models::CheckUserPropertyResponse checkUserPropertyWithOptions(const Models::CheckUserPropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查指定uid用户属性
       *
       * @param request CheckUserPropertyRequest
       * @return CheckUserPropertyResponse
       */
      Models::CheckUserPropertyResponse checkUserProperty(const Models::CheckUserPropertyRequest &request);

      /**
       * @summary 复制主场景
       *
       * @param request CopySceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopySceneResponse
       */
      Models::CopySceneResponse copySceneWithOptions(const Models::CopySceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 复制主场景
       *
       * @param request CopySceneRequest
       * @return CopySceneResponse
       */
      Models::CopySceneResponse copyScene(const Models::CopySceneRequest &request);

      /**
       * @summary 获取OSS授权
       *
       * @param request CreateUploadPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUploadPolicyResponse
       */
      Models::CreateUploadPolicyResponse createUploadPolicyWithOptions(const Models::CreateUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取OSS授权
       *
       * @param request CreateUploadPolicyRequest
       * @return CreateUploadPolicyResponse
       */
      Models::CreateUploadPolicyResponse createUploadPolicy(const Models::CreateUploadPolicyRequest &request);

      /**
       * @summary 查询项目详情
       *
       * @param request DetailProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetailProjectResponse
       */
      Models::DetailProjectResponse detailProjectWithOptions(const Models::DetailProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询项目详情
       *
       * @param request DetailProjectRequest
       * @return DetailProjectResponse
       */
      Models::DetailProjectResponse detailProject(const Models::DetailProjectRequest &request);

      /**
       * @summary 主场景详细
       *
       * @param request DetailSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetailSceneResponse
       */
      Models::DetailSceneResponse detailSceneWithOptions(const Models::DetailSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 主场景详细
       *
       * @param request DetailSceneRequest
       * @return DetailSceneResponse
       */
      Models::DetailSceneResponse detailScene(const Models::DetailSceneRequest &request);

      /**
       * @summary 查询子场景详情
       *
       * @param request DetailSubSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetailSubSceneResponse
       */
      Models::DetailSubSceneResponse detailSubSceneWithOptions(const Models::DetailSubSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询子场景详情
       *
       * @param request DetailSubSceneRequest
       * @return DetailSubSceneResponse
       */
      Models::DetailSubSceneResponse detailSubScene(const Models::DetailSubSceneRequest &request);

      /**
       * @summary 删除项目
       *
       * @param request DropProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DropProjectResponse
       */
      Models::DropProjectResponse dropProjectWithOptions(const Models::DropProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除项目
       *
       * @param request DropProjectRequest
       * @return DropProjectResponse
       */
      Models::DropProjectResponse dropProject(const Models::DropProjectRequest &request);

      /**
       * @summary 删除主场景
       *
       * @param request DropSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DropSceneResponse
       */
      Models::DropSceneResponse dropSceneWithOptions(const Models::DropSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除主场景
       *
       * @param request DropSceneRequest
       * @return DropSceneResponse
       */
      Models::DropSceneResponse dropScene(const Models::DropSceneRequest &request);

      /**
       * @summary 删除子场景
       *
       * @param request DropSubSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DropSubSceneResponse
       */
      Models::DropSubSceneResponse dropSubSceneWithOptions(const Models::DropSubSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除子场景
       *
       * @param request DropSubSceneRequest
       * @return DropSubSceneResponse
       */
      Models::DropSubSceneResponse dropSubScene(const Models::DropSubSceneRequest &request);

      /**
       * @summary 查询关联数据
       *
       * @param request GetConnDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConnDataResponse
       */
      Models::GetConnDataResponse getConnDataWithOptions(const Models::GetConnDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询关联数据
       *
       * @param request GetConnDataRequest
       * @return GetConnDataResponse
       */
      Models::GetConnDataResponse getConnData(const Models::GetConnDataRequest &request);

      /**
       * @summary 复制场景任务状态查询
       *
       * @param request GetCopySceneTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCopySceneTaskStatusResponse
       */
      Models::GetCopySceneTaskStatusResponse getCopySceneTaskStatusWithOptions(const Models::GetCopySceneTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 复制场景任务状态查询
       *
       * @param request GetCopySceneTaskStatusRequest
       * @return GetCopySceneTaskStatusResponse
       */
      Models::GetCopySceneTaskStatusResponse getCopySceneTaskStatus(const Models::GetCopySceneTaskStatusRequest &request);

      /**
       * @param request GetHotspotConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotspotConfigResponse
       */
      Models::GetHotspotConfigResponse getHotspotConfigWithOptions(const Models::GetHotspotConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetHotspotConfigRequest
       * @return GetHotspotConfigResponse
       */
      Models::GetHotspotConfigResponse getHotspotConfig(const Models::GetHotspotConfigRequest &request);

      /**
       * @summary 查询后处理场景信息
       *
       * @param request GetHotspotSceneDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotspotSceneDataResponse
       */
      Models::GetHotspotSceneDataResponse getHotspotSceneDataWithOptions(const Models::GetHotspotSceneDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询后处理场景信息
       *
       * @param request GetHotspotSceneDataRequest
       * @return GetHotspotSceneDataResponse
       */
      Models::GetHotspotSceneDataResponse getHotspotSceneData(const Models::GetHotspotSceneDataRequest &request);

      /**
       * @param request GetHotspotTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotspotTagResponse
       */
      Models::GetHotspotTagResponse getHotspotTagWithOptions(const Models::GetHotspotTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetHotspotTagRequest
       * @return GetHotspotTagResponse
       */
      Models::GetHotspotTagResponse getHotspotTag(const Models::GetHotspotTagRequest &request);

      /**
       * @summary 获取标注数据
       *
       * @param request GetLayoutDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLayoutDataResponse
       */
      Models::GetLayoutDataResponse getLayoutDataWithOptions(const Models::GetLayoutDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取标注数据
       *
       * @param request GetLayoutDataRequest
       * @return GetLayoutDataResponse
       */
      Models::GetLayoutDataResponse getLayoutData(const Models::GetLayoutDataRequest &request);

      /**
       * @summary 获取算法自动标注数据
       *
       * @param request GetOriginLayoutDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginLayoutDataResponse
       */
      Models::GetOriginLayoutDataResponse getOriginLayoutDataWithOptions(const Models::GetOriginLayoutDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取算法自动标注数据
       *
       * @param request GetOriginLayoutDataRequest
       * @return GetOriginLayoutDataResponse
       */
      Models::GetOriginLayoutDataResponse getOriginLayoutData(const Models::GetOriginLayoutDataRequest &request);

      /**
       * @summary 获取OSS授权
       *
       * @param request GetOssPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssPolicyResponse
       */
      Models::GetOssPolicyResponse getOssPolicyWithOptions(const Models::GetOssPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取OSS授权
       *
       * @param request GetOssPolicyRequest
       * @return GetOssPolicyResponse
       */
      Models::GetOssPolicyResponse getOssPolicy(const Models::GetOssPolicyRequest &request);

      /**
       * @summary 打包场景任务状态查询
       *
       * @param request GetPackSceneTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPackSceneTaskStatusResponse
       */
      Models::GetPackSceneTaskStatusResponse getPackSceneTaskStatusWithOptions(const Models::GetPackSceneTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 打包场景任务状态查询
       *
       * @param request GetPackSceneTaskStatusRequest
       * @return GetPackSceneTaskStatusResponse
       */
      Models::GetPackSceneTaskStatusResponse getPackSceneTaskStatus(const Models::GetPackSceneTaskStatusRequest &request);

      /**
       * @summary 查询矫正后图片
       *
       * @param request GetRectifyImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRectifyImageResponse
       */
      Models::GetRectifyImageResponse getRectifyImageWithOptions(const Models::GetRectifyImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询矫正后图片
       *
       * @param request GetRectifyImageRequest
       * @return GetRectifyImageResponse
       */
      Models::GetRectifyImageResponse getRectifyImage(const Models::GetRectifyImageRequest &request);

      /**
       * @summary 查看场景下重建任务
       *
       * @param request GetSceneBuildTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSceneBuildTaskStatusResponse
       */
      Models::GetSceneBuildTaskStatusResponse getSceneBuildTaskStatusWithOptions(const Models::GetSceneBuildTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看场景下重建任务
       *
       * @param request GetSceneBuildTaskStatusRequest
       * @return GetSceneBuildTaskStatusResponse
       */
      Models::GetSceneBuildTaskStatusResponse getSceneBuildTaskStatus(const Models::GetSceneBuildTaskStatusRequest &request);

      /**
       * @summary 获取场景的打包地址
       *
       * @param request GetScenePackUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScenePackUrlResponse
       */
      Models::GetScenePackUrlResponse getScenePackUrlWithOptions(const Models::GetScenePackUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取场景的打包地址
       *
       * @param request GetScenePackUrlRequest
       * @return GetScenePackUrlResponse
       */
      Models::GetScenePackUrlResponse getScenePackUrl(const Models::GetScenePackUrlRequest &request);

      /**
       * @summary 查询模型数据
       *
       * @param request GetScenePreviewDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScenePreviewDataResponse
       */
      Models::GetScenePreviewDataResponse getScenePreviewDataWithOptions(const Models::GetScenePreviewDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询模型数据
       *
       * @param request GetScenePreviewDataRequest
       * @return GetScenePreviewDataResponse
       */
      Models::GetScenePreviewDataResponse getScenePreviewData(const Models::GetScenePreviewDataRequest &request);

      /**
       * @summary 查询模型预览信息
       *
       * @param request GetScenePreviewInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScenePreviewInfoResponse
       */
      Models::GetScenePreviewInfoResponse getScenePreviewInfoWithOptions(const Models::GetScenePreviewInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询模型预览信息
       *
       * @param request GetScenePreviewInfoRequest
       * @return GetScenePreviewInfoResponse
       */
      Models::GetScenePreviewInfoResponse getScenePreviewInfo(const Models::GetScenePreviewInfoRequest &request);

      /**
       * @summary 获取模型预览数据
       *
       * @param request GetScenePreviewResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScenePreviewResourceResponse
       */
      Models::GetScenePreviewResourceResponse getScenePreviewResourceWithOptions(const Models::GetScenePreviewResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取模型预览数据
       *
       * @param request GetScenePreviewResourceRequest
       * @return GetScenePreviewResourceResponse
       */
      Models::GetScenePreviewResourceResponse getScenePreviewResource(const Models::GetScenePreviewResourceRequest &request);

      /**
       * @summary 查询单场景关联数据
       *
       * @param request GetSingleConnDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSingleConnDataResponse
       */
      Models::GetSingleConnDataResponse getSingleConnDataWithOptions(const Models::GetSingleConnDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单场景关联数据
       *
       * @param request GetSingleConnDataRequest
       * @return GetSingleConnDataResponse
       */
      Models::GetSingleConnDataResponse getSingleConnData(const Models::GetSingleConnDataRequest &request);

      /**
       * @summary 打包58数据状态检查
       *
       * @param request GetSourcePackStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSourcePackStatusResponse
       */
      Models::GetSourcePackStatusResponse getSourcePackStatusWithOptions(const Models::GetSourcePackStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 打包58数据状态检查
       *
       * @param request GetSourcePackStatusRequest
       * @return GetSourcePackStatusResponse
       */
      Models::GetSourcePackStatusResponse getSourcePackStatus(const Models::GetSourcePackStatusRequest &request);

      /**
       * @summary 查看子场景下预处理及切图任务
       *
       * @param request GetSubSceneTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubSceneTaskStatusResponse
       */
      Models::GetSubSceneTaskStatusResponse getSubSceneTaskStatusWithOptions(const Models::GetSubSceneTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看子场景下预处理及切图任务
       *
       * @param request GetSubSceneTaskStatusRequest
       * @return GetSubSceneTaskStatusResponse
       */
      Models::GetSubSceneTaskStatusResponse getSubSceneTaskStatus(const Models::GetSubSceneTaskStatusRequest &request);

      /**
       * @summary 查看任务状态
       *
       * @param request GetTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskStatusResponse
       */
      Models::GetTaskStatusResponse getTaskStatusWithOptions(const Models::GetTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看任务状态
       *
       * @param request GetTaskStatusRequest
       * @return GetTaskStatusResponse
       */
      Models::GetTaskStatusResponse getTaskStatus(const Models::GetTaskStatusRequest &request);

      /**
       * @param request GetWindowConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWindowConfigResponse
       */
      Models::GetWindowConfigResponse getWindowConfigWithOptions(const Models::GetWindowConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetWindowConfigRequest
       * @return GetWindowConfigResponse
       */
      Models::GetWindowConfigResponse getWindowConfig(const Models::GetWindowConfigRequest &request);

      /**
       * @summary 重建
       *
       * @param request LabelBuildRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LabelBuildResponse
       */
      Models::LabelBuildResponse labelBuildWithOptions(const Models::LabelBuildRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重建
       *
       * @param request LabelBuildRequest
       * @return LabelBuildResponse
       */
      Models::LabelBuildResponse labelBuild(const Models::LabelBuildRequest &request);

      /**
       * @summary 关联图片
       *
       * @param request LinkImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LinkImageResponse
       */
      Models::LinkImageResponse linkImageWithOptions(const Models::LinkImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关联图片
       *
       * @param request LinkImageRequest
       * @return LinkImageResponse
       */
      Models::LinkImageResponse linkImage(const Models::LinkImageRequest &request);

      /**
       * @summary 分页查询项目列表
       *
       * @param request ListProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectResponse
       */
      Models::ListProjectResponse listProjectWithOptions(const Models::ListProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询项目列表
       *
       * @param request ListProjectRequest
       * @return ListProjectResponse
       */
      Models::ListProjectResponse listProject(const Models::ListProjectRequest &request);

      /**
       * @summary 分页查询主场景列表
       *
       * @param request ListSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSceneResponse
       */
      Models::ListSceneResponse listSceneWithOptions(const Models::ListSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询主场景列表
       *
       * @param request ListSceneRequest
       * @return ListSceneResponse
       */
      Models::ListSceneResponse listScene(const Models::ListSceneRequest &request);

      /**
       * @summary 查询子场景列表
       *
       * @param request ListSubSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubSceneResponse
       */
      Models::ListSubSceneResponse listSubSceneWithOptions(const Models::ListSubSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询子场景列表
       *
       * @param request ListSubSceneRequest
       * @return ListSubSceneResponse
       */
      Models::ListSubSceneResponse listSubScene(const Models::ListSubSceneRequest &request);

      /**
       * @summary 直角优化
       *
       * @param request OptimizeRightAngleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OptimizeRightAngleResponse
       */
      Models::OptimizeRightAngleResponse optimizeRightAngleWithOptions(const Models::OptimizeRightAngleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 直角优化
       *
       * @param request OptimizeRightAngleRequest
       * @return OptimizeRightAngleResponse
       */
      Models::OptimizeRightAngleResponse optimizeRightAngle(const Models::OptimizeRightAngleRequest &request);

      /**
       * @summary 打包场景
       *
       * @param request PackSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PackSceneResponse
       */
      Models::PackSceneResponse packSceneWithOptions(const Models::PackSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 打包场景
       *
       * @param request PackSceneRequest
       * @return PackSceneResponse
       */
      Models::PackSceneResponse packScene(const Models::PackSceneRequest &request);

      /**
       * @summary 打包场景
       *
       * @param request PackSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PackSourceResponse
       */
      Models::PackSourceResponse packSourceWithOptions(const Models::PackSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 打包场景
       *
       * @param request PackSourceRequest
       * @return PackSourceResponse
       */
      Models::PackSourceResponse packSource(const Models::PackSourceRequest &request);

      /**
       * @summary 预处理
       *
       * @param request PredImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PredImageResponse
       */
      Models::PredImageResponse predImageWithOptions(const Models::PredImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预处理
       *
       * @param request PredImageRequest
       * @return PredImageResponse
       */
      Models::PredImageResponse predImage(const Models::PredImageRequest &request);

      /**
       * @summary 墙线预测
       *
       * @param request PredictionWallLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PredictionWallLineResponse
       */
      Models::PredictionWallLineResponse predictionWallLineWithOptions(const Models::PredictionWallLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 墙线预测
       *
       * @param request PredictionWallLineRequest
       * @return PredictionWallLineResponse
       */
      Models::PredictionWallLineResponse predictionWallLine(const Models::PredictionWallLineRequest &request);

      /**
       * @param request PublishHotspotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishHotspotResponse
       */
      Models::PublishHotspotResponse publishHotspotWithOptions(const Models::PublishHotspotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PublishHotspotRequest
       * @return PublishHotspotResponse
       */
      Models::PublishHotspotResponse publishHotspot(const Models::PublishHotspotRequest &request);

      /**
       * @summary 保存扩展配置
       *
       * @param request PublishHotspotConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishHotspotConfigResponse
       */
      Models::PublishHotspotConfigResponse publishHotspotConfigWithOptions(const Models::PublishHotspotConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存扩展配置
       *
       * @param request PublishHotspotConfigRequest
       * @return PublishHotspotConfigResponse
       */
      Models::PublishHotspotConfigResponse publishHotspotConfig(const Models::PublishHotspotConfigRequest &request);

      /**
       * @summary 发布
       *
       * @param request PublishSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishSceneResponse
       */
      Models::PublishSceneResponse publishSceneWithOptions(const Models::PublishSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布
       *
       * @param request PublishSceneRequest
       * @return PublishSceneResponse
       */
      Models::PublishSceneResponse publishScene(const Models::PublishSceneRequest &request);

      /**
       * @summary 发布
       *
       * @param request PublishStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishStatusResponse
       */
      Models::PublishStatusResponse publishStatusWithOptions(const Models::PublishStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布
       *
       * @param request PublishStatusRequest
       * @return PublishStatusResponse
       */
      Models::PublishStatusResponse publishStatus(const Models::PublishStatusRequest &request);

      /**
       * @summary 恢复原图
       *
       * @param request RecoveryOriginImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoveryOriginImageResponse
       */
      Models::RecoveryOriginImageResponse recoveryOriginImageWithOptions(const Models::RecoveryOriginImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 恢复原图
       *
       * @param request RecoveryOriginImageRequest
       * @return RecoveryOriginImageResponse
       */
      Models::RecoveryOriginImageResponse recoveryOriginImage(const Models::RecoveryOriginImageRequest &request);

      /**
       * @summary 手动矫正
       *
       * @param request RectVerticalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RectVerticalResponse
       */
      Models::RectVerticalResponse rectVerticalWithOptions(const Models::RectVerticalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 手动矫正
       *
       * @param request RectVerticalRequest
       * @return RectVerticalResponse
       */
      Models::RectVerticalResponse rectVertical(const Models::RectVerticalRequest &request);

      /**
       * @summary 图片矫正
       *
       * @param request RectifyImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RectifyImageResponse
       */
      Models::RectifyImageResponse rectifyImageWithOptions(const Models::RectifyImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图片矫正
       *
       * @param request RectifyImageRequest
       * @return RectifyImageResponse
       */
      Models::RectifyImageResponse rectifyImage(const Models::RectifyImageRequest &request);

      /**
       * @summary 恢复子场景
       *
       * @param request RollbackSubSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackSubSceneResponse
       */
      Models::RollbackSubSceneResponse rollbackSubSceneWithOptions(const Models::RollbackSubSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 恢复子场景
       *
       * @param request RollbackSubSceneRequest
       * @return RollbackSubSceneResponse
       */
      Models::RollbackSubSceneResponse rollbackSubScene(const Models::RollbackSubSceneRequest &request);

      /**
       * @param request SaveHotspotConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveHotspotConfigResponse
       */
      Models::SaveHotspotConfigResponse saveHotspotConfigWithOptions(const Models::SaveHotspotConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveHotspotConfigRequest
       * @return SaveHotspotConfigResponse
       */
      Models::SaveHotspotConfigResponse saveHotspotConfig(const Models::SaveHotspotConfigRequest &request);

      /**
       * @param request SaveHotspotTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveHotspotTagResponse
       */
      Models::SaveHotspotTagResponse saveHotspotTagWithOptions(const Models::SaveHotspotTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveHotspotTagRequest
       * @return SaveHotspotTagResponse
       */
      Models::SaveHotspotTagResponse saveHotspotTag(const Models::SaveHotspotTagRequest &request);

      /**
       * @summary 保存热点
       *
       * @param request SaveHotspotTagListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveHotspotTagListResponse
       */
      Models::SaveHotspotTagListResponse saveHotspotTagListWithOptions(const Models::SaveHotspotTagListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存热点
       *
       * @param request SaveHotspotTagListRequest
       * @return SaveHotspotTagListResponse
       */
      Models::SaveHotspotTagListResponse saveHotspotTagList(const Models::SaveHotspotTagListRequest &request);

      /**
       * @summary 保存小地图数据
       *
       * @param request SaveMinimapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveMinimapResponse
       */
      Models::SaveMinimapResponse saveMinimapWithOptions(const Models::SaveMinimapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存小地图数据
       *
       * @param request SaveMinimapRequest
       * @return SaveMinimapResponse
       */
      Models::SaveMinimapResponse saveMinimap(const Models::SaveMinimapRequest &request);

      /**
       * @summary 保存模型文件
       *
       * @param request SaveModelConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveModelConfigResponse
       */
      Models::SaveModelConfigResponse saveModelConfigWithOptions(const Models::SaveModelConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存模型文件
       *
       * @param request SaveModelConfigRequest
       * @return SaveModelConfigResponse
       */
      Models::SaveModelConfigResponse saveModelConfig(const Models::SaveModelConfigRequest &request);

      /**
       * @summary 发布
       *
       * @param request ScenePublishRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScenePublishResponse
       */
      Models::ScenePublishResponse scenePublishWithOptions(const Models::ScenePublishRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布
       *
       * @param request ScenePublishRequest
       * @return ScenePublishResponse
       */
      Models::ScenePublishResponse scenePublish(const Models::ScenePublishRequest &request);

      /**
       * @summary 预览
       *
       * @param request TempPreviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TempPreviewResponse
       */
      Models::TempPreviewResponse tempPreviewWithOptions(const Models::TempPreviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预览
       *
       * @param request TempPreviewRequest
       * @return TempPreviewResponse
       */
      Models::TempPreviewResponse tempPreview(const Models::TempPreviewRequest &request);

      /**
       * @summary 查询预览任务处理状态
       *
       * @param request TempPreviewStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TempPreviewStatusResponse
       */
      Models::TempPreviewStatusResponse tempPreviewStatusWithOptions(const Models::TempPreviewStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询预览任务处理状态
       *
       * @param request TempPreviewStatusRequest
       * @return TempPreviewStatusResponse
       */
      Models::TempPreviewStatusResponse tempPreviewStatus(const Models::TempPreviewStatusRequest &request);

      /**
       * @summary 更新关联数据
       *
       * @param request UpdateConnDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConnDataResponse
       */
      Models::UpdateConnDataResponse updateConnDataWithOptions(const Models::UpdateConnDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新关联数据
       *
       * @param request UpdateConnDataRequest
       * @return UpdateConnDataResponse
       */
      Models::UpdateConnDataResponse updateConnData(const Models::UpdateConnDataRequest &request);

      /**
       * @summary 更新标注数据
       *
       * @param request UpdateLayoutDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLayoutDataResponse
       */
      Models::UpdateLayoutDataResponse updateLayoutDataWithOptions(const Models::UpdateLayoutDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新标注数据
       *
       * @param request UpdateLayoutDataRequest
       * @return UpdateLayoutDataResponse
       */
      Models::UpdateLayoutDataResponse updateLayoutData(const Models::UpdateLayoutDataRequest &request);

      /**
       * @summary 变更项目信息
       *
       * @param request UpdateProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProjectWithOptions(const Models::UpdateProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 变更项目信息
       *
       * @param request UpdateProjectRequest
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProject(const Models::UpdateProjectRequest &request);

      /**
       * @summary 更新主场景
       *
       * @param request UpdateSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSceneResponse
       */
      Models::UpdateSceneResponse updateSceneWithOptions(const Models::UpdateSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新主场景
       *
       * @param request UpdateSceneRequest
       * @return UpdateSceneResponse
       */
      Models::UpdateSceneResponse updateScene(const Models::UpdateSceneRequest &request);

      /**
       * @summary 更新子场景
       *
       * @param tmpReq UpdateSubSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSubSceneResponse
       */
      Models::UpdateSubSceneResponse updateSubSceneWithOptions(const Models::UpdateSubSceneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新子场景
       *
       * @param request UpdateSubSceneRequest
       * @return UpdateSubSceneResponse
       */
      Models::UpdateSubSceneResponse updateSubScene(const Models::UpdateSubSceneRequest &request);

      /**
       * @summary 更新子场景顺序
       *
       * @param tmpReq UpdateSubSceneSeqRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSubSceneSeqResponse
       */
      Models::UpdateSubSceneSeqResponse updateSubSceneSeqWithOptions(const Models::UpdateSubSceneSeqRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新子场景顺序
       *
       * @param request UpdateSubSceneSeqRequest
       * @return UpdateSubSceneSeqResponse
       */
      Models::UpdateSubSceneSeqResponse updateSubSceneSeq(const Models::UpdateSubSceneSeqRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
