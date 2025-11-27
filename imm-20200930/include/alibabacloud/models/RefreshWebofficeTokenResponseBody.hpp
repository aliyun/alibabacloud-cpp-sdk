// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHWEBOFFICETOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REFRESHWEBOFFICETOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class RefreshWebofficeTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshWebofficeTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(AccessTokenExpiredTime, accessTokenExpiredTime_);
      DARABONBA_PTR_TO_JSON(RefreshToken, refreshToken_);
      DARABONBA_PTR_TO_JSON(RefreshTokenExpiredTime, refreshTokenExpiredTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshWebofficeTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(AccessTokenExpiredTime, accessTokenExpiredTime_);
      DARABONBA_PTR_FROM_JSON(RefreshToken, refreshToken_);
      DARABONBA_PTR_FROM_JSON(RefreshTokenExpiredTime, refreshTokenExpiredTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RefreshWebofficeTokenResponseBody() = default ;
    RefreshWebofficeTokenResponseBody(const RefreshWebofficeTokenResponseBody &) = default ;
    RefreshWebofficeTokenResponseBody(RefreshWebofficeTokenResponseBody &&) = default ;
    RefreshWebofficeTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshWebofficeTokenResponseBody() = default ;
    RefreshWebofficeTokenResponseBody& operator=(const RefreshWebofficeTokenResponseBody &) = default ;
    RefreshWebofficeTokenResponseBody& operator=(RefreshWebofficeTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->accessTokenExpiredTime_ == nullptr && return this->refreshToken_ == nullptr && return this->refreshTokenExpiredTime_ == nullptr && return this->requestId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline RefreshWebofficeTokenResponseBody& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // accessTokenExpiredTime Field Functions 
    bool hasAccessTokenExpiredTime() const { return this->accessTokenExpiredTime_ != nullptr;};
    void deleteAccessTokenExpiredTime() { this->accessTokenExpiredTime_ = nullptr;};
    inline string accessTokenExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(accessTokenExpiredTime_, "") };
    inline RefreshWebofficeTokenResponseBody& setAccessTokenExpiredTime(string accessTokenExpiredTime) { DARABONBA_PTR_SET_VALUE(accessTokenExpiredTime_, accessTokenExpiredTime) };


    // refreshToken Field Functions 
    bool hasRefreshToken() const { return this->refreshToken_ != nullptr;};
    void deleteRefreshToken() { this->refreshToken_ = nullptr;};
    inline string refreshToken() const { DARABONBA_PTR_GET_DEFAULT(refreshToken_, "") };
    inline RefreshWebofficeTokenResponseBody& setRefreshToken(string refreshToken) { DARABONBA_PTR_SET_VALUE(refreshToken_, refreshToken) };


    // refreshTokenExpiredTime Field Functions 
    bool hasRefreshTokenExpiredTime() const { return this->refreshTokenExpiredTime_ != nullptr;};
    void deleteRefreshTokenExpiredTime() { this->refreshTokenExpiredTime_ = nullptr;};
    inline string refreshTokenExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenExpiredTime_, "") };
    inline RefreshWebofficeTokenResponseBody& setRefreshTokenExpiredTime(string refreshTokenExpiredTime) { DARABONBA_PTR_SET_VALUE(refreshTokenExpiredTime_, refreshTokenExpiredTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RefreshWebofficeTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Weboffice access token.
    std::shared_ptr<string> accessToken_ = nullptr;
    // Expiration time of the access token. The expiration period is 30 minutes.
    std::shared_ptr<string> accessTokenExpiredTime_ = nullptr;
    // Weboffice refresh token.
    std::shared_ptr<string> refreshToken_ = nullptr;
    // Expiration time of the refresh token. The expiration period is 1 day.
    std::shared_ptr<string> refreshTokenExpiredTime_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
