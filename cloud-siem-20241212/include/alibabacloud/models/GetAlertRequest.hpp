// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetAlertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    GetAlertRequest() = default ;
    GetAlertRequest(const GetAlertRequest &) = default ;
    GetAlertRequest(GetAlertRequest &&) = default ;
    GetAlertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertRequest() = default ;
    GetAlertRequest& operator=(const GetAlertRequest &) = default ;
    GetAlertRequest& operator=(GetAlertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertUuid_ == nullptr
        && this->lang_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr; };
    // alertUuid Field Functions 
    bool hasAlertUuid() const { return this->alertUuid_ != nullptr;};
    void deleteAlertUuid() { this->alertUuid_ = nullptr;};
    inline string getAlertUuid() const { DARABONBA_PTR_GET_DEFAULT(alertUuid_, "") };
    inline GetAlertRequest& setAlertUuid(string alertUuid) { DARABONBA_PTR_SET_VALUE(alertUuid_, alertUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetAlertRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAlertRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline GetAlertRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int64_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0L) };
    inline GetAlertRequest& setRoleType(int64_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The ID of the alert that is associated with the incident.
    shared_ptr<string> alertUuid_ {};
    // The language of the response. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The region in which the threat detection and response data management center resides. Specify this parameter based on the region where your assets reside. Valid values:
    // - cn-hangzhou: Your assets reside in the Chinese mainland.
    // - ap-southeast-1: Your assets reside outside China.
    shared_ptr<string> regionId_ {};
    // The ID of the member to which the administrator switches the view.
    shared_ptr<int64_t> roleFor_ {};
    // The view type.
    // 
    // - 0: the view of the current Alibaba Cloud account.
    // - 1: the view of all accounts in the enterprise.
    shared_ptr<int64_t> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
