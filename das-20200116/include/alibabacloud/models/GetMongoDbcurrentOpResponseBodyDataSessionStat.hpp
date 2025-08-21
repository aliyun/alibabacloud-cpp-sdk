// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMONGODBCURRENTOPRESPONSEBODYDATASESSIONSTAT_HPP_
#define ALIBABACLOUD_MODELS_GETMONGODBCURRENTOPRESPONSEBODYDATASESSIONSTAT_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataSessionStatClientStatsValue.hpp>
#include <alibabacloud/models/DataSessionStatDbStatsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetMongoDBCurrentOpResponseBodyDataSessionStat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMongoDBCurrentOpResponseBodyDataSessionStat& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveCount, activeCount_);
      DARABONBA_PTR_TO_JSON(ClientStats, clientStats_);
      DARABONBA_PTR_TO_JSON(DbStats, dbStats_);
      DARABONBA_PTR_TO_JSON(LongestSecsRunning, longestSecsRunning_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetMongoDBCurrentOpResponseBodyDataSessionStat& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveCount, activeCount_);
      DARABONBA_PTR_FROM_JSON(ClientStats, clientStats_);
      DARABONBA_PTR_FROM_JSON(DbStats, dbStats_);
      DARABONBA_PTR_FROM_JSON(LongestSecsRunning, longestSecsRunning_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetMongoDBCurrentOpResponseBodyDataSessionStat() = default ;
    GetMongoDBCurrentOpResponseBodyDataSessionStat(const GetMongoDBCurrentOpResponseBodyDataSessionStat &) = default ;
    GetMongoDBCurrentOpResponseBodyDataSessionStat(GetMongoDBCurrentOpResponseBodyDataSessionStat &&) = default ;
    GetMongoDBCurrentOpResponseBodyDataSessionStat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMongoDBCurrentOpResponseBodyDataSessionStat() = default ;
    GetMongoDBCurrentOpResponseBodyDataSessionStat& operator=(const GetMongoDBCurrentOpResponseBodyDataSessionStat &) = default ;
    GetMongoDBCurrentOpResponseBodyDataSessionStat& operator=(GetMongoDBCurrentOpResponseBodyDataSessionStat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activeCount_ != nullptr
        && this->clientStats_ != nullptr && this->dbStats_ != nullptr && this->longestSecsRunning_ != nullptr && this->totalCount_ != nullptr; };
    // activeCount Field Functions 
    bool hasActiveCount() const { return this->activeCount_ != nullptr;};
    void deleteActiveCount() { this->activeCount_ = nullptr;};
    inline int64_t activeCount() const { DARABONBA_PTR_GET_DEFAULT(activeCount_, 0L) };
    inline GetMongoDBCurrentOpResponseBodyDataSessionStat& setActiveCount(int64_t activeCount) { DARABONBA_PTR_SET_VALUE(activeCount_, activeCount) };


    // clientStats Field Functions 
    bool hasClientStats() const { return this->clientStats_ != nullptr;};
    void deleteClientStats() { this->clientStats_ = nullptr;};
    inline const map<string, Models::DataSessionStatClientStatsValue> & clientStats() const { DARABONBA_PTR_GET_CONST(clientStats_, map<string, Models::DataSessionStatClientStatsValue>) };
    inline map<string, Models::DataSessionStatClientStatsValue> clientStats() { DARABONBA_PTR_GET(clientStats_, map<string, Models::DataSessionStatClientStatsValue>) };
    inline GetMongoDBCurrentOpResponseBodyDataSessionStat& setClientStats(const map<string, Models::DataSessionStatClientStatsValue> & clientStats) { DARABONBA_PTR_SET_VALUE(clientStats_, clientStats) };
    inline GetMongoDBCurrentOpResponseBodyDataSessionStat& setClientStats(map<string, Models::DataSessionStatClientStatsValue> && clientStats) { DARABONBA_PTR_SET_RVALUE(clientStats_, clientStats) };


    // dbStats Field Functions 
    bool hasDbStats() const { return this->dbStats_ != nullptr;};
    void deleteDbStats() { this->dbStats_ = nullptr;};
    inline const map<string, Models::DataSessionStatDbStatsValue> & dbStats() const { DARABONBA_PTR_GET_CONST(dbStats_, map<string, Models::DataSessionStatDbStatsValue>) };
    inline map<string, Models::DataSessionStatDbStatsValue> dbStats() { DARABONBA_PTR_GET(dbStats_, map<string, Models::DataSessionStatDbStatsValue>) };
    inline GetMongoDBCurrentOpResponseBodyDataSessionStat& setDbStats(const map<string, Models::DataSessionStatDbStatsValue> & dbStats) { DARABONBA_PTR_SET_VALUE(dbStats_, dbStats) };
    inline GetMongoDBCurrentOpResponseBodyDataSessionStat& setDbStats(map<string, Models::DataSessionStatDbStatsValue> && dbStats) { DARABONBA_PTR_SET_RVALUE(dbStats_, dbStats) };


    // longestSecsRunning Field Functions 
    bool hasLongestSecsRunning() const { return this->longestSecsRunning_ != nullptr;};
    void deleteLongestSecsRunning() { this->longestSecsRunning_ = nullptr;};
    inline int64_t longestSecsRunning() const { DARABONBA_PTR_GET_DEFAULT(longestSecsRunning_, 0L) };
    inline GetMongoDBCurrentOpResponseBodyDataSessionStat& setLongestSecsRunning(int64_t longestSecsRunning) { DARABONBA_PTR_SET_VALUE(longestSecsRunning_, longestSecsRunning) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetMongoDBCurrentOpResponseBodyDataSessionStat& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of active sessions.
    std::shared_ptr<int64_t> activeCount_ = nullptr;
    // The statistics on the IP addresses of the clients.
    std::shared_ptr<map<string, Models::DataSessionStatClientStatsValue>> clientStats_ = nullptr;
    // The statistics on the namespaces.
    std::shared_ptr<map<string, Models::DataSessionStatDbStatsValue>> dbStats_ = nullptr;
    // The longest duration of a session. Unit: seconds.
    std::shared_ptr<int64_t> longestSecsRunning_ = nullptr;
    // The total number of sessions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
