// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OAUTH2TOKENENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OAUTH2TOKENENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class OAuth2TokenEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OAuth2TokenEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(GrantType, grantType_);
      DARABONBA_PTR_TO_JSON(RedirectUri, redirectUri_);
      DARABONBA_PTR_TO_JSON(RefreshToken, refreshToken_);
    };
    friend void from_json(const Darabonba::Json& j, OAuth2TokenEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(GrantType, grantType_);
      DARABONBA_PTR_FROM_JSON(RedirectUri, redirectUri_);
      DARABONBA_PTR_FROM_JSON(RefreshToken, refreshToken_);
    };
    OAuth2TokenEndpointRequest() = default ;
    OAuth2TokenEndpointRequest(const OAuth2TokenEndpointRequest &) = default ;
    OAuth2TokenEndpointRequest(OAuth2TokenEndpointRequest &&) = default ;
    OAuth2TokenEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OAuth2TokenEndpointRequest() = default ;
    OAuth2TokenEndpointRequest& operator=(const OAuth2TokenEndpointRequest &) = default ;
    OAuth2TokenEndpointRequest& operator=(OAuth2TokenEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->grantType_ != nullptr && this->redirectUri_ != nullptr && this->refreshToken_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline OAuth2TokenEndpointRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // grantType Field Functions 
    bool hasGrantType() const { return this->grantType_ != nullptr;};
    void deleteGrantType() { this->grantType_ = nullptr;};
    inline string grantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
    inline OAuth2TokenEndpointRequest& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


    // redirectUri Field Functions 
    bool hasRedirectUri() const { return this->redirectUri_ != nullptr;};
    void deleteRedirectUri() { this->redirectUri_ = nullptr;};
    inline string redirectUri() const { DARABONBA_PTR_GET_DEFAULT(redirectUri_, "") };
    inline OAuth2TokenEndpointRequest& setRedirectUri(string redirectUri) { DARABONBA_PTR_SET_VALUE(redirectUri_, redirectUri) };


    // refreshToken Field Functions 
    bool hasRefreshToken() const { return this->refreshToken_ != nullptr;};
    void deleteRefreshToken() { this->refreshToken_ = nullptr;};
    inline string refreshToken() const { DARABONBA_PTR_GET_DEFAULT(refreshToken_, "") };
    inline OAuth2TokenEndpointRequest& setRefreshToken(string refreshToken) { DARABONBA_PTR_SET_VALUE(refreshToken_, refreshToken) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> grantType_ = nullptr;
    std::shared_ptr<string> redirectUri_ = nullptr;
    std::shared_ptr<string> refreshToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif
