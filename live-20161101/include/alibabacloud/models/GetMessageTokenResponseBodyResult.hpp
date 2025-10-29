// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGETOKENRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGETOKENRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class GetMessageTokenResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageTokenResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(AccessTokenExpiredTime, accessTokenExpiredTime_);
      DARABONBA_PTR_TO_JSON(RefreshToken, refreshToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageTokenResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(AccessTokenExpiredTime, accessTokenExpiredTime_);
      DARABONBA_PTR_FROM_JSON(RefreshToken, refreshToken_);
    };
    GetMessageTokenResponseBodyResult() = default ;
    GetMessageTokenResponseBodyResult(const GetMessageTokenResponseBodyResult &) = default ;
    GetMessageTokenResponseBodyResult(GetMessageTokenResponseBodyResult &&) = default ;
    GetMessageTokenResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageTokenResponseBodyResult() = default ;
    GetMessageTokenResponseBodyResult& operator=(const GetMessageTokenResponseBodyResult &) = default ;
    GetMessageTokenResponseBodyResult& operator=(GetMessageTokenResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->accessTokenExpiredTime_ == nullptr && return this->refreshToken_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline GetMessageTokenResponseBodyResult& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // accessTokenExpiredTime Field Functions 
    bool hasAccessTokenExpiredTime() const { return this->accessTokenExpiredTime_ != nullptr;};
    void deleteAccessTokenExpiredTime() { this->accessTokenExpiredTime_ = nullptr;};
    inline int64_t accessTokenExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(accessTokenExpiredTime_, 0L) };
    inline GetMessageTokenResponseBodyResult& setAccessTokenExpiredTime(int64_t accessTokenExpiredTime) { DARABONBA_PTR_SET_VALUE(accessTokenExpiredTime_, accessTokenExpiredTime) };


    // refreshToken Field Functions 
    bool hasRefreshToken() const { return this->refreshToken_ != nullptr;};
    void deleteRefreshToken() { this->refreshToken_ = nullptr;};
    inline string refreshToken() const { DARABONBA_PTR_GET_DEFAULT(refreshToken_, "") };
    inline GetMessageTokenResponseBodyResult& setRefreshToken(string refreshToken) { DARABONBA_PTR_SET_VALUE(refreshToken_, refreshToken) };


  protected:
    // The token used to establish a persistent connection.
    std::shared_ptr<string> accessToken_ = nullptr;
    // Indicates how long until the token expires. Unit: milliseconds.
    std::shared_ptr<int64_t> accessTokenExpiredTime_ = nullptr;
    // The updated token. If a token expires, you can call RefreshToken to obtain a new token.
    std::shared_ptr<string> refreshToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
