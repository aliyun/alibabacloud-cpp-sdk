// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ChangePasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangePasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NewPassword, newPassword_);
      DARABONBA_PTR_TO_JSON(OldPassword, oldPassword_);
    };
    friend void from_json(const Darabonba::Json& j, ChangePasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NewPassword, newPassword_);
      DARABONBA_PTR_FROM_JSON(OldPassword, oldPassword_);
    };
    ChangePasswordRequest() = default ;
    ChangePasswordRequest(const ChangePasswordRequest &) = default ;
    ChangePasswordRequest(ChangePasswordRequest &&) = default ;
    ChangePasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangePasswordRequest() = default ;
    ChangePasswordRequest& operator=(const ChangePasswordRequest &) = default ;
    ChangePasswordRequest& operator=(ChangePasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newPassword_ == nullptr
        && this->oldPassword_ == nullptr; };
    // newPassword Field Functions 
    bool hasNewPassword() const { return this->newPassword_ != nullptr;};
    void deleteNewPassword() { this->newPassword_ = nullptr;};
    inline string getNewPassword() const { DARABONBA_PTR_GET_DEFAULT(newPassword_, "") };
    inline ChangePasswordRequest& setNewPassword(string newPassword) { DARABONBA_PTR_SET_VALUE(newPassword_, newPassword) };


    // oldPassword Field Functions 
    bool hasOldPassword() const { return this->oldPassword_ != nullptr;};
    void deleteOldPassword() { this->oldPassword_ = nullptr;};
    inline string getOldPassword() const { DARABONBA_PTR_GET_DEFAULT(oldPassword_, "") };
    inline ChangePasswordRequest& setOldPassword(string oldPassword) { DARABONBA_PTR_SET_VALUE(oldPassword_, oldPassword) };


  protected:
    // The new password that is used to log on to the console.
    // 
    // The password must meet the complexity requirements. For more information, see [GetPasswordPolicy](https://help.aliyun.com/document_detail/186691.html).
    // 
    // This parameter is required.
    shared_ptr<string> newPassword_ {};
    // The old password that is used to log on to the console.
    // 
    // This parameter is required.
    shared_ptr<string> oldPassword_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
