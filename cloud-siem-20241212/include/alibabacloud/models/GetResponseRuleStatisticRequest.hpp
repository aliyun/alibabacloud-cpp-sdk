// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESPONSERULESTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESPONSERULESTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetResponseRuleStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResponseRuleStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, GetResponseRuleStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    GetResponseRuleStatisticRequest() = default ;
    GetResponseRuleStatisticRequest(const GetResponseRuleStatisticRequest &) = default ;
    GetResponseRuleStatisticRequest(GetResponseRuleStatisticRequest &&) = default ;
    GetResponseRuleStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResponseRuleStatisticRequest() = default ;
    GetResponseRuleStatisticRequest& operator=(const GetResponseRuleStatisticRequest &) = default ;
    GetResponseRuleStatisticRequest& operator=(GetResponseRuleStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetResponseRuleStatisticRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetResponseRuleStatisticRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline GetResponseRuleStatisticRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline GetResponseRuleStatisticRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The language of the response. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the region where your assets reside. Valid values:
    // - cn-hangzhou: the Chinese mainland and Hong Kong (China)
    // - ap-southeast-1: regions outside China
    shared_ptr<string> regionId_ {};
    // The Alibaba Cloud account ID of the member to which the administrator switches the view.
    shared_ptr<int64_t> roleFor_ {};
    // The view type. Valid values:
    // 
    // - 0: the current Alibaba Cloud account view.
    // - 1: the view of all accounts in the enterprise.
    shared_ptr<int32_t> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
