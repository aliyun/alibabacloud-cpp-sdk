// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLAYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPLAYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetPlayConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPlayConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Brand, brand_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(OS, OS_);
      DARABONBA_PTR_TO_JSON(OSVersion, OSVersion_);
      DARABONBA_PTR_TO_JSON(SDKVersion, SDKVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlayConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Brand, brand_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(OS, OS_);
      DARABONBA_PTR_FROM_JSON(OSVersion, OSVersion_);
      DARABONBA_PTR_FROM_JSON(SDKVersion, SDKVersion_);
    };
    GetPlayConfigRequest() = default ;
    GetPlayConfigRequest(const GetPlayConfigRequest &) = default ;
    GetPlayConfigRequest(GetPlayConfigRequest &&) = default ;
    GetPlayConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPlayConfigRequest() = default ;
    GetPlayConfigRequest& operator=(const GetPlayConfigRequest &) = default ;
    GetPlayConfigRequest& operator=(GetPlayConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->brand_ != nullptr && this->configType_ != nullptr && this->OS_ != nullptr && this->OSVersion_ != nullptr
        && this->SDKVersion_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetPlayConfigRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetPlayConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // brand Field Functions 
    bool hasBrand() const { return this->brand_ != nullptr;};
    void deleteBrand() { this->brand_ = nullptr;};
    inline string brand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
    inline GetPlayConfigRequest& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetPlayConfigRequest& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // OS Field Functions 
    bool hasOS() const { return this->OS_ != nullptr;};
    void deleteOS() { this->OS_ = nullptr;};
    inline string OS() const { DARABONBA_PTR_GET_DEFAULT(OS_, "") };
    inline GetPlayConfigRequest& setOS(string OS) { DARABONBA_PTR_SET_VALUE(OS_, OS) };


    // OSVersion Field Functions 
    bool hasOSVersion() const { return this->OSVersion_ != nullptr;};
    void deleteOSVersion() { this->OSVersion_ = nullptr;};
    inline string OSVersion() const { DARABONBA_PTR_GET_DEFAULT(OSVersion_, "") };
    inline GetPlayConfigRequest& setOSVersion(string OSVersion) { DARABONBA_PTR_SET_VALUE(OSVersion_, OSVersion) };


    // SDKVersion Field Functions 
    bool hasSDKVersion() const { return this->SDKVersion_ != nullptr;};
    void deleteSDKVersion() { this->SDKVersion_ = nullptr;};
    inline string SDKVersion() const { DARABONBA_PTR_GET_DEFAULT(SDKVersion_, "") };
    inline GetPlayConfigRequest& setSDKVersion(string SDKVersion) { DARABONBA_PTR_SET_VALUE(SDKVersion_, SDKVersion) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> brand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> configType_ = nullptr;
    std::shared_ptr<string> OS_ = nullptr;
    std::shared_ptr<string> OSVersion_ = nullptr;
    std::shared_ptr<string> SDKVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
