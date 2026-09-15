// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATEREGISTRYAUTHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATEREGISTRYAUTHCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class PublicUpdateTemplateRegistryAuthConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicUpdateTemplateRegistryAuthConfig& obj) { 
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, PublicUpdateTemplateRegistryAuthConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    PublicUpdateTemplateRegistryAuthConfig() = default ;
    PublicUpdateTemplateRegistryAuthConfig(const PublicUpdateTemplateRegistryAuthConfig &) = default ;
    PublicUpdateTemplateRegistryAuthConfig(PublicUpdateTemplateRegistryAuthConfig &&) = default ;
    PublicUpdateTemplateRegistryAuthConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicUpdateTemplateRegistryAuthConfig() = default ;
    PublicUpdateTemplateRegistryAuthConfig& operator=(const PublicUpdateTemplateRegistryAuthConfig &) = default ;
    PublicUpdateTemplateRegistryAuthConfig& operator=(PublicUpdateTemplateRegistryAuthConfig &&) = default ;
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
    inline PublicUpdateTemplateRegistryAuthConfig& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline PublicUpdateTemplateRegistryAuthConfig& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The repository password.
    shared_ptr<string> password_ {};
    // The repository username.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
