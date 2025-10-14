// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFSITESETTINGSBOTMANAGEMENTLIKELYBOTS_HPP_
#define ALIBABACLOUD_MODELS_WAFSITESETTINGSBOTMANAGEMENTLIKELYBOTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafSiteSettingsBotManagementLikelyBots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafSiteSettingsBotManagementLikelyBots& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, WafSiteSettingsBotManagementLikelyBots& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    WafSiteSettingsBotManagementLikelyBots() = default ;
    WafSiteSettingsBotManagementLikelyBots(const WafSiteSettingsBotManagementLikelyBots &) = default ;
    WafSiteSettingsBotManagementLikelyBots(WafSiteSettingsBotManagementLikelyBots &&) = default ;
    WafSiteSettingsBotManagementLikelyBots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafSiteSettingsBotManagementLikelyBots() = default ;
    WafSiteSettingsBotManagementLikelyBots& operator=(const WafSiteSettingsBotManagementLikelyBots &) = default ;
    WafSiteSettingsBotManagementLikelyBots& operator=(WafSiteSettingsBotManagementLikelyBots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->id_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline WafSiteSettingsBotManagementLikelyBots& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline WafSiteSettingsBotManagementLikelyBots& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
