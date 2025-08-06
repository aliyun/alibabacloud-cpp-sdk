// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLICENSERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDLICENSERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddLicenseResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLicenseResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(LicenseId, licenseId_);
      DARABONBA_PTR_TO_JSON(SdkType, sdkType_);
    };
    friend void from_json(const Darabonba::Json& j, AddLicenseResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(LicenseId, licenseId_);
      DARABONBA_PTR_FROM_JSON(SdkType, sdkType_);
    };
    AddLicenseResponseBodyData() = default ;
    AddLicenseResponseBodyData(const AddLicenseResponseBodyData &) = default ;
    AddLicenseResponseBodyData(AddLicenseResponseBodyData &&) = default ;
    AddLicenseResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLicenseResponseBodyData() = default ;
    AddLicenseResponseBodyData& operator=(const AddLicenseResponseBodyData &) = default ;
    AddLicenseResponseBodyData& operator=(AddLicenseResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appItemId_ != nullptr
        && this->businessType_ != nullptr && this->itemId_ != nullptr && this->licenseId_ != nullptr && this->sdkType_ != nullptr; };
    // appItemId Field Functions 
    bool hasAppItemId() const { return this->appItemId_ != nullptr;};
    void deleteAppItemId() { this->appItemId_ = nullptr;};
    inline string appItemId() const { DARABONBA_PTR_GET_DEFAULT(appItemId_, "") };
    inline AddLicenseResponseBodyData& setAppItemId(string appItemId) { DARABONBA_PTR_SET_VALUE(appItemId_, appItemId) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline AddLicenseResponseBodyData& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline AddLicenseResponseBodyData& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // licenseId Field Functions 
    bool hasLicenseId() const { return this->licenseId_ != nullptr;};
    void deleteLicenseId() { this->licenseId_ = nullptr;};
    inline int64_t licenseId() const { DARABONBA_PTR_GET_DEFAULT(licenseId_, 0L) };
    inline AddLicenseResponseBodyData& setLicenseId(int64_t licenseId) { DARABONBA_PTR_SET_VALUE(licenseId_, licenseId) };


    // sdkType Field Functions 
    bool hasSdkType() const { return this->sdkType_ != nullptr;};
    void deleteSdkType() { this->sdkType_ = nullptr;};
    inline string sdkType() const { DARABONBA_PTR_GET_DEFAULT(sdkType_, "") };
    inline AddLicenseResponseBodyData& setSdkType(string sdkType) { DARABONBA_PTR_SET_VALUE(sdkType_, sdkType) };


  protected:
    std::shared_ptr<string> appItemId_ = nullptr;
    std::shared_ptr<string> businessType_ = nullptr;
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<int64_t> licenseId_ = nullptr;
    std::shared_ptr<string> sdkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
