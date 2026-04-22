// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ADBAI20250812_HPP_
#define ALIBABACLOUD_ADBAI20250812_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ADBAI20250812Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ADBAI20250812.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ADBAI20250812
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建指标平台
       *
       * @param tmpReq CreateAgentPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentPlatformResponse
       */
      Models::CreateAgentPlatformResponse createAgentPlatformWithOptions(const Models::CreateAgentPlatformRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建指标平台
       *
       * @param request CreateAgentPlatformRequest
       * @return CreateAgentPlatformResponse
       */
      Models::CreateAgentPlatformResponse createAgentPlatform(const Models::CreateAgentPlatformRequest &request);

      /**
       * @summary 创建具身智能平台
       *
       * @param tmpReq CreateEmbodiedAIPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEmbodiedAIPlatformResponse
       */
      Models::CreateEmbodiedAIPlatformResponse createEmbodiedAIPlatformWithOptions(const Models::CreateEmbodiedAIPlatformRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建具身智能平台
       *
       * @param request CreateEmbodiedAIPlatformRequest
       * @return CreateEmbodiedAIPlatformResponse
       */
      Models::CreateEmbodiedAIPlatformResponse createEmbodiedAIPlatform(const Models::CreateEmbodiedAIPlatformRequest &request);

      /**
       * @summary 删除指标平台
       *
       * @param request DeleteAgentPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentPlatformResponse
       */
      Models::DeleteAgentPlatformResponse deleteAgentPlatformWithOptions(const Models::DeleteAgentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指标平台
       *
       * @param request DeleteAgentPlatformRequest
       * @return DeleteAgentPlatformResponse
       */
      Models::DeleteAgentPlatformResponse deleteAgentPlatform(const Models::DeleteAgentPlatformRequest &request);

      /**
       * @summary 删除具身智能平台
       *
       * @param request DeleteEmbodiedAIPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEmbodiedAIPlatformResponse
       */
      Models::DeleteEmbodiedAIPlatformResponse deleteEmbodiedAIPlatformWithOptions(const Models::DeleteEmbodiedAIPlatformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除具身智能平台
       *
       * @param request DeleteEmbodiedAIPlatformRequest
       * @return DeleteEmbodiedAIPlatformResponse
       */
      Models::DeleteEmbodiedAIPlatformResponse deleteEmbodiedAIPlatform(const Models::DeleteEmbodiedAIPlatformRequest &request);

      /**
       * @summary 对ADB-MySQL提供产品RAG检索和实例分析、运维诊断
       *
       * @param request DescribeChatMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChatMessageResponse
       */
      FutureGenerator<Models::DescribeChatMessageResponse> describeChatMessageWithSSE(const Models::DescribeChatMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对ADB-MySQL提供产品RAG检索和实例分析、运维诊断
       *
       * @param request DescribeChatMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChatMessageResponse
       */
      Models::DescribeChatMessageResponse describeChatMessageWithOptions(const Models::DescribeChatMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对ADB-MySQL提供产品RAG检索和实例分析、运维诊断
       *
       * @param request DescribeChatMessageRequest
       * @return DescribeChatMessageResponse
       */
      Models::DescribeChatMessageResponse describeChatMessage(const Models::DescribeChatMessageRequest &request);

      /**
       * @summary 查询具身智能平台设备资源分配方案
       *
       * @param request DescribeEapDeviceResourceAllocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEapDeviceResourceAllocationResponse
       */
      Models::DescribeEapDeviceResourceAllocationResponse describeEapDeviceResourceAllocationWithOptions(const Models::DescribeEapDeviceResourceAllocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询具身智能平台设备资源分配方案
       *
       * @param request DescribeEapDeviceResourceAllocationRequest
       * @return DescribeEapDeviceResourceAllocationResponse
       */
      Models::DescribeEapDeviceResourceAllocationResponse describeEapDeviceResourceAllocation(const Models::DescribeEapDeviceResourceAllocationRequest &request);

      /**
       * @summary 查询具身智能平台
       *
       * @param request DescribeEmbodiedAIPlatformsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEmbodiedAIPlatformsResponse
       */
      Models::DescribeEmbodiedAIPlatformsResponse describeEmbodiedAIPlatformsWithOptions(const Models::DescribeEmbodiedAIPlatformsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询具身智能平台
       *
       * @param request DescribeEmbodiedAIPlatformsRequest
       * @return DescribeEmbodiedAIPlatformsResponse
       */
      Models::DescribeEmbodiedAIPlatformsResponse describeEmbodiedAIPlatforms(const Models::DescribeEmbodiedAIPlatformsRequest &request);

      /**
       * @summary 查询具身智能平台资源用量
       *
       * @param request GetEmbodiedAIPlatformResourceUsageInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEmbodiedAIPlatformResourceUsageInfoResponse
       */
      Models::GetEmbodiedAIPlatformResourceUsageInfoResponse getEmbodiedAIPlatformResourceUsageInfoWithOptions(const Models::GetEmbodiedAIPlatformResourceUsageInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询具身智能平台资源用量
       *
       * @param request GetEmbodiedAIPlatformResourceUsageInfoRequest
       * @return GetEmbodiedAIPlatformResourceUsageInfoResponse
       */
      Models::GetEmbodiedAIPlatformResourceUsageInfoResponse getEmbodiedAIPlatformResourceUsageInfo(const Models::GetEmbodiedAIPlatformResourceUsageInfoRequest &request);

      /**
       * @summary 解锁具身智能平台
       *
       * @param request LockEmbodiedAIPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LockEmbodiedAIPlatformResponse
       */
      Models::LockEmbodiedAIPlatformResponse lockEmbodiedAIPlatformWithOptions(const Models::LockEmbodiedAIPlatformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解锁具身智能平台
       *
       * @param request LockEmbodiedAIPlatformRequest
       * @return LockEmbodiedAIPlatformResponse
       */
      Models::LockEmbodiedAIPlatformResponse lockEmbodiedAIPlatform(const Models::LockEmbodiedAIPlatformRequest &request);

      /**
       * @summary 修改变配指标平台
       *
       * @param tmpReq ModifyAgentPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAgentPlatformResponse
       */
      Models::ModifyAgentPlatformResponse modifyAgentPlatformWithOptions(const Models::ModifyAgentPlatformRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改变配指标平台
       *
       * @param request ModifyAgentPlatformRequest
       * @return ModifyAgentPlatformResponse
       */
      Models::ModifyAgentPlatformResponse modifyAgentPlatform(const Models::ModifyAgentPlatformRequest &request);

      /**
       * @summary 变配具身智能平台
       *
       * @param tmpReq ModifyEmbodiedAIPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEmbodiedAIPlatformResponse
       */
      Models::ModifyEmbodiedAIPlatformResponse modifyEmbodiedAIPlatformWithOptions(const Models::ModifyEmbodiedAIPlatformRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 变配具身智能平台
       *
       * @param request ModifyEmbodiedAIPlatformRequest
       * @return ModifyEmbodiedAIPlatformResponse
       */
      Models::ModifyEmbodiedAIPlatformResponse modifyEmbodiedAIPlatform(const Models::ModifyEmbodiedAIPlatformRequest &request);

      /**
       * @summary 重置具身智能平台密码
       *
       * @param request ResetEmbodiedAIPlatformPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetEmbodiedAIPlatformPasswordResponse
       */
      Models::ResetEmbodiedAIPlatformPasswordResponse resetEmbodiedAIPlatformPasswordWithOptions(const Models::ResetEmbodiedAIPlatformPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重置具身智能平台密码
       *
       * @param request ResetEmbodiedAIPlatformPasswordRequest
       * @return ResetEmbodiedAIPlatformPasswordResponse
       */
      Models::ResetEmbodiedAIPlatformPasswordResponse resetEmbodiedAIPlatformPassword(const Models::ResetEmbodiedAIPlatformPasswordRequest &request);

      /**
       * @summary 解锁具身智能平台
       *
       * @param request UnlockEmbodiedAIPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockEmbodiedAIPlatformResponse
       */
      Models::UnlockEmbodiedAIPlatformResponse unlockEmbodiedAIPlatformWithOptions(const Models::UnlockEmbodiedAIPlatformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解锁具身智能平台
       *
       * @param request UnlockEmbodiedAIPlatformRequest
       * @return UnlockEmbodiedAIPlatformResponse
       */
      Models::UnlockEmbodiedAIPlatformResponse unlockEmbodiedAIPlatform(const Models::UnlockEmbodiedAIPlatformRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
