// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Download, download_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Download, download_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetSkillRequest() = default ;
    GetSkillRequest(const GetSkillRequest &) = default ;
    GetSkillRequest(GetSkillRequest &&) = default ;
    GetSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillRequest() = default ;
    GetSkillRequest& operator=(const GetSkillRequest &) = default ;
    GetSkillRequest& operator=(GetSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->download_ == nullptr
        && this->language_ == nullptr && this->path_ == nullptr && this->skillId_ == nullptr && this->versionId_ == nullptr && this->workspaceId_ == nullptr; };
    // download Field Functions 
    bool hasDownload() const { return this->download_ != nullptr;};
    void deleteDownload() { this->download_ = nullptr;};
    inline bool getDownload() const { DARABONBA_PTR_GET_DEFAULT(download_, false) };
    inline GetSkillRequest& setDownload(bool download) { DARABONBA_PTR_SET_VALUE(download_, download) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetSkillRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetSkillRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
    inline GetSkillRequest& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline GetSkillRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetSkillRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Specifies whether to obtain a temporary download URL for the specified version. Default value: false.
    shared_ptr<bool> download_ {};
    // The supported language. Valid values:
    // * zh-CN: Simplified Chinese
    // * zh-TW: Traditional Chinese
    // * en-US: English
    // * ja-JP: Japanese
    shared_ptr<string> language_ {};
    // The file path within the package, such as SKILL.md. The body is in File.text, and the full Markdown is in SkillMarkdown.
    shared_ptr<string> path_ {};
    // The unique identifier of the skill.
    // 
    // This parameter is required.
    shared_ptr<string> skillId_ {};
    // The version UUID (Versions[].Id), not a version number such as 1.0.0. If omitted, the currently active version is read.
    shared_ptr<string> versionId_ {};
    // The ContextDB workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
