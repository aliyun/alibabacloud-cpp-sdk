// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSREQUEST_HPP_
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
  class DescribeAppsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIdList, appIdList_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(InstallationStatus, installationStatus_);
      DARABONBA_PTR_TO_JSON(MD5, MD5_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIdList, appIdList_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(InstallationStatus, installationStatus_);
      DARABONBA_PTR_FROM_JSON(MD5, MD5_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeAppsRequest() = default ;
    DescribeAppsRequest(const DescribeAppsRequest &) = default ;
    DescribeAppsRequest(DescribeAppsRequest &&) = default ;
    DescribeAppsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsRequest() = default ;
    DescribeAppsRequest& operator=(const DescribeAppsRequest &) = default ;
    DescribeAppsRequest& operator=(DescribeAppsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIdList_ == nullptr
        && return this->appName_ == nullptr && return this->appType_ == nullptr && return this->bizRegionId_ == nullptr && return this->installationStatus_ == nullptr && return this->MD5_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->status_ == nullptr; };
    // appIdList Field Functions 
    bool hasAppIdList() const { return this->appIdList_ != nullptr;};
    void deleteAppIdList() { this->appIdList_ = nullptr;};
    inline const vector<string> & appIdList() const { DARABONBA_PTR_GET_CONST(appIdList_, vector<string>) };
    inline vector<string> appIdList() { DARABONBA_PTR_GET(appIdList_, vector<string>) };
    inline DescribeAppsRequest& setAppIdList(const vector<string> & appIdList) { DARABONBA_PTR_SET_VALUE(appIdList_, appIdList) };
    inline DescribeAppsRequest& setAppIdList(vector<string> && appIdList) { DARABONBA_PTR_SET_RVALUE(appIdList_, appIdList) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeAppsRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline DescribeAppsRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline DescribeAppsRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // installationStatus Field Functions 
    bool hasInstallationStatus() const { return this->installationStatus_ != nullptr;};
    void deleteInstallationStatus() { this->installationStatus_ = nullptr;};
    inline string installationStatus() const { DARABONBA_PTR_GET_DEFAULT(installationStatus_, "") };
    inline DescribeAppsRequest& setInstallationStatus(string installationStatus) { DARABONBA_PTR_SET_VALUE(installationStatus_, installationStatus) };


    // MD5 Field Functions 
    bool hasMD5() const { return this->MD5_ != nullptr;};
    void deleteMD5() { this->MD5_ = nullptr;};
    inline string MD5() const { DARABONBA_PTR_GET_DEFAULT(MD5_, "") };
    inline DescribeAppsRequest& setMD5(string MD5) { DARABONBA_PTR_SET_VALUE(MD5_, MD5) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeAppsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAppsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAppsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The IDs of the applications.
    std::shared_ptr<vector<string>> appIdList_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> appType_ = nullptr;
    // Region id.
    std::shared_ptr<string> bizRegionId_ = nullptr;
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
    // The value of MD5.
    std::shared_ptr<string> MD5_ = nullptr;
    // The maximum number of entries per page. Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. If the parameter is left empty, the data is queried from the first entry.
    std::shared_ptr<string> nextToken_ = nullptr;
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
