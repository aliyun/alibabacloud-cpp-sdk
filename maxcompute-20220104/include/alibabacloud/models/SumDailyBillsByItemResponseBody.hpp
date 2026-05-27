// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMDAILYBILLSBYITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUMDAILYBILLSBYITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class SumDailyBillsByItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SumDailyBillsByItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SumDailyBillsByItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    SumDailyBillsByItemResponseBody() = default ;
    SumDailyBillsByItemResponseBody(const SumDailyBillsByItemResponseBody &) = default ;
    SumDailyBillsByItemResponseBody(SumDailyBillsByItemResponseBody &&) = default ;
    SumDailyBillsByItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SumDailyBillsByItemResponseBody() = default ;
    SumDailyBillsByItemResponseBody& operator=(const SumDailyBillsByItemResponseBody &) = default ;
    SumDailyBillsByItemResponseBody& operator=(SumDailyBillsByItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(itemSummaryBills, itemSummaryBills_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(itemSummaryBills, itemSummaryBills_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ItemSummaryBills : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItemSummaryBills& obj) { 
          DARABONBA_PTR_TO_JSON(currency, currency_);
          DARABONBA_PTR_TO_JSON(dailySumBills, dailySumBills_);
          DARABONBA_PTR_TO_JSON(itemName, itemName_);
          DARABONBA_PTR_TO_JSON(percentage, percentage_);
          DARABONBA_PTR_TO_JSON(specCode, specCode_);
          DARABONBA_PTR_TO_JSON(totalCost, totalCost_);
        };
        friend void from_json(const Darabonba::Json& j, ItemSummaryBills& obj) { 
          DARABONBA_PTR_FROM_JSON(currency, currency_);
          DARABONBA_PTR_FROM_JSON(dailySumBills, dailySumBills_);
          DARABONBA_PTR_FROM_JSON(itemName, itemName_);
          DARABONBA_PTR_FROM_JSON(percentage, percentage_);
          DARABONBA_PTR_FROM_JSON(specCode, specCode_);
          DARABONBA_PTR_FROM_JSON(totalCost, totalCost_);
        };
        ItemSummaryBills() = default ;
        ItemSummaryBills(const ItemSummaryBills &) = default ;
        ItemSummaryBills(ItemSummaryBills &&) = default ;
        ItemSummaryBills(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ItemSummaryBills() = default ;
        ItemSummaryBills& operator=(const ItemSummaryBills &) = default ;
        ItemSummaryBills& operator=(ItemSummaryBills &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DailySumBills : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DailySumBills& obj) { 
            DARABONBA_PTR_TO_JSON(cost, cost_);
            DARABONBA_PTR_TO_JSON(currency, currency_);
            DARABONBA_PTR_TO_JSON(dateTime, dateTime_);
            DARABONBA_PTR_TO_JSON(itemBills, itemBills_);
          };
          friend void from_json(const Darabonba::Json& j, DailySumBills& obj) { 
            DARABONBA_PTR_FROM_JSON(cost, cost_);
            DARABONBA_PTR_FROM_JSON(currency, currency_);
            DARABONBA_PTR_FROM_JSON(dateTime, dateTime_);
            DARABONBA_PTR_FROM_JSON(itemBills, itemBills_);
          };
          DailySumBills() = default ;
          DailySumBills(const DailySumBills &) = default ;
          DailySumBills(DailySumBills &&) = default ;
          DailySumBills(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DailySumBills() = default ;
          DailySumBills& operator=(const DailySumBills &) = default ;
          DailySumBills& operator=(DailySumBills &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ItemBills : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ItemBills& obj) { 
              DARABONBA_PTR_TO_JSON(cost, cost_);
              DARABONBA_PTR_TO_JSON(currency, currency_);
              DARABONBA_PTR_TO_JSON(itemName, itemName_);
              DARABONBA_PTR_TO_JSON(percentage, percentage_);
            };
            friend void from_json(const Darabonba::Json& j, ItemBills& obj) { 
              DARABONBA_PTR_FROM_JSON(cost, cost_);
              DARABONBA_PTR_FROM_JSON(currency, currency_);
              DARABONBA_PTR_FROM_JSON(itemName, itemName_);
              DARABONBA_PTR_FROM_JSON(percentage, percentage_);
            };
            ItemBills() = default ;
            ItemBills(const ItemBills &) = default ;
            ItemBills(ItemBills &&) = default ;
            ItemBills(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ItemBills() = default ;
            ItemBills& operator=(const ItemBills &) = default ;
            ItemBills& operator=(ItemBills &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->cost_ == nullptr
        && this->currency_ == nullptr && this->itemName_ == nullptr && this->percentage_ == nullptr; };
            // cost Field Functions 
            bool hasCost() const { return this->cost_ != nullptr;};
            void deleteCost() { this->cost_ = nullptr;};
            inline string getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, "") };
            inline ItemBills& setCost(string cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


            // currency Field Functions 
            bool hasCurrency() const { return this->currency_ != nullptr;};
            void deleteCurrency() { this->currency_ = nullptr;};
            inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
            inline ItemBills& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


            // itemName Field Functions 
            bool hasItemName() const { return this->itemName_ != nullptr;};
            void deleteItemName() { this->itemName_ = nullptr;};
            inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
            inline ItemBills& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


            // percentage Field Functions 
            bool hasPercentage() const { return this->percentage_ != nullptr;};
            void deletePercentage() { this->percentage_ = nullptr;};
            inline double getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0.0) };
            inline ItemBills& setPercentage(double percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


          protected:
            shared_ptr<string> cost_ {};
            shared_ptr<string> currency_ {};
            shared_ptr<string> itemName_ {};
            shared_ptr<double> percentage_ {};
          };

          virtual bool empty() const override { return this->cost_ == nullptr
        && this->currency_ == nullptr && this->dateTime_ == nullptr && this->itemBills_ == nullptr; };
          // cost Field Functions 
          bool hasCost() const { return this->cost_ != nullptr;};
          void deleteCost() { this->cost_ = nullptr;};
          inline string getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, "") };
          inline DailySumBills& setCost(string cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


          // currency Field Functions 
          bool hasCurrency() const { return this->currency_ != nullptr;};
          void deleteCurrency() { this->currency_ = nullptr;};
          inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
          inline DailySumBills& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


          // dateTime Field Functions 
          bool hasDateTime() const { return this->dateTime_ != nullptr;};
          void deleteDateTime() { this->dateTime_ = nullptr;};
          inline string getDateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
          inline DailySumBills& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


          // itemBills Field Functions 
          bool hasItemBills() const { return this->itemBills_ != nullptr;};
          void deleteItemBills() { this->itemBills_ = nullptr;};
          inline const vector<DailySumBills::ItemBills> & getItemBills() const { DARABONBA_PTR_GET_CONST(itemBills_, vector<DailySumBills::ItemBills>) };
          inline vector<DailySumBills::ItemBills> getItemBills() { DARABONBA_PTR_GET(itemBills_, vector<DailySumBills::ItemBills>) };
          inline DailySumBills& setItemBills(const vector<DailySumBills::ItemBills> & itemBills) { DARABONBA_PTR_SET_VALUE(itemBills_, itemBills) };
          inline DailySumBills& setItemBills(vector<DailySumBills::ItemBills> && itemBills) { DARABONBA_PTR_SET_RVALUE(itemBills_, itemBills) };


        protected:
          shared_ptr<string> cost_ {};
          shared_ptr<string> currency_ {};
          shared_ptr<string> dateTime_ {};
          shared_ptr<vector<DailySumBills::ItemBills>> itemBills_ {};
        };

        virtual bool empty() const override { return this->currency_ == nullptr
        && this->dailySumBills_ == nullptr && this->itemName_ == nullptr && this->percentage_ == nullptr && this->specCode_ == nullptr && this->totalCost_ == nullptr; };
        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline ItemSummaryBills& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // dailySumBills Field Functions 
        bool hasDailySumBills() const { return this->dailySumBills_ != nullptr;};
        void deleteDailySumBills() { this->dailySumBills_ = nullptr;};
        inline const vector<ItemSummaryBills::DailySumBills> & getDailySumBills() const { DARABONBA_PTR_GET_CONST(dailySumBills_, vector<ItemSummaryBills::DailySumBills>) };
        inline vector<ItemSummaryBills::DailySumBills> getDailySumBills() { DARABONBA_PTR_GET(dailySumBills_, vector<ItemSummaryBills::DailySumBills>) };
        inline ItemSummaryBills& setDailySumBills(const vector<ItemSummaryBills::DailySumBills> & dailySumBills) { DARABONBA_PTR_SET_VALUE(dailySumBills_, dailySumBills) };
        inline ItemSummaryBills& setDailySumBills(vector<ItemSummaryBills::DailySumBills> && dailySumBills) { DARABONBA_PTR_SET_RVALUE(dailySumBills_, dailySumBills) };


        // itemName Field Functions 
        bool hasItemName() const { return this->itemName_ != nullptr;};
        void deleteItemName() { this->itemName_ = nullptr;};
        inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
        inline ItemSummaryBills& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


        // percentage Field Functions 
        bool hasPercentage() const { return this->percentage_ != nullptr;};
        void deletePercentage() { this->percentage_ = nullptr;};
        inline double getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0.0) };
        inline ItemSummaryBills& setPercentage(double percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


        // specCode Field Functions 
        bool hasSpecCode() const { return this->specCode_ != nullptr;};
        void deleteSpecCode() { this->specCode_ = nullptr;};
        inline string getSpecCode() const { DARABONBA_PTR_GET_DEFAULT(specCode_, "") };
        inline ItemSummaryBills& setSpecCode(string specCode) { DARABONBA_PTR_SET_VALUE(specCode_, specCode) };


        // totalCost Field Functions 
        bool hasTotalCost() const { return this->totalCost_ != nullptr;};
        void deleteTotalCost() { this->totalCost_ = nullptr;};
        inline string getTotalCost() const { DARABONBA_PTR_GET_DEFAULT(totalCost_, "") };
        inline ItemSummaryBills& setTotalCost(string totalCost) { DARABONBA_PTR_SET_VALUE(totalCost_, totalCost) };


      protected:
        shared_ptr<string> currency_ {};
        shared_ptr<vector<ItemSummaryBills::DailySumBills>> dailySumBills_ {};
        shared_ptr<string> itemName_ {};
        shared_ptr<double> percentage_ {};
        shared_ptr<string> specCode_ {};
        shared_ptr<string> totalCost_ {};
      };

      virtual bool empty() const override { return this->itemSummaryBills_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // itemSummaryBills Field Functions 
      bool hasItemSummaryBills() const { return this->itemSummaryBills_ != nullptr;};
      void deleteItemSummaryBills() { this->itemSummaryBills_ = nullptr;};
      inline const vector<Data::ItemSummaryBills> & getItemSummaryBills() const { DARABONBA_PTR_GET_CONST(itemSummaryBills_, vector<Data::ItemSummaryBills>) };
      inline vector<Data::ItemSummaryBills> getItemSummaryBills() { DARABONBA_PTR_GET(itemSummaryBills_, vector<Data::ItemSummaryBills>) };
      inline Data& setItemSummaryBills(const vector<Data::ItemSummaryBills> & itemSummaryBills) { DARABONBA_PTR_SET_VALUE(itemSummaryBills_, itemSummaryBills) };
      inline Data& setItemSummaryBills(vector<Data::ItemSummaryBills> && itemSummaryBills) { DARABONBA_PTR_SET_RVALUE(itemSummaryBills_, itemSummaryBills) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::ItemSummaryBills>> itemSummaryBills_ {};
      shared_ptr<int64_t> pageNumber_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SumDailyBillsByItemResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SumDailyBillsByItemResponseBody::Data) };
    inline SumDailyBillsByItemResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SumDailyBillsByItemResponseBody::Data) };
    inline SumDailyBillsByItemResponseBody& setData(const SumDailyBillsByItemResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SumDailyBillsByItemResponseBody& setData(SumDailyBillsByItemResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline SumDailyBillsByItemResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SumDailyBillsByItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<SumDailyBillsByItemResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
