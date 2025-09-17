// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGECACHESHRINKREQUESTIMAGEREGISTRYCREDENTIALS_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGECACHESHRINKREQUESTIMAGEREGISTRYCREDENTIALS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Acc20240402
{
namespace Models
{
  class CreateImageCacheShrinkRequestImageRegistryCredentials : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageCacheShrinkRequestImageRegistryCredentials& obj) { 
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Server, server_);
      DARABONBA_PTR_TO_JSON(SkipCertVerification, skipCertVerification_);
      DARABONBA_PTR_TO_JSON(UsePlainHttp, usePlainHttp_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageCacheShrinkRequestImageRegistryCredentials& obj) { 
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Server, server_);
      DARABONBA_PTR_FROM_JSON(SkipCertVerification, skipCertVerification_);
      DARABONBA_PTR_FROM_JSON(UsePlainHttp, usePlainHttp_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    CreateImageCacheShrinkRequestImageRegistryCredentials() = default ;
    CreateImageCacheShrinkRequestImageRegistryCredentials(const CreateImageCacheShrinkRequestImageRegistryCredentials &) = default ;
    CreateImageCacheShrinkRequestImageRegistryCredentials(CreateImageCacheShrinkRequestImageRegistryCredentials &&) = default ;
    CreateImageCacheShrinkRequestImageRegistryCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageCacheShrinkRequestImageRegistryCredentials() = default ;
    CreateImageCacheShrinkRequestImageRegistryCredentials& operator=(const CreateImageCacheShrinkRequestImageRegistryCredentials &) = default ;
    CreateImageCacheShrinkRequestImageRegistryCredentials& operator=(CreateImageCacheShrinkRequestImageRegistryCredentials &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->password_ != nullptr
        && this->server_ != nullptr && this->skipCertVerification_ != nullptr && this->usePlainHttp_ != nullptr && this->username_ != nullptr; };
    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateImageCacheShrinkRequestImageRegistryCredentials& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // server Field Functions 
    bool hasServer() const { return this->server_ != nullptr;};
    void deleteServer() { this->server_ = nullptr;};
    inline string server() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
    inline CreateImageCacheShrinkRequestImageRegistryCredentials& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


    // skipCertVerification Field Functions 
    bool hasSkipCertVerification() const { return this->skipCertVerification_ != nullptr;};
    void deleteSkipCertVerification() { this->skipCertVerification_ = nullptr;};
    inline bool skipCertVerification() const { DARABONBA_PTR_GET_DEFAULT(skipCertVerification_, false) };
    inline CreateImageCacheShrinkRequestImageRegistryCredentials& setSkipCertVerification(bool skipCertVerification) { DARABONBA_PTR_SET_VALUE(skipCertVerification_, skipCertVerification) };


    // usePlainHttp Field Functions 
    bool hasUsePlainHttp() const { return this->usePlainHttp_ != nullptr;};
    void deleteUsePlainHttp() { this->usePlainHttp_ = nullptr;};
    inline bool usePlainHttp() const { DARABONBA_PTR_GET_DEFAULT(usePlainHttp_, false) };
    inline CreateImageCacheShrinkRequestImageRegistryCredentials& setUsePlainHttp(bool usePlainHttp) { DARABONBA_PTR_SET_VALUE(usePlainHttp_, usePlainHttp) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline CreateImageCacheShrinkRequestImageRegistryCredentials& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<string> server_ = nullptr;
    std::shared_ptr<bool> skipCertVerification_ = nullptr;
    std::shared_ptr<bool> usePlainHttp_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
