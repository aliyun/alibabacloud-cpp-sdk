// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetUserConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    GetUserConfigRequest() = default ;
    GetUserConfigRequest(const GetUserConfigRequest &) = default ;
    GetUserConfigRequest(GetUserConfigRequest &&) = default ;
    GetUserConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserConfigRequest() = default ;
    GetUserConfigRequest& operator=(const GetUserConfigRequest &) = default ;
    GetUserConfigRequest& operator=(GetUserConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetUserConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetUserConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline string getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, "") };
    inline GetUserConfigRequest& setRoleFor(string roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // The language of the response. Valid values:
    // 
    // - **zh** (default): Chinese.
    // 
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The region of the Data Management center for threat analysis. Select a region for the Management Hub based on the region where your assets are located. Valid values:
    // 
    // - cn-hangzhou: Assets in the Chinese mainland.
    // 
    // - ap-southeast-1: Assets outside China.
    shared_ptr<string> regionId_ {};
    // The user ID of a member. An administrator can use this parameter to switch to the perspective of the specified member.
    shared_ptr<string> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
