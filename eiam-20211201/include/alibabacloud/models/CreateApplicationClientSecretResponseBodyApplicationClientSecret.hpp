// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONCLIENTSECRETRESPONSEBODYAPPLICATIONCLIENTSECRET_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONCLIENTSECRETRESPONSEBODYAPPLICATIONCLIENTSECRET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateApplicationClientSecretResponseBodyApplicationClientSecret : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationClientSecretResponseBodyApplicationClientSecret& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_TO_JSON(SecretId, secretId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationClientSecretResponseBodyApplicationClientSecret& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
    };
    CreateApplicationClientSecretResponseBodyApplicationClientSecret() = default ;
    CreateApplicationClientSecretResponseBodyApplicationClientSecret(const CreateApplicationClientSecretResponseBodyApplicationClientSecret &) = default ;
    CreateApplicationClientSecretResponseBodyApplicationClientSecret(CreateApplicationClientSecretResponseBodyApplicationClientSecret &&) = default ;
    CreateApplicationClientSecretResponseBodyApplicationClientSecret(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationClientSecretResponseBodyApplicationClientSecret() = default ;
    CreateApplicationClientSecretResponseBodyApplicationClientSecret& operator=(const CreateApplicationClientSecretResponseBodyApplicationClientSecret &) = default ;
    CreateApplicationClientSecretResponseBodyApplicationClientSecret& operator=(CreateApplicationClientSecretResponseBodyApplicationClientSecret &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientId_ != nullptr
        && this->clientSecret_ != nullptr && this->secretId_ != nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline CreateApplicationClientSecretResponseBodyApplicationClientSecret& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string clientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline CreateApplicationClientSecretResponseBodyApplicationClientSecret& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline string secretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
    inline CreateApplicationClientSecretResponseBodyApplicationClientSecret& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


  protected:
    // The client ID of the application.
    std::shared_ptr<string> clientId_ = nullptr;
    // The client key secret of the application.
    std::shared_ptr<string> clientSecret_ = nullptr;
    // The client key ID of the application.
    std::shared_ptr<string> secretId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
