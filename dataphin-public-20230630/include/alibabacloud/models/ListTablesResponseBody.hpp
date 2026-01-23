// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListTablesResponseBody() = default ;
    ListTablesResponseBody(const ListTablesResponseBody &) = default ;
    ListTablesResponseBody(ListTablesResponseBody &&) = default ;
    ListTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTablesResponseBody() = default ;
    ListTablesResponseBody& operator=(const ListTablesResponseBody &) = default ;
    ListTablesResponseBody& operator=(ListTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(TableList, tableList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(TableList, tableList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TableList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TableList& obj) { 
          DARABONBA_PTR_TO_JSON(AssetTagList, assetTagList_);
          DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
          DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(DataDomainId, dataDomainId_);
          DARABONBA_PTR_TO_JSON(DataDomainName, dataDomainName_);
          DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Env, env_);
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(Guid, guid_);
          DARABONBA_PTR_TO_JSON(IsBasicMode, isBasicMode_);
          DARABONBA_PTR_TO_JSON(IsPartitionTable, isPartitionTable_);
          DARABONBA_PTR_TO_JSON(LastDdlTime, lastDdlTime_);
          DARABONBA_PTR_TO_JSON(LastDmlTime, lastDmlTime_);
          DARABONBA_PTR_TO_JSON(LastQueryTime, lastQueryTime_);
          DARABONBA_PTR_TO_JSON(LifeCycle, lifeCycle_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(ParentModelId, parentModelId_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
          DARABONBA_PTR_TO_JSON(SecurityLevelAbbreviation, securityLevelAbbreviation_);
          DARABONBA_PTR_TO_JSON(SecurityLevelName, securityLevelName_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
          DARABONBA_PTR_TO_JSON(StreamTableConfig, streamTableConfig_);
          DARABONBA_PTR_TO_JSON(TableSizeInBytes, tableSizeInBytes_);
          DARABONBA_PTR_TO_JSON(VisitCount30d, visitCount30d_);
        };
        friend void from_json(const Darabonba::Json& j, TableList& obj) { 
          DARABONBA_PTR_FROM_JSON(AssetTagList, assetTagList_);
          DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
          DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(DataDomainId, dataDomainId_);
          DARABONBA_PTR_FROM_JSON(DataDomainName, dataDomainName_);
          DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Env, env_);
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(Guid, guid_);
          DARABONBA_PTR_FROM_JSON(IsBasicMode, isBasicMode_);
          DARABONBA_PTR_FROM_JSON(IsPartitionTable, isPartitionTable_);
          DARABONBA_PTR_FROM_JSON(LastDdlTime, lastDdlTime_);
          DARABONBA_PTR_FROM_JSON(LastDmlTime, lastDmlTime_);
          DARABONBA_PTR_FROM_JSON(LastQueryTime, lastQueryTime_);
          DARABONBA_PTR_FROM_JSON(LifeCycle, lifeCycle_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(ParentModelId, parentModelId_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
          DARABONBA_PTR_FROM_JSON(SecurityLevelAbbreviation, securityLevelAbbreviation_);
          DARABONBA_PTR_FROM_JSON(SecurityLevelName, securityLevelName_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
          DARABONBA_PTR_FROM_JSON(StreamTableConfig, streamTableConfig_);
          DARABONBA_PTR_FROM_JSON(TableSizeInBytes, tableSizeInBytes_);
          DARABONBA_PTR_FROM_JSON(VisitCount30d, visitCount30d_);
        };
        TableList() = default ;
        TableList(const TableList &) = default ;
        TableList(TableList &&) = default ;
        TableList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TableList() = default ;
        TableList& operator=(const TableList &) = default ;
        TableList& operator=(TableList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StreamTableConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StreamTableConfig& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, StreamTableConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          StreamTableConfig() = default ;
          StreamTableConfig(const StreamTableConfig &) = default ;
          StreamTableConfig(StreamTableConfig &&) = default ;
          StreamTableConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StreamTableConfig() = default ;
          StreamTableConfig& operator=(const StreamTableConfig &) = default ;
          StreamTableConfig& operator=(StreamTableConfig &&) = default ;
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
          inline StreamTableConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline StreamTableConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> key_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->assetTagList_ == nullptr
        && this->bizUnitId_ == nullptr && this->bizUnitName_ == nullptr && this->comment_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr
        && this->dataDomainId_ == nullptr && this->dataDomainName_ == nullptr && this->dataSourceId_ == nullptr && this->displayName_ == nullptr && this->env_ == nullptr
        && this->fileId_ == nullptr && this->guid_ == nullptr && this->isBasicMode_ == nullptr && this->isPartitionTable_ == nullptr && this->lastDdlTime_ == nullptr
        && this->lastDmlTime_ == nullptr && this->lastQueryTime_ == nullptr && this->lifeCycle_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr
        && this->parentModelId_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr && this->securityLevel_ == nullptr && this->securityLevelAbbreviation_ == nullptr
        && this->securityLevelName_ == nullptr && this->storageType_ == nullptr && this->streamTableConfig_ == nullptr && this->tableSizeInBytes_ == nullptr && this->visitCount30d_ == nullptr; };
        // assetTagList Field Functions 
        bool hasAssetTagList() const { return this->assetTagList_ != nullptr;};
        void deleteAssetTagList() { this->assetTagList_ = nullptr;};
        inline const vector<string> & getAssetTagList() const { DARABONBA_PTR_GET_CONST(assetTagList_, vector<string>) };
        inline vector<string> getAssetTagList() { DARABONBA_PTR_GET(assetTagList_, vector<string>) };
        inline TableList& setAssetTagList(const vector<string> & assetTagList) { DARABONBA_PTR_SET_VALUE(assetTagList_, assetTagList) };
        inline TableList& setAssetTagList(vector<string> && assetTagList) { DARABONBA_PTR_SET_RVALUE(assetTagList_, assetTagList) };


        // bizUnitId Field Functions 
        bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
        void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
        inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
        inline TableList& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


        // bizUnitName Field Functions 
        bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
        void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
        inline string getBizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
        inline TableList& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline TableList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline TableList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline TableList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // dataDomainId Field Functions 
        bool hasDataDomainId() const { return this->dataDomainId_ != nullptr;};
        void deleteDataDomainId() { this->dataDomainId_ = nullptr;};
        inline int64_t getDataDomainId() const { DARABONBA_PTR_GET_DEFAULT(dataDomainId_, 0L) };
        inline TableList& setDataDomainId(int64_t dataDomainId) { DARABONBA_PTR_SET_VALUE(dataDomainId_, dataDomainId) };


        // dataDomainName Field Functions 
        bool hasDataDomainName() const { return this->dataDomainName_ != nullptr;};
        void deleteDataDomainName() { this->dataDomainName_ = nullptr;};
        inline string getDataDomainName() const { DARABONBA_PTR_GET_DEFAULT(dataDomainName_, "") };
        inline TableList& setDataDomainName(string dataDomainName) { DARABONBA_PTR_SET_VALUE(dataDomainName_, dataDomainName) };


        // dataSourceId Field Functions 
        bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
        void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
        inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
        inline TableList& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline TableList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // env Field Functions 
        bool hasEnv() const { return this->env_ != nullptr;};
        void deleteEnv() { this->env_ = nullptr;};
        inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
        inline TableList& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
        inline TableList& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // guid Field Functions 
        bool hasGuid() const { return this->guid_ != nullptr;};
        void deleteGuid() { this->guid_ = nullptr;};
        inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
        inline TableList& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


        // isBasicMode Field Functions 
        bool hasIsBasicMode() const { return this->isBasicMode_ != nullptr;};
        void deleteIsBasicMode() { this->isBasicMode_ = nullptr;};
        inline bool getIsBasicMode() const { DARABONBA_PTR_GET_DEFAULT(isBasicMode_, false) };
        inline TableList& setIsBasicMode(bool isBasicMode) { DARABONBA_PTR_SET_VALUE(isBasicMode_, isBasicMode) };


        // isPartitionTable Field Functions 
        bool hasIsPartitionTable() const { return this->isPartitionTable_ != nullptr;};
        void deleteIsPartitionTable() { this->isPartitionTable_ = nullptr;};
        inline bool getIsPartitionTable() const { DARABONBA_PTR_GET_DEFAULT(isPartitionTable_, false) };
        inline TableList& setIsPartitionTable(bool isPartitionTable) { DARABONBA_PTR_SET_VALUE(isPartitionTable_, isPartitionTable) };


        // lastDdlTime Field Functions 
        bool hasLastDdlTime() const { return this->lastDdlTime_ != nullptr;};
        void deleteLastDdlTime() { this->lastDdlTime_ = nullptr;};
        inline string getLastDdlTime() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTime_, "") };
        inline TableList& setLastDdlTime(string lastDdlTime) { DARABONBA_PTR_SET_VALUE(lastDdlTime_, lastDdlTime) };


        // lastDmlTime Field Functions 
        bool hasLastDmlTime() const { return this->lastDmlTime_ != nullptr;};
        void deleteLastDmlTime() { this->lastDmlTime_ = nullptr;};
        inline string getLastDmlTime() const { DARABONBA_PTR_GET_DEFAULT(lastDmlTime_, "") };
        inline TableList& setLastDmlTime(string lastDmlTime) { DARABONBA_PTR_SET_VALUE(lastDmlTime_, lastDmlTime) };


        // lastQueryTime Field Functions 
        bool hasLastQueryTime() const { return this->lastQueryTime_ != nullptr;};
        void deleteLastQueryTime() { this->lastQueryTime_ = nullptr;};
        inline string getLastQueryTime() const { DARABONBA_PTR_GET_DEFAULT(lastQueryTime_, "") };
        inline TableList& setLastQueryTime(string lastQueryTime) { DARABONBA_PTR_SET_VALUE(lastQueryTime_, lastQueryTime) };


        // lifeCycle Field Functions 
        bool hasLifeCycle() const { return this->lifeCycle_ != nullptr;};
        void deleteLifeCycle() { this->lifeCycle_ = nullptr;};
        inline int64_t getLifeCycle() const { DARABONBA_PTR_GET_DEFAULT(lifeCycle_, 0L) };
        inline TableList& setLifeCycle(int64_t lifeCycle) { DARABONBA_PTR_SET_VALUE(lifeCycle_, lifeCycle) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TableList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline TableList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // parentModelId Field Functions 
        bool hasParentModelId() const { return this->parentModelId_ != nullptr;};
        void deleteParentModelId() { this->parentModelId_ = nullptr;};
        inline string getParentModelId() const { DARABONBA_PTR_GET_DEFAULT(parentModelId_, "") };
        inline TableList& setParentModelId(string parentModelId) { DARABONBA_PTR_SET_VALUE(parentModelId_, parentModelId) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline TableList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline TableList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // securityLevel Field Functions 
        bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
        void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
        inline int64_t getSecurityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, 0L) };
        inline TableList& setSecurityLevel(int64_t securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


        // securityLevelAbbreviation Field Functions 
        bool hasSecurityLevelAbbreviation() const { return this->securityLevelAbbreviation_ != nullptr;};
        void deleteSecurityLevelAbbreviation() { this->securityLevelAbbreviation_ = nullptr;};
        inline string getSecurityLevelAbbreviation() const { DARABONBA_PTR_GET_DEFAULT(securityLevelAbbreviation_, "") };
        inline TableList& setSecurityLevelAbbreviation(string securityLevelAbbreviation) { DARABONBA_PTR_SET_VALUE(securityLevelAbbreviation_, securityLevelAbbreviation) };


        // securityLevelName Field Functions 
        bool hasSecurityLevelName() const { return this->securityLevelName_ != nullptr;};
        void deleteSecurityLevelName() { this->securityLevelName_ = nullptr;};
        inline string getSecurityLevelName() const { DARABONBA_PTR_GET_DEFAULT(securityLevelName_, "") };
        inline TableList& setSecurityLevelName(string securityLevelName) { DARABONBA_PTR_SET_VALUE(securityLevelName_, securityLevelName) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline TableList& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // streamTableConfig Field Functions 
        bool hasStreamTableConfig() const { return this->streamTableConfig_ != nullptr;};
        void deleteStreamTableConfig() { this->streamTableConfig_ = nullptr;};
        inline const vector<TableList::StreamTableConfig> & getStreamTableConfig() const { DARABONBA_PTR_GET_CONST(streamTableConfig_, vector<TableList::StreamTableConfig>) };
        inline vector<TableList::StreamTableConfig> getStreamTableConfig() { DARABONBA_PTR_GET(streamTableConfig_, vector<TableList::StreamTableConfig>) };
        inline TableList& setStreamTableConfig(const vector<TableList::StreamTableConfig> & streamTableConfig) { DARABONBA_PTR_SET_VALUE(streamTableConfig_, streamTableConfig) };
        inline TableList& setStreamTableConfig(vector<TableList::StreamTableConfig> && streamTableConfig) { DARABONBA_PTR_SET_RVALUE(streamTableConfig_, streamTableConfig) };


        // tableSizeInBytes Field Functions 
        bool hasTableSizeInBytes() const { return this->tableSizeInBytes_ != nullptr;};
        void deleteTableSizeInBytes() { this->tableSizeInBytes_ = nullptr;};
        inline int64_t getTableSizeInBytes() const { DARABONBA_PTR_GET_DEFAULT(tableSizeInBytes_, 0L) };
        inline TableList& setTableSizeInBytes(int64_t tableSizeInBytes) { DARABONBA_PTR_SET_VALUE(tableSizeInBytes_, tableSizeInBytes) };


        // visitCount30d Field Functions 
        bool hasVisitCount30d() const { return this->visitCount30d_ != nullptr;};
        void deleteVisitCount30d() { this->visitCount30d_ = nullptr;};
        inline int64_t getVisitCount30d() const { DARABONBA_PTR_GET_DEFAULT(visitCount30d_, 0L) };
        inline TableList& setVisitCount30d(int64_t visitCount30d) { DARABONBA_PTR_SET_VALUE(visitCount30d_, visitCount30d) };


      protected:
        shared_ptr<vector<string>> assetTagList_ {};
        shared_ptr<int64_t> bizUnitId_ {};
        shared_ptr<string> bizUnitName_ {};
        shared_ptr<string> comment_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<int64_t> dataDomainId_ {};
        shared_ptr<string> dataDomainName_ {};
        shared_ptr<int64_t> dataSourceId_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> env_ {};
        shared_ptr<string> fileId_ {};
        shared_ptr<string> guid_ {};
        shared_ptr<bool> isBasicMode_ {};
        shared_ptr<bool> isPartitionTable_ {};
        shared_ptr<string> lastDdlTime_ {};
        shared_ptr<string> lastDmlTime_ {};
        shared_ptr<string> lastQueryTime_ {};
        shared_ptr<int64_t> lifeCycle_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> owner_ {};
        shared_ptr<string> parentModelId_ {};
        shared_ptr<int64_t> projectId_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<int64_t> securityLevel_ {};
        shared_ptr<string> securityLevelAbbreviation_ {};
        shared_ptr<string> securityLevelName_ {};
        shared_ptr<string> storageType_ {};
        shared_ptr<vector<TableList::StreamTableConfig>> streamTableConfig_ {};
        shared_ptr<int64_t> tableSizeInBytes_ {};
        shared_ptr<int64_t> visitCount30d_ {};
      };

      virtual bool empty() const override { return this->tableList_ == nullptr
        && this->totalCount_ == nullptr; };
      // tableList Field Functions 
      bool hasTableList() const { return this->tableList_ != nullptr;};
      void deleteTableList() { this->tableList_ = nullptr;};
      inline const vector<PageResult::TableList> & getTableList() const { DARABONBA_PTR_GET_CONST(tableList_, vector<PageResult::TableList>) };
      inline vector<PageResult::TableList> getTableList() { DARABONBA_PTR_GET(tableList_, vector<PageResult::TableList>) };
      inline PageResult& setTableList(const vector<PageResult::TableList> & tableList) { DARABONBA_PTR_SET_VALUE(tableList_, tableList) };
      inline PageResult& setTableList(vector<PageResult::TableList> && tableList) { DARABONBA_PTR_SET_RVALUE(tableList_, tableList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageResult::TableList>> tableList_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTablesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTablesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTablesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListTablesResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListTablesResponseBody::PageResult) };
    inline ListTablesResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListTablesResponseBody::PageResult) };
    inline ListTablesResponseBody& setPageResult(const ListTablesResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListTablesResponseBody& setPageResult(ListTablesResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTablesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListTablesResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
