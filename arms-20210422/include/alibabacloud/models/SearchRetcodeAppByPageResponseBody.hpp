// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRETCODEAPPBYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRETCODEAPPBYPAGERESPONSEBODY_HPP_
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
  class SearchRetcodeAppByPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchRetcodeAppByPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchRetcodeAppByPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SearchRetcodeAppByPageResponseBody() = default ;
    SearchRetcodeAppByPageResponseBody(const SearchRetcodeAppByPageResponseBody &) = default ;
    SearchRetcodeAppByPageResponseBody(SearchRetcodeAppByPageResponseBody &&) = default ;
    SearchRetcodeAppByPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchRetcodeAppByPageResponseBody() = default ;
    SearchRetcodeAppByPageResponseBody& operator=(const SearchRetcodeAppByPageResponseBody &) = default ;
    SearchRetcodeAppByPageResponseBody& operator=(SearchRetcodeAppByPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageBean& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(RetcodeApps, retcodeApps_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageBean& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(RetcodeApps, retcodeApps_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class RetcodeApps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RetcodeApps& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Pid, pid_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, RetcodeApps& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Pid, pid_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        RetcodeApps() = default ;
        RetcodeApps(const RetcodeApps &) = default ;
        RetcodeApps(RetcodeApps &&) = default ;
        RetcodeApps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RetcodeApps() = default ;
        RetcodeApps& operator=(const RetcodeApps &) = default ;
        RetcodeApps& operator=(RetcodeApps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->createTime_ == nullptr && this->pid_ == nullptr && this->regionId_ == nullptr && this->type_ == nullptr
        && this->updateTime_ == nullptr && this->userId_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
        inline RetcodeApps& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline RetcodeApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline RetcodeApps& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // pid Field Functions 
        bool hasPid() const { return this->pid_ != nullptr;};
        void deletePid() { this->pid_ = nullptr;};
        inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
        inline RetcodeApps& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline RetcodeApps& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline RetcodeApps& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline RetcodeApps& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline RetcodeApps& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<int64_t> appId_ {};
        shared_ptr<string> appName_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> pid_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> updateTime_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->retcodeApps_ == nullptr && this->totalCount_ == nullptr; };
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


      // retcodeApps Field Functions 
      bool hasRetcodeApps() const { return this->retcodeApps_ != nullptr;};
      void deleteRetcodeApps() { this->retcodeApps_ = nullptr;};
      inline const vector<PageBean::RetcodeApps> & getRetcodeApps() const { DARABONBA_PTR_GET_CONST(retcodeApps_, vector<PageBean::RetcodeApps>) };
      inline vector<PageBean::RetcodeApps> getRetcodeApps() { DARABONBA_PTR_GET(retcodeApps_, vector<PageBean::RetcodeApps>) };
      inline PageBean& setRetcodeApps(const vector<PageBean::RetcodeApps> & retcodeApps) { DARABONBA_PTR_SET_VALUE(retcodeApps_, retcodeApps) };
      inline PageBean& setRetcodeApps(vector<PageBean::RetcodeApps> && retcodeApps) { DARABONBA_PTR_SET_RVALUE(retcodeApps_, retcodeApps) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageBean& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<PageBean::RetcodeApps>> retcodeApps_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageBean_ == nullptr
        && this->requestId_ == nullptr; };
    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const SearchRetcodeAppByPageResponseBody::PageBean & getPageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, SearchRetcodeAppByPageResponseBody::PageBean) };
    inline SearchRetcodeAppByPageResponseBody::PageBean getPageBean() { DARABONBA_PTR_GET(pageBean_, SearchRetcodeAppByPageResponseBody::PageBean) };
    inline SearchRetcodeAppByPageResponseBody& setPageBean(const SearchRetcodeAppByPageResponseBody::PageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline SearchRetcodeAppByPageResponseBody& setPageBean(SearchRetcodeAppByPageResponseBody::PageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchRetcodeAppByPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<SearchRetcodeAppByPageResponseBody::PageBean> pageBean_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
