// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATALISTADMINLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATALISTADMINLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListInstancesResponseBodyDataListAdminList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyDataListAdminList& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LoginName, loginName_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyDataListAdminList& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
    };
    ListInstancesResponseBodyDataListAdminList() = default ;
    ListInstancesResponseBodyDataListAdminList(const ListInstancesResponseBodyDataListAdminList &) = default ;
    ListInstancesResponseBodyDataListAdminList(ListInstancesResponseBodyDataListAdminList &&) = default ;
    ListInstancesResponseBodyDataListAdminList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyDataListAdminList() = default ;
    ListInstancesResponseBodyDataListAdminList& operator=(const ListInstancesResponseBodyDataListAdminList &) = default ;
    ListInstancesResponseBodyDataListAdminList& operator=(ListInstancesResponseBodyDataListAdminList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayName_ != nullptr
        && this->email_ != nullptr && this->extension_ != nullptr && this->instanceId_ != nullptr && this->loginName_ != nullptr && this->mobile_ != nullptr
        && this->roleId_ != nullptr && this->roleName_ != nullptr && this->userId_ != nullptr && this->workMode_ != nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListInstancesResponseBodyDataListAdminList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ListInstancesResponseBodyDataListAdminList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline ListInstancesResponseBodyDataListAdminList& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesResponseBodyDataListAdminList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // loginName Field Functions 
    bool hasLoginName() const { return this->loginName_ != nullptr;};
    void deleteLoginName() { this->loginName_ = nullptr;};
    inline string loginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
    inline ListInstancesResponseBodyDataListAdminList& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline ListInstancesResponseBodyDataListAdminList& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline ListInstancesResponseBodyDataListAdminList& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline ListInstancesResponseBodyDataListAdminList& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListInstancesResponseBodyDataListAdminList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workMode Field Functions 
    bool hasWorkMode() const { return this->workMode_ != nullptr;};
    void deleteWorkMode() { this->workMode_ = nullptr;};
    inline string workMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
    inline ListInstancesResponseBodyDataListAdminList& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> extension_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> loginName_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<string> roleId_ = nullptr;
    std::shared_ptr<string> roleName_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> workMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
