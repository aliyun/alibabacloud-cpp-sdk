// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHSTATBYAPPRESPONSEBODYAPPPUSHSTATS_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHSTATBYAPPRESPONSEBODYAPPPUSHSTATS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryPushStatByAppResponseBodyAppPushStatsAppPushStat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryPushStatByAppResponseBodyAppPushStats : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushStatByAppResponseBodyAppPushStats& obj) { 
      DARABONBA_PTR_TO_JSON(AppPushStat, appPushStat_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushStatByAppResponseBodyAppPushStats& obj) { 
      DARABONBA_PTR_FROM_JSON(AppPushStat, appPushStat_);
    };
    QueryPushStatByAppResponseBodyAppPushStats() = default ;
    QueryPushStatByAppResponseBodyAppPushStats(const QueryPushStatByAppResponseBodyAppPushStats &) = default ;
    QueryPushStatByAppResponseBodyAppPushStats(QueryPushStatByAppResponseBodyAppPushStats &&) = default ;
    QueryPushStatByAppResponseBodyAppPushStats(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushStatByAppResponseBodyAppPushStats() = default ;
    QueryPushStatByAppResponseBodyAppPushStats& operator=(const QueryPushStatByAppResponseBodyAppPushStats &) = default ;
    QueryPushStatByAppResponseBodyAppPushStats& operator=(QueryPushStatByAppResponseBodyAppPushStats &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appPushStat_ != nullptr; };
    // appPushStat Field Functions 
    bool hasAppPushStat() const { return this->appPushStat_ != nullptr;};
    void deleteAppPushStat() { this->appPushStat_ = nullptr;};
    inline const vector<Models::QueryPushStatByAppResponseBodyAppPushStatsAppPushStat> & appPushStat() const { DARABONBA_PTR_GET_CONST(appPushStat_, vector<Models::QueryPushStatByAppResponseBodyAppPushStatsAppPushStat>) };
    inline vector<Models::QueryPushStatByAppResponseBodyAppPushStatsAppPushStat> appPushStat() { DARABONBA_PTR_GET(appPushStat_, vector<Models::QueryPushStatByAppResponseBodyAppPushStatsAppPushStat>) };
    inline QueryPushStatByAppResponseBodyAppPushStats& setAppPushStat(const vector<Models::QueryPushStatByAppResponseBodyAppPushStatsAppPushStat> & appPushStat) { DARABONBA_PTR_SET_VALUE(appPushStat_, appPushStat) };
    inline QueryPushStatByAppResponseBodyAppPushStats& setAppPushStat(vector<Models::QueryPushStatByAppResponseBodyAppPushStatsAppPushStat> && appPushStat) { DARABONBA_PTR_SET_RVALUE(appPushStat_, appPushStat) };


  protected:
    std::shared_ptr<vector<Models::QueryPushStatByAppResponseBodyAppPushStatsAppPushStat>> appPushStat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
