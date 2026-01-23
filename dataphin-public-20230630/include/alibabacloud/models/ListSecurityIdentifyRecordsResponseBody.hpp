// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYIDENTIFYRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYIDENTIFYRECORDSRESPONSEBODY_HPP_
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
  class ListSecurityIdentifyRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityIdentifyRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityIdentifyRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSecurityIdentifyRecordsResponseBody() = default ;
    ListSecurityIdentifyRecordsResponseBody(const ListSecurityIdentifyRecordsResponseBody &) = default ;
    ListSecurityIdentifyRecordsResponseBody(ListSecurityIdentifyRecordsResponseBody &&) = default ;
    ListSecurityIdentifyRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityIdentifyRecordsResponseBody() = default ;
    ListSecurityIdentifyRecordsResponseBody& operator=(const ListSecurityIdentifyRecordsResponseBody &) = default ;
    ListSecurityIdentifyRecordsResponseBody& operator=(ListSecurityIdentifyRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(IdentifyRecordList, identifyRecordList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(IdentifyRecordList, identifyRecordList_);
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
      class IdentifyRecordList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IdentifyRecordList& obj) { 
          DARABONBA_PTR_TO_JSON(ActualIdentifyRate, actualIdentifyRate_);
          DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
          DARABONBA_PTR_TO_JSON(BizUnitDisplayName, bizUnitDisplayName_);
          DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
          DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
          DARABONBA_PTR_TO_JSON(ClassifyAbbreviation, classifyAbbreviation_);
          DARABONBA_PTR_TO_JSON(ClassifyId, classifyId_);
          DARABONBA_PTR_TO_JSON(ClassifyName, classifyName_);
          DARABONBA_PTR_TO_JSON(ClassifyStatus, classifyStatus_);
          DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
          DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
          DARABONBA_PTR_TO_JSON(FieldDescription, fieldDescription_);
          DARABONBA_PTR_TO_JSON(FieldId, fieldId_);
          DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsBetterMatch, isBetterMatch_);
          DARABONBA_PTR_TO_JSON(IsCustomIdentify, isCustomIdentify_);
          DARABONBA_PTR_TO_JSON(IsLocked, isLocked_);
          DARABONBA_PTR_TO_JSON(LevelAbbreviation, levelAbbreviation_);
          DARABONBA_PTR_TO_JSON(LevelIndex, levelIndex_);
          DARABONBA_PTR_TO_JSON(LevelName, levelName_);
          DARABONBA_PTR_TO_JSON(ProjectDisplayName, projectDisplayName_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(TableDescription, tableDescription_);
          DARABONBA_PTR_TO_JSON(TableEnv, tableEnv_);
          DARABONBA_PTR_TO_JSON(TableId, tableId_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
          DARABONBA_PTR_TO_JSON(TableType, tableType_);
        };
        friend void from_json(const Darabonba::Json& j, IdentifyRecordList& obj) { 
          DARABONBA_PTR_FROM_JSON(ActualIdentifyRate, actualIdentifyRate_);
          DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
          DARABONBA_PTR_FROM_JSON(BizUnitDisplayName, bizUnitDisplayName_);
          DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
          DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
          DARABONBA_PTR_FROM_JSON(ClassifyAbbreviation, classifyAbbreviation_);
          DARABONBA_PTR_FROM_JSON(ClassifyId, classifyId_);
          DARABONBA_PTR_FROM_JSON(ClassifyName, classifyName_);
          DARABONBA_PTR_FROM_JSON(ClassifyStatus, classifyStatus_);
          DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
          DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
          DARABONBA_PTR_FROM_JSON(FieldDescription, fieldDescription_);
          DARABONBA_PTR_FROM_JSON(FieldId, fieldId_);
          DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsBetterMatch, isBetterMatch_);
          DARABONBA_PTR_FROM_JSON(IsCustomIdentify, isCustomIdentify_);
          DARABONBA_PTR_FROM_JSON(IsLocked, isLocked_);
          DARABONBA_PTR_FROM_JSON(LevelAbbreviation, levelAbbreviation_);
          DARABONBA_PTR_FROM_JSON(LevelIndex, levelIndex_);
          DARABONBA_PTR_FROM_JSON(LevelName, levelName_);
          DARABONBA_PTR_FROM_JSON(ProjectDisplayName, projectDisplayName_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(TableDescription, tableDescription_);
          DARABONBA_PTR_FROM_JSON(TableEnv, tableEnv_);
          DARABONBA_PTR_FROM_JSON(TableId, tableId_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          DARABONBA_PTR_FROM_JSON(TableType, tableType_);
        };
        IdentifyRecordList() = default ;
        IdentifyRecordList(const IdentifyRecordList &) = default ;
        IdentifyRecordList(IdentifyRecordList &&) = default ;
        IdentifyRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IdentifyRecordList() = default ;
        IdentifyRecordList& operator=(const IdentifyRecordList &) = default ;
        IdentifyRecordList& operator=(IdentifyRecordList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actualIdentifyRate_ == nullptr
        && this->bizDate_ == nullptr && this->bizUnitDisplayName_ == nullptr && this->bizUnitId_ == nullptr && this->bizUnitName_ == nullptr && this->classifyAbbreviation_ == nullptr
        && this->classifyId_ == nullptr && this->classifyName_ == nullptr && this->classifyStatus_ == nullptr && this->datasourceId_ == nullptr && this->datasourceName_ == nullptr
        && this->fieldDescription_ == nullptr && this->fieldId_ == nullptr && this->fieldName_ == nullptr && this->id_ == nullptr && this->isBetterMatch_ == nullptr
        && this->isCustomIdentify_ == nullptr && this->isLocked_ == nullptr && this->levelAbbreviation_ == nullptr && this->levelIndex_ == nullptr && this->levelName_ == nullptr
        && this->projectDisplayName_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr && this->tableDescription_ == nullptr && this->tableEnv_ == nullptr
        && this->tableId_ == nullptr && this->tableName_ == nullptr && this->tableType_ == nullptr; };
        // actualIdentifyRate Field Functions 
        bool hasActualIdentifyRate() const { return this->actualIdentifyRate_ != nullptr;};
        void deleteActualIdentifyRate() { this->actualIdentifyRate_ = nullptr;};
        inline double getActualIdentifyRate() const { DARABONBA_PTR_GET_DEFAULT(actualIdentifyRate_, 0.0) };
        inline IdentifyRecordList& setActualIdentifyRate(double actualIdentifyRate) { DARABONBA_PTR_SET_VALUE(actualIdentifyRate_, actualIdentifyRate) };


        // bizDate Field Functions 
        bool hasBizDate() const { return this->bizDate_ != nullptr;};
        void deleteBizDate() { this->bizDate_ = nullptr;};
        inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
        inline IdentifyRecordList& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


        // bizUnitDisplayName Field Functions 
        bool hasBizUnitDisplayName() const { return this->bizUnitDisplayName_ != nullptr;};
        void deleteBizUnitDisplayName() { this->bizUnitDisplayName_ = nullptr;};
        inline string getBizUnitDisplayName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitDisplayName_, "") };
        inline IdentifyRecordList& setBizUnitDisplayName(string bizUnitDisplayName) { DARABONBA_PTR_SET_VALUE(bizUnitDisplayName_, bizUnitDisplayName) };


        // bizUnitId Field Functions 
        bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
        void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
        inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
        inline IdentifyRecordList& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


        // bizUnitName Field Functions 
        bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
        void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
        inline string getBizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
        inline IdentifyRecordList& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


        // classifyAbbreviation Field Functions 
        bool hasClassifyAbbreviation() const { return this->classifyAbbreviation_ != nullptr;};
        void deleteClassifyAbbreviation() { this->classifyAbbreviation_ = nullptr;};
        inline string getClassifyAbbreviation() const { DARABONBA_PTR_GET_DEFAULT(classifyAbbreviation_, "") };
        inline IdentifyRecordList& setClassifyAbbreviation(string classifyAbbreviation) { DARABONBA_PTR_SET_VALUE(classifyAbbreviation_, classifyAbbreviation) };


        // classifyId Field Functions 
        bool hasClassifyId() const { return this->classifyId_ != nullptr;};
        void deleteClassifyId() { this->classifyId_ = nullptr;};
        inline int64_t getClassifyId() const { DARABONBA_PTR_GET_DEFAULT(classifyId_, 0L) };
        inline IdentifyRecordList& setClassifyId(int64_t classifyId) { DARABONBA_PTR_SET_VALUE(classifyId_, classifyId) };


        // classifyName Field Functions 
        bool hasClassifyName() const { return this->classifyName_ != nullptr;};
        void deleteClassifyName() { this->classifyName_ = nullptr;};
        inline string getClassifyName() const { DARABONBA_PTR_GET_DEFAULT(classifyName_, "") };
        inline IdentifyRecordList& setClassifyName(string classifyName) { DARABONBA_PTR_SET_VALUE(classifyName_, classifyName) };


        // classifyStatus Field Functions 
        bool hasClassifyStatus() const { return this->classifyStatus_ != nullptr;};
        void deleteClassifyStatus() { this->classifyStatus_ = nullptr;};
        inline string getClassifyStatus() const { DARABONBA_PTR_GET_DEFAULT(classifyStatus_, "") };
        inline IdentifyRecordList& setClassifyStatus(string classifyStatus) { DARABONBA_PTR_SET_VALUE(classifyStatus_, classifyStatus) };


        // datasourceId Field Functions 
        bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
        void deleteDatasourceId() { this->datasourceId_ = nullptr;};
        inline int64_t getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, 0L) };
        inline IdentifyRecordList& setDatasourceId(int64_t datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


        // datasourceName Field Functions 
        bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
        void deleteDatasourceName() { this->datasourceName_ = nullptr;};
        inline string getDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
        inline IdentifyRecordList& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


        // fieldDescription Field Functions 
        bool hasFieldDescription() const { return this->fieldDescription_ != nullptr;};
        void deleteFieldDescription() { this->fieldDescription_ = nullptr;};
        inline string getFieldDescription() const { DARABONBA_PTR_GET_DEFAULT(fieldDescription_, "") };
        inline IdentifyRecordList& setFieldDescription(string fieldDescription) { DARABONBA_PTR_SET_VALUE(fieldDescription_, fieldDescription) };


        // fieldId Field Functions 
        bool hasFieldId() const { return this->fieldId_ != nullptr;};
        void deleteFieldId() { this->fieldId_ = nullptr;};
        inline string getFieldId() const { DARABONBA_PTR_GET_DEFAULT(fieldId_, "") };
        inline IdentifyRecordList& setFieldId(string fieldId) { DARABONBA_PTR_SET_VALUE(fieldId_, fieldId) };


        // fieldName Field Functions 
        bool hasFieldName() const { return this->fieldName_ != nullptr;};
        void deleteFieldName() { this->fieldName_ = nullptr;};
        inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
        inline IdentifyRecordList& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline IdentifyRecordList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isBetterMatch Field Functions 
        bool hasIsBetterMatch() const { return this->isBetterMatch_ != nullptr;};
        void deleteIsBetterMatch() { this->isBetterMatch_ = nullptr;};
        inline bool getIsBetterMatch() const { DARABONBA_PTR_GET_DEFAULT(isBetterMatch_, false) };
        inline IdentifyRecordList& setIsBetterMatch(bool isBetterMatch) { DARABONBA_PTR_SET_VALUE(isBetterMatch_, isBetterMatch) };


        // isCustomIdentify Field Functions 
        bool hasIsCustomIdentify() const { return this->isCustomIdentify_ != nullptr;};
        void deleteIsCustomIdentify() { this->isCustomIdentify_ = nullptr;};
        inline bool getIsCustomIdentify() const { DARABONBA_PTR_GET_DEFAULT(isCustomIdentify_, false) };
        inline IdentifyRecordList& setIsCustomIdentify(bool isCustomIdentify) { DARABONBA_PTR_SET_VALUE(isCustomIdentify_, isCustomIdentify) };


        // isLocked Field Functions 
        bool hasIsLocked() const { return this->isLocked_ != nullptr;};
        void deleteIsLocked() { this->isLocked_ = nullptr;};
        inline bool getIsLocked() const { DARABONBA_PTR_GET_DEFAULT(isLocked_, false) };
        inline IdentifyRecordList& setIsLocked(bool isLocked) { DARABONBA_PTR_SET_VALUE(isLocked_, isLocked) };


        // levelAbbreviation Field Functions 
        bool hasLevelAbbreviation() const { return this->levelAbbreviation_ != nullptr;};
        void deleteLevelAbbreviation() { this->levelAbbreviation_ = nullptr;};
        inline string getLevelAbbreviation() const { DARABONBA_PTR_GET_DEFAULT(levelAbbreviation_, "") };
        inline IdentifyRecordList& setLevelAbbreviation(string levelAbbreviation) { DARABONBA_PTR_SET_VALUE(levelAbbreviation_, levelAbbreviation) };


        // levelIndex Field Functions 
        bool hasLevelIndex() const { return this->levelIndex_ != nullptr;};
        void deleteLevelIndex() { this->levelIndex_ = nullptr;};
        inline int64_t getLevelIndex() const { DARABONBA_PTR_GET_DEFAULT(levelIndex_, 0L) };
        inline IdentifyRecordList& setLevelIndex(int64_t levelIndex) { DARABONBA_PTR_SET_VALUE(levelIndex_, levelIndex) };


        // levelName Field Functions 
        bool hasLevelName() const { return this->levelName_ != nullptr;};
        void deleteLevelName() { this->levelName_ = nullptr;};
        inline string getLevelName() const { DARABONBA_PTR_GET_DEFAULT(levelName_, "") };
        inline IdentifyRecordList& setLevelName(string levelName) { DARABONBA_PTR_SET_VALUE(levelName_, levelName) };


        // projectDisplayName Field Functions 
        bool hasProjectDisplayName() const { return this->projectDisplayName_ != nullptr;};
        void deleteProjectDisplayName() { this->projectDisplayName_ = nullptr;};
        inline string getProjectDisplayName() const { DARABONBA_PTR_GET_DEFAULT(projectDisplayName_, "") };
        inline IdentifyRecordList& setProjectDisplayName(string projectDisplayName) { DARABONBA_PTR_SET_VALUE(projectDisplayName_, projectDisplayName) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline IdentifyRecordList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline IdentifyRecordList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // tableDescription Field Functions 
        bool hasTableDescription() const { return this->tableDescription_ != nullptr;};
        void deleteTableDescription() { this->tableDescription_ = nullptr;};
        inline string getTableDescription() const { DARABONBA_PTR_GET_DEFAULT(tableDescription_, "") };
        inline IdentifyRecordList& setTableDescription(string tableDescription) { DARABONBA_PTR_SET_VALUE(tableDescription_, tableDescription) };


        // tableEnv Field Functions 
        bool hasTableEnv() const { return this->tableEnv_ != nullptr;};
        void deleteTableEnv() { this->tableEnv_ = nullptr;};
        inline string getTableEnv() const { DARABONBA_PTR_GET_DEFAULT(tableEnv_, "") };
        inline IdentifyRecordList& setTableEnv(string tableEnv) { DARABONBA_PTR_SET_VALUE(tableEnv_, tableEnv) };


        // tableId Field Functions 
        bool hasTableId() const { return this->tableId_ != nullptr;};
        void deleteTableId() { this->tableId_ = nullptr;};
        inline string getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
        inline IdentifyRecordList& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline IdentifyRecordList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // tableType Field Functions 
        bool hasTableType() const { return this->tableType_ != nullptr;};
        void deleteTableType() { this->tableType_ = nullptr;};
        inline string getTableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
        inline IdentifyRecordList& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


      protected:
        shared_ptr<double> actualIdentifyRate_ {};
        shared_ptr<string> bizDate_ {};
        shared_ptr<string> bizUnitDisplayName_ {};
        shared_ptr<int64_t> bizUnitId_ {};
        shared_ptr<string> bizUnitName_ {};
        shared_ptr<string> classifyAbbreviation_ {};
        shared_ptr<int64_t> classifyId_ {};
        shared_ptr<string> classifyName_ {};
        shared_ptr<string> classifyStatus_ {};
        shared_ptr<int64_t> datasourceId_ {};
        shared_ptr<string> datasourceName_ {};
        shared_ptr<string> fieldDescription_ {};
        shared_ptr<string> fieldId_ {};
        shared_ptr<string> fieldName_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<bool> isBetterMatch_ {};
        shared_ptr<bool> isCustomIdentify_ {};
        shared_ptr<bool> isLocked_ {};
        shared_ptr<string> levelAbbreviation_ {};
        shared_ptr<int64_t> levelIndex_ {};
        shared_ptr<string> levelName_ {};
        shared_ptr<string> projectDisplayName_ {};
        shared_ptr<int64_t> projectId_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<string> tableDescription_ {};
        shared_ptr<string> tableEnv_ {};
        shared_ptr<string> tableId_ {};
        shared_ptr<string> tableName_ {};
        shared_ptr<string> tableType_ {};
      };

      virtual bool empty() const override { return this->identifyRecordList_ == nullptr
        && this->totalCount_ == nullptr; };
      // identifyRecordList Field Functions 
      bool hasIdentifyRecordList() const { return this->identifyRecordList_ != nullptr;};
      void deleteIdentifyRecordList() { this->identifyRecordList_ = nullptr;};
      inline const vector<PageResult::IdentifyRecordList> & getIdentifyRecordList() const { DARABONBA_PTR_GET_CONST(identifyRecordList_, vector<PageResult::IdentifyRecordList>) };
      inline vector<PageResult::IdentifyRecordList> getIdentifyRecordList() { DARABONBA_PTR_GET(identifyRecordList_, vector<PageResult::IdentifyRecordList>) };
      inline PageResult& setIdentifyRecordList(const vector<PageResult::IdentifyRecordList> & identifyRecordList) { DARABONBA_PTR_SET_VALUE(identifyRecordList_, identifyRecordList) };
      inline PageResult& setIdentifyRecordList(vector<PageResult::IdentifyRecordList> && identifyRecordList) { DARABONBA_PTR_SET_RVALUE(identifyRecordList_, identifyRecordList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageResult::IdentifyRecordList>> identifyRecordList_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSecurityIdentifyRecordsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListSecurityIdentifyRecordsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSecurityIdentifyRecordsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListSecurityIdentifyRecordsResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListSecurityIdentifyRecordsResponseBody::PageResult) };
    inline ListSecurityIdentifyRecordsResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListSecurityIdentifyRecordsResponseBody::PageResult) };
    inline ListSecurityIdentifyRecordsResponseBody& setPageResult(const ListSecurityIdentifyRecordsResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListSecurityIdentifyRecordsResponseBody& setPageResult(ListSecurityIdentifyRecordsResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSecurityIdentifyRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSecurityIdentifyRecordsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListSecurityIdentifyRecordsResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
