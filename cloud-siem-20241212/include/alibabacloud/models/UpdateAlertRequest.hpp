// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateAlertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertStatus, alertStatus_);
      DARABONBA_PTR_TO_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertStatus, alertStatus_);
      DARABONBA_PTR_FROM_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    UpdateAlertRequest() = default ;
    UpdateAlertRequest(const UpdateAlertRequest &) = default ;
    UpdateAlertRequest(UpdateAlertRequest &&) = default ;
    UpdateAlertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlertRequest() = default ;
    UpdateAlertRequest& operator=(const UpdateAlertRequest &) = default ;
    UpdateAlertRequest& operator=(UpdateAlertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertStatus_ == nullptr
        && this->alertUuid_ == nullptr && this->lang_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr; };
    // alertStatus Field Functions 
    bool hasAlertStatus() const { return this->alertStatus_ != nullptr;};
    void deleteAlertStatus() { this->alertStatus_ = nullptr;};
    inline string getAlertStatus() const { DARABONBA_PTR_GET_DEFAULT(alertStatus_, "") };
    inline UpdateAlertRequest& setAlertStatus(string alertStatus) { DARABONBA_PTR_SET_VALUE(alertStatus_, alertStatus) };


    // alertUuid Field Functions 
    bool hasAlertUuid() const { return this->alertUuid_ != nullptr;};
    void deleteAlertUuid() { this->alertUuid_ = nullptr;};
    inline string getAlertUuid() const { DARABONBA_PTR_GET_DEFAULT(alertUuid_, "") };
    inline UpdateAlertRequest& setAlertUuid(string alertUuid) { DARABONBA_PTR_SET_VALUE(alertUuid_, alertUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateAlertRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateAlertRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateAlertRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int64_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0L) };
    inline UpdateAlertRequest& setRoleType(int64_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The alert status.
    shared_ptr<string> alertStatus_ {};
    // The ID of the alert associated with the event.
    shared_ptr<string> alertUuid_ {};
    // The language of the response message. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The region where the data management center for threat analysis is located. You must select the region of the management center based on the region where your assets are located. Valid values:
    // - cn-hangzhou: Select this value if your assets are located in the Chinese mainland and Hong Kong (China).
    // - ap-southeast-1: Select this value if your assets are located outside China.
    shared_ptr<string> regionId_ {};
    // The ID of the user whose perspective the administrator switches to.
    shared_ptr<int64_t> roleFor_ {};
    // The view type. Valid values:
    // - 0: the view of the current Alibaba Cloud account.
    // - 1: the view of all accounts in the enterprise.
    shared_ptr<int64_t> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
