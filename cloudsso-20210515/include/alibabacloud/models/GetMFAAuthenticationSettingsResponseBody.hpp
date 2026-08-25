// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMFAAUTHENTICATIONSETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMFAAUTHENTICATIONSETTINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetMFAAuthenticationSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMFAAuthenticationSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MFAAuthenticationAdvanceSettings, MFAAuthenticationAdvanceSettings_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMFAAuthenticationSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MFAAuthenticationAdvanceSettings, MFAAuthenticationAdvanceSettings_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMFAAuthenticationSettingsResponseBody() = default ;
    GetMFAAuthenticationSettingsResponseBody(const GetMFAAuthenticationSettingsResponseBody &) = default ;
    GetMFAAuthenticationSettingsResponseBody(GetMFAAuthenticationSettingsResponseBody &&) = default ;
    GetMFAAuthenticationSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMFAAuthenticationSettingsResponseBody() = default ;
    GetMFAAuthenticationSettingsResponseBody& operator=(const GetMFAAuthenticationSettingsResponseBody &) = default ;
    GetMFAAuthenticationSettingsResponseBody& operator=(GetMFAAuthenticationSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->MFAAuthenticationAdvanceSettings_ == nullptr
        && this->requestId_ == nullptr; };
    // MFAAuthenticationAdvanceSettings Field Functions 
    bool hasMFAAuthenticationAdvanceSettings() const { return this->MFAAuthenticationAdvanceSettings_ != nullptr;};
    void deleteMFAAuthenticationAdvanceSettings() { this->MFAAuthenticationAdvanceSettings_ = nullptr;};
    inline string getMFAAuthenticationAdvanceSettings() const { DARABONBA_PTR_GET_DEFAULT(MFAAuthenticationAdvanceSettings_, "") };
    inline GetMFAAuthenticationSettingsResponseBody& setMFAAuthenticationAdvanceSettings(string MFAAuthenticationAdvanceSettings) { DARABONBA_PTR_SET_VALUE(MFAAuthenticationAdvanceSettings_, MFAAuthenticationAdvanceSettings) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMFAAuthenticationSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether MFA is enabled for all users. Valid values:
    // 
    // *   Enabled: MFA is enabled for all users.
    // *   Byuser: User-specific settings are applied.
    // *   Disabled: MFA is disabled for all users.
    shared_ptr<string> MFAAuthenticationAdvanceSettings_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
