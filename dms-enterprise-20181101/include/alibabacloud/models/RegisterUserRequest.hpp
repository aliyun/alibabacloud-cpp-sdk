// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class RegisterUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(RoleNames, roleNames_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(UserNick, userNick_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(RoleNames, roleNames_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
    };
    RegisterUserRequest() = default ;
    RegisterUserRequest(const RegisterUserRequest &) = default ;
    RegisterUserRequest(RegisterUserRequest &&) = default ;
    RegisterUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterUserRequest() = default ;
    RegisterUserRequest& operator=(const RegisterUserRequest &) = default ;
    RegisterUserRequest& operator=(RegisterUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mobile_ != nullptr
        && this->roleNames_ != nullptr && this->tid_ != nullptr && this->uid_ != nullptr && this->userNick_ != nullptr; };
    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline RegisterUserRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // roleNames Field Functions 
    bool hasRoleNames() const { return this->roleNames_ != nullptr;};
    void deleteRoleNames() { this->roleNames_ = nullptr;};
    inline string roleNames() const { DARABONBA_PTR_GET_DEFAULT(roleNames_, "") };
    inline RegisterUserRequest& setRoleNames(string roleNames) { DARABONBA_PTR_SET_VALUE(roleNames_, roleNames) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline RegisterUserRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline RegisterUserRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string userNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline RegisterUserRequest& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    // The mobile number of the user.
    std::shared_ptr<string> mobile_ = nullptr;
    // The role that you want to assign to the user. Valid values:
    // 
    // *   **USER**: a regular user role
    // *   **DBA**: a database administrator (DBA) role
    // *   **ADMIN**: a DMS administrator role
    // *   **SECURITY_ADMIN**: a security administrator role
    // 
    // >  If you do not specify this parameter, the regular user role is assigned to the user by default. You can assign one or more roles to the user. Separate multiple roles with commas (,).
    std::shared_ptr<string> roleNames_ = nullptr;
    // The ID of the tenant.
    // 
    // >  To query ID of the tenant, move the pointer over the profile picture in the upper-right corner of the DMS console. For more information, see the "View information about the current tenant" section of the [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html) topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
    // The UID of the Alibaba Cloud account of the user that you want to register.
    // 
    // This parameter is required.
    std::shared_ptr<string> uid_ = nullptr;
    // The nickname of the user.
    std::shared_ptr<string> userNick_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
