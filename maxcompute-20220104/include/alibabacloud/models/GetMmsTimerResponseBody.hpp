// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMMSTIMERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMMSTIMERRESPONSEBODY_HPP_
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
  class GetMmsTimerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMmsTimerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMmsTimerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetMmsTimerResponseBody() = default ;
    GetMmsTimerResponseBody(const GetMmsTimerResponseBody &) = default ;
    GetMmsTimerResponseBody(GetMmsTimerResponseBody &&) = default ;
    GetMmsTimerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMmsTimerResponseBody() = default ;
    GetMmsTimerResponseBody& operator=(const GetMmsTimerResponseBody &) = default ;
    GetMmsTimerResponseBody& operator=(GetMmsTimerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(dbId, dbId_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(scheduleType, scheduleType_);
        DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
        DARABONBA_PTR_TO_JSON(srcDbName, srcDbName_);
        DARABONBA_PTR_TO_JSON(stopped, stopped_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(dbId, dbId_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(scheduleType, scheduleType_);
        DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
        DARABONBA_PTR_FROM_JSON(srcDbName, srcDbName_);
        DARABONBA_PTR_FROM_JSON(stopped, stopped_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(value, value_);
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
      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(columnMapping, columnMapping_);
          DARABONBA_PTR_TO_JSON(enableDataMigration, enableDataMigration_);
          DARABONBA_PTR_TO_JSON(enableSchemaMigration, enableSchemaMigration_);
          DARABONBA_PTR_TO_JSON(enableVerification, enableVerification_);
          DARABONBA_ANY_TO_JSON(others, others_);
          DARABONBA_PTR_TO_JSON(partitionFilters, partitionFilters_);
          DARABONBA_PTR_TO_JSON(partitions, partitions_);
          DARABONBA_PTR_TO_JSON(tableBlackList, tableBlackList_);
          DARABONBA_PTR_TO_JSON(tableMapping, tableMapping_);
          DARABONBA_PTR_TO_JSON(tableWhiteList, tableWhiteList_);
          DARABONBA_PTR_TO_JSON(tables, tables_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(columnMapping, columnMapping_);
          DARABONBA_PTR_FROM_JSON(enableDataMigration, enableDataMigration_);
          DARABONBA_PTR_FROM_JSON(enableSchemaMigration, enableSchemaMigration_);
          DARABONBA_PTR_FROM_JSON(enableVerification, enableVerification_);
          DARABONBA_ANY_FROM_JSON(others, others_);
          DARABONBA_PTR_FROM_JSON(partitionFilters, partitionFilters_);
          DARABONBA_PTR_FROM_JSON(partitions, partitions_);
          DARABONBA_PTR_FROM_JSON(tableBlackList, tableBlackList_);
          DARABONBA_PTR_FROM_JSON(tableMapping, tableMapping_);
          DARABONBA_PTR_FROM_JSON(tableWhiteList, tableWhiteList_);
          DARABONBA_PTR_FROM_JSON(tables, tables_);
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
        && this->enableDataMigration_ == nullptr && this->enableSchemaMigration_ == nullptr && this->enableVerification_ == nullptr && this->others_ == nullptr && this->partitionFilters_ == nullptr
        && this->partitions_ == nullptr && this->tableBlackList_ == nullptr && this->tableMapping_ == nullptr && this->tableWhiteList_ == nullptr && this->tables_ == nullptr; };
        // columnMapping Field Functions 
        bool hasColumnMapping() const { return this->columnMapping_ != nullptr;};
        void deleteColumnMapping() { this->columnMapping_ = nullptr;};
        inline const map<string, string> & getColumnMapping() const { DARABONBA_PTR_GET_CONST(columnMapping_, map<string, string>) };
        inline map<string, string> getColumnMapping() { DARABONBA_PTR_GET(columnMapping_, map<string, string>) };
        inline Config& setColumnMapping(const map<string, string> & columnMapping) { DARABONBA_PTR_SET_VALUE(columnMapping_, columnMapping) };
        inline Config& setColumnMapping(map<string, string> && columnMapping) { DARABONBA_PTR_SET_RVALUE(columnMapping_, columnMapping) };


        // enableDataMigration Field Functions 
        bool hasEnableDataMigration() const { return this->enableDataMigration_ != nullptr;};
        void deleteEnableDataMigration() { this->enableDataMigration_ = nullptr;};
        inline bool getEnableDataMigration() const { DARABONBA_PTR_GET_DEFAULT(enableDataMigration_, false) };
        inline Config& setEnableDataMigration(bool enableDataMigration) { DARABONBA_PTR_SET_VALUE(enableDataMigration_, enableDataMigration) };


        // enableSchemaMigration Field Functions 
        bool hasEnableSchemaMigration() const { return this->enableSchemaMigration_ != nullptr;};
        void deleteEnableSchemaMigration() { this->enableSchemaMigration_ = nullptr;};
        inline bool getEnableSchemaMigration() const { DARABONBA_PTR_GET_DEFAULT(enableSchemaMigration_, false) };
        inline Config& setEnableSchemaMigration(bool enableSchemaMigration) { DARABONBA_PTR_SET_VALUE(enableSchemaMigration_, enableSchemaMigration) };


        // enableVerification Field Functions 
        bool hasEnableVerification() const { return this->enableVerification_ != nullptr;};
        void deleteEnableVerification() { this->enableVerification_ = nullptr;};
        inline bool getEnableVerification() const { DARABONBA_PTR_GET_DEFAULT(enableVerification_, false) };
        inline Config& setEnableVerification(bool enableVerification) { DARABONBA_PTR_SET_VALUE(enableVerification_, enableVerification) };


        // others Field Functions 
        bool hasOthers() const { return this->others_ != nullptr;};
        void deleteOthers() { this->others_ = nullptr;};
        inline         const Darabonba::Json & getOthers() const { DARABONBA_GET(others_) };
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


      protected:
        shared_ptr<map<string, string>> columnMapping_ {};
        shared_ptr<bool> enableDataMigration_ {};
        shared_ptr<bool> enableSchemaMigration_ {};
        shared_ptr<bool> enableVerification_ {};
        Darabonba::Json others_ {};
        shared_ptr<map<string, string>> partitionFilters_ {};
        shared_ptr<vector<int64_t>> partitions_ {};
        shared_ptr<vector<string>> tableBlackList_ {};
        shared_ptr<map<string, string>> tableMapping_ {};
        shared_ptr<vector<string>> tableWhiteList_ {};
        shared_ptr<vector<string>> tables_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr
        && this->createTime_ == nullptr && this->dbId_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->scheduleType_ == nullptr
        && this->sourceId_ == nullptr && this->srcDbName_ == nullptr && this->stopped_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr
        && this->value_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const Data::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Data::Config) };
      inline Data::Config getConfig() { DARABONBA_PTR_GET(config_, Data::Config) };
      inline Data& setConfig(const Data::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Data& setConfig(Data::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
      inline Data& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // scheduleType Field Functions 
      bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
      void deleteScheduleType() { this->scheduleType_ = nullptr;};
      inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
      inline Data& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline int64_t getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
      inline Data& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      // srcDbName Field Functions 
      bool hasSrcDbName() const { return this->srcDbName_ != nullptr;};
      void deleteSrcDbName() { this->srcDbName_ = nullptr;};
      inline string getSrcDbName() const { DARABONBA_PTR_GET_DEFAULT(srcDbName_, "") };
      inline Data& setSrcDbName(string srcDbName) { DARABONBA_PTR_SET_VALUE(srcDbName_, srcDbName) };


      // stopped Field Functions 
      bool hasStopped() const { return this->stopped_ != nullptr;};
      void deleteStopped() { this->stopped_ = nullptr;};
      inline bool getStopped() const { DARABONBA_PTR_GET_DEFAULT(stopped_, false) };
      inline Data& setStopped(bool stopped) { DARABONBA_PTR_SET_VALUE(stopped_, stopped) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Data& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<Data::Config> config_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<int64_t> dbId_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> scheduleType_ {};
      shared_ptr<int64_t> sourceId_ {};
      shared_ptr<string> srcDbName_ {};
      shared_ptr<bool> stopped_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMmsTimerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMmsTimerResponseBody::Data) };
    inline GetMmsTimerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMmsTimerResponseBody::Data) };
    inline GetMmsTimerResponseBody& setData(const GetMmsTimerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMmsTimerResponseBody& setData(GetMmsTimerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMmsTimerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetMmsTimerResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
