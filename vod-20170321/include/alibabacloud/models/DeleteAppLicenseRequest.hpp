// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPLICENSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPLICENSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteAppLicenseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppLicenseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_TO_JSON(LicenseItemIds, licenseItemIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppLicenseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_FROM_JSON(LicenseItemIds, licenseItemIds_);
    };
    DeleteAppLicenseRequest() = default ;
    DeleteAppLicenseRequest(const DeleteAppLicenseRequest &) = default ;
    DeleteAppLicenseRequest(DeleteAppLicenseRequest &&) = default ;
    DeleteAppLicenseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppLicenseRequest() = default ;
    DeleteAppLicenseRequest& operator=(const DeleteAppLicenseRequest &) = default ;
    DeleteAppLicenseRequest& operator=(DeleteAppLicenseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appItemId_ != nullptr
        && this->licenseItemIds_ != nullptr; };
    // appItemId Field Functions 
    bool hasAppItemId() const { return this->appItemId_ != nullptr;};
    void deleteAppItemId() { this->appItemId_ = nullptr;};
    inline string appItemId() const { DARABONBA_PTR_GET_DEFAULT(appItemId_, "") };
    inline DeleteAppLicenseRequest& setAppItemId(string appItemId) { DARABONBA_PTR_SET_VALUE(appItemId_, appItemId) };


    // licenseItemIds Field Functions 
    bool hasLicenseItemIds() const { return this->licenseItemIds_ != nullptr;};
    void deleteLicenseItemIds() { this->licenseItemIds_ = nullptr;};
    inline string licenseItemIds() const { DARABONBA_PTR_GET_DEFAULT(licenseItemIds_, "") };
    inline DeleteAppLicenseRequest& setLicenseItemIds(string licenseItemIds) { DARABONBA_PTR_SET_VALUE(licenseItemIds_, licenseItemIds) };


  protected:
    std::shared_ptr<string> appItemId_ = nullptr;
    std::shared_ptr<string> licenseItemIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
