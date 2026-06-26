// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUSERPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETUSERPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class SetUserPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetUserPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GenerateRandomPassword, generateRandomPassword_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, SetUserPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GenerateRandomPassword, generateRandomPassword_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
    };
    SetUserPasswordRequest() = default ;
    SetUserPasswordRequest(const SetUserPasswordRequest &) = default ;
    SetUserPasswordRequest(SetUserPasswordRequest &&) = default ;
    SetUserPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetUserPasswordRequest() = default ;
    SetUserPasswordRequest& operator=(const SetUserPasswordRequest &) = default ;
    SetUserPasswordRequest& operator=(SetUserPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->generateRandomPassword_ == nullptr
        && this->password_ == nullptr && this->userName_ == nullptr && this->userPoolName_ == nullptr; };
    // generateRandomPassword Field Functions 
    bool hasGenerateRandomPassword() const { return this->generateRandomPassword_ != nullptr;};
    void deleteGenerateRandomPassword() { this->generateRandomPassword_ = nullptr;};
    inline bool getGenerateRandomPassword() const { DARABONBA_PTR_GET_DEFAULT(generateRandomPassword_, false) };
    inline SetUserPasswordRequest& setGenerateRandomPassword(bool generateRandomPassword) { DARABONBA_PTR_SET_VALUE(generateRandomPassword_, generateRandomPassword) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline SetUserPasswordRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline SetUserPasswordRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline SetUserPasswordRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


  protected:
    shared_ptr<bool> generateRandomPassword_ {};
    shared_ptr<string> password_ {};
    shared_ptr<string> userName_ {};
    shared_ptr<string> userPoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
