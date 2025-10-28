// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREDISALLSESSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETREDISALLSESSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRedisAllSessionResponseBodyDataSessions.hpp>
#include <alibabacloud/models/GetRedisAllSessionResponseBodyDataSourceStats.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetRedisAllSessionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRedisAllSessionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Sessions, sessions_);
      DARABONBA_PTR_TO_JSON(SourceStats, sourceStats_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetRedisAllSessionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
      DARABONBA_PTR_FROM_JSON(SourceStats, sourceStats_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetRedisAllSessionResponseBodyData() = default ;
    GetRedisAllSessionResponseBodyData(const GetRedisAllSessionResponseBodyData &) = default ;
    GetRedisAllSessionResponseBodyData(GetRedisAllSessionResponseBodyData &&) = default ;
    GetRedisAllSessionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRedisAllSessionResponseBodyData() = default ;
    GetRedisAllSessionResponseBodyData& operator=(const GetRedisAllSessionResponseBodyData &) = default ;
    GetRedisAllSessionResponseBodyData& operator=(GetRedisAllSessionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessions_ == nullptr
        && return this->sourceStats_ == nullptr && return this->timestamp_ == nullptr && return this->total_ == nullptr; };
    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<Models::GetRedisAllSessionResponseBodyDataSessions> & sessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<Models::GetRedisAllSessionResponseBodyDataSessions>) };
    inline vector<Models::GetRedisAllSessionResponseBodyDataSessions> sessions() { DARABONBA_PTR_GET(sessions_, vector<Models::GetRedisAllSessionResponseBodyDataSessions>) };
    inline GetRedisAllSessionResponseBodyData& setSessions(const vector<Models::GetRedisAllSessionResponseBodyDataSessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline GetRedisAllSessionResponseBodyData& setSessions(vector<Models::GetRedisAllSessionResponseBodyDataSessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


    // sourceStats Field Functions 
    bool hasSourceStats() const { return this->sourceStats_ != nullptr;};
    void deleteSourceStats() { this->sourceStats_ = nullptr;};
    inline const vector<Models::GetRedisAllSessionResponseBodyDataSourceStats> & sourceStats() const { DARABONBA_PTR_GET_CONST(sourceStats_, vector<Models::GetRedisAllSessionResponseBodyDataSourceStats>) };
    inline vector<Models::GetRedisAllSessionResponseBodyDataSourceStats> sourceStats() { DARABONBA_PTR_GET(sourceStats_, vector<Models::GetRedisAllSessionResponseBodyDataSourceStats>) };
    inline GetRedisAllSessionResponseBodyData& setSourceStats(const vector<Models::GetRedisAllSessionResponseBodyDataSourceStats> & sourceStats) { DARABONBA_PTR_SET_VALUE(sourceStats_, sourceStats) };
    inline GetRedisAllSessionResponseBodyData& setSourceStats(vector<Models::GetRedisAllSessionResponseBodyDataSourceStats> && sourceStats) { DARABONBA_PTR_SET_RVALUE(sourceStats_, sourceStats) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetRedisAllSessionResponseBodyData& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetRedisAllSessionResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The information about the sessions.
    std::shared_ptr<vector<Models::GetRedisAllSessionResponseBodyDataSessions>> sessions_ = nullptr;
    // The statistics on the access source.
    std::shared_ptr<vector<Models::GetRedisAllSessionResponseBodyDataSourceStats>> sourceStats_ = nullptr;
    // The time when the instance sessions were returned. The value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    // The total number of sessions.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
