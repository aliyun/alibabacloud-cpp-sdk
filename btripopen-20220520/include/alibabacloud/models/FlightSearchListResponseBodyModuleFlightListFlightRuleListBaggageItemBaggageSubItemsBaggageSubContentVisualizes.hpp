// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTBAGGAGEITEMBAGGAGESUBITEMSBAGGAGESUBCONTENTVISUALIZES_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTBAGGAGEITEMBAGGAGESUBITEMSBAGGAGESUBCONTENTVISUALIZES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_desc, baggageDesc_);
      DARABONBA_PTR_TO_JSON(baggage_sub_content_type, baggageSubContentType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(image_d_o, imageDO_);
      DARABONBA_PTR_TO_JSON(is_highlight, isHighlight_);
      DARABONBA_PTR_TO_JSON(sub_title, subTitle_);
    };
    friend void from_json(const Darabonba::Json& j, FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_desc, baggageDesc_);
      DARABONBA_PTR_FROM_JSON(baggage_sub_content_type, baggageSubContentType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(image_d_o, imageDO_);
      DARABONBA_PTR_FROM_JSON(is_highlight, isHighlight_);
      DARABONBA_PTR_FROM_JSON(sub_title, subTitle_);
    };
    FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes() = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes(const FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes &) = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes(FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes &&) = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes() = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& operator=(const FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes &) = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& operator=(FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes &&) = default ;
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
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setBaggageDesc(const vector<string> & baggageDesc) { DARABONBA_PTR_SET_VALUE(baggageDesc_, baggageDesc) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setBaggageDesc(vector<string> && baggageDesc) { DARABONBA_PTR_SET_RVALUE(baggageDesc_, baggageDesc) };


    // baggageSubContentType Field Functions 
    bool hasBaggageSubContentType() const { return this->baggageSubContentType_ != nullptr;};
    void deleteBaggageSubContentType() { this->baggageSubContentType_ = nullptr;};
    inline int32_t baggageSubContentType() const { DARABONBA_PTR_GET_DEFAULT(baggageSubContentType_, 0) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setBaggageSubContentType(int32_t baggageSubContentType) { DARABONBA_PTR_SET_VALUE(baggageSubContentType_, baggageSubContentType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription & description() const { DARABONBA_PTR_GET_CONST(description_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription) };
    inline Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription description() { DARABONBA_PTR_GET(description_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setDescription(const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setDescription(Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


    // imageDO Field Functions 
    bool hasImageDO() const { return this->imageDO_ != nullptr;};
    void deleteImageDO() { this->imageDO_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO & imageDO() const { DARABONBA_PTR_GET_CONST(imageDO_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO) };
    inline Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO imageDO() { DARABONBA_PTR_GET(imageDO_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setImageDO(const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO & imageDO) { DARABONBA_PTR_SET_VALUE(imageDO_, imageDO) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setImageDO(Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO && imageDO) { DARABONBA_PTR_SET_RVALUE(imageDO_, imageDO) };


    // isHighlight Field Functions 
    bool hasIsHighlight() const { return this->isHighlight_ != nullptr;};
    void deleteIsHighlight() { this->isHighlight_ = nullptr;};
    inline bool isHighlight() const { DARABONBA_PTR_GET_DEFAULT(isHighlight_, false) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setIsHighlight(bool isHighlight) { DARABONBA_PTR_SET_VALUE(isHighlight_, isHighlight) };


    // subTitle Field Functions 
    bool hasSubTitle() const { return this->subTitle_ != nullptr;};
    void deleteSubTitle() { this->subTitle_ = nullptr;};
    inline string subTitle() const { DARABONBA_PTR_GET_DEFAULT(subTitle_, "") };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setSubTitle(string subTitle) { DARABONBA_PTR_SET_VALUE(subTitle_, subTitle) };


  protected:
    std::shared_ptr<vector<string>> baggageDesc_ = nullptr;
    std::shared_ptr<int32_t> baggageSubContentType_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription> description_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO> imageDO_ = nullptr;
    std::shared_ptr<bool> isHighlight_ = nullptr;
    std::shared_ptr<string> subTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
