// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTITEMLISTBESTPRICEITEM_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTITEMLISTBESTPRICEITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes.hpp>
#include <alibabacloud/models/IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemLabelList.hpp>
#include <map>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemShoppingItemMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem& obj) { 
      DARABONBA_PTR_TO_JSON(agreement_price_codes, agreementPriceCodes_);
      DARABONBA_PTR_TO_JSON(item_type, itemType_);
      DARABONBA_PTR_TO_JSON(label_list, labelList_);
      DARABONBA_PTR_TO_JSON(shopping_item_map, shoppingItemMap_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem& obj) { 
      DARABONBA_PTR_FROM_JSON(agreement_price_codes, agreementPriceCodes_);
      DARABONBA_PTR_FROM_JSON(item_type, itemType_);
      DARABONBA_PTR_FROM_JSON(label_list, labelList_);
      DARABONBA_PTR_FROM_JSON(shopping_item_map, shoppingItemMap_);
    };
    IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem() = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem(const IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem &) = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem(IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem &&) = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem() = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem& operator=(const IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem &) = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem& operator=(IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agreementPriceCodes_ != nullptr
        && this->itemType_ != nullptr && this->labelList_ != nullptr && this->shoppingItemMap_ != nullptr; };
    // agreementPriceCodes Field Functions 
    bool hasAgreementPriceCodes() const { return this->agreementPriceCodes_ != nullptr;};
    void deleteAgreementPriceCodes() { this->agreementPriceCodes_ = nullptr;};
    inline const vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes> & agreementPriceCodes() const { DARABONBA_PTR_GET_CONST(agreementPriceCodes_, vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes>) };
    inline vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes> agreementPriceCodes() { DARABONBA_PTR_GET(agreementPriceCodes_, vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes>) };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem& setAgreementPriceCodes(const vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes> & agreementPriceCodes) { DARABONBA_PTR_SET_VALUE(agreementPriceCodes_, agreementPriceCodes) };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem& setAgreementPriceCodes(vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes> && agreementPriceCodes) { DARABONBA_PTR_SET_RVALUE(agreementPriceCodes_, agreementPriceCodes) };


    // itemType Field Functions 
    bool hasItemType() const { return this->itemType_ != nullptr;};
    void deleteItemType() { this->itemType_ = nullptr;};
    inline string itemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


    // labelList Field Functions 
    bool hasLabelList() const { return this->labelList_ != nullptr;};
    void deleteLabelList() { this->labelList_ = nullptr;};
    inline const vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemLabelList> & labelList() const { DARABONBA_PTR_GET_CONST(labelList_, vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemLabelList>) };
    inline vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemLabelList> labelList() { DARABONBA_PTR_GET(labelList_, vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemLabelList>) };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem& setLabelList(const vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemLabelList> & labelList) { DARABONBA_PTR_SET_VALUE(labelList_, labelList) };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem& setLabelList(vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemLabelList> && labelList) { DARABONBA_PTR_SET_RVALUE(labelList_, labelList) };


    // shoppingItemMap Field Functions 
    bool hasShoppingItemMap() const { return this->shoppingItemMap_ != nullptr;};
    void deleteShoppingItemMap() { this->shoppingItemMap_ = nullptr;};
    inline const map<string, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValue> & shoppingItemMap() const { DARABONBA_PTR_GET_CONST(shoppingItemMap_, map<string, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValue>) };
    inline map<string, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValue> shoppingItemMap() { DARABONBA_PTR_GET(shoppingItemMap_, map<string, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValue>) };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem& setShoppingItemMap(const map<string, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValue> & shoppingItemMap) { DARABONBA_PTR_SET_VALUE(shoppingItemMap_, shoppingItemMap) };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem& setShoppingItemMap(map<string, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValue> && shoppingItemMap) { DARABONBA_PTR_SET_RVALUE(shoppingItemMap_, shoppingItemMap) };


  protected:
    std::shared_ptr<vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemAgreementPriceCodes>> agreementPriceCodes_ = nullptr;
    std::shared_ptr<string> itemType_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItemLabelList>> labelList_ = nullptr;
    std::shared_ptr<map<string, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValue>> shoppingItemMap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
