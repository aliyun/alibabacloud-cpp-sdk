// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeSlowLogRecordsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBodyItems& obj) { 
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
    DescribeSlowLogRecordsResponseBodyItems() = default ;
    DescribeSlowLogRecordsResponseBodyItems(const DescribeSlowLogRecordsResponseBodyItems &) = default ;
    DescribeSlowLogRecordsResponseBodyItems(DescribeSlowLogRecordsResponseBodyItems &&) = default ;
    DescribeSlowLogRecordsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogRecordsResponseBodyItems() = default ;
    DescribeSlowLogRecordsResponseBodyItems& operator=(const DescribeSlowLogRecordsResponseBodyItems &) = default ;
    DescribeSlowLogRecordsResponseBodyItems& operator=(DescribeSlowLogRecordsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->CNname_ != nullptr
        && this->DBName_ != nullptr && this->extension_ != nullptr && this->fail_ != nullptr && this->frows_ != nullptr && this->hostAddress_ != nullptr
        && this->insName_ != nullptr && this->isBind_ != nullptr && this->lockTimeMS_ != nullptr && this->params_ != nullptr && this->parseRowCounts_ != nullptr
        && this->queryStartTime_ != nullptr && this->queryTime_ != nullptr && this->queryTimeMS_ != nullptr && this->returnRowCounts_ != nullptr && this->rows_ != nullptr
        && this->SCNT_ != nullptr && this->SQLHash_ != nullptr && this->SQLText_ != nullptr && this->sqlType_ != nullptr && this->templateId_ != nullptr
        && this->tooLong_ != nullptr && this->traceId_ != nullptr && this->transactionPolicy_ != nullptr && this->trxId_ != nullptr && this->WT_ != nullptr; };
    // CNname Field Functions 
    bool hasCNname() const { return this->CNname_ != nullptr;};
    void deleteCNname() { this->CNname_ = nullptr;};
    inline string CNname() const { DARABONBA_PTR_GET_DEFAULT(CNname_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setCNname(string CNname) { DARABONBA_PTR_SET_VALUE(CNname_, CNname) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // fail Field Functions 
    bool hasFail() const { return this->fail_ != nullptr;};
    void deleteFail() { this->fail_ = nullptr;};
    inline string fail() const { DARABONBA_PTR_GET_DEFAULT(fail_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setFail(string fail) { DARABONBA_PTR_SET_VALUE(fail_, fail) };


    // frows Field Functions 
    bool hasFrows() const { return this->frows_ != nullptr;};
    void deleteFrows() { this->frows_ = nullptr;};
    inline string frows() const { DARABONBA_PTR_GET_DEFAULT(frows_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setFrows(string frows) { DARABONBA_PTR_SET_VALUE(frows_, frows) };


    // hostAddress Field Functions 
    bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
    void deleteHostAddress() { this->hostAddress_ = nullptr;};
    inline string hostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


    // insName Field Functions 
    bool hasInsName() const { return this->insName_ != nullptr;};
    void deleteInsName() { this->insName_ = nullptr;};
    inline string insName() const { DARABONBA_PTR_GET_DEFAULT(insName_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setInsName(string insName) { DARABONBA_PTR_SET_VALUE(insName_, insName) };


    // isBind Field Functions 
    bool hasIsBind() const { return this->isBind_ != nullptr;};
    void deleteIsBind() { this->isBind_ = nullptr;};
    inline string isBind() const { DARABONBA_PTR_GET_DEFAULT(isBind_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setIsBind(string isBind) { DARABONBA_PTR_SET_VALUE(isBind_, isBind) };


    // lockTimeMS Field Functions 
    bool hasLockTimeMS() const { return this->lockTimeMS_ != nullptr;};
    void deleteLockTimeMS() { this->lockTimeMS_ = nullptr;};
    inline string lockTimeMS() const { DARABONBA_PTR_GET_DEFAULT(lockTimeMS_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setLockTimeMS(string lockTimeMS) { DARABONBA_PTR_SET_VALUE(lockTimeMS_, lockTimeMS) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // parseRowCounts Field Functions 
    bool hasParseRowCounts() const { return this->parseRowCounts_ != nullptr;};
    void deleteParseRowCounts() { this->parseRowCounts_ = nullptr;};
    inline string parseRowCounts() const { DARABONBA_PTR_GET_DEFAULT(parseRowCounts_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setParseRowCounts(string parseRowCounts) { DARABONBA_PTR_SET_VALUE(parseRowCounts_, parseRowCounts) };


    // queryStartTime Field Functions 
    bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
    void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
    inline string queryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setQueryStartTime(string queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


    // queryTime Field Functions 
    bool hasQueryTime() const { return this->queryTime_ != nullptr;};
    void deleteQueryTime() { this->queryTime_ = nullptr;};
    inline string queryTime() const { DARABONBA_PTR_GET_DEFAULT(queryTime_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setQueryTime(string queryTime) { DARABONBA_PTR_SET_VALUE(queryTime_, queryTime) };


    // queryTimeMS Field Functions 
    bool hasQueryTimeMS() const { return this->queryTimeMS_ != nullptr;};
    void deleteQueryTimeMS() { this->queryTimeMS_ = nullptr;};
    inline string queryTimeMS() const { DARABONBA_PTR_GET_DEFAULT(queryTimeMS_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setQueryTimeMS(string queryTimeMS) { DARABONBA_PTR_SET_VALUE(queryTimeMS_, queryTimeMS) };


    // returnRowCounts Field Functions 
    bool hasReturnRowCounts() const { return this->returnRowCounts_ != nullptr;};
    void deleteReturnRowCounts() { this->returnRowCounts_ = nullptr;};
    inline string returnRowCounts() const { DARABONBA_PTR_GET_DEFAULT(returnRowCounts_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setReturnRowCounts(string returnRowCounts) { DARABONBA_PTR_SET_VALUE(returnRowCounts_, returnRowCounts) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline string rows() const { DARABONBA_PTR_GET_DEFAULT(rows_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setRows(string rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


    // SCNT Field Functions 
    bool hasSCNT() const { return this->SCNT_ != nullptr;};
    void deleteSCNT() { this->SCNT_ = nullptr;};
    inline string SCNT() const { DARABONBA_PTR_GET_DEFAULT(SCNT_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setSCNT(string SCNT) { DARABONBA_PTR_SET_VALUE(SCNT_, SCNT) };


    // SQLHash Field Functions 
    bool hasSQLHash() const { return this->SQLHash_ != nullptr;};
    void deleteSQLHash() { this->SQLHash_ = nullptr;};
    inline string SQLHash() const { DARABONBA_PTR_GET_DEFAULT(SQLHash_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setSQLHash(string SQLHash) { DARABONBA_PTR_SET_VALUE(SQLHash_, SQLHash) };


    // SQLText Field Functions 
    bool hasSQLText() const { return this->SQLText_ != nullptr;};
    void deleteSQLText() { this->SQLText_ = nullptr;};
    inline string SQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tooLong Field Functions 
    bool hasTooLong() const { return this->tooLong_ != nullptr;};
    void deleteTooLong() { this->tooLong_ = nullptr;};
    inline string tooLong() const { DARABONBA_PTR_GET_DEFAULT(tooLong_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setTooLong(string tooLong) { DARABONBA_PTR_SET_VALUE(tooLong_, tooLong) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    // transactionPolicy Field Functions 
    bool hasTransactionPolicy() const { return this->transactionPolicy_ != nullptr;};
    void deleteTransactionPolicy() { this->transactionPolicy_ = nullptr;};
    inline string transactionPolicy() const { DARABONBA_PTR_GET_DEFAULT(transactionPolicy_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setTransactionPolicy(string transactionPolicy) { DARABONBA_PTR_SET_VALUE(transactionPolicy_, transactionPolicy) };


    // trxId Field Functions 
    bool hasTrxId() const { return this->trxId_ != nullptr;};
    void deleteTrxId() { this->trxId_ = nullptr;};
    inline string trxId() const { DARABONBA_PTR_GET_DEFAULT(trxId_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setTrxId(string trxId) { DARABONBA_PTR_SET_VALUE(trxId_, trxId) };


    // WT Field Functions 
    bool hasWT() const { return this->WT_ != nullptr;};
    void deleteWT() { this->WT_ = nullptr;};
    inline string WT() const { DARABONBA_PTR_GET_DEFAULT(WT_, "") };
    inline DescribeSlowLogRecordsResponseBodyItems& setWT(string WT) { DARABONBA_PTR_SET_VALUE(WT_, WT) };


  protected:
    std::shared_ptr<string> CNname_ = nullptr;
    std::shared_ptr<string> DBName_ = nullptr;
    std::shared_ptr<string> extension_ = nullptr;
    std::shared_ptr<string> fail_ = nullptr;
    std::shared_ptr<string> frows_ = nullptr;
    std::shared_ptr<string> hostAddress_ = nullptr;
    std::shared_ptr<string> insName_ = nullptr;
    std::shared_ptr<string> isBind_ = nullptr;
    std::shared_ptr<string> lockTimeMS_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
    std::shared_ptr<string> parseRowCounts_ = nullptr;
    std::shared_ptr<string> queryStartTime_ = nullptr;
    std::shared_ptr<string> queryTime_ = nullptr;
    std::shared_ptr<string> queryTimeMS_ = nullptr;
    std::shared_ptr<string> returnRowCounts_ = nullptr;
    std::shared_ptr<string> rows_ = nullptr;
    std::shared_ptr<string> SCNT_ = nullptr;
    std::shared_ptr<string> SQLHash_ = nullptr;
    std::shared_ptr<string> SQLText_ = nullptr;
    std::shared_ptr<string> sqlType_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> tooLong_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
    std::shared_ptr<string> transactionPolicy_ = nullptr;
    std::shared_ptr<string> trxId_ = nullptr;
    std::shared_ptr<string> WT_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
