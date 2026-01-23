// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYWATCHBYOBJECTIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYWATCHBYOBJECTIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetQualityWatchByObjectIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityWatchByObjectIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(QualityWatchInfo, qualityWatchInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityWatchByObjectIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(QualityWatchInfo, qualityWatchInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQualityWatchByObjectIdResponseBody() = default ;
    GetQualityWatchByObjectIdResponseBody(const GetQualityWatchByObjectIdResponseBody &) = default ;
    GetQualityWatchByObjectIdResponseBody(GetQualityWatchByObjectIdResponseBody &&) = default ;
    GetQualityWatchByObjectIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityWatchByObjectIdResponseBody() = default ;
    GetQualityWatchByObjectIdResponseBody& operator=(const GetQualityWatchByObjectIdResponseBody &) = default ;
    GetQualityWatchByObjectIdResponseBody& operator=(GetQualityWatchByObjectIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QualityWatchInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QualityWatchInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(DataSourceInfo, dataSourceInfo_);
        DARABONBA_PTR_TO_JSON(EnabledRuleCount, enabledRuleCount_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IndexInfo, indexInfo_);
        DARABONBA_PTR_TO_JSON(LatestWatchTaskId, latestWatchTaskId_);
        DARABONBA_PTR_TO_JSON(LatestWatchTaskStatus, latestWatchTaskStatus_);
        DARABONBA_PTR_TO_JSON(Modifier, modifier_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(QualityOwner, qualityOwner_);
        DARABONBA_PTR_TO_JSON(QualityOwnerName, qualityOwnerName_);
        DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TableInfo, tableInfo_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, QualityWatchInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(DataSourceInfo, dataSourceInfo_);
        DARABONBA_PTR_FROM_JSON(EnabledRuleCount, enabledRuleCount_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IndexInfo, indexInfo_);
        DARABONBA_PTR_FROM_JSON(LatestWatchTaskId, latestWatchTaskId_);
        DARABONBA_PTR_FROM_JSON(LatestWatchTaskStatus, latestWatchTaskStatus_);
        DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(QualityOwner, qualityOwner_);
        DARABONBA_PTR_FROM_JSON(QualityOwnerName, qualityOwnerName_);
        DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TableInfo, tableInfo_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      QualityWatchInfo() = default ;
      QualityWatchInfo(const QualityWatchInfo &) = default ;
      QualityWatchInfo(QualityWatchInfo &&) = default ;
      QualityWatchInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QualityWatchInfo() = default ;
      QualityWatchInfo& operator=(const QualityWatchInfo &) = default ;
      QualityWatchInfo& operator=(QualityWatchInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TableInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TableInfo& obj) { 
          DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
          DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
          DARABONBA_PTR_TO_JSON(Catalog, catalog_);
          DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
          DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Env, env_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsPartitionTable, isPartitionTable_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, TableInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
          DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
          DARABONBA_PTR_FROM_JSON(Catalog, catalog_);
          DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
          DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Env, env_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsPartitionTable, isPartitionTable_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        TableInfo() = default ;
        TableInfo(const TableInfo &) = default ;
        TableInfo(TableInfo &&) = default ;
        TableInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TableInfo() = default ;
        TableInfo& operator=(const TableInfo &) = default ;
        TableInfo& operator=(TableInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizUnitId_ == nullptr
        && this->bizUnitName_ == nullptr && this->catalog_ == nullptr && this->dataSourceId_ == nullptr && this->dataSourceType_ == nullptr && this->description_ == nullptr
        && this->env_ == nullptr && this->id_ == nullptr && this->isPartitionTable_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr
        && this->ownerName_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr && this->type_ == nullptr; };
        // bizUnitId Field Functions 
        bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
        void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
        inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
        inline TableInfo& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


        // bizUnitName Field Functions 
        bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
        void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
        inline string getBizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
        inline TableInfo& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


        // catalog Field Functions 
        bool hasCatalog() const { return this->catalog_ != nullptr;};
        void deleteCatalog() { this->catalog_ = nullptr;};
        inline string getCatalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
        inline TableInfo& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


        // dataSourceId Field Functions 
        bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
        void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
        inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
        inline TableInfo& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


        // dataSourceType Field Functions 
        bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
        void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
        inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
        inline TableInfo& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline TableInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // env Field Functions 
        bool hasEnv() const { return this->env_ != nullptr;};
        void deleteEnv() { this->env_ = nullptr;};
        inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
        inline TableInfo& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline TableInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isPartitionTable Field Functions 
        bool hasIsPartitionTable() const { return this->isPartitionTable_ != nullptr;};
        void deleteIsPartitionTable() { this->isPartitionTable_ = nullptr;};
        inline bool getIsPartitionTable() const { DARABONBA_PTR_GET_DEFAULT(isPartitionTable_, false) };
        inline TableInfo& setIsPartitionTable(bool isPartitionTable) { DARABONBA_PTR_SET_VALUE(isPartitionTable_, isPartitionTable) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TableInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline TableInfo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // ownerName Field Functions 
        bool hasOwnerName() const { return this->ownerName_ != nullptr;};
        void deleteOwnerName() { this->ownerName_ = nullptr;};
        inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
        inline TableInfo& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline TableInfo& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline TableInfo& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline TableInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int64_t> bizUnitId_ {};
        shared_ptr<string> bizUnitName_ {};
        shared_ptr<string> catalog_ {};
        shared_ptr<string> dataSourceId_ {};
        shared_ptr<string> dataSourceType_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> env_ {};
        shared_ptr<string> id_ {};
        shared_ptr<bool> isPartitionTable_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> owner_ {};
        shared_ptr<string> ownerName_ {};
        shared_ptr<int64_t> projectId_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<string> type_ {};
      };

      class IndexInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IndexInfo& obj) { 
          DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
          DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
          DARABONBA_PTR_TO_JSON(Catalog, catalog_);
          DARABONBA_PTR_TO_JSON(CellSumLogicTableName, cellSumLogicTableName_);
          DARABONBA_PTR_TO_JSON(ComputeType, computeType_);
          DARABONBA_PTR_TO_JSON(DateType, dateType_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(GranularityDisplayName, granularityDisplayName_);
          DARABONBA_PTR_TO_JSON(GranularityId, granularityId_);
          DARABONBA_PTR_TO_JSON(Guid, guid_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, IndexInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
          DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
          DARABONBA_PTR_FROM_JSON(Catalog, catalog_);
          DARABONBA_PTR_FROM_JSON(CellSumLogicTableName, cellSumLogicTableName_);
          DARABONBA_PTR_FROM_JSON(ComputeType, computeType_);
          DARABONBA_PTR_FROM_JSON(DateType, dateType_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(GranularityDisplayName, granularityDisplayName_);
          DARABONBA_PTR_FROM_JSON(GranularityId, granularityId_);
          DARABONBA_PTR_FROM_JSON(Guid, guid_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        IndexInfo() = default ;
        IndexInfo(const IndexInfo &) = default ;
        IndexInfo(IndexInfo &&) = default ;
        IndexInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IndexInfo() = default ;
        IndexInfo& operator=(const IndexInfo &) = default ;
        IndexInfo& operator=(IndexInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizUnitId_ == nullptr
        && this->bizUnitName_ == nullptr && this->catalog_ == nullptr && this->cellSumLogicTableName_ == nullptr && this->computeType_ == nullptr && this->dateType_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->granularityDisplayName_ == nullptr && this->granularityId_ == nullptr && this->guid_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->ownerName_ == nullptr && this->projectId_ == nullptr
        && this->projectName_ == nullptr && this->type_ == nullptr; };
        // bizUnitId Field Functions 
        bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
        void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
        inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
        inline IndexInfo& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


        // bizUnitName Field Functions 
        bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
        void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
        inline string getBizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
        inline IndexInfo& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


        // catalog Field Functions 
        bool hasCatalog() const { return this->catalog_ != nullptr;};
        void deleteCatalog() { this->catalog_ = nullptr;};
        inline string getCatalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
        inline IndexInfo& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


        // cellSumLogicTableName Field Functions 
        bool hasCellSumLogicTableName() const { return this->cellSumLogicTableName_ != nullptr;};
        void deleteCellSumLogicTableName() { this->cellSumLogicTableName_ = nullptr;};
        inline string getCellSumLogicTableName() const { DARABONBA_PTR_GET_DEFAULT(cellSumLogicTableName_, "") };
        inline IndexInfo& setCellSumLogicTableName(string cellSumLogicTableName) { DARABONBA_PTR_SET_VALUE(cellSumLogicTableName_, cellSumLogicTableName) };


        // computeType Field Functions 
        bool hasComputeType() const { return this->computeType_ != nullptr;};
        void deleteComputeType() { this->computeType_ = nullptr;};
        inline string getComputeType() const { DARABONBA_PTR_GET_DEFAULT(computeType_, "") };
        inline IndexInfo& setComputeType(string computeType) { DARABONBA_PTR_SET_VALUE(computeType_, computeType) };


        // dateType Field Functions 
        bool hasDateType() const { return this->dateType_ != nullptr;};
        void deleteDateType() { this->dateType_ = nullptr;};
        inline string getDateType() const { DARABONBA_PTR_GET_DEFAULT(dateType_, "") };
        inline IndexInfo& setDateType(string dateType) { DARABONBA_PTR_SET_VALUE(dateType_, dateType) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline IndexInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline IndexInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // granularityDisplayName Field Functions 
        bool hasGranularityDisplayName() const { return this->granularityDisplayName_ != nullptr;};
        void deleteGranularityDisplayName() { this->granularityDisplayName_ = nullptr;};
        inline string getGranularityDisplayName() const { DARABONBA_PTR_GET_DEFAULT(granularityDisplayName_, "") };
        inline IndexInfo& setGranularityDisplayName(string granularityDisplayName) { DARABONBA_PTR_SET_VALUE(granularityDisplayName_, granularityDisplayName) };


        // granularityId Field Functions 
        bool hasGranularityId() const { return this->granularityId_ != nullptr;};
        void deleteGranularityId() { this->granularityId_ = nullptr;};
        inline int64_t getGranularityId() const { DARABONBA_PTR_GET_DEFAULT(granularityId_, 0L) };
        inline IndexInfo& setGranularityId(int64_t granularityId) { DARABONBA_PTR_SET_VALUE(granularityId_, granularityId) };


        // guid Field Functions 
        bool hasGuid() const { return this->guid_ != nullptr;};
        void deleteGuid() { this->guid_ = nullptr;};
        inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
        inline IndexInfo& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline IndexInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline IndexInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline IndexInfo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // ownerName Field Functions 
        bool hasOwnerName() const { return this->ownerName_ != nullptr;};
        void deleteOwnerName() { this->ownerName_ = nullptr;};
        inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
        inline IndexInfo& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline IndexInfo& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline IndexInfo& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline IndexInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int64_t> bizUnitId_ {};
        shared_ptr<string> bizUnitName_ {};
        shared_ptr<string> catalog_ {};
        shared_ptr<string> cellSumLogicTableName_ {};
        shared_ptr<string> computeType_ {};
        shared_ptr<string> dateType_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> granularityDisplayName_ {};
        shared_ptr<int64_t> granularityId_ {};
        shared_ptr<string> guid_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> owner_ {};
        shared_ptr<string> ownerName_ {};
        shared_ptr<int64_t> projectId_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<string> type_ {};
      };

      class DataSourceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSourceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_TO_JSON(Env, env_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DataSourceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_FROM_JSON(Env, env_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        DataSourceInfo() = default ;
        DataSourceInfo(const DataSourceInfo &) = default ;
        DataSourceInfo(DataSourceInfo &&) = default ;
        DataSourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSourceInfo() = default ;
        DataSourceInfo& operator=(const DataSourceInfo &) = default ;
        DataSourceInfo& operator=(DataSourceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creator_ == nullptr && this->creatorName_ == nullptr && this->env_ == nullptr && this->id_ == nullptr && this->modifyTime_ == nullptr
        && this->name_ == nullptr && this->owner_ == nullptr && this->ownerName_ == nullptr && this->type_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DataSourceInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline DataSourceInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // creatorName Field Functions 
        bool hasCreatorName() const { return this->creatorName_ != nullptr;};
        void deleteCreatorName() { this->creatorName_ = nullptr;};
        inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
        inline DataSourceInfo& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


        // env Field Functions 
        bool hasEnv() const { return this->env_ != nullptr;};
        void deleteEnv() { this->env_ = nullptr;};
        inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
        inline DataSourceInfo& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DataSourceInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline DataSourceInfo& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DataSourceInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline DataSourceInfo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // ownerName Field Functions 
        bool hasOwnerName() const { return this->ownerName_ != nullptr;};
        void deleteOwnerName() { this->ownerName_ = nullptr;};
        inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
        inline DataSourceInfo& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DataSourceInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> creatorName_ {};
        shared_ptr<string> env_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> modifyTime_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> owner_ {};
        shared_ptr<string> ownerName_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creator_ == nullptr && this->creatorName_ == nullptr && this->dataSourceInfo_ == nullptr && this->enabledRuleCount_ == nullptr && this->id_ == nullptr
        && this->indexInfo_ == nullptr && this->latestWatchTaskId_ == nullptr && this->latestWatchTaskStatus_ == nullptr && this->modifier_ == nullptr && this->modifyTime_ == nullptr
        && this->name_ == nullptr && this->qualityOwner_ == nullptr && this->qualityOwnerName_ == nullptr && this->ruleCount_ == nullptr && this->status_ == nullptr
        && this->tableInfo_ == nullptr && this->type_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline QualityWatchInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline QualityWatchInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline QualityWatchInfo& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // dataSourceInfo Field Functions 
      bool hasDataSourceInfo() const { return this->dataSourceInfo_ != nullptr;};
      void deleteDataSourceInfo() { this->dataSourceInfo_ = nullptr;};
      inline const QualityWatchInfo::DataSourceInfo & getDataSourceInfo() const { DARABONBA_PTR_GET_CONST(dataSourceInfo_, QualityWatchInfo::DataSourceInfo) };
      inline QualityWatchInfo::DataSourceInfo getDataSourceInfo() { DARABONBA_PTR_GET(dataSourceInfo_, QualityWatchInfo::DataSourceInfo) };
      inline QualityWatchInfo& setDataSourceInfo(const QualityWatchInfo::DataSourceInfo & dataSourceInfo) { DARABONBA_PTR_SET_VALUE(dataSourceInfo_, dataSourceInfo) };
      inline QualityWatchInfo& setDataSourceInfo(QualityWatchInfo::DataSourceInfo && dataSourceInfo) { DARABONBA_PTR_SET_RVALUE(dataSourceInfo_, dataSourceInfo) };


      // enabledRuleCount Field Functions 
      bool hasEnabledRuleCount() const { return this->enabledRuleCount_ != nullptr;};
      void deleteEnabledRuleCount() { this->enabledRuleCount_ = nullptr;};
      inline int64_t getEnabledRuleCount() const { DARABONBA_PTR_GET_DEFAULT(enabledRuleCount_, 0L) };
      inline QualityWatchInfo& setEnabledRuleCount(int64_t enabledRuleCount) { DARABONBA_PTR_SET_VALUE(enabledRuleCount_, enabledRuleCount) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline QualityWatchInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // indexInfo Field Functions 
      bool hasIndexInfo() const { return this->indexInfo_ != nullptr;};
      void deleteIndexInfo() { this->indexInfo_ = nullptr;};
      inline const QualityWatchInfo::IndexInfo & getIndexInfo() const { DARABONBA_PTR_GET_CONST(indexInfo_, QualityWatchInfo::IndexInfo) };
      inline QualityWatchInfo::IndexInfo getIndexInfo() { DARABONBA_PTR_GET(indexInfo_, QualityWatchInfo::IndexInfo) };
      inline QualityWatchInfo& setIndexInfo(const QualityWatchInfo::IndexInfo & indexInfo) { DARABONBA_PTR_SET_VALUE(indexInfo_, indexInfo) };
      inline QualityWatchInfo& setIndexInfo(QualityWatchInfo::IndexInfo && indexInfo) { DARABONBA_PTR_SET_RVALUE(indexInfo_, indexInfo) };


      // latestWatchTaskId Field Functions 
      bool hasLatestWatchTaskId() const { return this->latestWatchTaskId_ != nullptr;};
      void deleteLatestWatchTaskId() { this->latestWatchTaskId_ = nullptr;};
      inline int64_t getLatestWatchTaskId() const { DARABONBA_PTR_GET_DEFAULT(latestWatchTaskId_, 0L) };
      inline QualityWatchInfo& setLatestWatchTaskId(int64_t latestWatchTaskId) { DARABONBA_PTR_SET_VALUE(latestWatchTaskId_, latestWatchTaskId) };


      // latestWatchTaskStatus Field Functions 
      bool hasLatestWatchTaskStatus() const { return this->latestWatchTaskStatus_ != nullptr;};
      void deleteLatestWatchTaskStatus() { this->latestWatchTaskStatus_ = nullptr;};
      inline string getLatestWatchTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(latestWatchTaskStatus_, "") };
      inline QualityWatchInfo& setLatestWatchTaskStatus(string latestWatchTaskStatus) { DARABONBA_PTR_SET_VALUE(latestWatchTaskStatus_, latestWatchTaskStatus) };


      // modifier Field Functions 
      bool hasModifier() const { return this->modifier_ != nullptr;};
      void deleteModifier() { this->modifier_ = nullptr;};
      inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
      inline QualityWatchInfo& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline QualityWatchInfo& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline QualityWatchInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // qualityOwner Field Functions 
      bool hasQualityOwner() const { return this->qualityOwner_ != nullptr;};
      void deleteQualityOwner() { this->qualityOwner_ = nullptr;};
      inline string getQualityOwner() const { DARABONBA_PTR_GET_DEFAULT(qualityOwner_, "") };
      inline QualityWatchInfo& setQualityOwner(string qualityOwner) { DARABONBA_PTR_SET_VALUE(qualityOwner_, qualityOwner) };


      // qualityOwnerName Field Functions 
      bool hasQualityOwnerName() const { return this->qualityOwnerName_ != nullptr;};
      void deleteQualityOwnerName() { this->qualityOwnerName_ = nullptr;};
      inline string getQualityOwnerName() const { DARABONBA_PTR_GET_DEFAULT(qualityOwnerName_, "") };
      inline QualityWatchInfo& setQualityOwnerName(string qualityOwnerName) { DARABONBA_PTR_SET_VALUE(qualityOwnerName_, qualityOwnerName) };


      // ruleCount Field Functions 
      bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
      void deleteRuleCount() { this->ruleCount_ = nullptr;};
      inline int64_t getRuleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0L) };
      inline QualityWatchInfo& setRuleCount(int64_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline QualityWatchInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tableInfo Field Functions 
      bool hasTableInfo() const { return this->tableInfo_ != nullptr;};
      void deleteTableInfo() { this->tableInfo_ = nullptr;};
      inline const QualityWatchInfo::TableInfo & getTableInfo() const { DARABONBA_PTR_GET_CONST(tableInfo_, QualityWatchInfo::TableInfo) };
      inline QualityWatchInfo::TableInfo getTableInfo() { DARABONBA_PTR_GET(tableInfo_, QualityWatchInfo::TableInfo) };
      inline QualityWatchInfo& setTableInfo(const QualityWatchInfo::TableInfo & tableInfo) { DARABONBA_PTR_SET_VALUE(tableInfo_, tableInfo) };
      inline QualityWatchInfo& setTableInfo(QualityWatchInfo::TableInfo && tableInfo) { DARABONBA_PTR_SET_RVALUE(tableInfo_, tableInfo) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline QualityWatchInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> creatorName_ {};
      shared_ptr<QualityWatchInfo::DataSourceInfo> dataSourceInfo_ {};
      shared_ptr<int64_t> enabledRuleCount_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<QualityWatchInfo::IndexInfo> indexInfo_ {};
      shared_ptr<int64_t> latestWatchTaskId_ {};
      shared_ptr<string> latestWatchTaskStatus_ {};
      shared_ptr<string> modifier_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> qualityOwner_ {};
      shared_ptr<string> qualityOwnerName_ {};
      shared_ptr<int64_t> ruleCount_ {};
      shared_ptr<string> status_ {};
      shared_ptr<QualityWatchInfo::TableInfo> tableInfo_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->qualityWatchInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetQualityWatchByObjectIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetQualityWatchByObjectIdResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQualityWatchByObjectIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // qualityWatchInfo Field Functions 
    bool hasQualityWatchInfo() const { return this->qualityWatchInfo_ != nullptr;};
    void deleteQualityWatchInfo() { this->qualityWatchInfo_ = nullptr;};
    inline const GetQualityWatchByObjectIdResponseBody::QualityWatchInfo & getQualityWatchInfo() const { DARABONBA_PTR_GET_CONST(qualityWatchInfo_, GetQualityWatchByObjectIdResponseBody::QualityWatchInfo) };
    inline GetQualityWatchByObjectIdResponseBody::QualityWatchInfo getQualityWatchInfo() { DARABONBA_PTR_GET(qualityWatchInfo_, GetQualityWatchByObjectIdResponseBody::QualityWatchInfo) };
    inline GetQualityWatchByObjectIdResponseBody& setQualityWatchInfo(const GetQualityWatchByObjectIdResponseBody::QualityWatchInfo & qualityWatchInfo) { DARABONBA_PTR_SET_VALUE(qualityWatchInfo_, qualityWatchInfo) };
    inline GetQualityWatchByObjectIdResponseBody& setQualityWatchInfo(GetQualityWatchByObjectIdResponseBody::QualityWatchInfo && qualityWatchInfo) { DARABONBA_PTR_SET_RVALUE(qualityWatchInfo_, qualityWatchInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQualityWatchByObjectIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQualityWatchByObjectIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetQualityWatchByObjectIdResponseBody::QualityWatchInfo> qualityWatchInfo_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
