// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACPORTALSMSPHONEWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNACPORTALSMSPHONEWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetNacPortalSmsPhoneWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacPortalSmsPhoneWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Phones, phones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacPortalSmsPhoneWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Phones, phones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNacPortalSmsPhoneWhitelistResponseBody() = default ;
    GetNacPortalSmsPhoneWhitelistResponseBody(const GetNacPortalSmsPhoneWhitelistResponseBody &) = default ;
    GetNacPortalSmsPhoneWhitelistResponseBody(GetNacPortalSmsPhoneWhitelistResponseBody &&) = default ;
    GetNacPortalSmsPhoneWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacPortalSmsPhoneWhitelistResponseBody() = default ;
    GetNacPortalSmsPhoneWhitelistResponseBody& operator=(const GetNacPortalSmsPhoneWhitelistResponseBody &) = default ;
    GetNacPortalSmsPhoneWhitelistResponseBody& operator=(GetNacPortalSmsPhoneWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->phones_ == nullptr
        && this->requestId_ == nullptr; };
    // phones Field Functions 
    bool hasPhones() const { return this->phones_ != nullptr;};
    void deletePhones() { this->phones_ = nullptr;};
    inline const vector<string> & getPhones() const { DARABONBA_PTR_GET_CONST(phones_, vector<string>) };
    inline vector<string> getPhones() { DARABONBA_PTR_GET(phones_, vector<string>) };
    inline GetNacPortalSmsPhoneWhitelistResponseBody& setPhones(const vector<string> & phones) { DARABONBA_PTR_SET_VALUE(phones_, phones) };
    inline GetNacPortalSmsPhoneWhitelistResponseBody& setPhones(vector<string> && phones) { DARABONBA_PTR_SET_RVALUE(phones_, phones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNacPortalSmsPhoneWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of phone numbers.
    shared_ptr<vector<string>> phones_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
