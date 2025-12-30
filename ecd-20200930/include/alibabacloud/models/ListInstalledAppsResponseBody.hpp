// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTALLEDAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTALLEDAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListInstalledAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstalledAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Apps, apps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstalledAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Apps, apps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInstalledAppsResponseBody() = default ;
    ListInstalledAppsResponseBody(const ListInstalledAppsResponseBody &) = default ;
    ListInstalledAppsResponseBody(ListInstalledAppsResponseBody &&) = default ;
    ListInstalledAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstalledAppsResponseBody() = default ;
    ListInstalledAppsResponseBody& operator=(const ListInstalledAppsResponseBody &) = default ;
    ListInstalledAppsResponseBody& operator=(ListInstalledAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Apps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Apps& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Apps& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      };
      Apps() = default ;
      Apps(const Apps &) = default ;
      Apps(Apps &&) = default ;
      Apps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Apps() = default ;
      Apps& operator=(const Apps &) = default ;
      Apps& operator=(Apps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appName_ == nullptr
        && this->appVersion_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Apps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // appVersion Field Functions 
      bool hasAppVersion() const { return this->appVersion_ != nullptr;};
      void deleteAppVersion() { this->appVersion_ = nullptr;};
      inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
      inline Apps& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    protected:
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The application version.
      shared_ptr<string> appVersion_ {};
    };

    virtual bool empty() const override { return this->apps_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // apps Field Functions 
    bool hasApps() const { return this->apps_ != nullptr;};
    void deleteApps() { this->apps_ = nullptr;};
    inline const vector<ListInstalledAppsResponseBody::Apps> & getApps() const { DARABONBA_PTR_GET_CONST(apps_, vector<ListInstalledAppsResponseBody::Apps>) };
    inline vector<ListInstalledAppsResponseBody::Apps> getApps() { DARABONBA_PTR_GET(apps_, vector<ListInstalledAppsResponseBody::Apps>) };
    inline ListInstalledAppsResponseBody& setApps(const vector<ListInstalledAppsResponseBody::Apps> & apps) { DARABONBA_PTR_SET_VALUE(apps_, apps) };
    inline ListInstalledAppsResponseBody& setApps(vector<ListInstalledAppsResponseBody::Apps> && apps) { DARABONBA_PTR_SET_RVALUE(apps_, apps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstalledAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListInstalledAppsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the application.
    shared_ptr<vector<ListInstalledAppsResponseBody::Apps>> apps_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
