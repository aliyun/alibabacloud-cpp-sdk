// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODYMODULEGROUPITEMFLIGHTRULEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODYMODULEGROUPITEMFLIGHTRULEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo.hpp>
#include <alibabacloud/models/IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListSegmentPosition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(flight_rule_info, flightRuleInfo_);
      DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_rule_info, flightRuleInfo_);
      DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
    };
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList() = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList(const IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList &) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList(IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList &&) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList() = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList& operator=(const IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList &) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList& operator=(IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightRuleInfo_ != nullptr
        && this->segmentPosition_ != nullptr; };
    // flightRuleInfo Field Functions 
    bool hasFlightRuleInfo() const { return this->flightRuleInfo_ != nullptr;};
    void deleteFlightRuleInfo() { this->flightRuleInfo_ = nullptr;};
    inline const Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo & flightRuleInfo() const { DARABONBA_PTR_GET_CONST(flightRuleInfo_, Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo) };
    inline Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo flightRuleInfo() { DARABONBA_PTR_GET(flightRuleInfo_, Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList& setFlightRuleInfo(const Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo & flightRuleInfo) { DARABONBA_PTR_SET_VALUE(flightRuleInfo_, flightRuleInfo) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList& setFlightRuleInfo(Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo && flightRuleInfo) { DARABONBA_PTR_SET_RVALUE(flightRuleInfo_, flightRuleInfo) };


    // segmentPosition Field Functions 
    bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
    void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
    inline const Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListSegmentPosition & segmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListSegmentPosition) };
    inline Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListSegmentPosition segmentPosition() { DARABONBA_PTR_GET(segmentPosition_, Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListSegmentPosition) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList& setSegmentPosition(const Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListSegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoList& setSegmentPosition(Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListSegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


  protected:
    std::shared_ptr<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListFlightRuleInfo> flightRuleInfo_ = nullptr;
    std::shared_ptr<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItemFlightRuleInfoListSegmentPosition> segmentPosition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
