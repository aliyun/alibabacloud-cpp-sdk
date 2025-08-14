// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AVATAR20220130_HPP_
#define ALIBABACLOUD_AVATAR20220130_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Avatar20220130Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Avatar20220130.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 取消视频合成任务
       *
       * @param tmpReq CancelVideoTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelVideoTaskResponse
       */
      Models::CancelVideoTaskResponse cancelVideoTaskWithOptions(const Models::CancelVideoTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消视频合成任务
       *
       * @param request CancelVideoTaskRequest
       * @return CancelVideoTaskResponse
       */
      Models::CancelVideoTaskResponse cancelVideoTask(const Models::CancelVideoTaskRequest &request);

      /**
       * @summary 端渲染认证
       *
       * @param request ClientAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClientAuthResponse
       */
      Models::ClientAuthResponse clientAuthWithOptions(const Models::ClientAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 端渲染认证
       *
       * @param request ClientAuthRequest
       * @return ClientAuthResponse
       */
      Models::ClientAuthResponse clientAuth(const Models::ClientAuthRequest &request);

      /**
       * @summary 端渲染开始工作
       *
       * @param request ClientStartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClientStartResponse
       */
      Models::ClientStartResponse clientStartWithOptions(const Models::ClientStartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 端渲染开始工作
       *
       * @param request ClientStartRequest
       * @return ClientStartResponse
       */
      Models::ClientStartResponse clientStart(const Models::ClientStartRequest &request);

      /**
       * @summary 端渲染解绑设备
       *
       * @param request ClientUnbindDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClientUnbindDeviceResponse
       */
      Models::ClientUnbindDeviceResponse clientUnbindDeviceWithOptions(const Models::ClientUnbindDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 端渲染解绑设备
       *
       * @param request ClientUnbindDeviceRequest
       * @return ClientUnbindDeviceResponse
       */
      Models::ClientUnbindDeviceResponse clientUnbindDevice(const Models::ClientUnbindDeviceRequest &request);

      /**
       * @summary 停复机关机操作
       *
       * @param request CloseTimedResetOperateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseTimedResetOperateResponse
       */
      Models::CloseTimedResetOperateResponse closeTimedResetOperateWithOptions(const Models::CloseTimedResetOperateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停复机关机操作
       *
       * @param request CloseTimedResetOperateRequest
       * @return CloseTimedResetOperateResponse
       */
      Models::CloseTimedResetOperateResponse closeTimedResetOperate(const Models::CloseTimedResetOperateRequest &request);

      /**
       * @summary 客户确认2d形象训练
       *
       * @param request ConfirmAvatar2dTrainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmAvatar2dTrainResponse
       */
      Models::ConfirmAvatar2dTrainResponse confirmAvatar2dTrainWithOptions(const Models::ConfirmAvatar2dTrainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 客户确认2d形象训练
       *
       * @param request ConfirmAvatar2dTrainRequest
       * @return ConfirmAvatar2dTrainResponse
       */
      Models::ConfirmAvatar2dTrainResponse confirmAvatar2dTrain(const Models::ConfirmAvatar2dTrainRequest &request);

      /**
       * @summary 提交一个创建2d人物的任务
       *
       * @param request Create2dAvatarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Create2dAvatarResponse
       */
      Models::Create2dAvatarResponse create2dAvatarWithOptions(const Models::Create2dAvatarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交一个创建2d人物的任务
       *
       * @param request Create2dAvatarRequest
       * @return Create2dAvatarResponse
       */
      Models::Create2dAvatarResponse create2dAvatar(const Models::Create2dAvatarRequest &request);

      /**
       * @summary 删除数字人人物
       *
       * @param request DeleteAvatarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAvatarResponse
       */
      Models::DeleteAvatarResponse deleteAvatarWithOptions(const Models::DeleteAvatarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数字人人物
       *
       * @param request DeleteAvatarRequest
       * @return DeleteAvatarResponse
       */
      Models::DeleteAvatarResponse deleteAvatar(const Models::DeleteAvatarRequest &request);

      /**
       * @summary 语音双工决策接口API
       *
       * @param tmpReq DuplexDecisionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DuplexDecisionResponse
       */
      Models::DuplexDecisionResponse duplexDecisionWithOptions(const Models::DuplexDecisionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 语音双工决策接口API
       *
       * @param request DuplexDecisionRequest
       * @return DuplexDecisionResponse
       */
      Models::DuplexDecisionResponse duplexDecision(const Models::DuplexDecisionRequest &request);

      /**
       * @summary 获取一个数字人离线视频生成任务的详情
       *
       * @param tmpReq GetVideoTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoTaskInfoResponse
       */
      Models::GetVideoTaskInfoResponse getVideoTaskInfoWithOptions(const Models::GetVideoTaskInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一个数字人离线视频生成任务的详情
       *
       * @param request GetVideoTaskInfoRequest
       * @return GetVideoTaskInfoResponse
       */
      Models::GetVideoTaskInfoResponse getVideoTaskInfo(const Models::GetVideoTaskInfoRequest &request);

      /**
       * @summary 端渲染license鉴权验证
       *
       * @param request LicenseAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LicenseAuthResponse
       */
      Models::LicenseAuthResponse licenseAuthWithOptions(const Models::LicenseAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 端渲染license鉴权验证
       *
       * @param request LicenseAuthRequest
       * @return LicenseAuthResponse
       */
      Models::LicenseAuthResponse licenseAuth(const Models::LicenseAuthRequest &request);

      /**
       * @summary 资产服务-根据人物code查询人物详情
       *
       * @param request QueryAvatarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAvatarResponse
       */
      Models::QueryAvatarResponse queryAvatarWithOptions(const Models::QueryAvatarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 资产服务-根据人物code查询人物详情
       *
       * @param request QueryAvatarRequest
       * @return QueryAvatarResponse
       */
      Models::QueryAvatarResponse queryAvatar(const Models::QueryAvatarRequest &request);

      /**
       * @summary 资产服务-查询人物列表
       *
       * @param request QueryAvatarListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAvatarListResponse
       */
      Models::QueryAvatarListResponse queryAvatarListWithOptions(const Models::QueryAvatarListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 资产服务-查询人物列表
       *
       * @param request QueryAvatarListRequest
       * @return QueryAvatarListResponse
       */
      Models::QueryAvatarListResponse queryAvatarList(const Models::QueryAvatarListRequest &request);

      /**
       * @summary 查询运行中instance列表，同时支持指定sessionId查询运行实例，查询列表时最多返回100条
       *
       * @param tmpReq QueryRunningInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRunningInstanceResponse
       */
      Models::QueryRunningInstanceResponse queryRunningInstanceWithOptions(const Models::QueryRunningInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询运行中instance列表，同时支持指定sessionId查询运行实例，查询列表时最多返回100条
       *
       * @param request QueryRunningInstanceRequest
       * @return QueryRunningInstanceResponse
       */
      Models::QueryRunningInstanceResponse queryRunningInstance(const Models::QueryRunningInstanceRequest &request);

      /**
       * @summary 定时停复机实例开关机状态查询接口
       *
       * @param request QueryTimedResetOperateStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTimedResetOperateStatusResponse
       */
      Models::QueryTimedResetOperateStatusResponse queryTimedResetOperateStatusWithOptions(const Models::QueryTimedResetOperateStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 定时停复机实例开关机状态查询接口
       *
       * @param request QueryTimedResetOperateStatusRequest
       * @return QueryTimedResetOperateStatusResponse
       */
      Models::QueryTimedResetOperateStatusResponse queryTimedResetOperateStatus(const Models::QueryTimedResetOperateStatusRequest &request);

      /**
       * @summary 分页查询视频合成任务
       *
       * @param tmpReq QueryVideoTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVideoTaskInfoResponse
       */
      Models::QueryVideoTaskInfoResponse queryVideoTaskInfoWithOptions(const Models::QueryVideoTaskInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询视频合成任务
       *
       * @param request QueryVideoTaskInfoRequest
       * @return QueryVideoTaskInfoResponse
       */
      Models::QueryVideoTaskInfoResponse queryVideoTaskInfo(const Models::QueryVideoTaskInfoRequest &request);

      /**
       * @summary 3d人物渲染信息
       *
       * @param request Render3dAvatarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Render3dAvatarResponse
       */
      Models::Render3dAvatarResponse render3dAvatarWithOptions(const Models::Render3dAvatarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 3d人物渲染信息
       *
       * @param request Render3dAvatarRequest
       * @return Render3dAvatarResponse
       */
      Models::Render3dAvatarResponse render3dAvatar(const Models::Render3dAvatarRequest &request);

      /**
       * @summary 发送指令
       *
       * @param tmpReq SendCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendCommandResponse
       */
      Models::SendCommandResponse sendCommandWithOptions(const Models::SendCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送指令
       *
       * @param request SendCommandRequest
       * @return SendCommandResponse
       */
      Models::SendCommandResponse sendCommand(const Models::SendCommandRequest &request);

      /**
       * @summary 驱动一路流
       *
       * @param tmpReq SendMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendMessageResponse
       */
      Models::SendMessageResponse sendMessageWithOptions(const Models::SendMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 驱动一路流
       *
       * @param request SendMessageRequest
       * @return SendMessageResponse
       */
      Models::SendMessageResponse sendMessage(const Models::SendMessageRequest &request);

      /**
       * @summary 发送播报文本
       *
       * @param tmpReq SendTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendTextResponse
       */
      Models::SendTextResponse sendTextWithOptions(const Models::SendTextRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送播报文本
       *
       * @param request SendTextRequest
       * @return SendTextResponse
       */
      Models::SendTextResponse sendText(const Models::SendTextRequest &request);

      /**
       * @summary 发送vaml报表内容
       *
       * @param request SendVamlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendVamlResponse
       */
      Models::SendVamlResponse sendVamlWithOptions(const Models::SendVamlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送vaml报表内容
       *
       * @param request SendVamlRequest
       * @return SendVamlResponse
       */
      Models::SendVamlResponse sendVaml(const Models::SendVamlRequest &request);

      /**
       * @summary 启动一路流
       *
       * @param tmpReq StartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstanceWithOptions(const Models::StartInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动一路流
       *
       * @param request StartInstanceRequest
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstance(const Models::StartInstanceRequest &request);

      /**
       * @summary 停复机开机操作
       *
       * @param request StartTimedResetOperateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTimedResetOperateResponse
       */
      Models::StartTimedResetOperateResponse startTimedResetOperateWithOptions(const Models::StartTimedResetOperateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停复机开机操作
       *
       * @param request StartTimedResetOperateRequest
       * @return StartTimedResetOperateResponse
       */
      Models::StartTimedResetOperateResponse startTimedResetOperate(const Models::StartTimedResetOperateRequest &request);

      /**
       * @summary 关闭一路流
       *
       * @param request StopInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstanceWithOptions(const Models::StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭一路流
       *
       * @param request StopInstanceRequest
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstance(const Models::StopInstanceRequest &request);

      /**
       * @summary 提交一个音频转2D数字人播报视频生成的任务
       *
       * @param tmpReq SubmitAudioTo2DAvatarVideoTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAudioTo2DAvatarVideoTaskResponse
       */
      Models::SubmitAudioTo2DAvatarVideoTaskResponse submitAudioTo2DAvatarVideoTaskWithOptions(const Models::SubmitAudioTo2DAvatarVideoTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交一个音频转2D数字人播报视频生成的任务
       *
       * @param request SubmitAudioTo2DAvatarVideoTaskRequest
       * @return SubmitAudioTo2DAvatarVideoTaskResponse
       */
      Models::SubmitAudioTo2DAvatarVideoTaskResponse submitAudioTo2DAvatarVideoTask(const Models::SubmitAudioTo2DAvatarVideoTaskRequest &request);

      /**
       * @summary 提交一个音频转3D数字人播报视频生成的任务
       *
       * @param tmpReq SubmitAudioTo3DAvatarVideoTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAudioTo3DAvatarVideoTaskResponse
       */
      Models::SubmitAudioTo3DAvatarVideoTaskResponse submitAudioTo3DAvatarVideoTaskWithOptions(const Models::SubmitAudioTo3DAvatarVideoTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交一个音频转3D数字人播报视频生成的任务
       *
       * @param request SubmitAudioTo3DAvatarVideoTaskRequest
       * @return SubmitAudioTo3DAvatarVideoTaskResponse
       */
      Models::SubmitAudioTo3DAvatarVideoTaskResponse submitAudioTo3DAvatarVideoTask(const Models::SubmitAudioTo3DAvatarVideoTaskRequest &request);

      /**
       * @summary 提交一个数字人播报视频生成的任务
       *
       * @param tmpReq SubmitAvatarVideoTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAvatarVideoTaskResponse
       */
      Models::SubmitAvatarVideoTaskResponse submitAvatarVideoTaskWithOptions(const Models::SubmitAvatarVideoTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交一个数字人播报视频生成的任务
       *
       * @param request SubmitAvatarVideoTaskRequest
       * @return SubmitAvatarVideoTaskResponse
       */
      Models::SubmitAvatarVideoTaskResponse submitAvatarVideoTask(const Models::SubmitAvatarVideoTaskRequest &request);

      /**
       * @summary 提交一个文本转2D数字人播报视频生成的任务
       *
       * @param tmpReq SubmitTextTo2DAvatarVideoTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTextTo2DAvatarVideoTaskResponse
       */
      Models::SubmitTextTo2DAvatarVideoTaskResponse submitTextTo2DAvatarVideoTaskWithOptions(const Models::SubmitTextTo2DAvatarVideoTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交一个文本转2D数字人播报视频生成的任务
       *
       * @param request SubmitTextTo2DAvatarVideoTaskRequest
       * @return SubmitTextTo2DAvatarVideoTaskResponse
       */
      Models::SubmitTextTo2DAvatarVideoTaskResponse submitTextTo2DAvatarVideoTask(const Models::SubmitTextTo2DAvatarVideoTaskRequest &request);

      /**
       * @summary 提交一个文本转3D数字人播报视频生成的任务
       *
       * @param tmpReq SubmitTextTo3DAvatarVideoTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTextTo3DAvatarVideoTaskResponse
       */
      Models::SubmitTextTo3DAvatarVideoTaskResponse submitTextTo3DAvatarVideoTaskWithOptions(const Models::SubmitTextTo3DAvatarVideoTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交一个文本转3D数字人播报视频生成的任务
       *
       * @param request SubmitTextTo3DAvatarVideoTaskRequest
       * @return SubmitTextTo3DAvatarVideoTaskResponse
       */
      Models::SubmitTextTo3DAvatarVideoTaskResponse submitTextTo3DAvatarVideoTask(const Models::SubmitTextTo3DAvatarVideoTaskRequest &request);

      /**
       * @summary 修改创建2d人物的任务
       *
       * @param request Update2dAvatarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Update2dAvatarResponse
       */
      Models::Update2dAvatarResponse update2dAvatarWithOptions(const Models::Update2dAvatarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改创建2d人物的任务
       *
       * @param request Update2dAvatarRequest
       * @return Update2dAvatarResponse
       */
      Models::Update2dAvatarResponse update2dAvatar(const Models::Update2dAvatarRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
