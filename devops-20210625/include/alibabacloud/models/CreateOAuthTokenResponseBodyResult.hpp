// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOAUTHTOKENRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEOAUTHTOKENRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateOAuthTokenResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOAuthTokenResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(tokenType, tokenType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOAuthTokenResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(tokenType, tokenType_);
    };
    CreateOAuthTokenResponseBodyResult() = default ;
    CreateOAuthTokenResponseBodyResult(const CreateOAuthTokenResponseBodyResult &) = default ;
    CreateOAuthTokenResponseBodyResult(CreateOAuthTokenResponseBodyResult &&) = default ;
    CreateOAuthTokenResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOAuthTokenResponseBodyResult() = default ;
    CreateOAuthTokenResponseBodyResult& operator=(const CreateOAuthTokenResponseBodyResult &) = default ;
    CreateOAuthTokenResponseBodyResult& operator=(CreateOAuthTokenResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->id_ == nullptr && return this->scope_ == nullptr && return this->tokenType_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline CreateOAuthTokenResponseBodyResult& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateOAuthTokenResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline CreateOAuthTokenResponseBodyResult& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // tokenType Field Functions 
    bool hasTokenType() const { return this->tokenType_ != nullptr;};
    void deleteTokenType() { this->tokenType_ = nullptr;};
    inline string tokenType() const { DARABONBA_PTR_GET_DEFAULT(tokenType_, "") };
    inline CreateOAuthTokenResponseBodyResult& setTokenType(string tokenType) { DARABONBA_PTR_SET_VALUE(tokenType_, tokenType) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    // id
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> scope_ = nullptr;
    std::shared_ptr<string> tokenType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
