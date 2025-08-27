// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTTRANSFERINFOTRANSFERFLIGHTRULELISTBAGGAGEITEMBAGGAGESUBITEMSBAGGAGESUBCONTENTVISUALIZES_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTTRANSFERINFOTRANSFERFLIGHTRULELISTBAGGAGEITEMBAGGAGESUBITEMSBAGGAGESUBCONTENTVISUALIZES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_desc, baggageDesc_);
      DARABONBA_PTR_TO_JSON(baggage_sub_content_type, baggageSubContentType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(image_d_o, imageDO_);
      DARABONBA_PTR_TO_JSON(is_highlight, isHighlight_);
      DARABONBA_PTR_TO_JSON(sub_title, subTitle_);
    };
    friend void from_json(const Darabonba::Json& j, FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_desc, baggageDesc_);
      DARABONBA_PTR_FROM_JSON(baggage_sub_content_type, baggageSubContentType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(image_d_o, imageDO_);
      DARABONBA_PTR_FROM_JSON(is_highlight, isHighlight_);
      DARABONBA_PTR_FROM_JSON(sub_title, subTitle_);
    };
    FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes() = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes(const FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes &) = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes(FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes &&) = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes() = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& operator=(const FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes &) = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& operator=(FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes &&) = default ;
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
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setBaggageDesc(const vector<string> & baggageDesc) { DARABONBA_PTR_SET_VALUE(baggageDesc_, baggageDesc) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setBaggageDesc(vector<string> && baggageDesc) { DARABONBA_PTR_SET_RVALUE(baggageDesc_, baggageDesc) };


    // baggageSubContentType Field Functions 
    bool hasBaggageSubContentType() const { return this->baggageSubContentType_ != nullptr;};
    void deleteBaggageSubContentType() { this->baggageSubContentType_ = nullptr;};
    inline int32_t baggageSubContentType() const { DARABONBA_PTR_GET_DEFAULT(baggageSubContentType_, 0) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setBaggageSubContentType(int32_t baggageSubContentType) { DARABONBA_PTR_SET_VALUE(baggageSubContentType_, baggageSubContentType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription & description() const { DARABONBA_PTR_GET_CONST(description_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription) };
    inline Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription description() { DARABONBA_PTR_GET(description_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setDescription(const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setDescription(Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


    // imageDO Field Functions 
    bool hasImageDO() const { return this->imageDO_ != nullptr;};
    void deleteImageDO() { this->imageDO_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO & imageDO() const { DARABONBA_PTR_GET_CONST(imageDO_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO) };
    inline Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO imageDO() { DARABONBA_PTR_GET(imageDO_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setImageDO(const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO & imageDO) { DARABONBA_PTR_SET_VALUE(imageDO_, imageDO) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setImageDO(Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO && imageDO) { DARABONBA_PTR_SET_RVALUE(imageDO_, imageDO) };


    // isHighlight Field Functions 
    bool hasIsHighlight() const { return this->isHighlight_ != nullptr;};
    void deleteIsHighlight() { this->isHighlight_ = nullptr;};
    inline bool isHighlight() const { DARABONBA_PTR_GET_DEFAULT(isHighlight_, false) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setIsHighlight(bool isHighlight) { DARABONBA_PTR_SET_VALUE(isHighlight_, isHighlight) };


    // subTitle Field Functions 
    bool hasSubTitle() const { return this->subTitle_ != nullptr;};
    void deleteSubTitle() { this->subTitle_ = nullptr;};
    inline string subTitle() const { DARABONBA_PTR_GET_DEFAULT(subTitle_, "") };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizes& setSubTitle(string subTitle) { DARABONBA_PTR_SET_VALUE(subTitle_, subTitle) };


  protected:
    std::shared_ptr<vector<string>> baggageDesc_ = nullptr;
    std::shared_ptr<int32_t> baggageSubContentType_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription> description_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesImageDO> imageDO_ = nullptr;
    std::shared_ptr<bool> isHighlight_ = nullptr;
    std::shared_ptr<string> subTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
