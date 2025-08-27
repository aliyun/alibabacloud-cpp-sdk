// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTREFUNDRULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTREFUNDRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule& obj) { 
      DARABONBA_PTR_TO_JSON(able, able_);
      DARABONBA_PTR_TO_JSON(info, info_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule& obj) { 
      DARABONBA_PTR_FROM_JSON(able, able_);
      DARABONBA_PTR_FROM_JSON(info, info_);
    };
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule() = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule(const FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule &) = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule(FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule &&) = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule() = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule& operator=(const FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule &) = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule& operator=(FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule &&) = default ;
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
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule& setAble(bool able) { DARABONBA_PTR_SET_VALUE(able_, able) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleInfo> & info() const { DARABONBA_PTR_GET_CONST(info_, vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleInfo>) };
    inline vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleInfo> info() { DARABONBA_PTR_GET(info_, vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleInfo>) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule& setInfo(const vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleInfo> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule& setInfo(vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleInfo> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


  protected:
    std::shared_ptr<bool> able_ = nullptr;
    std::shared_ptr<vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleInfo>> info_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
