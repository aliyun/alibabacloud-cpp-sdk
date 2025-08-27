// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTBAGGAGEITEMBAGGAGESUBITEMS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTBAGGAGEITEMBAGGAGESUBITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_sub_content_visualizes, baggageSubContentVisualizes_);
      DARABONBA_PTR_TO_JSON(extra_content_visualizes, extraContentVisualizes_);
      DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
      DARABONBA_PTR_TO_JSON(ptc, ptc_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_sub_content_visualizes, baggageSubContentVisualizes_);
      DARABONBA_PTR_FROM_JSON(extra_content_visualizes, extraContentVisualizes_);
      DARABONBA_PTR_FROM_JSON(is_struct, isStruct_);
      DARABONBA_PTR_FROM_JSON(ptc, ptc_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems() = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems(const FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems &) = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems(FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems &&) = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems() = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& operator=(const FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems &) = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& operator=(FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baggageSubContentVisualizes_ != nullptr
        && this->extraContentVisualizes_ != nullptr && this->isStruct_ != nullptr && this->ptc_ != nullptr && this->title_ != nullptr; };
    // baggageSubContentVisualizes Field Functions 
    bool hasBaggageSubContentVisualizes() const { return this->baggageSubContentVisualizes_ != nullptr;};
    void deleteBaggageSubContentVisualizes() { this->baggageSubContentVisualizes_ = nullptr;};
    inline const vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes> & baggageSubContentVisualizes() const { DARABONBA_PTR_GET_CONST(baggageSubContentVisualizes_, vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes>) };
    inline vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes> baggageSubContentVisualizes() { DARABONBA_PTR_GET(baggageSubContentVisualizes_, vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes>) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& setBaggageSubContentVisualizes(const vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes> & baggageSubContentVisualizes) { DARABONBA_PTR_SET_VALUE(baggageSubContentVisualizes_, baggageSubContentVisualizes) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& setBaggageSubContentVisualizes(vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes> && baggageSubContentVisualizes) { DARABONBA_PTR_SET_RVALUE(baggageSubContentVisualizes_, baggageSubContentVisualizes) };


    // extraContentVisualizes Field Functions 
    bool hasExtraContentVisualizes() const { return this->extraContentVisualizes_ != nullptr;};
    void deleteExtraContentVisualizes() { this->extraContentVisualizes_ = nullptr;};
    inline const vector<Darabonba::Json> & extraContentVisualizes() const { DARABONBA_PTR_GET_CONST(extraContentVisualizes_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> extraContentVisualizes() { DARABONBA_PTR_GET(extraContentVisualizes_, vector<Darabonba::Json>) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& setExtraContentVisualizes(const vector<Darabonba::Json> & extraContentVisualizes) { DARABONBA_PTR_SET_VALUE(extraContentVisualizes_, extraContentVisualizes) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& setExtraContentVisualizes(vector<Darabonba::Json> && extraContentVisualizes) { DARABONBA_PTR_SET_RVALUE(extraContentVisualizes_, extraContentVisualizes) };


    // isStruct Field Functions 
    bool hasIsStruct() const { return this->isStruct_ != nullptr;};
    void deleteIsStruct() { this->isStruct_ = nullptr;};
    inline bool isStruct() const { DARABONBA_PTR_GET_DEFAULT(isStruct_, false) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& setIsStruct(bool isStruct) { DARABONBA_PTR_SET_VALUE(isStruct_, isStruct) };


    // ptc Field Functions 
    bool hasPtc() const { return this->ptc_ != nullptr;};
    void deletePtc() { this->ptc_ = nullptr;};
    inline string ptc() const { DARABONBA_PTR_GET_DEFAULT(ptc_, "") };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& setPtc(string ptc) { DARABONBA_PTR_SET_VALUE(ptc_, ptc) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<vector<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes>> baggageSubContentVisualizes_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> extraContentVisualizes_ = nullptr;
    std::shared_ptr<bool> isStruct_ = nullptr;
    // PTC
    std::shared_ptr<string> ptc_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
