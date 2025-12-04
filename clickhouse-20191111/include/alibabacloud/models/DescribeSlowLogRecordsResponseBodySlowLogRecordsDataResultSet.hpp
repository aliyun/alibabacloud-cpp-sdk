// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYSLOWLOGRECORDSDATARESULTSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYSLOWLOGRECORDSDATARESULTSET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet& obj) { 
      DARABONBA_PTR_TO_JSON(InitialAddress, initialAddress_);
      DARABONBA_PTR_TO_JSON(InitialQueryId, initialQueryId_);
      DARABONBA_PTR_TO_JSON(InitialUser, initialUser_);
      DARABONBA_PTR_TO_JSON(MemoryUsage, memoryUsage_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(QueryDurationMs, queryDurationMs_);
      DARABONBA_PTR_TO_JSON(QueryStartTime, queryStartTime_);
      DARABONBA_PTR_TO_JSON(ReadBytes, readBytes_);
      DARABONBA_PTR_TO_JSON(ReadRows, readRows_);
      DARABONBA_PTR_TO_JSON(ResultBytes, resultBytes_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet& obj) { 
      DARABONBA_PTR_FROM_JSON(InitialAddress, initialAddress_);
      DARABONBA_PTR_FROM_JSON(InitialQueryId, initialQueryId_);
      DARABONBA_PTR_FROM_JSON(InitialUser, initialUser_);
      DARABONBA_PTR_FROM_JSON(MemoryUsage, memoryUsage_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(QueryDurationMs, queryDurationMs_);
      DARABONBA_PTR_FROM_JSON(QueryStartTime, queryStartTime_);
      DARABONBA_PTR_FROM_JSON(ReadBytes, readBytes_);
      DARABONBA_PTR_FROM_JSON(ReadRows, readRows_);
      DARABONBA_PTR_FROM_JSON(ResultBytes, resultBytes_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet() = default ;
    DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet(const DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet &) = default ;
    DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet(DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet &&) = default ;
    DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet() = default ;
    DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet& operator=(const DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet &) = default ;
    DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet& operator=(DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->initialAddress_ == nullptr
        && return this->initialQueryId_ == nullptr && return this->initialUser_ == nullptr && return this->memoryUsage_ == nullptr && return this->query_ == nullptr && return this->queryDurationMs_ == nullptr
        && return this->queryStartTime_ == nullptr && return this->readBytes_ == nullptr && return this->readRows_ == nullptr && return this->resultBytes_ == nullptr && return this->type_ == nullptr; };
    // initialAddress Field Functions 
    bool hasInitialAddress() const { return this->initialAddress_ != nullptr;};
    void deleteInitialAddress() { this->initialAddress_ = nullptr;};
    inline string initialAddress() const { DARABONBA_PTR_GET_DEFAULT(initialAddress_, "") };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet& setInitialAddress(string initialAddress) { DARABONBA_PTR_SET_VALUE(initialAddress_, initialAddress) };


    // initialQueryId Field Functions 
    bool hasInitialQueryId() const { return this->initialQueryId_ != nullptr;};
    void deleteInitialQueryId() { this->initialQueryId_ = nullptr;};
    inline string initialQueryId() const { DARABONBA_PTR_GET_DEFAULT(initialQueryId_, "") };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet& setInitialQueryId(string initialQueryId) { DARABONBA_PTR_SET_VALUE(initialQueryId_, initialQueryId) };


    // initialUser Field Functions 
    bool hasInitialUser() const { return this->initialUser_ != nullptr;};
    void deleteInitialUser() { this->initialUser_ = nullptr;};
    inline string initialUser() const { DARABONBA_PTR_GET_DEFAULT(initialUser_, "") };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet& setInitialUser(string initialUser) { DARABONBA_PTR_SET_VALUE(initialUser_, initialUser) };


    // memoryUsage Field Functions 
    bool hasMemoryUsage() const { return this->memoryUsage_ != nullptr;};
    void deleteMemoryUsage() { this->memoryUsage_ = nullptr;};
    inline string memoryUsage() const { DARABONBA_PTR_GET_DEFAULT(memoryUsage_, "") };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet& setMemoryUsage(string memoryUsage) { DARABONBA_PTR_SET_VALUE(memoryUsage_, memoryUsage) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryDurationMs Field Functions 
    bool hasQueryDurationMs() const { return this->queryDurationMs_ != nullptr;};
    void deleteQueryDurationMs() { this->queryDurationMs_ = nullptr;};
    inline string queryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(queryDurationMs_, "") };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet& setQueryDurationMs(string queryDurationMs) { DARABONBA_PTR_SET_VALUE(queryDurationMs_, queryDurationMs) };


    // queryStartTime Field Functions 
    bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
    void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
    inline string queryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, "") };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet& setQueryStartTime(string queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


    // readBytes Field Functions 
    bool hasReadBytes() const { return this->readBytes_ != nullptr;};
    void deleteReadBytes() { this->readBytes_ = nullptr;};
    inline string readBytes() const { DARABONBA_PTR_GET_DEFAULT(readBytes_, "") };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet& setReadBytes(string readBytes) { DARABONBA_PTR_SET_VALUE(readBytes_, readBytes) };


    // readRows Field Functions 
    bool hasReadRows() const { return this->readRows_ != nullptr;};
    void deleteReadRows() { this->readRows_ = nullptr;};
    inline string readRows() const { DARABONBA_PTR_GET_DEFAULT(readRows_, "") };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet& setReadRows(string readRows) { DARABONBA_PTR_SET_VALUE(readRows_, readRows) };


    // resultBytes Field Functions 
    bool hasResultBytes() const { return this->resultBytes_ != nullptr;};
    void deleteResultBytes() { this->resultBytes_ = nullptr;};
    inline string resultBytes() const { DARABONBA_PTR_GET_DEFAULT(resultBytes_, "") };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet& setResultBytes(string resultBytes) { DARABONBA_PTR_SET_VALUE(resultBytes_, resultBytes) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The IP address of the client that initiated the query.
    std::shared_ptr<string> initialAddress_ = nullptr;
    // The query ID.
    std::shared_ptr<string> initialQueryId_ = nullptr;
    // The username that is used to initiate the query.
    std::shared_ptr<string> initialUser_ = nullptr;
    // The peak memory usage for the query. Unit: bytes.
    std::shared_ptr<string> memoryUsage_ = nullptr;
    // The statement that was executed in the query.
    std::shared_ptr<string> query_ = nullptr;
    // The duration of the query. Unit: milliseconds.
    std::shared_ptr<string> queryDurationMs_ = nullptr;
    // The beginning of the time range to query. The time is in the yyyy-MM-dd hh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> queryStartTime_ = nullptr;
    // The size of the data read by executing the statement. Unit: bytes.
    std::shared_ptr<string> readBytes_ = nullptr;
    // The number of rows read by executing the statement.
    std::shared_ptr<string> readRows_ = nullptr;
    // The size of the result data. Unit: bytes.
    std::shared_ptr<string> resultBytes_ = nullptr;
    // The query status. Valid values:
    // 
    // *   **QueryFinish**: The query is complete.
    // *   **Processing**: The query is running.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
