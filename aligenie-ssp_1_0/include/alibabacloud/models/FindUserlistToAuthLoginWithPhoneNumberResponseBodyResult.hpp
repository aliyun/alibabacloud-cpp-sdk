// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDUSERLISTTOAUTHLOGINWITHPHONENUMBERRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_FINDUSERLISTTOAUTHLOGINWITHPHONENUMBERRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class FindUserlistToAuthLoginWithPhoneNumberResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindUserlistToAuthLoginWithPhoneNumberResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(UserListToAuthLogin, userListToAuthLogin_);
    };
    friend void from_json(const Darabonba::Json& j, FindUserlistToAuthLoginWithPhoneNumberResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(UserListToAuthLogin, userListToAuthLogin_);
    };
    FindUserlistToAuthLoginWithPhoneNumberResponseBodyResult() = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBodyResult(const FindUserlistToAuthLoginWithPhoneNumberResponseBodyResult &) = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBodyResult(FindUserlistToAuthLoginWithPhoneNumberResponseBodyResult &&) = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindUserlistToAuthLoginWithPhoneNumberResponseBodyResult() = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBodyResult& operator=(const FindUserlistToAuthLoginWithPhoneNumberResponseBodyResult &) = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBodyResult& operator=(FindUserlistToAuthLoginWithPhoneNumberResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userListToAuthLogin_ != nullptr; };
    // userListToAuthLogin Field Functions 
    bool hasUserListToAuthLogin() const { return this->userListToAuthLogin_ != nullptr;};
    void deleteUserListToAuthLogin() { this->userListToAuthLogin_ = nullptr;};
    inline const vector<Models::FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin> & userListToAuthLogin() const { DARABONBA_PTR_GET_CONST(userListToAuthLogin_, vector<Models::FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin>) };
    inline vector<Models::FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin> userListToAuthLogin() { DARABONBA_PTR_GET(userListToAuthLogin_, vector<Models::FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin>) };
    inline FindUserlistToAuthLoginWithPhoneNumberResponseBodyResult& setUserListToAuthLogin(const vector<Models::FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin> & userListToAuthLogin) { DARABONBA_PTR_SET_VALUE(userListToAuthLogin_, userListToAuthLogin) };
    inline FindUserlistToAuthLoginWithPhoneNumberResponseBodyResult& setUserListToAuthLogin(vector<Models::FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin> && userListToAuthLogin) { DARABONBA_PTR_SET_RVALUE(userListToAuthLogin_, userListToAuthLogin) };


  protected:
    std::shared_ptr<vector<Models::FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin>> userListToAuthLogin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
