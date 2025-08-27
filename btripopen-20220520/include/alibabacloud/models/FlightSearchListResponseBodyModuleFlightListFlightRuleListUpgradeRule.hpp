// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTUPGRADERULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTUPGRADERULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRuleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule& obj) { 
      DARABONBA_PTR_TO_JSON(able, able_);
      DARABONBA_PTR_TO_JSON(info, info_);
    };
    friend void from_json(const Darabonba::Json& j, FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule& obj) { 
      DARABONBA_PTR_FROM_JSON(able, able_);
      DARABONBA_PTR_FROM_JSON(info, info_);
    };
    FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule() = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule(const FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule &) = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule(FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule &&) = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule() = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule& operator=(const FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule &) = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule& operator=(FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->able_ != nullptr
        && this->info_ != nullptr; };
    // able Field Functions 
    bool hasAble() const { return this->able_ != nullptr;};
    void deleteAble() { this->able_ = nullptr;};
    inline bool able() const { DARABONBA_PTR_GET_DEFAULT(able_, false) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule& setAble(bool able) { DARABONBA_PTR_SET_VALUE(able_, able) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRuleInfo> & info() const { DARABONBA_PTR_GET_CONST(info_, vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRuleInfo>) };
    inline vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRuleInfo> info() { DARABONBA_PTR_GET(info_, vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRuleInfo>) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule& setInfo(const vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRuleInfo> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule& setInfo(vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRuleInfo> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


  protected:
    std::shared_ptr<bool> able_ = nullptr;
    std::shared_ptr<vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRuleInfo>> info_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
