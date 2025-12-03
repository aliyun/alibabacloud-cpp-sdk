// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREPOSITORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREPOSITORYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRepositoryRequestProjectCloneDownloadMethodList.hpp>
#include <alibabacloud/models/UpdateRepositoryRequestProjectCloneDownloadRoleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateRepositoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRepositoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(adminSettingLanguage, adminSettingLanguage_);
      DARABONBA_PTR_TO_JSON(avatar, avatar_);
      DARABONBA_PTR_TO_JSON(buildsEnabled, buildsEnabled_);
      DARABONBA_PTR_TO_JSON(checkEmail, checkEmail_);
      DARABONBA_PTR_TO_JSON(defaultBranch, defaultBranch_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(issuesEnabled, issuesEnabled_);
      DARABONBA_PTR_TO_JSON(mergeRequestsEnabled, mergeRequestsEnabled_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(openCloneDownloadControl, openCloneDownloadControl_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(projectCloneDownloadMethodList, projectCloneDownloadMethodList_);
      DARABONBA_PTR_TO_JSON(projectCloneDownloadRoleList, projectCloneDownloadRoleList_);
      DARABONBA_PTR_TO_JSON(snippetsEnabled, snippetsEnabled_);
      DARABONBA_PTR_TO_JSON(visibilityLevel, visibilityLevel_);
      DARABONBA_PTR_TO_JSON(wikiEnabled, wikiEnabled_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRepositoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(adminSettingLanguage, adminSettingLanguage_);
      DARABONBA_PTR_FROM_JSON(avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(buildsEnabled, buildsEnabled_);
      DARABONBA_PTR_FROM_JSON(checkEmail, checkEmail_);
      DARABONBA_PTR_FROM_JSON(defaultBranch, defaultBranch_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(issuesEnabled, issuesEnabled_);
      DARABONBA_PTR_FROM_JSON(mergeRequestsEnabled, mergeRequestsEnabled_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(openCloneDownloadControl, openCloneDownloadControl_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(projectCloneDownloadMethodList, projectCloneDownloadMethodList_);
      DARABONBA_PTR_FROM_JSON(projectCloneDownloadRoleList, projectCloneDownloadRoleList_);
      DARABONBA_PTR_FROM_JSON(snippetsEnabled, snippetsEnabled_);
      DARABONBA_PTR_FROM_JSON(visibilityLevel, visibilityLevel_);
      DARABONBA_PTR_FROM_JSON(wikiEnabled, wikiEnabled_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    UpdateRepositoryRequest() = default ;
    UpdateRepositoryRequest(const UpdateRepositoryRequest &) = default ;
    UpdateRepositoryRequest(UpdateRepositoryRequest &&) = default ;
    UpdateRepositoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRepositoryRequest() = default ;
    UpdateRepositoryRequest& operator=(const UpdateRepositoryRequest &) = default ;
    UpdateRepositoryRequest& operator=(UpdateRepositoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->adminSettingLanguage_ == nullptr && return this->avatar_ == nullptr && return this->buildsEnabled_ == nullptr && return this->checkEmail_ == nullptr && return this->defaultBranch_ == nullptr
        && return this->description_ == nullptr && return this->id_ == nullptr && return this->issuesEnabled_ == nullptr && return this->mergeRequestsEnabled_ == nullptr && return this->name_ == nullptr
        && return this->openCloneDownloadControl_ == nullptr && return this->path_ == nullptr && return this->projectCloneDownloadMethodList_ == nullptr && return this->projectCloneDownloadRoleList_ == nullptr && return this->snippetsEnabled_ == nullptr
        && return this->visibilityLevel_ == nullptr && return this->wikiEnabled_ == nullptr && return this->organizationId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline UpdateRepositoryRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // adminSettingLanguage Field Functions 
    bool hasAdminSettingLanguage() const { return this->adminSettingLanguage_ != nullptr;};
    void deleteAdminSettingLanguage() { this->adminSettingLanguage_ = nullptr;};
    inline string adminSettingLanguage() const { DARABONBA_PTR_GET_DEFAULT(adminSettingLanguage_, "") };
    inline UpdateRepositoryRequest& setAdminSettingLanguage(string adminSettingLanguage) { DARABONBA_PTR_SET_VALUE(adminSettingLanguage_, adminSettingLanguage) };


    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string avatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline UpdateRepositoryRequest& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // buildsEnabled Field Functions 
    bool hasBuildsEnabled() const { return this->buildsEnabled_ != nullptr;};
    void deleteBuildsEnabled() { this->buildsEnabled_ = nullptr;};
    inline bool buildsEnabled() const { DARABONBA_PTR_GET_DEFAULT(buildsEnabled_, false) };
    inline UpdateRepositoryRequest& setBuildsEnabled(bool buildsEnabled) { DARABONBA_PTR_SET_VALUE(buildsEnabled_, buildsEnabled) };


    // checkEmail Field Functions 
    bool hasCheckEmail() const { return this->checkEmail_ != nullptr;};
    void deleteCheckEmail() { this->checkEmail_ = nullptr;};
    inline bool checkEmail() const { DARABONBA_PTR_GET_DEFAULT(checkEmail_, false) };
    inline UpdateRepositoryRequest& setCheckEmail(bool checkEmail) { DARABONBA_PTR_SET_VALUE(checkEmail_, checkEmail) };


    // defaultBranch Field Functions 
    bool hasDefaultBranch() const { return this->defaultBranch_ != nullptr;};
    void deleteDefaultBranch() { this->defaultBranch_ = nullptr;};
    inline string defaultBranch() const { DARABONBA_PTR_GET_DEFAULT(defaultBranch_, "") };
    inline UpdateRepositoryRequest& setDefaultBranch(string defaultBranch) { DARABONBA_PTR_SET_VALUE(defaultBranch_, defaultBranch) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateRepositoryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateRepositoryRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // issuesEnabled Field Functions 
    bool hasIssuesEnabled() const { return this->issuesEnabled_ != nullptr;};
    void deleteIssuesEnabled() { this->issuesEnabled_ = nullptr;};
    inline bool issuesEnabled() const { DARABONBA_PTR_GET_DEFAULT(issuesEnabled_, false) };
    inline UpdateRepositoryRequest& setIssuesEnabled(bool issuesEnabled) { DARABONBA_PTR_SET_VALUE(issuesEnabled_, issuesEnabled) };


    // mergeRequestsEnabled Field Functions 
    bool hasMergeRequestsEnabled() const { return this->mergeRequestsEnabled_ != nullptr;};
    void deleteMergeRequestsEnabled() { this->mergeRequestsEnabled_ = nullptr;};
    inline bool mergeRequestsEnabled() const { DARABONBA_PTR_GET_DEFAULT(mergeRequestsEnabled_, false) };
    inline UpdateRepositoryRequest& setMergeRequestsEnabled(bool mergeRequestsEnabled) { DARABONBA_PTR_SET_VALUE(mergeRequestsEnabled_, mergeRequestsEnabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateRepositoryRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // openCloneDownloadControl Field Functions 
    bool hasOpenCloneDownloadControl() const { return this->openCloneDownloadControl_ != nullptr;};
    void deleteOpenCloneDownloadControl() { this->openCloneDownloadControl_ = nullptr;};
    inline bool openCloneDownloadControl() const { DARABONBA_PTR_GET_DEFAULT(openCloneDownloadControl_, false) };
    inline UpdateRepositoryRequest& setOpenCloneDownloadControl(bool openCloneDownloadControl) { DARABONBA_PTR_SET_VALUE(openCloneDownloadControl_, openCloneDownloadControl) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline UpdateRepositoryRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // projectCloneDownloadMethodList Field Functions 
    bool hasProjectCloneDownloadMethodList() const { return this->projectCloneDownloadMethodList_ != nullptr;};
    void deleteProjectCloneDownloadMethodList() { this->projectCloneDownloadMethodList_ = nullptr;};
    inline const vector<UpdateRepositoryRequestProjectCloneDownloadMethodList> & projectCloneDownloadMethodList() const { DARABONBA_PTR_GET_CONST(projectCloneDownloadMethodList_, vector<UpdateRepositoryRequestProjectCloneDownloadMethodList>) };
    inline vector<UpdateRepositoryRequestProjectCloneDownloadMethodList> projectCloneDownloadMethodList() { DARABONBA_PTR_GET(projectCloneDownloadMethodList_, vector<UpdateRepositoryRequestProjectCloneDownloadMethodList>) };
    inline UpdateRepositoryRequest& setProjectCloneDownloadMethodList(const vector<UpdateRepositoryRequestProjectCloneDownloadMethodList> & projectCloneDownloadMethodList) { DARABONBA_PTR_SET_VALUE(projectCloneDownloadMethodList_, projectCloneDownloadMethodList) };
    inline UpdateRepositoryRequest& setProjectCloneDownloadMethodList(vector<UpdateRepositoryRequestProjectCloneDownloadMethodList> && projectCloneDownloadMethodList) { DARABONBA_PTR_SET_RVALUE(projectCloneDownloadMethodList_, projectCloneDownloadMethodList) };


    // projectCloneDownloadRoleList Field Functions 
    bool hasProjectCloneDownloadRoleList() const { return this->projectCloneDownloadRoleList_ != nullptr;};
    void deleteProjectCloneDownloadRoleList() { this->projectCloneDownloadRoleList_ = nullptr;};
    inline const vector<UpdateRepositoryRequestProjectCloneDownloadRoleList> & projectCloneDownloadRoleList() const { DARABONBA_PTR_GET_CONST(projectCloneDownloadRoleList_, vector<UpdateRepositoryRequestProjectCloneDownloadRoleList>) };
    inline vector<UpdateRepositoryRequestProjectCloneDownloadRoleList> projectCloneDownloadRoleList() { DARABONBA_PTR_GET(projectCloneDownloadRoleList_, vector<UpdateRepositoryRequestProjectCloneDownloadRoleList>) };
    inline UpdateRepositoryRequest& setProjectCloneDownloadRoleList(const vector<UpdateRepositoryRequestProjectCloneDownloadRoleList> & projectCloneDownloadRoleList) { DARABONBA_PTR_SET_VALUE(projectCloneDownloadRoleList_, projectCloneDownloadRoleList) };
    inline UpdateRepositoryRequest& setProjectCloneDownloadRoleList(vector<UpdateRepositoryRequestProjectCloneDownloadRoleList> && projectCloneDownloadRoleList) { DARABONBA_PTR_SET_RVALUE(projectCloneDownloadRoleList_, projectCloneDownloadRoleList) };


    // snippetsEnabled Field Functions 
    bool hasSnippetsEnabled() const { return this->snippetsEnabled_ != nullptr;};
    void deleteSnippetsEnabled() { this->snippetsEnabled_ = nullptr;};
    inline bool snippetsEnabled() const { DARABONBA_PTR_GET_DEFAULT(snippetsEnabled_, false) };
    inline UpdateRepositoryRequest& setSnippetsEnabled(bool snippetsEnabled) { DARABONBA_PTR_SET_VALUE(snippetsEnabled_, snippetsEnabled) };


    // visibilityLevel Field Functions 
    bool hasVisibilityLevel() const { return this->visibilityLevel_ != nullptr;};
    void deleteVisibilityLevel() { this->visibilityLevel_ = nullptr;};
    inline int32_t visibilityLevel() const { DARABONBA_PTR_GET_DEFAULT(visibilityLevel_, 0) };
    inline UpdateRepositoryRequest& setVisibilityLevel(int32_t visibilityLevel) { DARABONBA_PTR_SET_VALUE(visibilityLevel_, visibilityLevel) };


    // wikiEnabled Field Functions 
    bool hasWikiEnabled() const { return this->wikiEnabled_ != nullptr;};
    void deleteWikiEnabled() { this->wikiEnabled_ = nullptr;};
    inline bool wikiEnabled() const { DARABONBA_PTR_GET_DEFAULT(wikiEnabled_, false) };
    inline UpdateRepositoryRequest& setWikiEnabled(bool wikiEnabled) { DARABONBA_PTR_SET_VALUE(wikiEnabled_, wikiEnabled) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline UpdateRepositoryRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<string> adminSettingLanguage_ = nullptr;
    std::shared_ptr<string> avatar_ = nullptr;
    std::shared_ptr<bool> buildsEnabled_ = nullptr;
    std::shared_ptr<bool> checkEmail_ = nullptr;
    std::shared_ptr<string> defaultBranch_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<bool> issuesEnabled_ = nullptr;
    std::shared_ptr<bool> mergeRequestsEnabled_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> openCloneDownloadControl_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<vector<UpdateRepositoryRequestProjectCloneDownloadMethodList>> projectCloneDownloadMethodList_ = nullptr;
    std::shared_ptr<vector<UpdateRepositoryRequestProjectCloneDownloadRoleList>> projectCloneDownloadRoleList_ = nullptr;
    std::shared_ptr<bool> snippetsEnabled_ = nullptr;
    std::shared_ptr<int32_t> visibilityLevel_ = nullptr;
    std::shared_ptr<bool> wikiEnabled_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
