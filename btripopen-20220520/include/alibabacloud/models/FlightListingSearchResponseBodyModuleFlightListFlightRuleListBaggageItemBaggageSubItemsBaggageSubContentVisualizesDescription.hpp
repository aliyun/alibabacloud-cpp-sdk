// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTBAGGAGEITEMBAGGAGESUBITEMSBAGGAGESUBCONTENTVISUALIZESDESCRIPTION_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTBAGGAGEITEMBAGGAGESUBITEMSBAGGAGESUBCONTENTVISUALIZESDESCRIPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(icon, icon_);
      DARABONBA_PTR_TO_JSON(image, image_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(icon, icon_);
      DARABONBA_PTR_FROM_JSON(image, image_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription() = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription(const FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription &) = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription(FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription &&) = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription() = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription& operator=(const FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription &) = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription& operator=(FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desc_ != nullptr
        && this->icon_ != nullptr && this->image_ != nullptr && this->title_ != nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItemBaggageSubItemsBaggageSubContentVisualizesDescription& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<string> image_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
