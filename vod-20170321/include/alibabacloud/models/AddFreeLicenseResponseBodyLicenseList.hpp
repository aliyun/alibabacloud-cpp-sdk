// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFREELICENSERESPONSEBODYLICENSELIST_HPP_
#define ALIBABACLOUD_MODELS_ADDFREELICENSERESPONSEBODYLICENSELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddFreeLicenseResponseBodyLicenseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFreeLicenseResponseBodyLicenseList& obj) { 
      DARABONBA_PTR_TO_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(LicenseId, licenseId_);
      DARABONBA_PTR_TO_JSON(LicenseItemId, licenseItemId_);
      DARABONBA_PTR_TO_JSON(SdkType, sdkType_);
    };
    friend void from_json(const Darabonba::Json& j, AddFreeLicenseResponseBodyLicenseList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(LicenseId, licenseId_);
      DARABONBA_PTR_FROM_JSON(LicenseItemId, licenseItemId_);
      DARABONBA_PTR_FROM_JSON(SdkType, sdkType_);
    };
    AddFreeLicenseResponseBodyLicenseList() = default ;
    AddFreeLicenseResponseBodyLicenseList(const AddFreeLicenseResponseBodyLicenseList &) = default ;
    AddFreeLicenseResponseBodyLicenseList(AddFreeLicenseResponseBodyLicenseList &&) = default ;
    AddFreeLicenseResponseBodyLicenseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFreeLicenseResponseBodyLicenseList() = default ;
    AddFreeLicenseResponseBodyLicenseList& operator=(const AddFreeLicenseResponseBodyLicenseList &) = default ;
    AddFreeLicenseResponseBodyLicenseList& operator=(AddFreeLicenseResponseBodyLicenseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appItemId_ != nullptr
        && this->businessType_ != nullptr && this->licenseId_ != nullptr && this->licenseItemId_ != nullptr && this->sdkType_ != nullptr; };
    // appItemId Field Functions 
    bool hasAppItemId() const { return this->appItemId_ != nullptr;};
    void deleteAppItemId() { this->appItemId_ = nullptr;};
    inline string appItemId() const { DARABONBA_PTR_GET_DEFAULT(appItemId_, "") };
    inline AddFreeLicenseResponseBodyLicenseList& setAppItemId(string appItemId) { DARABONBA_PTR_SET_VALUE(appItemId_, appItemId) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline AddFreeLicenseResponseBodyLicenseList& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // licenseId Field Functions 
    bool hasLicenseId() const { return this->licenseId_ != nullptr;};
    void deleteLicenseId() { this->licenseId_ = nullptr;};
    inline int64_t licenseId() const { DARABONBA_PTR_GET_DEFAULT(licenseId_, 0L) };
    inline AddFreeLicenseResponseBodyLicenseList& setLicenseId(int64_t licenseId) { DARABONBA_PTR_SET_VALUE(licenseId_, licenseId) };


    // licenseItemId Field Functions 
    bool hasLicenseItemId() const { return this->licenseItemId_ != nullptr;};
    void deleteLicenseItemId() { this->licenseItemId_ = nullptr;};
    inline string licenseItemId() const { DARABONBA_PTR_GET_DEFAULT(licenseItemId_, "") };
    inline AddFreeLicenseResponseBodyLicenseList& setLicenseItemId(string licenseItemId) { DARABONBA_PTR_SET_VALUE(licenseItemId_, licenseItemId) };


    // sdkType Field Functions 
    bool hasSdkType() const { return this->sdkType_ != nullptr;};
    void deleteSdkType() { this->sdkType_ = nullptr;};
    inline string sdkType() const { DARABONBA_PTR_GET_DEFAULT(sdkType_, "") };
    inline AddFreeLicenseResponseBodyLicenseList& setSdkType(string sdkType) { DARABONBA_PTR_SET_VALUE(sdkType_, sdkType) };


  protected:
    std::shared_ptr<string> appItemId_ = nullptr;
    std::shared_ptr<string> businessType_ = nullptr;
    std::shared_ptr<int64_t> licenseId_ = nullptr;
    std::shared_ptr<string> licenseItemId_ = nullptr;
    std::shared_ptr<string> sdkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
