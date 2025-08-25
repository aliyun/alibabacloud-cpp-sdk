// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ModifyUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(DisplayId, displayId_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(Nickname, nickname_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(DisplayId, displayId_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(Nickname, nickname_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
    };
    ModifyUserRequest() = default ;
    ModifyUserRequest(const ModifyUserRequest &) = default ;
    ModifyUserRequest(ModifyUserRequest &&) = default ;
    ModifyUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUserRequest() = default ;
    ModifyUserRequest& operator=(const ModifyUserRequest &) = default ;
    ModifyUserRequest& operator=(ModifyUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avatarUrl_ != nullptr
        && this->displayId_ != nullptr && this->displayName_ != nullptr && this->force_ != nullptr && this->instanceId_ != nullptr && this->mobile_ != nullptr
        && this->nickname_ != nullptr && this->roleId_ != nullptr && this->userId_ != nullptr && this->workMode_ != nullptr; };
    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline ModifyUserRequest& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // displayId Field Functions 
    bool hasDisplayId() const { return this->displayId_ != nullptr;};
    void deleteDisplayId() { this->displayId_ = nullptr;};
    inline string displayId() const { DARABONBA_PTR_GET_DEFAULT(displayId_, "") };
    inline ModifyUserRequest& setDisplayId(string displayId) { DARABONBA_PTR_SET_VALUE(displayId_, displayId) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ModifyUserRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline ModifyUserRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline ModifyUserRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // nickname Field Functions 
    bool hasNickname() const { return this->nickname_ != nullptr;};
    void deleteNickname() { this->nickname_ = nullptr;};
    inline string nickname() const { DARABONBA_PTR_GET_DEFAULT(nickname_, "") };
    inline ModifyUserRequest& setNickname(string nickname) { DARABONBA_PTR_SET_VALUE(nickname_, nickname) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline ModifyUserRequest& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ModifyUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workMode Field Functions 
    bool hasWorkMode() const { return this->workMode_ != nullptr;};
    void deleteWorkMode() { this->workMode_ = nullptr;};
    inline string workMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
    inline ModifyUserRequest& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


  protected:
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<string> displayId_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<bool> force_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<string> nickname_ = nullptr;
    std::shared_ptr<string> roleId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
