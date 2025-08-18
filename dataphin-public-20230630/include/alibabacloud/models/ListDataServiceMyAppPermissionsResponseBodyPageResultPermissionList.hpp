// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEMYAPPPERMISSIONSRESPONSEBODYPAGERESULTPERMISSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEMYAPPPERMISSIONSRESPONSEBODYPAGERESULTPERMISSIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionListRemarkForDebugList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CurrentUserRole, currentUserRole_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(OwnerUserName, ownerUserName_);
      DARABONBA_PTR_TO_JSON(PrivilegeBelongTo, privilegeBelongTo_);
      DARABONBA_PTR_TO_JSON(PrivilegeFrom, privilegeFrom_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RemarkForDebugList, remarkForDebugList_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CurrentUserRole, currentUserRole_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(OwnerUserName, ownerUserName_);
      DARABONBA_PTR_FROM_JSON(PrivilegeBelongTo, privilegeBelongTo_);
      DARABONBA_PTR_FROM_JSON(PrivilegeFrom, privilegeFrom_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RemarkForDebugList, remarkForDebugList_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList() = default ;
    ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList(const ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList &) = default ;
    ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList(ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList &&) = default ;
    ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList() = default ;
    ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList& operator=(const ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList &) = default ;
    ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList& operator=(ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->createUserName_ != nullptr && this->creator_ != nullptr && this->currentUserRole_ != nullptr && this->owner_ != nullptr
        && this->ownerUserName_ != nullptr && this->privilegeBelongTo_ != nullptr && this->privilegeFrom_ != nullptr && this->projectId_ != nullptr && this->projectName_ != nullptr
        && this->remarkForDebugList_ != nullptr && this->role_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int32_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
    inline ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string createUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // currentUserRole Field Functions 
    bool hasCurrentUserRole() const { return this->currentUserRole_ != nullptr;};
    void deleteCurrentUserRole() { this->currentUserRole_ = nullptr;};
    inline string currentUserRole() const { DARABONBA_PTR_GET_DEFAULT(currentUserRole_, "") };
    inline ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList& setCurrentUserRole(string currentUserRole) { DARABONBA_PTR_SET_VALUE(currentUserRole_, currentUserRole) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // ownerUserName Field Functions 
    bool hasOwnerUserName() const { return this->ownerUserName_ != nullptr;};
    void deleteOwnerUserName() { this->ownerUserName_ = nullptr;};
    inline string ownerUserName() const { DARABONBA_PTR_GET_DEFAULT(ownerUserName_, "") };
    inline ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList& setOwnerUserName(string ownerUserName) { DARABONBA_PTR_SET_VALUE(ownerUserName_, ownerUserName) };


    // privilegeBelongTo Field Functions 
    bool hasPrivilegeBelongTo() const { return this->privilegeBelongTo_ != nullptr;};
    void deletePrivilegeBelongTo() { this->privilegeBelongTo_ = nullptr;};
    inline string privilegeBelongTo() const { DARABONBA_PTR_GET_DEFAULT(privilegeBelongTo_, "") };
    inline ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList& setPrivilegeBelongTo(string privilegeBelongTo) { DARABONBA_PTR_SET_VALUE(privilegeBelongTo_, privilegeBelongTo) };


    // privilegeFrom Field Functions 
    bool hasPrivilegeFrom() const { return this->privilegeFrom_ != nullptr;};
    void deletePrivilegeFrom() { this->privilegeFrom_ = nullptr;};
    inline int32_t privilegeFrom() const { DARABONBA_PTR_GET_DEFAULT(privilegeFrom_, 0) };
    inline ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList& setPrivilegeFrom(int32_t privilegeFrom) { DARABONBA_PTR_SET_VALUE(privilegeFrom_, privilegeFrom) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // remarkForDebugList Field Functions 
    bool hasRemarkForDebugList() const { return this->remarkForDebugList_ != nullptr;};
    void deleteRemarkForDebugList() { this->remarkForDebugList_ = nullptr;};
    inline const vector<Models::ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionListRemarkForDebugList> & remarkForDebugList() const { DARABONBA_PTR_GET_CONST(remarkForDebugList_, vector<Models::ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionListRemarkForDebugList>) };
    inline vector<Models::ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionListRemarkForDebugList> remarkForDebugList() { DARABONBA_PTR_GET(remarkForDebugList_, vector<Models::ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionListRemarkForDebugList>) };
    inline ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList& setRemarkForDebugList(const vector<Models::ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionListRemarkForDebugList> & remarkForDebugList) { DARABONBA_PTR_SET_VALUE(remarkForDebugList_, remarkForDebugList) };
    inline ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList& setRemarkForDebugList(vector<Models::ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionListRemarkForDebugList> && remarkForDebugList) { DARABONBA_PTR_SET_RVALUE(remarkForDebugList_, remarkForDebugList) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline int32_t role() const { DARABONBA_PTR_GET_DEFAULT(role_, 0) };
    inline ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList& setRole(int32_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    // AppId
    std::shared_ptr<int32_t> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> createUserName_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> currentUserRole_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> ownerUserName_ = nullptr;
    std::shared_ptr<string> privilegeBelongTo_ = nullptr;
    std::shared_ptr<int32_t> privilegeFrom_ = nullptr;
    std::shared_ptr<int32_t> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<vector<Models::ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionListRemarkForDebugList>> remarkForDebugList_ = nullptr;
    std::shared_ptr<int32_t> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
