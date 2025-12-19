// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEOAUTH2TOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEOAUTH2TOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class GetResourceOAuth2TokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceOAuth2TokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(AuthorizationURL, authorizationURL_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionStatus, sessionStatus_);
      DARABONBA_PTR_TO_JSON(SessionURI, sessionURI_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceOAuth2TokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(AuthorizationURL, authorizationURL_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionStatus, sessionStatus_);
      DARABONBA_PTR_FROM_JSON(SessionURI, sessionURI_);
    };
    GetResourceOAuth2TokenResponseBody() = default ;
    GetResourceOAuth2TokenResponseBody(const GetResourceOAuth2TokenResponseBody &) = default ;
    GetResourceOAuth2TokenResponseBody(GetResourceOAuth2TokenResponseBody &&) = default ;
    GetResourceOAuth2TokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceOAuth2TokenResponseBody() = default ;
    GetResourceOAuth2TokenResponseBody& operator=(const GetResourceOAuth2TokenResponseBody &) = default ;
    GetResourceOAuth2TokenResponseBody& operator=(GetResourceOAuth2TokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->authorizationURL_ == nullptr && return this->requestId_ == nullptr && return this->sessionStatus_ == nullptr && return this->sessionURI_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline GetResourceOAuth2TokenResponseBody& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // authorizationURL Field Functions 
    bool hasAuthorizationURL() const { return this->authorizationURL_ != nullptr;};
    void deleteAuthorizationURL() { this->authorizationURL_ = nullptr;};
    inline string authorizationURL() const { DARABONBA_PTR_GET_DEFAULT(authorizationURL_, "") };
    inline GetResourceOAuth2TokenResponseBody& setAuthorizationURL(string authorizationURL) { DARABONBA_PTR_SET_VALUE(authorizationURL_, authorizationURL) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceOAuth2TokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionStatus Field Functions 
    bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
    void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
    inline string sessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
    inline GetResourceOAuth2TokenResponseBody& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


    // sessionURI Field Functions 
    bool hasSessionURI() const { return this->sessionURI_ != nullptr;};
    void deleteSessionURI() { this->sessionURI_ = nullptr;};
    inline string sessionURI() const { DARABONBA_PTR_GET_DEFAULT(sessionURI_, "") };
    inline GetResourceOAuth2TokenResponseBody& setSessionURI(string sessionURI) { DARABONBA_PTR_SET_VALUE(sessionURI_, sessionURI) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<string> authorizationURL_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> sessionStatus_ = nullptr;
    std::shared_ptr<string> sessionURI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
