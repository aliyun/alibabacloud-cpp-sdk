// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFSITESETTINGSBOTMANAGEMENTJSDETECTION_HPP_
#define ALIBABACLOUD_MODELS_WAFSITESETTINGSBOTMANAGEMENTJSDETECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafSiteSettingsBotManagementJSDetection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafSiteSettingsBotManagementJSDetection& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, WafSiteSettingsBotManagementJSDetection& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
    };
    WafSiteSettingsBotManagementJSDetection() = default ;
    WafSiteSettingsBotManagementJSDetection(const WafSiteSettingsBotManagementJSDetection &) = default ;
    WafSiteSettingsBotManagementJSDetection(WafSiteSettingsBotManagementJSDetection &&) = default ;
    WafSiteSettingsBotManagementJSDetection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafSiteSettingsBotManagementJSDetection() = default ;
    WafSiteSettingsBotManagementJSDetection& operator=(const WafSiteSettingsBotManagementJSDetection &) = default ;
    WafSiteSettingsBotManagementJSDetection& operator=(WafSiteSettingsBotManagementJSDetection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline WafSiteSettingsBotManagementJSDetection& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
