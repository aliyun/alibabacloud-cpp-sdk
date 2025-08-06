// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITLICENSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITLICENSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class EditLicenseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditLicenseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppPlatforms, appPlatforms_);
      DARABONBA_PTR_TO_JSON(ContractNo, contractNo_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SdkModels, sdkModels_);
    };
    friend void from_json(const Darabonba::Json& j, EditLicenseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppPlatforms, appPlatforms_);
      DARABONBA_PTR_FROM_JSON(ContractNo, contractNo_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SdkModels, sdkModels_);
    };
    EditLicenseRequest() = default ;
    EditLicenseRequest(const EditLicenseRequest &) = default ;
    EditLicenseRequest(EditLicenseRequest &&) = default ;
    EditLicenseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditLicenseRequest() = default ;
    EditLicenseRequest& operator=(const EditLicenseRequest &) = default ;
    EditLicenseRequest& operator=(EditLicenseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appItemId_ != nullptr
        && this->appName_ != nullptr && this->appPlatforms_ != nullptr && this->contractNo_ != nullptr && this->instanceId_ != nullptr && this->sdkModels_ != nullptr; };
    // appItemId Field Functions 
    bool hasAppItemId() const { return this->appItemId_ != nullptr;};
    void deleteAppItemId() { this->appItemId_ = nullptr;};
    inline string appItemId() const { DARABONBA_PTR_GET_DEFAULT(appItemId_, "") };
    inline EditLicenseRequest& setAppItemId(string appItemId) { DARABONBA_PTR_SET_VALUE(appItemId_, appItemId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline EditLicenseRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appPlatforms Field Functions 
    bool hasAppPlatforms() const { return this->appPlatforms_ != nullptr;};
    void deleteAppPlatforms() { this->appPlatforms_ = nullptr;};
    inline string appPlatforms() const { DARABONBA_PTR_GET_DEFAULT(appPlatforms_, "") };
    inline EditLicenseRequest& setAppPlatforms(string appPlatforms) { DARABONBA_PTR_SET_VALUE(appPlatforms_, appPlatforms) };


    // contractNo Field Functions 
    bool hasContractNo() const { return this->contractNo_ != nullptr;};
    void deleteContractNo() { this->contractNo_ = nullptr;};
    inline string contractNo() const { DARABONBA_PTR_GET_DEFAULT(contractNo_, "") };
    inline EditLicenseRequest& setContractNo(string contractNo) { DARABONBA_PTR_SET_VALUE(contractNo_, contractNo) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EditLicenseRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sdkModels Field Functions 
    bool hasSdkModels() const { return this->sdkModels_ != nullptr;};
    void deleteSdkModels() { this->sdkModels_ = nullptr;};
    inline string sdkModels() const { DARABONBA_PTR_GET_DEFAULT(sdkModels_, "") };
    inline EditLicenseRequest& setSdkModels(string sdkModels) { DARABONBA_PTR_SET_VALUE(sdkModels_, sdkModels) };


  protected:
    std::shared_ptr<string> appItemId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> appPlatforms_ = nullptr;
    std::shared_ptr<string> contractNo_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> sdkModels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
