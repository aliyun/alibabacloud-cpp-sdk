// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSLISTRESPONSEBODYPROCESSLISTDATARESULTSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSLISTRESPONSEBODYPROCESSLISTDATARESULTSET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeProcessListResponseBodyProcessListDataResultSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessListResponseBodyProcessListDataResultSet& obj) { 
      DARABONBA_PTR_TO_JSON(InitialAddress, initialAddress_);
      DARABONBA_PTR_TO_JSON(InitialQueryId, initialQueryId_);
      DARABONBA_PTR_TO_JSON(InitialUser, initialUser_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(QueryDurationMs, queryDurationMs_);
      DARABONBA_PTR_TO_JSON(QueryStartTime, queryStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProcessListResponseBodyProcessListDataResultSet& obj) { 
      DARABONBA_PTR_FROM_JSON(InitialAddress, initialAddress_);
      DARABONBA_PTR_FROM_JSON(InitialQueryId, initialQueryId_);
      DARABONBA_PTR_FROM_JSON(InitialUser, initialUser_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(QueryDurationMs, queryDurationMs_);
      DARABONBA_PTR_FROM_JSON(QueryStartTime, queryStartTime_);
    };
    DescribeProcessListResponseBodyProcessListDataResultSet() = default ;
    DescribeProcessListResponseBodyProcessListDataResultSet(const DescribeProcessListResponseBodyProcessListDataResultSet &) = default ;
    DescribeProcessListResponseBodyProcessListDataResultSet(DescribeProcessListResponseBodyProcessListDataResultSet &&) = default ;
    DescribeProcessListResponseBodyProcessListDataResultSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessListResponseBodyProcessListDataResultSet() = default ;
    DescribeProcessListResponseBodyProcessListDataResultSet& operator=(const DescribeProcessListResponseBodyProcessListDataResultSet &) = default ;
    DescribeProcessListResponseBodyProcessListDataResultSet& operator=(DescribeProcessListResponseBodyProcessListDataResultSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->initialAddress_ == nullptr
        && return this->initialQueryId_ == nullptr && return this->initialUser_ == nullptr && return this->query_ == nullptr && return this->queryDurationMs_ == nullptr && return this->queryStartTime_ == nullptr; };
    // initialAddress Field Functions 
    bool hasInitialAddress() const { return this->initialAddress_ != nullptr;};
    void deleteInitialAddress() { this->initialAddress_ = nullptr;};
    inline string initialAddress() const { DARABONBA_PTR_GET_DEFAULT(initialAddress_, "") };
    inline DescribeProcessListResponseBodyProcessListDataResultSet& setInitialAddress(string initialAddress) { DARABONBA_PTR_SET_VALUE(initialAddress_, initialAddress) };


    // initialQueryId Field Functions 
    bool hasInitialQueryId() const { return this->initialQueryId_ != nullptr;};
    void deleteInitialQueryId() { this->initialQueryId_ = nullptr;};
    inline string initialQueryId() const { DARABONBA_PTR_GET_DEFAULT(initialQueryId_, "") };
    inline DescribeProcessListResponseBodyProcessListDataResultSet& setInitialQueryId(string initialQueryId) { DARABONBA_PTR_SET_VALUE(initialQueryId_, initialQueryId) };


    // initialUser Field Functions 
    bool hasInitialUser() const { return this->initialUser_ != nullptr;};
    void deleteInitialUser() { this->initialUser_ = nullptr;};
    inline string initialUser() const { DARABONBA_PTR_GET_DEFAULT(initialUser_, "") };
    inline DescribeProcessListResponseBodyProcessListDataResultSet& setInitialUser(string initialUser) { DARABONBA_PTR_SET_VALUE(initialUser_, initialUser) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline DescribeProcessListResponseBodyProcessListDataResultSet& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryDurationMs Field Functions 
    bool hasQueryDurationMs() const { return this->queryDurationMs_ != nullptr;};
    void deleteQueryDurationMs() { this->queryDurationMs_ = nullptr;};
    inline string queryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(queryDurationMs_, "") };
    inline DescribeProcessListResponseBodyProcessListDataResultSet& setQueryDurationMs(string queryDurationMs) { DARABONBA_PTR_SET_VALUE(queryDurationMs_, queryDurationMs) };


    // queryStartTime Field Functions 
    bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
    void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
    inline string queryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, "") };
    inline DescribeProcessListResponseBodyProcessListDataResultSet& setQueryStartTime(string queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


  protected:
    // The IP address of the client that initiates the query.
    std::shared_ptr<string> initialAddress_ = nullptr;
    // The query ID.
    std::shared_ptr<string> initialQueryId_ = nullptr;
    // The database account.
    std::shared_ptr<string> initialUser_ = nullptr;
    // The SQL statement that is executed in the query.
    std::shared_ptr<string> query_ = nullptr;
    // The execution duration of the query. Unit: milliseconds.
    std::shared_ptr<string> queryDurationMs_ = nullptr;
    // The beginning of the time range to query. The value is in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in Coordinated Universal Time (UTC).
    std::shared_ptr<string> queryStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
