// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYIDENTIFYRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYIDENTIFYRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetSecurityIdentifyResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityIdentifyResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityIdentifyResultInfo, securityIdentifyResultInfo_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityIdentifyResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityIdentifyResultInfo, securityIdentifyResultInfo_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSecurityIdentifyResultResponseBody() = default ;
    GetSecurityIdentifyResultResponseBody(const GetSecurityIdentifyResultResponseBody &) = default ;
    GetSecurityIdentifyResultResponseBody(GetSecurityIdentifyResultResponseBody &&) = default ;
    GetSecurityIdentifyResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityIdentifyResultResponseBody() = default ;
    GetSecurityIdentifyResultResponseBody& operator=(const GetSecurityIdentifyResultResponseBody &) = default ;
    GetSecurityIdentifyResultResponseBody& operator=(GetSecurityIdentifyResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityIdentifyResultInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityIdentifyResultInfo& obj) { 
        DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
        DARABONBA_PTR_TO_JSON(BizUnitDisplayName, bizUnitDisplayName_);
        DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
        DARABONBA_PTR_TO_JSON(ClassifyAbbreviation, classifyAbbreviation_);
        DARABONBA_PTR_TO_JSON(ClassifyId, classifyId_);
        DARABONBA_PTR_TO_JSON(ClassifyName, classifyName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
        DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
        DARABONBA_PTR_TO_JSON(FieldDescription, fieldDescription_);
        DARABONBA_PTR_TO_JSON(FieldId, fieldId_);
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
        DARABONBA_PTR_TO_JSON(HasBetterRule, hasBetterRule_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdentifyRecordId, identifyRecordId_);
        DARABONBA_PTR_TO_JSON(IsCustomIdentify, isCustomIdentify_);
        DARABONBA_PTR_TO_JSON(IsLocked, isLocked_);
        DARABONBA_PTR_TO_JSON(LevelAbbreviation, levelAbbreviation_);
        DARABONBA_PTR_TO_JSON(LevelColor, levelColor_);
        DARABONBA_PTR_TO_JSON(LevelIndex, levelIndex_);
        DARABONBA_PTR_TO_JSON(LevelName, levelName_);
        DARABONBA_PTR_TO_JSON(Modifier, modifier_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(ProjectDisplayName, projectDisplayName_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(ScanTaskId, scanTaskId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TableCatalog, tableCatalog_);
        DARABONBA_PTR_TO_JSON(TableDescription, tableDescription_);
        DARABONBA_PTR_TO_JSON(TableEnv, tableEnv_);
        DARABONBA_PTR_TO_JSON(TableId, tableId_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(TableTaskId, tableTaskId_);
        DARABONBA_PTR_TO_JSON(TableType, tableType_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityIdentifyResultInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
        DARABONBA_PTR_FROM_JSON(BizUnitDisplayName, bizUnitDisplayName_);
        DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
        DARABONBA_PTR_FROM_JSON(ClassifyAbbreviation, classifyAbbreviation_);
        DARABONBA_PTR_FROM_JSON(ClassifyId, classifyId_);
        DARABONBA_PTR_FROM_JSON(ClassifyName, classifyName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
        DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
        DARABONBA_PTR_FROM_JSON(FieldDescription, fieldDescription_);
        DARABONBA_PTR_FROM_JSON(FieldId, fieldId_);
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
        DARABONBA_PTR_FROM_JSON(HasBetterRule, hasBetterRule_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdentifyRecordId, identifyRecordId_);
        DARABONBA_PTR_FROM_JSON(IsCustomIdentify, isCustomIdentify_);
        DARABONBA_PTR_FROM_JSON(IsLocked, isLocked_);
        DARABONBA_PTR_FROM_JSON(LevelAbbreviation, levelAbbreviation_);
        DARABONBA_PTR_FROM_JSON(LevelColor, levelColor_);
        DARABONBA_PTR_FROM_JSON(LevelIndex, levelIndex_);
        DARABONBA_PTR_FROM_JSON(LevelName, levelName_);
        DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ProjectDisplayName, projectDisplayName_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(ScanTaskId, scanTaskId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TableCatalog, tableCatalog_);
        DARABONBA_PTR_FROM_JSON(TableDescription, tableDescription_);
        DARABONBA_PTR_FROM_JSON(TableEnv, tableEnv_);
        DARABONBA_PTR_FROM_JSON(TableId, tableId_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(TableTaskId, tableTaskId_);
        DARABONBA_PTR_FROM_JSON(TableType, tableType_);
      };
      SecurityIdentifyResultInfo() = default ;
      SecurityIdentifyResultInfo(const SecurityIdentifyResultInfo &) = default ;
      SecurityIdentifyResultInfo(SecurityIdentifyResultInfo &&) = default ;
      SecurityIdentifyResultInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityIdentifyResultInfo() = default ;
      SecurityIdentifyResultInfo& operator=(const SecurityIdentifyResultInfo &) = default ;
      SecurityIdentifyResultInfo& operator=(SecurityIdentifyResultInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizDate_ == nullptr
        && this->bizUnitDisplayName_ == nullptr && this->bizUnitId_ == nullptr && this->bizUnitName_ == nullptr && this->classifyAbbreviation_ == nullptr && this->classifyId_ == nullptr
        && this->classifyName_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->datasourceId_ == nullptr && this->datasourceName_ == nullptr
        && this->fieldDescription_ == nullptr && this->fieldId_ == nullptr && this->fieldName_ == nullptr && this->hasBetterRule_ == nullptr && this->id_ == nullptr
        && this->identifyRecordId_ == nullptr && this->isCustomIdentify_ == nullptr && this->isLocked_ == nullptr && this->levelAbbreviation_ == nullptr && this->levelColor_ == nullptr
        && this->levelIndex_ == nullptr && this->levelName_ == nullptr && this->modifier_ == nullptr && this->modifyTime_ == nullptr && this->projectDisplayName_ == nullptr
        && this->projectId_ == nullptr && this->projectName_ == nullptr && this->scanTaskId_ == nullptr && this->status_ == nullptr && this->tableCatalog_ == nullptr
        && this->tableDescription_ == nullptr && this->tableEnv_ == nullptr && this->tableId_ == nullptr && this->tableName_ == nullptr && this->tableTaskId_ == nullptr
        && this->tableType_ == nullptr; };
      // bizDate Field Functions 
      bool hasBizDate() const { return this->bizDate_ != nullptr;};
      void deleteBizDate() { this->bizDate_ = nullptr;};
      inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
      inline SecurityIdentifyResultInfo& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


      // bizUnitDisplayName Field Functions 
      bool hasBizUnitDisplayName() const { return this->bizUnitDisplayName_ != nullptr;};
      void deleteBizUnitDisplayName() { this->bizUnitDisplayName_ = nullptr;};
      inline string getBizUnitDisplayName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitDisplayName_, "") };
      inline SecurityIdentifyResultInfo& setBizUnitDisplayName(string bizUnitDisplayName) { DARABONBA_PTR_SET_VALUE(bizUnitDisplayName_, bizUnitDisplayName) };


      // bizUnitId Field Functions 
      bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
      void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
      inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
      inline SecurityIdentifyResultInfo& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


      // bizUnitName Field Functions 
      bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
      void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
      inline string getBizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
      inline SecurityIdentifyResultInfo& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


      // classifyAbbreviation Field Functions 
      bool hasClassifyAbbreviation() const { return this->classifyAbbreviation_ != nullptr;};
      void deleteClassifyAbbreviation() { this->classifyAbbreviation_ = nullptr;};
      inline string getClassifyAbbreviation() const { DARABONBA_PTR_GET_DEFAULT(classifyAbbreviation_, "") };
      inline SecurityIdentifyResultInfo& setClassifyAbbreviation(string classifyAbbreviation) { DARABONBA_PTR_SET_VALUE(classifyAbbreviation_, classifyAbbreviation) };


      // classifyId Field Functions 
      bool hasClassifyId() const { return this->classifyId_ != nullptr;};
      void deleteClassifyId() { this->classifyId_ = nullptr;};
      inline int64_t getClassifyId() const { DARABONBA_PTR_GET_DEFAULT(classifyId_, 0L) };
      inline SecurityIdentifyResultInfo& setClassifyId(int64_t classifyId) { DARABONBA_PTR_SET_VALUE(classifyId_, classifyId) };


      // classifyName Field Functions 
      bool hasClassifyName() const { return this->classifyName_ != nullptr;};
      void deleteClassifyName() { this->classifyName_ = nullptr;};
      inline string getClassifyName() const { DARABONBA_PTR_GET_DEFAULT(classifyName_, "") };
      inline SecurityIdentifyResultInfo& setClassifyName(string classifyName) { DARABONBA_PTR_SET_VALUE(classifyName_, classifyName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SecurityIdentifyResultInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline SecurityIdentifyResultInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // datasourceId Field Functions 
      bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
      void deleteDatasourceId() { this->datasourceId_ = nullptr;};
      inline int64_t getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, 0L) };
      inline SecurityIdentifyResultInfo& setDatasourceId(int64_t datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


      // datasourceName Field Functions 
      bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
      void deleteDatasourceName() { this->datasourceName_ = nullptr;};
      inline string getDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
      inline SecurityIdentifyResultInfo& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


      // fieldDescription Field Functions 
      bool hasFieldDescription() const { return this->fieldDescription_ != nullptr;};
      void deleteFieldDescription() { this->fieldDescription_ = nullptr;};
      inline string getFieldDescription() const { DARABONBA_PTR_GET_DEFAULT(fieldDescription_, "") };
      inline SecurityIdentifyResultInfo& setFieldDescription(string fieldDescription) { DARABONBA_PTR_SET_VALUE(fieldDescription_, fieldDescription) };


      // fieldId Field Functions 
      bool hasFieldId() const { return this->fieldId_ != nullptr;};
      void deleteFieldId() { this->fieldId_ = nullptr;};
      inline string getFieldId() const { DARABONBA_PTR_GET_DEFAULT(fieldId_, "") };
      inline SecurityIdentifyResultInfo& setFieldId(string fieldId) { DARABONBA_PTR_SET_VALUE(fieldId_, fieldId) };


      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline SecurityIdentifyResultInfo& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      // hasBetterRule Field Functions 
      bool hasHasBetterRule() const { return this->hasBetterRule_ != nullptr;};
      void deleteHasBetterRule() { this->hasBetterRule_ = nullptr;};
      inline bool getHasBetterRule() const { DARABONBA_PTR_GET_DEFAULT(hasBetterRule_, false) };
      inline SecurityIdentifyResultInfo& setHasBetterRule(bool hasBetterRule) { DARABONBA_PTR_SET_VALUE(hasBetterRule_, hasBetterRule) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline SecurityIdentifyResultInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // identifyRecordId Field Functions 
      bool hasIdentifyRecordId() const { return this->identifyRecordId_ != nullptr;};
      void deleteIdentifyRecordId() { this->identifyRecordId_ = nullptr;};
      inline int64_t getIdentifyRecordId() const { DARABONBA_PTR_GET_DEFAULT(identifyRecordId_, 0L) };
      inline SecurityIdentifyResultInfo& setIdentifyRecordId(int64_t identifyRecordId) { DARABONBA_PTR_SET_VALUE(identifyRecordId_, identifyRecordId) };


      // isCustomIdentify Field Functions 
      bool hasIsCustomIdentify() const { return this->isCustomIdentify_ != nullptr;};
      void deleteIsCustomIdentify() { this->isCustomIdentify_ = nullptr;};
      inline bool getIsCustomIdentify() const { DARABONBA_PTR_GET_DEFAULT(isCustomIdentify_, false) };
      inline SecurityIdentifyResultInfo& setIsCustomIdentify(bool isCustomIdentify) { DARABONBA_PTR_SET_VALUE(isCustomIdentify_, isCustomIdentify) };


      // isLocked Field Functions 
      bool hasIsLocked() const { return this->isLocked_ != nullptr;};
      void deleteIsLocked() { this->isLocked_ = nullptr;};
      inline bool getIsLocked() const { DARABONBA_PTR_GET_DEFAULT(isLocked_, false) };
      inline SecurityIdentifyResultInfo& setIsLocked(bool isLocked) { DARABONBA_PTR_SET_VALUE(isLocked_, isLocked) };


      // levelAbbreviation Field Functions 
      bool hasLevelAbbreviation() const { return this->levelAbbreviation_ != nullptr;};
      void deleteLevelAbbreviation() { this->levelAbbreviation_ = nullptr;};
      inline string getLevelAbbreviation() const { DARABONBA_PTR_GET_DEFAULT(levelAbbreviation_, "") };
      inline SecurityIdentifyResultInfo& setLevelAbbreviation(string levelAbbreviation) { DARABONBA_PTR_SET_VALUE(levelAbbreviation_, levelAbbreviation) };


      // levelColor Field Functions 
      bool hasLevelColor() const { return this->levelColor_ != nullptr;};
      void deleteLevelColor() { this->levelColor_ = nullptr;};
      inline int64_t getLevelColor() const { DARABONBA_PTR_GET_DEFAULT(levelColor_, 0L) };
      inline SecurityIdentifyResultInfo& setLevelColor(int64_t levelColor) { DARABONBA_PTR_SET_VALUE(levelColor_, levelColor) };


      // levelIndex Field Functions 
      bool hasLevelIndex() const { return this->levelIndex_ != nullptr;};
      void deleteLevelIndex() { this->levelIndex_ = nullptr;};
      inline int64_t getLevelIndex() const { DARABONBA_PTR_GET_DEFAULT(levelIndex_, 0L) };
      inline SecurityIdentifyResultInfo& setLevelIndex(int64_t levelIndex) { DARABONBA_PTR_SET_VALUE(levelIndex_, levelIndex) };


      // levelName Field Functions 
      bool hasLevelName() const { return this->levelName_ != nullptr;};
      void deleteLevelName() { this->levelName_ = nullptr;};
      inline string getLevelName() const { DARABONBA_PTR_GET_DEFAULT(levelName_, "") };
      inline SecurityIdentifyResultInfo& setLevelName(string levelName) { DARABONBA_PTR_SET_VALUE(levelName_, levelName) };


      // modifier Field Functions 
      bool hasModifier() const { return this->modifier_ != nullptr;};
      void deleteModifier() { this->modifier_ = nullptr;};
      inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
      inline SecurityIdentifyResultInfo& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline SecurityIdentifyResultInfo& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // projectDisplayName Field Functions 
      bool hasProjectDisplayName() const { return this->projectDisplayName_ != nullptr;};
      void deleteProjectDisplayName() { this->projectDisplayName_ = nullptr;};
      inline string getProjectDisplayName() const { DARABONBA_PTR_GET_DEFAULT(projectDisplayName_, "") };
      inline SecurityIdentifyResultInfo& setProjectDisplayName(string projectDisplayName) { DARABONBA_PTR_SET_VALUE(projectDisplayName_, projectDisplayName) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline SecurityIdentifyResultInfo& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline SecurityIdentifyResultInfo& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // scanTaskId Field Functions 
      bool hasScanTaskId() const { return this->scanTaskId_ != nullptr;};
      void deleteScanTaskId() { this->scanTaskId_ = nullptr;};
      inline int64_t getScanTaskId() const { DARABONBA_PTR_GET_DEFAULT(scanTaskId_, 0L) };
      inline SecurityIdentifyResultInfo& setScanTaskId(int64_t scanTaskId) { DARABONBA_PTR_SET_VALUE(scanTaskId_, scanTaskId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SecurityIdentifyResultInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tableCatalog Field Functions 
      bool hasTableCatalog() const { return this->tableCatalog_ != nullptr;};
      void deleteTableCatalog() { this->tableCatalog_ = nullptr;};
      inline string getTableCatalog() const { DARABONBA_PTR_GET_DEFAULT(tableCatalog_, "") };
      inline SecurityIdentifyResultInfo& setTableCatalog(string tableCatalog) { DARABONBA_PTR_SET_VALUE(tableCatalog_, tableCatalog) };


      // tableDescription Field Functions 
      bool hasTableDescription() const { return this->tableDescription_ != nullptr;};
      void deleteTableDescription() { this->tableDescription_ = nullptr;};
      inline string getTableDescription() const { DARABONBA_PTR_GET_DEFAULT(tableDescription_, "") };
      inline SecurityIdentifyResultInfo& setTableDescription(string tableDescription) { DARABONBA_PTR_SET_VALUE(tableDescription_, tableDescription) };


      // tableEnv Field Functions 
      bool hasTableEnv() const { return this->tableEnv_ != nullptr;};
      void deleteTableEnv() { this->tableEnv_ = nullptr;};
      inline string getTableEnv() const { DARABONBA_PTR_GET_DEFAULT(tableEnv_, "") };
      inline SecurityIdentifyResultInfo& setTableEnv(string tableEnv) { DARABONBA_PTR_SET_VALUE(tableEnv_, tableEnv) };


      // tableId Field Functions 
      bool hasTableId() const { return this->tableId_ != nullptr;};
      void deleteTableId() { this->tableId_ = nullptr;};
      inline string getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
      inline SecurityIdentifyResultInfo& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline SecurityIdentifyResultInfo& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // tableTaskId Field Functions 
      bool hasTableTaskId() const { return this->tableTaskId_ != nullptr;};
      void deleteTableTaskId() { this->tableTaskId_ = nullptr;};
      inline int64_t getTableTaskId() const { DARABONBA_PTR_GET_DEFAULT(tableTaskId_, 0L) };
      inline SecurityIdentifyResultInfo& setTableTaskId(int64_t tableTaskId) { DARABONBA_PTR_SET_VALUE(tableTaskId_, tableTaskId) };


      // tableType Field Functions 
      bool hasTableType() const { return this->tableType_ != nullptr;};
      void deleteTableType() { this->tableType_ = nullptr;};
      inline string getTableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
      inline SecurityIdentifyResultInfo& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


    protected:
      shared_ptr<string> bizDate_ {};
      shared_ptr<string> bizUnitDisplayName_ {};
      shared_ptr<int64_t> bizUnitId_ {};
      shared_ptr<string> bizUnitName_ {};
      shared_ptr<string> classifyAbbreviation_ {};
      shared_ptr<int64_t> classifyId_ {};
      shared_ptr<string> classifyName_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<int64_t> datasourceId_ {};
      shared_ptr<string> datasourceName_ {};
      shared_ptr<string> fieldDescription_ {};
      shared_ptr<string> fieldId_ {};
      shared_ptr<string> fieldName_ {};
      shared_ptr<bool> hasBetterRule_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<int64_t> identifyRecordId_ {};
      shared_ptr<bool> isCustomIdentify_ {};
      shared_ptr<bool> isLocked_ {};
      shared_ptr<string> levelAbbreviation_ {};
      shared_ptr<int64_t> levelColor_ {};
      shared_ptr<int64_t> levelIndex_ {};
      shared_ptr<string> levelName_ {};
      shared_ptr<string> modifier_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<string> projectDisplayName_ {};
      shared_ptr<int64_t> projectId_ {};
      shared_ptr<string> projectName_ {};
      shared_ptr<int64_t> scanTaskId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> tableCatalog_ {};
      shared_ptr<string> tableDescription_ {};
      shared_ptr<string> tableEnv_ {};
      shared_ptr<string> tableId_ {};
      shared_ptr<string> tableName_ {};
      shared_ptr<int64_t> tableTaskId_ {};
      shared_ptr<string> tableType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->securityIdentifyResultInfo_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSecurityIdentifyResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetSecurityIdentifyResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSecurityIdentifyResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecurityIdentifyResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityIdentifyResultInfo Field Functions 
    bool hasSecurityIdentifyResultInfo() const { return this->securityIdentifyResultInfo_ != nullptr;};
    void deleteSecurityIdentifyResultInfo() { this->securityIdentifyResultInfo_ = nullptr;};
    inline const GetSecurityIdentifyResultResponseBody::SecurityIdentifyResultInfo & getSecurityIdentifyResultInfo() const { DARABONBA_PTR_GET_CONST(securityIdentifyResultInfo_, GetSecurityIdentifyResultResponseBody::SecurityIdentifyResultInfo) };
    inline GetSecurityIdentifyResultResponseBody::SecurityIdentifyResultInfo getSecurityIdentifyResultInfo() { DARABONBA_PTR_GET(securityIdentifyResultInfo_, GetSecurityIdentifyResultResponseBody::SecurityIdentifyResultInfo) };
    inline GetSecurityIdentifyResultResponseBody& setSecurityIdentifyResultInfo(const GetSecurityIdentifyResultResponseBody::SecurityIdentifyResultInfo & securityIdentifyResultInfo) { DARABONBA_PTR_SET_VALUE(securityIdentifyResultInfo_, securityIdentifyResultInfo) };
    inline GetSecurityIdentifyResultResponseBody& setSecurityIdentifyResultInfo(GetSecurityIdentifyResultResponseBody::SecurityIdentifyResultInfo && securityIdentifyResultInfo) { DARABONBA_PTR_SET_RVALUE(securityIdentifyResultInfo_, securityIdentifyResultInfo) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSecurityIdentifyResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<GetSecurityIdentifyResultResponseBody::SecurityIdentifyResultInfo> securityIdentifyResultInfo_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
