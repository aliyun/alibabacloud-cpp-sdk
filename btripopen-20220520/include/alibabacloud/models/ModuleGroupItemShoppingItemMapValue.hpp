// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEGROUPITEMSHOPPINGITEMMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEGROUPITEMSHOPPINGITEMMAPVALUE_HPP_
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
  class ModuleGroupItemShoppingItemMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleGroupItemShoppingItemMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(cabin_quantity_list, cabinQuantityList_);
      DARABONBA_PTR_TO_JSON(search_price, searchPrice_);
      DARABONBA_PTR_TO_JSON(segment_price_list, segmentPriceList_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleGroupItemShoppingItemMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin_quantity_list, cabinQuantityList_);
      DARABONBA_PTR_FROM_JSON(search_price, searchPrice_);
      DARABONBA_PTR_FROM_JSON(segment_price_list, segmentPriceList_);
    };
    ModuleGroupItemShoppingItemMapValue() = default ;
    ModuleGroupItemShoppingItemMapValue(const ModuleGroupItemShoppingItemMapValue &) = default ;
    ModuleGroupItemShoppingItemMapValue(ModuleGroupItemShoppingItemMapValue &&) = default ;
    ModuleGroupItemShoppingItemMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleGroupItemShoppingItemMapValue() = default ;
    ModuleGroupItemShoppingItemMapValue& operator=(const ModuleGroupItemShoppingItemMapValue &) = default ;
    ModuleGroupItemShoppingItemMapValue& operator=(ModuleGroupItemShoppingItemMapValue &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
          DARABONBA_PTR_TO_JSON(sell_price, sellPrice_);
          DARABONBA_PTR_TO_JSON(tax, tax_);
        };
        friend void from_json(const Darabonba::Json& j, SearchPrice& obj) { 
          DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
          DARABONBA_PTR_FROM_JSON(sell_price, sellPrice_);
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
        virtual bool empty() const override { return this->ticketPrice_ == nullptr
        && this->sellPrice_ == nullptr && this->tax_ == nullptr; };
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


        // tax Field Functions 
        bool hasTax() const { return this->tax_ != nullptr;};
        void deleteTax() { this->tax_ = nullptr;};
        inline int32_t getTax() const { DARABONBA_PTR_GET_DEFAULT(tax_, 0) };
        inline SearchPrice& setTax(int32_t tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


      protected:
        shared_ptr<int32_t> ticketPrice_ {};
        shared_ptr<int32_t> sellPrice_ {};
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
        DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
        DARABONBA_PTR_TO_JSON(sell_price, sellPrice_);
        DARABONBA_PTR_TO_JSON(tax, tax_);
      };
      friend void from_json(const Darabonba::Json& j, SearchPrice& obj) { 
        DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
        DARABONBA_PTR_FROM_JSON(sell_price, sellPrice_);
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
      virtual bool empty() const override { return this->ticketPrice_ == nullptr
        && this->sellPrice_ == nullptr && this->tax_ == nullptr; };
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


      // tax Field Functions 
      bool hasTax() const { return this->tax_ != nullptr;};
      void deleteTax() { this->tax_ = nullptr;};
      inline int32_t getTax() const { DARABONBA_PTR_GET_DEFAULT(tax_, 0) };
      inline SearchPrice& setTax(int32_t tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


    protected:
      shared_ptr<int32_t> ticketPrice_ {};
      shared_ptr<int32_t> sellPrice_ {};
      shared_ptr<int32_t> tax_ {};
    };

    class CabinQuantityList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CabinQuantityList& obj) { 
        DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
        DARABONBA_PTR_TO_JSON(cabin, cabin_);
      };
      friend void from_json(const Darabonba::Json& j, CabinQuantityList& obj) { 
        DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
        DARABONBA_PTR_FROM_JSON(cabin, cabin_);
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
      class Cabin : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Cabin& obj) { 
          DARABONBA_PTR_TO_JSON(cabin, cabin_);
          DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_TO_JSON(cabin_class_name, cabinClassName_);
          DARABONBA_PTR_TO_JSON(quantity, quantity_);
        };
        friend void from_json(const Darabonba::Json& j, Cabin& obj) { 
          DARABONBA_PTR_FROM_JSON(cabin, cabin_);
          DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_FROM_JSON(cabin_class_name, cabinClassName_);
          DARABONBA_PTR_FROM_JSON(quantity, quantity_);
        };
        Cabin() = default ;
        Cabin(const Cabin &) = default ;
        Cabin(Cabin &&) = default ;
        Cabin(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Cabin() = default ;
        Cabin& operator=(const Cabin &) = default ;
        Cabin& operator=(Cabin &&) = default ;
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
        inline Cabin& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


        // cabinClass Field Functions 
        bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
        void deleteCabinClass() { this->cabinClass_ = nullptr;};
        inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
        inline Cabin& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


        // cabinClassName Field Functions 
        bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
        void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
        inline string getCabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
        inline Cabin& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


        // quantity Field Functions 
        bool hasQuantity() const { return this->quantity_ != nullptr;};
        void deleteQuantity() { this->quantity_ = nullptr;};
        inline string getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
        inline Cabin& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


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
        && this->cabin_ == nullptr; };
      // segmentPosition Field Functions 
      bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
      void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
      inline const CabinQuantityList::SegmentPosition & getSegmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, CabinQuantityList::SegmentPosition) };
      inline CabinQuantityList::SegmentPosition getSegmentPosition() { DARABONBA_PTR_GET(segmentPosition_, CabinQuantityList::SegmentPosition) };
      inline CabinQuantityList& setSegmentPosition(const CabinQuantityList::SegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
      inline CabinQuantityList& setSegmentPosition(CabinQuantityList::SegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


      // cabin Field Functions 
      bool hasCabin() const { return this->cabin_ != nullptr;};
      void deleteCabin() { this->cabin_ = nullptr;};
      inline const CabinQuantityList::Cabin & getCabin() const { DARABONBA_PTR_GET_CONST(cabin_, CabinQuantityList::Cabin) };
      inline CabinQuantityList::Cabin getCabin() { DARABONBA_PTR_GET(cabin_, CabinQuantityList::Cabin) };
      inline CabinQuantityList& setCabin(const CabinQuantityList::Cabin & cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };
      inline CabinQuantityList& setCabin(CabinQuantityList::Cabin && cabin) { DARABONBA_PTR_SET_RVALUE(cabin_, cabin) };


    protected:
      shared_ptr<CabinQuantityList::SegmentPosition> segmentPosition_ {};
      shared_ptr<CabinQuantityList::Cabin> cabin_ {};
    };

    virtual bool empty() const override { return this->cabinQuantityList_ == nullptr
        && this->searchPrice_ == nullptr && this->segmentPriceList_ == nullptr; };
    // cabinQuantityList Field Functions 
    bool hasCabinQuantityList() const { return this->cabinQuantityList_ != nullptr;};
    void deleteCabinQuantityList() { this->cabinQuantityList_ = nullptr;};
    inline const vector<ModuleGroupItemShoppingItemMapValue::CabinQuantityList> & getCabinQuantityList() const { DARABONBA_PTR_GET_CONST(cabinQuantityList_, vector<ModuleGroupItemShoppingItemMapValue::CabinQuantityList>) };
    inline vector<ModuleGroupItemShoppingItemMapValue::CabinQuantityList> getCabinQuantityList() { DARABONBA_PTR_GET(cabinQuantityList_, vector<ModuleGroupItemShoppingItemMapValue::CabinQuantityList>) };
    inline ModuleGroupItemShoppingItemMapValue& setCabinQuantityList(const vector<ModuleGroupItemShoppingItemMapValue::CabinQuantityList> & cabinQuantityList) { DARABONBA_PTR_SET_VALUE(cabinQuantityList_, cabinQuantityList) };
    inline ModuleGroupItemShoppingItemMapValue& setCabinQuantityList(vector<ModuleGroupItemShoppingItemMapValue::CabinQuantityList> && cabinQuantityList) { DARABONBA_PTR_SET_RVALUE(cabinQuantityList_, cabinQuantityList) };


    // searchPrice Field Functions 
    bool hasSearchPrice() const { return this->searchPrice_ != nullptr;};
    void deleteSearchPrice() { this->searchPrice_ = nullptr;};
    inline const ModuleGroupItemShoppingItemMapValue::SearchPrice & getSearchPrice() const { DARABONBA_PTR_GET_CONST(searchPrice_, ModuleGroupItemShoppingItemMapValue::SearchPrice) };
    inline ModuleGroupItemShoppingItemMapValue::SearchPrice getSearchPrice() { DARABONBA_PTR_GET(searchPrice_, ModuleGroupItemShoppingItemMapValue::SearchPrice) };
    inline ModuleGroupItemShoppingItemMapValue& setSearchPrice(const ModuleGroupItemShoppingItemMapValue::SearchPrice & searchPrice) { DARABONBA_PTR_SET_VALUE(searchPrice_, searchPrice) };
    inline ModuleGroupItemShoppingItemMapValue& setSearchPrice(ModuleGroupItemShoppingItemMapValue::SearchPrice && searchPrice) { DARABONBA_PTR_SET_RVALUE(searchPrice_, searchPrice) };


    // segmentPriceList Field Functions 
    bool hasSegmentPriceList() const { return this->segmentPriceList_ != nullptr;};
    void deleteSegmentPriceList() { this->segmentPriceList_ = nullptr;};
    inline const vector<ModuleGroupItemShoppingItemMapValue::SegmentPriceList> & getSegmentPriceList() const { DARABONBA_PTR_GET_CONST(segmentPriceList_, vector<ModuleGroupItemShoppingItemMapValue::SegmentPriceList>) };
    inline vector<ModuleGroupItemShoppingItemMapValue::SegmentPriceList> getSegmentPriceList() { DARABONBA_PTR_GET(segmentPriceList_, vector<ModuleGroupItemShoppingItemMapValue::SegmentPriceList>) };
    inline ModuleGroupItemShoppingItemMapValue& setSegmentPriceList(const vector<ModuleGroupItemShoppingItemMapValue::SegmentPriceList> & segmentPriceList) { DARABONBA_PTR_SET_VALUE(segmentPriceList_, segmentPriceList) };
    inline ModuleGroupItemShoppingItemMapValue& setSegmentPriceList(vector<ModuleGroupItemShoppingItemMapValue::SegmentPriceList> && segmentPriceList) { DARABONBA_PTR_SET_RVALUE(segmentPriceList_, segmentPriceList) };


  protected:
    shared_ptr<vector<ModuleGroupItemShoppingItemMapValue::CabinQuantityList>> cabinQuantityList_ {};
    shared_ptr<ModuleGroupItemShoppingItemMapValue::SearchPrice> searchPrice_ {};
    shared_ptr<vector<ModuleGroupItemShoppingItemMapValue::SegmentPriceList>> segmentPriceList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
