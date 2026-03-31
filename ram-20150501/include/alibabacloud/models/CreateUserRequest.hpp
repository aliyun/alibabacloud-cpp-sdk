// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class CreateUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(MobilePhone, mobilePhone_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(MobilePhone, mobilePhone_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
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
    virtual bool empty() const override { return this->comments_ == nullptr
        && this->displayName_ == nullptr && this->email_ == nullptr && this->mobilePhone_ == nullptr && this->userName_ == nullptr; };
    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline CreateUserRequest& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


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


    // mobilePhone Field Functions 
    bool hasMobilePhone() const { return this->mobilePhone_ != nullptr;};
    void deleteMobilePhone() { this->mobilePhone_ = nullptr;};
    inline string getMobilePhone() const { DARABONBA_PTR_GET_DEFAULT(mobilePhone_, "") };
    inline CreateUserRequest& setMobilePhone(string mobilePhone) { DARABONBA_PTR_SET_VALUE(mobilePhone_, mobilePhone) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateUserRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The description of the RAM user.
    // 
    // The description must be 1 to 128 characters in length.
    shared_ptr<string> comments_ {};
    // The display name of the RAM user.
    // 
    // The name must be 1 to 128 characters in length.
    shared_ptr<string> displayName_ {};
    // The email address of the RAM user.
    // 
    // >  This parameter applies only to the China site (aliyun.com).
    shared_ptr<string> email_ {};
    // The mobile phone number of the RAM user.
    // 
    // Format: \\<Country code>-\\<Mobile phone number>.
    // 
    // >  This parameter applies only to the China site (aliyun.com).
    shared_ptr<string> mobilePhone_ {};
    // The name of the RAM user.
    // 
    // The name must be 1 to 64 characters in length, and can contain letters, digits, periods (.), hyphens (-), and underscores (_).
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
