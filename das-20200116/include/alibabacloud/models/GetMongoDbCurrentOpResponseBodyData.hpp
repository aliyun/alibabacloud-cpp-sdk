// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMONGODBCURRENTOPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMONGODBCURRENTOPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMongoDBCurrentOpResponseBodyDataSessionList.hpp>
#include <alibabacloud/models/GetMongoDBCurrentOpResponseBodyDataSessionStat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetMongoDBCurrentOpResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMongoDBCurrentOpResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SessionList, sessionList_);
      DARABONBA_PTR_TO_JSON(SessionStat, sessionStat_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetMongoDBCurrentOpResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SessionList, sessionList_);
      DARABONBA_PTR_FROM_JSON(SessionStat, sessionStat_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    GetMongoDBCurrentOpResponseBodyData() = default ;
    GetMongoDBCurrentOpResponseBodyData(const GetMongoDBCurrentOpResponseBodyData &) = default ;
    GetMongoDBCurrentOpResponseBodyData(GetMongoDBCurrentOpResponseBodyData &&) = default ;
    GetMongoDBCurrentOpResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMongoDBCurrentOpResponseBodyData() = default ;
    GetMongoDBCurrentOpResponseBodyData& operator=(const GetMongoDBCurrentOpResponseBodyData &) = default ;
    GetMongoDBCurrentOpResponseBodyData& operator=(GetMongoDBCurrentOpResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionList_ == nullptr
        && return this->sessionStat_ == nullptr && return this->timestamp_ == nullptr; };
    // sessionList Field Functions 
    bool hasSessionList() const { return this->sessionList_ != nullptr;};
    void deleteSessionList() { this->sessionList_ = nullptr;};
    inline const vector<Models::GetMongoDBCurrentOpResponseBodyDataSessionList> & sessionList() const { DARABONBA_PTR_GET_CONST(sessionList_, vector<Models::GetMongoDBCurrentOpResponseBodyDataSessionList>) };
    inline vector<Models::GetMongoDBCurrentOpResponseBodyDataSessionList> sessionList() { DARABONBA_PTR_GET(sessionList_, vector<Models::GetMongoDBCurrentOpResponseBodyDataSessionList>) };
    inline GetMongoDBCurrentOpResponseBodyData& setSessionList(const vector<Models::GetMongoDBCurrentOpResponseBodyDataSessionList> & sessionList) { DARABONBA_PTR_SET_VALUE(sessionList_, sessionList) };
    inline GetMongoDBCurrentOpResponseBodyData& setSessionList(vector<Models::GetMongoDBCurrentOpResponseBodyDataSessionList> && sessionList) { DARABONBA_PTR_SET_RVALUE(sessionList_, sessionList) };


    // sessionStat Field Functions 
    bool hasSessionStat() const { return this->sessionStat_ != nullptr;};
    void deleteSessionStat() { this->sessionStat_ = nullptr;};
    inline const Models::GetMongoDBCurrentOpResponseBodyDataSessionStat & sessionStat() const { DARABONBA_PTR_GET_CONST(sessionStat_, Models::GetMongoDBCurrentOpResponseBodyDataSessionStat) };
    inline Models::GetMongoDBCurrentOpResponseBodyDataSessionStat sessionStat() { DARABONBA_PTR_GET(sessionStat_, Models::GetMongoDBCurrentOpResponseBodyDataSessionStat) };
    inline GetMongoDBCurrentOpResponseBodyData& setSessionStat(const Models::GetMongoDBCurrentOpResponseBodyDataSessionStat & sessionStat) { DARABONBA_PTR_SET_VALUE(sessionStat_, sessionStat) };
    inline GetMongoDBCurrentOpResponseBodyData& setSessionStat(Models::GetMongoDBCurrentOpResponseBodyDataSessionStat && sessionStat) { DARABONBA_PTR_SET_RVALUE(sessionStat_, sessionStat) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetMongoDBCurrentOpResponseBodyData& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The sessions.
    std::shared_ptr<vector<Models::GetMongoDBCurrentOpResponseBodyDataSessionList>> sessionList_ = nullptr;
    // The statistics on the sessions.
    std::shared_ptr<Models::GetMongoDBCurrentOpResponseBodyDataSessionStat> sessionStat_ = nullptr;
    // The time when the database sessions were returned. The value is in the UNIX timestamp format. Unit: milliseconds.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
