// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUNIQUEDEVICESTATRESPONSEBODYAPPDEVICESTATS_HPP_
#define ALIBABACLOUD_MODELS_QUERYUNIQUEDEVICESTATRESPONSEBODYAPPDEVICESTATS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryUniqueDeviceStatResponseBodyAppDeviceStats : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUniqueDeviceStatResponseBodyAppDeviceStats& obj) { 
      DARABONBA_PTR_TO_JSON(AppDeviceStat, appDeviceStat_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUniqueDeviceStatResponseBodyAppDeviceStats& obj) { 
      DARABONBA_PTR_FROM_JSON(AppDeviceStat, appDeviceStat_);
    };
    QueryUniqueDeviceStatResponseBodyAppDeviceStats() = default ;
    QueryUniqueDeviceStatResponseBodyAppDeviceStats(const QueryUniqueDeviceStatResponseBodyAppDeviceStats &) = default ;
    QueryUniqueDeviceStatResponseBodyAppDeviceStats(QueryUniqueDeviceStatResponseBodyAppDeviceStats &&) = default ;
    QueryUniqueDeviceStatResponseBodyAppDeviceStats(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUniqueDeviceStatResponseBodyAppDeviceStats() = default ;
    QueryUniqueDeviceStatResponseBodyAppDeviceStats& operator=(const QueryUniqueDeviceStatResponseBodyAppDeviceStats &) = default ;
    QueryUniqueDeviceStatResponseBodyAppDeviceStats& operator=(QueryUniqueDeviceStatResponseBodyAppDeviceStats &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appDeviceStat_ != nullptr; };
    // appDeviceStat Field Functions 
    bool hasAppDeviceStat() const { return this->appDeviceStat_ != nullptr;};
    void deleteAppDeviceStat() { this->appDeviceStat_ = nullptr;};
    inline const vector<Models::QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat> & appDeviceStat() const { DARABONBA_PTR_GET_CONST(appDeviceStat_, vector<Models::QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat>) };
    inline vector<Models::QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat> appDeviceStat() { DARABONBA_PTR_GET(appDeviceStat_, vector<Models::QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat>) };
    inline QueryUniqueDeviceStatResponseBodyAppDeviceStats& setAppDeviceStat(const vector<Models::QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat> & appDeviceStat) { DARABONBA_PTR_SET_VALUE(appDeviceStat_, appDeviceStat) };
    inline QueryUniqueDeviceStatResponseBodyAppDeviceStats& setAppDeviceStat(vector<Models::QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat> && appDeviceStat) { DARABONBA_PTR_SET_RVALUE(appDeviceStat_, appDeviceStat) };


  protected:
    std::shared_ptr<vector<Models::QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat>> appDeviceStat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
