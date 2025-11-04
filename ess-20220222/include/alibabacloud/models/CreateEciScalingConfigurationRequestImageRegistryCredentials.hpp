// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTIMAGEREGISTRYCREDENTIALS_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTIMAGEREGISTRYCREDENTIALS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateEciScalingConfigurationRequestImageRegistryCredentials : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationRequestImageRegistryCredentials& obj) { 
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Server, server_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationRequestImageRegistryCredentials& obj) { 
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Server, server_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    CreateEciScalingConfigurationRequestImageRegistryCredentials() = default ;
    CreateEciScalingConfigurationRequestImageRegistryCredentials(const CreateEciScalingConfigurationRequestImageRegistryCredentials &) = default ;
    CreateEciScalingConfigurationRequestImageRegistryCredentials(CreateEciScalingConfigurationRequestImageRegistryCredentials &&) = default ;
    CreateEciScalingConfigurationRequestImageRegistryCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationRequestImageRegistryCredentials() = default ;
    CreateEciScalingConfigurationRequestImageRegistryCredentials& operator=(const CreateEciScalingConfigurationRequestImageRegistryCredentials &) = default ;
    CreateEciScalingConfigurationRequestImageRegistryCredentials& operator=(CreateEciScalingConfigurationRequestImageRegistryCredentials &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->password_ == nullptr
        && return this->server_ == nullptr && return this->userName_ == nullptr; };
    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateEciScalingConfigurationRequestImageRegistryCredentials& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // server Field Functions 
    bool hasServer() const { return this->server_ != nullptr;};
    void deleteServer() { this->server_ = nullptr;};
    inline string server() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
    inline CreateEciScalingConfigurationRequestImageRegistryCredentials& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateEciScalingConfigurationRequestImageRegistryCredentials& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The password of the image repository.
    std::shared_ptr<string> password_ = nullptr;
    // The endpoint of the image repository.
    std::shared_ptr<string> server_ = nullptr;
    // The username of the image repository.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
