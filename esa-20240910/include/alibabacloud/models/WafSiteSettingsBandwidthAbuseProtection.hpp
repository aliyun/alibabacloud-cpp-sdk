// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFSITESETTINGSBANDWIDTHABUSEPROTECTION_HPP_
#define ALIBABACLOUD_MODELS_WAFSITESETTINGSBANDWIDTHABUSEPROTECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafSiteSettingsBandwidthAbuseProtection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafSiteSettingsBandwidthAbuseProtection& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, WafSiteSettingsBandwidthAbuseProtection& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    WafSiteSettingsBandwidthAbuseProtection() = default ;
    WafSiteSettingsBandwidthAbuseProtection(const WafSiteSettingsBandwidthAbuseProtection &) = default ;
    WafSiteSettingsBandwidthAbuseProtection(WafSiteSettingsBandwidthAbuseProtection &&) = default ;
    WafSiteSettingsBandwidthAbuseProtection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafSiteSettingsBandwidthAbuseProtection() = default ;
    WafSiteSettingsBandwidthAbuseProtection& operator=(const WafSiteSettingsBandwidthAbuseProtection &) = default ;
    WafSiteSettingsBandwidthAbuseProtection& operator=(WafSiteSettingsBandwidthAbuseProtection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->id_ != nullptr && this->status_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline WafSiteSettingsBandwidthAbuseProtection& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline WafSiteSettingsBandwidthAbuseProtection& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline WafSiteSettingsBandwidthAbuseProtection& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
