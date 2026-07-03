// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEACCESSFORCLOUDSIEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEACCESSFORCLOUDSIEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class EnableAccessForCloudSiemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableAccessForCloudSiemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSubmit, autoSubmit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, EnableAccessForCloudSiemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSubmit, autoSubmit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    EnableAccessForCloudSiemRequest() = default ;
    EnableAccessForCloudSiemRequest(const EnableAccessForCloudSiemRequest &) = default ;
    EnableAccessForCloudSiemRequest(EnableAccessForCloudSiemRequest &&) = default ;
    EnableAccessForCloudSiemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableAccessForCloudSiemRequest() = default ;
    EnableAccessForCloudSiemRequest& operator=(const EnableAccessForCloudSiemRequest &) = default ;
    EnableAccessForCloudSiemRequest& operator=(EnableAccessForCloudSiemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoSubmit_ == nullptr
        && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr; };
    // autoSubmit Field Functions 
    bool hasAutoSubmit() const { return this->autoSubmit_ != nullptr;};
    void deleteAutoSubmit() { this->autoSubmit_ = nullptr;};
    inline int32_t getAutoSubmit() const { DARABONBA_PTR_GET_DEFAULT(autoSubmit_, 0) };
    inline EnableAccessForCloudSiemRequest& setAutoSubmit(int32_t autoSubmit) { DARABONBA_PTR_SET_VALUE(autoSubmit_, autoSubmit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableAccessForCloudSiemRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline EnableAccessForCloudSiemRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline EnableAccessForCloudSiemRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // Specifies whether to automatically add alert logs from Security Center, Web Application Firewall (WAF), and Cloud Firewall. By default, alert logs are automatically added.
    shared_ptr<int32_t> autoSubmit_ {};
    // The region of the Data Management center for Threat Analysis. Select the region based on where your assets are located. Valid values:
    // 
    // - cn-hangzhou: Your assets are in the Chinese mainland or Hong Kong (China).
    // 
    // - ap-southeast-1: Your assets are in regions outside China.
    shared_ptr<string> regionId_ {};
    // The user ID of a member. An administrator can use this parameter to switch to the perspective of the specified member.
    shared_ptr<int64_t> roleFor_ {};
    // The type of the view.
    // 
    // - 0: The view of the current Alibaba Cloud account.
    // 
    // - 1: The view of all member accounts.
    shared_ptr<int32_t> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
