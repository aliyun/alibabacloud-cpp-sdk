// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKUPGRADEITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKUPGRADEITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class CheckUpgradeItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckUpgradeItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(UpgradeItemId, upgradeItemId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckUpgradeItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(UpgradeItemId, upgradeItemId_);
    };
    CheckUpgradeItemRequest() = default ;
    CheckUpgradeItemRequest(const CheckUpgradeItemRequest &) = default ;
    CheckUpgradeItemRequest(CheckUpgradeItemRequest &&) = default ;
    CheckUpgradeItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckUpgradeItemRequest() = default ;
    CheckUpgradeItemRequest& operator=(const CheckUpgradeItemRequest &) = default ;
    CheckUpgradeItemRequest& operator=(CheckUpgradeItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->upgradeItemId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CheckUpgradeItemRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CheckUpgradeItemRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline string getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, "") };
    inline CheckUpgradeItemRequest& setRoleFor(string roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // upgradeItemId Field Functions 
    bool hasUpgradeItemId() const { return this->upgradeItemId_ != nullptr;};
    void deleteUpgradeItemId() { this->upgradeItemId_ = nullptr;};
    inline string getUpgradeItemId() const { DARABONBA_PTR_GET_DEFAULT(upgradeItemId_, "") };
    inline CheckUpgradeItemRequest& setUpgradeItemId(string upgradeItemId) { DARABONBA_PTR_SET_VALUE(upgradeItemId_, upgradeItemId) };


  protected:
    shared_ptr<string> lang_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> roleFor_ {};
    shared_ptr<string> upgradeItemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
