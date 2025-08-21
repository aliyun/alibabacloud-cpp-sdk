// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDUSERLISTTOAUTHLOGINWITHPHONENUMBERRESPONSEBODYDATAOBJ_HPP_
#define ALIBABACLOUD_MODELS_FINDUSERLISTTOAUTHLOGINWITHPHONENUMBERRESPONSEBODYDATAOBJ_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class FindUserlistToAuthLoginWithPhoneNumberResponseBodyDataObj : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindUserlistToAuthLoginWithPhoneNumberResponseBodyDataObj& obj) { 
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, FindUserlistToAuthLoginWithPhoneNumberResponseBodyDataObj& obj) { 
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    FindUserlistToAuthLoginWithPhoneNumberResponseBodyDataObj() = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBodyDataObj(const FindUserlistToAuthLoginWithPhoneNumberResponseBodyDataObj &) = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBodyDataObj(FindUserlistToAuthLoginWithPhoneNumberResponseBodyDataObj &&) = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBodyDataObj(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindUserlistToAuthLoginWithPhoneNumberResponseBodyDataObj() = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBodyDataObj& operator=(const FindUserlistToAuthLoginWithPhoneNumberResponseBodyDataObj &) = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBodyDataObj& operator=(FindUserlistToAuthLoginWithPhoneNumberResponseBodyDataObj &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sessionId_ != nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline FindUserlistToAuthLoginWithPhoneNumberResponseBodyDataObj& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
