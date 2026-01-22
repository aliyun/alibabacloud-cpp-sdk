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
  };
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
