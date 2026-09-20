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
       * @summary Creates a namespace in AI Registry and returns the corresponding namespace ID.
       *
       * @param request CreateNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespaceWithOptions(const Models::CreateNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a namespace in AI Registry and returns the corresponding namespace ID.
       *
       * @param request CreateNamespaceRequest
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespace(const Models::CreateNamespaceRequest &request);

      /**
       * @summary Create a prompt and create the initial draft version content of that prompt
       *
       * @param request CreatePromptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePromptResponse
       */
      Models::CreatePromptResponse createPromptWithOptions(const Models::CreatePromptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a prompt and create the initial draft version content of that prompt
       *
       * @param request CreatePromptRequest
       * @return CreatePromptResponse
       */
      Models::CreatePromptResponse createPrompt(const Models::CreatePromptRequest &request);

      /**
       * @summary Creates a new version of a prompt. The new version defaults to draft status. An error is returned if a draft version already exists.
       *
       * @param request CreatePromptVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePromptVersionResponse
       */
      Models::CreatePromptVersionResponse createPromptVersionWithOptions(const Models::CreatePromptVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new version of a prompt. The new version defaults to draft status. An error is returned if a draft version already exists.
       *
       * @param request CreatePromptVersionRequest
       * @return CreatePromptVersionResponse
       */
      Models::CreatePromptVersionResponse createPromptVersion(const Models::CreatePromptVersionRequest &request);

      /**
       * @summary Creates a Skill draft and returns the Skill version.
       *
       * @param request CreateSkillDraftRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillDraftResponse
       */
      Models::CreateSkillDraftResponse createSkillDraftWithOptions(const Models::CreateSkillDraftRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Skill draft and returns the Skill version.
       *
       * @param request CreateSkillDraftRequest
       * @return CreateSkillDraftResponse
       */
      Models::CreateSkillDraftResponse createSkillDraft(const Models::CreateSkillDraftRequest &request);

      /**
       * @summary Deletes a specified namespace from the AI Governance Center. The system checks whether the namespace contains any resources in use (such as Skills or Prompts) before deletion. If such resources exist, the deletion fails.
       *
       * @param request DeleteNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespaceWithOptions(const Models::DeleteNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified namespace from the AI Governance Center. The system checks whether the namespace contains any resources in use (such as Skills or Prompts) before deletion. If such resources exist, the deletion fails.
       *
       * @param request DeleteNamespaceRequest
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespace(const Models::DeleteNamespaceRequest &request);

      /**
       * @summary Deletes a specified prompt.
       *
       * @param request DeletePromptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePromptResponse
       */
      Models::DeletePromptResponse deletePromptWithOptions(const Models::DeletePromptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified prompt.
       *
       * @param request DeletePromptRequest
       * @return DeletePromptResponse
       */
      Models::DeletePromptResponse deletePrompt(const Models::DeletePromptRequest &request);

      /**
       * @summary Deletes a specified Skill.
       *
       * @param request DeleteSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkillWithOptions(const Models::DeleteSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified Skill.
       *
       * @param request DeleteSkillRequest
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkill(const Models::DeleteSkillRequest &request);

      /**
       * @summary Downloads a skill version through OSS and returns the OSS download URL.
       *
       * @param request DownloadSkillVersionViaOssRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadSkillVersionViaOssResponse
       */
      Models::DownloadSkillVersionViaOssResponse downloadSkillVersionViaOssWithOptions(const Models::DownloadSkillVersionViaOssRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downloads a skill version through OSS and returns the OSS download URL.
       *
       * @param request DownloadSkillVersionViaOssRequest
       * @return DownloadSkillVersionViaOssResponse
       */
      Models::DownloadSkillVersionViaOssResponse downloadSkillVersionViaOss(const Models::DownloadSkillVersionViaOssRequest &request);

      /**
       * @summary Force-publishes a version.
       *
       * @param request ForcePublishSkillVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ForcePublishSkillVersionResponse
       */
      Models::ForcePublishSkillVersionResponse forcePublishSkillVersionWithOptions(const Models::ForcePublishSkillVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Force-publishes a version.
       *
       * @param request ForcePublishSkillVersionRequest
       * @return ForcePublishSkillVersionResponse
       */
      Models::ForcePublishSkillVersionResponse forcePublishSkillVersion(const Models::ForcePublishSkillVersionRequest &request);

      /**
       * @summary Queries the details of an AI Governance Center namespace.
       *
       * @param request GetNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNamespaceResponse
       */
      Models::GetNamespaceResponse getNamespaceWithOptions(const Models::GetNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an AI Governance Center namespace.
       *
       * @param request GetNamespaceRequest
       * @return GetNamespaceResponse
       */
      Models::GetNamespaceResponse getNamespace(const Models::GetNamespaceRequest &request);

      /**
       * @summary Retrieves the details of a prompt.
       *
       * @param request GetPromptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPromptResponse
       */
      Models::GetPromptResponse getPromptWithOptions(const Models::GetPromptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a prompt.
       *
       * @param request GetPromptRequest
       * @return GetPromptResponse
       */
      Models::GetPromptResponse getPrompt(const Models::GetPromptRequest &request);

      /**
       * @summary Query the detailed information of a specified version of a prompt.
       *
       * @param request GetPromptVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPromptVersionResponse
       */
      Models::GetPromptVersionResponse getPromptVersionWithOptions(const Models::GetPromptVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the detailed information of a specified version of a prompt.
       *
       * @param request GetPromptVersionRequest
       * @return GetPromptVersionResponse
       */
      Models::GetPromptVersionResponse getPromptVersion(const Models::GetPromptVersionRequest &request);

      /**
       * @summary Retrieves the metadata and version information of a skill.
       *
       * @param request GetSkillDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillDetailResponse
       */
      Models::GetSkillDetailResponse getSkillDetailWithOptions(const Models::GetSkillDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the metadata and version information of a skill.
       *
       * @param request GetSkillDetailRequest
       * @return GetSkillDetailResponse
       */
      Models::GetSkillDetailResponse getSkillDetail(const Models::GetSkillDetailRequest &request);

      /**
       * @summary Retrieves a pre-signed URL for uploading a Skill to OSS. The client uses the returned URL to perform a PUT request to upload the Skill.
       *
       * @param request GetSkillImportFileUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillImportFileUrlResponse
       */
      Models::GetSkillImportFileUrlResponse getSkillImportFileUrlWithOptions(const Models::GetSkillImportFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a pre-signed URL for uploading a Skill to OSS. The client uses the returned URL to perform a PUT request to upload the Skill.
       *
       * @param request GetSkillImportFileUrlRequest
       * @return GetSkillImportFileUrlResponse
       */
      Models::GetSkillImportFileUrlResponse getSkillImportFileUrl(const Models::GetSkillImportFileUrlRequest &request);

      /**
       * @summary Retrieves the details of a specified version.
       *
       * @param request GetSkillVersionDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillVersionDetailResponse
       */
      Models::GetSkillVersionDetailResponse getSkillVersionDetailWithOptions(const Models::GetSkillVersionDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified version.
       *
       * @param request GetSkillVersionDetailRequest
       * @return GetSkillVersionDetailResponse
       */
      Models::GetSkillVersionDetailResponse getSkillVersionDetail(const Models::GetSkillVersionDetailRequest &request);

      /**
       * @summary Lists the namespaces in the AI Governance Center.
       *
       * @param request ListNamespacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNamespacesResponse
       */
      Models::ListNamespacesResponse listNamespacesWithOptions(const Models::ListNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the namespaces in the AI Governance Center.
       *
       * @param request ListNamespacesRequest
       * @return ListNamespacesResponse
       */
      Models::ListNamespacesResponse listNamespaces(const Models::ListNamespacesRequest &request);

      /**
       * @summary Lists the versions of a prompt.
       *
       * @param request ListPromptVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPromptVersionsResponse
       */
      Models::ListPromptVersionsResponse listPromptVersionsWithOptions(const Models::ListPromptVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the versions of a prompt.
       *
       * @param request ListPromptVersionsRequest
       * @return ListPromptVersionsResponse
       */
      Models::ListPromptVersionsResponse listPromptVersions(const Models::ListPromptVersionsRequest &request);

      /**
       * @summary Lists the prompts in a namespace.
       *
       * @param request ListPromptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPromptsResponse
       */
      Models::ListPromptsResponse listPromptsWithOptions(const Models::ListPromptsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the prompts in a namespace.
       *
       * @param request ListPromptsRequest
       * @return ListPromptsResponse
       */
      Models::ListPromptsResponse listPrompts(const Models::ListPromptsRequest &request);

      /**
       * @summary Lists skills.
       *
       * @param request ListSkillsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkillsWithOptions(const Models::ListSkillsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists skills.
       *
       * @param request ListSkillsRequest
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkills(const Models::ListSkillsRequest &request);

      /**
       * @summary Offlines a Skill or a specific version of a Skill.
       *
       * @param request OfflineSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineSkillResponse
       */
      Models::OfflineSkillResponse offlineSkillWithOptions(const Models::OfflineSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Offlines a Skill or a specific version of a Skill.
       *
       * @param request OfflineSkillRequest
       * @return OfflineSkillResponse
       */
      Models::OfflineSkillResponse offlineSkill(const Models::OfflineSkillRequest &request);

      /**
       * @summary Publishes a skill or a specific version of a skill.
       *
       * @param request OnlineSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineSkillResponse
       */
      Models::OnlineSkillResponse onlineSkillWithOptions(const Models::OnlineSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a skill or a specific version of a skill.
       *
       * @param request OnlineSkillRequest
       * @return OnlineSkillResponse
       */
      Models::OnlineSkillResponse onlineSkill(const Models::OnlineSkillRequest &request);

      /**
       * @summary Publishes a specific version of a Skill.
       *
       * @param request PublishSkillVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishSkillVersionResponse
       */
      Models::PublishSkillVersionResponse publishSkillVersionWithOptions(const Models::PublishSkillVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a specific version of a Skill.
       *
       * @param request PublishSkillVersionRequest
       * @return PublishSkillVersionResponse
       */
      Models::PublishSkillVersionResponse publishSkillVersion(const Models::PublishSkillVersionRequest &request);

      /**
       * @summary Publishes a draft version of a prompt as an official version. The specified version must be a draft version.
       *
       * @param request SubmitPromptVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitPromptVersionResponse
       */
      Models::SubmitPromptVersionResponse submitPromptVersionWithOptions(const Models::SubmitPromptVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a draft version of a prompt as an official version. The specified version must be a draft version.
       *
       * @param request SubmitPromptVersionRequest
       * @return SubmitPromptVersionResponse
       */
      Models::SubmitPromptVersionResponse submitPromptVersion(const Models::SubmitPromptVersionRequest &request);

      /**
       * @summary Submits a specific version of a skill for review.
       *
       * @param request SubmitSkillVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSkillVersionResponse
       */
      Models::SubmitSkillVersionResponse submitSkillVersionWithOptions(const Models::SubmitSkillVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a specific version of a skill for review.
       *
       * @param request SubmitSkillVersionRequest
       * @return SubmitSkillVersionResponse
       */
      Models::SubmitSkillVersionResponse submitSkillVersion(const Models::SubmitSkillVersionRequest &request);

      /**
       * @summary Updates namespace information.
       *
       * @param request UpdateNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNamespaceResponse
       */
      Models::UpdateNamespaceResponse updateNamespaceWithOptions(const Models::UpdateNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates namespace information.
       *
       * @param request UpdateNamespaceRequest
       * @return UpdateNamespaceResponse
       */
      Models::UpdateNamespaceResponse updateNamespace(const Models::UpdateNamespaceRequest &request);

      /**
       * @summary Modifies the metadata of a prompt, such as the description and business tags.
       *
       * @param tmpReq UpdatePromptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePromptResponse
       */
      Models::UpdatePromptResponse updatePromptWithOptions(const Models::UpdatePromptRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the metadata of a prompt, such as the description and business tags.
       *
       * @param request UpdatePromptRequest
       * @return UpdatePromptResponse
       */
      Models::UpdatePromptResponse updatePrompt(const Models::UpdatePromptRequest &request);

      /**
       * @summary Updates the content of a prompt version. Only the draft version of a prompt can be modified.
       *
       * @param request UpdatePromptVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePromptVersionResponse
       */
      Models::UpdatePromptVersionResponse updatePromptVersionWithOptions(const Models::UpdatePromptVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the content of a prompt version. Only the draft version of a prompt can be modified.
       *
       * @param request UpdatePromptVersionRequest
       * @return UpdatePromptVersionResponse
       */
      Models::UpdatePromptVersionResponse updatePromptVersion(const Models::UpdatePromptVersionRequest &request);

      /**
       * @summary Updates business tags for a skill.
       *
       * @param request UpdateSkillBizTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillBizTagsResponse
       */
      Models::UpdateSkillBizTagsResponse updateSkillBizTagsWithOptions(const Models::UpdateSkillBizTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates business tags for a skill.
       *
       * @param request UpdateSkillBizTagsRequest
       * @return UpdateSkillBizTagsResponse
       */
      Models::UpdateSkillBizTagsResponse updateSkillBizTags(const Models::UpdateSkillBizTagsRequest &request);

      /**
       * @summary Updates a draft.
       *
       * @param request UpdateSkillDraftRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillDraftResponse
       */
      Models::UpdateSkillDraftResponse updateSkillDraftWithOptions(const Models::UpdateSkillDraftRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a draft.
       *
       * @param request UpdateSkillDraftRequest
       * @return UpdateSkillDraftResponse
       */
      Models::UpdateSkillDraftResponse updateSkillDraft(const Models::UpdateSkillDraftRequest &request);

      /**
       * @summary Updates version labels.
       *
       * @param request UpdateSkillLabelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillLabelsResponse
       */
      Models::UpdateSkillLabelsResponse updateSkillLabelsWithOptions(const Models::UpdateSkillLabelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates version labels.
       *
       * @param request UpdateSkillLabelsRequest
       * @return UpdateSkillLabelsResponse
       */
      Models::UpdateSkillLabelsResponse updateSkillLabels(const Models::UpdateSkillLabelsRequest &request);

      /**
       * @summary Updates the visibility.
       *
       * @param request UpdateSkillScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillScopeResponse
       */
      Models::UpdateSkillScopeResponse updateSkillScopeWithOptions(const Models::UpdateSkillScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the visibility.
       *
       * @param request UpdateSkillScopeRequest
       * @return UpdateSkillScopeResponse
       */
      Models::UpdateSkillScopeResponse updateSkillScope(const Models::UpdateSkillScopeRequest &request);

      /**
       * @summary Uploads a skill (ZIP) from OSS by pulling the file content from OSS and uploading it to Nacos.
       *
       * @param request UploadSkillViaOssRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadSkillViaOssResponse
       */
      Models::UploadSkillViaOssResponse uploadSkillViaOssWithOptions(const Models::UploadSkillViaOssRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a skill (ZIP) from OSS by pulling the file content from OSS and uploading it to Nacos.
       *
       * @param request UploadSkillViaOssRequest
       * @return UploadSkillViaOssResponse
       */
      Models::UploadSkillViaOssResponse uploadSkillViaOss(const Models::UploadSkillViaOssRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
