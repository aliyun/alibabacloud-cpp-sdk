// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODY_HPP_
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
  class DescribeAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAppsResponseBody() = default ;
    DescribeAppsResponseBody(const DescribeAppsResponseBody &) = default ;
    DescribeAppsResponseBody(DescribeAppsResponseBody &&) = default ;
    DescribeAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsResponseBody() = default ;
    DescribeAppsResponseBody& operator=(const DescribeAppsResponseBody &) = default ;
    DescribeAppsResponseBody& operator=(DescribeAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->androidAppVersion_ == nullptr
        && this->apkSize_ == nullptr && this->appId_ == nullptr && this->appName_ == nullptr && this->appType_ == nullptr && this->bizRegionId_ == nullptr
        && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->iconUrl_ == nullptr && this->installationStatus_ == nullptr
        && this->instanceGroupList_ == nullptr && this->MD5_ == nullptr && this->packageName_ == nullptr && this->status_ == nullptr; };
      // androidAppVersion Field Functions 
      bool hasAndroidAppVersion() const { return this->androidAppVersion_ != nullptr;};
      void deleteAndroidAppVersion() { this->androidAppVersion_ = nullptr;};
      inline string getAndroidAppVersion() const { DARABONBA_PTR_GET_DEFAULT(androidAppVersion_, "") };
      inline Data& setAndroidAppVersion(string androidAppVersion) { DARABONBA_PTR_SET_VALUE(androidAppVersion_, androidAppVersion) };


      // apkSize Field Functions 
      bool hasApkSize() const { return this->apkSize_ != nullptr;};
      void deleteApkSize() { this->apkSize_ = nullptr;};
      inline string getApkSize() const { DARABONBA_PTR_GET_DEFAULT(apkSize_, "") };
      inline Data& setApkSize(string apkSize) { DARABONBA_PTR_SET_VALUE(apkSize_, apkSize) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline int32_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
      inline Data& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
      inline Data& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // bizRegionId Field Functions 
      bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
      void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
      inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
      inline Data& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // iconUrl Field Functions 
      bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
      void deleteIconUrl() { this->iconUrl_ = nullptr;};
      inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
      inline Data& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


      // installationStatus Field Functions 
      bool hasInstallationStatus() const { return this->installationStatus_ != nullptr;};
      void deleteInstallationStatus() { this->installationStatus_ = nullptr;};
      inline string getInstallationStatus() const { DARABONBA_PTR_GET_DEFAULT(installationStatus_, "") };
      inline Data& setInstallationStatus(string installationStatus) { DARABONBA_PTR_SET_VALUE(installationStatus_, installationStatus) };


      // instanceGroupList Field Functions 
      bool hasInstanceGroupList() const { return this->instanceGroupList_ != nullptr;};
      void deleteInstanceGroupList() { this->instanceGroupList_ = nullptr;};
      inline const vector<string> & getInstanceGroupList() const { DARABONBA_PTR_GET_CONST(instanceGroupList_, vector<string>) };
      inline vector<string> getInstanceGroupList() { DARABONBA_PTR_GET(instanceGroupList_, vector<string>) };
      inline Data& setInstanceGroupList(const vector<string> & instanceGroupList) { DARABONBA_PTR_SET_VALUE(instanceGroupList_, instanceGroupList) };
      inline Data& setInstanceGroupList(vector<string> && instanceGroupList) { DARABONBA_PTR_SET_RVALUE(instanceGroupList_, instanceGroupList) };


      // MD5 Field Functions 
      bool hasMD5() const { return this->MD5_ != nullptr;};
      void deleteMD5() { this->MD5_ = nullptr;};
      inline string getMD5() const { DARABONBA_PTR_GET_DEFAULT(MD5_, "") };
      inline Data& setMD5(string MD5) { DARABONBA_PTR_SET_VALUE(MD5_, MD5) };


      // packageName Field Functions 
      bool hasPackageName() const { return this->packageName_ != nullptr;};
      void deletePackageName() { this->packageName_ = nullptr;};
      inline string getPackageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
      inline Data& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The version of the application.
      shared_ptr<string> androidAppVersion_ {};
      // Apk size.
      shared_ptr<string> apkSize_ {};
      // The ID of the application.
      shared_ptr<int32_t> appId_ {};
      // The name of the application.
      shared_ptr<string> appName_ {};
      shared_ptr<string> appType_ {};
      // Region id.
      shared_ptr<string> bizRegionId_ {};
      // The description of the application.
      shared_ptr<string> description_ {};
      // The time when the application was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the application was last modified.
      shared_ptr<string> gmtModified_ {};
      // The icon URL of the application.
      shared_ptr<string> iconUrl_ {};
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
      shared_ptr<string> installationStatus_ {};
      // The list of instance groups where the application is installed.
      shared_ptr<vector<string>> instanceGroupList_ {};
      // The value of MD5.
      shared_ptr<string> MD5_ {};
      // The name of the application package.
      shared_ptr<string> packageName_ {};
      // The status of the application.
      // 
      // Valid values:
      // 
      // *   FAILED: The application failed to be created.
      // *   NORMAL: The application is available.
      // *   CREATING: The application is being created.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeAppsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeAppsResponseBody::Data>) };
    inline vector<DescribeAppsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeAppsResponseBody::Data>) };
    inline DescribeAppsResponseBody& setData(const vector<DescribeAppsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAppsResponseBody& setData(vector<DescribeAppsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAppsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeAppsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The objects that are returned.
    shared_ptr<vector<DescribeAppsResponseBody::Data>> data_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
