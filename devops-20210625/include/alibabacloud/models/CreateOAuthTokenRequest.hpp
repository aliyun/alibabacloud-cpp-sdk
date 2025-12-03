// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOAUTHTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOAUTHTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateOAuthTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOAuthTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(clientSecret, clientSecret_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(grantType, grantType_);
      DARABONBA_PTR_TO_JSON(login, login_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOAuthTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(clientSecret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(grantType, grantType_);
      DARABONBA_PTR_FROM_JSON(login, login_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
    };
    CreateOAuthTokenRequest() = default ;
    CreateOAuthTokenRequest(const CreateOAuthTokenRequest &) = default ;
    CreateOAuthTokenRequest(CreateOAuthTokenRequest &&) = default ;
    CreateOAuthTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOAuthTokenRequest() = default ;
    CreateOAuthTokenRequest& operator=(const CreateOAuthTokenRequest &) = default ;
    CreateOAuthTokenRequest& operator=(CreateOAuthTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && return this->clientSecret_ == nullptr && return this->code_ == nullptr && return this->grantType_ == nullptr && return this->login_ == nullptr && return this->scope_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline CreateOAuthTokenRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string clientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline CreateOAuthTokenRequest& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateOAuthTokenRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // grantType Field Functions 
    bool hasGrantType() const { return this->grantType_ != nullptr;};
    void deleteGrantType() { this->grantType_ = nullptr;};
    inline string grantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
    inline CreateOAuthTokenRequest& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


    // login Field Functions 
    bool hasLogin() const { return this->login_ != nullptr;};
    void deleteLogin() { this->login_ = nullptr;};
    inline string login() const { DARABONBA_PTR_GET_DEFAULT(login_, "") };
    inline CreateOAuthTokenRequest& setLogin(string login) { DARABONBA_PTR_SET_VALUE(login_, login) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline CreateOAuthTokenRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // clientId
    // 
    // This parameter is required.
    std::shared_ptr<string> clientId_ = nullptr;
    // client_secret
    // 
    // This parameter is required.
    std::shared_ptr<string> clientSecret_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> grantType_ = nullptr;
    std::shared_ptr<string> login_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
