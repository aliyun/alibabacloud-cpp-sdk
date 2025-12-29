// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTRYAUTHENTICATIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_REGISTRYAUTHENTICATIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class RegistryAuthenticationConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegistryAuthenticationConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, RegistryAuthenticationConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    RegistryAuthenticationConfig() = default ;
    RegistryAuthenticationConfig(const RegistryAuthenticationConfig &) = default ;
    RegistryAuthenticationConfig(RegistryAuthenticationConfig &&) = default ;
    RegistryAuthenticationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegistryAuthenticationConfig() = default ;
    RegistryAuthenticationConfig& operator=(const RegistryAuthenticationConfig &) = default ;
    RegistryAuthenticationConfig& operator=(RegistryAuthenticationConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->password_ == nullptr
        && this->userName_ == nullptr; };
    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline RegistryAuthenticationConfig& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline RegistryAuthenticationConfig& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    shared_ptr<string> password_ {};
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
