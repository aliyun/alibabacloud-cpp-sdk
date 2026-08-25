// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINPREFERENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINPREFERENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetLoginPreferenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginPreferenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoginPreference, loginPreference_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginPreferenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginPreference, loginPreference_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLoginPreferenceResponseBody() = default ;
    GetLoginPreferenceResponseBody(const GetLoginPreferenceResponseBody &) = default ;
    GetLoginPreferenceResponseBody(GetLoginPreferenceResponseBody &&) = default ;
    GetLoginPreferenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginPreferenceResponseBody() = default ;
    GetLoginPreferenceResponseBody& operator=(const GetLoginPreferenceResponseBody &) = default ;
    GetLoginPreferenceResponseBody& operator=(GetLoginPreferenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoginPreference : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoginPreference& obj) { 
        DARABONBA_PTR_TO_JSON(AllowUserToGetCredentials, allowUserToGetCredentials_);
        DARABONBA_PTR_TO_JSON(LoginNetworkMasks, loginNetworkMasks_);
      };
      friend void from_json(const Darabonba::Json& j, LoginPreference& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowUserToGetCredentials, allowUserToGetCredentials_);
        DARABONBA_PTR_FROM_JSON(LoginNetworkMasks, loginNetworkMasks_);
      };
      LoginPreference() = default ;
      LoginPreference(const LoginPreference &) = default ;
      LoginPreference(LoginPreference &&) = default ;
      LoginPreference(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoginPreference() = default ;
      LoginPreference& operator=(const LoginPreference &) = default ;
      LoginPreference& operator=(LoginPreference &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowUserToGetCredentials_ == nullptr
        && this->loginNetworkMasks_ == nullptr; };
      // allowUserToGetCredentials Field Functions 
      bool hasAllowUserToGetCredentials() const { return this->allowUserToGetCredentials_ != nullptr;};
      void deleteAllowUserToGetCredentials() { this->allowUserToGetCredentials_ = nullptr;};
      inline bool getAllowUserToGetCredentials() const { DARABONBA_PTR_GET_DEFAULT(allowUserToGetCredentials_, false) };
      inline LoginPreference& setAllowUserToGetCredentials(bool allowUserToGetCredentials) { DARABONBA_PTR_SET_VALUE(allowUserToGetCredentials_, allowUserToGetCredentials) };


      // loginNetworkMasks Field Functions 
      bool hasLoginNetworkMasks() const { return this->loginNetworkMasks_ != nullptr;};
      void deleteLoginNetworkMasks() { this->loginNetworkMasks_ = nullptr;};
      inline string getLoginNetworkMasks() const { DARABONBA_PTR_GET_DEFAULT(loginNetworkMasks_, "") };
      inline LoginPreference& setLoginNetworkMasks(string loginNetworkMasks) { DARABONBA_PTR_SET_VALUE(loginNetworkMasks_, loginNetworkMasks) };


    protected:
      // Indicates whether a user can obtain the application access credential after logon to the portal. Valid values:
      // 
      // *   True
      // *   False (default)
      shared_ptr<bool> allowUserToGetCredentials_ {};
      // The IP address whitelist. CloudSSO users can log on to the CloudSSO user portal only by using the IP addresses in the whitelist.
      // 
      // The IP address whitelist takes effect only on CloudSSO users who want to log on to the CloudSSO user portal by using the username-password logon or single sign-on (SSO) method. The IP address whitelist does not take effect on CloudSSO users who access accounts in a resource directory from the CloudSSO user portal.
      // 
      // If the return value of this parameter is empty, no IP address whitelists are configured.
      shared_ptr<string> loginNetworkMasks_ {};
    };

    virtual bool empty() const override { return this->loginPreference_ == nullptr
        && this->requestId_ == nullptr; };
    // loginPreference Field Functions 
    bool hasLoginPreference() const { return this->loginPreference_ != nullptr;};
    void deleteLoginPreference() { this->loginPreference_ = nullptr;};
    inline const GetLoginPreferenceResponseBody::LoginPreference & getLoginPreference() const { DARABONBA_PTR_GET_CONST(loginPreference_, GetLoginPreferenceResponseBody::LoginPreference) };
    inline GetLoginPreferenceResponseBody::LoginPreference getLoginPreference() { DARABONBA_PTR_GET(loginPreference_, GetLoginPreferenceResponseBody::LoginPreference) };
    inline GetLoginPreferenceResponseBody& setLoginPreference(const GetLoginPreferenceResponseBody::LoginPreference & loginPreference) { DARABONBA_PTR_SET_VALUE(loginPreference_, loginPreference) };
    inline GetLoginPreferenceResponseBody& setLoginPreference(GetLoginPreferenceResponseBody::LoginPreference && loginPreference) { DARABONBA_PTR_SET_RVALUE(loginPreference_, loginPreference) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLoginPreferenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The logon preference.
    shared_ptr<GetLoginPreferenceResponseBody::LoginPreference> loginPreference_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
