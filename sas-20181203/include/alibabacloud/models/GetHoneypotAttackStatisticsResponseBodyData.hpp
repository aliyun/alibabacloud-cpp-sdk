// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTATTACKSTATISTICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTATTACKSTATISTICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetHoneypotAttackStatisticsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotAttackStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(HoneypotAttackStatistics, honeypotAttackStatistics_);
      DARABONBA_PTR_TO_JSON(StatisticsType, statisticsType_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotAttackStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(HoneypotAttackStatistics, honeypotAttackStatistics_);
      DARABONBA_PTR_FROM_JSON(StatisticsType, statisticsType_);
    };
    GetHoneypotAttackStatisticsResponseBodyData() = default ;
    GetHoneypotAttackStatisticsResponseBodyData(const GetHoneypotAttackStatisticsResponseBodyData &) = default ;
    GetHoneypotAttackStatisticsResponseBodyData(GetHoneypotAttackStatisticsResponseBodyData &&) = default ;
    GetHoneypotAttackStatisticsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotAttackStatisticsResponseBodyData() = default ;
    GetHoneypotAttackStatisticsResponseBodyData& operator=(const GetHoneypotAttackStatisticsResponseBodyData &) = default ;
    GetHoneypotAttackStatisticsResponseBodyData& operator=(GetHoneypotAttackStatisticsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->honeypotAttackStatistics_ == nullptr && return this->statisticsType_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetHoneypotAttackStatisticsResponseBodyData& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // honeypotAttackStatistics Field Functions 
    bool hasHoneypotAttackStatistics() const { return this->honeypotAttackStatistics_ != nullptr;};
    void deleteHoneypotAttackStatistics() { this->honeypotAttackStatistics_ = nullptr;};
    inline const vector<Models::GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics> & honeypotAttackStatistics() const { DARABONBA_PTR_GET_CONST(honeypotAttackStatistics_, vector<Models::GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics>) };
    inline vector<Models::GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics> honeypotAttackStatistics() { DARABONBA_PTR_GET(honeypotAttackStatistics_, vector<Models::GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics>) };
    inline GetHoneypotAttackStatisticsResponseBodyData& setHoneypotAttackStatistics(const vector<Models::GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics> & honeypotAttackStatistics) { DARABONBA_PTR_SET_VALUE(honeypotAttackStatistics_, honeypotAttackStatistics) };
    inline GetHoneypotAttackStatisticsResponseBodyData& setHoneypotAttackStatistics(vector<Models::GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics> && honeypotAttackStatistics) { DARABONBA_PTR_SET_RVALUE(honeypotAttackStatistics_, honeypotAttackStatistics) };


    // statisticsType Field Functions 
    bool hasStatisticsType() const { return this->statisticsType_ != nullptr;};
    void deleteStatisticsType() { this->statisticsType_ = nullptr;};
    inline string statisticsType() const { DARABONBA_PTR_GET_DEFAULT(statisticsType_, "") };
    inline GetHoneypotAttackStatisticsResponseBodyData& setStatisticsType(string statisticsType) { DARABONBA_PTR_SET_VALUE(statisticsType_, statisticsType) };


  protected:
    // The number of entries on the current page.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The statistics details.
    std::shared_ptr<vector<Models::GetHoneypotAttackStatisticsResponseBodyDataHoneypotAttackStatistics>> honeypotAttackStatistics_ = nullptr;
    // The type of the attack source statistics. Valid values:
    // 
    // *   **TOP_ATTACKED_AGENT**: the top five probes that are attacked the most frequently.
    // *   **TOP_ATTACKED_IP**: the top five IP addresses that are attacked the most frequently.
    // *   **ATTACK_EVENT_TYPE**: the type of the intrusion event.
    // *   **ATTACK_HONEYPOT_TYPE**: the type of the attacked honeypot.
    std::shared_ptr<string> statisticsType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
