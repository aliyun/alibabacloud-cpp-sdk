// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERSSOSETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERSSOSETTINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserSsoSettingsResponseBodyUserSsoSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetUserSsoSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserSsoSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserSsoSettings, userSsoSettings_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserSsoSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserSsoSettings, userSsoSettings_);
    };
    GetUserSsoSettingsResponseBody() = default ;
    GetUserSsoSettingsResponseBody(const GetUserSsoSettingsResponseBody &) = default ;
    GetUserSsoSettingsResponseBody(GetUserSsoSettingsResponseBody &&) = default ;
    GetUserSsoSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserSsoSettingsResponseBody() = default ;
    GetUserSsoSettingsResponseBody& operator=(const GetUserSsoSettingsResponseBody &) = default ;
    GetUserSsoSettingsResponseBody& operator=(GetUserSsoSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->userSsoSettings_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserSsoSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userSsoSettings Field Functions 
    bool hasUserSsoSettings() const { return this->userSsoSettings_ != nullptr;};
    void deleteUserSsoSettings() { this->userSsoSettings_ = nullptr;};
    inline const GetUserSsoSettingsResponseBodyUserSsoSettings & userSsoSettings() const { DARABONBA_PTR_GET_CONST(userSsoSettings_, GetUserSsoSettingsResponseBodyUserSsoSettings) };
    inline GetUserSsoSettingsResponseBodyUserSsoSettings userSsoSettings() { DARABONBA_PTR_GET(userSsoSettings_, GetUserSsoSettingsResponseBodyUserSsoSettings) };
    inline GetUserSsoSettingsResponseBody& setUserSsoSettings(const GetUserSsoSettingsResponseBodyUserSsoSettings & userSsoSettings) { DARABONBA_PTR_SET_VALUE(userSsoSettings_, userSsoSettings) };
    inline GetUserSsoSettingsResponseBody& setUserSsoSettings(GetUserSsoSettingsResponseBodyUserSsoSettings && userSsoSettings) { DARABONBA_PTR_SET_RVALUE(userSsoSettings_, userSsoSettings) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The configurations of user-based SSO.
    std::shared_ptr<GetUserSsoSettingsResponseBodyUserSsoSettings> userSsoSettings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
