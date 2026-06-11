// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKSPACECODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKSPACECODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DeleteWorkspaceCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkspaceCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Repo, repo_);
      DARABONBA_PTR_TO_JSON(Symlink, symlink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkspaceCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Repo, repo_);
      DARABONBA_PTR_FROM_JSON(Symlink, symlink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteWorkspaceCodeRequest() = default ;
    DeleteWorkspaceCodeRequest(const DeleteWorkspaceCodeRequest &) = default ;
    DeleteWorkspaceCodeRequest(DeleteWorkspaceCodeRequest &&) = default ;
    DeleteWorkspaceCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkspaceCodeRequest() = default ;
    DeleteWorkspaceCodeRequest& operator=(const DeleteWorkspaceCodeRequest &) = default ;
    DeleteWorkspaceCodeRequest& operator=(DeleteWorkspaceCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->path_ == nullptr
        && this->repo_ == nullptr && this->symlink_ == nullptr && this->workspaceId_ == nullptr; };
    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DeleteWorkspaceCodeRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // repo Field Functions 
    bool hasRepo() const { return this->repo_ != nullptr;};
    void deleteRepo() { this->repo_ = nullptr;};
    inline string getRepo() const { DARABONBA_PTR_GET_DEFAULT(repo_, "") };
    inline DeleteWorkspaceCodeRequest& setRepo(string repo) { DARABONBA_PTR_SET_VALUE(repo_, repo) };


    // symlink Field Functions 
    bool hasSymlink() const { return this->symlink_ != nullptr;};
    void deleteSymlink() { this->symlink_ = nullptr;};
    inline bool getSymlink() const { DARABONBA_PTR_GET_DEFAULT(symlink_, false) };
    inline DeleteWorkspaceCodeRequest& setSymlink(bool symlink) { DARABONBA_PTR_SET_VALUE(symlink_, symlink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteWorkspaceCodeRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The full path of the code file or directory. The path must be prefixed with `/Workspace/code/`.
    // 
    // This parameter is required.
    shared_ptr<string> path_ {};
    // The repository information.
    shared_ptr<string> repo_ {};
    // Specifies whether the item to delete is a symbolic link.
    shared_ptr<bool> symlink_ {};
    // The ID of the workspace.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
