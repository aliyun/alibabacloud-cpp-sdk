// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MSEAP20210118_HPP_
#define ALIBABACLOUD_MSEAP20210118_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Mseap20210118Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Mseap20210118.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mseap20210118
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 商品授权码激活
       *
       * @param request ActivateLicenseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateLicenseResponse
       */
      Models::ActivateLicenseResponse activateLicenseWithOptions(const Models::ActivateLicenseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 商品授权码激活
       *
       * @param request ActivateLicenseRequest
       * @return ActivateLicenseResponse
       */
      Models::ActivateLicenseResponse activateLicense(const Models::ActivateLicenseRequest &request);

      /**
       * @summary 任务回调
       *
       * @param request CallbackTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CallbackTaskResponse
       */
      Models::CallbackTaskResponse callbackTaskWithOptions(const Models::CallbackTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 任务回调
       *
       * @param request CallbackTaskRequest
       * @return CallbackTaskResponse
       */
      Models::CallbackTaskResponse callbackTask(const Models::CallbackTaskRequest &request);

      /**
       * @summary 查询协议状态
       *
       * @param request DescribeAgreementStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAgreementStatusResponse
       */
      Models::DescribeAgreementStatusResponse describeAgreementStatusWithOptions(const Models::DescribeAgreementStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询协议状态
       *
       * @param request DescribeAgreementStatusRequest
       * @return DescribeAgreementStatusResponse
       */
      Models::DescribeAgreementStatusResponse describeAgreementStatus(const Models::DescribeAgreementStatusRequest &request);

      /**
       * @summary 合作伙伴生成上传文件策略
       *
       * @param request GenerateUploadFilePolicyForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateUploadFilePolicyForPartnerResponse
       */
      Models::GenerateUploadFilePolicyForPartnerResponse generateUploadFilePolicyForPartnerWithOptions(const Models::GenerateUploadFilePolicyForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 合作伙伴生成上传文件策略
       *
       * @param request GenerateUploadFilePolicyForPartnerRequest
       * @return GenerateUploadFilePolicyForPartnerResponse
       */
      Models::GenerateUploadFilePolicyForPartnerResponse generateUploadFilePolicyForPartner(const Models::GenerateUploadFilePolicyForPartnerRequest &request);

      /**
       * @summary 获取node节点通过流程id
       *
       * @param request GetNodeByFlowIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeByFlowIdResponse
       */
      Models::GetNodeByFlowIdResponse getNodeByFlowIdWithOptions(const Models::GetNodeByFlowIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取node节点通过流程id
       *
       * @param request GetNodeByFlowIdRequest
       * @return GetNodeByFlowIdResponse
       */
      Models::GetNodeByFlowIdResponse getNodeByFlowId(const Models::GetNodeByFlowIdRequest &request);

      /**
       * @summary 获取node节点通过模版id
       *
       * @param request GetNodeByTemplateIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeByTemplateIdResponse
       */
      Models::GetNodeByTemplateIdResponse getNodeByTemplateIdWithOptions(const Models::GetNodeByTemplateIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取node节点通过模版id
       *
       * @param request GetNodeByTemplateIdRequest
       * @return GetNodeByTemplateIdResponse
       */
      Models::GetNodeByTemplateIdResponse getNodeByTemplateId(const Models::GetNodeByTemplateIdRequest &request);

      /**
       * @summary 合作伙伴获取订单概要信息
       *
       * @param request GetOrderSummaryForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrderSummaryForPartnerResponse
       */
      Models::GetOrderSummaryForPartnerResponse getOrderSummaryForPartnerWithOptions(const Models::GetOrderSummaryForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 合作伙伴获取订单概要信息
       *
       * @param request GetOrderSummaryForPartnerRequest
       * @return GetOrderSummaryForPartnerResponse
       */
      Models::GetOrderSummaryForPartnerResponse getOrderSummaryForPartner(const Models::GetOrderSummaryForPartnerRequest &request);

      /**
       * @summary 合作伙伴获取用户跨平台信息
       *
       * @param request GetPlatformUserInfoForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPlatformUserInfoForPartnerResponse
       */
      Models::GetPlatformUserInfoForPartnerResponse getPlatformUserInfoForPartnerWithOptions(const Models::GetPlatformUserInfoForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 合作伙伴获取用户跨平台信息
       *
       * @param request GetPlatformUserInfoForPartnerRequest
       * @return GetPlatformUserInfoForPartnerResponse
       */
      Models::GetPlatformUserInfoForPartnerResponse getPlatformUserInfoForPartner(const Models::GetPlatformUserInfoForPartnerRequest &request);

      /**
       * @summary 获取代理
       *
       * @param request GetProxyByTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProxyByTypeResponse
       */
      Models::GetProxyByTypeResponse getProxyByTypeWithOptions(const Models::GetProxyByTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取代理
       *
       * @param request GetProxyByTypeRequest
       * @return GetProxyByTypeResponse
       */
      Models::GetProxyByTypeResponse getProxyByType(const Models::GetProxyByTypeRequest &request);

      /**
       * @summary 获取redis值
       *
       * @param request GetRedisValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRedisValueResponse
       */
      Models::GetRedisValueResponse getRedisValueWithOptions(const Models::GetRedisValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取redis值
       *
       * @param request GetRedisValueRequest
       * @return GetRedisValueResponse
       */
      Models::GetRedisValueResponse getRedisValue(const Models::GetRedisValueRequest &request);

      /**
       * @summary 获取变量
       *
       * @param request GetVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVariableResponse
       */
      Models::GetVariableResponse getVariableWithOptions(const Models::GetVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取变量
       *
       * @param request GetVariableRequest
       * @return GetVariableResponse
       */
      Models::GetVariableResponse getVariable(const Models::GetVariableRequest &request);

      /**
       * @summary 识别验证码
       *
       * @param request IdentifyCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IdentifyCodeResponse
       */
      Models::IdentifyCodeResponse identifyCodeWithOptions(const Models::IdentifyCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 识别验证码
       *
       * @param request IdentifyCodeRequest
       * @return IdentifyCodeResponse
       */
      Models::IdentifyCodeResponse identifyCode(const Models::IdentifyCodeRequest &request);

      /**
       * @summary 拉取协议变更识别模型
       *
       * @param request PullRpaModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PullRpaModelResponse
       */
      Models::PullRpaModelResponse pullRpaModelWithOptions(const Models::PullRpaModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 拉取协议变更识别模型
       *
       * @param request PullRpaModelRequest
       * @return PullRpaModelResponse
       */
      Models::PullRpaModelResponse pullRpaModel(const Models::PullRpaModelRequest &request);

      /**
       * @summary RPA拉取任务
       *
       * @param request PullTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PullTaskResponse
       */
      Models::PullTaskResponse pullTaskWithOptions(const Models::PullTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary RPA拉取任务
       *
       * @param request PullTaskRequest
       * @return PullTaskResponse
       */
      Models::PullTaskResponse pullTask(const Models::PullTaskRequest &request);

      /**
       * @summary 推送RPA运行时任务
       *
       * @param request PushRpaTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushRpaTaskResponse
       */
      Models::PushRpaTaskResponse pushRpaTaskWithOptions(const Models::PushRpaTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推送RPA运行时任务
       *
       * @param request PushRpaTaskRequest
       * @return PushRpaTaskResponse
       */
      Models::PushRpaTaskResponse pushRpaTask(const Models::PushRpaTaskRequest &request);

      /**
       * @summary 推送运行时任务明细
       *
       * @param request PushRpaTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushRpaTaskDetailResponse
       */
      Models::PushRpaTaskDetailResponse pushRpaTaskDetailWithOptions(const Models::PushRpaTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推送运行时任务明细
       *
       * @param request PushRpaTaskDetailRequest
       * @return PushRpaTaskDetailResponse
       */
      Models::PushRpaTaskDetailResponse pushRpaTaskDetail(const Models::PushRpaTaskDetailRequest &request);

      /**
       * @summary 合作伙伴发送消息通知
       *
       * @param tmpReq SendNotificationForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendNotificationForPartnerResponse
       */
      Models::SendNotificationForPartnerResponse sendNotificationForPartnerWithOptions(const Models::SendNotificationForPartnerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 合作伙伴发送消息通知
       *
       * @param request SendNotificationForPartnerRequest
       * @return SendNotificationForPartnerResponse
       */
      Models::SendNotificationForPartnerResponse sendNotificationForPartner(const Models::SendNotificationForPartnerRequest &request);

      /**
       * @summary redis设置
       *
       * @param request SetRedisValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetRedisValueResponse
       */
      Models::SetRedisValueResponse setRedisValueWithOptions(const Models::SetRedisValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary redis设置
       *
       * @param request SetRedisValueRequest
       * @return SetRedisValueResponse
       */
      Models::SetRedisValueResponse setRedisValue(const Models::SetRedisValueRequest &request);

      /**
       * @summary 更新协议状态
       *
       * @param request UpdateAgreementStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgreementStatusResponse
       */
      Models::UpdateAgreementStatusResponse updateAgreementStatusWithOptions(const Models::UpdateAgreementStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新协议状态
       *
       * @param request UpdateAgreementStatusRequest
       * @return UpdateAgreementStatusResponse
       */
      Models::UpdateAgreementStatusResponse updateAgreementStatus(const Models::UpdateAgreementStatusRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Mseap20210118
#endif
