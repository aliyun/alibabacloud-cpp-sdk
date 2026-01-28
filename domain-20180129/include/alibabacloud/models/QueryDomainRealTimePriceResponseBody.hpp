// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINREALTIMEPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINREALTIMEPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainRealTimePriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainRealTimePriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainRealTimePriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    QueryDomainRealTimePriceResponseBody() = default ;
    QueryDomainRealTimePriceResponseBody(const QueryDomainRealTimePriceResponseBody &) = default ;
    QueryDomainRealTimePriceResponseBody(QueryDomainRealTimePriceResponseBody &&) = default ;
    QueryDomainRealTimePriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainRealTimePriceResponseBody() = default ;
    QueryDomainRealTimePriceResponseBody& operator=(const QueryDomainRealTimePriceResponseBody &) = default ;
    QueryDomainRealTimePriceResponseBody& operator=(QueryDomainRealTimePriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(DomainPrices, domainPrices_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainPrices, domainPrices_);
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
      class DomainPrices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainPrices& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Avail, avail_);
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(Period, period_);
          DARABONBA_PTR_TO_JSON(Premium, premium_);
          DARABONBA_PTR_TO_JSON(Price, price_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
        };
        friend void from_json(const Darabonba::Json& j, DomainPrices& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Avail, avail_);
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(Period, period_);
          DARABONBA_PTR_FROM_JSON(Premium, premium_);
          DARABONBA_PTR_FROM_JSON(Price, price_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
        };
        DomainPrices() = default ;
        DomainPrices(const DomainPrices &) = default ;
        DomainPrices(DomainPrices &&) = default ;
        DomainPrices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainPrices() = default ;
        DomainPrices& operator=(const DomainPrices &) = default ;
        DomainPrices& operator=(DomainPrices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->avail_ == nullptr && this->currency_ == nullptr && this->domainName_ == nullptr && this->period_ == nullptr && this->premium_ == nullptr
        && this->price_ == nullptr && this->reason_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline DomainPrices& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // avail Field Functions 
        bool hasAvail() const { return this->avail_ != nullptr;};
        void deleteAvail() { this->avail_ = nullptr;};
        inline int32_t getAvail() const { DARABONBA_PTR_GET_DEFAULT(avail_, 0) };
        inline DomainPrices& setAvail(int32_t avail) { DARABONBA_PTR_SET_VALUE(avail_, avail) };


        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline DomainPrices& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline DomainPrices& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
        inline DomainPrices& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


        // premium Field Functions 
        bool hasPremium() const { return this->premium_ != nullptr;};
        void deletePremium() { this->premium_ = nullptr;};
        inline bool getPremium() const { DARABONBA_PTR_GET_DEFAULT(premium_, false) };
        inline DomainPrices& setPremium(bool premium) { DARABONBA_PTR_SET_VALUE(premium_, premium) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline double getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
        inline DomainPrices& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline DomainPrices& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      protected:
        shared_ptr<string> action_ {};
        shared_ptr<int32_t> avail_ {};
        shared_ptr<string> currency_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<int32_t> period_ {};
        shared_ptr<bool> premium_ {};
        shared_ptr<double> price_ {};
        shared_ptr<string> reason_ {};
      };

      virtual bool empty() const override { return this->domainPrices_ == nullptr; };
      // domainPrices Field Functions 
      bool hasDomainPrices() const { return this->domainPrices_ != nullptr;};
      void deleteDomainPrices() { this->domainPrices_ = nullptr;};
      inline const vector<Module::DomainPrices> & getDomainPrices() const { DARABONBA_PTR_GET_CONST(domainPrices_, vector<Module::DomainPrices>) };
      inline vector<Module::DomainPrices> getDomainPrices() { DARABONBA_PTR_GET(domainPrices_, vector<Module::DomainPrices>) };
      inline Module& setDomainPrices(const vector<Module::DomainPrices> & domainPrices) { DARABONBA_PTR_SET_VALUE(domainPrices_, domainPrices) };
      inline Module& setDomainPrices(vector<Module::DomainPrices> && domainPrices) { DARABONBA_PTR_SET_RVALUE(domainPrices_, domainPrices) };


    protected:
      shared_ptr<vector<Module::DomainPrices>> domainPrices_ {};
    };

    virtual bool empty() const override { return this->dynamicCode_ == nullptr
        && this->dynamicMessage_ == nullptr && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpStatusCode_ == nullptr && this->module_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->synchro_ == nullptr; };
    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline QueryDomainRealTimePriceResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline QueryDomainRealTimePriceResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryDomainRealTimePriceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline QueryDomainRealTimePriceResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryDomainRealTimePriceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const QueryDomainRealTimePriceResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, QueryDomainRealTimePriceResponseBody::Module) };
    inline QueryDomainRealTimePriceResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, QueryDomainRealTimePriceResponseBody::Module) };
    inline QueryDomainRealTimePriceResponseBody& setModule(const QueryDomainRealTimePriceResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline QueryDomainRealTimePriceResponseBody& setModule(QueryDomainRealTimePriceResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDomainRealTimePriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDomainRealTimePriceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline QueryDomainRealTimePriceResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<QueryDomainRealTimePriceResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
