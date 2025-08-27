// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTASEARCHRESPONSEBODYMODULEITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTASEARCHRESPONSEBODYMODULEITEMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes.hpp>
#include <alibabacloud/models/IntlFlightOtaSearchResponseBodyModuleItemListLabelList.hpp>
#include <map>
#include <alibabacloud/models/ModuleItemListShoppingItemMapValue.hpp>
#include <alibabacloud/models/IntlFlightOtaSearchResponseBodyModuleItemListSubItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaSearchResponseBodyModuleItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaSearchResponseBodyModuleItemList& obj) { 
      DARABONBA_PTR_TO_JSON(agreement_price_codes, agreementPriceCodes_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(item_type, itemType_);
      DARABONBA_PTR_TO_JSON(label_list, labelList_);
      DARABONBA_PTR_TO_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_TO_JSON(sub_items, subItems_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaSearchResponseBodyModuleItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(agreement_price_codes, agreementPriceCodes_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(item_type, itemType_);
      DARABONBA_PTR_FROM_JSON(label_list, labelList_);
      DARABONBA_PTR_FROM_JSON(shopping_item_map, shoppingItemMap_);
      DARABONBA_PTR_FROM_JSON(sub_items, subItems_);
    };
    IntlFlightOtaSearchResponseBodyModuleItemList() = default ;
    IntlFlightOtaSearchResponseBodyModuleItemList(const IntlFlightOtaSearchResponseBodyModuleItemList &) = default ;
    IntlFlightOtaSearchResponseBodyModuleItemList(IntlFlightOtaSearchResponseBodyModuleItemList &&) = default ;
    IntlFlightOtaSearchResponseBodyModuleItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaSearchResponseBodyModuleItemList() = default ;
    IntlFlightOtaSearchResponseBodyModuleItemList& operator=(const IntlFlightOtaSearchResponseBodyModuleItemList &) = default ;
    IntlFlightOtaSearchResponseBodyModuleItemList& operator=(IntlFlightOtaSearchResponseBodyModuleItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agreementPriceCodes_ != nullptr
        && this->itemId_ != nullptr && this->itemType_ != nullptr && this->labelList_ != nullptr && this->shoppingItemMap_ != nullptr && this->subItems_ != nullptr; };
    // agreementPriceCodes Field Functions 
    bool hasAgreementPriceCodes() const { return this->agreementPriceCodes_ != nullptr;};
    void deleteAgreementPriceCodes() { this->agreementPriceCodes_ = nullptr;};
    inline const vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes> & agreementPriceCodes() const { DARABONBA_PTR_GET_CONST(agreementPriceCodes_, vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes>) };
    inline vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes> agreementPriceCodes() { DARABONBA_PTR_GET(agreementPriceCodes_, vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes>) };
    inline IntlFlightOtaSearchResponseBodyModuleItemList& setAgreementPriceCodes(const vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes> & agreementPriceCodes) { DARABONBA_PTR_SET_VALUE(agreementPriceCodes_, agreementPriceCodes) };
    inline IntlFlightOtaSearchResponseBodyModuleItemList& setAgreementPriceCodes(vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes> && agreementPriceCodes) { DARABONBA_PTR_SET_RVALUE(agreementPriceCodes_, agreementPriceCodes) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline IntlFlightOtaSearchResponseBodyModuleItemList& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // itemType Field Functions 
    bool hasItemType() const { return this->itemType_ != nullptr;};
    void deleteItemType() { this->itemType_ = nullptr;};
    inline string itemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
    inline IntlFlightOtaSearchResponseBodyModuleItemList& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


    // labelList Field Functions 
    bool hasLabelList() const { return this->labelList_ != nullptr;};
    void deleteLabelList() { this->labelList_ = nullptr;};
    inline const vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListLabelList> & labelList() const { DARABONBA_PTR_GET_CONST(labelList_, vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListLabelList>) };
    inline vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListLabelList> labelList() { DARABONBA_PTR_GET(labelList_, vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListLabelList>) };
    inline IntlFlightOtaSearchResponseBodyModuleItemList& setLabelList(const vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListLabelList> & labelList) { DARABONBA_PTR_SET_VALUE(labelList_, labelList) };
    inline IntlFlightOtaSearchResponseBodyModuleItemList& setLabelList(vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListLabelList> && labelList) { DARABONBA_PTR_SET_RVALUE(labelList_, labelList) };


    // shoppingItemMap Field Functions 
    bool hasShoppingItemMap() const { return this->shoppingItemMap_ != nullptr;};
    void deleteShoppingItemMap() { this->shoppingItemMap_ = nullptr;};
    inline const map<string, Models::ModuleItemListShoppingItemMapValue> & shoppingItemMap() const { DARABONBA_PTR_GET_CONST(shoppingItemMap_, map<string, Models::ModuleItemListShoppingItemMapValue>) };
    inline map<string, Models::ModuleItemListShoppingItemMapValue> shoppingItemMap() { DARABONBA_PTR_GET(shoppingItemMap_, map<string, Models::ModuleItemListShoppingItemMapValue>) };
    inline IntlFlightOtaSearchResponseBodyModuleItemList& setShoppingItemMap(const map<string, Models::ModuleItemListShoppingItemMapValue> & shoppingItemMap) { DARABONBA_PTR_SET_VALUE(shoppingItemMap_, shoppingItemMap) };
    inline IntlFlightOtaSearchResponseBodyModuleItemList& setShoppingItemMap(map<string, Models::ModuleItemListShoppingItemMapValue> && shoppingItemMap) { DARABONBA_PTR_SET_RVALUE(shoppingItemMap_, shoppingItemMap) };


    // subItems Field Functions 
    bool hasSubItems() const { return this->subItems_ != nullptr;};
    void deleteSubItems() { this->subItems_ = nullptr;};
    inline const vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItems> & subItems() const { DARABONBA_PTR_GET_CONST(subItems_, vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItems>) };
    inline vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItems> subItems() { DARABONBA_PTR_GET(subItems_, vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItems>) };
    inline IntlFlightOtaSearchResponseBodyModuleItemList& setSubItems(const vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItems> & subItems) { DARABONBA_PTR_SET_VALUE(subItems_, subItems) };
    inline IntlFlightOtaSearchResponseBodyModuleItemList& setSubItems(vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItems> && subItems) { DARABONBA_PTR_SET_RVALUE(subItems_, subItems) };


  protected:
    std::shared_ptr<vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListAgreementPriceCodes>> agreementPriceCodes_ = nullptr;
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<string> itemType_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListLabelList>> labelList_ = nullptr;
    std::shared_ptr<map<string, Models::ModuleItemListShoppingItemMapValue>> shoppingItemMap_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightOtaSearchResponseBodyModuleItemListSubItems>> subItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
