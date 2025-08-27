// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTAITEMDETAILRESPONSEBODYMODULEBAGGAGERULEBAGGAGESUBITEMSBAGGAGESUBCONTENTVISUALIZESIMAGEDO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTAITEMDETAILRESPONSEBODYMODULEBAGGAGERULEBAGGAGESUBITEMSBAGGAGESUBCONTENTVISUALIZESIMAGEDO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO& obj) { 
      DARABONBA_PTR_TO_JSON(image, image_);
      DARABONBA_PTR_TO_JSON(largest, largest_);
      DARABONBA_PTR_TO_JSON(middle, middle_);
      DARABONBA_PTR_TO_JSON(smallest, smallest_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO& obj) { 
      DARABONBA_PTR_FROM_JSON(image, image_);
      DARABONBA_PTR_FROM_JSON(largest, largest_);
      DARABONBA_PTR_FROM_JSON(middle, middle_);
      DARABONBA_PTR_FROM_JSON(smallest, smallest_);
    };
    FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO() = default ;
    FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO(const FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO &) = default ;
    FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO(FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO &&) = default ;
    FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO() = default ;
    FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO& operator=(const FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO &) = default ;
    FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO& operator=(FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->image_ != nullptr
        && this->largest_ != nullptr && this->middle_ != nullptr && this->smallest_ != nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // largest Field Functions 
    bool hasLargest() const { return this->largest_ != nullptr;};
    void deleteLargest() { this->largest_ = nullptr;};
    inline string largest() const { DARABONBA_PTR_GET_DEFAULT(largest_, "") };
    inline FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO& setLargest(string largest) { DARABONBA_PTR_SET_VALUE(largest_, largest) };


    // middle Field Functions 
    bool hasMiddle() const { return this->middle_ != nullptr;};
    void deleteMiddle() { this->middle_ = nullptr;};
    inline string middle() const { DARABONBA_PTR_GET_DEFAULT(middle_, "") };
    inline FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO& setMiddle(string middle) { DARABONBA_PTR_SET_VALUE(middle_, middle) };


    // smallest Field Functions 
    bool hasSmallest() const { return this->smallest_ != nullptr;};
    void deleteSmallest() { this->smallest_ = nullptr;};
    inline string smallest() const { DARABONBA_PTR_GET_DEFAULT(smallest_, "") };
    inline FlightOtaItemDetailResponseBodyModuleBaggageRuleBaggageSubItemsBaggageSubContentVisualizesImageDO& setSmallest(string smallest) { DARABONBA_PTR_SET_VALUE(smallest_, smallest) };


  protected:
    std::shared_ptr<string> image_ = nullptr;
    std::shared_ptr<string> largest_ = nullptr;
    std::shared_ptr<string> middle_ = nullptr;
    std::shared_ptr<string> smallest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
