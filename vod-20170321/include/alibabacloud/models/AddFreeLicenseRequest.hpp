// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFREELICENSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFREELICENSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddFreeLicenseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFreeLicenseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppPlatforms, appPlatforms_);
      DARABONBA_PTR_TO_JSON(SdkModels, sdkModels_);
    };
    friend void from_json(const Darabonba::Json& j, AddFreeLicenseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppPlatforms, appPlatforms_);
      DARABONBA_PTR_FROM_JSON(SdkModels, sdkModels_);
    };
    AddFreeLicenseRequest() = default ;
    AddFreeLicenseRequest(const AddFreeLicenseRequest &) = default ;
    AddFreeLicenseRequest(AddFreeLicenseRequest &&) = default ;
    AddFreeLicenseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFreeLicenseRequest() = default ;
    AddFreeLicenseRequest& operator=(const AddFreeLicenseRequest &) = default ;
    AddFreeLicenseRequest& operator=(AddFreeLicenseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appItemId_ != nullptr
        && this->appName_ != nullptr && this->appPlatforms_ != nullptr && this->sdkModels_ != nullptr; };
    // appItemId Field Functions 
    bool hasAppItemId() const { return this->appItemId_ != nullptr;};
    void deleteAppItemId() { this->appItemId_ = nullptr;};
    inline string appItemId() const { DARABONBA_PTR_GET_DEFAULT(appItemId_, "") };
    inline AddFreeLicenseRequest& setAppItemId(string appItemId) { DARABONBA_PTR_SET_VALUE(appItemId_, appItemId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline AddFreeLicenseRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appPlatforms Field Functions 
    bool hasAppPlatforms() const { return this->appPlatforms_ != nullptr;};
    void deleteAppPlatforms() { this->appPlatforms_ = nullptr;};
    inline string appPlatforms() const { DARABONBA_PTR_GET_DEFAULT(appPlatforms_, "") };
    inline AddFreeLicenseRequest& setAppPlatforms(string appPlatforms) { DARABONBA_PTR_SET_VALUE(appPlatforms_, appPlatforms) };


    // sdkModels Field Functions 
    bool hasSdkModels() const { return this->sdkModels_ != nullptr;};
    void deleteSdkModels() { this->sdkModels_ = nullptr;};
    inline string sdkModels() const { DARABONBA_PTR_GET_DEFAULT(sdkModels_, "") };
    inline AddFreeLicenseRequest& setSdkModels(string sdkModels) { DARABONBA_PTR_SET_VALUE(sdkModels_, sdkModels) };


  protected:
    std::shared_ptr<string> appItemId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> appPlatforms_ = nullptr;
    std::shared_ptr<string> sdkModels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
