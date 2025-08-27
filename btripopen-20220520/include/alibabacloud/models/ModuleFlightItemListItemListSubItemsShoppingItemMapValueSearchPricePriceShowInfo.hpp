// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTITEMLISTSUBITEMSSHOPPINGITEMMAPVALUESEARCHPRICEPRICESHOWINFO_HPP_
#define ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTITEMLISTSUBITEMSSHOPPINGITEMMAPVALUESEARCHPRICEPRICESHOWINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPricePriceShowInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPricePriceShowInfo& obj) { 
      DARABONBA_PTR_TO_JSON(discount_info, discountInfo_);
      DARABONBA_PTR_TO_JSON(discount_num, discountNum_);
      DARABONBA_PTR_TO_JSON(show_ticket_price, showTicketPrice_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPricePriceShowInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(discount_info, discountInfo_);
      DARABONBA_PTR_FROM_JSON(discount_num, discountNum_);
      DARABONBA_PTR_FROM_JSON(show_ticket_price, showTicketPrice_);
    };
    ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPricePriceShowInfo() = default ;
    ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPricePriceShowInfo(const ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPricePriceShowInfo &) = default ;
    ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPricePriceShowInfo(ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPricePriceShowInfo &&) = default ;
    ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPricePriceShowInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPricePriceShowInfo() = default ;
    ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPricePriceShowInfo& operator=(const ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPricePriceShowInfo &) = default ;
    ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPricePriceShowInfo& operator=(ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPricePriceShowInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->discountInfo_ != nullptr
        && this->discountNum_ != nullptr && this->showTicketPrice_ != nullptr; };
    // discountInfo Field Functions 
    bool hasDiscountInfo() const { return this->discountInfo_ != nullptr;};
    void deleteDiscountInfo() { this->discountInfo_ = nullptr;};
    inline string discountInfo() const { DARABONBA_PTR_GET_DEFAULT(discountInfo_, "") };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPricePriceShowInfo& setDiscountInfo(string discountInfo) { DARABONBA_PTR_SET_VALUE(discountInfo_, discountInfo) };


    // discountNum Field Functions 
    bool hasDiscountNum() const { return this->discountNum_ != nullptr;};
    void deleteDiscountNum() { this->discountNum_ = nullptr;};
    inline double discountNum() const { DARABONBA_PTR_GET_DEFAULT(discountNum_, 0.0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPricePriceShowInfo& setDiscountNum(double discountNum) { DARABONBA_PTR_SET_VALUE(discountNum_, discountNum) };


    // showTicketPrice Field Functions 
    bool hasShowTicketPrice() const { return this->showTicketPrice_ != nullptr;};
    void deleteShowTicketPrice() { this->showTicketPrice_ = nullptr;};
    inline bool showTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(showTicketPrice_, false) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSearchPricePriceShowInfo& setShowTicketPrice(bool showTicketPrice) { DARABONBA_PTR_SET_VALUE(showTicketPrice_, showTicketPrice) };


  protected:
    std::shared_ptr<string> discountInfo_ = nullptr;
    std::shared_ptr<double> discountNum_ = nullptr;
    std::shared_ptr<bool> showTicketPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
