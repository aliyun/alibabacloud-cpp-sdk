// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCRAWLERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCRAWLERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetCrawlerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCrawlerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Crawler, crawler_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCrawlerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Crawler, crawler_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCrawlerResponseBody() = default ;
    GetCrawlerResponseBody(const GetCrawlerResponseBody &) = default ;
    GetCrawlerResponseBody(GetCrawlerResponseBody &&) = default ;
    GetCrawlerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCrawlerResponseBody() = default ;
    GetCrawlerResponseBody& operator=(const GetCrawlerResponseBody &) = default ;
    GetCrawlerResponseBody& operator=(GetCrawlerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Crawler : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Crawler& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(EnableAiComment, enableAiComment_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LastRunStatus, lastRunStatus_);
        DARABONBA_PTR_TO_JSON(LastRunTaskInstanceId, lastRunTaskInstanceId_);
        DARABONBA_PTR_TO_JSON(MetaEntityId, metaEntityId_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Options, options_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Crawler& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(EnableAiComment, enableAiComment_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LastRunStatus, lastRunStatus_);
        DARABONBA_PTR_FROM_JSON(LastRunTaskInstanceId, lastRunTaskInstanceId_);
        DARABONBA_PTR_FROM_JSON(MetaEntityId, metaEntityId_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Options, options_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Crawler() = default ;
      Crawler(const Crawler &) = default ;
      Crawler(Crawler &&) = default ;
      Crawler(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Crawler() = default ;
      Crawler& operator=(const Crawler &) = default ;
      Crawler& operator=(Crawler &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Scope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Scope& obj) { 
          DARABONBA_PTR_TO_JSON(ExcludeRegex, excludeRegex_);
          DARABONBA_PTR_TO_JSON(Items, items_);
          DARABONBA_PTR_TO_JSON(Unit, unit_);
        };
        friend void from_json(const Darabonba::Json& j, Scope& obj) { 
          DARABONBA_PTR_FROM_JSON(ExcludeRegex, excludeRegex_);
          DARABONBA_PTR_FROM_JSON(Items, items_);
          DARABONBA_PTR_FROM_JSON(Unit, unit_);
        };
        Scope() = default ;
        Scope(const Scope &) = default ;
        Scope(Scope &&) = default ;
        Scope(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Scope() = default ;
        Scope& operator=(const Scope &) = default ;
        Scope& operator=(Scope &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->excludeRegex_ == nullptr
        && this->items_ == nullptr && this->unit_ == nullptr; };
        // excludeRegex Field Functions 
        bool hasExcludeRegex() const { return this->excludeRegex_ != nullptr;};
        void deleteExcludeRegex() { this->excludeRegex_ = nullptr;};
        inline string getExcludeRegex() const { DARABONBA_PTR_GET_DEFAULT(excludeRegex_, "") };
        inline Scope& setExcludeRegex(string excludeRegex) { DARABONBA_PTR_SET_VALUE(excludeRegex_, excludeRegex) };


        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<string> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<string>) };
        inline vector<string> getItems() { DARABONBA_PTR_GET(items_, vector<string>) };
        inline Scope& setItems(const vector<string> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline Scope& setItems(vector<string> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline Scope& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


      protected:
        shared_ptr<string> excludeRegex_ {};
        shared_ptr<vector<string>> items_ {};
        shared_ptr<string> unit_ {};
      };

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
        && this->dataSourceId_ == nullptr && this->enableAiComment_ == nullptr && this->envType_ == nullptr && this->id_ == nullptr && this->lastRunStatus_ == nullptr
        && this->lastRunTaskInstanceId_ == nullptr && this->metaEntityId_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->options_ == nullptr
        && this->owner_ == nullptr && this->projectId_ == nullptr && this->resourceGroupId_ == nullptr && this->scheduleConfig_ == nullptr && this->scope_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr && this->type_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Crawler& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
      inline Crawler& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // enableAiComment Field Functions 
      bool hasEnableAiComment() const { return this->enableAiComment_ != nullptr;};
      void deleteEnableAiComment() { this->enableAiComment_ = nullptr;};
      inline bool getEnableAiComment() const { DARABONBA_PTR_GET_DEFAULT(enableAiComment_, false) };
      inline Crawler& setEnableAiComment(bool enableAiComment) { DARABONBA_PTR_SET_VALUE(enableAiComment_, enableAiComment) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline Crawler& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Crawler& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // lastRunStatus Field Functions 
      bool hasLastRunStatus() const { return this->lastRunStatus_ != nullptr;};
      void deleteLastRunStatus() { this->lastRunStatus_ = nullptr;};
      inline string getLastRunStatus() const { DARABONBA_PTR_GET_DEFAULT(lastRunStatus_, "") };
      inline Crawler& setLastRunStatus(string lastRunStatus) { DARABONBA_PTR_SET_VALUE(lastRunStatus_, lastRunStatus) };


      // lastRunTaskInstanceId Field Functions 
      bool hasLastRunTaskInstanceId() const { return this->lastRunTaskInstanceId_ != nullptr;};
      void deleteLastRunTaskInstanceId() { this->lastRunTaskInstanceId_ = nullptr;};
      inline int64_t getLastRunTaskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(lastRunTaskInstanceId_, 0L) };
      inline Crawler& setLastRunTaskInstanceId(int64_t lastRunTaskInstanceId) { DARABONBA_PTR_SET_VALUE(lastRunTaskInstanceId_, lastRunTaskInstanceId) };


      // metaEntityId Field Functions 
      bool hasMetaEntityId() const { return this->metaEntityId_ != nullptr;};
      void deleteMetaEntityId() { this->metaEntityId_ = nullptr;};
      inline string getMetaEntityId() const { DARABONBA_PTR_GET_DEFAULT(metaEntityId_, "") };
      inline Crawler& setMetaEntityId(string metaEntityId) { DARABONBA_PTR_SET_VALUE(metaEntityId_, metaEntityId) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline Crawler& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Crawler& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // options Field Functions 
      bool hasOptions() const { return this->options_ != nullptr;};
      void deleteOptions() { this->options_ = nullptr;};
      inline const map<string, string> & getOptions() const { DARABONBA_PTR_GET_CONST(options_, map<string, string>) };
      inline map<string, string> getOptions() { DARABONBA_PTR_GET(options_, map<string, string>) };
      inline Crawler& setOptions(const map<string, string> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
      inline Crawler& setOptions(map<string, string> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Crawler& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Crawler& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Crawler& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // scheduleConfig Field Functions 
      bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
      void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
      inline const Crawler::ScheduleConfig & getScheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, Crawler::ScheduleConfig) };
      inline Crawler::ScheduleConfig getScheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, Crawler::ScheduleConfig) };
      inline Crawler& setScheduleConfig(const Crawler::ScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
      inline Crawler& setScheduleConfig(Crawler::ScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline const Crawler::Scope & getScope() const { DARABONBA_PTR_GET_CONST(scope_, Crawler::Scope) };
      inline Crawler::Scope getScope() { DARABONBA_PTR_GET(scope_, Crawler::Scope) };
      inline Crawler& setScope(const Crawler::Scope & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
      inline Crawler& setScope(Crawler::Scope && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Crawler& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Crawler& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Crawler& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<int64_t> dataSourceId_ {};
      shared_ptr<bool> enableAiComment_ {};
      shared_ptr<string> envType_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> lastRunStatus_ {};
      shared_ptr<int64_t> lastRunTaskInstanceId_ {};
      shared_ptr<string> metaEntityId_ {};
      shared_ptr<int64_t> modifyTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<map<string, string>> options_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<int64_t> projectId_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<Crawler::ScheduleConfig> scheduleConfig_ {};
      shared_ptr<Crawler::Scope> scope_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> taskId_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->crawler_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // crawler Field Functions 
    bool hasCrawler() const { return this->crawler_ != nullptr;};
    void deleteCrawler() { this->crawler_ = nullptr;};
    inline const GetCrawlerResponseBody::Crawler & getCrawler() const { DARABONBA_PTR_GET_CONST(crawler_, GetCrawlerResponseBody::Crawler) };
    inline GetCrawlerResponseBody::Crawler getCrawler() { DARABONBA_PTR_GET(crawler_, GetCrawlerResponseBody::Crawler) };
    inline GetCrawlerResponseBody& setCrawler(const GetCrawlerResponseBody::Crawler & crawler) { DARABONBA_PTR_SET_VALUE(crawler_, crawler) };
    inline GetCrawlerResponseBody& setCrawler(GetCrawlerResponseBody::Crawler && crawler) { DARABONBA_PTR_SET_RVALUE(crawler_, crawler) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCrawlerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCrawlerResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<GetCrawlerResponseBody::Crawler> crawler_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
