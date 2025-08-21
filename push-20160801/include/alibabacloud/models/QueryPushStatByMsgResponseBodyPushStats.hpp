// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHSTATBYMSGRESPONSEBODYPUSHSTATS_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHSTATBYMSGRESPONSEBODYPUSHSTATS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryPushStatByMsgResponseBodyPushStatsPushStat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryPushStatByMsgResponseBodyPushStats : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushStatByMsgResponseBodyPushStats& obj) { 
      DARABONBA_PTR_TO_JSON(PushStat, pushStat_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushStatByMsgResponseBodyPushStats& obj) { 
      DARABONBA_PTR_FROM_JSON(PushStat, pushStat_);
    };
    QueryPushStatByMsgResponseBodyPushStats() = default ;
    QueryPushStatByMsgResponseBodyPushStats(const QueryPushStatByMsgResponseBodyPushStats &) = default ;
    QueryPushStatByMsgResponseBodyPushStats(QueryPushStatByMsgResponseBodyPushStats &&) = default ;
    QueryPushStatByMsgResponseBodyPushStats(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushStatByMsgResponseBodyPushStats() = default ;
    QueryPushStatByMsgResponseBodyPushStats& operator=(const QueryPushStatByMsgResponseBodyPushStats &) = default ;
    QueryPushStatByMsgResponseBodyPushStats& operator=(QueryPushStatByMsgResponseBodyPushStats &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pushStat_ != nullptr; };
    // pushStat Field Functions 
    bool hasPushStat() const { return this->pushStat_ != nullptr;};
    void deletePushStat() { this->pushStat_ = nullptr;};
    inline const vector<Models::QueryPushStatByMsgResponseBodyPushStatsPushStat> & pushStat() const { DARABONBA_PTR_GET_CONST(pushStat_, vector<Models::QueryPushStatByMsgResponseBodyPushStatsPushStat>) };
    inline vector<Models::QueryPushStatByMsgResponseBodyPushStatsPushStat> pushStat() { DARABONBA_PTR_GET(pushStat_, vector<Models::QueryPushStatByMsgResponseBodyPushStatsPushStat>) };
    inline QueryPushStatByMsgResponseBodyPushStats& setPushStat(const vector<Models::QueryPushStatByMsgResponseBodyPushStatsPushStat> & pushStat) { DARABONBA_PTR_SET_VALUE(pushStat_, pushStat) };
    inline QueryPushStatByMsgResponseBodyPushStats& setPushStat(vector<Models::QueryPushStatByMsgResponseBodyPushStatsPushStat> && pushStat) { DARABONBA_PTR_SET_RVALUE(pushStat_, pushStat) };


  protected:
    std::shared_ptr<vector<Models::QueryPushStatByMsgResponseBodyPushStatsPushStat>> pushStat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
