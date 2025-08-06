// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELFREELICENSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELFREELICENSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DelFreeLicenseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DelFreeLicenseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_TO_JSON(LicenseItemId, licenseItemId_);
    };
    friend void from_json(const Darabonba::Json& j, DelFreeLicenseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_FROM_JSON(LicenseItemId, licenseItemId_);
    };
    DelFreeLicenseRequest() = default ;
    DelFreeLicenseRequest(const DelFreeLicenseRequest &) = default ;
    DelFreeLicenseRequest(DelFreeLicenseRequest &&) = default ;
    DelFreeLicenseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DelFreeLicenseRequest() = default ;
    DelFreeLicenseRequest& operator=(const DelFreeLicenseRequest &) = default ;
    DelFreeLicenseRequest& operator=(DelFreeLicenseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appItemId_ != nullptr
        && this->licenseItemId_ != nullptr; };
    // appItemId Field Functions 
    bool hasAppItemId() const { return this->appItemId_ != nullptr;};
    void deleteAppItemId() { this->appItemId_ = nullptr;};
    inline string appItemId() const { DARABONBA_PTR_GET_DEFAULT(appItemId_, "") };
    inline DelFreeLicenseRequest& setAppItemId(string appItemId) { DARABONBA_PTR_SET_VALUE(appItemId_, appItemId) };


    // licenseItemId Field Functions 
    bool hasLicenseItemId() const { return this->licenseItemId_ != nullptr;};
    void deleteLicenseItemId() { this->licenseItemId_ = nullptr;};
    inline string licenseItemId() const { DARABONBA_PTR_GET_DEFAULT(licenseItemId_, "") };
    inline DelFreeLicenseRequest& setLicenseItemId(string licenseItemId) { DARABONBA_PTR_SET_VALUE(licenseItemId_, licenseItemId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appItemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> licenseItemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
