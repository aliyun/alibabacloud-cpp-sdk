// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeSlowLogRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSlowLogRecordsResponseBody() = default ;
    DescribeSlowLogRecordsResponseBody(const DescribeSlowLogRecordsResponseBody &) = default ;
    DescribeSlowLogRecordsResponseBody(DescribeSlowLogRecordsResponseBody &&) = default ;
    DescribeSlowLogRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogRecordsResponseBody() = default ;
    DescribeSlowLogRecordsResponseBody& operator=(const DescribeSlowLogRecordsResponseBody &) = default ;
    DescribeSlowLogRecordsResponseBody& operator=(DescribeSlowLogRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CNname, CNname_);
        DARABONBA_PTR_TO_JSON(DBName, DBName_);
        DARABONBA_PTR_TO_JSON(Extension, extension_);
        DARABONBA_PTR_TO_JSON(Fail, fail_);
        DARABONBA_PTR_TO_JSON(Frows, frows_);
        DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
        DARABONBA_PTR_TO_JSON(InsName, insName_);
        DARABONBA_PTR_TO_JSON(IsBind, isBind_);
        DARABONBA_PTR_TO_JSON(LockTimeMS, lockTimeMS_);
        DARABONBA_PTR_TO_JSON(Params, params_);
        DARABONBA_PTR_TO_JSON(ParseRowCounts, parseRowCounts_);
        DARABONBA_PTR_TO_JSON(QueryStartTime, queryStartTime_);
        DARABONBA_PTR_TO_JSON(QueryTime, queryTime_);
        DARABONBA_PTR_TO_JSON(QueryTimeMS, queryTimeMS_);
        DARABONBA_PTR_TO_JSON(ReturnRowCounts, returnRowCounts_);
        DARABONBA_PTR_TO_JSON(Rows, rows_);
        DARABONBA_PTR_TO_JSON(SCNT, SCNT_);
        DARABONBA_PTR_TO_JSON(SQLHash, SQLHash_);
        DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
        DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TooLong, tooLong_);
        DARABONBA_PTR_TO_JSON(TraceId, traceId_);
        DARABONBA_PTR_TO_JSON(TransactionPolicy, transactionPolicy_);
        DARABONBA_PTR_TO_JSON(TrxId, trxId_);
        DARABONBA_PTR_TO_JSON(WT, WT_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CNname, CNname_);
        DARABONBA_PTR_FROM_JSON(DBName, DBName_);
        DARABONBA_PTR_FROM_JSON(Extension, extension_);
        DARABONBA_PTR_FROM_JSON(Fail, fail_);
        DARABONBA_PTR_FROM_JSON(Frows, frows_);
        DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
        DARABONBA_PTR_FROM_JSON(InsName, insName_);
        DARABONBA_PTR_FROM_JSON(IsBind, isBind_);
        DARABONBA_PTR_FROM_JSON(LockTimeMS, lockTimeMS_);
        DARABONBA_PTR_FROM_JSON(Params, params_);
        DARABONBA_PTR_FROM_JSON(ParseRowCounts, parseRowCounts_);
        DARABONBA_PTR_FROM_JSON(QueryStartTime, queryStartTime_);
        DARABONBA_PTR_FROM_JSON(QueryTime, queryTime_);
        DARABONBA_PTR_FROM_JSON(QueryTimeMS, queryTimeMS_);
        DARABONBA_PTR_FROM_JSON(ReturnRowCounts, returnRowCounts_);
        DARABONBA_PTR_FROM_JSON(Rows, rows_);
        DARABONBA_PTR_FROM_JSON(SCNT, SCNT_);
        DARABONBA_PTR_FROM_JSON(SQLHash, SQLHash_);
        DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
        DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TooLong, tooLong_);
        DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
        DARABONBA_PTR_FROM_JSON(TransactionPolicy, transactionPolicy_);
        DARABONBA_PTR_FROM_JSON(TrxId, trxId_);
        DARABONBA_PTR_FROM_JSON(WT, WT_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->CNname_ == nullptr
        && this->DBName_ == nullptr && this->extension_ == nullptr && this->fail_ == nullptr && this->frows_ == nullptr && this->hostAddress_ == nullptr
        && this->insName_ == nullptr && this->isBind_ == nullptr && this->lockTimeMS_ == nullptr && this->params_ == nullptr && this->parseRowCounts_ == nullptr
        && this->queryStartTime_ == nullptr && this->queryTime_ == nullptr && this->queryTimeMS_ == nullptr && this->returnRowCounts_ == nullptr && this->rows_ == nullptr
        && this->SCNT_ == nullptr && this->SQLHash_ == nullptr && this->SQLText_ == nullptr && this->sqlType_ == nullptr && this->templateId_ == nullptr
        && this->tooLong_ == nullptr && this->traceId_ == nullptr && this->transactionPolicy_ == nullptr && this->trxId_ == nullptr && this->WT_ == nullptr; };
      // CNname Field Functions 
      bool hasCNname() const { return this->CNname_ != nullptr;};
      void deleteCNname() { this->CNname_ = nullptr;};
      inline string getCNname() const { DARABONBA_PTR_GET_DEFAULT(CNname_, "") };
      inline Items& setCNname(string CNname) { DARABONBA_PTR_SET_VALUE(CNname_, CNname) };


      // DBName Field Functions 
      bool hasDBName() const { return this->DBName_ != nullptr;};
      void deleteDBName() { this->DBName_ = nullptr;};
      inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
      inline Items& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


      // extension Field Functions 
      bool hasExtension() const { return this->extension_ != nullptr;};
      void deleteExtension() { this->extension_ = nullptr;};
      inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
      inline Items& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


      // fail Field Functions 
      bool hasFail() const { return this->fail_ != nullptr;};
      void deleteFail() { this->fail_ = nullptr;};
      inline string getFail() const { DARABONBA_PTR_GET_DEFAULT(fail_, "") };
      inline Items& setFail(string fail) { DARABONBA_PTR_SET_VALUE(fail_, fail) };


      // frows Field Functions 
      bool hasFrows() const { return this->frows_ != nullptr;};
      void deleteFrows() { this->frows_ = nullptr;};
      inline string getFrows() const { DARABONBA_PTR_GET_DEFAULT(frows_, "") };
      inline Items& setFrows(string frows) { DARABONBA_PTR_SET_VALUE(frows_, frows) };


      // hostAddress Field Functions 
      bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
      void deleteHostAddress() { this->hostAddress_ = nullptr;};
      inline string getHostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
      inline Items& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


      // insName Field Functions 
      bool hasInsName() const { return this->insName_ != nullptr;};
      void deleteInsName() { this->insName_ = nullptr;};
      inline string getInsName() const { DARABONBA_PTR_GET_DEFAULT(insName_, "") };
      inline Items& setInsName(string insName) { DARABONBA_PTR_SET_VALUE(insName_, insName) };


      // isBind Field Functions 
      bool hasIsBind() const { return this->isBind_ != nullptr;};
      void deleteIsBind() { this->isBind_ = nullptr;};
      inline string getIsBind() const { DARABONBA_PTR_GET_DEFAULT(isBind_, "") };
      inline Items& setIsBind(string isBind) { DARABONBA_PTR_SET_VALUE(isBind_, isBind) };


      // lockTimeMS Field Functions 
      bool hasLockTimeMS() const { return this->lockTimeMS_ != nullptr;};
      void deleteLockTimeMS() { this->lockTimeMS_ = nullptr;};
      inline string getLockTimeMS() const { DARABONBA_PTR_GET_DEFAULT(lockTimeMS_, "") };
      inline Items& setLockTimeMS(string lockTimeMS) { DARABONBA_PTR_SET_VALUE(lockTimeMS_, lockTimeMS) };


      // params Field Functions 
      bool hasParams() const { return this->params_ != nullptr;};
      void deleteParams() { this->params_ = nullptr;};
      inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
      inline Items& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


      // parseRowCounts Field Functions 
      bool hasParseRowCounts() const { return this->parseRowCounts_ != nullptr;};
      void deleteParseRowCounts() { this->parseRowCounts_ = nullptr;};
      inline string getParseRowCounts() const { DARABONBA_PTR_GET_DEFAULT(parseRowCounts_, "") };
      inline Items& setParseRowCounts(string parseRowCounts) { DARABONBA_PTR_SET_VALUE(parseRowCounts_, parseRowCounts) };


      // queryStartTime Field Functions 
      bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
      void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
      inline string getQueryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, "") };
      inline Items& setQueryStartTime(string queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


      // queryTime Field Functions 
      bool hasQueryTime() const { return this->queryTime_ != nullptr;};
      void deleteQueryTime() { this->queryTime_ = nullptr;};
      inline string getQueryTime() const { DARABONBA_PTR_GET_DEFAULT(queryTime_, "") };
      inline Items& setQueryTime(string queryTime) { DARABONBA_PTR_SET_VALUE(queryTime_, queryTime) };


      // queryTimeMS Field Functions 
      bool hasQueryTimeMS() const { return this->queryTimeMS_ != nullptr;};
      void deleteQueryTimeMS() { this->queryTimeMS_ = nullptr;};
      inline string getQueryTimeMS() const { DARABONBA_PTR_GET_DEFAULT(queryTimeMS_, "") };
      inline Items& setQueryTimeMS(string queryTimeMS) { DARABONBA_PTR_SET_VALUE(queryTimeMS_, queryTimeMS) };


      // returnRowCounts Field Functions 
      bool hasReturnRowCounts() const { return this->returnRowCounts_ != nullptr;};
      void deleteReturnRowCounts() { this->returnRowCounts_ = nullptr;};
      inline string getReturnRowCounts() const { DARABONBA_PTR_GET_DEFAULT(returnRowCounts_, "") };
      inline Items& setReturnRowCounts(string returnRowCounts) { DARABONBA_PTR_SET_VALUE(returnRowCounts_, returnRowCounts) };


      // rows Field Functions 
      bool hasRows() const { return this->rows_ != nullptr;};
      void deleteRows() { this->rows_ = nullptr;};
      inline string getRows() const { DARABONBA_PTR_GET_DEFAULT(rows_, "") };
      inline Items& setRows(string rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


      // SCNT Field Functions 
      bool hasSCNT() const { return this->SCNT_ != nullptr;};
      void deleteSCNT() { this->SCNT_ = nullptr;};
      inline string getSCNT() const { DARABONBA_PTR_GET_DEFAULT(SCNT_, "") };
      inline Items& setSCNT(string SCNT) { DARABONBA_PTR_SET_VALUE(SCNT_, SCNT) };


      // SQLHash Field Functions 
      bool hasSQLHash() const { return this->SQLHash_ != nullptr;};
      void deleteSQLHash() { this->SQLHash_ = nullptr;};
      inline string getSQLHash() const { DARABONBA_PTR_GET_DEFAULT(SQLHash_, "") };
      inline Items& setSQLHash(string SQLHash) { DARABONBA_PTR_SET_VALUE(SQLHash_, SQLHash) };


      // SQLText Field Functions 
      bool hasSQLText() const { return this->SQLText_ != nullptr;};
      void deleteSQLText() { this->SQLText_ = nullptr;};
      inline string getSQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
      inline Items& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


      // sqlType Field Functions 
      bool hasSqlType() const { return this->sqlType_ != nullptr;};
      void deleteSqlType() { this->sqlType_ = nullptr;};
      inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
      inline Items& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Items& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // tooLong Field Functions 
      bool hasTooLong() const { return this->tooLong_ != nullptr;};
      void deleteTooLong() { this->tooLong_ = nullptr;};
      inline string getTooLong() const { DARABONBA_PTR_GET_DEFAULT(tooLong_, "") };
      inline Items& setTooLong(string tooLong) { DARABONBA_PTR_SET_VALUE(tooLong_, tooLong) };


      // traceId Field Functions 
      bool hasTraceId() const { return this->traceId_ != nullptr;};
      void deleteTraceId() { this->traceId_ = nullptr;};
      inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
      inline Items& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


      // transactionPolicy Field Functions 
      bool hasTransactionPolicy() const { return this->transactionPolicy_ != nullptr;};
      void deleteTransactionPolicy() { this->transactionPolicy_ = nullptr;};
      inline string getTransactionPolicy() const { DARABONBA_PTR_GET_DEFAULT(transactionPolicy_, "") };
      inline Items& setTransactionPolicy(string transactionPolicy) { DARABONBA_PTR_SET_VALUE(transactionPolicy_, transactionPolicy) };


      // trxId Field Functions 
      bool hasTrxId() const { return this->trxId_ != nullptr;};
      void deleteTrxId() { this->trxId_ = nullptr;};
      inline string getTrxId() const { DARABONBA_PTR_GET_DEFAULT(trxId_, "") };
      inline Items& setTrxId(string trxId) { DARABONBA_PTR_SET_VALUE(trxId_, trxId) };


      // WT Field Functions 
      bool hasWT() const { return this->WT_ != nullptr;};
      void deleteWT() { this->WT_ = nullptr;};
      inline string getWT() const { DARABONBA_PTR_GET_DEFAULT(WT_, "") };
      inline Items& setWT(string WT) { DARABONBA_PTR_SET_VALUE(WT_, WT) };


    protected:
      shared_ptr<string> CNname_ {};
      shared_ptr<string> DBName_ {};
      shared_ptr<string> extension_ {};
      shared_ptr<string> fail_ {};
      shared_ptr<string> frows_ {};
      shared_ptr<string> hostAddress_ {};
      shared_ptr<string> insName_ {};
      shared_ptr<string> isBind_ {};
      shared_ptr<string> lockTimeMS_ {};
      shared_ptr<string> params_ {};
      shared_ptr<string> parseRowCounts_ {};
      shared_ptr<string> queryStartTime_ {};
      shared_ptr<string> queryTime_ {};
      shared_ptr<string> queryTimeMS_ {};
      shared_ptr<string> returnRowCounts_ {};
      shared_ptr<string> rows_ {};
      shared_ptr<string> SCNT_ {};
      shared_ptr<string> SQLHash_ {};
      shared_ptr<string> SQLText_ {};
      shared_ptr<string> sqlType_ {};
      shared_ptr<string> templateId_ {};
      shared_ptr<string> tooLong_ {};
      shared_ptr<string> traceId_ {};
      shared_ptr<string> transactionPolicy_ {};
      shared_ptr<string> trxId_ {};
      shared_ptr<string> WT_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeSlowLogRecordsResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeSlowLogRecordsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeSlowLogRecordsResponseBody::Items>) };
    inline vector<DescribeSlowLogRecordsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeSlowLogRecordsResponseBody::Items>) };
    inline DescribeSlowLogRecordsResponseBody& setItems(const vector<DescribeSlowLogRecordsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSlowLogRecordsResponseBody& setItems(vector<DescribeSlowLogRecordsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeSlowLogRecordsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline string getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, "") };
    inline DescribeSlowLogRecordsResponseBody& setPageRecordCount(string pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlowLogRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeSlowLogRecordsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<vector<DescribeSlowLogRecordsResponseBody::Items>> items_ {};
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageRecordCount_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
