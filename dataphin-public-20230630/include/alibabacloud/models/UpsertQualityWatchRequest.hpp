// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSERTQUALITYWATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPSERTQUALITYWATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpsertQualityWatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpsertQualityWatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpsertCommand, upsertCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpsertQualityWatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpsertCommand, upsertCommand_);
    };
    UpsertQualityWatchRequest() = default ;
    UpsertQualityWatchRequest(const UpsertQualityWatchRequest &) = default ;
    UpsertQualityWatchRequest(UpsertQualityWatchRequest &&) = default ;
    UpsertQualityWatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpsertQualityWatchRequest() = default ;
    UpsertQualityWatchRequest& operator=(const UpsertQualityWatchRequest &) = default ;
    UpsertQualityWatchRequest& operator=(UpsertQualityWatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpsertCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpsertCommand& obj) { 
        DARABONBA_PTR_TO_JSON(DataSourceInfo, dataSourceInfo_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IndexInfo, indexInfo_);
        DARABONBA_PTR_TO_JSON(QualityOwner, qualityOwner_);
        DARABONBA_PTR_TO_JSON(TableInfo, tableInfo_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, UpsertCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSourceInfo, dataSourceInfo_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IndexInfo, indexInfo_);
        DARABONBA_PTR_FROM_JSON(QualityOwner, qualityOwner_);
        DARABONBA_PTR_FROM_JSON(TableInfo, tableInfo_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      UpsertCommand() = default ;
      UpsertCommand(const UpsertCommand &) = default ;
      UpsertCommand(UpsertCommand &&) = default ;
      UpsertCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpsertCommand() = default ;
      UpsertCommand& operator=(const UpsertCommand &) = default ;
      UpsertCommand& operator=(UpsertCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TableInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TableInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, TableInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
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
        virtual bool empty() const override { return this->id_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline TableInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<string> id_ {};
      };

      class IndexInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IndexInfo& obj) { 
          DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
          DARABONBA_PTR_TO_JSON(CellSumLogicTableName, cellSumLogicTableName_);
          DARABONBA_PTR_TO_JSON(ComputeType, computeType_);
          DARABONBA_PTR_TO_JSON(DateType, dateType_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(GranularityDisplayName, granularityDisplayName_);
          DARABONBA_PTR_TO_JSON(GranularityId, granularityId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, IndexInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
          DARABONBA_PTR_FROM_JSON(CellSumLogicTableName, cellSumLogicTableName_);
          DARABONBA_PTR_FROM_JSON(ComputeType, computeType_);
          DARABONBA_PTR_FROM_JSON(DateType, dateType_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(GranularityDisplayName, granularityDisplayName_);
          DARABONBA_PTR_FROM_JSON(GranularityId, granularityId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
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
        && this->cellSumLogicTableName_ == nullptr && this->computeType_ == nullptr && this->dateType_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr
        && this->granularityDisplayName_ == nullptr && this->granularityId_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr
        && this->type_ == nullptr; };
        // bizUnitId Field Functions 
        bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
        void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
        inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
        inline IndexInfo& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


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


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline IndexInfo& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline IndexInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int64_t> bizUnitId_ {};
        shared_ptr<string> cellSumLogicTableName_ {};
        shared_ptr<string> computeType_ {};
        shared_ptr<string> dateType_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> granularityDisplayName_ {};
        shared_ptr<int64_t> granularityId_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> projectId_ {};
        shared_ptr<string> type_ {};
      };

      class DataSourceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSourceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, DataSourceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
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
        virtual bool empty() const override { return this->id_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DataSourceInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<string> id_ {};
      };

      virtual bool empty() const override { return this->dataSourceInfo_ == nullptr
        && this->id_ == nullptr && this->indexInfo_ == nullptr && this->qualityOwner_ == nullptr && this->tableInfo_ == nullptr && this->type_ == nullptr; };
      // dataSourceInfo Field Functions 
      bool hasDataSourceInfo() const { return this->dataSourceInfo_ != nullptr;};
      void deleteDataSourceInfo() { this->dataSourceInfo_ = nullptr;};
      inline const UpsertCommand::DataSourceInfo & getDataSourceInfo() const { DARABONBA_PTR_GET_CONST(dataSourceInfo_, UpsertCommand::DataSourceInfo) };
      inline UpsertCommand::DataSourceInfo getDataSourceInfo() { DARABONBA_PTR_GET(dataSourceInfo_, UpsertCommand::DataSourceInfo) };
      inline UpsertCommand& setDataSourceInfo(const UpsertCommand::DataSourceInfo & dataSourceInfo) { DARABONBA_PTR_SET_VALUE(dataSourceInfo_, dataSourceInfo) };
      inline UpsertCommand& setDataSourceInfo(UpsertCommand::DataSourceInfo && dataSourceInfo) { DARABONBA_PTR_SET_RVALUE(dataSourceInfo_, dataSourceInfo) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline UpsertCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // indexInfo Field Functions 
      bool hasIndexInfo() const { return this->indexInfo_ != nullptr;};
      void deleteIndexInfo() { this->indexInfo_ = nullptr;};
      inline const UpsertCommand::IndexInfo & getIndexInfo() const { DARABONBA_PTR_GET_CONST(indexInfo_, UpsertCommand::IndexInfo) };
      inline UpsertCommand::IndexInfo getIndexInfo() { DARABONBA_PTR_GET(indexInfo_, UpsertCommand::IndexInfo) };
      inline UpsertCommand& setIndexInfo(const UpsertCommand::IndexInfo & indexInfo) { DARABONBA_PTR_SET_VALUE(indexInfo_, indexInfo) };
      inline UpsertCommand& setIndexInfo(UpsertCommand::IndexInfo && indexInfo) { DARABONBA_PTR_SET_RVALUE(indexInfo_, indexInfo) };


      // qualityOwner Field Functions 
      bool hasQualityOwner() const { return this->qualityOwner_ != nullptr;};
      void deleteQualityOwner() { this->qualityOwner_ = nullptr;};
      inline string getQualityOwner() const { DARABONBA_PTR_GET_DEFAULT(qualityOwner_, "") };
      inline UpsertCommand& setQualityOwner(string qualityOwner) { DARABONBA_PTR_SET_VALUE(qualityOwner_, qualityOwner) };


      // tableInfo Field Functions 
      bool hasTableInfo() const { return this->tableInfo_ != nullptr;};
      void deleteTableInfo() { this->tableInfo_ = nullptr;};
      inline const UpsertCommand::TableInfo & getTableInfo() const { DARABONBA_PTR_GET_CONST(tableInfo_, UpsertCommand::TableInfo) };
      inline UpsertCommand::TableInfo getTableInfo() { DARABONBA_PTR_GET(tableInfo_, UpsertCommand::TableInfo) };
      inline UpsertCommand& setTableInfo(const UpsertCommand::TableInfo & tableInfo) { DARABONBA_PTR_SET_VALUE(tableInfo_, tableInfo) };
      inline UpsertCommand& setTableInfo(UpsertCommand::TableInfo && tableInfo) { DARABONBA_PTR_SET_RVALUE(tableInfo_, tableInfo) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline UpsertCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<UpsertCommand::DataSourceInfo> dataSourceInfo_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<UpsertCommand::IndexInfo> indexInfo_ {};
      // This parameter is required.
      shared_ptr<string> qualityOwner_ {};
      shared_ptr<UpsertCommand::TableInfo> tableInfo_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->upsertCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpsertQualityWatchRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // upsertCommand Field Functions 
    bool hasUpsertCommand() const { return this->upsertCommand_ != nullptr;};
    void deleteUpsertCommand() { this->upsertCommand_ = nullptr;};
    inline const UpsertQualityWatchRequest::UpsertCommand & getUpsertCommand() const { DARABONBA_PTR_GET_CONST(upsertCommand_, UpsertQualityWatchRequest::UpsertCommand) };
    inline UpsertQualityWatchRequest::UpsertCommand getUpsertCommand() { DARABONBA_PTR_GET(upsertCommand_, UpsertQualityWatchRequest::UpsertCommand) };
    inline UpsertQualityWatchRequest& setUpsertCommand(const UpsertQualityWatchRequest::UpsertCommand & upsertCommand) { DARABONBA_PTR_SET_VALUE(upsertCommand_, upsertCommand) };
    inline UpsertQualityWatchRequest& setUpsertCommand(UpsertQualityWatchRequest::UpsertCommand && upsertCommand) { DARABONBA_PTR_SET_RVALUE(upsertCommand_, upsertCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpsertQualityWatchRequest::UpsertCommand> upsertCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
