// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHTOKENRESPONSEBODYTOKENINFO_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHTOKENRESPONSEBODYTOKENINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class GetAuthTokenResponseBodyTokenInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthTokenResponseBodyTokenInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthTokenResponseBodyTokenInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
    };
    GetAuthTokenResponseBodyTokenInfo() = default ;
    GetAuthTokenResponseBodyTokenInfo(const GetAuthTokenResponseBodyTokenInfo &) = default ;
    GetAuthTokenResponseBodyTokenInfo(GetAuthTokenResponseBodyTokenInfo &&) = default ;
    GetAuthTokenResponseBodyTokenInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthTokenResponseBodyTokenInfo() = default ;
    GetAuthTokenResponseBodyTokenInfo& operator=(const GetAuthTokenResponseBodyTokenInfo &) = default ;
    GetAuthTokenResponseBodyTokenInfo& operator=(GetAuthTokenResponseBodyTokenInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessToken_ != nullptr
        && this->jwtToken_ != nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline GetAuthTokenResponseBodyTokenInfo& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string jwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline GetAuthTokenResponseBodyTokenInfo& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


  protected:
    // The business authentication token.
    // 
    // >  AccessToken is valid for 10 minutes and can be used repeatedly within its validity period.
    std::shared_ptr<string> accessToken_ = nullptr;
    // The API authentication token.
    // 
    // >  JwtToken is valid for 1 hour and can be used repeatedly within its validity period.
    std::shared_ptr<string> jwtToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
