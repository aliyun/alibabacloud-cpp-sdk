// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class CreateUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoLockTime, autoLockTime_);
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(IsLocalAdmin, isLocalAdmin_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PasswordExpireDays, passwordExpireDays_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoLockTime, autoLockTime_);
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(IsLocalAdmin, isLocalAdmin_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PasswordExpireDays, passwordExpireDays_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    CreateUsersRequest() = default ;
    CreateUsersRequest(const CreateUsersRequest &) = default ;
    CreateUsersRequest(CreateUsersRequest &&) = default ;
    CreateUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUsersRequest() = default ;
    CreateUsersRequest& operator=(const CreateUsersRequest &) = default ;
    CreateUsersRequest& operator=(CreateUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(GroupIdList, groupIdList_);
        DARABONBA_PTR_TO_JSON(OrgId, orgId_);
        DARABONBA_PTR_TO_JSON(OwnerType, ownerType_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Phone, phone_);
        DARABONBA_PTR_TO_JSON(RealNickName, realNickName_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(GroupIdList, groupIdList_);
        DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
        DARABONBA_PTR_FROM_JSON(OwnerType, ownerType_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
        DARABONBA_PTR_FROM_JSON(RealNickName, realNickName_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
      };
      Users() = default ;
      Users(const Users &) = default ;
      Users(Users &&) = default ;
      Users(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Users() = default ;
      Users& operator=(const Users &) = default ;
      Users& operator=(Users &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->email_ == nullptr
        && this->endUserId_ == nullptr && this->groupIdList_ == nullptr && this->orgId_ == nullptr && this->ownerType_ == nullptr && this->password_ == nullptr
        && this->phone_ == nullptr && this->realNickName_ == nullptr && this->remark_ == nullptr; };
      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Users& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline Users& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // groupIdList Field Functions 
      bool hasGroupIdList() const { return this->groupIdList_ != nullptr;};
      void deleteGroupIdList() { this->groupIdList_ = nullptr;};
      inline const vector<string> & getGroupIdList() const { DARABONBA_PTR_GET_CONST(groupIdList_, vector<string>) };
      inline vector<string> getGroupIdList() { DARABONBA_PTR_GET(groupIdList_, vector<string>) };
      inline Users& setGroupIdList(const vector<string> & groupIdList) { DARABONBA_PTR_SET_VALUE(groupIdList_, groupIdList) };
      inline Users& setGroupIdList(vector<string> && groupIdList) { DARABONBA_PTR_SET_RVALUE(groupIdList_, groupIdList) };


      // orgId Field Functions 
      bool hasOrgId() const { return this->orgId_ != nullptr;};
      void deleteOrgId() { this->orgId_ = nullptr;};
      inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
      inline Users& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


      // ownerType Field Functions 
      bool hasOwnerType() const { return this->ownerType_ != nullptr;};
      void deleteOwnerType() { this->ownerType_ = nullptr;};
      inline string getOwnerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
      inline Users& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline Users& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline Users& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // realNickName Field Functions 
      bool hasRealNickName() const { return this->realNickName_ != nullptr;};
      void deleteRealNickName() { this->realNickName_ = nullptr;};
      inline string getRealNickName() const { DARABONBA_PTR_GET_DEFAULT(realNickName_, "") };
      inline Users& setRealNickName(string realNickName) { DARABONBA_PTR_SET_VALUE(realNickName_, realNickName) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Users& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    protected:
      // The email address of the convenience user. The email address is used to receive notifications about events such as desktop assignment. You must specify an email address or a mobile number to receive notifications.
      shared_ptr<string> email_ {};
      // The username of the convenience user. The name can contain lowercase letters, digits, and underscores (_), and must be 3 to 24 characters in length.
      // 
      // This parameter is required.
      shared_ptr<string> endUserId_ {};
      shared_ptr<vector<string>> groupIdList_ {};
      // The organization to which the convenience user belongs.
      shared_ptr<string> orgId_ {};
      // The type of the account ownership.
      // 
      // Valid values:
      // 
      // *   CreateFromManager: administrator-activated
      // *   Normal: user-activated
      shared_ptr<string> ownerType_ {};
      // The user password.
      // 
      // >  The password must be at least 10 characters in length and contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters (excluding spaces).
      shared_ptr<string> password_ {};
      // Mobile numbers are not supported on the international site (alibabacloud.com).
      shared_ptr<string> phone_ {};
      // The display name of the end user.
      shared_ptr<string> realNickName_ {};
      // The remarks on the convenience user.
      shared_ptr<string> remark_ {};
    };

    virtual bool empty() const override { return this->autoLockTime_ == nullptr
        && this->businessChannel_ == nullptr && this->isLocalAdmin_ == nullptr && this->password_ == nullptr && this->passwordExpireDays_ == nullptr && this->users_ == nullptr; };
    // autoLockTime Field Functions 
    bool hasAutoLockTime() const { return this->autoLockTime_ != nullptr;};
    void deleteAutoLockTime() { this->autoLockTime_ = nullptr;};
    inline string getAutoLockTime() const { DARABONBA_PTR_GET_DEFAULT(autoLockTime_, "") };
    inline CreateUsersRequest& setAutoLockTime(string autoLockTime) { DARABONBA_PTR_SET_VALUE(autoLockTime_, autoLockTime) };


    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline CreateUsersRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // isLocalAdmin Field Functions 
    bool hasIsLocalAdmin() const { return this->isLocalAdmin_ != nullptr;};
    void deleteIsLocalAdmin() { this->isLocalAdmin_ = nullptr;};
    inline bool getIsLocalAdmin() const { DARABONBA_PTR_GET_DEFAULT(isLocalAdmin_, false) };
    inline CreateUsersRequest& setIsLocalAdmin(bool isLocalAdmin) { DARABONBA_PTR_SET_VALUE(isLocalAdmin_, isLocalAdmin) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateUsersRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordExpireDays Field Functions 
    bool hasPasswordExpireDays() const { return this->passwordExpireDays_ != nullptr;};
    void deletePasswordExpireDays() { this->passwordExpireDays_ = nullptr;};
    inline string getPasswordExpireDays() const { DARABONBA_PTR_GET_DEFAULT(passwordExpireDays_, "") };
    inline CreateUsersRequest& setPasswordExpireDays(string passwordExpireDays) { DARABONBA_PTR_SET_VALUE(passwordExpireDays_, passwordExpireDays) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<CreateUsersRequest::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<CreateUsersRequest::Users>) };
    inline vector<CreateUsersRequest::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<CreateUsersRequest::Users>) };
    inline CreateUsersRequest& setUsers(const vector<CreateUsersRequest::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline CreateUsersRequest& setUsers(vector<CreateUsersRequest::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The date on which the convenience users are automatically locked.
    shared_ptr<string> autoLockTime_ {};
    shared_ptr<string> businessChannel_ {};
    shared_ptr<bool> isLocalAdmin_ {};
    // The initial password. If this parameter is left empty, an email for password reset is sent to the specified email address.
    shared_ptr<string> password_ {};
    shared_ptr<string> passwordExpireDays_ {};
    // The information about the convenience user.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateUsersRequest::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
