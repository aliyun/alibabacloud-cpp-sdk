// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAMOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAMOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class QueryAmountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAmountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(retryAble, retryAble_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAmountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(retryAble, retryAble_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    QueryAmountResponseBody() = default ;
    QueryAmountResponseBody(const QueryAmountResponseBody &) = default ;
    QueryAmountResponseBody(QueryAmountResponseBody &&) = default ;
    QueryAmountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAmountResponseBody() = default ;
    QueryAmountResponseBody& operator=(const QueryAmountResponseBody &) = default ;
    QueryAmountResponseBody& operator=(QueryAmountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(endDate, endDate_);
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(scopeNote, scopeNote_);
        DARABONBA_PTR_TO_JSON(startDate, startDate_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(endDate, endDate_);
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(scopeNote, scopeNote_);
        DARABONBA_PTR_FROM_JSON(startDate, startDate_);
        DARABONBA_PTR_FROM_JSON(total, total_);
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
      class Total : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Total& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(listFee, listFee_);
          DARABONBA_PTR_TO_JSON(totalAmount, totalAmount_);
        };
        friend void from_json(const Darabonba::Json& j, Total& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(listFee, listFee_);
          DARABONBA_PTR_FROM_JSON(totalAmount, totalAmount_);
        };
        Total() = default ;
        Total(const Total &) = default ;
        Total(Total &&) = default ;
        Total(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Total() = default ;
        Total& operator=(const Total &) = default ;
        Total& operator=(Total &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->listFee_ == nullptr && this->totalAmount_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
        inline Total& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // listFee Field Functions 
        bool hasListFee() const { return this->listFee_ != nullptr;};
        void deleteListFee() { this->listFee_ = nullptr;};
        inline string getListFee() const { DARABONBA_PTR_GET_DEFAULT(listFee_, "") };
        inline Total& setListFee(string listFee) { DARABONBA_PTR_SET_VALUE(listFee_, listFee) };


        // totalAmount Field Functions 
        bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
        void deleteTotalAmount() { this->totalAmount_ = nullptr;};
        inline string getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, "") };
        inline Total& setTotalAmount(string totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


      protected:
        shared_ptr<string> amount_ {};
        shared_ptr<string> listFee_ {};
        shared_ptr<string> totalAmount_ {};
      };

      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(aliyunUid, aliyunUid_);
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(amountRatio, amountRatio_);
          DARABONBA_PTR_TO_JSON(listFee, listFee_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(tier, tier_);
          DARABONBA_PTR_TO_JSON(totalAmount, totalAmount_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(aliyunUid, aliyunUid_);
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(amountRatio, amountRatio_);
          DARABONBA_PTR_FROM_JSON(listFee, listFee_);
          DARABONBA_PTR_FROM_JSON(price, price_);
          DARABONBA_PTR_FROM_JSON(tier, tier_);
          DARABONBA_PTR_FROM_JSON(totalAmount, totalAmount_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->amount_ == nullptr && this->amountRatio_ == nullptr && this->listFee_ == nullptr && this->price_ == nullptr && this->tier_ == nullptr
        && this->totalAmount_ == nullptr; };
        // aliyunUid Field Functions 
        bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
        void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
        inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
        inline Items& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
        inline Items& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // amountRatio Field Functions 
        bool hasAmountRatio() const { return this->amountRatio_ != nullptr;};
        void deleteAmountRatio() { this->amountRatio_ = nullptr;};
        inline string getAmountRatio() const { DARABONBA_PTR_GET_DEFAULT(amountRatio_, "") };
        inline Items& setAmountRatio(string amountRatio) { DARABONBA_PTR_SET_VALUE(amountRatio_, amountRatio) };


        // listFee Field Functions 
        bool hasListFee() const { return this->listFee_ != nullptr;};
        void deleteListFee() { this->listFee_ = nullptr;};
        inline string getListFee() const { DARABONBA_PTR_GET_DEFAULT(listFee_, "") };
        inline Items& setListFee(string listFee) { DARABONBA_PTR_SET_VALUE(listFee_, listFee) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline string getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
        inline Items& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // tier Field Functions 
        bool hasTier() const { return this->tier_ != nullptr;};
        void deleteTier() { this->tier_ = nullptr;};
        inline string getTier() const { DARABONBA_PTR_GET_DEFAULT(tier_, "") };
        inline Items& setTier(string tier) { DARABONBA_PTR_SET_VALUE(tier_, tier) };


        // totalAmount Field Functions 
        bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
        void deleteTotalAmount() { this->totalAmount_ = nullptr;};
        inline string getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, "") };
        inline Items& setTotalAmount(string totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


      protected:
        shared_ptr<string> aliyunUid_ {};
        shared_ptr<string> amount_ {};
        shared_ptr<string> amountRatio_ {};
        shared_ptr<string> listFee_ {};
        shared_ptr<string> price_ {};
        shared_ptr<string> tier_ {};
        shared_ptr<string> totalAmount_ {};
      };

      virtual bool empty() const override { return this->endDate_ == nullptr
        && this->items_ == nullptr && this->scopeNote_ == nullptr && this->startDate_ == nullptr && this->total_ == nullptr; };
      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline Data& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // scopeNote Field Functions 
      bool hasScopeNote() const { return this->scopeNote_ != nullptr;};
      void deleteScopeNote() { this->scopeNote_ = nullptr;};
      inline string getScopeNote() const { DARABONBA_PTR_GET_DEFAULT(scopeNote_, "") };
      inline Data& setScopeNote(string scopeNote) { DARABONBA_PTR_SET_VALUE(scopeNote_, scopeNote) };


      // startDate Field Functions 
      bool hasStartDate() const { return this->startDate_ != nullptr;};
      void deleteStartDate() { this->startDate_ = nullptr;};
      inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
      inline Data& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline const Data::Total & getTotal() const { DARABONBA_PTR_GET_CONST(total_, Data::Total) };
      inline Data::Total getTotal() { DARABONBA_PTR_GET(total_, Data::Total) };
      inline Data& setTotal(const Data::Total & total) { DARABONBA_PTR_SET_VALUE(total_, total) };
      inline Data& setTotal(Data::Total && total) { DARABONBA_PTR_SET_RVALUE(total_, total) };


    protected:
      shared_ptr<string> endDate_ {};
      shared_ptr<vector<Data::Items>> items_ {};
      shared_ptr<string> scopeNote_ {};
      shared_ptr<string> startDate_ {};
      shared_ptr<Data::Total> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->retryAble_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAmountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryAmountResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryAmountResponseBody::Data) };
    inline QueryAmountResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryAmountResponseBody::Data) };
    inline QueryAmountResponseBody& setData(const QueryAmountResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAmountResponseBody& setData(QueryAmountResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAmountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // retryAble Field Functions 
    bool hasRetryAble() const { return this->retryAble_ != nullptr;};
    void deleteRetryAble() { this->retryAble_ = nullptr;};
    inline bool getRetryAble() const { DARABONBA_PTR_GET_DEFAULT(retryAble_, false) };
    inline QueryAmountResponseBody& setRetryAble(bool retryAble) { DARABONBA_PTR_SET_VALUE(retryAble_, retryAble) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAmountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryAmountResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<bool> retryAble_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
