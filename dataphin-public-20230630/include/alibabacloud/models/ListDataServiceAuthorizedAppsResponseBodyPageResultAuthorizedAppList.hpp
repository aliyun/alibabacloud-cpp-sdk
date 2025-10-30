// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAUTHORIZEDAPPSRESPONSEBODYPAGERESULTAUTHORIZEDAPPLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAUTHORIZEDAPPSRESPONSEBODYPAGERESULTAUTHORIZEDAPPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ApplyUserId, applyUserId_);
      DARABONBA_PTR_TO_JSON(ApplyUserName, applyUserName_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsProjectManager, isProjectManager_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(OwnerUserName, ownerUserName_);
      DARABONBA_PTR_TO_JSON(PrivilegeAccount, privilegeAccount_);
      DARABONBA_PTR_TO_JSON(PrivilegeType, privilegeType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RealHasOwnerPrivilege, realHasOwnerPrivilege_);
      DARABONBA_PTR_TO_JSON(RealHasPrivilege, realHasPrivilege_);
      DARABONBA_PTR_TO_JSON(RemarkForDebugList, remarkForDebugList_);
      DARABONBA_PTR_TO_JSON(Revocable, revocable_);
      DARABONBA_PTR_TO_JSON(RevocableDetail, revocableDetail_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ApplyUserId, applyUserId_);
      DARABONBA_PTR_FROM_JSON(ApplyUserName, applyUserName_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsProjectManager, isProjectManager_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(OwnerUserName, ownerUserName_);
      DARABONBA_PTR_FROM_JSON(PrivilegeAccount, privilegeAccount_);
      DARABONBA_PTR_FROM_JSON(PrivilegeType, privilegeType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RealHasOwnerPrivilege, realHasOwnerPrivilege_);
      DARABONBA_PTR_FROM_JSON(RealHasPrivilege, realHasPrivilege_);
      DARABONBA_PTR_FROM_JSON(RemarkForDebugList, remarkForDebugList_);
      DARABONBA_PTR_FROM_JSON(Revocable, revocable_);
      DARABONBA_PTR_FROM_JSON(RevocableDetail, revocableDetail_);
    };
    ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList() = default ;
    ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList(const ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList &) = default ;
    ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList(ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList &&) = default ;
    ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList() = default ;
    ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& operator=(const ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList &) = default ;
    ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& operator=(ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->applyUserId_ == nullptr && return this->applyUserName_ == nullptr && return this->expireDate_ == nullptr && return this->id_ == nullptr
        && return this->isProjectManager_ == nullptr && return this->owner_ == nullptr && return this->ownerUserName_ == nullptr && return this->privilegeAccount_ == nullptr && return this->privilegeType_ == nullptr
        && return this->projectId_ == nullptr && return this->projectName_ == nullptr && return this->realHasOwnerPrivilege_ == nullptr && return this->realHasPrivilege_ == nullptr && return this->remarkForDebugList_ == nullptr
        && return this->revocable_ == nullptr && return this->revocableDetail_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int32_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // applyUserId Field Functions 
    bool hasApplyUserId() const { return this->applyUserId_ != nullptr;};
    void deleteApplyUserId() { this->applyUserId_ = nullptr;};
    inline string applyUserId() const { DARABONBA_PTR_GET_DEFAULT(applyUserId_, "") };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setApplyUserId(string applyUserId) { DARABONBA_PTR_SET_VALUE(applyUserId_, applyUserId) };


    // applyUserName Field Functions 
    bool hasApplyUserName() const { return this->applyUserName_ != nullptr;};
    void deleteApplyUserName() { this->applyUserName_ = nullptr;};
    inline string applyUserName() const { DARABONBA_PTR_GET_DEFAULT(applyUserName_, "") };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setApplyUserName(string applyUserName) { DARABONBA_PTR_SET_VALUE(applyUserName_, applyUserName) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isProjectManager Field Functions 
    bool hasIsProjectManager() const { return this->isProjectManager_ != nullptr;};
    void deleteIsProjectManager() { this->isProjectManager_ = nullptr;};
    inline bool isProjectManager() const { DARABONBA_PTR_GET_DEFAULT(isProjectManager_, false) };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setIsProjectManager(bool isProjectManager) { DARABONBA_PTR_SET_VALUE(isProjectManager_, isProjectManager) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // ownerUserName Field Functions 
    bool hasOwnerUserName() const { return this->ownerUserName_ != nullptr;};
    void deleteOwnerUserName() { this->ownerUserName_ = nullptr;};
    inline string ownerUserName() const { DARABONBA_PTR_GET_DEFAULT(ownerUserName_, "") };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setOwnerUserName(string ownerUserName) { DARABONBA_PTR_SET_VALUE(ownerUserName_, ownerUserName) };


    // privilegeAccount Field Functions 
    bool hasPrivilegeAccount() const { return this->privilegeAccount_ != nullptr;};
    void deletePrivilegeAccount() { this->privilegeAccount_ = nullptr;};
    inline int32_t privilegeAccount() const { DARABONBA_PTR_GET_DEFAULT(privilegeAccount_, 0) };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setPrivilegeAccount(int32_t privilegeAccount) { DARABONBA_PTR_SET_VALUE(privilegeAccount_, privilegeAccount) };


    // privilegeType Field Functions 
    bool hasPrivilegeType() const { return this->privilegeType_ != nullptr;};
    void deletePrivilegeType() { this->privilegeType_ = nullptr;};
    inline int32_t privilegeType() const { DARABONBA_PTR_GET_DEFAULT(privilegeType_, 0) };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setPrivilegeType(int32_t privilegeType) { DARABONBA_PTR_SET_VALUE(privilegeType_, privilegeType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // realHasOwnerPrivilege Field Functions 
    bool hasRealHasOwnerPrivilege() const { return this->realHasOwnerPrivilege_ != nullptr;};
    void deleteRealHasOwnerPrivilege() { this->realHasOwnerPrivilege_ = nullptr;};
    inline bool realHasOwnerPrivilege() const { DARABONBA_PTR_GET_DEFAULT(realHasOwnerPrivilege_, false) };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setRealHasOwnerPrivilege(bool realHasOwnerPrivilege) { DARABONBA_PTR_SET_VALUE(realHasOwnerPrivilege_, realHasOwnerPrivilege) };


    // realHasPrivilege Field Functions 
    bool hasRealHasPrivilege() const { return this->realHasPrivilege_ != nullptr;};
    void deleteRealHasPrivilege() { this->realHasPrivilege_ = nullptr;};
    inline bool realHasPrivilege() const { DARABONBA_PTR_GET_DEFAULT(realHasPrivilege_, false) };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setRealHasPrivilege(bool realHasPrivilege) { DARABONBA_PTR_SET_VALUE(realHasPrivilege_, realHasPrivilege) };


    // remarkForDebugList Field Functions 
    bool hasRemarkForDebugList() const { return this->remarkForDebugList_ != nullptr;};
    void deleteRemarkForDebugList() { this->remarkForDebugList_ = nullptr;};
    inline const vector<Models::ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList> & remarkForDebugList() const { DARABONBA_PTR_GET_CONST(remarkForDebugList_, vector<Models::ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList>) };
    inline vector<Models::ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList> remarkForDebugList() { DARABONBA_PTR_GET(remarkForDebugList_, vector<Models::ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList>) };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setRemarkForDebugList(const vector<Models::ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList> & remarkForDebugList) { DARABONBA_PTR_SET_VALUE(remarkForDebugList_, remarkForDebugList) };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setRemarkForDebugList(vector<Models::ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList> && remarkForDebugList) { DARABONBA_PTR_SET_RVALUE(remarkForDebugList_, remarkForDebugList) };


    // revocable Field Functions 
    bool hasRevocable() const { return this->revocable_ != nullptr;};
    void deleteRevocable() { this->revocable_ = nullptr;};
    inline bool revocable() const { DARABONBA_PTR_GET_DEFAULT(revocable_, false) };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setRevocable(bool revocable) { DARABONBA_PTR_SET_VALUE(revocable_, revocable) };


    // revocableDetail Field Functions 
    bool hasRevocableDetail() const { return this->revocableDetail_ != nullptr;};
    void deleteRevocableDetail() { this->revocableDetail_ = nullptr;};
    inline int32_t revocableDetail() const { DARABONBA_PTR_GET_DEFAULT(revocableDetail_, 0) };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList& setRevocableDetail(int32_t revocableDetail) { DARABONBA_PTR_SET_VALUE(revocableDetail_, revocableDetail) };


  protected:
    std::shared_ptr<int32_t> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> applyUserId_ = nullptr;
    std::shared_ptr<string> applyUserName_ = nullptr;
    std::shared_ptr<string> expireDate_ = nullptr;
    std::shared_ptr<int32_t> id_ = nullptr;
    std::shared_ptr<bool> isProjectManager_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> ownerUserName_ = nullptr;
    std::shared_ptr<int32_t> privilegeAccount_ = nullptr;
    std::shared_ptr<int32_t> privilegeType_ = nullptr;
    std::shared_ptr<int32_t> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<bool> realHasOwnerPrivilege_ = nullptr;
    std::shared_ptr<bool> realHasPrivilege_ = nullptr;
    std::shared_ptr<vector<Models::ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList>> remarkForDebugList_ = nullptr;
    std::shared_ptr<bool> revocable_ = nullptr;
    std::shared_ptr<int32_t> revocableDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
