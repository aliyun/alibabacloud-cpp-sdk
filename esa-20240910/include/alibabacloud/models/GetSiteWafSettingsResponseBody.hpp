// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSITEWAFSETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSITEWAFSETTINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafSiteSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetSiteWafSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSiteWafSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
    };
    friend void from_json(const Darabonba::Json& j, GetSiteWafSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
    };
    GetSiteWafSettingsResponseBody() = default ;
    GetSiteWafSettingsResponseBody(const GetSiteWafSettingsResponseBody &) = default ;
    GetSiteWafSettingsResponseBody(GetSiteWafSettingsResponseBody &&) = default ;
    GetSiteWafSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSiteWafSettingsResponseBody() = default ;
    GetSiteWafSettingsResponseBody& operator=(const GetSiteWafSettingsResponseBody &) = default ;
    GetSiteWafSettingsResponseBody& operator=(GetSiteWafSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->settings_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSiteWafSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const WafSiteSettings & settings() const { DARABONBA_PTR_GET_CONST(settings_, WafSiteSettings) };
    inline WafSiteSettings settings() { DARABONBA_PTR_GET(settings_, WafSiteSettings) };
    inline GetSiteWafSettingsResponseBody& setSettings(const WafSiteSettings & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline GetSiteWafSettingsResponseBody& setSettings(WafSiteSettings && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Details of site WAF configuration.
    std::shared_ptr<WafSiteSettings> settings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
