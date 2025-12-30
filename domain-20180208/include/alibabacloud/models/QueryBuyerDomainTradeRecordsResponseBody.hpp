// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBUYERDOMAINTRADERECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYBUYERDOMAINTRADERECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryBuyerDomainTradeRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBuyerDomainTradeRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBuyerDomainTradeRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryBuyerDomainTradeRecordsResponseBody() = default ;
    QueryBuyerDomainTradeRecordsResponseBody(const QueryBuyerDomainTradeRecordsResponseBody &) = default ;
    QueryBuyerDomainTradeRecordsResponseBody(QueryBuyerDomainTradeRecordsResponseBody &&) = default ;
    QueryBuyerDomainTradeRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBuyerDomainTradeRecordsResponseBody() = default ;
    QueryBuyerDomainTradeRecordsResponseBody& operator=(const QueryBuyerDomainTradeRecordsResponseBody &) = default ;
    QueryBuyerDomainTradeRecordsResponseBody& operator=(QueryBuyerDomainTradeRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
        DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
        DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(BizId, bizId_);
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(DeliveryTime, deliveryTime_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(PayTime, payTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TradeId, tradeId_);
          DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
          DARABONBA_PTR_TO_JSON(TradeType, tradeType_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(BizId, bizId_);
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(DeliveryTime, deliveryTime_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(PayTime, payTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TradeId, tradeId_);
          DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
          DARABONBA_PTR_FROM_JSON(TradeType, tradeType_);
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
        virtual bool empty() const override { return this->bizId_ == nullptr
        && this->currency_ == nullptr && this->deliveryTime_ == nullptr && this->domainName_ == nullptr && this->payTime_ == nullptr && this->status_ == nullptr
        && this->tradeId_ == nullptr && this->tradePrice_ == nullptr && this->tradeType_ == nullptr; };
        // bizId Field Functions 
        bool hasBizId() const { return this->bizId_ != nullptr;};
        void deleteBizId() { this->bizId_ = nullptr;};
        inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
        inline Data& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline Data& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // deliveryTime Field Functions 
        bool hasDeliveryTime() const { return this->deliveryTime_ != nullptr;};
        void deleteDeliveryTime() { this->deliveryTime_ = nullptr;};
        inline string getDeliveryTime() const { DARABONBA_PTR_GET_DEFAULT(deliveryTime_, "") };
        inline Data& setDeliveryTime(string deliveryTime) { DARABONBA_PTR_SET_VALUE(deliveryTime_, deliveryTime) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline Data& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // payTime Field Functions 
        bool hasPayTime() const { return this->payTime_ != nullptr;};
        void deletePayTime() { this->payTime_ = nullptr;};
        inline string getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
        inline Data& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tradeId Field Functions 
        bool hasTradeId() const { return this->tradeId_ != nullptr;};
        void deleteTradeId() { this->tradeId_ = nullptr;};
        inline string getTradeId() const { DARABONBA_PTR_GET_DEFAULT(tradeId_, "") };
        inline Data& setTradeId(string tradeId) { DARABONBA_PTR_SET_VALUE(tradeId_, tradeId) };


        // tradePrice Field Functions 
        bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
        void deleteTradePrice() { this->tradePrice_ = nullptr;};
        inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
        inline Data& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


        // tradeType Field Functions 
        bool hasTradeType() const { return this->tradeType_ != nullptr;};
        void deleteTradeType() { this->tradeType_ = nullptr;};
        inline string getTradeType() const { DARABONBA_PTR_GET_DEFAULT(tradeType_, "") };
        inline Data& setTradeType(string tradeType) { DARABONBA_PTR_SET_VALUE(tradeType_, tradeType) };


      protected:
        shared_ptr<string> bizId_ {};
        shared_ptr<string> currency_ {};
        shared_ptr<string> deliveryTime_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<string> payTime_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> tradeId_ {};
        shared_ptr<float> tradePrice_ {};
        shared_ptr<string> tradeType_ {};
      };

      virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->data_ == nullptr && this->pageSize_ == nullptr && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
      // currentPageNum Field Functions 
      bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
      void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
      inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
      inline Module& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Module::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Module::Data>) };
      inline vector<Module::Data> getData() { DARABONBA_PTR_GET(data_, vector<Module::Data>) };
      inline Module& setData(const vector<Module::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Module& setData(vector<Module::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Module& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalItemNum Field Functions 
      bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
      void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
      inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
      inline Module& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


      // totalPageNum Field Functions 
      bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
      void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
      inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
      inline Module& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


    protected:
      shared_ptr<int32_t> currentPageNum_ {};
      shared_ptr<vector<Module::Data>> data_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalItemNum_ {};
      shared_ptr<int32_t> totalPageNum_ {};
    };

    virtual bool empty() const override { return this->module_ == nullptr
        && this->requestId_ == nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const QueryBuyerDomainTradeRecordsResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, QueryBuyerDomainTradeRecordsResponseBody::Module) };
    inline QueryBuyerDomainTradeRecordsResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, QueryBuyerDomainTradeRecordsResponseBody::Module) };
    inline QueryBuyerDomainTradeRecordsResponseBody& setModule(const QueryBuyerDomainTradeRecordsResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline QueryBuyerDomainTradeRecordsResponseBody& setModule(QueryBuyerDomainTradeRecordsResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryBuyerDomainTradeRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryBuyerDomainTradeRecordsResponseBody::Module> module_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
