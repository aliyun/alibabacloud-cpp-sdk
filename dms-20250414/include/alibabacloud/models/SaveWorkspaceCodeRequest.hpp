// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEWORKSPACECODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEWORKSPACECODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class SaveWorkspaceCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveWorkspaceCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(Iac, iac_);
      DARABONBA_PTR_TO_JSON(Mtime, mtime_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Repo, repo_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveWorkspaceCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(Iac, iac_);
      DARABONBA_PTR_FROM_JSON(Mtime, mtime_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Repo, repo_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SaveWorkspaceCodeRequest() = default ;
    SaveWorkspaceCodeRequest(const SaveWorkspaceCodeRequest &) = default ;
    SaveWorkspaceCodeRequest(SaveWorkspaceCodeRequest &&) = default ;
    SaveWorkspaceCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveWorkspaceCodeRequest() = default ;
    SaveWorkspaceCodeRequest& operator=(const SaveWorkspaceCodeRequest &) = default ;
    SaveWorkspaceCodeRequest& operator=(SaveWorkspaceCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->force_ == nullptr && this->iac_ == nullptr && this->mtime_ == nullptr && this->path_ == nullptr && this->repo_ == nullptr
        && this->workspaceId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SaveWorkspaceCodeRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline SaveWorkspaceCodeRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // iac Field Functions 
    bool hasIac() const { return this->iac_ != nullptr;};
    void deleteIac() { this->iac_ = nullptr;};
    inline bool getIac() const { DARABONBA_PTR_GET_DEFAULT(iac_, false) };
    inline SaveWorkspaceCodeRequest& setIac(bool iac) { DARABONBA_PTR_SET_VALUE(iac_, iac) };


    // mtime Field Functions 
    bool hasMtime() const { return this->mtime_ != nullptr;};
    void deleteMtime() { this->mtime_ = nullptr;};
    inline string getMtime() const { DARABONBA_PTR_GET_DEFAULT(mtime_, "") };
    inline SaveWorkspaceCodeRequest& setMtime(string mtime) { DARABONBA_PTR_SET_VALUE(mtime_, mtime) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline SaveWorkspaceCodeRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // repo Field Functions 
    bool hasRepo() const { return this->repo_ != nullptr;};
    void deleteRepo() { this->repo_ = nullptr;};
    inline string getRepo() const { DARABONBA_PTR_GET_DEFAULT(repo_, "") };
    inline SaveWorkspaceCodeRequest& setRepo(string repo) { DARABONBA_PTR_SET_VALUE(repo_, repo) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SaveWorkspaceCodeRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The content of the file.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    // Specifies whether to overwrite the file if it already exists. The default value is `true`.
    shared_ptr<bool> force_ {};
    // Specifies whether the file is an IaC template.
    shared_ptr<bool> iac_ {};
    // The modification time of the file.
    // 
    // The time must be in the ISO 8601 format: `yyyy-MM-ddTHH:mm:ssZ`.
    shared_ptr<string> mtime_ {};
    // The publishing configuration, specified as a JSON string. The `repos` array specifies the target repository and branch. The `exclude` array specifies the directories to ignore.
    // 
    // This parameter is required.
    shared_ptr<string> path_ {};
    // Information about the repository.
    shared_ptr<string> repo_ {};
    // The ID of the workspace.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
