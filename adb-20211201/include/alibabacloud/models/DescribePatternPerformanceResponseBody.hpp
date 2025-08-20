// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPATTERNPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPATTERNPERFORMANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePatternPerformanceResponseBodyPerformances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribePatternPerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePatternPerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessIp, accessIp_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(Performances, performances_);
      DARABONBA_PTR_TO_JSON(QueryCount, queryCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SQLPattern, SQLPattern_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePatternPerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessIp, accessIp_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(Performances, performances_);
      DARABONBA_PTR_FROM_JSON(QueryCount, queryCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SQLPattern, SQLPattern_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribePatternPerformanceResponseBody() = default ;
    DescribePatternPerformanceResponseBody(const DescribePatternPerformanceResponseBody &) = default ;
    DescribePatternPerformanceResponseBody(DescribePatternPerformanceResponseBody &&) = default ;
    DescribePatternPerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePatternPerformanceResponseBody() = default ;
    DescribePatternPerformanceResponseBody& operator=(const DescribePatternPerformanceResponseBody &) = default ;
    DescribePatternPerformanceResponseBody& operator=(DescribePatternPerformanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessIp_ != nullptr
        && this->endTime_ != nullptr && this->failedCount_ != nullptr && this->performances_ != nullptr && this->queryCount_ != nullptr && this->requestId_ != nullptr
        && this->SQLPattern_ != nullptr && this->startTime_ != nullptr && this->tables_ != nullptr && this->user_ != nullptr; };
    // accessIp Field Functions 
    bool hasAccessIp() const { return this->accessIp_ != nullptr;};
    void deleteAccessIp() { this->accessIp_ = nullptr;};
    inline string accessIp() const { DARABONBA_PTR_GET_DEFAULT(accessIp_, "") };
    inline DescribePatternPerformanceResponseBody& setAccessIp(string accessIp) { DARABONBA_PTR_SET_VALUE(accessIp_, accessIp) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribePatternPerformanceResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int64_t failedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
    inline DescribePatternPerformanceResponseBody& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // performances Field Functions 
    bool hasPerformances() const { return this->performances_ != nullptr;};
    void deletePerformances() { this->performances_ = nullptr;};
    inline const vector<DescribePatternPerformanceResponseBodyPerformances> & performances() const { DARABONBA_PTR_GET_CONST(performances_, vector<DescribePatternPerformanceResponseBodyPerformances>) };
    inline vector<DescribePatternPerformanceResponseBodyPerformances> performances() { DARABONBA_PTR_GET(performances_, vector<DescribePatternPerformanceResponseBodyPerformances>) };
    inline DescribePatternPerformanceResponseBody& setPerformances(const vector<DescribePatternPerformanceResponseBodyPerformances> & performances) { DARABONBA_PTR_SET_VALUE(performances_, performances) };
    inline DescribePatternPerformanceResponseBody& setPerformances(vector<DescribePatternPerformanceResponseBodyPerformances> && performances) { DARABONBA_PTR_SET_RVALUE(performances_, performances) };


    // queryCount Field Functions 
    bool hasQueryCount() const { return this->queryCount_ != nullptr;};
    void deleteQueryCount() { this->queryCount_ = nullptr;};
    inline int64_t queryCount() const { DARABONBA_PTR_GET_DEFAULT(queryCount_, 0L) };
    inline DescribePatternPerformanceResponseBody& setQueryCount(int64_t queryCount) { DARABONBA_PTR_SET_VALUE(queryCount_, queryCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePatternPerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SQLPattern Field Functions 
    bool hasSQLPattern() const { return this->SQLPattern_ != nullptr;};
    void deleteSQLPattern() { this->SQLPattern_ = nullptr;};
    inline string SQLPattern() const { DARABONBA_PTR_GET_DEFAULT(SQLPattern_, "") };
    inline DescribePatternPerformanceResponseBody& setSQLPattern(string SQLPattern) { DARABONBA_PTR_SET_VALUE(SQLPattern_, SQLPattern) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribePatternPerformanceResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline string tables() const { DARABONBA_PTR_GET_DEFAULT(tables_, "") };
    inline DescribePatternPerformanceResponseBody& setTables(string tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribePatternPerformanceResponseBody& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    std::shared_ptr<string> accessIp_ = nullptr;
    // The end time of the query. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mmZ* format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int64_t> failedCount_ = nullptr;
    // The queried performance metrics.
    std::shared_ptr<vector<DescribePatternPerformanceResponseBodyPerformances>> performances_ = nullptr;
    std::shared_ptr<int64_t> queryCount_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> SQLPattern_ = nullptr;
    // The start time of the query. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mmZ* format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> tables_ = nullptr;
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
