// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ListApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationsResponseBody() = default ;
    ListApplicationsResponseBody(const ListApplicationsResponseBody &) = default ;
    ListApplicationsResponseBody(ListApplicationsResponseBody &&) = default ;
    ListApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsResponseBody() = default ;
    ListApplicationsResponseBody& operator=(const ListApplicationsResponseBody &) = default ;
    ListApplicationsResponseBody& operator=(ListApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Applications : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Applications& obj) { 
        DARABONBA_PTR_TO_JSON(Application, application_);
      };
      friend void from_json(const Darabonba::Json& j, Applications& obj) { 
        DARABONBA_PTR_FROM_JSON(Application, application_);
      };
      Applications() = default ;
      Applications(const Applications &) = default ;
      Applications(Applications &&) = default ;
      Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Applications() = default ;
      Applications& operator=(const Applications &) = default ;
      Applications& operator=(Applications &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Application : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Application& obj) { 
          DARABONBA_PTR_TO_JSON(AppList, appList_);
          DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        };
        friend void from_json(const Darabonba::Json& j, Application& obj) { 
          DARABONBA_PTR_FROM_JSON(AppList, appList_);
          DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        };
        Application() = default ;
        Application(const Application &) = default ;
        Application(Application &&) = default ;
        Application(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Application() = default ;
        Application& operator=(const Application &) = default ;
        Application& operator=(Application &&) = default ;
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
              DARABONBA_PTR_TO_JSON(AppInfo, appInfo_);
            };
            friend void from_json(const Darabonba::Json& j, App& obj) { 
              DARABONBA_PTR_FROM_JSON(AppId, appId_);
              DARABONBA_PTR_FROM_JSON(AppInfo, appInfo_);
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
            virtual bool empty() const override { return this->appId_ == nullptr
        && this->appInfo_ == nullptr; };
            // appId Field Functions 
            bool hasAppId() const { return this->appId_ != nullptr;};
            void deleteAppId() { this->appId_ = nullptr;};
            inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
            inline App& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


            // appInfo Field Functions 
            bool hasAppInfo() const { return this->appInfo_ != nullptr;};
            void deleteAppInfo() { this->appInfo_ = nullptr;};
            inline string getAppInfo() const { DARABONBA_PTR_GET_DEFAULT(appInfo_, "") };
            inline App& setAppInfo(string appInfo) { DARABONBA_PTR_SET_VALUE(appInfo_, appInfo) };


          protected:
            // The ID of the application.
            shared_ptr<string> appId_ {};
            // The information about the application, such as the resource specification, parameter configuration, and resources.
            shared_ptr<string> appInfo_ {};
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
        && this->clusterName_ == nullptr; };
        // appList Field Functions 
        bool hasAppList() const { return this->appList_ != nullptr;};
        void deleteAppList() { this->appList_ = nullptr;};
        inline const Application::AppList & getAppList() const { DARABONBA_PTR_GET_CONST(appList_, Application::AppList) };
        inline Application::AppList getAppList() { DARABONBA_PTR_GET(appList_, Application::AppList) };
        inline Application& setAppList(const Application::AppList & appList) { DARABONBA_PTR_SET_VALUE(appList_, appList) };
        inline Application& setAppList(Application::AppList && appList) { DARABONBA_PTR_SET_RVALUE(appList_, appList) };


        // clusterName Field Functions 
        bool hasClusterName() const { return this->clusterName_ != nullptr;};
        void deleteClusterName() { this->clusterName_ = nullptr;};
        inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
        inline Application& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      protected:
        // Details about the application.
        shared_ptr<Application::AppList> appList_ {};
        // The name of the cluster.
        shared_ptr<string> clusterName_ {};
      };

      virtual bool empty() const override { return this->application_ == nullptr; };
      // application Field Functions 
      bool hasApplication() const { return this->application_ != nullptr;};
      void deleteApplication() { this->application_ = nullptr;};
      inline const vector<Applications::Application> & getApplication() const { DARABONBA_PTR_GET_CONST(application_, vector<Applications::Application>) };
      inline vector<Applications::Application> getApplication() { DARABONBA_PTR_GET(application_, vector<Applications::Application>) };
      inline Applications& setApplication(const vector<Applications::Application> & application) { DARABONBA_PTR_SET_VALUE(application_, application) };
      inline Applications& setApplication(vector<Applications::Application> && application) { DARABONBA_PTR_SET_RVALUE(application_, application) };


    protected:
      shared_ptr<vector<Applications::Application>> application_ {};
    };

    virtual bool empty() const override { return this->applications_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const ListApplicationsResponseBody::Applications & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, ListApplicationsResponseBody::Applications) };
    inline ListApplicationsResponseBody::Applications getApplications() { DARABONBA_PTR_GET(applications_, ListApplicationsResponseBody::Applications) };
    inline ListApplicationsResponseBody& setApplications(const ListApplicationsResponseBody::Applications & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListApplicationsResponseBody& setApplications(ListApplicationsResponseBody::Applications && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListApplicationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApplicationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListApplicationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about applications.
    shared_ptr<ListApplicationsResponseBody::Applications> applications_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
