// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTINVENTORYPRICECHECKRESPONSEBODYMODULEPASSENGERCHANGEDPRICEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTINVENTORYPRICECHECKRESPONSEBODYMODULEPASSENGERCHANGEDPRICEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListChangedPrice.hpp>
#include <alibabacloud/models/IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(changed, changed_);
      DARABONBA_PTR_TO_JSON(changed_price, changedPrice_);
      DARABONBA_PTR_TO_JSON(original_price, originalPrice_);
      DARABONBA_PTR_TO_JSON(passenger_type, passengerType_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(changed, changed_);
      DARABONBA_PTR_FROM_JSON(changed_price, changedPrice_);
      DARABONBA_PTR_FROM_JSON(original_price, originalPrice_);
      DARABONBA_PTR_FROM_JSON(passenger_type, passengerType_);
    };
    IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList() = default ;
    IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList(const IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList &) = default ;
    IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList(IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList &&) = default ;
    IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList() = default ;
    IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList& operator=(const IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList &) = default ;
    IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList& operator=(IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changed_ != nullptr
        && this->changedPrice_ != nullptr && this->originalPrice_ != nullptr && this->passengerType_ != nullptr; };
    // changed Field Functions 
    bool hasChanged() const { return this->changed_ != nullptr;};
    void deleteChanged() { this->changed_ = nullptr;};
    inline bool changed() const { DARABONBA_PTR_GET_DEFAULT(changed_, false) };
    inline IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList& setChanged(bool changed) { DARABONBA_PTR_SET_VALUE(changed_, changed) };


    // changedPrice Field Functions 
    bool hasChangedPrice() const { return this->changedPrice_ != nullptr;};
    void deleteChangedPrice() { this->changedPrice_ = nullptr;};
    inline const Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListChangedPrice & changedPrice() const { DARABONBA_PTR_GET_CONST(changedPrice_, Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListChangedPrice) };
    inline Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListChangedPrice changedPrice() { DARABONBA_PTR_GET(changedPrice_, Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListChangedPrice) };
    inline IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList& setChangedPrice(const Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListChangedPrice & changedPrice) { DARABONBA_PTR_SET_VALUE(changedPrice_, changedPrice) };
    inline IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList& setChangedPrice(Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListChangedPrice && changedPrice) { DARABONBA_PTR_SET_RVALUE(changedPrice_, changedPrice) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline const Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice & originalPrice() const { DARABONBA_PTR_GET_CONST(originalPrice_, Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice) };
    inline Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice originalPrice() { DARABONBA_PTR_GET(originalPrice_, Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice) };
    inline IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList& setOriginalPrice(const Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice & originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };
    inline IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList& setOriginalPrice(Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice && originalPrice) { DARABONBA_PTR_SET_RVALUE(originalPrice_, originalPrice) };


    // passengerType Field Functions 
    bool hasPassengerType() const { return this->passengerType_ != nullptr;};
    void deletePassengerType() { this->passengerType_ = nullptr;};
    inline int32_t passengerType() const { DARABONBA_PTR_GET_DEFAULT(passengerType_, 0) };
    inline IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoList& setPassengerType(int32_t passengerType) { DARABONBA_PTR_SET_VALUE(passengerType_, passengerType) };


  protected:
    std::shared_ptr<bool> changed_ = nullptr;
    std::shared_ptr<Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListChangedPrice> changedPrice_ = nullptr;
    std::shared_ptr<Models::IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice> originalPrice_ = nullptr;
    std::shared_ptr<int32_t> passengerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
