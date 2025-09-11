// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSLISTRESPONSEBODYDATARESULTSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSLISTRESPONSEBODYDATARESULTSET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeProcessListResponseBodyDataResultSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessListResponseBodyDataResultSet& obj) { 
      DARABONBA_PTR_TO_JSON(InitialAddress, initialAddress_);
      DARABONBA_PTR_TO_JSON(InitialQueryId, initialQueryId_);
      DARABONBA_PTR_TO_JSON(InitialUser, initialUser_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(QueryDurationMs, queryDurationMs_);
      DARABONBA_PTR_TO_JSON(QueryStartTime, queryStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProcessListResponseBodyDataResultSet& obj) { 
      DARABONBA_PTR_FROM_JSON(InitialAddress, initialAddress_);
      DARABONBA_PTR_FROM_JSON(InitialQueryId, initialQueryId_);
      DARABONBA_PTR_FROM_JSON(InitialUser, initialUser_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(QueryDurationMs, queryDurationMs_);
      DARABONBA_PTR_FROM_JSON(QueryStartTime, queryStartTime_);
    };
    DescribeProcessListResponseBodyDataResultSet() = default ;
    DescribeProcessListResponseBodyDataResultSet(const DescribeProcessListResponseBodyDataResultSet &) = default ;
    DescribeProcessListResponseBodyDataResultSet(DescribeProcessListResponseBodyDataResultSet &&) = default ;
    DescribeProcessListResponseBodyDataResultSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessListResponseBodyDataResultSet() = default ;
    DescribeProcessListResponseBodyDataResultSet& operator=(const DescribeProcessListResponseBodyDataResultSet &) = default ;
    DescribeProcessListResponseBodyDataResultSet& operator=(DescribeProcessListResponseBodyDataResultSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->initialAddress_ != nullptr
        && this->initialQueryId_ != nullptr && this->initialUser_ != nullptr && this->query_ != nullptr && this->queryDurationMs_ != nullptr && this->queryStartTime_ != nullptr; };
    // initialAddress Field Functions 
    bool hasInitialAddress() const { return this->initialAddress_ != nullptr;};
    void deleteInitialAddress() { this->initialAddress_ = nullptr;};
    inline string initialAddress() const { DARABONBA_PTR_GET_DEFAULT(initialAddress_, "") };
    inline DescribeProcessListResponseBodyDataResultSet& setInitialAddress(string initialAddress) { DARABONBA_PTR_SET_VALUE(initialAddress_, initialAddress) };


    // initialQueryId Field Functions 
    bool hasInitialQueryId() const { return this->initialQueryId_ != nullptr;};
    void deleteInitialQueryId() { this->initialQueryId_ = nullptr;};
    inline string initialQueryId() const { DARABONBA_PTR_GET_DEFAULT(initialQueryId_, "") };
    inline DescribeProcessListResponseBodyDataResultSet& setInitialQueryId(string initialQueryId) { DARABONBA_PTR_SET_VALUE(initialQueryId_, initialQueryId) };


    // initialUser Field Functions 
    bool hasInitialUser() const { return this->initialUser_ != nullptr;};
    void deleteInitialUser() { this->initialUser_ = nullptr;};
    inline string initialUser() const { DARABONBA_PTR_GET_DEFAULT(initialUser_, "") };
    inline DescribeProcessListResponseBodyDataResultSet& setInitialUser(string initialUser) { DARABONBA_PTR_SET_VALUE(initialUser_, initialUser) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline DescribeProcessListResponseBodyDataResultSet& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryDurationMs Field Functions 
    bool hasQueryDurationMs() const { return this->queryDurationMs_ != nullptr;};
    void deleteQueryDurationMs() { this->queryDurationMs_ = nullptr;};
    inline int64_t queryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(queryDurationMs_, 0L) };
    inline DescribeProcessListResponseBodyDataResultSet& setQueryDurationMs(int64_t queryDurationMs) { DARABONBA_PTR_SET_VALUE(queryDurationMs_, queryDurationMs) };


    // queryStartTime Field Functions 
    bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
    void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
    inline string queryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, "") };
    inline DescribeProcessListResponseBodyDataResultSet& setQueryStartTime(string queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


  protected:
    // The address to which the query statement is sent.
    std::shared_ptr<string> initialAddress_ = nullptr;
    // The query ID.
    std::shared_ptr<string> initialQueryId_ = nullptr;
    // The user who executes the query statement.
    std::shared_ptr<string> initialUser_ = nullptr;
    // The query statement that is running.
    std::shared_ptr<string> query_ = nullptr;
    // The minimum query duration. Minimum value: **1000**. Unit: milliseconds.
    std::shared_ptr<int64_t> queryDurationMs_ = nullptr;
    // The beginning of the time range to query. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> queryStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
