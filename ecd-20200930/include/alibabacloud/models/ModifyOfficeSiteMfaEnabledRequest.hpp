// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYOFFICESITEMFAENABLEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYOFFICESITEMFAENABLEDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyOfficeSiteMfaEnabledRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyOfficeSiteMfaEnabledRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MfaEnabled, mfaEnabled_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyOfficeSiteMfaEnabledRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MfaEnabled, mfaEnabled_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyOfficeSiteMfaEnabledRequest() = default ;
    ModifyOfficeSiteMfaEnabledRequest(const ModifyOfficeSiteMfaEnabledRequest &) = default ;
    ModifyOfficeSiteMfaEnabledRequest(ModifyOfficeSiteMfaEnabledRequest &&) = default ;
    ModifyOfficeSiteMfaEnabledRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyOfficeSiteMfaEnabledRequest() = default ;
    ModifyOfficeSiteMfaEnabledRequest& operator=(const ModifyOfficeSiteMfaEnabledRequest &) = default ;
    ModifyOfficeSiteMfaEnabledRequest& operator=(ModifyOfficeSiteMfaEnabledRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mfaEnabled_ == nullptr
        && this->officeSiteId_ == nullptr && this->regionId_ == nullptr; };
    // mfaEnabled Field Functions 
    bool hasMfaEnabled() const { return this->mfaEnabled_ != nullptr;};
    void deleteMfaEnabled() { this->mfaEnabled_ = nullptr;};
    inline bool getMfaEnabled() const { DARABONBA_PTR_GET_DEFAULT(mfaEnabled_, false) };
    inline ModifyOfficeSiteMfaEnabledRequest& setMfaEnabled(bool mfaEnabled) { DARABONBA_PTR_SET_VALUE(mfaEnabled_, mfaEnabled) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ModifyOfficeSiteMfaEnabledRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyOfficeSiteMfaEnabledRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to enable MFA.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // This parameter is required.
    shared_ptr<bool> mfaEnabled_ {};
    // The office network ID.
    // 
    // This parameter is required.
    shared_ptr<string> officeSiteId_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
