// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFSITESETTINGSCLIENTIPIDENTIFIER_HPP_
#define ALIBABACLOUD_MODELS_WAFSITESETTINGSCLIENTIPIDENTIFIER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafSiteSettingsClientIpIdentifier : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafSiteSettingsClientIpIdentifier& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, WafSiteSettingsClientIpIdentifier& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
    };
    WafSiteSettingsClientIpIdentifier() = default ;
    WafSiteSettingsClientIpIdentifier(const WafSiteSettingsClientIpIdentifier &) = default ;
    WafSiteSettingsClientIpIdentifier(WafSiteSettingsClientIpIdentifier &&) = default ;
    WafSiteSettingsClientIpIdentifier(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafSiteSettingsClientIpIdentifier() = default ;
    WafSiteSettingsClientIpIdentifier& operator=(const WafSiteSettingsClientIpIdentifier &) = default ;
    WafSiteSettingsClientIpIdentifier& operator=(WafSiteSettingsClientIpIdentifier &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->mode_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const vector<string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, vector<string>) };
    inline vector<string> headers() { DARABONBA_PTR_GET(headers_, vector<string>) };
    inline WafSiteSettingsClientIpIdentifier& setHeaders(const vector<string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline WafSiteSettingsClientIpIdentifier& setHeaders(vector<string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline WafSiteSettingsClientIpIdentifier& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    std::shared_ptr<vector<string>> headers_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
