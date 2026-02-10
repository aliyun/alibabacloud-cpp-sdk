// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMACHINEAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMACHINEAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListMachineAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMachineAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppList, appList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMachineAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppList, appList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMachineAppsResponseBody() = default ;
    ListMachineAppsResponseBody(const ListMachineAppsResponseBody &) = default ;
    ListMachineAppsResponseBody(ListMachineAppsResponseBody &&) = default ;
    ListMachineAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMachineAppsResponseBody() = default ;
    ListMachineAppsResponseBody& operator=(const ListMachineAppsResponseBody &) = default ;
    ListMachineAppsResponseBody& operator=(ListMachineAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class AppList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppList& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AppRegionId, appRegionId_);
      };
      friend void from_json(const Darabonba::Json& j, AppList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AppRegionId, appRegionId_);
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->appRegionId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline AppList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline AppList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // appRegionId Field Functions 
      bool hasAppRegionId() const { return this->appRegionId_ != nullptr;};
      void deleteAppRegionId() { this->appRegionId_ = nullptr;};
      inline string getAppRegionId() const { DARABONBA_PTR_GET_DEFAULT(appRegionId_, "") };
      inline AppList& setAppRegionId(string appRegionId) { DARABONBA_PTR_SET_VALUE(appRegionId_, appRegionId) };


    protected:
      // The ID of the SAE application.
      shared_ptr<string> appId_ {};
      // The name of the SAE application.
      shared_ptr<string> appName_ {};
      // The region ID.
      shared_ptr<string> appRegionId_ {};
    };

    virtual bool empty() const override { return this->appList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // appList Field Functions 
    bool hasAppList() const { return this->appList_ != nullptr;};
    void deleteAppList() { this->appList_ = nullptr;};
    inline const vector<ListMachineAppsResponseBody::AppList> & getAppList() const { DARABONBA_PTR_GET_CONST(appList_, vector<ListMachineAppsResponseBody::AppList>) };
    inline vector<ListMachineAppsResponseBody::AppList> getAppList() { DARABONBA_PTR_GET(appList_, vector<ListMachineAppsResponseBody::AppList>) };
    inline ListMachineAppsResponseBody& setAppList(const vector<ListMachineAppsResponseBody::AppList> & appList) { DARABONBA_PTR_SET_VALUE(appList_, appList) };
    inline ListMachineAppsResponseBody& setAppList(vector<ListMachineAppsResponseBody::AppList> && appList) { DARABONBA_PTR_SET_RVALUE(appList_, appList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListMachineAppsResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListMachineAppsResponseBody::PageInfo) };
    inline ListMachineAppsResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListMachineAppsResponseBody::PageInfo) };
    inline ListMachineAppsResponseBody& setPageInfo(const ListMachineAppsResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListMachineAppsResponseBody& setPageInfo(ListMachineAppsResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMachineAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The applications.
    shared_ptr<vector<ListMachineAppsResponseBody::AppList>> appList_ {};
    // The pagination information.
    shared_ptr<ListMachineAppsResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
