// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWFREELICENSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWFREELICENSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class RenewFreeLicenseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewFreeLicenseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_TO_JSON(LicenseItemId, licenseItemId_);
      DARABONBA_PTR_TO_JSON(ValidPeriod, validPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, RenewFreeLicenseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_FROM_JSON(LicenseItemId, licenseItemId_);
      DARABONBA_PTR_FROM_JSON(ValidPeriod, validPeriod_);
    };
    RenewFreeLicenseRequest() = default ;
    RenewFreeLicenseRequest(const RenewFreeLicenseRequest &) = default ;
    RenewFreeLicenseRequest(RenewFreeLicenseRequest &&) = default ;
    RenewFreeLicenseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewFreeLicenseRequest() = default ;
    RenewFreeLicenseRequest& operator=(const RenewFreeLicenseRequest &) = default ;
    RenewFreeLicenseRequest& operator=(RenewFreeLicenseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appItemId_ != nullptr
        && this->licenseItemId_ != nullptr && this->validPeriod_ != nullptr; };
    // appItemId Field Functions 
    bool hasAppItemId() const { return this->appItemId_ != nullptr;};
    void deleteAppItemId() { this->appItemId_ = nullptr;};
    inline string appItemId() const { DARABONBA_PTR_GET_DEFAULT(appItemId_, "") };
    inline RenewFreeLicenseRequest& setAppItemId(string appItemId) { DARABONBA_PTR_SET_VALUE(appItemId_, appItemId) };


    // licenseItemId Field Functions 
    bool hasLicenseItemId() const { return this->licenseItemId_ != nullptr;};
    void deleteLicenseItemId() { this->licenseItemId_ = nullptr;};
    inline string licenseItemId() const { DARABONBA_PTR_GET_DEFAULT(licenseItemId_, "") };
    inline RenewFreeLicenseRequest& setLicenseItemId(string licenseItemId) { DARABONBA_PTR_SET_VALUE(licenseItemId_, licenseItemId) };


    // validPeriod Field Functions 
    bool hasValidPeriod() const { return this->validPeriod_ != nullptr;};
    void deleteValidPeriod() { this->validPeriod_ = nullptr;};
    inline int32_t validPeriod() const { DARABONBA_PTR_GET_DEFAULT(validPeriod_, 0) };
    inline RenewFreeLicenseRequest& setValidPeriod(int32_t validPeriod) { DARABONBA_PTR_SET_VALUE(validPeriod_, validPeriod) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appItemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> licenseItemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> validPeriod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
