// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICESTATRESPONSEBODYAPPDEVICESTATS_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICESTATRESPONSEBODYAPPDEVICESTATS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryDeviceStatResponseBodyAppDeviceStats : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDeviceStatResponseBodyAppDeviceStats& obj) { 
      DARABONBA_PTR_TO_JSON(AppDeviceStat, appDeviceStat_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDeviceStatResponseBodyAppDeviceStats& obj) { 
      DARABONBA_PTR_FROM_JSON(AppDeviceStat, appDeviceStat_);
    };
    QueryDeviceStatResponseBodyAppDeviceStats() = default ;
    QueryDeviceStatResponseBodyAppDeviceStats(const QueryDeviceStatResponseBodyAppDeviceStats &) = default ;
    QueryDeviceStatResponseBodyAppDeviceStats(QueryDeviceStatResponseBodyAppDeviceStats &&) = default ;
    QueryDeviceStatResponseBodyAppDeviceStats(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDeviceStatResponseBodyAppDeviceStats() = default ;
    QueryDeviceStatResponseBodyAppDeviceStats& operator=(const QueryDeviceStatResponseBodyAppDeviceStats &) = default ;
    QueryDeviceStatResponseBodyAppDeviceStats& operator=(QueryDeviceStatResponseBodyAppDeviceStats &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appDeviceStat_ == nullptr; };
    // appDeviceStat Field Functions 
    bool hasAppDeviceStat() const { return this->appDeviceStat_ != nullptr;};
    void deleteAppDeviceStat() { this->appDeviceStat_ = nullptr;};
    inline const vector<Models::QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat> & appDeviceStat() const { DARABONBA_PTR_GET_CONST(appDeviceStat_, vector<Models::QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat>) };
    inline vector<Models::QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat> appDeviceStat() { DARABONBA_PTR_GET(appDeviceStat_, vector<Models::QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat>) };
    inline QueryDeviceStatResponseBodyAppDeviceStats& setAppDeviceStat(const vector<Models::QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat> & appDeviceStat) { DARABONBA_PTR_SET_VALUE(appDeviceStat_, appDeviceStat) };
    inline QueryDeviceStatResponseBodyAppDeviceStats& setAppDeviceStat(vector<Models::QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat> && appDeviceStat) { DARABONBA_PTR_SET_RVALUE(appDeviceStat_, appDeviceStat) };


  protected:
    std::shared_ptr<vector<Models::QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat>> appDeviceStat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
