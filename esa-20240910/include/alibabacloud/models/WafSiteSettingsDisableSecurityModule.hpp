// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFSITESETTINGSDISABLESECURITYMODULE_HPP_
#define ALIBABACLOUD_MODELS_WAFSITESETTINGSDISABLESECURITYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafSiteSettingsDisableSecurityModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafSiteSettingsDisableSecurityModule& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, WafSiteSettingsDisableSecurityModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    WafSiteSettingsDisableSecurityModule() = default ;
    WafSiteSettingsDisableSecurityModule(const WafSiteSettingsDisableSecurityModule &) = default ;
    WafSiteSettingsDisableSecurityModule(WafSiteSettingsDisableSecurityModule &&) = default ;
    WafSiteSettingsDisableSecurityModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafSiteSettingsDisableSecurityModule() = default ;
    WafSiteSettingsDisableSecurityModule& operator=(const WafSiteSettingsDisableSecurityModule &) = default ;
    WafSiteSettingsDisableSecurityModule& operator=(WafSiteSettingsDisableSecurityModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline WafSiteSettingsDisableSecurityModule& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
