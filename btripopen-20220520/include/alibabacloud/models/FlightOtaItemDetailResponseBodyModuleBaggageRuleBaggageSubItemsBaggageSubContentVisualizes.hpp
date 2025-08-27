// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTAITEMDETAILRESPONSEBODYMODULEBAGGAGERULEBAGGAGESUBITEMSBAGGAGESUBCONTENTVISUALIZES_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTAITEMDETAILRESPONSEBODYMODULEBAGGAGERULEBAGGAGESUBITEMSBAGGAGESUBCONTENTVISUALIZES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesDescription.hpp>
#include <alibabacloud/models/FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_desc, baggageDesc_);
      DARABONBA_PTR_TO_JSON(baggage_sub_content_type, baggageSubContentType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(image_d_o, imageDO_);
      DARABONBA_PTR_TO_JSON(is_highlight, isHighlight_);
      DARABONBA_PTR_TO_JSON(sub_title, subTitle_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_desc, baggageDesc_);
      DARABONBA_PTR_FROM_JSON(baggage_sub_content_type, baggageSubContentType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(image_d_o, imageDO_);
      DARABONBA_PTR_FROM_JSON(is_highlight, isHighlight_);
      DARABONBA_PTR_FROM_JSON(sub_title, subTitle_);
    };
    FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes() = default ;
    FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes(const FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes &) = default ;
    FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes(FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes &&) = default ;
    FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes() = default ;
    FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes& operator=(const FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes &) = default ;
    FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes& operator=(FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes &&) = default ;
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
    inline FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes& setBaggageDesc(const vector<string> & baggageDesc) { DARABONBA_PTR_SET_VALUE(baggageDesc_, baggageDesc) };
    inline FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes& setBaggageDesc(vector<string> && baggageDesc) { DARABONBA_PTR_SET_RVALUE(baggageDesc_, baggageDesc) };


    // baggageSubContentType Field Functions 
    bool hasBaggageSubContentType() const { return this->baggageSubContentType_ != nullptr;};
    void deleteBaggageSubContentType() { this->baggageSubContentType_ = nullptr;};
    inline int32_t baggageSubContentType() const { DARABONBA_PTR_GET_DEFAULT(baggageSubContentType_, 0) };
    inline FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes& setBaggageSubContentType(int32_t baggageSubContentType) { DARABONBA_PTR_SET_VALUE(baggageSubContentType_, baggageSubContentType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline const Models::FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesDescription & description() const { DARABONBA_PTR_GET_CONST(description_, Models::FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesDescription) };
    inline Models::FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesDescription description() { DARABONBA_PTR_GET(description_, Models::FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesDescription) };
    inline FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes& setDescription(const Models::FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesDescription & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
    inline FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes& setDescription(Models::FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesDescription && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


    // imageDO Field Functions 
    bool hasImageDO() const { return this->imageDO_ != nullptr;};
    void deleteImageDO() { this->imageDO_ = nullptr;};
    inline const Models::FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO & imageDO() const { DARABONBA_PTR_GET_CONST(imageDO_, Models::FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO) };
    inline Models::FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO imageDO() { DARABONBA_PTR_GET(imageDO_, Models::FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO) };
    inline FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes& setImageDO(const Models::FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO & imageDO) { DARABONBA_PTR_SET_VALUE(imageDO_, imageDO) };
    inline FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes& setImageDO(Models::FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO && imageDO) { DARABONBA_PTR_SET_RVALUE(imageDO_, imageDO) };


    // isHighlight Field Functions 
    bool hasIsHighlight() const { return this->isHighlight_ != nullptr;};
    void deleteIsHighlight() { this->isHighlight_ = nullptr;};
    inline bool isHighlight() const { DARABONBA_PTR_GET_DEFAULT(isHighlight_, false) };
    inline FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes& setIsHighlight(bool isHighlight) { DARABONBA_PTR_SET_VALUE(isHighlight_, isHighlight) };


    // subTitle Field Functions 
    bool hasSubTitle() const { return this->subTitle_ != nullptr;};
    void deleteSubTitle() { this->subTitle_ = nullptr;};
    inline string subTitle() const { DARABONBA_PTR_GET_DEFAULT(subTitle_, "") };
    inline FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizes& setSubTitle(string subTitle) { DARABONBA_PTR_SET_VALUE(subTitle_, subTitle) };


  protected:
    // baggage_desc
    std::shared_ptr<vector<string>> baggageDesc_ = nullptr;
    std::shared_ptr<int32_t> baggageSubContentType_ = nullptr;
    std::shared_ptr<Models::FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesDescription> description_ = nullptr;
    std::shared_ptr<Models::FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO> imageDO_ = nullptr;
    std::shared_ptr<bool> isHighlight_ = nullptr;
    std::shared_ptr<string> subTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
