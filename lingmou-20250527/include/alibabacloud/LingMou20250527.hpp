// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_LINGMOU20250527_HPP_
#define ALIBABACLOUD_LINGMOU20250527_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/LingMou20250527Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/LingMou20250527.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 关闭会话实例session
       *
       * @param tmpReq CloseChatInstanceSessionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseChatInstanceSessionsResponse
       */
      Models::CloseChatInstanceSessionsResponse closeChatInstanceSessionsWithOptions(const string &instanceId, const Models::CloseChatInstanceSessionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭会话实例session
       *
       * @param request CloseChatInstanceSessionsRequest
       * @return CloseChatInstanceSessionsResponse
       */
      Models::CloseChatInstanceSessionsResponse closeChatInstanceSessions(const string &instanceId, const Models::CloseChatInstanceSessionsRequest &request);

      /**
       * @summary 创建背景素材
       *
       * @param request CreateBackgroundPicRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackgroundPicResponse
       */
      Models::CreateBackgroundPicResponse createBackgroundPicWithOptions(const Models::CreateBackgroundPicRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建背景素材
       *
       * @param request CreateBackgroundPicRequest
       * @return CreateBackgroundPicResponse
       */
      Models::CreateBackgroundPicResponse createBackgroundPic(const Models::CreateBackgroundPicRequest &request);

      /**
       * @summary 背景配置
       *
       * @param request CreateChatConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatConfigResponse
       */
      Models::CreateChatConfigResponse createChatConfigWithOptions(const Models::CreateChatConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 背景配置
       *
       * @param request CreateChatConfigRequest
       * @return CreateChatConfigResponse
       */
      Models::CreateChatConfigResponse createChatConfig(const Models::CreateChatConfigRequest &request);

      /**
       * @summary 创建数字人会话
       *
       * @param request CreateChatSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatSessionResponse
       */
      Models::CreateChatSessionResponse createChatSessionWithOptions(const string &id, const Models::CreateChatSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数字人会话
       *
       * @param request CreateChatSessionRequest
       * @return CreateChatSessionResponse
       */
      Models::CreateChatSessionResponse createChatSession(const string &id, const Models::CreateChatSessionRequest &request);

      /**
       * @summary 创建对话免训照片数字人
       *
       * @param request CreateNoTrainPicAvatarRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNoTrainPicAvatarResponse
       */
      Models::CreateNoTrainPicAvatarResponse createNoTrainPicAvatarWithOptions(const Models::CreateNoTrainPicAvatarRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建对话免训照片数字人
       *
       * @param request CreateNoTrainPicAvatarRequest
       * @return CreateNoTrainPicAvatarResponse
       */
      Models::CreateNoTrainPicAvatarResponse createNoTrainPicAvatar(const Models::CreateNoTrainPicAvatarRequest &request);

      /**
       * @summary 获取对话免训图片素材上传凭证
       *
       * @param request GetUploadPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUploadPolicyResponse
       */
      Models::GetUploadPolicyResponse getUploadPolicyWithOptions(const Models::GetUploadPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取对话免训图片素材上传凭证
       *
       * @param request GetUploadPolicyRequest
       * @return GetUploadPolicyResponse
       */
      Models::GetUploadPolicyResponse getUploadPolicy(const Models::GetUploadPolicyRequest &request);

      /**
       * @summary 查询会话实例session
       *
       * @param tmpReq QueryChatInstanceSessionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryChatInstanceSessionsResponse
       */
      Models::QueryChatInstanceSessionsResponse queryChatInstanceSessionsWithOptions(const string &instanceId, const Models::QueryChatInstanceSessionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询会话实例session
       *
       * @param request QueryChatInstanceSessionsRequest
       * @return QueryChatInstanceSessionsResponse
       */
      Models::QueryChatInstanceSessionsResponse queryChatInstanceSessions(const string &instanceId, const Models::QueryChatInstanceSessionsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
