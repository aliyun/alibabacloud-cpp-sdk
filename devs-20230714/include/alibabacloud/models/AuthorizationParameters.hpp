// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZATIONPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZATIONPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class AuthorizationParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizationParameters& obj) { 
      DARABONBA_PTR_TO_JSON(apiKeyParameter, apiKeyParameter_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizationParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKeyParameter, apiKeyParameter_);
    };
    AuthorizationParameters() = default ;
    AuthorizationParameters(const AuthorizationParameters &) = default ;
    AuthorizationParameters(AuthorizationParameters &&) = default ;
    AuthorizationParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizationParameters() = default ;
    AuthorizationParameters& operator=(const AuthorizationParameters &) = default ;
    AuthorizationParameters& operator=(AuthorizationParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiKeyParameter_ != nullptr; };
    // apiKeyParameter Field Functions 
    bool hasApiKeyParameter() const { return this->apiKeyParameter_ != nullptr;};
    void deleteApiKeyParameter() { this->apiKeyParameter_ = nullptr;};
    inline const Models::APIKeyAuthParameter & apiKeyParameter() const { DARABONBA_PTR_GET_CONST(apiKeyParameter_, Models::APIKeyAuthParameter) };
    inline Models::APIKeyAuthParameter apiKeyParameter() { DARABONBA_PTR_GET(apiKeyParameter_, Models::APIKeyAuthParameter) };
    inline AuthorizationParameters& setApiKeyParameter(const Models::APIKeyAuthParameter & apiKeyParameter) { DARABONBA_PTR_SET_VALUE(apiKeyParameter_, apiKeyParameter) };
    inline AuthorizationParameters& setApiKeyParameter(Models::APIKeyAuthParameter && apiKeyParameter) { DARABONBA_PTR_SET_RVALUE(apiKeyParameter_, apiKeyParameter) };


  protected:
    std::shared_ptr<Models::APIKeyAuthParameter> apiKeyParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
