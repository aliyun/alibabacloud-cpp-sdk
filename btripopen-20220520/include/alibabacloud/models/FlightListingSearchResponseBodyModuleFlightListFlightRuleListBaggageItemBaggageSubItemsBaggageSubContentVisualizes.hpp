// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTBAGGAGEITEMBAGGAGESUBITEMSBAGGAGESUBCONTENTVISUALIZES_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTBAGGAGEITEMBAGGAGESUBITEMSBAGGAGESUBCONTENTVISUALIZES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription.hpp>
#include <alibabacloud/models/FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_desc, baggageDesc_);
      DARABONBA_PTR_TO_JSON(baggage_sub_content_type, baggageSubContentType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(image_d_o, imageDO_);
      DARABONBA_PTR_TO_JSON(is_highlight, isHighlight_);
      DARABONBA_PTR_TO_JSON(sub_title, subTitle_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_desc, baggageDesc_);
      DARABONBA_PTR_FROM_JSON(baggage_sub_content_type, baggageSubContentType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(image_d_o, imageDO_);
      DARABONBA_PTR_FROM_JSON(is_highlight, isHighlight_);
      DARABONBA_PTR_FROM_JSON(sub_title, subTitle_);
    };
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes() = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes(const FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes &) = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes(FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes &&) = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes() = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& operator=(const FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes &) = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& operator=(FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baggageDesc_ != nullptr
        && this->baggageSubContentType_ != nullptr && this->description_ != nullptr && this->imageDO_ != nullptr && this->isHighlight_ != nullptr && this->subTitle_ != nullptr; };
    // baggageDesc Field Functions 
    bool hasBaggageDesc() const { return this->baggageDesc_ != nullptr;};
    void deleteBaggageDesc() { this->baggageDesc_ = nullptr;};
    inline const vector<string> & baggageDesc() const { DARABONBA_PTR_GET_CONST(baggageDesc_, vector<string>) };
    inline vector<string> baggageDesc() { DARABONBA_PTR_GET(baggageDesc_, vector<string>) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setBaggageDesc(const vector<string> & baggageDesc) { DARABONBA_PTR_SET_VALUE(baggageDesc_, baggageDesc) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setBaggageDesc(vector<string> && baggageDesc) { DARABONBA_PTR_SET_RVALUE(baggageDesc_, baggageDesc) };


    // baggageSubContentType Field Functions 
    bool hasBaggageSubContentType() const { return this->baggageSubContentType_ != nullptr;};
    void deleteBaggageSubContentType() { this->baggageSubContentType_ = nullptr;};
    inline int32_t baggageSubContentType() const { DARABONBA_PTR_GET_DEFAULT(baggageSubContentType_, 0) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setBaggageSubContentType(int32_t baggageSubContentType) { DARABONBA_PTR_SET_VALUE(baggageSubContentType_, baggageSubContentType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline const Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription & description() const { DARABONBA_PTR_GET_CONST(description_, Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription) };
    inline Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription description() { DARABONBA_PTR_GET(description_, Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setDescription(const Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setDescription(Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


    // imageDO Field Functions 
    bool hasImageDO() const { return this->imageDO_ != nullptr;};
    void deleteImageDO() { this->imageDO_ = nullptr;};
    inline const Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO & imageDO() const { DARABONBA_PTR_GET_CONST(imageDO_, Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO) };
    inline Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO imageDO() { DARABONBA_PTR_GET(imageDO_, Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setImageDO(const Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO & imageDO) { DARABONBA_PTR_SET_VALUE(imageDO_, imageDO) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setImageDO(Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO && imageDO) { DARABONBA_PTR_SET_RVALUE(imageDO_, imageDO) };


    // isHighlight Field Functions 
    bool hasIsHighlight() const { return this->isHighlight_ != nullptr;};
    void deleteIsHighlight() { this->isHighlight_ = nullptr;};
    inline bool isHighlight() const { DARABONBA_PTR_GET_DEFAULT(isHighlight_, false) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setIsHighlight(bool isHighlight) { DARABONBA_PTR_SET_VALUE(isHighlight_, isHighlight) };


    // subTitle Field Functions 
    bool hasSubTitle() const { return this->subTitle_ != nullptr;};
    void deleteSubTitle() { this->subTitle_ = nullptr;};
    inline string subTitle() const { DARABONBA_PTR_GET_DEFAULT(subTitle_, "") };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setSubTitle(string subTitle) { DARABONBA_PTR_SET_VALUE(subTitle_, subTitle) };


  protected:
    std::shared_ptr<vector<string>> baggageDesc_ = nullptr;
    std::shared_ptr<int32_t> baggageSubContentType_ = nullptr;
    std::shared_ptr<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription> description_ = nullptr;
    std::shared_ptr<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO> imageDO_ = nullptr;
    std::shared_ptr<bool> isHighlight_ = nullptr;
    std::shared_ptr<string> subTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
