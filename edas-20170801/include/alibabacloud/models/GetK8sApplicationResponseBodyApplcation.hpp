// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATION_HPP_
#define ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetK8sApplicationResponseBodyApplcationApp.hpp>
#include <alibabacloud/models/GetK8sApplicationResponseBodyApplcationConf.hpp>
#include <alibabacloud/models/GetK8sApplicationResponseBodyApplcationDeployGroups.hpp>
#include <alibabacloud/models/GetK8sApplicationResponseBodyApplcationImageInfo.hpp>
#include <alibabacloud/models/GetK8sApplicationResponseBodyApplcationLatestVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sApplicationResponseBodyApplcation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sApplicationResponseBodyApplcation& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Conf, conf_);
      DARABONBA_PTR_TO_JSON(DeployGroups, deployGroups_);
      DARABONBA_PTR_TO_JSON(ImageInfo, imageInfo_);
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sApplicationResponseBodyApplcation& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Conf, conf_);
      DARABONBA_PTR_FROM_JSON(DeployGroups, deployGroups_);
      DARABONBA_PTR_FROM_JSON(ImageInfo, imageInfo_);
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
    };
    GetK8sApplicationResponseBodyApplcation() = default ;
    GetK8sApplicationResponseBodyApplcation(const GetK8sApplicationResponseBodyApplcation &) = default ;
    GetK8sApplicationResponseBodyApplcation(GetK8sApplicationResponseBodyApplcation &&) = default ;
    GetK8sApplicationResponseBodyApplcation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sApplicationResponseBodyApplcation() = default ;
    GetK8sApplicationResponseBodyApplcation& operator=(const GetK8sApplicationResponseBodyApplcation &) = default ;
    GetK8sApplicationResponseBodyApplcation& operator=(GetK8sApplicationResponseBodyApplcation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && return this->appId_ == nullptr && return this->conf_ == nullptr && return this->deployGroups_ == nullptr && return this->imageInfo_ == nullptr && return this->latestVersion_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline const Models::GetK8sApplicationResponseBodyApplcationApp & app() const { DARABONBA_PTR_GET_CONST(app_, Models::GetK8sApplicationResponseBodyApplcationApp) };
    inline Models::GetK8sApplicationResponseBodyApplcationApp app() { DARABONBA_PTR_GET(app_, Models::GetK8sApplicationResponseBodyApplcationApp) };
    inline GetK8sApplicationResponseBodyApplcation& setApp(const Models::GetK8sApplicationResponseBodyApplcationApp & app) { DARABONBA_PTR_SET_VALUE(app_, app) };
    inline GetK8sApplicationResponseBodyApplcation& setApp(Models::GetK8sApplicationResponseBodyApplcationApp && app) { DARABONBA_PTR_SET_RVALUE(app_, app) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetK8sApplicationResponseBodyApplcation& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // conf Field Functions 
    bool hasConf() const { return this->conf_ != nullptr;};
    void deleteConf() { this->conf_ = nullptr;};
    inline const Models::GetK8sApplicationResponseBodyApplcationConf & conf() const { DARABONBA_PTR_GET_CONST(conf_, Models::GetK8sApplicationResponseBodyApplcationConf) };
    inline Models::GetK8sApplicationResponseBodyApplcationConf conf() { DARABONBA_PTR_GET(conf_, Models::GetK8sApplicationResponseBodyApplcationConf) };
    inline GetK8sApplicationResponseBodyApplcation& setConf(const Models::GetK8sApplicationResponseBodyApplcationConf & conf) { DARABONBA_PTR_SET_VALUE(conf_, conf) };
    inline GetK8sApplicationResponseBodyApplcation& setConf(Models::GetK8sApplicationResponseBodyApplcationConf && conf) { DARABONBA_PTR_SET_RVALUE(conf_, conf) };


    // deployGroups Field Functions 
    bool hasDeployGroups() const { return this->deployGroups_ != nullptr;};
    void deleteDeployGroups() { this->deployGroups_ = nullptr;};
    inline const Models::GetK8sApplicationResponseBodyApplcationDeployGroups & deployGroups() const { DARABONBA_PTR_GET_CONST(deployGroups_, Models::GetK8sApplicationResponseBodyApplcationDeployGroups) };
    inline Models::GetK8sApplicationResponseBodyApplcationDeployGroups deployGroups() { DARABONBA_PTR_GET(deployGroups_, Models::GetK8sApplicationResponseBodyApplcationDeployGroups) };
    inline GetK8sApplicationResponseBodyApplcation& setDeployGroups(const Models::GetK8sApplicationResponseBodyApplcationDeployGroups & deployGroups) { DARABONBA_PTR_SET_VALUE(deployGroups_, deployGroups) };
    inline GetK8sApplicationResponseBodyApplcation& setDeployGroups(Models::GetK8sApplicationResponseBodyApplcationDeployGroups && deployGroups) { DARABONBA_PTR_SET_RVALUE(deployGroups_, deployGroups) };


    // imageInfo Field Functions 
    bool hasImageInfo() const { return this->imageInfo_ != nullptr;};
    void deleteImageInfo() { this->imageInfo_ = nullptr;};
    inline const Models::GetK8sApplicationResponseBodyApplcationImageInfo & imageInfo() const { DARABONBA_PTR_GET_CONST(imageInfo_, Models::GetK8sApplicationResponseBodyApplcationImageInfo) };
    inline Models::GetK8sApplicationResponseBodyApplcationImageInfo imageInfo() { DARABONBA_PTR_GET(imageInfo_, Models::GetK8sApplicationResponseBodyApplcationImageInfo) };
    inline GetK8sApplicationResponseBodyApplcation& setImageInfo(const Models::GetK8sApplicationResponseBodyApplcationImageInfo & imageInfo) { DARABONBA_PTR_SET_VALUE(imageInfo_, imageInfo) };
    inline GetK8sApplicationResponseBodyApplcation& setImageInfo(Models::GetK8sApplicationResponseBodyApplcationImageInfo && imageInfo) { DARABONBA_PTR_SET_RVALUE(imageInfo_, imageInfo) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline const Models::GetK8sApplicationResponseBodyApplcationLatestVersion & latestVersion() const { DARABONBA_PTR_GET_CONST(latestVersion_, Models::GetK8sApplicationResponseBodyApplcationLatestVersion) };
    inline Models::GetK8sApplicationResponseBodyApplcationLatestVersion latestVersion() { DARABONBA_PTR_GET(latestVersion_, Models::GetK8sApplicationResponseBodyApplcationLatestVersion) };
    inline GetK8sApplicationResponseBodyApplcation& setLatestVersion(const Models::GetK8sApplicationResponseBodyApplcationLatestVersion & latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };
    inline GetK8sApplicationResponseBodyApplcation& setLatestVersion(Models::GetK8sApplicationResponseBodyApplcationLatestVersion && latestVersion) { DARABONBA_PTR_SET_RVALUE(latestVersion_, latestVersion) };


  protected:
    // The basic information about the application.
    std::shared_ptr<Models::GetK8sApplicationResponseBodyApplcationApp> app_ = nullptr;
    // The ID of the application. You can call the ListApplication operation to query the application ID. For more information, see [ListApplication](https://help.aliyun.com/document_detail/149390.html).
    std::shared_ptr<string> appId_ = nullptr;
    // The configurations.
    std::shared_ptr<Models::GetK8sApplicationResponseBodyApplcationConf> conf_ = nullptr;
    // The information about the instance group in which the application is deployed.
    std::shared_ptr<Models::GetK8sApplicationResponseBodyApplcationDeployGroups> deployGroups_ = nullptr;
    // The information about the image.
    std::shared_ptr<Models::GetK8sApplicationResponseBodyApplcationImageInfo> imageInfo_ = nullptr;
    // The information about the latest version.
    std::shared_ptr<Models::GetK8sApplicationResponseBodyApplcationLatestVersion> latestVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
