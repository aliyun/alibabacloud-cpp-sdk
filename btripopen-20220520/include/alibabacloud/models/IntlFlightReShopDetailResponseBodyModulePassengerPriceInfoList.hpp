// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULEPASSENGERPRICEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULEPASSENGERPRICEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_TO_JSON(price_info, priceInfo_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_FROM_JSON(price_info, priceInfo_);
    };
    IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList() = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList(const IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList &) = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList(IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList &&) = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList() = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList& operator=(const IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList &) = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList& operator=(IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passengerId_ != nullptr
        && this->priceInfo_ != nullptr; };
    // passengerId Field Functions 
    bool hasPassengerId() const { return this->passengerId_ != nullptr;};
    void deletePassengerId() { this->passengerId_ = nullptr;};
    inline int64_t passengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, 0L) };
    inline IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList& setPassengerId(int64_t passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const Models::IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo & priceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, Models::IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo) };
    inline Models::IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo priceInfo() { DARABONBA_PTR_GET(priceInfo_, Models::IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo) };
    inline IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList& setPriceInfo(const Models::IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList& setPriceInfo(Models::IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


  protected:
    std::shared_ptr<int64_t> passengerId_ = nullptr;
    std::shared_ptr<Models::IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo> priceInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
