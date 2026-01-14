// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMSESERVICEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMSESERVICEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateMseServiceApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMseServiceApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(MseVersion, mseVersion_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SentinelEnable, sentinelEnable_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SwitchEnable, switchEnable_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMseServiceApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(MseVersion, mseVersion_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SentinelEnable, sentinelEnable_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SwitchEnable, switchEnable_);
    };
    CreateMseServiceApplicationRequest() = default ;
    CreateMseServiceApplicationRequest(const CreateMseServiceApplicationRequest &) = default ;
    CreateMseServiceApplicationRequest(CreateMseServiceApplicationRequest &&) = default ;
    CreateMseServiceApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMseServiceApplicationRequest() = default ;
    CreateMseServiceApplicationRequest& operator=(const CreateMseServiceApplicationRequest &) = default ;
    CreateMseServiceApplicationRequest& operator=(CreateMseServiceApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->appName_ == nullptr && this->extraInfo_ == nullptr && this->language_ == nullptr && this->mseVersion_ == nullptr && this->region_ == nullptr
        && this->sentinelEnable_ == nullptr && this->source_ == nullptr && this->switchEnable_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateMseServiceApplicationRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateMseServiceApplicationRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline CreateMseServiceApplicationRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateMseServiceApplicationRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // mseVersion Field Functions 
    bool hasMseVersion() const { return this->mseVersion_ != nullptr;};
    void deleteMseVersion() { this->mseVersion_ = nullptr;};
    inline string getMseVersion() const { DARABONBA_PTR_GET_DEFAULT(mseVersion_, "") };
    inline CreateMseServiceApplicationRequest& setMseVersion(string mseVersion) { DARABONBA_PTR_SET_VALUE(mseVersion_, mseVersion) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateMseServiceApplicationRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // sentinelEnable Field Functions 
    bool hasSentinelEnable() const { return this->sentinelEnable_ != nullptr;};
    void deleteSentinelEnable() { this->sentinelEnable_ = nullptr;};
    inline string getSentinelEnable() const { DARABONBA_PTR_GET_DEFAULT(sentinelEnable_, "") };
    inline CreateMseServiceApplicationRequest& setSentinelEnable(string sentinelEnable) { DARABONBA_PTR_SET_VALUE(sentinelEnable_, sentinelEnable) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateMseServiceApplicationRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // switchEnable Field Functions 
    bool hasSwitchEnable() const { return this->switchEnable_ != nullptr;};
    void deleteSwitchEnable() { this->switchEnable_ = nullptr;};
    inline string getSwitchEnable() const { DARABONBA_PTR_GET_DEFAULT(switchEnable_, "") };
    inline CreateMseServiceApplicationRequest& setSwitchEnable(string switchEnable) { DARABONBA_PTR_SET_VALUE(switchEnable_, switchEnable) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The name of the application.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The additional information.
    shared_ptr<string> extraInfo_ {};
    // The programming language of the application.
    shared_ptr<string> language_ {};
    // The edition of the MSE instance that you want to purchase.
    // 
    // *   mse_pro: Professional Edition.
    // *   mse_dev: Developer Edition.
    shared_ptr<string> mseVersion_ {};
    // The ID of the region where the instance resides. Examples:
    // 
    // *   cn-hangzhou: China (Hangzhou)
    // *   cn-beijing: China (Beijing)
    // *   cn-shanghai: China (Shanghai)
    // *   cn-zhangjiakou: China (Zhangjiakou)
    // *   cn-shenzhen: China (Shenzhen)
    // 
    // This parameter is required.
    shared_ptr<string> region_ {};
    // Specifies whether to enable the Sentinel-compatible mode.
    shared_ptr<string> sentinelEnable_ {};
    // The service source.
    shared_ptr<string> source_ {};
    // Specifies whether to enable switching.
    shared_ptr<string> switchEnable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
