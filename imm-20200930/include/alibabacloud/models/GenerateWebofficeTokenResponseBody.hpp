// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEWEBOFFICETOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEWEBOFFICETOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GenerateWebofficeTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateWebofficeTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(AccessTokenExpiredTime, accessTokenExpiredTime_);
      DARABONBA_PTR_TO_JSON(RefreshToken, refreshToken_);
      DARABONBA_PTR_TO_JSON(RefreshTokenExpiredTime, refreshTokenExpiredTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WebofficeURL, webofficeURL_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateWebofficeTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(AccessTokenExpiredTime, accessTokenExpiredTime_);
      DARABONBA_PTR_FROM_JSON(RefreshToken, refreshToken_);
      DARABONBA_PTR_FROM_JSON(RefreshTokenExpiredTime, refreshTokenExpiredTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WebofficeURL, webofficeURL_);
    };
    GenerateWebofficeTokenResponseBody() = default ;
    GenerateWebofficeTokenResponseBody(const GenerateWebofficeTokenResponseBody &) = default ;
    GenerateWebofficeTokenResponseBody(GenerateWebofficeTokenResponseBody &&) = default ;
    GenerateWebofficeTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateWebofficeTokenResponseBody() = default ;
    GenerateWebofficeTokenResponseBody& operator=(const GenerateWebofficeTokenResponseBody &) = default ;
    GenerateWebofficeTokenResponseBody& operator=(GenerateWebofficeTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessToken_ != nullptr
        && this->accessTokenExpiredTime_ != nullptr && this->refreshToken_ != nullptr && this->refreshTokenExpiredTime_ != nullptr && this->requestId_ != nullptr && this->webofficeURL_ != nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline GenerateWebofficeTokenResponseBody& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // accessTokenExpiredTime Field Functions 
    bool hasAccessTokenExpiredTime() const { return this->accessTokenExpiredTime_ != nullptr;};
    void deleteAccessTokenExpiredTime() { this->accessTokenExpiredTime_ = nullptr;};
    inline string accessTokenExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(accessTokenExpiredTime_, "") };
    inline GenerateWebofficeTokenResponseBody& setAccessTokenExpiredTime(string accessTokenExpiredTime) { DARABONBA_PTR_SET_VALUE(accessTokenExpiredTime_, accessTokenExpiredTime) };


    // refreshToken Field Functions 
    bool hasRefreshToken() const { return this->refreshToken_ != nullptr;};
    void deleteRefreshToken() { this->refreshToken_ = nullptr;};
    inline string refreshToken() const { DARABONBA_PTR_GET_DEFAULT(refreshToken_, "") };
    inline GenerateWebofficeTokenResponseBody& setRefreshToken(string refreshToken) { DARABONBA_PTR_SET_VALUE(refreshToken_, refreshToken) };


    // refreshTokenExpiredTime Field Functions 
    bool hasRefreshTokenExpiredTime() const { return this->refreshTokenExpiredTime_ != nullptr;};
    void deleteRefreshTokenExpiredTime() { this->refreshTokenExpiredTime_ = nullptr;};
    inline string refreshTokenExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenExpiredTime_, "") };
    inline GenerateWebofficeTokenResponseBody& setRefreshTokenExpiredTime(string refreshTokenExpiredTime) { DARABONBA_PTR_SET_VALUE(refreshTokenExpiredTime_, refreshTokenExpiredTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateWebofficeTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // webofficeURL Field Functions 
    bool hasWebofficeURL() const { return this->webofficeURL_ != nullptr;};
    void deleteWebofficeURL() { this->webofficeURL_ = nullptr;};
    inline string webofficeURL() const { DARABONBA_PTR_GET_DEFAULT(webofficeURL_, "") };
    inline GenerateWebofficeTokenResponseBody& setWebofficeURL(string webofficeURL) { DARABONBA_PTR_SET_VALUE(webofficeURL_, webofficeURL) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<string> accessTokenExpiredTime_ = nullptr;
    std::shared_ptr<string> refreshToken_ = nullptr;
    std::shared_ptr<string> refreshTokenExpiredTime_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> webofficeURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
