// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHISTORYUSAGEDURATIONRANKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYHISTORYUSAGEDURATIONRANKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class QueryHistoryUsageDurationRankRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHistoryUsageDurationRankRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHistoryUsageDurationRankRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    QueryHistoryUsageDurationRankRequest() = default ;
    QueryHistoryUsageDurationRankRequest(const QueryHistoryUsageDurationRankRequest &) = default ;
    QueryHistoryUsageDurationRankRequest(QueryHistoryUsageDurationRankRequest &&) = default ;
    QueryHistoryUsageDurationRankRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHistoryUsageDurationRankRequest() = default ;
    QueryHistoryUsageDurationRankRequest& operator=(const QueryHistoryUsageDurationRankRequest &) = default ;
    QueryHistoryUsageDurationRankRequest& operator=(QueryHistoryUsageDurationRankRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->endDate_ == nullptr && this->limit_ == nullptr && this->nextToken_ == nullptr && this->startDate_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline QueryHistoryUsageDurationRankRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryHistoryUsageDurationRankRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline QueryHistoryUsageDurationRankRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryHistoryUsageDurationRankRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryHistoryUsageDurationRankRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // The business type.
    shared_ptr<int32_t> bizType_ {};
    // The end date of the query in `YYYY-MM-DD` format. You can query data within the last 90 days.
    shared_ptr<string> endDate_ {};
    // The number of entries to return. The default value is 5, and the maximum value is 200.
    shared_ptr<int32_t> limit_ {};
    // The token that is used to retrieve the next page of results. You can obtain this token from the response to the previous request.
    shared_ptr<string> nextToken_ {};
    // The start date of the query in `YYYY-MM-DD` format. You can query data within the last 90 days.
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
