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
       * @summary Creates a metric analysis platform.
       *
       * @param tmpReq CreateAgentPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentPlatformResponse
       */
      Models::CreateAgentPlatformResponse createAgentPlatformWithOptions(const Models::CreateAgentPlatformRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a metric analysis platform.
       *
       * @param request CreateAgentPlatformRequest
       * @return CreateAgentPlatformResponse
       */
      Models::CreateAgentPlatformResponse createAgentPlatform(const Models::CreateAgentPlatformRequest &request);

      /**
       * @summary Creates an embodied intelligence multimodal data platform.
       *
       * @description Queries the actual resource amount corresponding to the backend of the instance ontology count.
       *
       * @param tmpReq CreateEmbodiedAIPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEmbodiedAIPlatformResponse
       */
      Models::CreateEmbodiedAIPlatformResponse createEmbodiedAIPlatformWithOptions(const Models::CreateEmbodiedAIPlatformRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an embodied intelligence multimodal data platform.
       *
       * @description Queries the actual resource amount corresponding to the backend of the instance ontology count.
       *
       * @param request CreateEmbodiedAIPlatformRequest
       * @return CreateEmbodiedAIPlatformResponse
       */
      Models::CreateEmbodiedAIPlatformResponse createEmbodiedAIPlatform(const Models::CreateEmbodiedAIPlatformRequest &request);

      /**
       * @summary Deletes a metrics platform.
       *
       * @param request DeleteAgentPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentPlatformResponse
       */
      Models::DeleteAgentPlatformResponse deleteAgentPlatformWithOptions(const Models::DeleteAgentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a metrics platform.
       *
       * @param request DeleteAgentPlatformRequest
       * @return DeleteAgentPlatformResponse
       */
      Models::DeleteAgentPlatformResponse deleteAgentPlatform(const Models::DeleteAgentPlatformRequest &request);

      /**
       * @summary Deletes an embodied intelligence platform.
       *
       * @param request DeleteEmbodiedAIPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEmbodiedAIPlatformResponse
       */
      Models::DeleteEmbodiedAIPlatformResponse deleteEmbodiedAIPlatformWithOptions(const Models::DeleteEmbodiedAIPlatformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an embodied intelligence platform.
       *
       * @param request DeleteEmbodiedAIPlatformRequest
       * @return DeleteEmbodiedAIPlatformResponse
       */
      Models::DeleteEmbodiedAIPlatformResponse deleteEmbodiedAIPlatform(const Models::DeleteEmbodiedAIPlatformRequest &request);

      /**
       * @summary Queries multi-turn conversations for instance kernel diagnostics.
       *
       * @description Queries multi-turn conversations for instance kernel diagnostics.
       *
       * @param request DescribeChatMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChatMessageResponse
       */
      FutureGenerator<Models::DescribeChatMessageResponse> describeChatMessageWithSSE(const Models::DescribeChatMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries multi-turn conversations for instance kernel diagnostics.
       *
       * @description Queries multi-turn conversations for instance kernel diagnostics.
       *
       * @param request DescribeChatMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChatMessageResponse
       */
      Models::DescribeChatMessageResponse describeChatMessageWithOptions(const Models::DescribeChatMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries multi-turn conversations for instance kernel diagnostics.
       *
       * @description Queries multi-turn conversations for instance kernel diagnostics.
       *
       * @param request DescribeChatMessageRequest
       * @return DescribeChatMessageResponse
       */
      Models::DescribeChatMessageResponse describeChatMessage(const Models::DescribeChatMessageRequest &request);

      /**
       * @summary Query the resource allocation plan for Embodied Intelligence platform devices
       *
       * @description Used to view the actual resource amount corresponding to the backend of the instance ontology count
       *
       * @param request DescribeEapDeviceResourceAllocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEapDeviceResourceAllocationResponse
       */
      Models::DescribeEapDeviceResourceAllocationResponse describeEapDeviceResourceAllocationWithOptions(const Models::DescribeEapDeviceResourceAllocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the resource allocation plan for Embodied Intelligence platform devices
       *
       * @description Used to view the actual resource amount corresponding to the backend of the instance ontology count
       *
       * @param request DescribeEapDeviceResourceAllocationRequest
       * @return DescribeEapDeviceResourceAllocationResponse
       */
      Models::DescribeEapDeviceResourceAllocationResponse describeEapDeviceResourceAllocation(const Models::DescribeEapDeviceResourceAllocationRequest &request);

      /**
       * @summary Queries embodied intelligence multimodal data platforms.
       *
       * @param request DescribeEmbodiedAIPlatformsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEmbodiedAIPlatformsResponse
       */
      Models::DescribeEmbodiedAIPlatformsResponse describeEmbodiedAIPlatformsWithOptions(const Models::DescribeEmbodiedAIPlatformsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries embodied intelligence multimodal data platforms.
       *
       * @param request DescribeEmbodiedAIPlatformsRequest
       * @return DescribeEmbodiedAIPlatformsResponse
       */
      Models::DescribeEmbodiedAIPlatformsResponse describeEmbodiedAIPlatforms(const Models::DescribeEmbodiedAIPlatformsRequest &request);

      /**
       * @summary Queries the resource usage information of an embodied intelligence platform.
       *
       * @param request GetEmbodiedAIPlatformResourceUsageInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEmbodiedAIPlatformResourceUsageInfoResponse
       */
      Models::GetEmbodiedAIPlatformResourceUsageInfoResponse getEmbodiedAIPlatformResourceUsageInfoWithOptions(const Models::GetEmbodiedAIPlatformResourceUsageInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource usage information of an embodied intelligence platform.
       *
       * @param request GetEmbodiedAIPlatformResourceUsageInfoRequest
       * @return GetEmbodiedAIPlatformResourceUsageInfoResponse
       */
      Models::GetEmbodiedAIPlatformResourceUsageInfoResponse getEmbodiedAIPlatformResourceUsageInfo(const Models::GetEmbodiedAIPlatformResourceUsageInfoRequest &request);

      /**
       * @summary Locks an embodied intelligence platform.
       *
       * @param request LockEmbodiedAIPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LockEmbodiedAIPlatformResponse
       */
      Models::LockEmbodiedAIPlatformResponse lockEmbodiedAIPlatformWithOptions(const Models::LockEmbodiedAIPlatformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Locks an embodied intelligence platform.
       *
       * @param request LockEmbodiedAIPlatformRequest
       * @return LockEmbodiedAIPlatformResponse
       */
      Models::LockEmbodiedAIPlatformResponse lockEmbodiedAIPlatform(const Models::LockEmbodiedAIPlatformRequest &request);

      /**
       * @summary Upgrades or downgrades the specifications of a metric platform.
       *
       * @param tmpReq ModifyAgentPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAgentPlatformResponse
       */
      Models::ModifyAgentPlatformResponse modifyAgentPlatformWithOptions(const Models::ModifyAgentPlatformRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades or downgrades the specifications of a metric platform.
       *
       * @param request ModifyAgentPlatformRequest
       * @return ModifyAgentPlatformResponse
       */
      Models::ModifyAgentPlatformResponse modifyAgentPlatform(const Models::ModifyAgentPlatformRequest &request);

      /**
       * @summary Modifies the specifications of an embodied intelligence platform.
       *
       * @param tmpReq ModifyEmbodiedAIPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEmbodiedAIPlatformResponse
       */
      Models::ModifyEmbodiedAIPlatformResponse modifyEmbodiedAIPlatformWithOptions(const Models::ModifyEmbodiedAIPlatformRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specifications of an embodied intelligence platform.
       *
       * @param request ModifyEmbodiedAIPlatformRequest
       * @return ModifyEmbodiedAIPlatformResponse
       */
      Models::ModifyEmbodiedAIPlatformResponse modifyEmbodiedAIPlatform(const Models::ModifyEmbodiedAIPlatformRequest &request);

      /**
       * @summary Resets the admin password for the embodied intelligence platform.
       *
       * @param request ResetEmbodiedAIPlatformPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetEmbodiedAIPlatformPasswordResponse
       */
      Models::ResetEmbodiedAIPlatformPasswordResponse resetEmbodiedAIPlatformPasswordWithOptions(const Models::ResetEmbodiedAIPlatformPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the admin password for the embodied intelligence platform.
       *
       * @param request ResetEmbodiedAIPlatformPasswordRequest
       * @return ResetEmbodiedAIPlatformPasswordResponse
       */
      Models::ResetEmbodiedAIPlatformPasswordResponse resetEmbodiedAIPlatformPassword(const Models::ResetEmbodiedAIPlatformPasswordRequest &request);

      /**
       * @summary Unlocks an embodied intelligence platform.
       *
       * @param request UnlockEmbodiedAIPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockEmbodiedAIPlatformResponse
       */
      Models::UnlockEmbodiedAIPlatformResponse unlockEmbodiedAIPlatformWithOptions(const Models::UnlockEmbodiedAIPlatformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlocks an embodied intelligence platform.
       *
       * @param request UnlockEmbodiedAIPlatformRequest
       * @return UnlockEmbodiedAIPlatformResponse
       */
      Models::UnlockEmbodiedAIPlatformResponse unlockEmbodiedAIPlatform(const Models::UnlockEmbodiedAIPlatformRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
