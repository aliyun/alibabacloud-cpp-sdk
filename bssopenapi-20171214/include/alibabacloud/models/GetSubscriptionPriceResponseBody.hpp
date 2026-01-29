// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetSubscriptionPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSubscriptionPriceResponseBody() = default ;
    GetSubscriptionPriceResponseBody(const GetSubscriptionPriceResponseBody &) = default ;
    GetSubscriptionPriceResponseBody(GetSubscriptionPriceResponseBody &&) = default ;
    GetSubscriptionPriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionPriceResponseBody() = default ;
    GetSubscriptionPriceResponseBody& operator=(const GetSubscriptionPriceResponseBody &) = default ;
    GetSubscriptionPriceResponseBody& operator=(GetSubscriptionPriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
        DARABONBA_PTR_TO_JSON(ModuleDetails, moduleDetails_);
        DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
        DARABONBA_PTR_TO_JSON(PromotionDetails, promotionDetails_);
        DARABONBA_PTR_TO_JSON(Quantity, quantity_);
        DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
        DARABONBA_PTR_FROM_JSON(ModuleDetails, moduleDetails_);
        DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
        DARABONBA_PTR_FROM_JSON(PromotionDetails, promotionDetails_);
        DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
        DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
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
      class PromotionDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PromotionDetails& obj) { 
          DARABONBA_PTR_TO_JSON(PromotionDetail, promotionDetail_);
        };
        friend void from_json(const Darabonba::Json& j, PromotionDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(PromotionDetail, promotionDetail_);
        };
        PromotionDetails() = default ;
        PromotionDetails(const PromotionDetails &) = default ;
        PromotionDetails(PromotionDetails &&) = default ;
        PromotionDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PromotionDetails() = default ;
        PromotionDetails& operator=(const PromotionDetails &) = default ;
        PromotionDetails& operator=(PromotionDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PromotionDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PromotionDetail& obj) { 
            DARABONBA_PTR_TO_JSON(PromotionDesc, promotionDesc_);
            DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
            DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
          };
          friend void from_json(const Darabonba::Json& j, PromotionDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(PromotionDesc, promotionDesc_);
            DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
            DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
          };
          PromotionDetail() = default ;
          PromotionDetail(const PromotionDetail &) = default ;
          PromotionDetail(PromotionDetail &&) = default ;
          PromotionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PromotionDetail() = default ;
          PromotionDetail& operator=(const PromotionDetail &) = default ;
          PromotionDetail& operator=(PromotionDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->promotionDesc_ == nullptr
        && this->promotionId_ == nullptr && this->promotionName_ == nullptr; };
          // promotionDesc Field Functions 
          bool hasPromotionDesc() const { return this->promotionDesc_ != nullptr;};
          void deletePromotionDesc() { this->promotionDesc_ = nullptr;};
          inline string getPromotionDesc() const { DARABONBA_PTR_GET_DEFAULT(promotionDesc_, "") };
          inline PromotionDetail& setPromotionDesc(string promotionDesc) { DARABONBA_PTR_SET_VALUE(promotionDesc_, promotionDesc) };


          // promotionId Field Functions 
          bool hasPromotionId() const { return this->promotionId_ != nullptr;};
          void deletePromotionId() { this->promotionId_ = nullptr;};
          inline int64_t getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, 0L) };
          inline PromotionDetail& setPromotionId(int64_t promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


          // promotionName Field Functions 
          bool hasPromotionName() const { return this->promotionName_ != nullptr;};
          void deletePromotionName() { this->promotionName_ = nullptr;};
          inline string getPromotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
          inline PromotionDetail& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


        protected:
          // The description of the discount.
          shared_ptr<string> promotionDesc_ {};
          // The ID of the discount.
          shared_ptr<int64_t> promotionId_ {};
          // The name of the discount.
          shared_ptr<string> promotionName_ {};
        };

        virtual bool empty() const override { return this->promotionDetail_ == nullptr; };
        // promotionDetail Field Functions 
        bool hasPromotionDetail() const { return this->promotionDetail_ != nullptr;};
        void deletePromotionDetail() { this->promotionDetail_ = nullptr;};
        inline const vector<PromotionDetails::PromotionDetail> & getPromotionDetail() const { DARABONBA_PTR_GET_CONST(promotionDetail_, vector<PromotionDetails::PromotionDetail>) };
        inline vector<PromotionDetails::PromotionDetail> getPromotionDetail() { DARABONBA_PTR_GET(promotionDetail_, vector<PromotionDetails::PromotionDetail>) };
        inline PromotionDetails& setPromotionDetail(const vector<PromotionDetails::PromotionDetail> & promotionDetail) { DARABONBA_PTR_SET_VALUE(promotionDetail_, promotionDetail) };
        inline PromotionDetails& setPromotionDetail(vector<PromotionDetails::PromotionDetail> && promotionDetail) { DARABONBA_PTR_SET_RVALUE(promotionDetail_, promotionDetail) };


      protected:
        shared_ptr<vector<PromotionDetails::PromotionDetail>> promotionDetail_ {};
      };

      class ModuleDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModuleDetails& obj) { 
          DARABONBA_PTR_TO_JSON(ModuleDetail, moduleDetail_);
        };
        friend void from_json(const Darabonba::Json& j, ModuleDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(ModuleDetail, moduleDetail_);
        };
        ModuleDetails() = default ;
        ModuleDetails(const ModuleDetails &) = default ;
        ModuleDetails(ModuleDetails &&) = default ;
        ModuleDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModuleDetails() = default ;
        ModuleDetails& operator=(const ModuleDetails &) = default ;
        ModuleDetails& operator=(ModuleDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ModuleDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ModuleDetail& obj) { 
            DARABONBA_PTR_TO_JSON(CostAfterDiscount, costAfterDiscount_);
            DARABONBA_PTR_TO_JSON(InvoiceDiscount, invoiceDiscount_);
            DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
            DARABONBA_PTR_TO_JSON(OriginalCost, originalCost_);
            DARABONBA_PTR_TO_JSON(UnitPrice, unitPrice_);
          };
          friend void from_json(const Darabonba::Json& j, ModuleDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(CostAfterDiscount, costAfterDiscount_);
            DARABONBA_PTR_FROM_JSON(InvoiceDiscount, invoiceDiscount_);
            DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
            DARABONBA_PTR_FROM_JSON(OriginalCost, originalCost_);
            DARABONBA_PTR_FROM_JSON(UnitPrice, unitPrice_);
          };
          ModuleDetail() = default ;
          ModuleDetail(const ModuleDetail &) = default ;
          ModuleDetail(ModuleDetail &&) = default ;
          ModuleDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ModuleDetail() = default ;
          ModuleDetail& operator=(const ModuleDetail &) = default ;
          ModuleDetail& operator=(ModuleDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->costAfterDiscount_ == nullptr
        && this->invoiceDiscount_ == nullptr && this->moduleCode_ == nullptr && this->originalCost_ == nullptr && this->unitPrice_ == nullptr; };
          // costAfterDiscount Field Functions 
          bool hasCostAfterDiscount() const { return this->costAfterDiscount_ != nullptr;};
          void deleteCostAfterDiscount() { this->costAfterDiscount_ = nullptr;};
          inline float getCostAfterDiscount() const { DARABONBA_PTR_GET_DEFAULT(costAfterDiscount_, 0.0) };
          inline ModuleDetail& setCostAfterDiscount(float costAfterDiscount) { DARABONBA_PTR_SET_VALUE(costAfterDiscount_, costAfterDiscount) };


          // invoiceDiscount Field Functions 
          bool hasInvoiceDiscount() const { return this->invoiceDiscount_ != nullptr;};
          void deleteInvoiceDiscount() { this->invoiceDiscount_ = nullptr;};
          inline float getInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(invoiceDiscount_, 0.0) };
          inline ModuleDetail& setInvoiceDiscount(float invoiceDiscount) { DARABONBA_PTR_SET_VALUE(invoiceDiscount_, invoiceDiscount) };


          // moduleCode Field Functions 
          bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
          void deleteModuleCode() { this->moduleCode_ = nullptr;};
          inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
          inline ModuleDetail& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


          // originalCost Field Functions 
          bool hasOriginalCost() const { return this->originalCost_ != nullptr;};
          void deleteOriginalCost() { this->originalCost_ = nullptr;};
          inline float getOriginalCost() const { DARABONBA_PTR_GET_DEFAULT(originalCost_, 0.0) };
          inline ModuleDetail& setOriginalCost(float originalCost) { DARABONBA_PTR_SET_VALUE(originalCost_, originalCost) };


          // unitPrice Field Functions 
          bool hasUnitPrice() const { return this->unitPrice_ != nullptr;};
          void deleteUnitPrice() { this->unitPrice_ = nullptr;};
          inline float getUnitPrice() const { DARABONBA_PTR_GET_DEFAULT(unitPrice_, 0.0) };
          inline ModuleDetail& setUnitPrice(float unitPrice) { DARABONBA_PTR_SET_VALUE(unitPrice_, unitPrice) };


        protected:
          // The discount price.
          shared_ptr<float> costAfterDiscount_ {};
          // The discount that was applied.
          shared_ptr<float> invoiceDiscount_ {};
          // The identifier of the pricing module.
          shared_ptr<string> moduleCode_ {};
          // The original price of the service.
          shared_ptr<float> originalCost_ {};
          // The unit price.
          shared_ptr<float> unitPrice_ {};
        };

        virtual bool empty() const override { return this->moduleDetail_ == nullptr; };
        // moduleDetail Field Functions 
        bool hasModuleDetail() const { return this->moduleDetail_ != nullptr;};
        void deleteModuleDetail() { this->moduleDetail_ = nullptr;};
        inline const vector<ModuleDetails::ModuleDetail> & getModuleDetail() const { DARABONBA_PTR_GET_CONST(moduleDetail_, vector<ModuleDetails::ModuleDetail>) };
        inline vector<ModuleDetails::ModuleDetail> getModuleDetail() { DARABONBA_PTR_GET(moduleDetail_, vector<ModuleDetails::ModuleDetail>) };
        inline ModuleDetails& setModuleDetail(const vector<ModuleDetails::ModuleDetail> & moduleDetail) { DARABONBA_PTR_SET_VALUE(moduleDetail_, moduleDetail) };
        inline ModuleDetails& setModuleDetail(vector<ModuleDetails::ModuleDetail> && moduleDetail) { DARABONBA_PTR_SET_RVALUE(moduleDetail_, moduleDetail) };


      protected:
        shared_ptr<vector<ModuleDetails::ModuleDetail>> moduleDetail_ {};
      };

      virtual bool empty() const override { return this->currency_ == nullptr
        && this->discountPrice_ == nullptr && this->moduleDetails_ == nullptr && this->originalPrice_ == nullptr && this->promotionDetails_ == nullptr && this->quantity_ == nullptr
        && this->tradePrice_ == nullptr; };
      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Data& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // discountPrice Field Functions 
      bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
      void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
      inline float getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
      inline Data& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


      // moduleDetails Field Functions 
      bool hasModuleDetails() const { return this->moduleDetails_ != nullptr;};
      void deleteModuleDetails() { this->moduleDetails_ = nullptr;};
      inline const Data::ModuleDetails & getModuleDetails() const { DARABONBA_PTR_GET_CONST(moduleDetails_, Data::ModuleDetails) };
      inline Data::ModuleDetails getModuleDetails() { DARABONBA_PTR_GET(moduleDetails_, Data::ModuleDetails) };
      inline Data& setModuleDetails(const Data::ModuleDetails & moduleDetails) { DARABONBA_PTR_SET_VALUE(moduleDetails_, moduleDetails) };
      inline Data& setModuleDetails(Data::ModuleDetails && moduleDetails) { DARABONBA_PTR_SET_RVALUE(moduleDetails_, moduleDetails) };


      // originalPrice Field Functions 
      bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
      void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
      inline float getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
      inline Data& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


      // promotionDetails Field Functions 
      bool hasPromotionDetails() const { return this->promotionDetails_ != nullptr;};
      void deletePromotionDetails() { this->promotionDetails_ = nullptr;};
      inline const Data::PromotionDetails & getPromotionDetails() const { DARABONBA_PTR_GET_CONST(promotionDetails_, Data::PromotionDetails) };
      inline Data::PromotionDetails getPromotionDetails() { DARABONBA_PTR_GET(promotionDetails_, Data::PromotionDetails) };
      inline Data& setPromotionDetails(const Data::PromotionDetails & promotionDetails) { DARABONBA_PTR_SET_VALUE(promotionDetails_, promotionDetails) };
      inline Data& setPromotionDetails(Data::PromotionDetails && promotionDetails) { DARABONBA_PTR_SET_RVALUE(promotionDetails_, promotionDetails) };


      // quantity Field Functions 
      bool hasQuantity() const { return this->quantity_ != nullptr;};
      void deleteQuantity() { this->quantity_ = nullptr;};
      inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
      inline Data& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


      // tradePrice Field Functions 
      bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
      void deleteTradePrice() { this->tradePrice_ = nullptr;};
      inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
      inline Data& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


    protected:
      // The type of currency. Valid values:
      // 
      // *   CNY: Chinese Yuan
      // *   USD: US dollar
      // *   JPY: Japanese Yen
      shared_ptr<string> currency_ {};
      // The discount that was applied.
      shared_ptr<float> discountPrice_ {};
      // The price details of the pricing module.
      shared_ptr<Data::ModuleDetails> moduleDetails_ {};
      // The original price of the service.
      shared_ptr<float> originalPrice_ {};
      // The details of the discount.
      shared_ptr<Data::PromotionDetails> promotionDetails_ {};
      // The quantity.
      shared_ptr<int32_t> quantity_ {};
      // The discount price.
      shared_ptr<float> tradePrice_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSubscriptionPriceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSubscriptionPriceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSubscriptionPriceResponseBody::Data) };
    inline GetSubscriptionPriceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSubscriptionPriceResponseBody::Data) };
    inline GetSubscriptionPriceResponseBody& setData(const GetSubscriptionPriceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSubscriptionPriceResponseBody& setData(GetSubscriptionPriceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSubscriptionPriceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSubscriptionPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSubscriptionPriceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The information about the service price.
    shared_ptr<GetSubscriptionPriceResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
