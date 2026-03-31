// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListMmsJobsResponseBody() = default ;
    ListMmsJobsResponseBody(const ListMmsJobsResponseBody &) = default ;
    ListMmsJobsResponseBody(ListMmsJobsResponseBody &&) = default ;
    ListMmsJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsJobsResponseBody() = default ;
    ListMmsJobsResponseBody& operator=(const ListMmsJobsResponseBody &) = default ;
    ListMmsJobsResponseBody& operator=(ListMmsJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(objectList, objectList_);
        DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(objectList, objectList_);
        DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ObjectList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ObjectList& obj) { 
          DARABONBA_PTR_TO_JSON(config, config_);
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(dbId, dbId_);
          DARABONBA_PTR_TO_JSON(dstDbName, dstDbName_);
          DARABONBA_PTR_TO_JSON(dstSchemaName, dstSchemaName_);
          DARABONBA_PTR_TO_JSON(eta, eta_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
          DARABONBA_PTR_TO_JSON(sourceName, sourceName_);
          DARABONBA_PTR_TO_JSON(srcDbName, srcDbName_);
          DARABONBA_PTR_TO_JSON(srcSchemaName, srcSchemaName_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(stopped, stopped_);
          DARABONBA_PTR_TO_JSON(taskDone, taskDone_);
          DARABONBA_PTR_TO_JSON(taskNum, taskNum_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ObjectList& obj) { 
          DARABONBA_PTR_FROM_JSON(config, config_);
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(dbId, dbId_);
          DARABONBA_PTR_FROM_JSON(dstDbName, dstDbName_);
          DARABONBA_PTR_FROM_JSON(dstSchemaName, dstSchemaName_);
          DARABONBA_PTR_FROM_JSON(eta, eta_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
          DARABONBA_PTR_FROM_JSON(sourceName, sourceName_);
          DARABONBA_PTR_FROM_JSON(srcDbName, srcDbName_);
          DARABONBA_PTR_FROM_JSON(srcSchemaName, srcSchemaName_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(stopped, stopped_);
          DARABONBA_PTR_FROM_JSON(taskDone, taskDone_);
          DARABONBA_PTR_FROM_JSON(taskNum, taskNum_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        ObjectList() = default ;
        ObjectList(const ObjectList &) = default ;
        ObjectList(ObjectList &&) = default ;
        ObjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ObjectList() = default ;
        ObjectList& operator=(const ObjectList &) = default ;
        ObjectList& operator=(ObjectList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Config : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Config& obj) { 
            DARABONBA_PTR_TO_JSON(columnMapping, columnMapping_);
            DARABONBA_PTR_TO_JSON(enableVerification, enableVerification_);
            DARABONBA_PTR_TO_JSON(increment, increment_);
            DARABONBA_ANY_TO_JSON(others, others_);
            DARABONBA_PTR_TO_JSON(partitionFilters, partitionFilters_);
            DARABONBA_PTR_TO_JSON(partitions, partitions_);
            DARABONBA_PTR_TO_JSON(schemaOnly, schemaOnly_);
            DARABONBA_PTR_TO_JSON(tableBlackList, tableBlackList_);
            DARABONBA_PTR_TO_JSON(tableMapping, tableMapping_);
            DARABONBA_PTR_TO_JSON(tableWhiteList, tableWhiteList_);
            DARABONBA_PTR_TO_JSON(tables, tables_);
            DARABONBA_PTR_TO_JSON(taskType, taskType_);
            DARABONBA_PTR_TO_JSON(tunnelQuota, tunnelQuota_);
          };
          friend void from_json(const Darabonba::Json& j, Config& obj) { 
            DARABONBA_PTR_FROM_JSON(columnMapping, columnMapping_);
            DARABONBA_PTR_FROM_JSON(enableVerification, enableVerification_);
            DARABONBA_PTR_FROM_JSON(increment, increment_);
            DARABONBA_ANY_FROM_JSON(others, others_);
            DARABONBA_PTR_FROM_JSON(partitionFilters, partitionFilters_);
            DARABONBA_PTR_FROM_JSON(partitions, partitions_);
            DARABONBA_PTR_FROM_JSON(schemaOnly, schemaOnly_);
            DARABONBA_PTR_FROM_JSON(tableBlackList, tableBlackList_);
            DARABONBA_PTR_FROM_JSON(tableMapping, tableMapping_);
            DARABONBA_PTR_FROM_JSON(tableWhiteList, tableWhiteList_);
            DARABONBA_PTR_FROM_JSON(tables, tables_);
            DARABONBA_PTR_FROM_JSON(taskType, taskType_);
            DARABONBA_PTR_FROM_JSON(tunnelQuota, tunnelQuota_);
          };
          Config() = default ;
          Config(const Config &) = default ;
          Config(Config &&) = default ;
          Config(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Config() = default ;
          Config& operator=(const Config &) = default ;
          Config& operator=(Config &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->columnMapping_ == nullptr
        && this->enableVerification_ == nullptr && this->increment_ == nullptr && this->others_ == nullptr && this->partitionFilters_ == nullptr && this->partitions_ == nullptr
        && this->schemaOnly_ == nullptr && this->tableBlackList_ == nullptr && this->tableMapping_ == nullptr && this->tableWhiteList_ == nullptr && this->tables_ == nullptr
        && this->taskType_ == nullptr && this->tunnelQuota_ == nullptr; };
          // columnMapping Field Functions 
          bool hasColumnMapping() const { return this->columnMapping_ != nullptr;};
          void deleteColumnMapping() { this->columnMapping_ = nullptr;};
          inline const map<string, string> & getColumnMapping() const { DARABONBA_PTR_GET_CONST(columnMapping_, map<string, string>) };
          inline map<string, string> getColumnMapping() { DARABONBA_PTR_GET(columnMapping_, map<string, string>) };
          inline Config& setColumnMapping(const map<string, string> & columnMapping) { DARABONBA_PTR_SET_VALUE(columnMapping_, columnMapping) };
          inline Config& setColumnMapping(map<string, string> && columnMapping) { DARABONBA_PTR_SET_RVALUE(columnMapping_, columnMapping) };


          // enableVerification Field Functions 
          bool hasEnableVerification() const { return this->enableVerification_ != nullptr;};
          void deleteEnableVerification() { this->enableVerification_ = nullptr;};
          inline bool getEnableVerification() const { DARABONBA_PTR_GET_DEFAULT(enableVerification_, false) };
          inline Config& setEnableVerification(bool enableVerification) { DARABONBA_PTR_SET_VALUE(enableVerification_, enableVerification) };


          // increment Field Functions 
          bool hasIncrement() const { return this->increment_ != nullptr;};
          void deleteIncrement() { this->increment_ = nullptr;};
          inline bool getIncrement() const { DARABONBA_PTR_GET_DEFAULT(increment_, false) };
          inline Config& setIncrement(bool increment) { DARABONBA_PTR_SET_VALUE(increment_, increment) };


          // others Field Functions 
          bool hasOthers() const { return this->others_ != nullptr;};
          void deleteOthers() { this->others_ = nullptr;};
          inline           const Darabonba::Json & getOthers() const { DARABONBA_GET(others_) };
          Darabonba::Json & getOthers() { DARABONBA_GET(others_) };
          inline Config& setOthers(const Darabonba::Json & others) { DARABONBA_SET_VALUE(others_, others) };
          inline Config& setOthers(Darabonba::Json && others) { DARABONBA_SET_RVALUE(others_, others) };


          // partitionFilters Field Functions 
          bool hasPartitionFilters() const { return this->partitionFilters_ != nullptr;};
          void deletePartitionFilters() { this->partitionFilters_ = nullptr;};
          inline const map<string, string> & getPartitionFilters() const { DARABONBA_PTR_GET_CONST(partitionFilters_, map<string, string>) };
          inline map<string, string> getPartitionFilters() { DARABONBA_PTR_GET(partitionFilters_, map<string, string>) };
          inline Config& setPartitionFilters(const map<string, string> & partitionFilters) { DARABONBA_PTR_SET_VALUE(partitionFilters_, partitionFilters) };
          inline Config& setPartitionFilters(map<string, string> && partitionFilters) { DARABONBA_PTR_SET_RVALUE(partitionFilters_, partitionFilters) };


          // partitions Field Functions 
          bool hasPartitions() const { return this->partitions_ != nullptr;};
          void deletePartitions() { this->partitions_ = nullptr;};
          inline const vector<int64_t> & getPartitions() const { DARABONBA_PTR_GET_CONST(partitions_, vector<int64_t>) };
          inline vector<int64_t> getPartitions() { DARABONBA_PTR_GET(partitions_, vector<int64_t>) };
          inline Config& setPartitions(const vector<int64_t> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
          inline Config& setPartitions(vector<int64_t> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


          // schemaOnly Field Functions 
          bool hasSchemaOnly() const { return this->schemaOnly_ != nullptr;};
          void deleteSchemaOnly() { this->schemaOnly_ = nullptr;};
          inline bool getSchemaOnly() const { DARABONBA_PTR_GET_DEFAULT(schemaOnly_, false) };
          inline Config& setSchemaOnly(bool schemaOnly) { DARABONBA_PTR_SET_VALUE(schemaOnly_, schemaOnly) };


          // tableBlackList Field Functions 
          bool hasTableBlackList() const { return this->tableBlackList_ != nullptr;};
          void deleteTableBlackList() { this->tableBlackList_ = nullptr;};
          inline const vector<string> & getTableBlackList() const { DARABONBA_PTR_GET_CONST(tableBlackList_, vector<string>) };
          inline vector<string> getTableBlackList() { DARABONBA_PTR_GET(tableBlackList_, vector<string>) };
          inline Config& setTableBlackList(const vector<string> & tableBlackList) { DARABONBA_PTR_SET_VALUE(tableBlackList_, tableBlackList) };
          inline Config& setTableBlackList(vector<string> && tableBlackList) { DARABONBA_PTR_SET_RVALUE(tableBlackList_, tableBlackList) };


          // tableMapping Field Functions 
          bool hasTableMapping() const { return this->tableMapping_ != nullptr;};
          void deleteTableMapping() { this->tableMapping_ = nullptr;};
          inline const map<string, string> & getTableMapping() const { DARABONBA_PTR_GET_CONST(tableMapping_, map<string, string>) };
          inline map<string, string> getTableMapping() { DARABONBA_PTR_GET(tableMapping_, map<string, string>) };
          inline Config& setTableMapping(const map<string, string> & tableMapping) { DARABONBA_PTR_SET_VALUE(tableMapping_, tableMapping) };
          inline Config& setTableMapping(map<string, string> && tableMapping) { DARABONBA_PTR_SET_RVALUE(tableMapping_, tableMapping) };


          // tableWhiteList Field Functions 
          bool hasTableWhiteList() const { return this->tableWhiteList_ != nullptr;};
          void deleteTableWhiteList() { this->tableWhiteList_ = nullptr;};
          inline const vector<string> & getTableWhiteList() const { DARABONBA_PTR_GET_CONST(tableWhiteList_, vector<string>) };
          inline vector<string> getTableWhiteList() { DARABONBA_PTR_GET(tableWhiteList_, vector<string>) };
          inline Config& setTableWhiteList(const vector<string> & tableWhiteList) { DARABONBA_PTR_SET_VALUE(tableWhiteList_, tableWhiteList) };
          inline Config& setTableWhiteList(vector<string> && tableWhiteList) { DARABONBA_PTR_SET_RVALUE(tableWhiteList_, tableWhiteList) };


          // tables Field Functions 
          bool hasTables() const { return this->tables_ != nullptr;};
          void deleteTables() { this->tables_ = nullptr;};
          inline const vector<string> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
          inline vector<string> getTables() { DARABONBA_PTR_GET(tables_, vector<string>) };
          inline Config& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
          inline Config& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


          // taskType Field Functions 
          bool hasTaskType() const { return this->taskType_ != nullptr;};
          void deleteTaskType() { this->taskType_ = nullptr;};
          inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
          inline Config& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


          // tunnelQuota Field Functions 
          bool hasTunnelQuota() const { return this->tunnelQuota_ != nullptr;};
          void deleteTunnelQuota() { this->tunnelQuota_ = nullptr;};
          inline string getTunnelQuota() const { DARABONBA_PTR_GET_DEFAULT(tunnelQuota_, "") };
          inline Config& setTunnelQuota(string tunnelQuota) { DARABONBA_PTR_SET_VALUE(tunnelQuota_, tunnelQuota) };


        protected:
          shared_ptr<map<string, string>> columnMapping_ {};
          shared_ptr<bool> enableVerification_ {};
          shared_ptr<bool> increment_ {};
          Darabonba::Json others_ {};
          shared_ptr<map<string, string>> partitionFilters_ {};
          shared_ptr<vector<int64_t>> partitions_ {};
          shared_ptr<bool> schemaOnly_ {};
          shared_ptr<vector<string>> tableBlackList_ {};
          shared_ptr<map<string, string>> tableMapping_ {};
          shared_ptr<vector<string>> tableWhiteList_ {};
          shared_ptr<vector<string>> tables_ {};
          shared_ptr<string> taskType_ {};
          shared_ptr<string> tunnelQuota_ {};
        };

        virtual bool empty() const override { return this->config_ == nullptr
        && this->createTime_ == nullptr && this->dbId_ == nullptr && this->dstDbName_ == nullptr && this->dstSchemaName_ == nullptr && this->eta_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->sourceId_ == nullptr && this->sourceName_ == nullptr && this->srcDbName_ == nullptr
        && this->srcSchemaName_ == nullptr && this->status_ == nullptr && this->stopped_ == nullptr && this->taskDone_ == nullptr && this->taskNum_ == nullptr
        && this->type_ == nullptr; };
        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline const ObjectList::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, ObjectList::Config) };
        inline ObjectList::Config getConfig() { DARABONBA_PTR_GET(config_, ObjectList::Config) };
        inline ObjectList& setConfig(const ObjectList::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
        inline ObjectList& setConfig(ObjectList::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ObjectList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
        inline ObjectList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


        // dstDbName Field Functions 
        bool hasDstDbName() const { return this->dstDbName_ != nullptr;};
        void deleteDstDbName() { this->dstDbName_ = nullptr;};
        inline string getDstDbName() const { DARABONBA_PTR_GET_DEFAULT(dstDbName_, "") };
        inline ObjectList& setDstDbName(string dstDbName) { DARABONBA_PTR_SET_VALUE(dstDbName_, dstDbName) };


        // dstSchemaName Field Functions 
        bool hasDstSchemaName() const { return this->dstSchemaName_ != nullptr;};
        void deleteDstSchemaName() { this->dstSchemaName_ = nullptr;};
        inline string getDstSchemaName() const { DARABONBA_PTR_GET_DEFAULT(dstSchemaName_, "") };
        inline ObjectList& setDstSchemaName(string dstSchemaName) { DARABONBA_PTR_SET_VALUE(dstSchemaName_, dstSchemaName) };


        // eta Field Functions 
        bool hasEta() const { return this->eta_ != nullptr;};
        void deleteEta() { this->eta_ = nullptr;};
        inline string getEta() const { DARABONBA_PTR_GET_DEFAULT(eta_, "") };
        inline ObjectList& setEta(string eta) { DARABONBA_PTR_SET_VALUE(eta_, eta) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ObjectList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ObjectList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline int64_t getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
        inline ObjectList& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


        // sourceName Field Functions 
        bool hasSourceName() const { return this->sourceName_ != nullptr;};
        void deleteSourceName() { this->sourceName_ = nullptr;};
        inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
        inline ObjectList& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


        // srcDbName Field Functions 
        bool hasSrcDbName() const { return this->srcDbName_ != nullptr;};
        void deleteSrcDbName() { this->srcDbName_ = nullptr;};
        inline string getSrcDbName() const { DARABONBA_PTR_GET_DEFAULT(srcDbName_, "") };
        inline ObjectList& setSrcDbName(string srcDbName) { DARABONBA_PTR_SET_VALUE(srcDbName_, srcDbName) };


        // srcSchemaName Field Functions 
        bool hasSrcSchemaName() const { return this->srcSchemaName_ != nullptr;};
        void deleteSrcSchemaName() { this->srcSchemaName_ = nullptr;};
        inline string getSrcSchemaName() const { DARABONBA_PTR_GET_DEFAULT(srcSchemaName_, "") };
        inline ObjectList& setSrcSchemaName(string srcSchemaName) { DARABONBA_PTR_SET_VALUE(srcSchemaName_, srcSchemaName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ObjectList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // stopped Field Functions 
        bool hasStopped() const { return this->stopped_ != nullptr;};
        void deleteStopped() { this->stopped_ = nullptr;};
        inline bool getStopped() const { DARABONBA_PTR_GET_DEFAULT(stopped_, false) };
        inline ObjectList& setStopped(bool stopped) { DARABONBA_PTR_SET_VALUE(stopped_, stopped) };


        // taskDone Field Functions 
        bool hasTaskDone() const { return this->taskDone_ != nullptr;};
        void deleteTaskDone() { this->taskDone_ = nullptr;};
        inline int32_t getTaskDone() const { DARABONBA_PTR_GET_DEFAULT(taskDone_, 0) };
        inline ObjectList& setTaskDone(int32_t taskDone) { DARABONBA_PTR_SET_VALUE(taskDone_, taskDone) };


        // taskNum Field Functions 
        bool hasTaskNum() const { return this->taskNum_ != nullptr;};
        void deleteTaskNum() { this->taskNum_ = nullptr;};
        inline int32_t getTaskNum() const { DARABONBA_PTR_GET_DEFAULT(taskNum_, 0) };
        inline ObjectList& setTaskNum(int32_t taskNum) { DARABONBA_PTR_SET_VALUE(taskNum_, taskNum) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ObjectList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<ObjectList::Config> config_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<int64_t> dbId_ {};
        shared_ptr<string> dstDbName_ {};
        shared_ptr<string> dstSchemaName_ {};
        shared_ptr<string> eta_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> sourceId_ {};
        shared_ptr<string> sourceName_ {};
        shared_ptr<string> srcDbName_ {};
        shared_ptr<string> srcSchemaName_ {};
        shared_ptr<string> status_ {};
        shared_ptr<bool> stopped_ {};
        shared_ptr<int32_t> taskDone_ {};
        shared_ptr<int32_t> taskNum_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->objectList_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // objectList Field Functions 
      bool hasObjectList() const { return this->objectList_ != nullptr;};
      void deleteObjectList() { this->objectList_ = nullptr;};
      inline const vector<Data::ObjectList> & getObjectList() const { DARABONBA_PTR_GET_CONST(objectList_, vector<Data::ObjectList>) };
      inline vector<Data::ObjectList> getObjectList() { DARABONBA_PTR_GET(objectList_, vector<Data::ObjectList>) };
      inline Data& setObjectList(const vector<Data::ObjectList> & objectList) { DARABONBA_PTR_SET_VALUE(objectList_, objectList) };
      inline Data& setObjectList(vector<Data::ObjectList> && objectList) { DARABONBA_PTR_SET_RVALUE(objectList_, objectList) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Data::ObjectList>> objectList_ {};
      shared_ptr<int32_t> pageNum_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListMmsJobsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListMmsJobsResponseBody::Data) };
    inline ListMmsJobsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListMmsJobsResponseBody::Data) };
    inline ListMmsJobsResponseBody& setData(const ListMmsJobsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMmsJobsResponseBody& setData(ListMmsJobsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMmsJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListMmsJobsResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
