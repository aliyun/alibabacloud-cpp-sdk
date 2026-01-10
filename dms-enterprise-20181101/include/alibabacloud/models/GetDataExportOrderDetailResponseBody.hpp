// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAEXPORTORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAEXPORTORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataExportOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataExportOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataExportOrderDetail, dataExportOrderDetail_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataExportOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataExportOrderDetail, dataExportOrderDetail_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataExportOrderDetailResponseBody() = default ;
    GetDataExportOrderDetailResponseBody(const GetDataExportOrderDetailResponseBody &) = default ;
    GetDataExportOrderDetailResponseBody(GetDataExportOrderDetailResponseBody &&) = default ;
    GetDataExportOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataExportOrderDetailResponseBody() = default ;
    GetDataExportOrderDetailResponseBody& operator=(const GetDataExportOrderDetailResponseBody &) = default ;
    GetDataExportOrderDetailResponseBody& operator=(GetDataExportOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataExportOrderDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataExportOrderDetail& obj) { 
        DARABONBA_PTR_TO_JSON(KeyInfo, keyInfo_);
        DARABONBA_PTR_TO_JSON(OrderDetail, orderDetail_);
      };
      friend void from_json(const Darabonba::Json& j, DataExportOrderDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(KeyInfo, keyInfo_);
        DARABONBA_PTR_FROM_JSON(OrderDetail, orderDetail_);
      };
      DataExportOrderDetail() = default ;
      DataExportOrderDetail(const DataExportOrderDetail &) = default ;
      DataExportOrderDetail(DataExportOrderDetail &&) = default ;
      DataExportOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataExportOrderDetail() = default ;
      DataExportOrderDetail& operator=(const DataExportOrderDetail &) = default ;
      DataExportOrderDetail& operator=(DataExportOrderDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OrderDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OrderDetail& obj) { 
          DARABONBA_PTR_TO_JSON(ActualAffectRows, actualAffectRows_);
          DARABONBA_PTR_TO_JSON(Classify, classify_);
          DARABONBA_PTR_TO_JSON(Database, database_);
          DARABONBA_PTR_TO_JSON(DbId, dbId_);
          DARABONBA_PTR_TO_JSON(EnvType, envType_);
          DARABONBA_PTR_TO_JSON(ExeSQL, exeSQL_);
          DARABONBA_PTR_TO_JSON(IgnoreAffectRows, ignoreAffectRows_);
          DARABONBA_PTR_TO_JSON(IgnoreAffectRowsReason, ignoreAffectRowsReason_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
        };
        friend void from_json(const Darabonba::Json& j, OrderDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(ActualAffectRows, actualAffectRows_);
          DARABONBA_PTR_FROM_JSON(Classify, classify_);
          DARABONBA_PTR_FROM_JSON(Database, database_);
          DARABONBA_PTR_FROM_JSON(DbId, dbId_);
          DARABONBA_PTR_FROM_JSON(EnvType, envType_);
          DARABONBA_PTR_FROM_JSON(ExeSQL, exeSQL_);
          DARABONBA_PTR_FROM_JSON(IgnoreAffectRows, ignoreAffectRows_);
          DARABONBA_PTR_FROM_JSON(IgnoreAffectRowsReason, ignoreAffectRowsReason_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
        };
        OrderDetail() = default ;
        OrderDetail(const OrderDetail &) = default ;
        OrderDetail(OrderDetail &&) = default ;
        OrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OrderDetail() = default ;
        OrderDetail& operator=(const OrderDetail &) = default ;
        OrderDetail& operator=(OrderDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actualAffectRows_ == nullptr
        && this->classify_ == nullptr && this->database_ == nullptr && this->dbId_ == nullptr && this->envType_ == nullptr && this->exeSQL_ == nullptr
        && this->ignoreAffectRows_ == nullptr && this->ignoreAffectRowsReason_ == nullptr && this->logic_ == nullptr; };
        // actualAffectRows Field Functions 
        bool hasActualAffectRows() const { return this->actualAffectRows_ != nullptr;};
        void deleteActualAffectRows() { this->actualAffectRows_ = nullptr;};
        inline int64_t getActualAffectRows() const { DARABONBA_PTR_GET_DEFAULT(actualAffectRows_, 0L) };
        inline OrderDetail& setActualAffectRows(int64_t actualAffectRows) { DARABONBA_PTR_SET_VALUE(actualAffectRows_, actualAffectRows) };


        // classify Field Functions 
        bool hasClassify() const { return this->classify_ != nullptr;};
        void deleteClassify() { this->classify_ = nullptr;};
        inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
        inline OrderDetail& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


        // database Field Functions 
        bool hasDatabase() const { return this->database_ != nullptr;};
        void deleteDatabase() { this->database_ = nullptr;};
        inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
        inline OrderDetail& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
        inline OrderDetail& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline OrderDetail& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // exeSQL Field Functions 
        bool hasExeSQL() const { return this->exeSQL_ != nullptr;};
        void deleteExeSQL() { this->exeSQL_ = nullptr;};
        inline string getExeSQL() const { DARABONBA_PTR_GET_DEFAULT(exeSQL_, "") };
        inline OrderDetail& setExeSQL(string exeSQL) { DARABONBA_PTR_SET_VALUE(exeSQL_, exeSQL) };


        // ignoreAffectRows Field Functions 
        bool hasIgnoreAffectRows() const { return this->ignoreAffectRows_ != nullptr;};
        void deleteIgnoreAffectRows() { this->ignoreAffectRows_ = nullptr;};
        inline bool getIgnoreAffectRows() const { DARABONBA_PTR_GET_DEFAULT(ignoreAffectRows_, false) };
        inline OrderDetail& setIgnoreAffectRows(bool ignoreAffectRows) { DARABONBA_PTR_SET_VALUE(ignoreAffectRows_, ignoreAffectRows) };


        // ignoreAffectRowsReason Field Functions 
        bool hasIgnoreAffectRowsReason() const { return this->ignoreAffectRowsReason_ != nullptr;};
        void deleteIgnoreAffectRowsReason() { this->ignoreAffectRowsReason_ = nullptr;};
        inline string getIgnoreAffectRowsReason() const { DARABONBA_PTR_GET_DEFAULT(ignoreAffectRowsReason_, "") };
        inline OrderDetail& setIgnoreAffectRowsReason(string ignoreAffectRowsReason) { DARABONBA_PTR_SET_VALUE(ignoreAffectRowsReason_, ignoreAffectRowsReason) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline OrderDetail& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


      protected:
        // The number of rows that were affected by the SQL statement.
        shared_ptr<int64_t> actualAffectRows_ {};
        // The category of the reason for the data export.
        shared_ptr<string> classify_ {};
        // The name of the database from which data was exported.
        shared_ptr<string> database_ {};
        // The ID of the database from which data was exported.
        shared_ptr<int32_t> dbId_ {};
        // The type of the environment to which the database belongs.
        shared_ptr<string> envType_ {};
        // The SQL statement that was executed to export data.
        shared_ptr<string> exeSQL_ {};
        // Indicates whether the affected rows are skipped.
        shared_ptr<bool> ignoreAffectRows_ {};
        // The reason why the affected rows are skipped.
        shared_ptr<string> ignoreAffectRowsReason_ {};
        // Indicates whether the database is a logical database.
        shared_ptr<bool> logic_ {};
      };

      class KeyInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KeyInfo& obj) { 
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
          DARABONBA_PTR_TO_JSON(PreCheckId, preCheckId_);
        };
        friend void from_json(const Darabonba::Json& j, KeyInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
          DARABONBA_PTR_FROM_JSON(PreCheckId, preCheckId_);
        };
        KeyInfo() = default ;
        KeyInfo(const KeyInfo &) = default ;
        KeyInfo(KeyInfo &&) = default ;
        KeyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KeyInfo() = default ;
        KeyInfo& operator=(const KeyInfo &) = default ;
        KeyInfo& operator=(KeyInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->jobId_ == nullptr
        && this->jobStatus_ == nullptr && this->preCheckId_ == nullptr; };
        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
        inline KeyInfo& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // jobStatus Field Functions 
        bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
        void deleteJobStatus() { this->jobStatus_ = nullptr;};
        inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
        inline KeyInfo& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


        // preCheckId Field Functions 
        bool hasPreCheckId() const { return this->preCheckId_ != nullptr;};
        void deletePreCheckId() { this->preCheckId_ = nullptr;};
        inline int64_t getPreCheckId() const { DARABONBA_PTR_GET_DEFAULT(preCheckId_, 0L) };
        inline KeyInfo& setPreCheckId(int64_t preCheckId) { DARABONBA_PTR_SET_VALUE(preCheckId_, preCheckId) };


      protected:
        // Export task ID.
        shared_ptr<int64_t> jobId_ {};
        // The state of the data export ticket. Valid values:
        // 
        // *   **PRE_CHECKING**: The ticket was being prechecked.
        // *   **PRE_CHECK_SUCCESS**: The ticket passed the precheck.
        // *   **PRE_CHECK_FAIL**: The ticket failed to pass the prechecked.
        // *   **WAITING_APPLY_AUDIT**: The ticket was to be submitted for approval.
        // *   **APPLY_AUDIT_SUCCESS**: The ticket was submitted for approval.
        // *   **ENABLE_EXPORT**: The ticket was approved. Data can be exported.
        // *   **WAITING_EXPORT**: Data was to be scheduled for export.
        // *   **DOING_EXPORT**: Data was being exported.
        // *   **EXPORT_FAIL**: Data failed to be exported.
        // *   **EXPORT_SUCCESS**: Data was exported.
        shared_ptr<string> jobStatus_ {};
        // The precheck ID.
        shared_ptr<int64_t> preCheckId_ {};
      };

      virtual bool empty() const override { return this->keyInfo_ == nullptr
        && this->orderDetail_ == nullptr; };
      // keyInfo Field Functions 
      bool hasKeyInfo() const { return this->keyInfo_ != nullptr;};
      void deleteKeyInfo() { this->keyInfo_ = nullptr;};
      inline const DataExportOrderDetail::KeyInfo & getKeyInfo() const { DARABONBA_PTR_GET_CONST(keyInfo_, DataExportOrderDetail::KeyInfo) };
      inline DataExportOrderDetail::KeyInfo getKeyInfo() { DARABONBA_PTR_GET(keyInfo_, DataExportOrderDetail::KeyInfo) };
      inline DataExportOrderDetail& setKeyInfo(const DataExportOrderDetail::KeyInfo & keyInfo) { DARABONBA_PTR_SET_VALUE(keyInfo_, keyInfo) };
      inline DataExportOrderDetail& setKeyInfo(DataExportOrderDetail::KeyInfo && keyInfo) { DARABONBA_PTR_SET_RVALUE(keyInfo_, keyInfo) };


      // orderDetail Field Functions 
      bool hasOrderDetail() const { return this->orderDetail_ != nullptr;};
      void deleteOrderDetail() { this->orderDetail_ = nullptr;};
      inline const DataExportOrderDetail::OrderDetail & getOrderDetail() const { DARABONBA_PTR_GET_CONST(orderDetail_, DataExportOrderDetail::OrderDetail) };
      inline DataExportOrderDetail::OrderDetail getOrderDetail() { DARABONBA_PTR_GET(orderDetail_, DataExportOrderDetail::OrderDetail) };
      inline DataExportOrderDetail& setOrderDetail(const DataExportOrderDetail::OrderDetail & orderDetail) { DARABONBA_PTR_SET_VALUE(orderDetail_, orderDetail) };
      inline DataExportOrderDetail& setOrderDetail(DataExportOrderDetail::OrderDetail && orderDetail) { DARABONBA_PTR_SET_RVALUE(orderDetail_, orderDetail) };


    protected:
      // The status information.
      shared_ptr<DataExportOrderDetail::KeyInfo> keyInfo_ {};
      // The details of the ticket.
      shared_ptr<DataExportOrderDetail::OrderDetail> orderDetail_ {};
    };

    virtual bool empty() const override { return this->dataExportOrderDetail_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // dataExportOrderDetail Field Functions 
    bool hasDataExportOrderDetail() const { return this->dataExportOrderDetail_ != nullptr;};
    void deleteDataExportOrderDetail() { this->dataExportOrderDetail_ = nullptr;};
    inline const GetDataExportOrderDetailResponseBody::DataExportOrderDetail & getDataExportOrderDetail() const { DARABONBA_PTR_GET_CONST(dataExportOrderDetail_, GetDataExportOrderDetailResponseBody::DataExportOrderDetail) };
    inline GetDataExportOrderDetailResponseBody::DataExportOrderDetail getDataExportOrderDetail() { DARABONBA_PTR_GET(dataExportOrderDetail_, GetDataExportOrderDetailResponseBody::DataExportOrderDetail) };
    inline GetDataExportOrderDetailResponseBody& setDataExportOrderDetail(const GetDataExportOrderDetailResponseBody::DataExportOrderDetail & dataExportOrderDetail) { DARABONBA_PTR_SET_VALUE(dataExportOrderDetail_, dataExportOrderDetail) };
    inline GetDataExportOrderDetailResponseBody& setDataExportOrderDetail(GetDataExportOrderDetailResponseBody::DataExportOrderDetail && dataExportOrderDetail) { DARABONBA_PTR_SET_RVALUE(dataExportOrderDetail_, dataExportOrderDetail) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataExportOrderDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataExportOrderDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataExportOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataExportOrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the data export ticket.
    shared_ptr<GetDataExportOrderDetailResponseBody::DataExportOrderDetail> dataExportOrderDetail_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
