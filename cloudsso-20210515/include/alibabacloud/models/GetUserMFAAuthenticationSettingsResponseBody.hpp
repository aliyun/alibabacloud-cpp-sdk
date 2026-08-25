// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERMFAAUTHENTICATIONSETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERMFAAUTHENTICATIONSETTINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetUserMFAAuthenticationSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserMFAAuthenticationSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserMFAAuthenticationSettings, userMFAAuthenticationSettings_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserMFAAuthenticationSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserMFAAuthenticationSettings, userMFAAuthenticationSettings_);
    };
    GetUserMFAAuthenticationSettingsResponseBody() = default ;
    GetUserMFAAuthenticationSettingsResponseBody(const GetUserMFAAuthenticationSettingsResponseBody &) = default ;
    GetUserMFAAuthenticationSettingsResponseBody(GetUserMFAAuthenticationSettingsResponseBody &&) = default ;
    GetUserMFAAuthenticationSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserMFAAuthenticationSettingsResponseBody() = default ;
    GetUserMFAAuthenticationSettingsResponseBody& operator=(const GetUserMFAAuthenticationSettingsResponseBody &) = default ;
    GetUserMFAAuthenticationSettingsResponseBody& operator=(GetUserMFAAuthenticationSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userMFAAuthenticationSettings_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserMFAAuthenticationSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userMFAAuthenticationSettings Field Functions 
    bool hasUserMFAAuthenticationSettings() const { return this->userMFAAuthenticationSettings_ != nullptr;};
    void deleteUserMFAAuthenticationSettings() { this->userMFAAuthenticationSettings_ = nullptr;};
    inline string getUserMFAAuthenticationSettings() const { DARABONBA_PTR_GET_DEFAULT(userMFAAuthenticationSettings_, "") };
    inline GetUserMFAAuthenticationSettingsResponseBody& setUserMFAAuthenticationSettings(string userMFAAuthenticationSettings) { DARABONBA_PTR_SET_VALUE(userMFAAuthenticationSettings_, userMFAAuthenticationSettings) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether MFA is enabled for the user. Valid values:
    // 
    // *   Enabled
    // *   Disabled
    shared_ptr<string> userMFAAuthenticationSettings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
