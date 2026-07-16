// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULERESHOPITEMLISTBESTPRICEITEMSUBITEMSSHOPPINGITEMMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULERESHOPITEMLISTBESTPRICEITEMSUBITEMSSHOPPINGITEMMAPVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(cabin_quantity_list, cabinQuantityList_);
      DARABONBA_PTR_TO_JSON(search_price, searchPrice_);
      DARABONBA_PTR_TO_JSON(segment_price_list, segmentPriceList_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin_quantity_list, cabinQuantityList_);
      DARABONBA_PTR_FROM_JSON(search_price, searchPrice_);
      DARABONBA_PTR_FROM_JSON(segment_price_list, segmentPriceList_);
    };
    ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue() = default ;
    ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue(const ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue &) = default ;
    ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue(ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue &&) = default ;
    ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue() = default ;
    ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue& operator=(const ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue &) = default ;
    ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue& operator=(ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SegmentPriceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SegmentPriceList& obj) { 
        DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
        DARABONBA_PTR_TO_JSON(search_price, searchPrice_);
      };
      friend void from_json(const Darabonba::Json& j, SegmentPriceList& obj) { 
        DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
        DARABONBA_PTR_FROM_JSON(search_price, searchPrice_);
      };
      SegmentPriceList() = default ;
      SegmentPriceList(const SegmentPriceList &) = default ;
      SegmentPriceList(SegmentPriceList &&) = default ;
      SegmentPriceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SegmentPriceList() = default ;
      SegmentPriceList& operator=(const SegmentPriceList &) = default ;
      SegmentPriceList& operator=(SegmentPriceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SearchPrice : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SearchPrice& obj) { 
          DARABONBA_PTR_TO_JSON(total_amount, totalAmount_);
          DARABONBA_PTR_TO_JSON(handling_amount, handlingAmount_);
          DARABONBA_PTR_TO_JSON(upgrade_amount, upgradeAmount_);
          DARABONBA_PTR_TO_JSON(tax_diff_amount, taxDiffAmount_);
          DARABONBA_PTR_TO_JSON(has_price, hasPrice_);
          DARABONBA_PTR_TO_JSON(non_price_text, nonPriceText_);
        };
        friend void from_json(const Darabonba::Json& j, SearchPrice& obj) { 
          DARABONBA_PTR_FROM_JSON(total_amount, totalAmount_);
          DARABONBA_PTR_FROM_JSON(handling_amount, handlingAmount_);
          DARABONBA_PTR_FROM_JSON(upgrade_amount, upgradeAmount_);
          DARABONBA_PTR_FROM_JSON(tax_diff_amount, taxDiffAmount_);
          DARABONBA_PTR_FROM_JSON(has_price, hasPrice_);
          DARABONBA_PTR_FROM_JSON(non_price_text, nonPriceText_);
        };
        SearchPrice() = default ;
        SearchPrice(const SearchPrice &) = default ;
        SearchPrice(SearchPrice &&) = default ;
        SearchPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SearchPrice() = default ;
        SearchPrice& operator=(const SearchPrice &) = default ;
        SearchPrice& operator=(SearchPrice &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->totalAmount_ == nullptr
        && this->handlingAmount_ == nullptr && this->upgradeAmount_ == nullptr && this->taxDiffAmount_ == nullptr && this->hasPrice_ == nullptr && this->nonPriceText_ == nullptr; };
        // totalAmount Field Functions 
        bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
        void deleteTotalAmount() { this->totalAmount_ = nullptr;};
        inline int64_t getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, 0L) };
        inline SearchPrice& setTotalAmount(int64_t totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


        // handlingAmount Field Functions 
        bool hasHandlingAmount() const { return this->handlingAmount_ != nullptr;};
        void deleteHandlingAmount() { this->handlingAmount_ = nullptr;};
        inline int64_t getHandlingAmount() const { DARABONBA_PTR_GET_DEFAULT(handlingAmount_, 0L) };
        inline SearchPrice& setHandlingAmount(int64_t handlingAmount) { DARABONBA_PTR_SET_VALUE(handlingAmount_, handlingAmount) };


        // upgradeAmount Field Functions 
        bool hasUpgradeAmount() const { return this->upgradeAmount_ != nullptr;};
        void deleteUpgradeAmount() { this->upgradeAmount_ = nullptr;};
        inline int64_t getUpgradeAmount() const { DARABONBA_PTR_GET_DEFAULT(upgradeAmount_, 0L) };
        inline SearchPrice& setUpgradeAmount(int64_t upgradeAmount) { DARABONBA_PTR_SET_VALUE(upgradeAmount_, upgradeAmount) };


        // taxDiffAmount Field Functions 
        bool hasTaxDiffAmount() const { return this->taxDiffAmount_ != nullptr;};
        void deleteTaxDiffAmount() { this->taxDiffAmount_ = nullptr;};
        inline int64_t getTaxDiffAmount() const { DARABONBA_PTR_GET_DEFAULT(taxDiffAmount_, 0L) };
        inline SearchPrice& setTaxDiffAmount(int64_t taxDiffAmount) { DARABONBA_PTR_SET_VALUE(taxDiffAmount_, taxDiffAmount) };


        // hasPrice Field Functions 
        bool hasHasPrice() const { return this->hasPrice_ != nullptr;};
        void deleteHasPrice() { this->hasPrice_ = nullptr;};
        inline bool getHasPrice() const { DARABONBA_PTR_GET_DEFAULT(hasPrice_, false) };
        inline SearchPrice& setHasPrice(bool hasPrice) { DARABONBA_PTR_SET_VALUE(hasPrice_, hasPrice) };


        // nonPriceText Field Functions 
        bool hasNonPriceText() const { return this->nonPriceText_ != nullptr;};
        void deleteNonPriceText() { this->nonPriceText_ = nullptr;};
        inline string getNonPriceText() const { DARABONBA_PTR_GET_DEFAULT(nonPriceText_, "") };
        inline SearchPrice& setNonPriceText(string nonPriceText) { DARABONBA_PTR_SET_VALUE(nonPriceText_, nonPriceText) };


      protected:
        shared_ptr<int64_t> totalAmount_ {};
        shared_ptr<int64_t> handlingAmount_ {};
        shared_ptr<int64_t> upgradeAmount_ {};
        shared_ptr<int64_t> taxDiffAmount_ {};
        shared_ptr<bool> hasPrice_ {};
        shared_ptr<string> nonPriceText_ {};
      };

      class SegmentPosition : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SegmentPosition& obj) { 
          DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
        };
        friend void from_json(const Darabonba::Json& j, SegmentPosition& obj) { 
          DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
        };
        SegmentPosition() = default ;
        SegmentPosition(const SegmentPosition &) = default ;
        SegmentPosition(SegmentPosition &&) = default ;
        SegmentPosition(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SegmentPosition() = default ;
        SegmentPosition& operator=(const SegmentPosition &) = default ;
        SegmentPosition& operator=(SegmentPosition &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->journeyIndex_ == nullptr
        && this->segmentIndex_ == nullptr; };
        // journeyIndex Field Functions 
        bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
        void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
        inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
        inline SegmentPosition& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


        // segmentIndex Field Functions 
        bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
        void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
        inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
        inline SegmentPosition& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


      protected:
        shared_ptr<int32_t> journeyIndex_ {};
        shared_ptr<int32_t> segmentIndex_ {};
      };

      virtual bool empty() const override { return this->segmentPosition_ == nullptr
        && this->searchPrice_ == nullptr; };
      // segmentPosition Field Functions 
      bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
      void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
      inline const SegmentPriceList::SegmentPosition & getSegmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, SegmentPriceList::SegmentPosition) };
      inline SegmentPriceList::SegmentPosition getSegmentPosition() { DARABONBA_PTR_GET(segmentPosition_, SegmentPriceList::SegmentPosition) };
      inline SegmentPriceList& setSegmentPosition(const SegmentPriceList::SegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
      inline SegmentPriceList& setSegmentPosition(SegmentPriceList::SegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


      // searchPrice Field Functions 
      bool hasSearchPrice() const { return this->searchPrice_ != nullptr;};
      void deleteSearchPrice() { this->searchPrice_ = nullptr;};
      inline const SegmentPriceList::SearchPrice & getSearchPrice() const { DARABONBA_PTR_GET_CONST(searchPrice_, SegmentPriceList::SearchPrice) };
      inline SegmentPriceList::SearchPrice getSearchPrice() { DARABONBA_PTR_GET(searchPrice_, SegmentPriceList::SearchPrice) };
      inline SegmentPriceList& setSearchPrice(const SegmentPriceList::SearchPrice & searchPrice) { DARABONBA_PTR_SET_VALUE(searchPrice_, searchPrice) };
      inline SegmentPriceList& setSearchPrice(SegmentPriceList::SearchPrice && searchPrice) { DARABONBA_PTR_SET_RVALUE(searchPrice_, searchPrice) };


    protected:
      shared_ptr<SegmentPriceList::SegmentPosition> segmentPosition_ {};
      shared_ptr<SegmentPriceList::SearchPrice> searchPrice_ {};
    };

    class SearchPrice : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SearchPrice& obj) { 
        DARABONBA_PTR_TO_JSON(total_amount, totalAmount_);
        DARABONBA_PTR_TO_JSON(handling_amount, handlingAmount_);
        DARABONBA_PTR_TO_JSON(upgrade_amount, upgradeAmount_);
        DARABONBA_PTR_TO_JSON(tax_diff_amount, taxDiffAmount_);
        DARABONBA_PTR_TO_JSON(has_price, hasPrice_);
        DARABONBA_PTR_TO_JSON(non_price_text, nonPriceText_);
      };
      friend void from_json(const Darabonba::Json& j, SearchPrice& obj) { 
        DARABONBA_PTR_FROM_JSON(total_amount, totalAmount_);
        DARABONBA_PTR_FROM_JSON(handling_amount, handlingAmount_);
        DARABONBA_PTR_FROM_JSON(upgrade_amount, upgradeAmount_);
        DARABONBA_PTR_FROM_JSON(tax_diff_amount, taxDiffAmount_);
        DARABONBA_PTR_FROM_JSON(has_price, hasPrice_);
        DARABONBA_PTR_FROM_JSON(non_price_text, nonPriceText_);
      };
      SearchPrice() = default ;
      SearchPrice(const SearchPrice &) = default ;
      SearchPrice(SearchPrice &&) = default ;
      SearchPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SearchPrice() = default ;
      SearchPrice& operator=(const SearchPrice &) = default ;
      SearchPrice& operator=(SearchPrice &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->totalAmount_ == nullptr
        && this->handlingAmount_ == nullptr && this->upgradeAmount_ == nullptr && this->taxDiffAmount_ == nullptr && this->hasPrice_ == nullptr && this->nonPriceText_ == nullptr; };
      // totalAmount Field Functions 
      bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
      void deleteTotalAmount() { this->totalAmount_ = nullptr;};
      inline int64_t getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, 0L) };
      inline SearchPrice& setTotalAmount(int64_t totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


      // handlingAmount Field Functions 
      bool hasHandlingAmount() const { return this->handlingAmount_ != nullptr;};
      void deleteHandlingAmount() { this->handlingAmount_ = nullptr;};
      inline int64_t getHandlingAmount() const { DARABONBA_PTR_GET_DEFAULT(handlingAmount_, 0L) };
      inline SearchPrice& setHandlingAmount(int64_t handlingAmount) { DARABONBA_PTR_SET_VALUE(handlingAmount_, handlingAmount) };


      // upgradeAmount Field Functions 
      bool hasUpgradeAmount() const { return this->upgradeAmount_ != nullptr;};
      void deleteUpgradeAmount() { this->upgradeAmount_ = nullptr;};
      inline int64_t getUpgradeAmount() const { DARABONBA_PTR_GET_DEFAULT(upgradeAmount_, 0L) };
      inline SearchPrice& setUpgradeAmount(int64_t upgradeAmount) { DARABONBA_PTR_SET_VALUE(upgradeAmount_, upgradeAmount) };


      // taxDiffAmount Field Functions 
      bool hasTaxDiffAmount() const { return this->taxDiffAmount_ != nullptr;};
      void deleteTaxDiffAmount() { this->taxDiffAmount_ = nullptr;};
      inline int64_t getTaxDiffAmount() const { DARABONBA_PTR_GET_DEFAULT(taxDiffAmount_, 0L) };
      inline SearchPrice& setTaxDiffAmount(int64_t taxDiffAmount) { DARABONBA_PTR_SET_VALUE(taxDiffAmount_, taxDiffAmount) };


      // hasPrice Field Functions 
      bool hasHasPrice() const { return this->hasPrice_ != nullptr;};
      void deleteHasPrice() { this->hasPrice_ = nullptr;};
      inline bool getHasPrice() const { DARABONBA_PTR_GET_DEFAULT(hasPrice_, false) };
      inline SearchPrice& setHasPrice(bool hasPrice) { DARABONBA_PTR_SET_VALUE(hasPrice_, hasPrice) };


      // nonPriceText Field Functions 
      bool hasNonPriceText() const { return this->nonPriceText_ != nullptr;};
      void deleteNonPriceText() { this->nonPriceText_ = nullptr;};
      inline string getNonPriceText() const { DARABONBA_PTR_GET_DEFAULT(nonPriceText_, "") };
      inline SearchPrice& setNonPriceText(string nonPriceText) { DARABONBA_PTR_SET_VALUE(nonPriceText_, nonPriceText) };


    protected:
      shared_ptr<int64_t> totalAmount_ {};
      shared_ptr<int64_t> handlingAmount_ {};
      shared_ptr<int64_t> upgradeAmount_ {};
      shared_ptr<int64_t> taxDiffAmount_ {};
      shared_ptr<bool> hasPrice_ {};
      shared_ptr<string> nonPriceText_ {};
    };

    class CabinQuantityList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CabinQuantityList& obj) { 
        DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
        DARABONBA_PTR_TO_JSON(cabin_info, cabinInfo_);
      };
      friend void from_json(const Darabonba::Json& j, CabinQuantityList& obj) { 
        DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
        DARABONBA_PTR_FROM_JSON(cabin_info, cabinInfo_);
      };
      CabinQuantityList() = default ;
      CabinQuantityList(const CabinQuantityList &) = default ;
      CabinQuantityList(CabinQuantityList &&) = default ;
      CabinQuantityList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CabinQuantityList() = default ;
      CabinQuantityList& operator=(const CabinQuantityList &) = default ;
      CabinQuantityList& operator=(CabinQuantityList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CabinInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CabinInfo& obj) { 
          DARABONBA_PTR_TO_JSON(cabin, cabin_);
          DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_TO_JSON(cabin_class_name, cabinClassName_);
          DARABONBA_PTR_TO_JSON(quantity, quantity_);
          DARABONBA_PTR_TO_JSON(cabin_class_memo, cabinClassMemo_);
          DARABONBA_PTR_TO_JSON(specification, specification_);
        };
        friend void from_json(const Darabonba::Json& j, CabinInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(cabin, cabin_);
          DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_FROM_JSON(cabin_class_name, cabinClassName_);
          DARABONBA_PTR_FROM_JSON(quantity, quantity_);
          DARABONBA_PTR_FROM_JSON(cabin_class_memo, cabinClassMemo_);
          DARABONBA_PTR_FROM_JSON(specification, specification_);
        };
        CabinInfo() = default ;
        CabinInfo(const CabinInfo &) = default ;
        CabinInfo(CabinInfo &&) = default ;
        CabinInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CabinInfo() = default ;
        CabinInfo& operator=(const CabinInfo &) = default ;
        CabinInfo& operator=(CabinInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cabin_ == nullptr
        && this->cabinClass_ == nullptr && this->cabinClassName_ == nullptr && this->quantity_ == nullptr && this->cabinClassMemo_ == nullptr && this->specification_ == nullptr; };
        // cabin Field Functions 
        bool hasCabin() const { return this->cabin_ != nullptr;};
        void deleteCabin() { this->cabin_ = nullptr;};
        inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
        inline CabinInfo& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


        // cabinClass Field Functions 
        bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
        void deleteCabinClass() { this->cabinClass_ = nullptr;};
        inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
        inline CabinInfo& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


        // cabinClassName Field Functions 
        bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
        void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
        inline string getCabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
        inline CabinInfo& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


        // quantity Field Functions 
        bool hasQuantity() const { return this->quantity_ != nullptr;};
        void deleteQuantity() { this->quantity_ = nullptr;};
        inline string getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
        inline CabinInfo& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


        // cabinClassMemo Field Functions 
        bool hasCabinClassMemo() const { return this->cabinClassMemo_ != nullptr;};
        void deleteCabinClassMemo() { this->cabinClassMemo_ = nullptr;};
        inline string getCabinClassMemo() const { DARABONBA_PTR_GET_DEFAULT(cabinClassMemo_, "") };
        inline CabinInfo& setCabinClassMemo(string cabinClassMemo) { DARABONBA_PTR_SET_VALUE(cabinClassMemo_, cabinClassMemo) };


        // specification Field Functions 
        bool hasSpecification() const { return this->specification_ != nullptr;};
        void deleteSpecification() { this->specification_ = nullptr;};
        inline string getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
        inline CabinInfo& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


      protected:
        shared_ptr<string> cabin_ {};
        shared_ptr<string> cabinClass_ {};
        shared_ptr<string> cabinClassName_ {};
        shared_ptr<string> quantity_ {};
        shared_ptr<string> cabinClassMemo_ {};
        shared_ptr<string> specification_ {};
      };

      class SegmentPosition : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SegmentPosition& obj) { 
          DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
        };
        friend void from_json(const Darabonba::Json& j, SegmentPosition& obj) { 
          DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
        };
        SegmentPosition() = default ;
        SegmentPosition(const SegmentPosition &) = default ;
        SegmentPosition(SegmentPosition &&) = default ;
        SegmentPosition(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SegmentPosition() = default ;
        SegmentPosition& operator=(const SegmentPosition &) = default ;
        SegmentPosition& operator=(SegmentPosition &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->journeyIndex_ == nullptr
        && this->segmentIndex_ == nullptr; };
        // journeyIndex Field Functions 
        bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
        void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
        inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
        inline SegmentPosition& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


        // segmentIndex Field Functions 
        bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
        void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
        inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
        inline SegmentPosition& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


      protected:
        shared_ptr<int32_t> journeyIndex_ {};
        shared_ptr<int32_t> segmentIndex_ {};
      };

      virtual bool empty() const override { return this->segmentPosition_ == nullptr
        && this->cabinInfo_ == nullptr; };
      // segmentPosition Field Functions 
      bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
      void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
      inline const CabinQuantityList::SegmentPosition & getSegmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, CabinQuantityList::SegmentPosition) };
      inline CabinQuantityList::SegmentPosition getSegmentPosition() { DARABONBA_PTR_GET(segmentPosition_, CabinQuantityList::SegmentPosition) };
      inline CabinQuantityList& setSegmentPosition(const CabinQuantityList::SegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
      inline CabinQuantityList& setSegmentPosition(CabinQuantityList::SegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


      // cabinInfo Field Functions 
      bool hasCabinInfo() const { return this->cabinInfo_ != nullptr;};
      void deleteCabinInfo() { this->cabinInfo_ = nullptr;};
      inline const CabinQuantityList::CabinInfo & getCabinInfo() const { DARABONBA_PTR_GET_CONST(cabinInfo_, CabinQuantityList::CabinInfo) };
      inline CabinQuantityList::CabinInfo getCabinInfo() { DARABONBA_PTR_GET(cabinInfo_, CabinQuantityList::CabinInfo) };
      inline CabinQuantityList& setCabinInfo(const CabinQuantityList::CabinInfo & cabinInfo) { DARABONBA_PTR_SET_VALUE(cabinInfo_, cabinInfo) };
      inline CabinQuantityList& setCabinInfo(CabinQuantityList::CabinInfo && cabinInfo) { DARABONBA_PTR_SET_RVALUE(cabinInfo_, cabinInfo) };


    protected:
      shared_ptr<CabinQuantityList::SegmentPosition> segmentPosition_ {};
      shared_ptr<CabinQuantityList::CabinInfo> cabinInfo_ {};
    };

    virtual bool empty() const override { return this->cabinQuantityList_ == nullptr
        && this->searchPrice_ == nullptr && this->segmentPriceList_ == nullptr; };
    // cabinQuantityList Field Functions 
    bool hasCabinQuantityList() const { return this->cabinQuantityList_ != nullptr;};
    void deleteCabinQuantityList() { this->cabinQuantityList_ = nullptr;};
    inline const vector<ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::CabinQuantityList> & getCabinQuantityList() const { DARABONBA_PTR_GET_CONST(cabinQuantityList_, vector<ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::CabinQuantityList>) };
    inline vector<ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::CabinQuantityList> getCabinQuantityList() { DARABONBA_PTR_GET(cabinQuantityList_, vector<ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::CabinQuantityList>) };
    inline ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue& setCabinQuantityList(const vector<ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::CabinQuantityList> & cabinQuantityList) { DARABONBA_PTR_SET_VALUE(cabinQuantityList_, cabinQuantityList) };
    inline ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue& setCabinQuantityList(vector<ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::CabinQuantityList> && cabinQuantityList) { DARABONBA_PTR_SET_RVALUE(cabinQuantityList_, cabinQuantityList) };


    // searchPrice Field Functions 
    bool hasSearchPrice() const { return this->searchPrice_ != nullptr;};
    void deleteSearchPrice() { this->searchPrice_ = nullptr;};
    inline const ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::SearchPrice & getSearchPrice() const { DARABONBA_PTR_GET_CONST(searchPrice_, ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::SearchPrice) };
    inline ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::SearchPrice getSearchPrice() { DARABONBA_PTR_GET(searchPrice_, ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::SearchPrice) };
    inline ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue& setSearchPrice(const ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::SearchPrice & searchPrice) { DARABONBA_PTR_SET_VALUE(searchPrice_, searchPrice) };
    inline ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue& setSearchPrice(ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::SearchPrice && searchPrice) { DARABONBA_PTR_SET_RVALUE(searchPrice_, searchPrice) };


    // segmentPriceList Field Functions 
    bool hasSegmentPriceList() const { return this->segmentPriceList_ != nullptr;};
    void deleteSegmentPriceList() { this->segmentPriceList_ = nullptr;};
    inline const vector<ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::SegmentPriceList> & getSegmentPriceList() const { DARABONBA_PTR_GET_CONST(segmentPriceList_, vector<ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::SegmentPriceList>) };
    inline vector<ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::SegmentPriceList> getSegmentPriceList() { DARABONBA_PTR_GET(segmentPriceList_, vector<ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::SegmentPriceList>) };
    inline ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue& setSegmentPriceList(const vector<ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::SegmentPriceList> & segmentPriceList) { DARABONBA_PTR_SET_VALUE(segmentPriceList_, segmentPriceList) };
    inline ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue& setSegmentPriceList(vector<ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::SegmentPriceList> && segmentPriceList) { DARABONBA_PTR_SET_RVALUE(segmentPriceList_, segmentPriceList) };


  protected:
    shared_ptr<vector<ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::CabinQuantityList>> cabinQuantityList_ {};
    shared_ptr<ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::SearchPrice> searchPrice_ {};
    shared_ptr<vector<ModuleReShopItemListBestPriceItemSubItemsShoppingItemMapValue::SegmentPriceList>> segmentPriceList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
