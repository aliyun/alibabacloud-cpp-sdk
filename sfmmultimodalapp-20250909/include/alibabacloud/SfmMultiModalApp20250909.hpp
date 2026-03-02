// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SFMMULTIMODALAPP20250909_HPP_
#define ALIBABACLOUD_SFMMULTIMODALAPP20250909_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/SfmMultiModalApp20250909Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/SfmMultiModalApp20250909.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 指令创建
       *
       * @param tmpReq CreateCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCommandResponse
       */
      Models::CreateCommandResponse createCommandWithOptions(const Models::CreateCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指令创建
       *
       * @param request CreateCommandRequest
       * @return CreateCommandResponse
       */
      Models::CreateCommandResponse createCommand(const Models::CreateCommandRequest &request);

      /**
       * @summary 新增用户记忆
       *
       * @param tmpReq CreateMemoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMemoryResponse
       */
      Models::CreateMemoryResponse createMemoryWithOptions(const Models::CreateMemoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增用户记忆
       *
       * @param request CreateMemoryRequest
       * @return CreateMemoryResponse
       */
      Models::CreateMemoryResponse createMemory(const Models::CreateMemoryRequest &request);

      /**
       * @summary 创建多模态应用
       *
       * @param tmpReq CreateMmAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMmAppResponse
       */
      Models::CreateMmAppResponse createMmAppWithOptions(const Models::CreateMmAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建多模态应用
       *
       * @param request CreateMmAppRequest
       * @return CreateMmAppResponse
       */
      Models::CreateMmAppResponse createMmApp(const Models::CreateMmAppRequest &request);

      /**
       * @summary 创建用户画像配置
       *
       * @param tmpReq CreateProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProfileResponse
       */
      Models::CreateProfileResponse createProfileWithOptions(const Models::CreateProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建用户画像配置
       *
       * @param request CreateProfileRequest
       * @return CreateProfileResponse
       */
      Models::CreateProfileResponse createProfile(const Models::CreateProfileRequest &request);

      /**
       * @summary 删除指令
       *
       * @param request DeleteCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCommandResponse
       */
      Models::DeleteCommandResponse deleteCommandWithOptions(const Models::DeleteCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指令
       *
       * @param request DeleteCommandRequest
       * @return DeleteCommandResponse
       */
      Models::DeleteCommandResponse deleteCommand(const Models::DeleteCommandRequest &request);

      /**
       * @summary 删除用户记忆
       *
       * @param request DeleteMemoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMemoryResponse
       */
      Models::DeleteMemoryResponse deleteMemoryWithOptions(const Models::DeleteMemoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除用户记忆
       *
       * @param request DeleteMemoryRequest
       * @return DeleteMemoryResponse
       */
      Models::DeleteMemoryResponse deleteMemory(const Models::DeleteMemoryRequest &request);

      /**
       * @summary 删除多模态应用
       *
       * @param request DeleteMmAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMmAppResponse
       */
      Models::DeleteMmAppResponse deleteMmAppWithOptions(const Models::DeleteMmAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除多模态应用
       *
       * @param request DeleteMmAppRequest
       * @return DeleteMmAppResponse
       */
      Models::DeleteMmAppResponse deleteMmApp(const Models::DeleteMmAppRequest &request);

      /**
       * @summary 删除用户画像配置
       *
       * @param request DeleteProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProfileResponse
       */
      Models::DeleteProfileResponse deleteProfileWithOptions(const Models::DeleteProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除用户画像配置
       *
       * @param request DeleteProfileRequest
       * @return DeleteProfileResponse
       */
      Models::DeleteProfileResponse deleteProfile(const Models::DeleteProfileRequest &request);

      /**
       * @summary 指令详情
       *
       * @param request DescribeCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCommandResponse
       */
      Models::DescribeCommandResponse describeCommandWithOptions(const Models::DescribeCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指令详情
       *
       * @param request DescribeCommandRequest
       * @return DescribeCommandResponse
       */
      Models::DescribeCommandResponse describeCommand(const Models::DescribeCommandRequest &request);

      /**
       * @summary 多模态应用详情
       *
       * @param request DescribeMmAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMmAppResponse
       */
      Models::DescribeMmAppResponse describeMmAppWithOptions(const Models::DescribeMmAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 多模态应用详情
       *
       * @param request DescribeMmAppRequest
       * @return DescribeMmAppResponse
       */
      Models::DescribeMmAppResponse describeMmApp(const Models::DescribeMmAppRequest &request);

      /**
       * @summary 指令列表
       *
       * @param request ListCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCommandResponse
       */
      Models::ListCommandResponse listCommandWithOptions(const Models::ListCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指令列表
       *
       * @param request ListCommandRequest
       * @return ListCommandResponse
       */
      Models::ListCommandResponse listCommand(const Models::ListCommandRequest &request);

      /**
       * @summary 获取多模态应用列表
       *
       * @param request ListMmAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmAppResponse
       */
      Models::ListMmAppResponse listMmAppWithOptions(const Models::ListMmAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取多模态应用列表
       *
       * @param request ListMmAppRequest
       * @return ListMmAppResponse
       */
      Models::ListMmAppResponse listMmApp(const Models::ListMmAppRequest &request);

      /**
       * @summary 应用发布列表
       *
       * @param request ListPublishedMmAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublishedMmAppResponse
       */
      Models::ListPublishedMmAppResponse listPublishedMmAppWithOptions(const Models::ListPublishedMmAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 应用发布列表
       *
       * @param request ListPublishedMmAppRequest
       * @return ListPublishedMmAppResponse
       */
      Models::ListPublishedMmAppResponse listPublishedMmApp(const Models::ListPublishedMmAppRequest &request);

      /**
       * @summary 变更用户记忆配置
       *
       * @param request PatchMemoryConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PatchMemoryConfigResponse
       */
      Models::PatchMemoryConfigResponse patchMemoryConfigWithOptions(const Models::PatchMemoryConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 变更用户记忆配置
       *
       * @param request PatchMemoryConfigRequest
       * @return PatchMemoryConfigResponse
       */
      Models::PatchMemoryConfigResponse patchMemoryConfig(const Models::PatchMemoryConfigRequest &request);

      /**
       * @summary 多模态应用发布
       *
       * @param request PublishMmAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishMmAppResponse
       */
      Models::PublishMmAppResponse publishMmAppWithOptions(const Models::PublishMmAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 多模态应用发布
       *
       * @param request PublishMmAppRequest
       * @return PublishMmAppResponse
       */
      Models::PublishMmAppResponse publishMmApp(const Models::PublishMmAppRequest &request);

      /**
       * @summary 查询用户记忆配置
       *
       * @param request QueryMemoryConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMemoryConfigResponse
       */
      Models::QueryMemoryConfigResponse queryMemoryConfigWithOptions(const Models::QueryMemoryConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户记忆配置
       *
       * @param request QueryMemoryConfigRequest
       * @return QueryMemoryConfigResponse
       */
      Models::QueryMemoryConfigResponse queryMemoryConfig(const Models::QueryMemoryConfigRequest &request);

      /**
       * @summary 查询用户记忆列表
       *
       * @param request QueryMemoryListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMemoryListResponse
       */
      Models::QueryMemoryListResponse queryMemoryListWithOptions(const Models::QueryMemoryListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户记忆列表
       *
       * @param request QueryMemoryListRequest
       * @return QueryMemoryListResponse
       */
      Models::QueryMemoryListResponse queryMemoryList(const Models::QueryMemoryListRequest &request);

      /**
       * @summary 查询用户画像配置
       *
       * @param request QueryProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryProfileResponse
       */
      Models::QueryProfileResponse queryProfileWithOptions(const Models::QueryProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户画像配置
       *
       * @param request QueryProfileRequest
       * @return QueryProfileResponse
       */
      Models::QueryProfileResponse queryProfile(const Models::QueryProfileRequest &request);

      /**
       * @summary 查询用户画像
       *
       * @param request QueryUserProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserProfileResponse
       */
      Models::QueryUserProfileResponse queryUserProfileWithOptions(const Models::QueryUserProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户画像
       *
       * @param request QueryUserProfileRequest
       * @return QueryUserProfileResponse
       */
      Models::QueryUserProfileResponse queryUserProfile(const Models::QueryUserProfileRequest &request);

      /**
       * @summary 指令更新
       *
       * @param tmpReq UpdateCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCommandResponse
       */
      Models::UpdateCommandResponse updateCommandWithOptions(const Models::UpdateCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指令更新
       *
       * @param request UpdateCommandRequest
       * @return UpdateCommandResponse
       */
      Models::UpdateCommandResponse updateCommand(const Models::UpdateCommandRequest &request);

      /**
       * @summary 更新用户记忆
       *
       * @param tmpReq UpdateMemoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMemoryResponse
       */
      Models::UpdateMemoryResponse updateMemoryWithOptions(const Models::UpdateMemoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新用户记忆
       *
       * @param request UpdateMemoryRequest
       * @return UpdateMemoryResponse
       */
      Models::UpdateMemoryResponse updateMemory(const Models::UpdateMemoryRequest &request);

      /**
       * @summary 多模态应用更新
       *
       * @param tmpReq UpdateMmAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMmAppResponse
       */
      Models::UpdateMmAppResponse updateMmAppWithOptions(const Models::UpdateMmAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 多模态应用更新
       *
       * @param request UpdateMmAppRequest
       * @return UpdateMmAppResponse
       */
      Models::UpdateMmAppResponse updateMmApp(const Models::UpdateMmAppRequest &request);

      /**
       * @summary 变更用户画像配置
       *
       * @param tmpReq UpdateProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProfileResponse
       */
      Models::UpdateProfileResponse updateProfileWithOptions(const Models::UpdateProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 变更用户画像配置
       *
       * @param request UpdateProfileRequest
       * @return UpdateProfileResponse
       */
      Models::UpdateProfileResponse updateProfile(const Models::UpdateProfileRequest &request);
  };
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
