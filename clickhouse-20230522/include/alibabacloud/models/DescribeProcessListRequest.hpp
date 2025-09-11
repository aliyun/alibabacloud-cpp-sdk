// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeProcessListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(InitialQueryId, initialQueryId_);
      DARABONBA_PTR_TO_JSON(InitialUser, initialUser_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryDurationMs, queryDurationMs_);
      DARABONBA_PTR_TO_JSON(QueryOrder, queryOrder_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProcessListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(InitialQueryId, initialQueryId_);
      DARABONBA_PTR_FROM_JSON(InitialUser, initialUser_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryDurationMs, queryDurationMs_);
      DARABONBA_PTR_FROM_JSON(QueryOrder, queryOrder_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeProcessListRequest() = default ;
    DescribeProcessListRequest(const DescribeProcessListRequest &) = default ;
    DescribeProcessListRequest(DescribeProcessListRequest &&) = default ;
    DescribeProcessListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessListRequest() = default ;
    DescribeProcessListRequest& operator=(const DescribeProcessListRequest &) = default ;
    DescribeProcessListRequest& operator=(DescribeProcessListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->initialQueryId_ != nullptr && this->initialUser_ != nullptr && this->keyword_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->queryDurationMs_ != nullptr && this->queryOrder_ != nullptr && this->regionId_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeProcessListRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // initialQueryId Field Functions 
    bool hasInitialQueryId() const { return this->initialQueryId_ != nullptr;};
    void deleteInitialQueryId() { this->initialQueryId_ = nullptr;};
    inline string initialQueryId() const { DARABONBA_PTR_GET_DEFAULT(initialQueryId_, "") };
    inline DescribeProcessListRequest& setInitialQueryId(string initialQueryId) { DARABONBA_PTR_SET_VALUE(initialQueryId_, initialQueryId) };


    // initialUser Field Functions 
    bool hasInitialUser() const { return this->initialUser_ != nullptr;};
    void deleteInitialUser() { this->initialUser_ = nullptr;};
    inline string initialUser() const { DARABONBA_PTR_GET_DEFAULT(initialUser_, "") };
    inline DescribeProcessListRequest& setInitialUser(string initialUser) { DARABONBA_PTR_SET_VALUE(initialUser_, initialUser) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeProcessListRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeProcessListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeProcessListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryDurationMs Field Functions 
    bool hasQueryDurationMs() const { return this->queryDurationMs_ != nullptr;};
    void deleteQueryDurationMs() { this->queryDurationMs_ = nullptr;};
    inline string queryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(queryDurationMs_, "") };
    inline DescribeProcessListRequest& setQueryDurationMs(string queryDurationMs) { DARABONBA_PTR_SET_VALUE(queryDurationMs_, queryDurationMs) };


    // queryOrder Field Functions 
    bool hasQueryOrder() const { return this->queryOrder_ != nullptr;};
    void deleteQueryOrder() { this->queryOrder_ = nullptr;};
    inline int64_t queryOrder() const { DARABONBA_PTR_GET_DEFAULT(queryOrder_, 0L) };
    inline DescribeProcessListRequest& setQueryOrder(int64_t queryOrder) { DARABONBA_PTR_SET_VALUE(queryOrder_, queryOrder) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeProcessListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The query ID.
    std::shared_ptr<string> initialQueryId_ = nullptr;
    // The user who executes the query statement.
    std::shared_ptr<string> initialUser_ = nullptr;
    // The keyword of the query statement.
    std::shared_ptr<string> keyword_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The execution duration of slow SQL queries. Minimum value: 1000. Unit: milliseconds.
    std::shared_ptr<string> queryDurationMs_ = nullptr;
    // Specifies the columns by which the query results are sorted in descending order.
    // 
    // *   0: The query results are sorted by the query_duration_ms column.
    // *   1: The query results are sorted by the query_duration_ms and query_start_time columns.
    // *   2: The query results are sorted by the query_duration_ms, query_start_time, and user columns.
    std::shared_ptr<int64_t> queryOrder_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
