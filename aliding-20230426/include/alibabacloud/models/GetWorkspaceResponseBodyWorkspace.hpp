// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACERESPONSEBODYWORKSPACE_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACERESPONSEBODYWORKSPACE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWorkspaceResponseBodyWorkspaceIcon.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetWorkspaceResponseBodyWorkspace : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspaceResponseBodyWorkspace& obj) { 
      DARABONBA_PTR_TO_JSON(CorpId, corpId_);
      DARABONBA_PTR_TO_JSON(Cover, cover_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ModifierId, modifierId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PermissionRole, permissionRole_);
      DARABONBA_PTR_TO_JSON(RootNodeId, rootNodeId_);
      DARABONBA_PTR_TO_JSON(TeamId, teamId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspaceResponseBodyWorkspace& obj) { 
      DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
      DARABONBA_PTR_FROM_JSON(Cover, cover_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ModifierId, modifierId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PermissionRole, permissionRole_);
      DARABONBA_PTR_FROM_JSON(RootNodeId, rootNodeId_);
      DARABONBA_PTR_FROM_JSON(TeamId, teamId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetWorkspaceResponseBodyWorkspace() = default ;
    GetWorkspaceResponseBodyWorkspace(const GetWorkspaceResponseBodyWorkspace &) = default ;
    GetWorkspaceResponseBodyWorkspace(GetWorkspaceResponseBodyWorkspace &&) = default ;
    GetWorkspaceResponseBodyWorkspace(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspaceResponseBodyWorkspace() = default ;
    GetWorkspaceResponseBodyWorkspace& operator=(const GetWorkspaceResponseBodyWorkspace &) = default ;
    GetWorkspaceResponseBodyWorkspace& operator=(GetWorkspaceResponseBodyWorkspace &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpId_ != nullptr
        && this->cover_ != nullptr && this->createTime_ != nullptr && this->creatorId_ != nullptr && this->description_ != nullptr && this->icon_ != nullptr
        && this->modifiedTime_ != nullptr && this->modifierId_ != nullptr && this->name_ != nullptr && this->permissionRole_ != nullptr && this->rootNodeId_ != nullptr
        && this->teamId_ != nullptr && this->type_ != nullptr && this->url_ != nullptr && this->workspaceId_ != nullptr; };
    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline GetWorkspaceResponseBodyWorkspace& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // cover Field Functions 
    bool hasCover() const { return this->cover_ != nullptr;};
    void deleteCover() { this->cover_ = nullptr;};
    inline string cover() const { DARABONBA_PTR_GET_DEFAULT(cover_, "") };
    inline GetWorkspaceResponseBodyWorkspace& setCover(string cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetWorkspaceResponseBodyWorkspace& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetWorkspaceResponseBodyWorkspace& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetWorkspaceResponseBodyWorkspace& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline const Models::GetWorkspaceResponseBodyWorkspaceIcon & icon() const { DARABONBA_PTR_GET_CONST(icon_, Models::GetWorkspaceResponseBodyWorkspaceIcon) };
    inline Models::GetWorkspaceResponseBodyWorkspaceIcon icon() { DARABONBA_PTR_GET(icon_, Models::GetWorkspaceResponseBodyWorkspaceIcon) };
    inline GetWorkspaceResponseBodyWorkspace& setIcon(const Models::GetWorkspaceResponseBodyWorkspaceIcon & icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };
    inline GetWorkspaceResponseBodyWorkspace& setIcon(Models::GetWorkspaceResponseBodyWorkspaceIcon && icon) { DARABONBA_PTR_SET_RVALUE(icon_, icon) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetWorkspaceResponseBodyWorkspace& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // modifierId Field Functions 
    bool hasModifierId() const { return this->modifierId_ != nullptr;};
    void deleteModifierId() { this->modifierId_ = nullptr;};
    inline string modifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
    inline GetWorkspaceResponseBodyWorkspace& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWorkspaceResponseBodyWorkspace& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // permissionRole Field Functions 
    bool hasPermissionRole() const { return this->permissionRole_ != nullptr;};
    void deletePermissionRole() { this->permissionRole_ = nullptr;};
    inline string permissionRole() const { DARABONBA_PTR_GET_DEFAULT(permissionRole_, "") };
    inline GetWorkspaceResponseBodyWorkspace& setPermissionRole(string permissionRole) { DARABONBA_PTR_SET_VALUE(permissionRole_, permissionRole) };


    // rootNodeId Field Functions 
    bool hasRootNodeId() const { return this->rootNodeId_ != nullptr;};
    void deleteRootNodeId() { this->rootNodeId_ = nullptr;};
    inline string rootNodeId() const { DARABONBA_PTR_GET_DEFAULT(rootNodeId_, "") };
    inline GetWorkspaceResponseBodyWorkspace& setRootNodeId(string rootNodeId) { DARABONBA_PTR_SET_VALUE(rootNodeId_, rootNodeId) };


    // teamId Field Functions 
    bool hasTeamId() const { return this->teamId_ != nullptr;};
    void deleteTeamId() { this->teamId_ = nullptr;};
    inline string teamId() const { DARABONBA_PTR_GET_DEFAULT(teamId_, "") };
    inline GetWorkspaceResponseBodyWorkspace& setTeamId(string teamId) { DARABONBA_PTR_SET_VALUE(teamId_, teamId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetWorkspaceResponseBodyWorkspace& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetWorkspaceResponseBodyWorkspace& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetWorkspaceResponseBodyWorkspace& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> cover_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> creatorId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::GetWorkspaceResponseBodyWorkspaceIcon> icon_ = nullptr;
    std::shared_ptr<string> modifiedTime_ = nullptr;
    std::shared_ptr<string> modifierId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> permissionRole_ = nullptr;
    std::shared_ptr<string> rootNodeId_ = nullptr;
    std::shared_ptr<string> teamId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
