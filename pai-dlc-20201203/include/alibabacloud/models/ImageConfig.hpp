// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGECONFIG_HPP_
#define ALIBABACLOUD_MODELS_IMAGECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ImageConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Auth, auth_);
      DARABONBA_PTR_TO_JSON(DockerRegistry, dockerRegistry_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ImageConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Auth, auth_);
      DARABONBA_PTR_FROM_JSON(DockerRegistry, dockerRegistry_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    ImageConfig() = default ;
    ImageConfig(const ImageConfig &) = default ;
    ImageConfig(ImageConfig &&) = default ;
    ImageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageConfig() = default ;
    ImageConfig& operator=(const ImageConfig &) = default ;
    ImageConfig& operator=(ImageConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->auth_ != nullptr
        && this->dockerRegistry_ != nullptr && this->password_ != nullptr && this->username_ != nullptr; };
    // auth Field Functions 
    bool hasAuth() const { return this->auth_ != nullptr;};
    void deleteAuth() { this->auth_ = nullptr;};
    inline string auth() const { DARABONBA_PTR_GET_DEFAULT(auth_, "") };
    inline ImageConfig& setAuth(string auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };


    // dockerRegistry Field Functions 
    bool hasDockerRegistry() const { return this->dockerRegistry_ != nullptr;};
    void deleteDockerRegistry() { this->dockerRegistry_ = nullptr;};
    inline string dockerRegistry() const { DARABONBA_PTR_GET_DEFAULT(dockerRegistry_, "") };
    inline ImageConfig& setDockerRegistry(string dockerRegistry) { DARABONBA_PTR_SET_VALUE(dockerRegistry_, dockerRegistry) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ImageConfig& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ImageConfig& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> auth_ = nullptr;
    std::shared_ptr<string> dockerRegistry_ = nullptr;
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
