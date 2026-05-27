// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMBILLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUMBILLSRESPONSEBODY_HPP_
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
  class SumBillsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SumBillsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SumBillsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    SumBillsResponseBody() = default ;
    SumBillsResponseBody(const SumBillsResponseBody &) = default ;
    SumBillsResponseBody(SumBillsResponseBody &&) = default ;
    SumBillsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SumBillsResponseBody() = default ;
    SumBillsResponseBody& operator=(const SumBillsResponseBody &) = default ;
    SumBillsResponseBody& operator=(SumBillsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(currency, currency_);
        DARABONBA_PTR_TO_JSON(itemBills, itemBills_);
        DARABONBA_PTR_TO_JSON(totalCost, totalCost_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(currency, currency_);
        DARABONBA_PTR_FROM_JSON(itemBills, itemBills_);
        DARABONBA_PTR_FROM_JSON(totalCost, totalCost_);
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

      virtual bool empty() const override { return this->currency_ == nullptr
        && this->itemBills_ == nullptr && this->totalCost_ == nullptr; };
      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Data& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // itemBills Field Functions 
      bool hasItemBills() const { return this->itemBills_ != nullptr;};
      void deleteItemBills() { this->itemBills_ = nullptr;};
      inline const vector<Data::ItemBills> & getItemBills() const { DARABONBA_PTR_GET_CONST(itemBills_, vector<Data::ItemBills>) };
      inline vector<Data::ItemBills> getItemBills() { DARABONBA_PTR_GET(itemBills_, vector<Data::ItemBills>) };
      inline Data& setItemBills(const vector<Data::ItemBills> & itemBills) { DARABONBA_PTR_SET_VALUE(itemBills_, itemBills) };
      inline Data& setItemBills(vector<Data::ItemBills> && itemBills) { DARABONBA_PTR_SET_RVALUE(itemBills_, itemBills) };


      // totalCost Field Functions 
      bool hasTotalCost() const { return this->totalCost_ != nullptr;};
      void deleteTotalCost() { this->totalCost_ = nullptr;};
      inline string getTotalCost() const { DARABONBA_PTR_GET_DEFAULT(totalCost_, "") };
      inline Data& setTotalCost(string totalCost) { DARABONBA_PTR_SET_VALUE(totalCost_, totalCost) };


    protected:
      shared_ptr<string> currency_ {};
      shared_ptr<vector<Data::ItemBills>> itemBills_ {};
      shared_ptr<string> totalCost_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SumBillsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SumBillsResponseBody::Data) };
    inline SumBillsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SumBillsResponseBody::Data) };
    inline SumBillsResponseBody& setData(const SumBillsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SumBillsResponseBody& setData(SumBillsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline SumBillsResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SumBillsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<SumBillsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
