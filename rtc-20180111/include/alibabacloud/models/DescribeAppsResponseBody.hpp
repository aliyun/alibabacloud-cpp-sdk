// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppList, appList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppList, appList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
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
    class AppList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppList& obj) { 
        DARABONBA_PTR_TO_JSON(App, app_);
      };
      friend void from_json(const Darabonba::Json& j, AppList& obj) { 
        DARABONBA_PTR_FROM_JSON(App, app_);
      };
      AppList() = default ;
      AppList(const AppList &) = default ;
      AppList(AppList &&) = default ;
      AppList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppList() = default ;
      AppList& operator=(const AppList &) = default ;
      AppList& operator=(AppList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class App : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const App& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(AppType, appType_);
          DARABONBA_PTR_TO_JSON(BillType, billType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(ServiceAreas, serviceAreas_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, App& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(AppType, appType_);
          DARABONBA_PTR_FROM_JSON(BillType, billType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(ServiceAreas, serviceAreas_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        App() = default ;
        App(const App &) = default ;
        App(App &&) = default ;
        App(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~App() = default ;
        App& operator=(const App &) = default ;
        App& operator=(App &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ServiceAreas : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ServiceAreas& obj) { 
            DARABONBA_PTR_TO_JSON(ServiceArea, serviceArea_);
          };
          friend void from_json(const Darabonba::Json& j, ServiceAreas& obj) { 
            DARABONBA_PTR_FROM_JSON(ServiceArea, serviceArea_);
          };
          ServiceAreas() = default ;
          ServiceAreas(const ServiceAreas &) = default ;
          ServiceAreas(ServiceAreas &&) = default ;
          ServiceAreas(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ServiceAreas() = default ;
          ServiceAreas& operator=(const ServiceAreas &) = default ;
          ServiceAreas& operator=(ServiceAreas &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->serviceArea_ == nullptr; };
          // serviceArea Field Functions 
          bool hasServiceArea() const { return this->serviceArea_ != nullptr;};
          void deleteServiceArea() { this->serviceArea_ = nullptr;};
          inline const vector<string> & getServiceArea() const { DARABONBA_PTR_GET_CONST(serviceArea_, vector<string>) };
          inline vector<string> getServiceArea() { DARABONBA_PTR_GET(serviceArea_, vector<string>) };
          inline ServiceAreas& setServiceArea(const vector<string> & serviceArea) { DARABONBA_PTR_SET_VALUE(serviceArea_, serviceArea) };
          inline ServiceAreas& setServiceArea(vector<string> && serviceArea) { DARABONBA_PTR_SET_RVALUE(serviceArea_, serviceArea) };


        protected:
          shared_ptr<vector<string>> serviceArea_ {};
        };

        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->appType_ == nullptr && this->billType_ == nullptr && this->createTime_ == nullptr && this->serviceAreas_ == nullptr
        && this->status_ == nullptr && this->version_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline App& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline App& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // appType Field Functions 
        bool hasAppType() const { return this->appType_ != nullptr;};
        void deleteAppType() { this->appType_ = nullptr;};
        inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
        inline App& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


        // billType Field Functions 
        bool hasBillType() const { return this->billType_ != nullptr;};
        void deleteBillType() { this->billType_ = nullptr;};
        inline string getBillType() const { DARABONBA_PTR_GET_DEFAULT(billType_, "") };
        inline App& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline App& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // serviceAreas Field Functions 
        bool hasServiceAreas() const { return this->serviceAreas_ != nullptr;};
        void deleteServiceAreas() { this->serviceAreas_ = nullptr;};
        inline const App::ServiceAreas & getServiceAreas() const { DARABONBA_PTR_GET_CONST(serviceAreas_, App::ServiceAreas) };
        inline App::ServiceAreas getServiceAreas() { DARABONBA_PTR_GET(serviceAreas_, App::ServiceAreas) };
        inline App& setServiceAreas(const App::ServiceAreas & serviceAreas) { DARABONBA_PTR_SET_VALUE(serviceAreas_, serviceAreas) };
        inline App& setServiceAreas(App::ServiceAreas && serviceAreas) { DARABONBA_PTR_SET_RVALUE(serviceAreas_, serviceAreas) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline App& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline App& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> appId_ {};
        shared_ptr<string> appName_ {};
        shared_ptr<string> appType_ {};
        shared_ptr<string> billType_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<App::ServiceAreas> serviceAreas_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->app_ == nullptr; };
      // app Field Functions 
      bool hasApp() const { return this->app_ != nullptr;};
      void deleteApp() { this->app_ = nullptr;};
      inline const vector<AppList::App> & getApp() const { DARABONBA_PTR_GET_CONST(app_, vector<AppList::App>) };
      inline vector<AppList::App> getApp() { DARABONBA_PTR_GET(app_, vector<AppList::App>) };
      inline AppList& setApp(const vector<AppList::App> & app) { DARABONBA_PTR_SET_VALUE(app_, app) };
      inline AppList& setApp(vector<AppList::App> && app) { DARABONBA_PTR_SET_RVALUE(app_, app) };


    protected:
      shared_ptr<vector<AppList::App>> app_ {};
    };

    virtual bool empty() const override { return this->appList_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr && this->totalPage_ == nullptr; };
    // appList Field Functions 
    bool hasAppList() const { return this->appList_ != nullptr;};
    void deleteAppList() { this->appList_ = nullptr;};
    inline const DescribeAppsResponseBody::AppList & getAppList() const { DARABONBA_PTR_GET_CONST(appList_, DescribeAppsResponseBody::AppList) };
    inline DescribeAppsResponseBody::AppList getAppList() { DARABONBA_PTR_GET(appList_, DescribeAppsResponseBody::AppList) };
    inline DescribeAppsResponseBody& setAppList(const DescribeAppsResponseBody::AppList & appList) { DARABONBA_PTR_SET_VALUE(appList_, appList) };
    inline DescribeAppsResponseBody& setAppList(DescribeAppsResponseBody::AppList && appList) { DARABONBA_PTR_SET_RVALUE(appList_, appList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeAppsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeAppsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<DescribeAppsResponseBody::AppList> appList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalNum_ {};
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
