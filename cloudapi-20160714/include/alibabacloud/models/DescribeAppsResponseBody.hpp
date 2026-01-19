// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Apps, apps_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Apps, apps_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
    class Apps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Apps& obj) { 
        DARABONBA_PTR_TO_JSON(AppItem, appItem_);
      };
      friend void from_json(const Darabonba::Json& j, Apps& obj) { 
        DARABONBA_PTR_FROM_JSON(AppItem, appItem_);
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
      class AppItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppItem& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
        };
        friend void from_json(const Darabonba::Json& j, AppItem& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
        };
        AppItem() = default ;
        AppItem(const AppItem &) = default ;
        AppItem(AppItem &&) = default ;
        AppItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppItem() = default ;
        AppItem& operator=(const AppItem &) = default ;
        AppItem& operator=(AppItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->description_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
        inline AppItem& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline AppItem& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AppItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      protected:
        // The ID of the app.
        shared_ptr<int64_t> appId_ {};
        // The name of the app.
        shared_ptr<string> appName_ {};
        // The description of the app.
        shared_ptr<string> description_ {};
      };

      virtual bool empty() const override { return this->appItem_ == nullptr; };
      // appItem Field Functions 
      bool hasAppItem() const { return this->appItem_ != nullptr;};
      void deleteAppItem() { this->appItem_ = nullptr;};
      inline const vector<Apps::AppItem> & getAppItem() const { DARABONBA_PTR_GET_CONST(appItem_, vector<Apps::AppItem>) };
      inline vector<Apps::AppItem> getAppItem() { DARABONBA_PTR_GET(appItem_, vector<Apps::AppItem>) };
      inline Apps& setAppItem(const vector<Apps::AppItem> & appItem) { DARABONBA_PTR_SET_VALUE(appItem_, appItem) };
      inline Apps& setAppItem(vector<Apps::AppItem> && appItem) { DARABONBA_PTR_SET_RVALUE(appItem_, appItem) };


    protected:
      shared_ptr<vector<Apps::AppItem>> appItem_ {};
    };

    virtual bool empty() const override { return this->apps_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // apps Field Functions 
    bool hasApps() const { return this->apps_ != nullptr;};
    void deleteApps() { this->apps_ = nullptr;};
    inline const DescribeAppsResponseBody::Apps & getApps() const { DARABONBA_PTR_GET_CONST(apps_, DescribeAppsResponseBody::Apps) };
    inline DescribeAppsResponseBody::Apps getApps() { DARABONBA_PTR_GET(apps_, DescribeAppsResponseBody::Apps) };
    inline DescribeAppsResponseBody& setApps(const DescribeAppsResponseBody::Apps & apps) { DARABONBA_PTR_SET_VALUE(apps_, apps) };
    inline DescribeAppsResponseBody& setApps(DescribeAppsResponseBody::Apps && apps) { DARABONBA_PTR_SET_RVALUE(apps_, apps) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAppsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAppsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAppsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned app information. It is an array consisting of AppItem data.
    shared_ptr<DescribeAppsResponseBody::Apps> apps_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
