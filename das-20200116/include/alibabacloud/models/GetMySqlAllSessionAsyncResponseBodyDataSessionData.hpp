// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMYSQLALLSESSIONASYNCRESPONSEBODYDATASESSIONDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMYSQLALLSESSIONASYNCRESPONSEBODYDATASESSIONDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats.hpp>
#include <alibabacloud/models/GetMySQLAllSessionAsyncResponseBodyDataSessionDataDbStats.hpp>
#include <alibabacloud/models/GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList.hpp>
#include <alibabacloud/models/GetMySQLAllSessionAsyncResponseBodyDataSessionDataUserStats.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetMySQLAllSessionAsyncResponseBodyDataSessionData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMySQLAllSessionAsyncResponseBodyDataSessionData& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveSessionCount, activeSessionCount_);
      DARABONBA_PTR_TO_JSON(ClientStats, clientStats_);
      DARABONBA_PTR_TO_JSON(DbStats, dbStats_);
      DARABONBA_PTR_TO_JSON(MaxActiveTime, maxActiveTime_);
      DARABONBA_PTR_TO_JSON(SessionList, sessionList_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(TotalSessionCount, totalSessionCount_);
      DARABONBA_PTR_TO_JSON(UserStats, userStats_);
    };
    friend void from_json(const Darabonba::Json& j, GetMySQLAllSessionAsyncResponseBodyDataSessionData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveSessionCount, activeSessionCount_);
      DARABONBA_PTR_FROM_JSON(ClientStats, clientStats_);
      DARABONBA_PTR_FROM_JSON(DbStats, dbStats_);
      DARABONBA_PTR_FROM_JSON(MaxActiveTime, maxActiveTime_);
      DARABONBA_PTR_FROM_JSON(SessionList, sessionList_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(TotalSessionCount, totalSessionCount_);
      DARABONBA_PTR_FROM_JSON(UserStats, userStats_);
    };
    GetMySQLAllSessionAsyncResponseBodyDataSessionData() = default ;
    GetMySQLAllSessionAsyncResponseBodyDataSessionData(const GetMySQLAllSessionAsyncResponseBodyDataSessionData &) = default ;
    GetMySQLAllSessionAsyncResponseBodyDataSessionData(GetMySQLAllSessionAsyncResponseBodyDataSessionData &&) = default ;
    GetMySQLAllSessionAsyncResponseBodyDataSessionData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMySQLAllSessionAsyncResponseBodyDataSessionData() = default ;
    GetMySQLAllSessionAsyncResponseBodyDataSessionData& operator=(const GetMySQLAllSessionAsyncResponseBodyDataSessionData &) = default ;
    GetMySQLAllSessionAsyncResponseBodyDataSessionData& operator=(GetMySQLAllSessionAsyncResponseBodyDataSessionData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeSessionCount_ == nullptr
        && return this->clientStats_ == nullptr && return this->dbStats_ == nullptr && return this->maxActiveTime_ == nullptr && return this->sessionList_ == nullptr && return this->timeStamp_ == nullptr
        && return this->totalSessionCount_ == nullptr && return this->userStats_ == nullptr; };
    // activeSessionCount Field Functions 
    bool hasActiveSessionCount() const { return this->activeSessionCount_ != nullptr;};
    void deleteActiveSessionCount() { this->activeSessionCount_ = nullptr;};
    inline int64_t activeSessionCount() const { DARABONBA_PTR_GET_DEFAULT(activeSessionCount_, 0L) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionData& setActiveSessionCount(int64_t activeSessionCount) { DARABONBA_PTR_SET_VALUE(activeSessionCount_, activeSessionCount) };


    // clientStats Field Functions 
    bool hasClientStats() const { return this->clientStats_ != nullptr;};
    void deleteClientStats() { this->clientStats_ = nullptr;};
    inline const vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats> & clientStats() const { DARABONBA_PTR_GET_CONST(clientStats_, vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats>) };
    inline vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats> clientStats() { DARABONBA_PTR_GET(clientStats_, vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats>) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionData& setClientStats(const vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats> & clientStats) { DARABONBA_PTR_SET_VALUE(clientStats_, clientStats) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionData& setClientStats(vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats> && clientStats) { DARABONBA_PTR_SET_RVALUE(clientStats_, clientStats) };


    // dbStats Field Functions 
    bool hasDbStats() const { return this->dbStats_ != nullptr;};
    void deleteDbStats() { this->dbStats_ = nullptr;};
    inline const vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataDbStats> & dbStats() const { DARABONBA_PTR_GET_CONST(dbStats_, vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataDbStats>) };
    inline vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataDbStats> dbStats() { DARABONBA_PTR_GET(dbStats_, vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataDbStats>) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionData& setDbStats(const vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataDbStats> & dbStats) { DARABONBA_PTR_SET_VALUE(dbStats_, dbStats) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionData& setDbStats(vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataDbStats> && dbStats) { DARABONBA_PTR_SET_RVALUE(dbStats_, dbStats) };


    // maxActiveTime Field Functions 
    bool hasMaxActiveTime() const { return this->maxActiveTime_ != nullptr;};
    void deleteMaxActiveTime() { this->maxActiveTime_ = nullptr;};
    inline int64_t maxActiveTime() const { DARABONBA_PTR_GET_DEFAULT(maxActiveTime_, 0L) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionData& setMaxActiveTime(int64_t maxActiveTime) { DARABONBA_PTR_SET_VALUE(maxActiveTime_, maxActiveTime) };


    // sessionList Field Functions 
    bool hasSessionList() const { return this->sessionList_ != nullptr;};
    void deleteSessionList() { this->sessionList_ = nullptr;};
    inline const vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList> & sessionList() const { DARABONBA_PTR_GET_CONST(sessionList_, vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList>) };
    inline vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList> sessionList() { DARABONBA_PTR_GET(sessionList_, vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList>) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionData& setSessionList(const vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList> & sessionList) { DARABONBA_PTR_SET_VALUE(sessionList_, sessionList) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionData& setSessionList(vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList> && sessionList) { DARABONBA_PTR_SET_RVALUE(sessionList_, sessionList) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline int64_t timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0L) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionData& setTimeStamp(int64_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // totalSessionCount Field Functions 
    bool hasTotalSessionCount() const { return this->totalSessionCount_ != nullptr;};
    void deleteTotalSessionCount() { this->totalSessionCount_ = nullptr;};
    inline int64_t totalSessionCount() const { DARABONBA_PTR_GET_DEFAULT(totalSessionCount_, 0L) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionData& setTotalSessionCount(int64_t totalSessionCount) { DARABONBA_PTR_SET_VALUE(totalSessionCount_, totalSessionCount) };


    // userStats Field Functions 
    bool hasUserStats() const { return this->userStats_ != nullptr;};
    void deleteUserStats() { this->userStats_ = nullptr;};
    inline const vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataUserStats> & userStats() const { DARABONBA_PTR_GET_CONST(userStats_, vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataUserStats>) };
    inline vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataUserStats> userStats() { DARABONBA_PTR_GET(userStats_, vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataUserStats>) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionData& setUserStats(const vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataUserStats> & userStats) { DARABONBA_PTR_SET_VALUE(userStats_, userStats) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionData& setUserStats(vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataUserStats> && userStats) { DARABONBA_PTR_SET_RVALUE(userStats_, userStats) };


  protected:
    // The total number of active sessions.
    std::shared_ptr<int64_t> activeSessionCount_ = nullptr;
    // The sessions that are counted by client IP address.
    std::shared_ptr<vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats>> clientStats_ = nullptr;
    // The sessions that are counted by database.
    std::shared_ptr<vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataDbStats>> dbStats_ = nullptr;
    // The maximum execution duration of an active session. Unit: seconds.
    std::shared_ptr<int64_t> maxActiveTime_ = nullptr;
    // The sessions.
    std::shared_ptr<vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList>> sessionList_ = nullptr;
    // The time when the session was queried. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> timeStamp_ = nullptr;
    // The total number of sessions.
    std::shared_ptr<int64_t> totalSessionCount_ = nullptr;
    // The sessions that are counted by database account.
    std::shared_ptr<vector<Models::GetMySQLAllSessionAsyncResponseBodyDataSessionDataUserStats>> userStats_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
