// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEVELOPERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEVELOPERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateDeveloperRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeveloperRequest& obj) { 
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeveloperRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    CreateDeveloperRequest() = default ;
    CreateDeveloperRequest(const CreateDeveloperRequest &) = default ;
    CreateDeveloperRequest(CreateDeveloperRequest &&) = default ;
    CreateDeveloperRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeveloperRequest() = default ;
    CreateDeveloperRequest& operator=(const CreateDeveloperRequest &) = default ;
    CreateDeveloperRequest& operator=(CreateDeveloperRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->password_ == nullptr
        && this->username_ == nullptr; };
    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateDeveloperRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline CreateDeveloperRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The password of the developer account. The length must be 6 to 32 characters.
    shared_ptr<string> password_ {};
    // The logon username of the developer. The length must not exceed 64 characters.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
