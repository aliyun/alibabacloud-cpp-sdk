// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHLOGINWITHALIGENIEUSERINFORESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_AUTHLOGINWITHALIGENIEUSERINFORESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class AuthLoginWithAligenieUserInfoResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthLoginWithAligenieUserInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ExpiredTimeLong, expiredTimeLong_);
      DARABONBA_PTR_TO_JSON(LoginStateAccessToken, loginStateAccessToken_);
    };
    friend void from_json(const Darabonba::Json& j, AuthLoginWithAligenieUserInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpiredTimeLong, expiredTimeLong_);
      DARABONBA_PTR_FROM_JSON(LoginStateAccessToken, loginStateAccessToken_);
    };
    AuthLoginWithAligenieUserInfoResponseBodyResult() = default ;
    AuthLoginWithAligenieUserInfoResponseBodyResult(const AuthLoginWithAligenieUserInfoResponseBodyResult &) = default ;
    AuthLoginWithAligenieUserInfoResponseBodyResult(AuthLoginWithAligenieUserInfoResponseBodyResult &&) = default ;
    AuthLoginWithAligenieUserInfoResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthLoginWithAligenieUserInfoResponseBodyResult() = default ;
    AuthLoginWithAligenieUserInfoResponseBodyResult& operator=(const AuthLoginWithAligenieUserInfoResponseBodyResult &) = default ;
    AuthLoginWithAligenieUserInfoResponseBodyResult& operator=(AuthLoginWithAligenieUserInfoResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expiredTimeLong_ != nullptr
        && this->loginStateAccessToken_ != nullptr; };
    // expiredTimeLong Field Functions 
    bool hasExpiredTimeLong() const { return this->expiredTimeLong_ != nullptr;};
    void deleteExpiredTimeLong() { this->expiredTimeLong_ = nullptr;};
    inline int64_t expiredTimeLong() const { DARABONBA_PTR_GET_DEFAULT(expiredTimeLong_, 0L) };
    inline AuthLoginWithAligenieUserInfoResponseBodyResult& setExpiredTimeLong(int64_t expiredTimeLong) { DARABONBA_PTR_SET_VALUE(expiredTimeLong_, expiredTimeLong) };


    // loginStateAccessToken Field Functions 
    bool hasLoginStateAccessToken() const { return this->loginStateAccessToken_ != nullptr;};
    void deleteLoginStateAccessToken() { this->loginStateAccessToken_ = nullptr;};
    inline string loginStateAccessToken() const { DARABONBA_PTR_GET_DEFAULT(loginStateAccessToken_, "") };
    inline AuthLoginWithAligenieUserInfoResponseBodyResult& setLoginStateAccessToken(string loginStateAccessToken) { DARABONBA_PTR_SET_VALUE(loginStateAccessToken_, loginStateAccessToken) };


  protected:
    std::shared_ptr<int64_t> expiredTimeLong_ = nullptr;
    std::shared_ptr<string> loginStateAccessToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
