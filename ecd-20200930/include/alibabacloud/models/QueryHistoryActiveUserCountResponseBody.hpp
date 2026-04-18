// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHISTORYACTIVEUSERCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYHISTORYACTIVEUSERCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class QueryHistoryActiveUserCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHistoryActiveUserCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveUserCount, activeUserCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHistoryActiveUserCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveUserCount, activeUserCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryHistoryActiveUserCountResponseBody() = default ;
    QueryHistoryActiveUserCountResponseBody(const QueryHistoryActiveUserCountResponseBody &) = default ;
    QueryHistoryActiveUserCountResponseBody(QueryHistoryActiveUserCountResponseBody &&) = default ;
    QueryHistoryActiveUserCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHistoryActiveUserCountResponseBody() = default ;
    QueryHistoryActiveUserCountResponseBody& operator=(const QueryHistoryActiveUserCountResponseBody &) = default ;
    QueryHistoryActiveUserCountResponseBody& operator=(QueryHistoryActiveUserCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ActiveUserCount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ActiveUserCount& obj) { 
        DARABONBA_PTR_TO_JSON(DailyActiveUserCount, dailyActiveUserCount_);
        DARABONBA_PTR_TO_JSON(MonthlyActiveUserCount, monthlyActiveUserCount_);
      };
      friend void from_json(const Darabonba::Json& j, ActiveUserCount& obj) { 
        DARABONBA_PTR_FROM_JSON(DailyActiveUserCount, dailyActiveUserCount_);
        DARABONBA_PTR_FROM_JSON(MonthlyActiveUserCount, monthlyActiveUserCount_);
      };
      ActiveUserCount() = default ;
      ActiveUserCount(const ActiveUserCount &) = default ;
      ActiveUserCount(ActiveUserCount &&) = default ;
      ActiveUserCount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ActiveUserCount() = default ;
      ActiveUserCount& operator=(const ActiveUserCount &) = default ;
      ActiveUserCount& operator=(ActiveUserCount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dailyActiveUserCount_ == nullptr
        && this->monthlyActiveUserCount_ == nullptr; };
      // dailyActiveUserCount Field Functions 
      bool hasDailyActiveUserCount() const { return this->dailyActiveUserCount_ != nullptr;};
      void deleteDailyActiveUserCount() { this->dailyActiveUserCount_ = nullptr;};
      inline int32_t getDailyActiveUserCount() const { DARABONBA_PTR_GET_DEFAULT(dailyActiveUserCount_, 0) };
      inline ActiveUserCount& setDailyActiveUserCount(int32_t dailyActiveUserCount) { DARABONBA_PTR_SET_VALUE(dailyActiveUserCount_, dailyActiveUserCount) };


      // monthlyActiveUserCount Field Functions 
      bool hasMonthlyActiveUserCount() const { return this->monthlyActiveUserCount_ != nullptr;};
      void deleteMonthlyActiveUserCount() { this->monthlyActiveUserCount_ = nullptr;};
      inline int32_t getMonthlyActiveUserCount() const { DARABONBA_PTR_GET_DEFAULT(monthlyActiveUserCount_, 0) };
      inline ActiveUserCount& setMonthlyActiveUserCount(int32_t monthlyActiveUserCount) { DARABONBA_PTR_SET_VALUE(monthlyActiveUserCount_, monthlyActiveUserCount) };


    protected:
      shared_ptr<int32_t> dailyActiveUserCount_ {};
      shared_ptr<int32_t> monthlyActiveUserCount_ {};
    };

    virtual bool empty() const override { return this->activeUserCount_ == nullptr
        && this->requestId_ == nullptr; };
    // activeUserCount Field Functions 
    bool hasActiveUserCount() const { return this->activeUserCount_ != nullptr;};
    void deleteActiveUserCount() { this->activeUserCount_ = nullptr;};
    inline const QueryHistoryActiveUserCountResponseBody::ActiveUserCount & getActiveUserCount() const { DARABONBA_PTR_GET_CONST(activeUserCount_, QueryHistoryActiveUserCountResponseBody::ActiveUserCount) };
    inline QueryHistoryActiveUserCountResponseBody::ActiveUserCount getActiveUserCount() { DARABONBA_PTR_GET(activeUserCount_, QueryHistoryActiveUserCountResponseBody::ActiveUserCount) };
    inline QueryHistoryActiveUserCountResponseBody& setActiveUserCount(const QueryHistoryActiveUserCountResponseBody::ActiveUserCount & activeUserCount) { DARABONBA_PTR_SET_VALUE(activeUserCount_, activeUserCount) };
    inline QueryHistoryActiveUserCountResponseBody& setActiveUserCount(QueryHistoryActiveUserCountResponseBody::ActiveUserCount && activeUserCount) { DARABONBA_PTR_SET_RVALUE(activeUserCount_, activeUserCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryHistoryActiveUserCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryHistoryActiveUserCountResponseBody::ActiveUserCount> activeUserCount_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
