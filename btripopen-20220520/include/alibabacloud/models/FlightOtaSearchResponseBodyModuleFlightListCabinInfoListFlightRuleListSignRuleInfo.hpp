// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTASEARCHRESPONSEBODYMODULEFLIGHTLISTCABININFOLISTFLIGHTRULELISTSIGNRULEINFO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTASEARCHRESPONSEBODYMODULEFLIGHTLISTCABININFOLISTFLIGHTRULELISTSIGNRULEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(cost_percent, costPercent_);
      DARABONBA_PTR_TO_JSON(time_stamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(time_type, timeType_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(cost_percent, costPercent_);
      DARABONBA_PTR_FROM_JSON(time_stamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(time_type, timeType_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo() = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo(const FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo &) = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo(FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo &&) = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo() = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo& operator=(const FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo &) = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo& operator=(FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->cost_ != nullptr && this->costPercent_ != nullptr && this->timeStamp_ != nullptr && this->timeType_ != nullptr && this->title_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int32_t cost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // costPercent Field Functions 
    bool hasCostPercent() const { return this->costPercent_ != nullptr;};
    void deleteCostPercent() { this->costPercent_ = nullptr;};
    inline int32_t costPercent() const { DARABONBA_PTR_GET_DEFAULT(costPercent_, 0) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo& setCostPercent(int32_t costPercent) { DARABONBA_PTR_SET_VALUE(costPercent_, costPercent) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline int32_t timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo& setTimeStamp(int32_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline string timeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRuleInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<int32_t> cost_ = nullptr;
    std::shared_ptr<int32_t> costPercent_ = nullptr;
    std::shared_ptr<int32_t> timeStamp_ = nullptr;
    std::shared_ptr<string> timeType_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
