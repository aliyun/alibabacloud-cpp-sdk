// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSREQUESTUSERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSREQUESTUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class CreateUsersRequestUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUsersRequestUsers& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(RealNickName, realNickName_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUsersRequestUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(RealNickName, realNickName_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    CreateUsersRequestUsers() = default ;
    CreateUsersRequestUsers(const CreateUsersRequestUsers &) = default ;
    CreateUsersRequestUsers(CreateUsersRequestUsers &&) = default ;
    CreateUsersRequestUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUsersRequestUsers() = default ;
    CreateUsersRequestUsers& operator=(const CreateUsersRequestUsers &) = default ;
    CreateUsersRequestUsers& operator=(CreateUsersRequestUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->email_ != nullptr
        && this->endUserId_ != nullptr && this->orgId_ != nullptr && this->ownerType_ != nullptr && this->password_ != nullptr && this->phone_ != nullptr
        && this->realNickName_ != nullptr && this->remark_ != nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateUsersRequestUsers& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline CreateUsersRequestUsers& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline CreateUsersRequestUsers& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // ownerType Field Functions 
    bool hasOwnerType() const { return this->ownerType_ != nullptr;};
    void deleteOwnerType() { this->ownerType_ = nullptr;};
    inline string ownerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
    inline CreateUsersRequestUsers& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateUsersRequestUsers& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline CreateUsersRequestUsers& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // realNickName Field Functions 
    bool hasRealNickName() const { return this->realNickName_ != nullptr;};
    void deleteRealNickName() { this->realNickName_ = nullptr;};
    inline string realNickName() const { DARABONBA_PTR_GET_DEFAULT(realNickName_, "") };
    inline CreateUsersRequestUsers& setRealNickName(string realNickName) { DARABONBA_PTR_SET_VALUE(realNickName_, realNickName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateUsersRequestUsers& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The email address of the convenience user. The email address is used to receive notifications about events such as desktop assignment. You must specify an email address or a mobile number to receive notifications.
    std::shared_ptr<string> email_ = nullptr;
    // The username of the convenience user. The name can contain lowercase letters, digits, and underscores (_), and must be 3 to 24 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The organization to which the convenience user belongs.
    std::shared_ptr<string> orgId_ = nullptr;
    // The type of the account ownership.
    // 
    // Valid values:
    // 
    // *   CreateFromManager: administrator-activated
    // *   Normal: user-activated
    std::shared_ptr<string> ownerType_ = nullptr;
    // The user password.
    // 
    // >  The password must be at least 10 characters in length and contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters (excluding spaces).
    std::shared_ptr<string> password_ = nullptr;
    // Mobile numbers are not supported on the international site (alibabacloud.com).
    std::shared_ptr<string> phone_ = nullptr;
    // The display name of the end user.
    std::shared_ptr<string> realNickName_ = nullptr;
    // The remarks on the convenience user.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
