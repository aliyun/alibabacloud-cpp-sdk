// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTBESTPRICEITEMSHOPPINGITEMMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTBESTPRICEITEMSHOPPINGITEMMAPVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityValue.hpp>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleFlightItemListBestPriceItemShoppingItemMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleFlightItemListBestPriceItemShoppingItemMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(cabin_quantity_list, cabinQuantityList_);
      DARABONBA_PTR_TO_JSON(search_price, searchPrice_);
      DARABONBA_PTR_TO_JSON(segment_price_list, segmentPriceList_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(cabin_quantity, cabinQuantity_);
      DARABONBA_PTR_TO_JSON(segment_price, segmentPrice_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleFlightItemListBestPriceItemShoppingItemMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin_quantity_list, cabinQuantityList_);
      DARABONBA_PTR_FROM_JSON(search_price, searchPrice_);
      DARABONBA_PTR_FROM_JSON(segment_price_list, segmentPriceList_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(cabin_quantity, cabinQuantity_);
      DARABONBA_PTR_FROM_JSON(segment_price, segmentPrice_);
    };
    ModuleFlightItemListBestPriceItemShoppingItemMapValue() = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValue(const ModuleFlightItemListBestPriceItemShoppingItemMapValue &) = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValue(ModuleFlightItemListBestPriceItemShoppingItemMapValue &&) = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleFlightItemListBestPriceItemShoppingItemMapValue() = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValue& operator=(const ModuleFlightItemListBestPriceItemShoppingItemMapValue &) = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValue& operator=(ModuleFlightItemListBestPriceItemShoppingItemMapValue &&) = default ;
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
          DARABONBA_PTR_TO_JSON(sell_price, sellPrice_);
          DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
          DARABONBA_PTR_TO_JSON(tax, tax_);
        };
        friend void from_json(const Darabonba::Json& j, SearchPrice& obj) { 
          DARABONBA_PTR_FROM_JSON(sell_price, sellPrice_);
          DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
          DARABONBA_PTR_FROM_JSON(tax, tax_);
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
        virtual bool empty() const override { return this->sellPrice_ == nullptr
        && this->ticketPrice_ == nullptr && this->tax_ == nullptr; };
        // sellPrice Field Functions 
        bool hasSellPrice() const { return this->sellPrice_ != nullptr;};
        void deleteSellPrice() { this->sellPrice_ = nullptr;};
        inline int32_t getSellPrice() const { DARABONBA_PTR_GET_DEFAULT(sellPrice_, 0) };
        inline SearchPrice& setSellPrice(int32_t sellPrice) { DARABONBA_PTR_SET_VALUE(sellPrice_, sellPrice) };


        // ticketPrice Field Functions 
        bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
        void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
        inline int32_t getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0) };
        inline SearchPrice& setTicketPrice(int32_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


        // tax Field Functions 
        bool hasTax() const { return this->tax_ != nullptr;};
        void deleteTax() { this->tax_ = nullptr;};
        inline int32_t getTax() const { DARABONBA_PTR_GET_DEFAULT(tax_, 0) };
        inline SearchPrice& setTax(int32_t tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


      protected:
        shared_ptr<int32_t> sellPrice_ {};
        shared_ptr<int32_t> ticketPrice_ {};
        shared_ptr<int32_t> tax_ {};
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
        DARABONBA_PTR_TO_JSON(floor_price, floorPrice_);
        DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
        DARABONBA_PTR_TO_JSON(sell_price, sellPrice_);
        DARABONBA_PTR_TO_JSON(original_sell_price, originalSellPrice_);
        DARABONBA_PTR_TO_JSON(base_total_price, baseTotalPrice_);
        DARABONBA_PTR_TO_JSON(before_control_price, beforeControlPrice_);
        DARABONBA_PTR_TO_JSON(tax, tax_);
        DARABONBA_PTR_TO_JSON(supply_price, supplyPrice_);
        DARABONBA_PTR_TO_JSON(basic_cabin_price, basicCabinPrice_);
        DARABONBA_PTR_TO_JSON(build_price, buildPrice_);
        DARABONBA_PTR_TO_JSON(oil_price, oilPrice_);
        DARABONBA_PTR_TO_JSON(first_standard_price, firstStandardPrice_);
        DARABONBA_PTR_TO_JSON(business_standard_price, businessStandardPrice_);
        DARABONBA_PTR_TO_JSON(common_standard_price, commonStandardPrice_);
        DARABONBA_PTR_TO_JSON(inter_ticket_price, interTicketPrice_);
        DARABONBA_PTR_TO_JSON(subtracted_price, subtractedPrice_);
        DARABONBA_PTR_TO_JSON(origin_common_price, originCommonPrice_);
        DARABONBA_PTR_TO_JSON(dynamic_promotion_price, dynamicPromotionPrice_);
        DARABONBA_PTR_TO_JSON(installment_num, installmentNum_);
        DARABONBA_PTR_TO_JSON(installment_price, installmentPrice_);
        DARABONBA_PTR_TO_JSON(competition_dynamic_price, competitionDynamicPrice_);
        DARABONBA_PTR_TO_JSON(competition_promotion_price, competitionPromotionPrice_);
        DARABONBA_PTR_TO_JSON(min_before_control_price_of_normal, minBeforeControlPriceOfNormal_);
        DARABONBA_PTR_TO_JSON(price_show_info, priceShowInfo_);
      };
      friend void from_json(const Darabonba::Json& j, SearchPrice& obj) { 
        DARABONBA_PTR_FROM_JSON(floor_price, floorPrice_);
        DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
        DARABONBA_PTR_FROM_JSON(sell_price, sellPrice_);
        DARABONBA_PTR_FROM_JSON(original_sell_price, originalSellPrice_);
        DARABONBA_PTR_FROM_JSON(base_total_price, baseTotalPrice_);
        DARABONBA_PTR_FROM_JSON(before_control_price, beforeControlPrice_);
        DARABONBA_PTR_FROM_JSON(tax, tax_);
        DARABONBA_PTR_FROM_JSON(supply_price, supplyPrice_);
        DARABONBA_PTR_FROM_JSON(basic_cabin_price, basicCabinPrice_);
        DARABONBA_PTR_FROM_JSON(build_price, buildPrice_);
        DARABONBA_PTR_FROM_JSON(oil_price, oilPrice_);
        DARABONBA_PTR_FROM_JSON(first_standard_price, firstStandardPrice_);
        DARABONBA_PTR_FROM_JSON(business_standard_price, businessStandardPrice_);
        DARABONBA_PTR_FROM_JSON(common_standard_price, commonStandardPrice_);
        DARABONBA_PTR_FROM_JSON(inter_ticket_price, interTicketPrice_);
        DARABONBA_PTR_FROM_JSON(subtracted_price, subtractedPrice_);
        DARABONBA_PTR_FROM_JSON(origin_common_price, originCommonPrice_);
        DARABONBA_PTR_FROM_JSON(dynamic_promotion_price, dynamicPromotionPrice_);
        DARABONBA_PTR_FROM_JSON(installment_num, installmentNum_);
        DARABONBA_PTR_FROM_JSON(installment_price, installmentPrice_);
        DARABONBA_PTR_FROM_JSON(competition_dynamic_price, competitionDynamicPrice_);
        DARABONBA_PTR_FROM_JSON(competition_promotion_price, competitionPromotionPrice_);
        DARABONBA_PTR_FROM_JSON(min_before_control_price_of_normal, minBeforeControlPriceOfNormal_);
        DARABONBA_PTR_FROM_JSON(price_show_info, priceShowInfo_);
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
      class PriceShowInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PriceShowInfo& obj) { 
          DARABONBA_PTR_TO_JSON(discount_info, discountInfo_);
          DARABONBA_PTR_TO_JSON(discount_num, discountNum_);
          DARABONBA_PTR_TO_JSON(show_ticket_price, showTicketPrice_);
        };
        friend void from_json(const Darabonba::Json& j, PriceShowInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(discount_info, discountInfo_);
          DARABONBA_PTR_FROM_JSON(discount_num, discountNum_);
          DARABONBA_PTR_FROM_JSON(show_ticket_price, showTicketPrice_);
        };
        PriceShowInfo() = default ;
        PriceShowInfo(const PriceShowInfo &) = default ;
        PriceShowInfo(PriceShowInfo &&) = default ;
        PriceShowInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PriceShowInfo() = default ;
        PriceShowInfo& operator=(const PriceShowInfo &) = default ;
        PriceShowInfo& operator=(PriceShowInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->discountInfo_ == nullptr
        && this->discountNum_ == nullptr && this->showTicketPrice_ == nullptr; };
        // discountInfo Field Functions 
        bool hasDiscountInfo() const { return this->discountInfo_ != nullptr;};
        void deleteDiscountInfo() { this->discountInfo_ = nullptr;};
        inline string getDiscountInfo() const { DARABONBA_PTR_GET_DEFAULT(discountInfo_, "") };
        inline PriceShowInfo& setDiscountInfo(string discountInfo) { DARABONBA_PTR_SET_VALUE(discountInfo_, discountInfo) };


        // discountNum Field Functions 
        bool hasDiscountNum() const { return this->discountNum_ != nullptr;};
        void deleteDiscountNum() { this->discountNum_ = nullptr;};
        inline double getDiscountNum() const { DARABONBA_PTR_GET_DEFAULT(discountNum_, 0.0) };
        inline PriceShowInfo& setDiscountNum(double discountNum) { DARABONBA_PTR_SET_VALUE(discountNum_, discountNum) };


        // showTicketPrice Field Functions 
        bool hasShowTicketPrice() const { return this->showTicketPrice_ != nullptr;};
        void deleteShowTicketPrice() { this->showTicketPrice_ = nullptr;};
        inline bool getShowTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(showTicketPrice_, false) };
        inline PriceShowInfo& setShowTicketPrice(bool showTicketPrice) { DARABONBA_PTR_SET_VALUE(showTicketPrice_, showTicketPrice) };


      protected:
        shared_ptr<string> discountInfo_ {};
        shared_ptr<double> discountNum_ {};
        shared_ptr<bool> showTicketPrice_ {};
      };

      virtual bool empty() const override { return this->floorPrice_ == nullptr
        && this->ticketPrice_ == nullptr && this->sellPrice_ == nullptr && this->originalSellPrice_ == nullptr && this->baseTotalPrice_ == nullptr && this->beforeControlPrice_ == nullptr
        && this->tax_ == nullptr && this->supplyPrice_ == nullptr && this->basicCabinPrice_ == nullptr && this->buildPrice_ == nullptr && this->oilPrice_ == nullptr
        && this->firstStandardPrice_ == nullptr && this->businessStandardPrice_ == nullptr && this->commonStandardPrice_ == nullptr && this->interTicketPrice_ == nullptr && this->subtractedPrice_ == nullptr
        && this->originCommonPrice_ == nullptr && this->dynamicPromotionPrice_ == nullptr && this->installmentNum_ == nullptr && this->installmentPrice_ == nullptr && this->competitionDynamicPrice_ == nullptr
        && this->competitionPromotionPrice_ == nullptr && this->minBeforeControlPriceOfNormal_ == nullptr && this->priceShowInfo_ == nullptr; };
      // floorPrice Field Functions 
      bool hasFloorPrice() const { return this->floorPrice_ != nullptr;};
      void deleteFloorPrice() { this->floorPrice_ = nullptr;};
      inline int32_t getFloorPrice() const { DARABONBA_PTR_GET_DEFAULT(floorPrice_, 0) };
      inline SearchPrice& setFloorPrice(int32_t floorPrice) { DARABONBA_PTR_SET_VALUE(floorPrice_, floorPrice) };


      // ticketPrice Field Functions 
      bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
      void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
      inline int32_t getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0) };
      inline SearchPrice& setTicketPrice(int32_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


      // sellPrice Field Functions 
      bool hasSellPrice() const { return this->sellPrice_ != nullptr;};
      void deleteSellPrice() { this->sellPrice_ = nullptr;};
      inline int32_t getSellPrice() const { DARABONBA_PTR_GET_DEFAULT(sellPrice_, 0) };
      inline SearchPrice& setSellPrice(int32_t sellPrice) { DARABONBA_PTR_SET_VALUE(sellPrice_, sellPrice) };


      // originalSellPrice Field Functions 
      bool hasOriginalSellPrice() const { return this->originalSellPrice_ != nullptr;};
      void deleteOriginalSellPrice() { this->originalSellPrice_ = nullptr;};
      inline int32_t getOriginalSellPrice() const { DARABONBA_PTR_GET_DEFAULT(originalSellPrice_, 0) };
      inline SearchPrice& setOriginalSellPrice(int32_t originalSellPrice) { DARABONBA_PTR_SET_VALUE(originalSellPrice_, originalSellPrice) };


      // baseTotalPrice Field Functions 
      bool hasBaseTotalPrice() const { return this->baseTotalPrice_ != nullptr;};
      void deleteBaseTotalPrice() { this->baseTotalPrice_ = nullptr;};
      inline int32_t getBaseTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(baseTotalPrice_, 0) };
      inline SearchPrice& setBaseTotalPrice(int32_t baseTotalPrice) { DARABONBA_PTR_SET_VALUE(baseTotalPrice_, baseTotalPrice) };


      // beforeControlPrice Field Functions 
      bool hasBeforeControlPrice() const { return this->beforeControlPrice_ != nullptr;};
      void deleteBeforeControlPrice() { this->beforeControlPrice_ = nullptr;};
      inline int32_t getBeforeControlPrice() const { DARABONBA_PTR_GET_DEFAULT(beforeControlPrice_, 0) };
      inline SearchPrice& setBeforeControlPrice(int32_t beforeControlPrice) { DARABONBA_PTR_SET_VALUE(beforeControlPrice_, beforeControlPrice) };


      // tax Field Functions 
      bool hasTax() const { return this->tax_ != nullptr;};
      void deleteTax() { this->tax_ = nullptr;};
      inline int32_t getTax() const { DARABONBA_PTR_GET_DEFAULT(tax_, 0) };
      inline SearchPrice& setTax(int32_t tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


      // supplyPrice Field Functions 
      bool hasSupplyPrice() const { return this->supplyPrice_ != nullptr;};
      void deleteSupplyPrice() { this->supplyPrice_ = nullptr;};
      inline int32_t getSupplyPrice() const { DARABONBA_PTR_GET_DEFAULT(supplyPrice_, 0) };
      inline SearchPrice& setSupplyPrice(int32_t supplyPrice) { DARABONBA_PTR_SET_VALUE(supplyPrice_, supplyPrice) };


      // basicCabinPrice Field Functions 
      bool hasBasicCabinPrice() const { return this->basicCabinPrice_ != nullptr;};
      void deleteBasicCabinPrice() { this->basicCabinPrice_ = nullptr;};
      inline int32_t getBasicCabinPrice() const { DARABONBA_PTR_GET_DEFAULT(basicCabinPrice_, 0) };
      inline SearchPrice& setBasicCabinPrice(int32_t basicCabinPrice) { DARABONBA_PTR_SET_VALUE(basicCabinPrice_, basicCabinPrice) };


      // buildPrice Field Functions 
      bool hasBuildPrice() const { return this->buildPrice_ != nullptr;};
      void deleteBuildPrice() { this->buildPrice_ = nullptr;};
      inline int32_t getBuildPrice() const { DARABONBA_PTR_GET_DEFAULT(buildPrice_, 0) };
      inline SearchPrice& setBuildPrice(int32_t buildPrice) { DARABONBA_PTR_SET_VALUE(buildPrice_, buildPrice) };


      // oilPrice Field Functions 
      bool hasOilPrice() const { return this->oilPrice_ != nullptr;};
      void deleteOilPrice() { this->oilPrice_ = nullptr;};
      inline int32_t getOilPrice() const { DARABONBA_PTR_GET_DEFAULT(oilPrice_, 0) };
      inline SearchPrice& setOilPrice(int32_t oilPrice) { DARABONBA_PTR_SET_VALUE(oilPrice_, oilPrice) };


      // firstStandardPrice Field Functions 
      bool hasFirstStandardPrice() const { return this->firstStandardPrice_ != nullptr;};
      void deleteFirstStandardPrice() { this->firstStandardPrice_ = nullptr;};
      inline int32_t getFirstStandardPrice() const { DARABONBA_PTR_GET_DEFAULT(firstStandardPrice_, 0) };
      inline SearchPrice& setFirstStandardPrice(int32_t firstStandardPrice) { DARABONBA_PTR_SET_VALUE(firstStandardPrice_, firstStandardPrice) };


      // businessStandardPrice Field Functions 
      bool hasBusinessStandardPrice() const { return this->businessStandardPrice_ != nullptr;};
      void deleteBusinessStandardPrice() { this->businessStandardPrice_ = nullptr;};
      inline int32_t getBusinessStandardPrice() const { DARABONBA_PTR_GET_DEFAULT(businessStandardPrice_, 0) };
      inline SearchPrice& setBusinessStandardPrice(int32_t businessStandardPrice) { DARABONBA_PTR_SET_VALUE(businessStandardPrice_, businessStandardPrice) };


      // commonStandardPrice Field Functions 
      bool hasCommonStandardPrice() const { return this->commonStandardPrice_ != nullptr;};
      void deleteCommonStandardPrice() { this->commonStandardPrice_ = nullptr;};
      inline int32_t getCommonStandardPrice() const { DARABONBA_PTR_GET_DEFAULT(commonStandardPrice_, 0) };
      inline SearchPrice& setCommonStandardPrice(int32_t commonStandardPrice) { DARABONBA_PTR_SET_VALUE(commonStandardPrice_, commonStandardPrice) };


      // interTicketPrice Field Functions 
      bool hasInterTicketPrice() const { return this->interTicketPrice_ != nullptr;};
      void deleteInterTicketPrice() { this->interTicketPrice_ = nullptr;};
      inline int32_t getInterTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(interTicketPrice_, 0) };
      inline SearchPrice& setInterTicketPrice(int32_t interTicketPrice) { DARABONBA_PTR_SET_VALUE(interTicketPrice_, interTicketPrice) };


      // subtractedPrice Field Functions 
      bool hasSubtractedPrice() const { return this->subtractedPrice_ != nullptr;};
      void deleteSubtractedPrice() { this->subtractedPrice_ = nullptr;};
      inline int32_t getSubtractedPrice() const { DARABONBA_PTR_GET_DEFAULT(subtractedPrice_, 0) };
      inline SearchPrice& setSubtractedPrice(int32_t subtractedPrice) { DARABONBA_PTR_SET_VALUE(subtractedPrice_, subtractedPrice) };


      // originCommonPrice Field Functions 
      bool hasOriginCommonPrice() const { return this->originCommonPrice_ != nullptr;};
      void deleteOriginCommonPrice() { this->originCommonPrice_ = nullptr;};
      inline int32_t getOriginCommonPrice() const { DARABONBA_PTR_GET_DEFAULT(originCommonPrice_, 0) };
      inline SearchPrice& setOriginCommonPrice(int32_t originCommonPrice) { DARABONBA_PTR_SET_VALUE(originCommonPrice_, originCommonPrice) };


      // dynamicPromotionPrice Field Functions 
      bool hasDynamicPromotionPrice() const { return this->dynamicPromotionPrice_ != nullptr;};
      void deleteDynamicPromotionPrice() { this->dynamicPromotionPrice_ = nullptr;};
      inline int32_t getDynamicPromotionPrice() const { DARABONBA_PTR_GET_DEFAULT(dynamicPromotionPrice_, 0) };
      inline SearchPrice& setDynamicPromotionPrice(int32_t dynamicPromotionPrice) { DARABONBA_PTR_SET_VALUE(dynamicPromotionPrice_, dynamicPromotionPrice) };


      // installmentNum Field Functions 
      bool hasInstallmentNum() const { return this->installmentNum_ != nullptr;};
      void deleteInstallmentNum() { this->installmentNum_ = nullptr;};
      inline int32_t getInstallmentNum() const { DARABONBA_PTR_GET_DEFAULT(installmentNum_, 0) };
      inline SearchPrice& setInstallmentNum(int32_t installmentNum) { DARABONBA_PTR_SET_VALUE(installmentNum_, installmentNum) };


      // installmentPrice Field Functions 
      bool hasInstallmentPrice() const { return this->installmentPrice_ != nullptr;};
      void deleteInstallmentPrice() { this->installmentPrice_ = nullptr;};
      inline double getInstallmentPrice() const { DARABONBA_PTR_GET_DEFAULT(installmentPrice_, 0.0) };
      inline SearchPrice& setInstallmentPrice(double installmentPrice) { DARABONBA_PTR_SET_VALUE(installmentPrice_, installmentPrice) };


      // competitionDynamicPrice Field Functions 
      bool hasCompetitionDynamicPrice() const { return this->competitionDynamicPrice_ != nullptr;};
      void deleteCompetitionDynamicPrice() { this->competitionDynamicPrice_ = nullptr;};
      inline int32_t getCompetitionDynamicPrice() const { DARABONBA_PTR_GET_DEFAULT(competitionDynamicPrice_, 0) };
      inline SearchPrice& setCompetitionDynamicPrice(int32_t competitionDynamicPrice) { DARABONBA_PTR_SET_VALUE(competitionDynamicPrice_, competitionDynamicPrice) };


      // competitionPromotionPrice Field Functions 
      bool hasCompetitionPromotionPrice() const { return this->competitionPromotionPrice_ != nullptr;};
      void deleteCompetitionPromotionPrice() { this->competitionPromotionPrice_ = nullptr;};
      inline int32_t getCompetitionPromotionPrice() const { DARABONBA_PTR_GET_DEFAULT(competitionPromotionPrice_, 0) };
      inline SearchPrice& setCompetitionPromotionPrice(int32_t competitionPromotionPrice) { DARABONBA_PTR_SET_VALUE(competitionPromotionPrice_, competitionPromotionPrice) };


      // minBeforeControlPriceOfNormal Field Functions 
      bool hasMinBeforeControlPriceOfNormal() const { return this->minBeforeControlPriceOfNormal_ != nullptr;};
      void deleteMinBeforeControlPriceOfNormal() { this->minBeforeControlPriceOfNormal_ = nullptr;};
      inline int32_t getMinBeforeControlPriceOfNormal() const { DARABONBA_PTR_GET_DEFAULT(minBeforeControlPriceOfNormal_, 0) };
      inline SearchPrice& setMinBeforeControlPriceOfNormal(int32_t minBeforeControlPriceOfNormal) { DARABONBA_PTR_SET_VALUE(minBeforeControlPriceOfNormal_, minBeforeControlPriceOfNormal) };


      // priceShowInfo Field Functions 
      bool hasPriceShowInfo() const { return this->priceShowInfo_ != nullptr;};
      void deletePriceShowInfo() { this->priceShowInfo_ = nullptr;};
      inline const SearchPrice::PriceShowInfo & getPriceShowInfo() const { DARABONBA_PTR_GET_CONST(priceShowInfo_, SearchPrice::PriceShowInfo) };
      inline SearchPrice::PriceShowInfo getPriceShowInfo() { DARABONBA_PTR_GET(priceShowInfo_, SearchPrice::PriceShowInfo) };
      inline SearchPrice& setPriceShowInfo(const SearchPrice::PriceShowInfo & priceShowInfo) { DARABONBA_PTR_SET_VALUE(priceShowInfo_, priceShowInfo) };
      inline SearchPrice& setPriceShowInfo(SearchPrice::PriceShowInfo && priceShowInfo) { DARABONBA_PTR_SET_RVALUE(priceShowInfo_, priceShowInfo) };


    protected:
      shared_ptr<int32_t> floorPrice_ {};
      shared_ptr<int32_t> ticketPrice_ {};
      shared_ptr<int32_t> sellPrice_ {};
      shared_ptr<int32_t> originalSellPrice_ {};
      shared_ptr<int32_t> baseTotalPrice_ {};
      shared_ptr<int32_t> beforeControlPrice_ {};
      shared_ptr<int32_t> tax_ {};
      shared_ptr<int32_t> supplyPrice_ {};
      shared_ptr<int32_t> basicCabinPrice_ {};
      shared_ptr<int32_t> buildPrice_ {};
      shared_ptr<int32_t> oilPrice_ {};
      shared_ptr<int32_t> firstStandardPrice_ {};
      shared_ptr<int32_t> businessStandardPrice_ {};
      shared_ptr<int32_t> commonStandardPrice_ {};
      shared_ptr<int32_t> interTicketPrice_ {};
      shared_ptr<int32_t> subtractedPrice_ {};
      shared_ptr<int32_t> originCommonPrice_ {};
      shared_ptr<int32_t> dynamicPromotionPrice_ {};
      shared_ptr<int32_t> installmentNum_ {};
      shared_ptr<double> installmentPrice_ {};
      shared_ptr<int32_t> competitionDynamicPrice_ {};
      shared_ptr<int32_t> competitionPromotionPrice_ {};
      shared_ptr<int32_t> minBeforeControlPriceOfNormal_ {};
      shared_ptr<SearchPrice::PriceShowInfo> priceShowInfo_ {};
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
        };
        friend void from_json(const Darabonba::Json& j, CabinInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(cabin, cabin_);
          DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_FROM_JSON(cabin_class_name, cabinClassName_);
          DARABONBA_PTR_FROM_JSON(quantity, quantity_);
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
        && this->cabinClass_ == nullptr && this->cabinClassName_ == nullptr && this->quantity_ == nullptr; };
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


      protected:
        shared_ptr<string> cabin_ {};
        shared_ptr<string> cabinClass_ {};
        shared_ptr<string> cabinClassName_ {};
        shared_ptr<string> quantity_ {};
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
        && this->searchPrice_ == nullptr && this->segmentPriceList_ == nullptr && this->id_ == nullptr && this->cabinQuantity_ == nullptr && this->segmentPrice_ == nullptr; };
    // cabinQuantityList Field Functions 
    bool hasCabinQuantityList() const { return this->cabinQuantityList_ != nullptr;};
    void deleteCabinQuantityList() { this->cabinQuantityList_ = nullptr;};
    inline const vector<ModuleFlightItemListBestPriceItemShoppingItemMapValue::CabinQuantityList> & getCabinQuantityList() const { DARABONBA_PTR_GET_CONST(cabinQuantityList_, vector<ModuleFlightItemListBestPriceItemShoppingItemMapValue::CabinQuantityList>) };
    inline vector<ModuleFlightItemListBestPriceItemShoppingItemMapValue::CabinQuantityList> getCabinQuantityList() { DARABONBA_PTR_GET(cabinQuantityList_, vector<ModuleFlightItemListBestPriceItemShoppingItemMapValue::CabinQuantityList>) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setCabinQuantityList(const vector<ModuleFlightItemListBestPriceItemShoppingItemMapValue::CabinQuantityList> & cabinQuantityList) { DARABONBA_PTR_SET_VALUE(cabinQuantityList_, cabinQuantityList) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setCabinQuantityList(vector<ModuleFlightItemListBestPriceItemShoppingItemMapValue::CabinQuantityList> && cabinQuantityList) { DARABONBA_PTR_SET_RVALUE(cabinQuantityList_, cabinQuantityList) };


    // searchPrice Field Functions 
    bool hasSearchPrice() const { return this->searchPrice_ != nullptr;};
    void deleteSearchPrice() { this->searchPrice_ = nullptr;};
    inline const ModuleFlightItemListBestPriceItemShoppingItemMapValue::SearchPrice & getSearchPrice() const { DARABONBA_PTR_GET_CONST(searchPrice_, ModuleFlightItemListBestPriceItemShoppingItemMapValue::SearchPrice) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue::SearchPrice getSearchPrice() { DARABONBA_PTR_GET(searchPrice_, ModuleFlightItemListBestPriceItemShoppingItemMapValue::SearchPrice) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setSearchPrice(const ModuleFlightItemListBestPriceItemShoppingItemMapValue::SearchPrice & searchPrice) { DARABONBA_PTR_SET_VALUE(searchPrice_, searchPrice) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setSearchPrice(ModuleFlightItemListBestPriceItemShoppingItemMapValue::SearchPrice && searchPrice) { DARABONBA_PTR_SET_RVALUE(searchPrice_, searchPrice) };


    // segmentPriceList Field Functions 
    bool hasSegmentPriceList() const { return this->segmentPriceList_ != nullptr;};
    void deleteSegmentPriceList() { this->segmentPriceList_ = nullptr;};
    inline const vector<ModuleFlightItemListBestPriceItemShoppingItemMapValue::SegmentPriceList> & getSegmentPriceList() const { DARABONBA_PTR_GET_CONST(segmentPriceList_, vector<ModuleFlightItemListBestPriceItemShoppingItemMapValue::SegmentPriceList>) };
    inline vector<ModuleFlightItemListBestPriceItemShoppingItemMapValue::SegmentPriceList> getSegmentPriceList() { DARABONBA_PTR_GET(segmentPriceList_, vector<ModuleFlightItemListBestPriceItemShoppingItemMapValue::SegmentPriceList>) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setSegmentPriceList(const vector<ModuleFlightItemListBestPriceItemShoppingItemMapValue::SegmentPriceList> & segmentPriceList) { DARABONBA_PTR_SET_VALUE(segmentPriceList_, segmentPriceList) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setSegmentPriceList(vector<ModuleFlightItemListBestPriceItemShoppingItemMapValue::SegmentPriceList> && segmentPriceList) { DARABONBA_PTR_SET_RVALUE(segmentPriceList_, segmentPriceList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // cabinQuantity Field Functions 
    bool hasCabinQuantity() const { return this->cabinQuantity_ != nullptr;};
    void deleteCabinQuantity() { this->cabinQuantity_ = nullptr;};
    inline const map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityValue> & getCabinQuantity() const { DARABONBA_PTR_GET_CONST(cabinQuantity_, map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityValue>) };
    inline map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityValue> getCabinQuantity() { DARABONBA_PTR_GET(cabinQuantity_, map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityValue>) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setCabinQuantity(const map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityValue> & cabinQuantity) { DARABONBA_PTR_SET_VALUE(cabinQuantity_, cabinQuantity) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setCabinQuantity(map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityValue> && cabinQuantity) { DARABONBA_PTR_SET_RVALUE(cabinQuantity_, cabinQuantity) };


    // segmentPrice Field Functions 
    bool hasSegmentPrice() const { return this->segmentPrice_ != nullptr;};
    void deleteSegmentPrice() { this->segmentPrice_ = nullptr;};
    inline const map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceValue> & getSegmentPrice() const { DARABONBA_PTR_GET_CONST(segmentPrice_, map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceValue>) };
    inline map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceValue> getSegmentPrice() { DARABONBA_PTR_GET(segmentPrice_, map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceValue>) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setSegmentPrice(const map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceValue> & segmentPrice) { DARABONBA_PTR_SET_VALUE(segmentPrice_, segmentPrice) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValue& setSegmentPrice(map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceValue> && segmentPrice) { DARABONBA_PTR_SET_RVALUE(segmentPrice_, segmentPrice) };


  protected:
    shared_ptr<vector<ModuleFlightItemListBestPriceItemShoppingItemMapValue::CabinQuantityList>> cabinQuantityList_ {};
    shared_ptr<ModuleFlightItemListBestPriceItemShoppingItemMapValue::SearchPrice> searchPrice_ {};
    shared_ptr<vector<ModuleFlightItemListBestPriceItemShoppingItemMapValue::SegmentPriceList>> segmentPriceList_ {};
    shared_ptr<string> id_ {};
    shared_ptr<map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueCabinQuantityValue>> cabinQuantity_ {};
    shared_ptr<map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceValue>> segmentPrice_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
