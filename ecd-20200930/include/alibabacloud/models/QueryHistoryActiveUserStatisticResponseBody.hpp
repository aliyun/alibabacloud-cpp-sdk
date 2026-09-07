// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHISTORYACTIVEUSERSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYHISTORYACTIVEUSERSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class QueryHistoryActiveUserStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHistoryActiveUserStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserStatisticList, userStatisticList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHistoryActiveUserStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserStatisticList, userStatisticList_);
    };
    QueryHistoryActiveUserStatisticResponseBody() = default ;
    QueryHistoryActiveUserStatisticResponseBody(const QueryHistoryActiveUserStatisticResponseBody &) = default ;
    QueryHistoryActiveUserStatisticResponseBody(QueryHistoryActiveUserStatisticResponseBody &&) = default ;
    QueryHistoryActiveUserStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHistoryActiveUserStatisticResponseBody() = default ;
    QueryHistoryActiveUserStatisticResponseBody& operator=(const QueryHistoryActiveUserStatisticResponseBody &) = default ;
    QueryHistoryActiveUserStatisticResponseBody& operator=(QueryHistoryActiveUserStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserStatisticList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserStatisticList& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveUserCount, activeUserCount_);
        DARABONBA_PTR_TO_JSON(FormatDate, formatDate_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      };
      friend void from_json(const Darabonba::Json& j, UserStatisticList& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveUserCount, activeUserCount_);
        DARABONBA_PTR_FROM_JSON(FormatDate, formatDate_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      };
      UserStatisticList() = default ;
      UserStatisticList(const UserStatisticList &) = default ;
      UserStatisticList(UserStatisticList &&) = default ;
      UserStatisticList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserStatisticList() = default ;
      UserStatisticList& operator=(const UserStatisticList &) = default ;
      UserStatisticList& operator=(UserStatisticList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activeUserCount_ == nullptr
        && this->formatDate_ == nullptr && this->timeStamp_ == nullptr; };
      // activeUserCount Field Functions 
      bool hasActiveUserCount() const { return this->activeUserCount_ != nullptr;};
      void deleteActiveUserCount() { this->activeUserCount_ = nullptr;};
      inline int32_t getActiveUserCount() const { DARABONBA_PTR_GET_DEFAULT(activeUserCount_, 0) };
      inline UserStatisticList& setActiveUserCount(int32_t activeUserCount) { DARABONBA_PTR_SET_VALUE(activeUserCount_, activeUserCount) };


      // formatDate Field Functions 
      bool hasFormatDate() const { return this->formatDate_ != nullptr;};
      void deleteFormatDate() { this->formatDate_ = nullptr;};
      inline string getFormatDate() const { DARABONBA_PTR_GET_DEFAULT(formatDate_, "") };
      inline UserStatisticList& setFormatDate(string formatDate) { DARABONBA_PTR_SET_VALUE(formatDate_, formatDate) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline int64_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0L) };
      inline UserStatisticList& setTimeStamp(int64_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    protected:
      // The number of deduplicated active users on the day.
      shared_ptr<int32_t> activeUserCount_ {};
      // The date in the standard yyyy-MM-dd format, in the UTC+8 time zone.
      shared_ptr<string> formatDate_ {};
      // The timestamp of the date, in milliseconds.
      shared_ptr<int64_t> timeStamp_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->userStatisticList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryHistoryActiveUserStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryHistoryActiveUserStatisticResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userStatisticList Field Functions 
    bool hasUserStatisticList() const { return this->userStatisticList_ != nullptr;};
    void deleteUserStatisticList() { this->userStatisticList_ = nullptr;};
    inline const vector<QueryHistoryActiveUserStatisticResponseBody::UserStatisticList> & getUserStatisticList() const { DARABONBA_PTR_GET_CONST(userStatisticList_, vector<QueryHistoryActiveUserStatisticResponseBody::UserStatisticList>) };
    inline vector<QueryHistoryActiveUserStatisticResponseBody::UserStatisticList> getUserStatisticList() { DARABONBA_PTR_GET(userStatisticList_, vector<QueryHistoryActiveUserStatisticResponseBody::UserStatisticList>) };
    inline QueryHistoryActiveUserStatisticResponseBody& setUserStatisticList(const vector<QueryHistoryActiveUserStatisticResponseBody::UserStatisticList> & userStatisticList) { DARABONBA_PTR_SET_VALUE(userStatisticList_, userStatisticList) };
    inline QueryHistoryActiveUserStatisticResponseBody& setUserStatisticList(vector<QueryHistoryActiveUserStatisticResponseBody::UserStatisticList> && userStatisticList) { DARABONBA_PTR_SET_RVALUE(userStatisticList_, userStatisticList) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
    // The list of daily active user statistics.
    shared_ptr<vector<QueryHistoryActiveUserStatisticResponseBody::UserStatisticList>> userStatisticList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
