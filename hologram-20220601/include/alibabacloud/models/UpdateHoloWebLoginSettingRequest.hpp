// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHOLOWEBLOGINSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHOLOWEBLOGINSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class UpdateHoloWebLoginSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHoloWebLoginSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(allowExternalAccountsLogin, allowExternalAccountsLogin_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHoloWebLoginSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(allowExternalAccountsLogin, allowExternalAccountsLogin_);
    };
    UpdateHoloWebLoginSettingRequest() = default ;
    UpdateHoloWebLoginSettingRequest(const UpdateHoloWebLoginSettingRequest &) = default ;
    UpdateHoloWebLoginSettingRequest(UpdateHoloWebLoginSettingRequest &&) = default ;
    UpdateHoloWebLoginSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHoloWebLoginSettingRequest() = default ;
    UpdateHoloWebLoginSettingRequest& operator=(const UpdateHoloWebLoginSettingRequest &) = default ;
    UpdateHoloWebLoginSettingRequest& operator=(UpdateHoloWebLoginSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->allowExternalAccountsLogin_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateHoloWebLoginSettingRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // allowExternalAccountsLogin Field Functions 
    bool hasAllowExternalAccountsLogin() const { return this->allowExternalAccountsLogin_ != nullptr;};
    void deleteAllowExternalAccountsLogin() { this->allowExternalAccountsLogin_ = nullptr;};
    inline bool getAllowExternalAccountsLogin() const { DARABONBA_PTR_GET_DEFAULT(allowExternalAccountsLogin_, false) };
    inline UpdateHoloWebLoginSettingRequest& setAllowExternalAccountsLogin(bool allowExternalAccountsLogin) { DARABONBA_PTR_SET_VALUE(allowExternalAccountsLogin_, allowExternalAccountsLogin) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<bool> allowExternalAccountsLogin_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
