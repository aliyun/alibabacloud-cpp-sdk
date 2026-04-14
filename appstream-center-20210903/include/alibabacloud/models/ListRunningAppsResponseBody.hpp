// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRUNNINGAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRUNNINGAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210903
{
namespace Models
{
  class ListRunningAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRunningAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunningCloudApps, runningCloudApps_);
    };
    friend void from_json(const Darabonba::Json& j, ListRunningAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunningCloudApps, runningCloudApps_);
    };
    ListRunningAppsResponseBody() = default ;
    ListRunningAppsResponseBody(const ListRunningAppsResponseBody &) = default ;
    ListRunningAppsResponseBody(ListRunningAppsResponseBody &&) = default ;
    ListRunningAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRunningAppsResponseBody() = default ;
    ListRunningAppsResponseBody& operator=(const ListRunningAppsResponseBody &) = default ;
    ListRunningAppsResponseBody& operator=(ListRunningAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RunningCloudApps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RunningCloudApps& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_TO_JSON(AppVersionName, appVersionName_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, RunningCloudApps& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_FROM_JSON(AppVersionName, appVersionName_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      RunningCloudApps() = default ;
      RunningCloudApps(const RunningCloudApps &) = default ;
      RunningCloudApps(RunningCloudApps &&) = default ;
      RunningCloudApps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RunningCloudApps() = default ;
      RunningCloudApps& operator=(const RunningCloudApps &) = default ;
      RunningCloudApps& operator=(RunningCloudApps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appInstanceGroupId_ == nullptr && this->appInstanceId_ == nullptr && this->appName_ == nullptr && this->appVersion_ == nullptr && this->appVersionName_ == nullptr
        && this->duration_ == nullptr && this->iconUrl_ == nullptr && this->osType_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline RunningCloudApps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline RunningCloudApps& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // appInstanceId Field Functions 
      bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
      void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
      inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
      inline RunningCloudApps& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline RunningCloudApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // appVersion Field Functions 
      bool hasAppVersion() const { return this->appVersion_ != nullptr;};
      void deleteAppVersion() { this->appVersion_ = nullptr;};
      inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
      inline RunningCloudApps& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


      // appVersionName Field Functions 
      bool hasAppVersionName() const { return this->appVersionName_ != nullptr;};
      void deleteAppVersionName() { this->appVersionName_ = nullptr;};
      inline string getAppVersionName() const { DARABONBA_PTR_GET_DEFAULT(appVersionName_, "") };
      inline RunningCloudApps& setAppVersionName(string appVersionName) { DARABONBA_PTR_SET_VALUE(appVersionName_, appVersionName) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline RunningCloudApps& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // iconUrl Field Functions 
      bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
      void deleteIconUrl() { this->iconUrl_ = nullptr;};
      inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
      inline RunningCloudApps& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline RunningCloudApps& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline RunningCloudApps& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline RunningCloudApps& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> appInstanceGroupId_ {};
      shared_ptr<string> appInstanceId_ {};
      shared_ptr<string> appName_ {};
      shared_ptr<string> appVersion_ {};
      shared_ptr<string> appVersionName_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<string> iconUrl_ {};
      shared_ptr<string> osType_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->runningCloudApps_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRunningAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runningCloudApps Field Functions 
    bool hasRunningCloudApps() const { return this->runningCloudApps_ != nullptr;};
    void deleteRunningCloudApps() { this->runningCloudApps_ = nullptr;};
    inline const vector<ListRunningAppsResponseBody::RunningCloudApps> & getRunningCloudApps() const { DARABONBA_PTR_GET_CONST(runningCloudApps_, vector<ListRunningAppsResponseBody::RunningCloudApps>) };
    inline vector<ListRunningAppsResponseBody::RunningCloudApps> getRunningCloudApps() { DARABONBA_PTR_GET(runningCloudApps_, vector<ListRunningAppsResponseBody::RunningCloudApps>) };
    inline ListRunningAppsResponseBody& setRunningCloudApps(const vector<ListRunningAppsResponseBody::RunningCloudApps> & runningCloudApps) { DARABONBA_PTR_SET_VALUE(runningCloudApps_, runningCloudApps) };
    inline ListRunningAppsResponseBody& setRunningCloudApps(vector<ListRunningAppsResponseBody::RunningCloudApps> && runningCloudApps) { DARABONBA_PTR_SET_RVALUE(runningCloudApps_, runningCloudApps) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListRunningAppsResponseBody::RunningCloudApps>> runningCloudApps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210903
#endif
