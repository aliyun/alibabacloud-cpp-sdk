// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRETCODEAPPBYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRETCODEAPPBYPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
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
          DARABONBA_PTR_TO_JSON(NickName, nickName_);
          DARABONBA_PTR_TO_JSON(Pid, pid_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(RetcodeAppType, retcodeAppType_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, RetcodeApps& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(NickName, nickName_);
          DARABONBA_PTR_FROM_JSON(Pid, pid_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(RetcodeAppType, retcodeAppType_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The tag key.
          shared_ptr<string> key_ {};
          // The tag value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->createTime_ == nullptr && this->nickName_ == nullptr && this->pid_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->retcodeAppType_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr
        && this->userId_ == nullptr; };
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


        // nickName Field Functions 
        bool hasNickName() const { return this->nickName_ != nullptr;};
        void deleteNickName() { this->nickName_ = nullptr;};
        inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
        inline RetcodeApps& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


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


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline RetcodeApps& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // retcodeAppType Field Functions 
        bool hasRetcodeAppType() const { return this->retcodeAppType_ != nullptr;};
        void deleteRetcodeAppType() { this->retcodeAppType_ = nullptr;};
        inline string getRetcodeAppType() const { DARABONBA_PTR_GET_DEFAULT(retcodeAppType_, "") };
        inline RetcodeApps& setRetcodeAppType(string retcodeAppType) { DARABONBA_PTR_SET_VALUE(retcodeAppType_, retcodeAppType) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<RetcodeApps::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<RetcodeApps::Tags>) };
        inline vector<RetcodeApps::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<RetcodeApps::Tags>) };
        inline RetcodeApps& setTags(const vector<RetcodeApps::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline RetcodeApps& setTags(vector<RetcodeApps::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


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
        // The ID of the application. The parameter is an auto-increment parameter.
        shared_ptr<int64_t> appId_ {};
        // The name of the application.
        shared_ptr<string> appName_ {};
        // The time when the task was created.
        shared_ptr<int64_t> createTime_ {};
        // The alias of the application.
        shared_ptr<string> nickName_ {};
        // The process identifier (PID) of the application.
        shared_ptr<string> pid_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The ID of the resource group.
        shared_ptr<string> resourceGroupId_ {};
        // The type of the application. Valid values:
        // 
        // *   `web`: web application
        // *   `weex`: Weex mobile app
        // *   `mini_dd`: DingTalk mini program
        // *   `mini_alipay`: Alipay mini program
        // *   `mini_wx`: WeChat mini program
        // *   `mini_common`: mini program on other platforms
        shared_ptr<string> retcodeAppType_ {};
        // The tag.
        shared_ptr<vector<RetcodeApps::Tags>> tags_ {};
        // The type of the monitoring task. Valid values:
        // 
        // *   `TRACE`: Application Monitoring
        // *   `RETCODE`: Browser Monitoring
        shared_ptr<string> type_ {};
        // The time when the task was updated.
        shared_ptr<int64_t> updateTime_ {};
        // The user ID.
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
      // The page number of the returned page.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The browser monitoring tasks that are returned.
      shared_ptr<vector<PageBean::RetcodeApps>> retcodeApps_ {};
      // The total number of returned entries.
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
    // The returned page information.
    shared_ptr<SearchRetcodeAppByPageResponseBody::PageBean> pageBean_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
