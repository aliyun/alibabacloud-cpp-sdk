// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATEREGISTRYAUTHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATEREGISTRYAUTHCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class CreateTemplateRegistryAuthConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateRegistryAuthConfig& obj) { 
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateRegistryAuthConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    CreateTemplateRegistryAuthConfig() = default ;
    CreateTemplateRegistryAuthConfig(const CreateTemplateRegistryAuthConfig &) = default ;
    CreateTemplateRegistryAuthConfig(CreateTemplateRegistryAuthConfig &&) = default ;
    CreateTemplateRegistryAuthConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateRegistryAuthConfig() = default ;
    CreateTemplateRegistryAuthConfig& operator=(const CreateTemplateRegistryAuthConfig &) = default ;
    CreateTemplateRegistryAuthConfig& operator=(CreateTemplateRegistryAuthConfig &&) = default ;
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
    inline CreateTemplateRegistryAuthConfig& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateTemplateRegistryAuthConfig& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The password of the image repository.
    shared_ptr<string> password_ {};
    // The username of the image repository.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
