// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class CreateUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(DisplayId, displayId_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LoginName, loginName_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(NeedEmailNotification, needEmailNotification_);
      DARABONBA_PTR_TO_JSON(Nickname, nickname_);
      DARABONBA_PTR_TO_JSON(ResetPassword, resetPassword_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(SkillLevelList, skillLevelList_);
      DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(DisplayId, displayId_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(NeedEmailNotification, needEmailNotification_);
      DARABONBA_PTR_FROM_JSON(Nickname, nickname_);
      DARABONBA_PTR_FROM_JSON(ResetPassword, resetPassword_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(SkillLevelList, skillLevelList_);
      DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
    };
    CreateUserRequest() = default ;
    CreateUserRequest(const CreateUserRequest &) = default ;
    CreateUserRequest(CreateUserRequest &&) = default ;
    CreateUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserRequest() = default ;
    CreateUserRequest& operator=(const CreateUserRequest &) = default ;
    CreateUserRequest& operator=(CreateUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatarUrl_ == nullptr
        && this->displayId_ == nullptr && this->displayName_ == nullptr && this->email_ == nullptr && this->instanceId_ == nullptr && this->loginName_ == nullptr
        && this->mobile_ == nullptr && this->needEmailNotification_ == nullptr && this->nickname_ == nullptr && this->resetPassword_ == nullptr && this->roleId_ == nullptr
        && this->skillLevelList_ == nullptr && this->workMode_ == nullptr; };
    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string getAvatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline CreateUserRequest& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // displayId Field Functions 
    bool hasDisplayId() const { return this->displayId_ != nullptr;};
    void deleteDisplayId() { this->displayId_ = nullptr;};
    inline string getDisplayId() const { DARABONBA_PTR_GET_DEFAULT(displayId_, "") };
    inline CreateUserRequest& setDisplayId(string displayId) { DARABONBA_PTR_SET_VALUE(displayId_, displayId) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateUserRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateUserRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // loginName Field Functions 
    bool hasLoginName() const { return this->loginName_ != nullptr;};
    void deleteLoginName() { this->loginName_ = nullptr;};
    inline string getLoginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
    inline CreateUserRequest& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline CreateUserRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // needEmailNotification Field Functions 
    bool hasNeedEmailNotification() const { return this->needEmailNotification_ != nullptr;};
    void deleteNeedEmailNotification() { this->needEmailNotification_ = nullptr;};
    inline string getNeedEmailNotification() const { DARABONBA_PTR_GET_DEFAULT(needEmailNotification_, "") };
    inline CreateUserRequest& setNeedEmailNotification(string needEmailNotification) { DARABONBA_PTR_SET_VALUE(needEmailNotification_, needEmailNotification) };


    // nickname Field Functions 
    bool hasNickname() const { return this->nickname_ != nullptr;};
    void deleteNickname() { this->nickname_ = nullptr;};
    inline string getNickname() const { DARABONBA_PTR_GET_DEFAULT(nickname_, "") };
    inline CreateUserRequest& setNickname(string nickname) { DARABONBA_PTR_SET_VALUE(nickname_, nickname) };


    // resetPassword Field Functions 
    bool hasResetPassword() const { return this->resetPassword_ != nullptr;};
    void deleteResetPassword() { this->resetPassword_ = nullptr;};
    inline bool getResetPassword() const { DARABONBA_PTR_GET_DEFAULT(resetPassword_, false) };
    inline CreateUserRequest& setResetPassword(bool resetPassword) { DARABONBA_PTR_SET_VALUE(resetPassword_, resetPassword) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline CreateUserRequest& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // skillLevelList Field Functions 
    bool hasSkillLevelList() const { return this->skillLevelList_ != nullptr;};
    void deleteSkillLevelList() { this->skillLevelList_ = nullptr;};
    inline string getSkillLevelList() const { DARABONBA_PTR_GET_DEFAULT(skillLevelList_, "") };
    inline CreateUserRequest& setSkillLevelList(string skillLevelList) { DARABONBA_PTR_SET_VALUE(skillLevelList_, skillLevelList) };


    // workMode Field Functions 
    bool hasWorkMode() const { return this->workMode_ != nullptr;};
    void deleteWorkMode() { this->workMode_ = nullptr;};
    inline string getWorkMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
    inline CreateUserRequest& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


  protected:
    shared_ptr<string> avatarUrl_ {};
    shared_ptr<string> displayId_ {};
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // This parameter is required.
    shared_ptr<string> email_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> loginName_ {};
    shared_ptr<string> mobile_ {};
    shared_ptr<string> needEmailNotification_ {};
    shared_ptr<string> nickname_ {};
    shared_ptr<bool> resetPassword_ {};
    // This parameter is required.
    shared_ptr<string> roleId_ {};
    shared_ptr<string> skillLevelList_ {};
    shared_ptr<string> workMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
