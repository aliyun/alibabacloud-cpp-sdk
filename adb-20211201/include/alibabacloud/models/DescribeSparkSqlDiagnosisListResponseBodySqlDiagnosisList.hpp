// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPARKSQLDIAGNOSISLISTRESPONSEBODYSQLDIAGNOSISLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPARKSQLDIAGNOSISLISTRESPONSEBODYSQLDIAGNOSISLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ElapsedTime, elapsedTime_);
      DARABONBA_PTR_TO_JSON(InnerQueryId, innerQueryId_);
      DARABONBA_PTR_TO_JSON(MaxExclusiveTime, maxExclusiveTime_);
      DARABONBA_PTR_TO_JSON(PeakMemory, peakMemory_);
      DARABONBA_PTR_TO_JSON(SQL, SQL_);
      DARABONBA_PTR_TO_JSON(ScanRowCount, scanRowCount_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StatementId, statementId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ElapsedTime, elapsedTime_);
      DARABONBA_PTR_FROM_JSON(InnerQueryId, innerQueryId_);
      DARABONBA_PTR_FROM_JSON(MaxExclusiveTime, maxExclusiveTime_);
      DARABONBA_PTR_FROM_JSON(PeakMemory, peakMemory_);
      DARABONBA_PTR_FROM_JSON(SQL, SQL_);
      DARABONBA_PTR_FROM_JSON(ScanRowCount, scanRowCount_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StatementId, statementId_);
    };
    DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList() = default ;
    DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList(const DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList &) = default ;
    DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList(DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList &&) = default ;
    DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList() = default ;
    DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList& operator=(const DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList &) = default ;
    DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList& operator=(DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->elapsedTime_ == nullptr && return this->innerQueryId_ == nullptr && return this->maxExclusiveTime_ == nullptr && return this->peakMemory_ == nullptr && return this->SQL_ == nullptr
        && return this->scanRowCount_ == nullptr && return this->startTime_ == nullptr && return this->state_ == nullptr && return this->statementId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // elapsedTime Field Functions 
    bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
    void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
    inline int64_t elapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
    inline DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


    // innerQueryId Field Functions 
    bool hasInnerQueryId() const { return this->innerQueryId_ != nullptr;};
    void deleteInnerQueryId() { this->innerQueryId_ = nullptr;};
    inline int64_t innerQueryId() const { DARABONBA_PTR_GET_DEFAULT(innerQueryId_, 0L) };
    inline DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList& setInnerQueryId(int64_t innerQueryId) { DARABONBA_PTR_SET_VALUE(innerQueryId_, innerQueryId) };


    // maxExclusiveTime Field Functions 
    bool hasMaxExclusiveTime() const { return this->maxExclusiveTime_ != nullptr;};
    void deleteMaxExclusiveTime() { this->maxExclusiveTime_ = nullptr;};
    inline int64_t maxExclusiveTime() const { DARABONBA_PTR_GET_DEFAULT(maxExclusiveTime_, 0L) };
    inline DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList& setMaxExclusiveTime(int64_t maxExclusiveTime) { DARABONBA_PTR_SET_VALUE(maxExclusiveTime_, maxExclusiveTime) };


    // peakMemory Field Functions 
    bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
    void deletePeakMemory() { this->peakMemory_ = nullptr;};
    inline int64_t peakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
    inline DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


    // SQL Field Functions 
    bool hasSQL() const { return this->SQL_ != nullptr;};
    void deleteSQL() { this->SQL_ = nullptr;};
    inline string SQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
    inline DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


    // scanRowCount Field Functions 
    bool hasScanRowCount() const { return this->scanRowCount_ != nullptr;};
    void deleteScanRowCount() { this->scanRowCount_ = nullptr;};
    inline int64_t scanRowCount() const { DARABONBA_PTR_GET_DEFAULT(scanRowCount_, 0L) };
    inline DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList& setScanRowCount(int64_t scanRowCount) { DARABONBA_PTR_SET_VALUE(scanRowCount_, scanRowCount) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // statementId Field Functions 
    bool hasStatementId() const { return this->statementId_ != nullptr;};
    void deleteStatementId() { this->statementId_ = nullptr;};
    inline int64_t statementId() const { DARABONBA_PTR_GET_DEFAULT(statementId_, 0L) };
    inline DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList& setStatementId(int64_t statementId) { DARABONBA_PTR_SET_VALUE(statementId_, statementId) };


  protected:
    // The application ID.
    // 
    // >  You can call the [ListSparkApps](https://help.aliyun.com/document_detail/612475.html) operation to query a list of Spark application IDs.
    std::shared_ptr<string> appId_ = nullptr;
    // The execution duration of the query. Unit: milliseconds.
    std::shared_ptr<int64_t> elapsedTime_ = nullptr;
    // The ID of the query executed within the Spark application.
    std::shared_ptr<int64_t> innerQueryId_ = nullptr;
    // The maximum operator execution duration. Unit: milliseconds.
    std::shared_ptr<int64_t> maxExclusiveTime_ = nullptr;
    // The maximum operator memory used. Unit: bytes.
    std::shared_ptr<int64_t> peakMemory_ = nullptr;
    // The SQL statement.
    std::shared_ptr<string> SQL_ = nullptr;
    // The number of entries scanned.
    std::shared_ptr<int64_t> scanRowCount_ = nullptr;
    // The start time of the query. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mmZ* format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The execution status of the query. Valid values:
    // 
    // *   COMPLETED
    // *   CANCELED
    // *   ABORTED
    // *   FAILED
    std::shared_ptr<string> state_ = nullptr;
    // The unique ID of the code block in the Spark job.
    std::shared_ptr<int64_t> statementId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
