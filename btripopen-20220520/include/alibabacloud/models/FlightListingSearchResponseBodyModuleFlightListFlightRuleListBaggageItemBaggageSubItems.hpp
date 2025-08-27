// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTBAGGAGEITEMBAGGAGESUBITEMS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTBAGGAGEITEMBAGGAGESUBITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_sub_content_visualizes, baggageSubContentVisualizes_);
      DARABONBA_PTR_TO_JSON(extra_content_visualizes, extraContentVisualizes_);
      DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
      DARABONBA_PTR_TO_JSON(ptc, ptc_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_sub_content_visualizes, baggageSubContentVisualizes_);
      DARABONBA_PTR_FROM_JSON(extra_content_visualizes, extraContentVisualizes_);
      DARABONBA_PTR_FROM_JSON(is_struct, isStruct_);
      DARABONBA_PTR_FROM_JSON(ptc, ptc_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems() = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems(const FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems &) = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems(FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems &&) = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems() = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& operator=(const FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems &) = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& operator=(FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baggageSubContentVisualizes_ != nullptr
        && this->extraContentVisualizes_ != nullptr && this->isStruct_ != nullptr && this->ptc_ != nullptr && this->title_ != nullptr; };
    // baggageSubContentVisualizes Field Functions 
    bool hasBaggageSubContentVisualizes() const { return this->baggageSubContentVisualizes_ != nullptr;};
    void deleteBaggageSubContentVisualizes() { this->baggageSubContentVisualizes_ = nullptr;};
    inline const vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes> & baggageSubContentVisualizes() const { DARABONBA_PTR_GET_CONST(baggageSubContentVisualizes_, vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes>) };
    inline vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes> baggageSubContentVisualizes() { DARABONBA_PTR_GET(baggageSubContentVisualizes_, vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes>) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& setBaggageSubContentVisualizes(const vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes> & baggageSubContentVisualizes) { DARABONBA_PTR_SET_VALUE(baggageSubContentVisualizes_, baggageSubContentVisualizes) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& setBaggageSubContentVisualizes(vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes> && baggageSubContentVisualizes) { DARABONBA_PTR_SET_RVALUE(baggageSubContentVisualizes_, baggageSubContentVisualizes) };


    // extraContentVisualizes Field Functions 
    bool hasExtraContentVisualizes() const { return this->extraContentVisualizes_ != nullptr;};
    void deleteExtraContentVisualizes() { this->extraContentVisualizes_ = nullptr;};
    inline const vector<Darabonba::Json> & extraContentVisualizes() const { DARABONBA_PTR_GET_CONST(extraContentVisualizes_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> extraContentVisualizes() { DARABONBA_PTR_GET(extraContentVisualizes_, vector<Darabonba::Json>) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& setExtraContentVisualizes(const vector<Darabonba::Json> & extraContentVisualizes) { DARABONBA_PTR_SET_VALUE(extraContentVisualizes_, extraContentVisualizes) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& setExtraContentVisualizes(vector<Darabonba::Json> && extraContentVisualizes) { DARABONBA_PTR_SET_RVALUE(extraContentVisualizes_, extraContentVisualizes) };


    // isStruct Field Functions 
    bool hasIsStruct() const { return this->isStruct_ != nullptr;};
    void deleteIsStruct() { this->isStruct_ = nullptr;};
    inline bool isStruct() const { DARABONBA_PTR_GET_DEFAULT(isStruct_, false) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& setIsStruct(bool isStruct) { DARABONBA_PTR_SET_VALUE(isStruct_, isStruct) };


    // ptc Field Functions 
    bool hasPtc() const { return this->ptc_ != nullptr;};
    void deletePtc() { this->ptc_ = nullptr;};
    inline string ptc() const { DARABONBA_PTR_GET_DEFAULT(ptc_, "") };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& setPtc(string ptc) { DARABONBA_PTR_SET_VALUE(ptc_, ptc) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes>> baggageSubContentVisualizes_ = nullptr;
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
