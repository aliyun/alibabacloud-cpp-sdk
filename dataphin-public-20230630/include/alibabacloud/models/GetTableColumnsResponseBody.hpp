// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLECOLUMNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLECOLUMNSRESPONSEBODY_HPP_
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
  class GetTableColumnsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableColumnsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableColumnsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTableColumnsResponseBody() = default ;
    GetTableColumnsResponseBody(const GetTableColumnsResponseBody &) = default ;
    GetTableColumnsResponseBody(GetTableColumnsResponseBody &&) = default ;
    GetTableColumnsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableColumnsResponseBody() = default ;
    GetTableColumnsResponseBody& operator=(const GetTableColumnsResponseBody &) = default ;
    GetTableColumnsResponseBody& operator=(GetTableColumnsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ColumnList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ColumnList& obj) { 
        DARABONBA_PTR_TO_JSON(ClassifyId, classifyId_);
        DARABONBA_PTR_TO_JSON(ClassifyName, classifyName_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
        DARABONBA_PTR_TO_JSON(DataType, dataType_);
        DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(Guid, guid_);
        DARABONBA_PTR_TO_JSON(IsForeignKey, isForeignKey_);
        DARABONBA_PTR_TO_JSON(IsPartitionColumn, isPartitionColumn_);
        DARABONBA_PTR_TO_JSON(IsPrimaryKey, isPrimaryKey_);
        DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
        DARABONBA_PTR_TO_JSON(LevelAbbreviation, levelAbbreviation_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Nullable, nullable_);
        DARABONBA_PTR_TO_JSON(SeqNumber, seqNumber_);
        DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(VisitCount30d, visitCount30d_);
      };
      friend void from_json(const Darabonba::Json& j, ColumnList& obj) { 
        DARABONBA_PTR_FROM_JSON(ClassifyId, classifyId_);
        DARABONBA_PTR_FROM_JSON(ClassifyName, classifyName_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
        DARABONBA_PTR_FROM_JSON(DataType, dataType_);
        DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(Guid, guid_);
        DARABONBA_PTR_FROM_JSON(IsForeignKey, isForeignKey_);
        DARABONBA_PTR_FROM_JSON(IsPartitionColumn, isPartitionColumn_);
        DARABONBA_PTR_FROM_JSON(IsPrimaryKey, isPrimaryKey_);
        DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
        DARABONBA_PTR_FROM_JSON(LevelAbbreviation, levelAbbreviation_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Nullable, nullable_);
        DARABONBA_PTR_FROM_JSON(SeqNumber, seqNumber_);
        DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(VisitCount30d, visitCount30d_);
      };
      ColumnList() = default ;
      ColumnList(const ColumnList &) = default ;
      ColumnList(ColumnList &&) = default ;
      ColumnList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ColumnList() = default ;
      ColumnList& operator=(const ColumnList &) = default ;
      ColumnList& operator=(ColumnList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->classifyId_ == nullptr
        && this->classifyName_ == nullptr && this->comment_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->dataSourceId_ == nullptr
        && this->dataSourceType_ == nullptr && this->dataType_ == nullptr && this->defaultValue_ == nullptr && this->displayName_ == nullptr && this->env_ == nullptr
        && this->guid_ == nullptr && this->isForeignKey_ == nullptr && this->isPartitionColumn_ == nullptr && this->isPrimaryKey_ == nullptr && this->lastModifier_ == nullptr
        && this->levelAbbreviation_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->nullable_ == nullptr && this->seqNumber_ == nullptr
        && this->tableGuid_ == nullptr && this->tableName_ == nullptr && this->visitCount30d_ == nullptr; };
      // classifyId Field Functions 
      bool hasClassifyId() const { return this->classifyId_ != nullptr;};
      void deleteClassifyId() { this->classifyId_ = nullptr;};
      inline int64_t getClassifyId() const { DARABONBA_PTR_GET_DEFAULT(classifyId_, 0L) };
      inline ColumnList& setClassifyId(int64_t classifyId) { DARABONBA_PTR_SET_VALUE(classifyId_, classifyId) };


      // classifyName Field Functions 
      bool hasClassifyName() const { return this->classifyName_ != nullptr;};
      void deleteClassifyName() { this->classifyName_ = nullptr;};
      inline string getClassifyName() const { DARABONBA_PTR_GET_DEFAULT(classifyName_, "") };
      inline ColumnList& setClassifyName(string classifyName) { DARABONBA_PTR_SET_VALUE(classifyName_, classifyName) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline ColumnList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ColumnList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline ColumnList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
      inline ColumnList& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // dataSourceType Field Functions 
      bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
      void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
      inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
      inline ColumnList& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline ColumnList& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // defaultValue Field Functions 
      bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
      void deleteDefaultValue() { this->defaultValue_ = nullptr;};
      inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
      inline ColumnList& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline ColumnList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline ColumnList& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // guid Field Functions 
      bool hasGuid() const { return this->guid_ != nullptr;};
      void deleteGuid() { this->guid_ = nullptr;};
      inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
      inline ColumnList& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


      // isForeignKey Field Functions 
      bool hasIsForeignKey() const { return this->isForeignKey_ != nullptr;};
      void deleteIsForeignKey() { this->isForeignKey_ = nullptr;};
      inline bool getIsForeignKey() const { DARABONBA_PTR_GET_DEFAULT(isForeignKey_, false) };
      inline ColumnList& setIsForeignKey(bool isForeignKey) { DARABONBA_PTR_SET_VALUE(isForeignKey_, isForeignKey) };


      // isPartitionColumn Field Functions 
      bool hasIsPartitionColumn() const { return this->isPartitionColumn_ != nullptr;};
      void deleteIsPartitionColumn() { this->isPartitionColumn_ = nullptr;};
      inline bool getIsPartitionColumn() const { DARABONBA_PTR_GET_DEFAULT(isPartitionColumn_, false) };
      inline ColumnList& setIsPartitionColumn(bool isPartitionColumn) { DARABONBA_PTR_SET_VALUE(isPartitionColumn_, isPartitionColumn) };


      // isPrimaryKey Field Functions 
      bool hasIsPrimaryKey() const { return this->isPrimaryKey_ != nullptr;};
      void deleteIsPrimaryKey() { this->isPrimaryKey_ = nullptr;};
      inline bool getIsPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(isPrimaryKey_, false) };
      inline ColumnList& setIsPrimaryKey(bool isPrimaryKey) { DARABONBA_PTR_SET_VALUE(isPrimaryKey_, isPrimaryKey) };


      // lastModifier Field Functions 
      bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
      void deleteLastModifier() { this->lastModifier_ = nullptr;};
      inline string getLastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
      inline ColumnList& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


      // levelAbbreviation Field Functions 
      bool hasLevelAbbreviation() const { return this->levelAbbreviation_ != nullptr;};
      void deleteLevelAbbreviation() { this->levelAbbreviation_ = nullptr;};
      inline string getLevelAbbreviation() const { DARABONBA_PTR_GET_DEFAULT(levelAbbreviation_, "") };
      inline ColumnList& setLevelAbbreviation(string levelAbbreviation) { DARABONBA_PTR_SET_VALUE(levelAbbreviation_, levelAbbreviation) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline ColumnList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ColumnList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nullable Field Functions 
      bool hasNullable() const { return this->nullable_ != nullptr;};
      void deleteNullable() { this->nullable_ = nullptr;};
      inline bool getNullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
      inline ColumnList& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


      // seqNumber Field Functions 
      bool hasSeqNumber() const { return this->seqNumber_ != nullptr;};
      void deleteSeqNumber() { this->seqNumber_ = nullptr;};
      inline int32_t getSeqNumber() const { DARABONBA_PTR_GET_DEFAULT(seqNumber_, 0) };
      inline ColumnList& setSeqNumber(int32_t seqNumber) { DARABONBA_PTR_SET_VALUE(seqNumber_, seqNumber) };


      // tableGuid Field Functions 
      bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
      void deleteTableGuid() { this->tableGuid_ = nullptr;};
      inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
      inline ColumnList& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline ColumnList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // visitCount30d Field Functions 
      bool hasVisitCount30d() const { return this->visitCount30d_ != nullptr;};
      void deleteVisitCount30d() { this->visitCount30d_ = nullptr;};
      inline int64_t getVisitCount30d() const { DARABONBA_PTR_GET_DEFAULT(visitCount30d_, 0L) };
      inline ColumnList& setVisitCount30d(int64_t visitCount30d) { DARABONBA_PTR_SET_VALUE(visitCount30d_, visitCount30d) };


    protected:
      shared_ptr<int64_t> classifyId_ {};
      shared_ptr<string> classifyName_ {};
      shared_ptr<string> comment_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<int64_t> dataSourceId_ {};
      shared_ptr<string> dataSourceType_ {};
      shared_ptr<string> dataType_ {};
      shared_ptr<string> defaultValue_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<string> env_ {};
      shared_ptr<string> guid_ {};
      shared_ptr<bool> isForeignKey_ {};
      shared_ptr<bool> isPartitionColumn_ {};
      shared_ptr<bool> isPrimaryKey_ {};
      shared_ptr<string> lastModifier_ {};
      shared_ptr<string> levelAbbreviation_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<bool> nullable_ {};
      shared_ptr<int32_t> seqNumber_ {};
      shared_ptr<string> tableGuid_ {};
      shared_ptr<string> tableName_ {};
      shared_ptr<int64_t> visitCount30d_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->columnList_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTableColumnsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // columnList Field Functions 
    bool hasColumnList() const { return this->columnList_ != nullptr;};
    void deleteColumnList() { this->columnList_ = nullptr;};
    inline const vector<GetTableColumnsResponseBody::ColumnList> & getColumnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<GetTableColumnsResponseBody::ColumnList>) };
    inline vector<GetTableColumnsResponseBody::ColumnList> getColumnList() { DARABONBA_PTR_GET(columnList_, vector<GetTableColumnsResponseBody::ColumnList>) };
    inline GetTableColumnsResponseBody& setColumnList(const vector<GetTableColumnsResponseBody::ColumnList> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
    inline GetTableColumnsResponseBody& setColumnList(vector<GetTableColumnsResponseBody::ColumnList> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetTableColumnsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTableColumnsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTableColumnsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTableColumnsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetTableColumnsResponseBody::ColumnList>> columnList_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
