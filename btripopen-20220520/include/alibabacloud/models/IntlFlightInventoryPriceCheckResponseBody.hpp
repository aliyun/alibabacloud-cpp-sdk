// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTINVENTORYPRICECHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTINVENTORYPRICECHECKRESPONSEBODY_HPP_
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
  class IntlFlightInventoryPriceCheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightInventoryPriceCheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightInventoryPriceCheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    IntlFlightInventoryPriceCheckResponseBody() = default ;
    IntlFlightInventoryPriceCheckResponseBody(const IntlFlightInventoryPriceCheckResponseBody &) = default ;
    IntlFlightInventoryPriceCheckResponseBody(IntlFlightInventoryPriceCheckResponseBody &&) = default ;
    IntlFlightInventoryPriceCheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightInventoryPriceCheckResponseBody() = default ;
    IntlFlightInventoryPriceCheckResponseBody& operator=(const IntlFlightInventoryPriceCheckResponseBody &) = default ;
    IntlFlightInventoryPriceCheckResponseBody& operator=(IntlFlightInventoryPriceCheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(check_success, checkSuccess_);
        DARABONBA_PTR_TO_JSON(fail_type, failType_);
        DARABONBA_PTR_TO_JSON(passenger_changed_price_info_list, passengerChangedPriceInfoList_);
        DARABONBA_PTR_TO_JSON(render_key, renderKey_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(check_success, checkSuccess_);
        DARABONBA_PTR_FROM_JSON(fail_type, failType_);
        DARABONBA_PTR_FROM_JSON(passenger_changed_price_info_list, passengerChangedPriceInfoList_);
        DARABONBA_PTR_FROM_JSON(render_key, renderKey_);
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
      class PassengerChangedPriceInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengerChangedPriceInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(changed, changed_);
          DARABONBA_PTR_TO_JSON(changed_price, changedPrice_);
          DARABONBA_PTR_TO_JSON(original_price, originalPrice_);
          DARABONBA_PTR_TO_JSON(passenger_type, passengerType_);
        };
        friend void from_json(const Darabonba::Json& j, PassengerChangedPriceInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(changed, changed_);
          DARABONBA_PTR_FROM_JSON(changed_price, changedPrice_);
          DARABONBA_PTR_FROM_JSON(original_price, originalPrice_);
          DARABONBA_PTR_FROM_JSON(passenger_type, passengerType_);
        };
        PassengerChangedPriceInfoList() = default ;
        PassengerChangedPriceInfoList(const PassengerChangedPriceInfoList &) = default ;
        PassengerChangedPriceInfoList(PassengerChangedPriceInfoList &&) = default ;
        PassengerChangedPriceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PassengerChangedPriceInfoList() = default ;
        PassengerChangedPriceInfoList& operator=(const PassengerChangedPriceInfoList &) = default ;
        PassengerChangedPriceInfoList& operator=(PassengerChangedPriceInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OriginalPrice : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OriginalPrice& obj) { 
            DARABONBA_PTR_TO_JSON(tax_price, taxPrice_);
            DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
          };
          friend void from_json(const Darabonba::Json& j, OriginalPrice& obj) { 
            DARABONBA_PTR_FROM_JSON(tax_price, taxPrice_);
            DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
          };
          OriginalPrice() = default ;
          OriginalPrice(const OriginalPrice &) = default ;
          OriginalPrice(OriginalPrice &&) = default ;
          OriginalPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OriginalPrice() = default ;
          OriginalPrice& operator=(const OriginalPrice &) = default ;
          OriginalPrice& operator=(OriginalPrice &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->taxPrice_ == nullptr
        && this->ticketPrice_ == nullptr; };
          // taxPrice Field Functions 
          bool hasTaxPrice() const { return this->taxPrice_ != nullptr;};
          void deleteTaxPrice() { this->taxPrice_ = nullptr;};
          inline int64_t getTaxPrice() const { DARABONBA_PTR_GET_DEFAULT(taxPrice_, 0L) };
          inline OriginalPrice& setTaxPrice(int64_t taxPrice) { DARABONBA_PTR_SET_VALUE(taxPrice_, taxPrice) };


          // ticketPrice Field Functions 
          bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
          void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
          inline int64_t getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
          inline OriginalPrice& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


        protected:
          shared_ptr<int64_t> taxPrice_ {};
          shared_ptr<int64_t> ticketPrice_ {};
        };

        class ChangedPrice : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ChangedPrice& obj) { 
            DARABONBA_PTR_TO_JSON(tax_price, taxPrice_);
            DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
          };
          friend void from_json(const Darabonba::Json& j, ChangedPrice& obj) { 
            DARABONBA_PTR_FROM_JSON(tax_price, taxPrice_);
            DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
          };
          ChangedPrice() = default ;
          ChangedPrice(const ChangedPrice &) = default ;
          ChangedPrice(ChangedPrice &&) = default ;
          ChangedPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ChangedPrice() = default ;
          ChangedPrice& operator=(const ChangedPrice &) = default ;
          ChangedPrice& operator=(ChangedPrice &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->taxPrice_ == nullptr
        && this->ticketPrice_ == nullptr; };
          // taxPrice Field Functions 
          bool hasTaxPrice() const { return this->taxPrice_ != nullptr;};
          void deleteTaxPrice() { this->taxPrice_ = nullptr;};
          inline int64_t getTaxPrice() const { DARABONBA_PTR_GET_DEFAULT(taxPrice_, 0L) };
          inline ChangedPrice& setTaxPrice(int64_t taxPrice) { DARABONBA_PTR_SET_VALUE(taxPrice_, taxPrice) };


          // ticketPrice Field Functions 
          bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
          void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
          inline int64_t getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
          inline ChangedPrice& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


        protected:
          shared_ptr<int64_t> taxPrice_ {};
          shared_ptr<int64_t> ticketPrice_ {};
        };

        virtual bool empty() const override { return this->changed_ == nullptr
        && this->changedPrice_ == nullptr && this->originalPrice_ == nullptr && this->passengerType_ == nullptr; };
        // changed Field Functions 
        bool hasChanged() const { return this->changed_ != nullptr;};
        void deleteChanged() { this->changed_ = nullptr;};
        inline bool getChanged() const { DARABONBA_PTR_GET_DEFAULT(changed_, false) };
        inline PassengerChangedPriceInfoList& setChanged(bool changed) { DARABONBA_PTR_SET_VALUE(changed_, changed) };


        // changedPrice Field Functions 
        bool hasChangedPrice() const { return this->changedPrice_ != nullptr;};
        void deleteChangedPrice() { this->changedPrice_ = nullptr;};
        inline const PassengerChangedPriceInfoList::ChangedPrice & getChangedPrice() const { DARABONBA_PTR_GET_CONST(changedPrice_, PassengerChangedPriceInfoList::ChangedPrice) };
        inline PassengerChangedPriceInfoList::ChangedPrice getChangedPrice() { DARABONBA_PTR_GET(changedPrice_, PassengerChangedPriceInfoList::ChangedPrice) };
        inline PassengerChangedPriceInfoList& setChangedPrice(const PassengerChangedPriceInfoList::ChangedPrice & changedPrice) { DARABONBA_PTR_SET_VALUE(changedPrice_, changedPrice) };
        inline PassengerChangedPriceInfoList& setChangedPrice(PassengerChangedPriceInfoList::ChangedPrice && changedPrice) { DARABONBA_PTR_SET_RVALUE(changedPrice_, changedPrice) };


        // originalPrice Field Functions 
        bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
        void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
        inline const PassengerChangedPriceInfoList::OriginalPrice & getOriginalPrice() const { DARABONBA_PTR_GET_CONST(originalPrice_, PassengerChangedPriceInfoList::OriginalPrice) };
        inline PassengerChangedPriceInfoList::OriginalPrice getOriginalPrice() { DARABONBA_PTR_GET(originalPrice_, PassengerChangedPriceInfoList::OriginalPrice) };
        inline PassengerChangedPriceInfoList& setOriginalPrice(const PassengerChangedPriceInfoList::OriginalPrice & originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };
        inline PassengerChangedPriceInfoList& setOriginalPrice(PassengerChangedPriceInfoList::OriginalPrice && originalPrice) { DARABONBA_PTR_SET_RVALUE(originalPrice_, originalPrice) };


        // passengerType Field Functions 
        bool hasPassengerType() const { return this->passengerType_ != nullptr;};
        void deletePassengerType() { this->passengerType_ = nullptr;};
        inline int32_t getPassengerType() const { DARABONBA_PTR_GET_DEFAULT(passengerType_, 0) };
        inline PassengerChangedPriceInfoList& setPassengerType(int32_t passengerType) { DARABONBA_PTR_SET_VALUE(passengerType_, passengerType) };


      protected:
        shared_ptr<bool> changed_ {};
        shared_ptr<PassengerChangedPriceInfoList::ChangedPrice> changedPrice_ {};
        shared_ptr<PassengerChangedPriceInfoList::OriginalPrice> originalPrice_ {};
        shared_ptr<int32_t> passengerType_ {};
      };

      virtual bool empty() const override { return this->checkSuccess_ == nullptr
        && this->failType_ == nullptr && this->passengerChangedPriceInfoList_ == nullptr && this->renderKey_ == nullptr; };
      // checkSuccess Field Functions 
      bool hasCheckSuccess() const { return this->checkSuccess_ != nullptr;};
      void deleteCheckSuccess() { this->checkSuccess_ = nullptr;};
      inline bool getCheckSuccess() const { DARABONBA_PTR_GET_DEFAULT(checkSuccess_, false) };
      inline Module& setCheckSuccess(bool checkSuccess) { DARABONBA_PTR_SET_VALUE(checkSuccess_, checkSuccess) };


      // failType Field Functions 
      bool hasFailType() const { return this->failType_ != nullptr;};
      void deleteFailType() { this->failType_ = nullptr;};
      inline int32_t getFailType() const { DARABONBA_PTR_GET_DEFAULT(failType_, 0) };
      inline Module& setFailType(int32_t failType) { DARABONBA_PTR_SET_VALUE(failType_, failType) };


      // passengerChangedPriceInfoList Field Functions 
      bool hasPassengerChangedPriceInfoList() const { return this->passengerChangedPriceInfoList_ != nullptr;};
      void deletePassengerChangedPriceInfoList() { this->passengerChangedPriceInfoList_ = nullptr;};
      inline const vector<Module::PassengerChangedPriceInfoList> & getPassengerChangedPriceInfoList() const { DARABONBA_PTR_GET_CONST(passengerChangedPriceInfoList_, vector<Module::PassengerChangedPriceInfoList>) };
      inline vector<Module::PassengerChangedPriceInfoList> getPassengerChangedPriceInfoList() { DARABONBA_PTR_GET(passengerChangedPriceInfoList_, vector<Module::PassengerChangedPriceInfoList>) };
      inline Module& setPassengerChangedPriceInfoList(const vector<Module::PassengerChangedPriceInfoList> & passengerChangedPriceInfoList) { DARABONBA_PTR_SET_VALUE(passengerChangedPriceInfoList_, passengerChangedPriceInfoList) };
      inline Module& setPassengerChangedPriceInfoList(vector<Module::PassengerChangedPriceInfoList> && passengerChangedPriceInfoList) { DARABONBA_PTR_SET_RVALUE(passengerChangedPriceInfoList_, passengerChangedPriceInfoList) };


      // renderKey Field Functions 
      bool hasRenderKey() const { return this->renderKey_ != nullptr;};
      void deleteRenderKey() { this->renderKey_ = nullptr;};
      inline string getRenderKey() const { DARABONBA_PTR_GET_DEFAULT(renderKey_, "") };
      inline Module& setRenderKey(string renderKey) { DARABONBA_PTR_SET_VALUE(renderKey_, renderKey) };


    protected:
      shared_ptr<bool> checkSuccess_ {};
      shared_ptr<int32_t> failType_ {};
      shared_ptr<vector<Module::PassengerChangedPriceInfoList>> passengerChangedPriceInfoList_ {};
      shared_ptr<string> renderKey_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline IntlFlightInventoryPriceCheckResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline IntlFlightInventoryPriceCheckResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const IntlFlightInventoryPriceCheckResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, IntlFlightInventoryPriceCheckResponseBody::Module) };
    inline IntlFlightInventoryPriceCheckResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, IntlFlightInventoryPriceCheckResponseBody::Module) };
    inline IntlFlightInventoryPriceCheckResponseBody& setModule(const IntlFlightInventoryPriceCheckResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline IntlFlightInventoryPriceCheckResponseBody& setModule(IntlFlightInventoryPriceCheckResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IntlFlightInventoryPriceCheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline IntlFlightInventoryPriceCheckResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline IntlFlightInventoryPriceCheckResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<IntlFlightInventoryPriceCheckResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
