// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCRAWLERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCRAWLERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCrawlersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCrawlersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCrawlersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCrawlersResponseBody() = default ;
    ListCrawlersResponseBody(const ListCrawlersResponseBody &) = default ;
    ListCrawlersResponseBody(ListCrawlersResponseBody &&) = default ;
    ListCrawlersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCrawlersResponseBody() = default ;
    ListCrawlersResponseBody& operator=(const ListCrawlersResponseBody &) = default ;
    ListCrawlersResponseBody& operator=(ListCrawlersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Crawlers, crawlers_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Crawlers, crawlers_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Crawlers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Crawlers& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
          DARABONBA_PTR_TO_JSON(EnvType, envType_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LastRunStatus, lastRunStatus_);
          DARABONBA_PTR_TO_JSON(MetaEntityId, metaEntityId_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Crawlers& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
          DARABONBA_PTR_FROM_JSON(EnvType, envType_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LastRunStatus, lastRunStatus_);
          DARABONBA_PTR_FROM_JSON(MetaEntityId, metaEntityId_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Crawlers() = default ;
        Crawlers(const Crawlers &) = default ;
        Crawlers(Crawlers &&) = default ;
        Crawlers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Crawlers() = default ;
        Crawlers& operator=(const Crawlers &) = default ;
        Crawlers& operator=(Crawlers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ScheduleConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScheduleConfig& obj) { 
            DARABONBA_PTR_TO_JSON(CronExpress, cronExpress_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, ScheduleConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(CronExpress, cronExpress_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          ScheduleConfig() = default ;
          ScheduleConfig(const ScheduleConfig &) = default ;
          ScheduleConfig(ScheduleConfig &&) = default ;
          ScheduleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScheduleConfig() = default ;
          ScheduleConfig& operator=(const ScheduleConfig &) = default ;
          ScheduleConfig& operator=(ScheduleConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cronExpress_ == nullptr
        && this->type_ == nullptr; };
          // cronExpress Field Functions 
          bool hasCronExpress() const { return this->cronExpress_ != nullptr;};
          void deleteCronExpress() { this->cronExpress_ = nullptr;};
          inline string getCronExpress() const { DARABONBA_PTR_GET_DEFAULT(cronExpress_, "") };
          inline ScheduleConfig& setCronExpress(string cronExpress) { DARABONBA_PTR_SET_VALUE(cronExpress_, cronExpress) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline ScheduleConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> cronExpress_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dataSourceId_ == nullptr && this->envType_ == nullptr && this->id_ == nullptr && this->lastRunStatus_ == nullptr && this->metaEntityId_ == nullptr
        && this->modifyTime_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->projectId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->scheduleConfig_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->type_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Crawlers& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dataSourceId Field Functions 
        bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
        void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
        inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
        inline Crawlers& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline Crawlers& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Crawlers& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // lastRunStatus Field Functions 
        bool hasLastRunStatus() const { return this->lastRunStatus_ != nullptr;};
        void deleteLastRunStatus() { this->lastRunStatus_ = nullptr;};
        inline string getLastRunStatus() const { DARABONBA_PTR_GET_DEFAULT(lastRunStatus_, "") };
        inline Crawlers& setLastRunStatus(string lastRunStatus) { DARABONBA_PTR_SET_VALUE(lastRunStatus_, lastRunStatus) };


        // metaEntityId Field Functions 
        bool hasMetaEntityId() const { return this->metaEntityId_ != nullptr;};
        void deleteMetaEntityId() { this->metaEntityId_ = nullptr;};
        inline string getMetaEntityId() const { DARABONBA_PTR_GET_DEFAULT(metaEntityId_, "") };
        inline Crawlers& setMetaEntityId(string metaEntityId) { DARABONBA_PTR_SET_VALUE(metaEntityId_, metaEntityId) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
        inline Crawlers& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Crawlers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Crawlers& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Crawlers& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Crawlers& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // scheduleConfig Field Functions 
        bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
        void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
        inline const Crawlers::ScheduleConfig & getScheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, Crawlers::ScheduleConfig) };
        inline Crawlers::ScheduleConfig getScheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, Crawlers::ScheduleConfig) };
        inline Crawlers& setScheduleConfig(const Crawlers::ScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
        inline Crawlers& setScheduleConfig(Crawlers::ScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Crawlers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
        inline Crawlers& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Crawlers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<int64_t> dataSourceId_ {};
        shared_ptr<string> envType_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> lastRunStatus_ {};
        shared_ptr<string> metaEntityId_ {};
        shared_ptr<int64_t> modifyTime_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> owner_ {};
        shared_ptr<int64_t> projectId_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<Crawlers::ScheduleConfig> scheduleConfig_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int64_t> taskId_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->crawlers_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // crawlers Field Functions 
      bool hasCrawlers() const { return this->crawlers_ != nullptr;};
      void deleteCrawlers() { this->crawlers_ = nullptr;};
      inline const vector<PagingInfo::Crawlers> & getCrawlers() const { DARABONBA_PTR_GET_CONST(crawlers_, vector<PagingInfo::Crawlers>) };
      inline vector<PagingInfo::Crawlers> getCrawlers() { DARABONBA_PTR_GET(crawlers_, vector<PagingInfo::Crawlers>) };
      inline PagingInfo& setCrawlers(const vector<PagingInfo::Crawlers> & crawlers) { DARABONBA_PTR_SET_VALUE(crawlers_, crawlers) };
      inline PagingInfo& setCrawlers(vector<PagingInfo::Crawlers> && crawlers) { DARABONBA_PTR_SET_RVALUE(crawlers_, crawlers) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline PagingInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PagingInfo::Crawlers>> crawlers_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListCrawlersResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListCrawlersResponseBody::PagingInfo) };
    inline ListCrawlersResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListCrawlersResponseBody::PagingInfo) };
    inline ListCrawlersResponseBody& setPagingInfo(const ListCrawlersResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListCrawlersResponseBody& setPagingInfo(ListCrawlersResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCrawlersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCrawlersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<ListCrawlersResponseBody::PagingInfo> pagingInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
