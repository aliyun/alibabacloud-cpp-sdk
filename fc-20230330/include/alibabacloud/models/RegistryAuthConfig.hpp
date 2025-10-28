// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTRYAUTHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_REGISTRYAUTHCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class RegistryAuthConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegistryAuthConfig& obj) { 
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, RegistryAuthConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    RegistryAuthConfig() = default ;
    RegistryAuthConfig(const RegistryAuthConfig &) = default ;
    RegistryAuthConfig(RegistryAuthConfig &&) = default ;
    RegistryAuthConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegistryAuthConfig() = default ;
    RegistryAuthConfig& operator=(const RegistryAuthConfig &) = default ;
    RegistryAuthConfig& operator=(RegistryAuthConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->password_ == nullptr
        && return this->userName_ == nullptr; };
    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline RegistryAuthConfig& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline RegistryAuthConfig& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
