// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LICENSEAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LICENSEAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class LicenseAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LicenseAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(License, license_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, LicenseAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(License, license_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    LicenseAuthRequest() = default ;
    LicenseAuthRequest(const LicenseAuthRequest &) = default ;
    LicenseAuthRequest(LicenseAuthRequest &&) = default ;
    LicenseAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LicenseAuthRequest() = default ;
    LicenseAuthRequest& operator=(const LicenseAuthRequest &) = default ;
    LicenseAuthRequest& operator=(LicenseAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->license_ != nullptr && this->tenantId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline LicenseAuthRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // license Field Functions 
    bool hasLicense() const { return this->license_ != nullptr;};
    void deleteLicense() { this->license_ = nullptr;};
    inline string license() const { DARABONBA_PTR_GET_DEFAULT(license_, "") };
    inline LicenseAuthRequest& setLicense(string license) { DARABONBA_PTR_SET_VALUE(license_, license) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline LicenseAuthRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> license_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
