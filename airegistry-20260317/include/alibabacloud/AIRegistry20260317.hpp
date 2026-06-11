// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AIREGISTRY20260317_HPP_
#define ALIBABACLOUD_AIREGISTRY20260317_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AIRegistry20260317Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AIRegistry20260317.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建 AI Registry 命名空间
       *
       * @param request CreateNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespaceWithOptions(const Models::CreateNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 AI Registry 命名空间
       *
       * @param request CreateNamespaceRequest
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespace(const Models::CreateNamespaceRequest &request);

      /**
       * @summary 创建 Prompt
       *
       * @param request CreatePromptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePromptResponse
       */
      Models::CreatePromptResponse createPromptWithOptions(const Models::CreatePromptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 Prompt
       *
       * @param request CreatePromptRequest
       * @return CreatePromptResponse
       */
      Models::CreatePromptResponse createPrompt(const Models::CreatePromptRequest &request);

      /**
       * @summary 创建 Prompt 草稿版本。Prompt 必须已存在，且当前没有正在编辑的草稿。只对草稿版本生效。
       *
       * @param request CreatePromptVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePromptVersionResponse
       */
      Models::CreatePromptVersionResponse createPromptVersionWithOptions(const Models::CreatePromptVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 Prompt 草稿版本。Prompt 必须已存在，且当前没有正在编辑的草稿。只对草稿版本生效。
       *
       * @param request CreatePromptVersionRequest
       * @return CreatePromptVersionResponse
       */
      Models::CreatePromptVersionResponse createPromptVersion(const Models::CreatePromptVersionRequest &request);

      /**
       * @summary 创建 Skill 草稿版本
       *
       * @param request CreateSkillDraftRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillDraftResponse
       */
      Models::CreateSkillDraftResponse createSkillDraftWithOptions(const Models::CreateSkillDraftRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 Skill 草稿版本
       *
       * @param request CreateSkillDraftRequest
       * @return CreateSkillDraftResponse
       */
      Models::CreateSkillDraftResponse createSkillDraft(const Models::CreateSkillDraftRequest &request);

      /**
       * @summary 删除命名空间
       *
       * @param request DeleteNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespaceWithOptions(const Models::DeleteNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除命名空间
       *
       * @param request DeleteNamespaceRequest
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespace(const Models::DeleteNamespaceRequest &request);

      /**
       * @summary 删除 Prompt
       *
       * @param request DeletePromptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePromptResponse
       */
      Models::DeletePromptResponse deletePromptWithOptions(const Models::DeletePromptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除 Prompt
       *
       * @param request DeletePromptRequest
       * @return DeletePromptResponse
       */
      Models::DeletePromptResponse deletePrompt(const Models::DeletePromptRequest &request);

      /**
       * @summary 删除 Skill
       *
       * @param request DeleteSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkillWithOptions(const Models::DeleteSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除 Skill
       *
       * @param request DeleteSkillRequest
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkill(const Models::DeleteSkillRequest &request);

      /**
       * @summary 通过 OSS 下载 Skill 版本 - 返回 OSS 下载 URL
       *
       * @param request DownloadSkillVersionViaOssRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadSkillVersionViaOssResponse
       */
      Models::DownloadSkillVersionViaOssResponse downloadSkillVersionViaOssWithOptions(const Models::DownloadSkillVersionViaOssRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过 OSS 下载 Skill 版本 - 返回 OSS 下载 URL
       *
       * @param request DownloadSkillVersionViaOssRequest
       * @return DownloadSkillVersionViaOssResponse
       */
      Models::DownloadSkillVersionViaOssResponse downloadSkillVersionViaOss(const Models::DownloadSkillVersionViaOssRequest &request);

      /**
       * @summary 强制发布版本
       *
       * @param request ForcePublishSkillVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ForcePublishSkillVersionResponse
       */
      Models::ForcePublishSkillVersionResponse forcePublishSkillVersionWithOptions(const Models::ForcePublishSkillVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 强制发布版本
       *
       * @param request ForcePublishSkillVersionRequest
       * @return ForcePublishSkillVersionResponse
       */
      Models::ForcePublishSkillVersionResponse forcePublishSkillVersion(const Models::ForcePublishSkillVersionRequest &request);

      /**
       * @summary 获取命名空间详细信息
       *
       * @param request GetNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNamespaceResponse
       */
      Models::GetNamespaceResponse getNamespaceWithOptions(const Models::GetNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取命名空间详细信息
       *
       * @param request GetNamespaceRequest
       * @return GetNamespaceResponse
       */
      Models::GetNamespaceResponse getNamespace(const Models::GetNamespaceRequest &request);

      /**
       * @summary 获取 Prompt 详情信息
       *
       * @param request GetPromptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPromptResponse
       */
      Models::GetPromptResponse getPromptWithOptions(const Models::GetPromptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取 Prompt 详情信息
       *
       * @param request GetPromptRequest
       * @return GetPromptResponse
       */
      Models::GetPromptResponse getPrompt(const Models::GetPromptRequest &request);

      /**
       * @summary 获取 Prompt 某个版本的信息
       *
       * @param request GetPromptVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPromptVersionResponse
       */
      Models::GetPromptVersionResponse getPromptVersionWithOptions(const Models::GetPromptVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取 Prompt 某个版本的信息
       *
       * @param request GetPromptVersionRequest
       * @return GetPromptVersionResponse
       */
      Models::GetPromptVersionResponse getPromptVersion(const Models::GetPromptVersionRequest &request);

      /**
       * @summary 获取 Skill 详情
       *
       * @param request GetSkillDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillDetailResponse
       */
      Models::GetSkillDetailResponse getSkillDetailWithOptions(const Models::GetSkillDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取 Skill 详情
       *
       * @param request GetSkillDetailRequest
       * @return GetSkillDetailResponse
       */
      Models::GetSkillDetailResponse getSkillDetail(const Models::GetSkillDetailRequest &request);

      /**
       * @summary 获取 Skill 导入用 OSS 上传 URL。客户端使用返回的 uploadUrl 执行 PUT 上传后，
       *
       * @param request GetSkillImportFileUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillImportFileUrlResponse
       */
      Models::GetSkillImportFileUrlResponse getSkillImportFileUrlWithOptions(const Models::GetSkillImportFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取 Skill 导入用 OSS 上传 URL。客户端使用返回的 uploadUrl 执行 PUT 上传后，
       *
       * @param request GetSkillImportFileUrlRequest
       * @return GetSkillImportFileUrlResponse
       */
      Models::GetSkillImportFileUrlResponse getSkillImportFileUrl(const Models::GetSkillImportFileUrlRequest &request);

      /**
       * @summary 获取指定版本详情
       *
       * @param request GetSkillVersionDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillVersionDetailResponse
       */
      Models::GetSkillVersionDetailResponse getSkillVersionDetailWithOptions(const Models::GetSkillVersionDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定版本详情
       *
       * @param request GetSkillVersionDetailRequest
       * @return GetSkillVersionDetailResponse
       */
      Models::GetSkillVersionDetailResponse getSkillVersionDetail(const Models::GetSkillVersionDetailRequest &request);

      /**
       * @summary 获取命名空间列表
       *
       * @param request ListNamespacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNamespacesResponse
       */
      Models::ListNamespacesResponse listNamespacesWithOptions(const Models::ListNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取命名空间列表
       *
       * @param request ListNamespacesRequest
       * @return ListNamespacesResponse
       */
      Models::ListNamespacesResponse listNamespaces(const Models::ListNamespacesRequest &request);

      /**
       * @summary 列出Prompt版本列表
       *
       * @param request ListPromptVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPromptVersionsResponse
       */
      Models::ListPromptVersionsResponse listPromptVersionsWithOptions(const Models::ListPromptVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出Prompt版本列表
       *
       * @param request ListPromptVersionsRequest
       * @return ListPromptVersionsResponse
       */
      Models::ListPromptVersionsResponse listPromptVersions(const Models::ListPromptVersionsRequest &request);

      /**
       * @summary 获取Prompt列表
       *
       * @param request ListPromptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPromptsResponse
       */
      Models::ListPromptsResponse listPromptsWithOptions(const Models::ListPromptsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Prompt列表
       *
       * @param request ListPromptsRequest
       * @return ListPromptsResponse
       */
      Models::ListPromptsResponse listPrompts(const Models::ListPromptsRequest &request);

      /**
       * @summary 列出 Skills
       *
       * @param request ListSkillsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkillsWithOptions(const Models::ListSkillsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出 Skills
       *
       * @param request ListSkillsRequest
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkills(const Models::ListSkillsRequest &request);

      /**
       * @summary 下线版本
       *
       * @param request OfflineSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineSkillResponse
       */
      Models::OfflineSkillResponse offlineSkillWithOptions(const Models::OfflineSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下线版本
       *
       * @param request OfflineSkillRequest
       * @return OfflineSkillResponse
       */
      Models::OfflineSkillResponse offlineSkill(const Models::OfflineSkillRequest &request);

      /**
       * @summary 上线 Skill
       *
       * @param request OnlineSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineSkillResponse
       */
      Models::OnlineSkillResponse onlineSkillWithOptions(const Models::OnlineSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上线 Skill
       *
       * @param request OnlineSkillRequest
       * @return OnlineSkillResponse
       */
      Models::OnlineSkillResponse onlineSkill(const Models::OnlineSkillRequest &request);

      /**
       * @summary 发布版本
       *
       * @param request PublishSkillVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishSkillVersionResponse
       */
      Models::PublishSkillVersionResponse publishSkillVersionWithOptions(const Models::PublishSkillVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布版本
       *
       * @param request PublishSkillVersionRequest
       * @return PublishSkillVersionResponse
       */
      Models::PublishSkillVersionResponse publishSkillVersion(const Models::PublishSkillVersionRequest &request);

      /**
       * @summary 提交 Prompt 版本, 将 Prompt 的草稿版本转化为正式版本
       *
       * @param request SubmitPromptVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitPromptVersionResponse
       */
      Models::SubmitPromptVersionResponse submitPromptVersionWithOptions(const Models::SubmitPromptVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交 Prompt 版本, 将 Prompt 的草稿版本转化为正式版本
       *
       * @param request SubmitPromptVersionRequest
       * @return SubmitPromptVersionResponse
       */
      Models::SubmitPromptVersionResponse submitPromptVersion(const Models::SubmitPromptVersionRequest &request);

      /**
       * @summary 提交 Skill Draft 审核
       *
       * @param request SubmitSkillVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSkillVersionResponse
       */
      Models::SubmitSkillVersionResponse submitSkillVersionWithOptions(const Models::SubmitSkillVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交 Skill Draft 审核
       *
       * @param request SubmitSkillVersionRequest
       * @return SubmitSkillVersionResponse
       */
      Models::SubmitSkillVersionResponse submitSkillVersion(const Models::SubmitSkillVersionRequest &request);

      /**
       * @summary 更新命名空间信息
       *
       * @param request UpdateNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNamespaceResponse
       */
      Models::UpdateNamespaceResponse updateNamespaceWithOptions(const Models::UpdateNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新命名空间信息
       *
       * @param request UpdateNamespaceRequest
       * @return UpdateNamespaceResponse
       */
      Models::UpdateNamespaceResponse updateNamespace(const Models::UpdateNamespaceRequest &request);

      /**
       * @summary 更新 Prompt 元数据，支持同时更新 description、bizTags、labels。
       *
       * @param tmpReq UpdatePromptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePromptResponse
       */
      Models::UpdatePromptResponse updatePromptWithOptions(const Models::UpdatePromptRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 Prompt 元数据，支持同时更新 description、bizTags、labels。
       *
       * @param request UpdatePromptRequest
       * @return UpdatePromptResponse
       */
      Models::UpdatePromptResponse updatePrompt(const Models::UpdatePromptRequest &request);

      /**
       * @summary 更新 Prompt 草稿版本内容。只对草稿版本生效，已发布的版本不可修改。
       *
       * @param request UpdatePromptVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePromptVersionResponse
       */
      Models::UpdatePromptVersionResponse updatePromptVersionWithOptions(const Models::UpdatePromptVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 Prompt 草稿版本内容。只对草稿版本生效，已发布的版本不可修改。
       *
       * @param request UpdatePromptVersionRequest
       * @return UpdatePromptVersionResponse
       */
      Models::UpdatePromptVersionResponse updatePromptVersion(const Models::UpdatePromptVersionRequest &request);

      /**
       * @summary 更新业务标签
       *
       * @param request UpdateSkillBizTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillBizTagsResponse
       */
      Models::UpdateSkillBizTagsResponse updateSkillBizTagsWithOptions(const Models::UpdateSkillBizTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新业务标签
       *
       * @param request UpdateSkillBizTagsRequest
       * @return UpdateSkillBizTagsResponse
       */
      Models::UpdateSkillBizTagsResponse updateSkillBizTags(const Models::UpdateSkillBizTagsRequest &request);

      /**
       * @summary 更新 Draft
       *
       * @param request UpdateSkillDraftRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillDraftResponse
       */
      Models::UpdateSkillDraftResponse updateSkillDraftWithOptions(const Models::UpdateSkillDraftRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 Draft
       *
       * @param request UpdateSkillDraftRequest
       * @return UpdateSkillDraftResponse
       */
      Models::UpdateSkillDraftResponse updateSkillDraft(const Models::UpdateSkillDraftRequest &request);

      /**
       * @summary 更新版本标签
       *
       * @param request UpdateSkillLabelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillLabelsResponse
       */
      Models::UpdateSkillLabelsResponse updateSkillLabelsWithOptions(const Models::UpdateSkillLabelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新版本标签
       *
       * @param request UpdateSkillLabelsRequest
       * @return UpdateSkillLabelsResponse
       */
      Models::UpdateSkillLabelsResponse updateSkillLabels(const Models::UpdateSkillLabelsRequest &request);

      /**
       * @summary 更新可见性
       *
       * @param request UpdateSkillScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillScopeResponse
       */
      Models::UpdateSkillScopeResponse updateSkillScopeWithOptions(const Models::UpdateSkillScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新可见性
       *
       * @param request UpdateSkillScopeRequest
       * @return UpdateSkillScopeResponse
       */
      Models::UpdateSkillScopeResponse updateSkillScope(const Models::UpdateSkillScopeRequest &request);

      /**
       * @summary 通过 OSS 上传 Skill (ZIP) - 从 OSS 拉取文件内容后上传到 Nacos
       *
       * @param request UploadSkillViaOssRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadSkillViaOssResponse
       */
      Models::UploadSkillViaOssResponse uploadSkillViaOssWithOptions(const Models::UploadSkillViaOssRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过 OSS 上传 Skill (ZIP) - 从 OSS 拉取文件内容后上传到 Nacos
       *
       * @param request UploadSkillViaOssRequest
       * @return UploadSkillViaOssResponse
       */
      Models::UploadSkillViaOssResponse uploadSkillViaOss(const Models::UploadSkillViaOssRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
