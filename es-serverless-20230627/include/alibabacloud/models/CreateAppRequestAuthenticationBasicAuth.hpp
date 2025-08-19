// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPREQUESTAUTHENTICATIONBASICAUTH_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPREQUESTAUTHENTICATIONBASICAUTH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class CreateAppRequestAuthenticationBasicAuth : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppRequestAuthenticationBasicAuth& obj) { 
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppRequestAuthenticationBasicAuth& obj) { 
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    CreateAppRequestAuthenticationBasicAuth() = default ;
    CreateAppRequestAuthenticationBasicAuth(const CreateAppRequestAuthenticationBasicAuth &) = default ;
    CreateAppRequestAuthenticationBasicAuth(CreateAppRequestAuthenticationBasicAuth &&) = default ;
    CreateAppRequestAuthenticationBasicAuth(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppRequestAuthenticationBasicAuth() = default ;
    CreateAppRequestAuthenticationBasicAuth& operator=(const CreateAppRequestAuthenticationBasicAuth &) = default ;
    CreateAppRequestAuthenticationBasicAuth& operator=(CreateAppRequestAuthenticationBasicAuth &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->password_ != nullptr
        && this->username_ != nullptr; };
    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateAppRequestAuthenticationBasicAuth& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline CreateAppRequestAuthenticationBasicAuth& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
