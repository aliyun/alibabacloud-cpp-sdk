// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEMYAPIPERMISSIONSRESPONSEBODYPAGERESULTPERMISSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEMYAPIPERMISSIONSRESPONSEBODYPAGERESULTPERMISSIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(OwnerUserName, ownerUserName_);
      DARABONBA_PTR_TO_JSON(PrivilegeBelongTo, privilegeBelongTo_);
      DARABONBA_PTR_TO_JSON(PrivilegeFrom, privilegeFrom_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(OwnerUserName, ownerUserName_);
      DARABONBA_PTR_FROM_JSON(PrivilegeBelongTo, privilegeBelongTo_);
      DARABONBA_PTR_FROM_JSON(PrivilegeFrom, privilegeFrom_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList() = default ;
    ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList(const ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList &) = default ;
    ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList(ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList &&) = default ;
    ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList() = default ;
    ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList& operator=(const ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList &) = default ;
    ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList& operator=(ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->createUserName_ == nullptr && return this->creator_ == nullptr && return this->owner_ == nullptr && return this->ownerUserName_ == nullptr
        && return this->privilegeBelongTo_ == nullptr && return this->privilegeFrom_ == nullptr && return this->projectId_ == nullptr && return this->projectName_ == nullptr && return this->role_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string createUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // ownerUserName Field Functions 
    bool hasOwnerUserName() const { return this->ownerUserName_ != nullptr;};
    void deleteOwnerUserName() { this->ownerUserName_ = nullptr;};
    inline string ownerUserName() const { DARABONBA_PTR_GET_DEFAULT(ownerUserName_, "") };
    inline ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList& setOwnerUserName(string ownerUserName) { DARABONBA_PTR_SET_VALUE(ownerUserName_, ownerUserName) };


    // privilegeBelongTo Field Functions 
    bool hasPrivilegeBelongTo() const { return this->privilegeBelongTo_ != nullptr;};
    void deletePrivilegeBelongTo() { this->privilegeBelongTo_ = nullptr;};
    inline string privilegeBelongTo() const { DARABONBA_PTR_GET_DEFAULT(privilegeBelongTo_, "") };
    inline ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList& setPrivilegeBelongTo(string privilegeBelongTo) { DARABONBA_PTR_SET_VALUE(privilegeBelongTo_, privilegeBelongTo) };


    // privilegeFrom Field Functions 
    bool hasPrivilegeFrom() const { return this->privilegeFrom_ != nullptr;};
    void deletePrivilegeFrom() { this->privilegeFrom_ = nullptr;};
    inline int32_t privilegeFrom() const { DARABONBA_PTR_GET_DEFAULT(privilegeFrom_, 0) };
    inline ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList& setPrivilegeFrom(int32_t privilegeFrom) { DARABONBA_PTR_SET_VALUE(privilegeFrom_, privilegeFrom) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline int32_t role() const { DARABONBA_PTR_GET_DEFAULT(role_, 0) };
    inline ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList& setRole(int32_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    std::shared_ptr<int64_t> apiId_ = nullptr;
    std::shared_ptr<string> apiName_ = nullptr;
    std::shared_ptr<string> createUserName_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> ownerUserName_ = nullptr;
    std::shared_ptr<string> privilegeBelongTo_ = nullptr;
    std::shared_ptr<int32_t> privilegeFrom_ = nullptr;
    std::shared_ptr<int32_t> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<int32_t> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
