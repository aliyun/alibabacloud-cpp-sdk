// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeAppsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidAppVersion, androidAppVersion_);
      DARABONBA_PTR_TO_JSON(ApkSize, apkSize_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_TO_JSON(InstallationStatus, installationStatus_);
      DARABONBA_PTR_TO_JSON(InstanceGroupList, instanceGroupList_);
      DARABONBA_PTR_TO_JSON(MD5, MD5_);
      DARABONBA_PTR_TO_JSON(PackageName, packageName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidAppVersion, androidAppVersion_);
      DARABONBA_PTR_FROM_JSON(ApkSize, apkSize_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_FROM_JSON(InstallationStatus, installationStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupList, instanceGroupList_);
      DARABONBA_PTR_FROM_JSON(MD5, MD5_);
      DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeAppsResponseBodyData() = default ;
    DescribeAppsResponseBodyData(const DescribeAppsResponseBodyData &) = default ;
    DescribeAppsResponseBodyData(DescribeAppsResponseBodyData &&) = default ;
    DescribeAppsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsResponseBodyData() = default ;
    DescribeAppsResponseBodyData& operator=(const DescribeAppsResponseBodyData &) = default ;
    DescribeAppsResponseBodyData& operator=(DescribeAppsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->androidAppVersion_ != nullptr
        && this->apkSize_ != nullptr && this->appId_ != nullptr && this->appName_ != nullptr && this->appType_ != nullptr && this->bizRegionId_ != nullptr
        && this->description_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->iconUrl_ != nullptr && this->installationStatus_ != nullptr
        && this->instanceGroupList_ != nullptr && this->MD5_ != nullptr && this->packageName_ != nullptr && this->status_ != nullptr; };
    // androidAppVersion Field Functions 
    bool hasAndroidAppVersion() const { return this->androidAppVersion_ != nullptr;};
    void deleteAndroidAppVersion() { this->androidAppVersion_ = nullptr;};
    inline string androidAppVersion() const { DARABONBA_PTR_GET_DEFAULT(androidAppVersion_, "") };
    inline DescribeAppsResponseBodyData& setAndroidAppVersion(string androidAppVersion) { DARABONBA_PTR_SET_VALUE(androidAppVersion_, androidAppVersion) };


    // apkSize Field Functions 
    bool hasApkSize() const { return this->apkSize_ != nullptr;};
    void deleteApkSize() { this->apkSize_ = nullptr;};
    inline string apkSize() const { DARABONBA_PTR_GET_DEFAULT(apkSize_, "") };
    inline DescribeAppsResponseBodyData& setApkSize(string apkSize) { DARABONBA_PTR_SET_VALUE(apkSize_, apkSize) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int32_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
    inline DescribeAppsResponseBodyData& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeAppsResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline DescribeAppsResponseBodyData& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline DescribeAppsResponseBodyData& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAppsResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeAppsResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeAppsResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // iconUrl Field Functions 
    bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
    void deleteIconUrl() { this->iconUrl_ = nullptr;};
    inline string iconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
    inline DescribeAppsResponseBodyData& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


    // installationStatus Field Functions 
    bool hasInstallationStatus() const { return this->installationStatus_ != nullptr;};
    void deleteInstallationStatus() { this->installationStatus_ = nullptr;};
    inline string installationStatus() const { DARABONBA_PTR_GET_DEFAULT(installationStatus_, "") };
    inline DescribeAppsResponseBodyData& setInstallationStatus(string installationStatus) { DARABONBA_PTR_SET_VALUE(installationStatus_, installationStatus) };


    // instanceGroupList Field Functions 
    bool hasInstanceGroupList() const { return this->instanceGroupList_ != nullptr;};
    void deleteInstanceGroupList() { this->instanceGroupList_ = nullptr;};
    inline const vector<string> & instanceGroupList() const { DARABONBA_PTR_GET_CONST(instanceGroupList_, vector<string>) };
    inline vector<string> instanceGroupList() { DARABONBA_PTR_GET(instanceGroupList_, vector<string>) };
    inline DescribeAppsResponseBodyData& setInstanceGroupList(const vector<string> & instanceGroupList) { DARABONBA_PTR_SET_VALUE(instanceGroupList_, instanceGroupList) };
    inline DescribeAppsResponseBodyData& setInstanceGroupList(vector<string> && instanceGroupList) { DARABONBA_PTR_SET_RVALUE(instanceGroupList_, instanceGroupList) };


    // MD5 Field Functions 
    bool hasMD5() const { return this->MD5_ != nullptr;};
    void deleteMD5() { this->MD5_ = nullptr;};
    inline string MD5() const { DARABONBA_PTR_GET_DEFAULT(MD5_, "") };
    inline DescribeAppsResponseBodyData& setMD5(string MD5) { DARABONBA_PTR_SET_VALUE(MD5_, MD5) };


    // packageName Field Functions 
    bool hasPackageName() const { return this->packageName_ != nullptr;};
    void deletePackageName() { this->packageName_ = nullptr;};
    inline string packageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
    inline DescribeAppsResponseBodyData& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAppsResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The version of the application.
    std::shared_ptr<string> androidAppVersion_ = nullptr;
    // Apk size.
    std::shared_ptr<string> apkSize_ = nullptr;
    // The ID of the application.
    std::shared_ptr<int32_t> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> appType_ = nullptr;
    // Region id.
    std::shared_ptr<string> bizRegionId_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the application was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the application was last modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The icon URL of the application.
    std::shared_ptr<string> iconUrl_ = nullptr;
    // The installation/uninstallation status of the application.
    // 
    // Valid values:
    // 
    // *   INSTALLFAILED: The application failed to be installed.
    // *   UNINSTALLING: The application is being uninstalled.
    // *   INSTALLING: The application is being installed.
    // *   UNINSTALLED: The application is uninstalled.
    // *   INSTALLED: The application is installed.
    // *   UNINSTALLFAILED: The application failed to be uninstalled.
    std::shared_ptr<string> installationStatus_ = nullptr;
    // The list of instance groups where the application is installed.
    std::shared_ptr<vector<string>> instanceGroupList_ = nullptr;
    // The value of MD5.
    std::shared_ptr<string> MD5_ = nullptr;
    // The name of the application package.
    std::shared_ptr<string> packageName_ = nullptr;
    // The status of the application.
    // 
    // Valid values:
    // 
    // *   FAILED: The application failed to be created.
    // *   NORMAL: The application is available.
    // *   CREATING: The application is being created.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
