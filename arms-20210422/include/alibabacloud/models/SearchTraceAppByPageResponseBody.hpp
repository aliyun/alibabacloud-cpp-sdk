// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTRACEAPPBYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTRACEAPPBYPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class SearchTraceAppByPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTraceAppByPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTraceAppByPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SearchTraceAppByPageResponseBody() = default ;
    SearchTraceAppByPageResponseBody(const SearchTraceAppByPageResponseBody &) = default ;
    SearchTraceAppByPageResponseBody(SearchTraceAppByPageResponseBody &&) = default ;
    SearchTraceAppByPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTraceAppByPageResponseBody() = default ;
    SearchTraceAppByPageResponseBody& operator=(const SearchTraceAppByPageResponseBody &) = default ;
    SearchTraceAppByPageResponseBody& operator=(SearchTraceAppByPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageBean& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(TraceApps, traceApps_);
      };
      friend void from_json(const Darabonba::Json& j, PageBean& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(TraceApps, traceApps_);
      };
      PageBean() = default ;
      PageBean(const PageBean &) = default ;
      PageBean(PageBean &&) = default ;
      PageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageBean() = default ;
      PageBean& operator=(const PageBean &) = default ;
      PageBean& operator=(PageBean &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TraceApps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TraceApps& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(Pid, pid_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Show, show_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, TraceApps& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(Pid, pid_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Show, show_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        TraceApps() = default ;
        TraceApps(const TraceApps &) = default ;
        TraceApps(TraceApps &&) = default ;
        TraceApps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TraceApps() = default ;
        TraceApps& operator=(const TraceApps &) = default ;
        TraceApps& operator=(TraceApps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->createTime_ == nullptr && this->labels_ == nullptr && this->pid_ == nullptr && this->regionId_ == nullptr
        && this->show_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
        inline TraceApps& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline TraceApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline TraceApps& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline const vector<string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
        inline vector<string> getLabels() { DARABONBA_PTR_GET(labels_, vector<string>) };
        inline TraceApps& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
        inline TraceApps& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


        // pid Field Functions 
        bool hasPid() const { return this->pid_ != nullptr;};
        void deletePid() { this->pid_ = nullptr;};
        inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
        inline TraceApps& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline TraceApps& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // show Field Functions 
        bool hasShow() const { return this->show_ != nullptr;};
        void deleteShow() { this->show_ = nullptr;};
        inline bool getShow() const { DARABONBA_PTR_GET_DEFAULT(show_, false) };
        inline TraceApps& setShow(bool show) { DARABONBA_PTR_SET_VALUE(show_, show) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline TraceApps& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline TraceApps& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline TraceApps& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<int64_t> appId_ {};
        shared_ptr<string> appName_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<vector<string>> labels_ {};
        shared_ptr<string> pid_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<bool> show_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> updateTime_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->traceApps_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PageBean& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageBean& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageBean& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // traceApps Field Functions 
      bool hasTraceApps() const { return this->traceApps_ != nullptr;};
      void deleteTraceApps() { this->traceApps_ = nullptr;};
      inline const vector<PageBean::TraceApps> & getTraceApps() const { DARABONBA_PTR_GET_CONST(traceApps_, vector<PageBean::TraceApps>) };
      inline vector<PageBean::TraceApps> getTraceApps() { DARABONBA_PTR_GET(traceApps_, vector<PageBean::TraceApps>) };
      inline PageBean& setTraceApps(const vector<PageBean::TraceApps> & traceApps) { DARABONBA_PTR_SET_VALUE(traceApps_, traceApps) };
      inline PageBean& setTraceApps(vector<PageBean::TraceApps> && traceApps) { DARABONBA_PTR_SET_RVALUE(traceApps_, traceApps) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
      shared_ptr<vector<PageBean::TraceApps>> traceApps_ {};
    };

    virtual bool empty() const override { return this->pageBean_ == nullptr
        && this->requestId_ == nullptr; };
    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const SearchTraceAppByPageResponseBody::PageBean & getPageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, SearchTraceAppByPageResponseBody::PageBean) };
    inline SearchTraceAppByPageResponseBody::PageBean getPageBean() { DARABONBA_PTR_GET(pageBean_, SearchTraceAppByPageResponseBody::PageBean) };
    inline SearchTraceAppByPageResponseBody& setPageBean(const SearchTraceAppByPageResponseBody::PageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline SearchTraceAppByPageResponseBody& setPageBean(SearchTraceAppByPageResponseBody::PageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchTraceAppByPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<SearchTraceAppByPageResponseBody::PageBean> pageBean_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
