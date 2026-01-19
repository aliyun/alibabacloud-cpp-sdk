// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDGECONTAINERAPPIMAGESECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDGECONTAINERAPPIMAGESECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateEdgeContainerAppImageSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEdgeContainerAppImageSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Registry, registry_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEdgeContainerAppImageSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Registry, registry_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    CreateEdgeContainerAppImageSecretRequest() = default ;
    CreateEdgeContainerAppImageSecretRequest(const CreateEdgeContainerAppImageSecretRequest &) = default ;
    CreateEdgeContainerAppImageSecretRequest(CreateEdgeContainerAppImageSecretRequest &&) = default ;
    CreateEdgeContainerAppImageSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEdgeContainerAppImageSecretRequest() = default ;
    CreateEdgeContainerAppImageSecretRequest& operator=(const CreateEdgeContainerAppImageSecretRequest &) = default ;
    CreateEdgeContainerAppImageSecretRequest& operator=(CreateEdgeContainerAppImageSecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->password_ == nullptr && this->registry_ == nullptr && this->username_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateEdgeContainerAppImageSecretRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateEdgeContainerAppImageSecretRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // registry Field Functions 
    bool hasRegistry() const { return this->registry_ != nullptr;};
    void deleteRegistry() { this->registry_ = nullptr;};
    inline string getRegistry() const { DARABONBA_PTR_GET_DEFAULT(registry_, "") };
    inline CreateEdgeContainerAppImageSecretRequest& setRegistry(string registry) { DARABONBA_PTR_SET_VALUE(registry_, registry) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline CreateEdgeContainerAppImageSecretRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // Application ID, which can be obtained using the [ListEdgeContainerApps](~~ListEdgeContainerApps~~) interface.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // Image repository password.
    // 
    // This parameter is required.
    shared_ptr<string> password_ {};
    // Image repository address.
    // 
    // This parameter is required.
    shared_ptr<string> registry_ {};
    // Image repository username.
    // 
    // This parameter is required.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
