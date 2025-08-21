// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDAPPINSTALLATIONSRESPONSEBODYINSTALLATIONINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDAPPINSTALLATIONSRESPONSEBODYINSTALLATIONINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListCloudAppInstallationsResponseBodyInstallationInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAppInstallationsResponseBodyInstallationInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(InstallationTime, installationTime_);
      DARABONBA_PTR_TO_JSON(PatchId, patchId_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDescription, statusDescription_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAppInstallationsResponseBodyInstallationInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(InstallationTime, installationTime_);
      DARABONBA_PTR_FROM_JSON(PatchId, patchId_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDescription, statusDescription_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListCloudAppInstallationsResponseBodyInstallationInfos() = default ;
    ListCloudAppInstallationsResponseBodyInstallationInfos(const ListCloudAppInstallationsResponseBodyInstallationInfos &) = default ;
    ListCloudAppInstallationsResponseBodyInstallationInfos(ListCloudAppInstallationsResponseBodyInstallationInfos &&) = default ;
    ListCloudAppInstallationsResponseBodyInstallationInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAppInstallationsResponseBodyInstallationInfos() = default ;
    ListCloudAppInstallationsResponseBodyInstallationInfos& operator=(const ListCloudAppInstallationsResponseBodyInstallationInfos &) = default ;
    ListCloudAppInstallationsResponseBodyInstallationInfos& operator=(ListCloudAppInstallationsResponseBodyInstallationInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->appVersion_ != nullptr && this->installationTime_ != nullptr && this->patchId_ != nullptr && this->renderingInstanceId_ != nullptr
        && this->status_ != nullptr && this->statusDescription_ != nullptr && this->updateTime_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListCloudAppInstallationsResponseBodyInstallationInfos& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListCloudAppInstallationsResponseBodyInstallationInfos& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline ListCloudAppInstallationsResponseBodyInstallationInfos& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // installationTime Field Functions 
    bool hasInstallationTime() const { return this->installationTime_ != nullptr;};
    void deleteInstallationTime() { this->installationTime_ = nullptr;};
    inline string installationTime() const { DARABONBA_PTR_GET_DEFAULT(installationTime_, "") };
    inline ListCloudAppInstallationsResponseBodyInstallationInfos& setInstallationTime(string installationTime) { DARABONBA_PTR_SET_VALUE(installationTime_, installationTime) };


    // patchId Field Functions 
    bool hasPatchId() const { return this->patchId_ != nullptr;};
    void deletePatchId() { this->patchId_ = nullptr;};
    inline string patchId() const { DARABONBA_PTR_GET_DEFAULT(patchId_, "") };
    inline ListCloudAppInstallationsResponseBodyInstallationInfos& setPatchId(string patchId) { DARABONBA_PTR_SET_VALUE(patchId_, patchId) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline ListCloudAppInstallationsResponseBodyInstallationInfos& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCloudAppInstallationsResponseBodyInstallationInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDescription Field Functions 
    bool hasStatusDescription() const { return this->statusDescription_ != nullptr;};
    void deleteStatusDescription() { this->statusDescription_ = nullptr;};
    inline string statusDescription() const { DARABONBA_PTR_GET_DEFAULT(statusDescription_, "") };
    inline ListCloudAppInstallationsResponseBodyInstallationInfos& setStatusDescription(string statusDescription) { DARABONBA_PTR_SET_VALUE(statusDescription_, statusDescription) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListCloudAppInstallationsResponseBodyInstallationInfos& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> appVersion_ = nullptr;
    std::shared_ptr<string> installationTime_ = nullptr;
    std::shared_ptr<string> patchId_ = nullptr;
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusDescription_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
