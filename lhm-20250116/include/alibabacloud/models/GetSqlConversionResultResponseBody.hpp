// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLCONVERSIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSQLCONVERSIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetSqlConversionResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlConversionResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlConversionResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    GetSqlConversionResultResponseBody() = default ;
    GetSqlConversionResultResponseBody(const GetSqlConversionResultResponseBody &) = default ;
    GetSqlConversionResultResponseBody(GetSqlConversionResultResponseBody &&) = default ;
    GetSqlConversionResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlConversionResultResponseBody() = default ;
    GetSqlConversionResultResponseBody& operator=(const GetSqlConversionResultResponseBody &) = default ;
    GetSqlConversionResultResponseBody& operator=(GetSqlConversionResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(finishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(scriptId, scriptId_);
        DARABONBA_PTR_TO_JSON(scriptName, scriptName_);
        DARABONBA_PTR_TO_JSON(scriptTransformStatus, scriptTransformStatus_);
        DARABONBA_PTR_TO_JSON(sqlResultContent, sqlResultContent_);
        DARABONBA_PTR_TO_JSON(sqlSourceContent, sqlSourceContent_);
        DARABONBA_PTR_TO_JSON(tableMappingList, tableMappingList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(finishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(scriptId, scriptId_);
        DARABONBA_PTR_FROM_JSON(scriptName, scriptName_);
        DARABONBA_PTR_FROM_JSON(scriptTransformStatus, scriptTransformStatus_);
        DARABONBA_PTR_FROM_JSON(sqlResultContent, sqlResultContent_);
        DARABONBA_PTR_FROM_JSON(sqlSourceContent, sqlSourceContent_);
        DARABONBA_PTR_FROM_JSON(tableMappingList, tableMappingList_);
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
      class TableMappingList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TableMappingList& obj) { 
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(sourceSchema, sourceSchema_);
          DARABONBA_PTR_TO_JSON(sourceTableName, sourceTableName_);
          DARABONBA_PTR_TO_JSON(targetTableName, targetTableName_);
          DARABONBA_PTR_TO_JSON(targetType, targetType_);
          DARABONBA_PTR_TO_JSON(taskId, taskId_);
          DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(uid, uid_);
        };
        friend void from_json(const Darabonba::Json& j, TableMappingList& obj) { 
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(sourceSchema, sourceSchema_);
          DARABONBA_PTR_FROM_JSON(sourceTableName, sourceTableName_);
          DARABONBA_PTR_FROM_JSON(targetTableName, targetTableName_);
          DARABONBA_PTR_FROM_JSON(targetType, targetType_);
          DARABONBA_PTR_FROM_JSON(taskId, taskId_);
          DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(uid, uid_);
        };
        TableMappingList() = default ;
        TableMappingList(const TableMappingList &) = default ;
        TableMappingList(TableMappingList &&) = default ;
        TableMappingList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TableMappingList() = default ;
        TableMappingList& operator=(const TableMappingList &) = default ;
        TableMappingList& operator=(TableMappingList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->sourceSchema_ == nullptr && this->sourceTableName_ == nullptr && this->targetTableName_ == nullptr && this->targetType_ == nullptr && this->taskId_ == nullptr
        && this->tenantId_ == nullptr && this->uid_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline TableMappingList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // sourceSchema Field Functions 
        bool hasSourceSchema() const { return this->sourceSchema_ != nullptr;};
        void deleteSourceSchema() { this->sourceSchema_ = nullptr;};
        inline string getSourceSchema() const { DARABONBA_PTR_GET_DEFAULT(sourceSchema_, "") };
        inline TableMappingList& setSourceSchema(string sourceSchema) { DARABONBA_PTR_SET_VALUE(sourceSchema_, sourceSchema) };


        // sourceTableName Field Functions 
        bool hasSourceTableName() const { return this->sourceTableName_ != nullptr;};
        void deleteSourceTableName() { this->sourceTableName_ = nullptr;};
        inline string getSourceTableName() const { DARABONBA_PTR_GET_DEFAULT(sourceTableName_, "") };
        inline TableMappingList& setSourceTableName(string sourceTableName) { DARABONBA_PTR_SET_VALUE(sourceTableName_, sourceTableName) };


        // targetTableName Field Functions 
        bool hasTargetTableName() const { return this->targetTableName_ != nullptr;};
        void deleteTargetTableName() { this->targetTableName_ = nullptr;};
        inline string getTargetTableName() const { DARABONBA_PTR_GET_DEFAULT(targetTableName_, "") };
        inline TableMappingList& setTargetTableName(string targetTableName) { DARABONBA_PTR_SET_VALUE(targetTableName_, targetTableName) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
        inline TableMappingList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
        inline TableMappingList& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline TableMappingList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // uid Field Functions 
        bool hasUid() const { return this->uid_ != nullptr;};
        void deleteUid() { this->uid_ = nullptr;};
        inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
        inline TableMappingList& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      protected:
        // The primary key.
        shared_ptr<int64_t> id_ {};
        // The source type. Valid values: DB and Schema.
        shared_ptr<string> sourceSchema_ {};
        // The source table name.
        shared_ptr<string> sourceTableName_ {};
        // The target table name.
        shared_ptr<string> targetTableName_ {};
        // The target type. Valid values: DB and Schema.
        shared_ptr<string> targetType_ {};
        // The SQL conversion task ID.
        shared_ptr<int64_t> taskId_ {};
        // The tenant ID.
        shared_ptr<string> tenantId_ {};
        // The user ID.
        shared_ptr<string> uid_ {};
      };

      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->finishTime_ == nullptr && this->scriptId_ == nullptr && this->scriptName_ == nullptr && this->scriptTransformStatus_ == nullptr && this->sqlResultContent_ == nullptr
        && this->sqlSourceContent_ == nullptr && this->tableMappingList_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline Data& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline int64_t getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, 0L) };
      inline Data& setScriptId(int64_t scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // scriptName Field Functions 
      bool hasScriptName() const { return this->scriptName_ != nullptr;};
      void deleteScriptName() { this->scriptName_ = nullptr;};
      inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
      inline Data& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


      // scriptTransformStatus Field Functions 
      bool hasScriptTransformStatus() const { return this->scriptTransformStatus_ != nullptr;};
      void deleteScriptTransformStatus() { this->scriptTransformStatus_ = nullptr;};
      inline string getScriptTransformStatus() const { DARABONBA_PTR_GET_DEFAULT(scriptTransformStatus_, "") };
      inline Data& setScriptTransformStatus(string scriptTransformStatus) { DARABONBA_PTR_SET_VALUE(scriptTransformStatus_, scriptTransformStatus) };


      // sqlResultContent Field Functions 
      bool hasSqlResultContent() const { return this->sqlResultContent_ != nullptr;};
      void deleteSqlResultContent() { this->sqlResultContent_ = nullptr;};
      inline string getSqlResultContent() const { DARABONBA_PTR_GET_DEFAULT(sqlResultContent_, "") };
      inline Data& setSqlResultContent(string sqlResultContent) { DARABONBA_PTR_SET_VALUE(sqlResultContent_, sqlResultContent) };


      // sqlSourceContent Field Functions 
      bool hasSqlSourceContent() const { return this->sqlSourceContent_ != nullptr;};
      void deleteSqlSourceContent() { this->sqlSourceContent_ = nullptr;};
      inline string getSqlSourceContent() const { DARABONBA_PTR_GET_DEFAULT(sqlSourceContent_, "") };
      inline Data& setSqlSourceContent(string sqlSourceContent) { DARABONBA_PTR_SET_VALUE(sqlSourceContent_, sqlSourceContent) };


      // tableMappingList Field Functions 
      bool hasTableMappingList() const { return this->tableMappingList_ != nullptr;};
      void deleteTableMappingList() { this->tableMappingList_ = nullptr;};
      inline const vector<Data::TableMappingList> & getTableMappingList() const { DARABONBA_PTR_GET_CONST(tableMappingList_, vector<Data::TableMappingList>) };
      inline vector<Data::TableMappingList> getTableMappingList() { DARABONBA_PTR_GET(tableMappingList_, vector<Data::TableMappingList>) };
      inline Data& setTableMappingList(const vector<Data::TableMappingList> & tableMappingList) { DARABONBA_PTR_SET_VALUE(tableMappingList_, tableMappingList) };
      inline Data& setTableMappingList(vector<Data::TableMappingList> && tableMappingList) { DARABONBA_PTR_SET_RVALUE(tableMappingList_, tableMappingList) };


    protected:
      // The error reason.
      shared_ptr<string> errorMessage_ {};
      // The completion time.
      shared_ptr<string> finishTime_ {};
      // The script ID.
      shared_ptr<int64_t> scriptId_ {};
      // The script name.
      shared_ptr<string> scriptName_ {};
      // The script conversion status. In conversion job scenarios: pass for conversion succeeded, turning for converting, and fail for conversion failed. In some scenarios: success for succeeded, failed for failed, and skipped for skipped.
      shared_ptr<string> scriptTransformStatus_ {};
      // The converted script content.
      shared_ptr<string> sqlResultContent_ {};
      // The original script content.
      shared_ptr<string> sqlSourceContent_ {};
      // The table name mapping.
      shared_ptr<vector<Data::TableMappingList>> tableMappingList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetSqlConversionResultResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetSqlConversionResultResponseBody::Data>) };
    inline vector<GetSqlConversionResultResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetSqlConversionResultResponseBody::Data>) };
    inline GetSqlConversionResultResponseBody& setData(const vector<GetSqlConversionResultResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSqlConversionResultResponseBody& setData(vector<GetSqlConversionResultResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetSqlConversionResultResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetSqlConversionResultResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline GetSqlConversionResultResponseBody& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetSqlConversionResultResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSqlConversionResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSqlConversionResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetSqlConversionResultResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The data list returned by the operation. For the structure of each element, see the child parameters.
    shared_ptr<vector<GetSqlConversionResultResponseBody::Data>> data_ {};
    // The error code. An empty string is returned if the call is successful.
    shared_ptr<string> errCode_ {};
    // The error message. An empty string is returned if the call is successful.
    shared_ptr<string> errMessage_ {};
    // The page number, starting from 1.
    shared_ptr<int32_t> pageIndex_ {};
    // The page size, which is the number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID, which is used to locate and troubleshoot issues with this call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. A value of true indicates success. A value of false indicates failure. If the call fails, check errCode and errMessage for troubleshooting.
    shared_ptr<bool> success_ {};
    // The total number of records that meet the query conditions. This value is used for pagination.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
