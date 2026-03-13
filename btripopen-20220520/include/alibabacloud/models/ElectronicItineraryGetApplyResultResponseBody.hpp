// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ELECTRONICITINERARYGETAPPLYRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ELECTRONICITINERARYGETAPPLYRESULTRESPONSEBODY_HPP_
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
  class ElectronicItineraryGetApplyResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ElectronicItineraryGetApplyResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ElectronicItineraryGetApplyResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    ElectronicItineraryGetApplyResultResponseBody() = default ;
    ElectronicItineraryGetApplyResultResponseBody(const ElectronicItineraryGetApplyResultResponseBody &) = default ;
    ElectronicItineraryGetApplyResultResponseBody(ElectronicItineraryGetApplyResultResponseBody &&) = default ;
    ElectronicItineraryGetApplyResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ElectronicItineraryGetApplyResultResponseBody() = default ;
    ElectronicItineraryGetApplyResultResponseBody& operator=(const ElectronicItineraryGetApplyResultResponseBody &) = default ;
    ElectronicItineraryGetApplyResultResponseBody& operator=(ElectronicItineraryGetApplyResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(apply_ticket_list, applyTicketList_);
        DARABONBA_PTR_TO_JSON(batch_apply_no, batchApplyNo_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(apply_ticket_list, applyTicketList_);
        DARABONBA_PTR_FROM_JSON(batch_apply_no, batchApplyNo_);
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
      class ApplyTicketList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplyTicketList& obj) { 
          DARABONBA_PTR_TO_JSON(failed_code, failedCode_);
          DARABONBA_PTR_TO_JSON(failed_reason, failedReason_);
          DARABONBA_PTR_TO_JSON(itinerary_status, itineraryStatus_);
          DARABONBA_PTR_TO_JSON(remark, remark_);
          DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
        };
        friend void from_json(const Darabonba::Json& j, ApplyTicketList& obj) { 
          DARABONBA_PTR_FROM_JSON(failed_code, failedCode_);
          DARABONBA_PTR_FROM_JSON(failed_reason, failedReason_);
          DARABONBA_PTR_FROM_JSON(itinerary_status, itineraryStatus_);
          DARABONBA_PTR_FROM_JSON(remark, remark_);
          DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
        };
        ApplyTicketList() = default ;
        ApplyTicketList(const ApplyTicketList &) = default ;
        ApplyTicketList(ApplyTicketList &&) = default ;
        ApplyTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplyTicketList() = default ;
        ApplyTicketList& operator=(const ApplyTicketList &) = default ;
        ApplyTicketList& operator=(ApplyTicketList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->failedCode_ == nullptr
        && this->failedReason_ == nullptr && this->itineraryStatus_ == nullptr && this->remark_ == nullptr && this->ticketNo_ == nullptr; };
        // failedCode Field Functions 
        bool hasFailedCode() const { return this->failedCode_ != nullptr;};
        void deleteFailedCode() { this->failedCode_ = nullptr;};
        inline int32_t getFailedCode() const { DARABONBA_PTR_GET_DEFAULT(failedCode_, 0) };
        inline ApplyTicketList& setFailedCode(int32_t failedCode) { DARABONBA_PTR_SET_VALUE(failedCode_, failedCode) };


        // failedReason Field Functions 
        bool hasFailedReason() const { return this->failedReason_ != nullptr;};
        void deleteFailedReason() { this->failedReason_ = nullptr;};
        inline string getFailedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
        inline ApplyTicketList& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


        // itineraryStatus Field Functions 
        bool hasItineraryStatus() const { return this->itineraryStatus_ != nullptr;};
        void deleteItineraryStatus() { this->itineraryStatus_ = nullptr;};
        inline int32_t getItineraryStatus() const { DARABONBA_PTR_GET_DEFAULT(itineraryStatus_, 0) };
        inline ApplyTicketList& setItineraryStatus(int32_t itineraryStatus) { DARABONBA_PTR_SET_VALUE(itineraryStatus_, itineraryStatus) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline ApplyTicketList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // ticketNo Field Functions 
        bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
        void deleteTicketNo() { this->ticketNo_ = nullptr;};
        inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
        inline ApplyTicketList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


      protected:
        shared_ptr<int32_t> failedCode_ {};
        shared_ptr<string> failedReason_ {};
        shared_ptr<int32_t> itineraryStatus_ {};
        shared_ptr<string> remark_ {};
        shared_ptr<string> ticketNo_ {};
      };

      virtual bool empty() const override { return this->applyTicketList_ == nullptr
        && this->batchApplyNo_ == nullptr; };
      // applyTicketList Field Functions 
      bool hasApplyTicketList() const { return this->applyTicketList_ != nullptr;};
      void deleteApplyTicketList() { this->applyTicketList_ = nullptr;};
      inline const vector<Module::ApplyTicketList> & getApplyTicketList() const { DARABONBA_PTR_GET_CONST(applyTicketList_, vector<Module::ApplyTicketList>) };
      inline vector<Module::ApplyTicketList> getApplyTicketList() { DARABONBA_PTR_GET(applyTicketList_, vector<Module::ApplyTicketList>) };
      inline Module& setApplyTicketList(const vector<Module::ApplyTicketList> & applyTicketList) { DARABONBA_PTR_SET_VALUE(applyTicketList_, applyTicketList) };
      inline Module& setApplyTicketList(vector<Module::ApplyTicketList> && applyTicketList) { DARABONBA_PTR_SET_RVALUE(applyTicketList_, applyTicketList) };


      // batchApplyNo Field Functions 
      bool hasBatchApplyNo() const { return this->batchApplyNo_ != nullptr;};
      void deleteBatchApplyNo() { this->batchApplyNo_ = nullptr;};
      inline string getBatchApplyNo() const { DARABONBA_PTR_GET_DEFAULT(batchApplyNo_, "") };
      inline Module& setBatchApplyNo(string batchApplyNo) { DARABONBA_PTR_SET_VALUE(batchApplyNo_, batchApplyNo) };


    protected:
      shared_ptr<vector<Module::ApplyTicketList>> applyTicketList_ {};
      shared_ptr<string> batchApplyNo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ElectronicItineraryGetApplyResultResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ElectronicItineraryGetApplyResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const ElectronicItineraryGetApplyResultResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, ElectronicItineraryGetApplyResultResponseBody::Module) };
    inline ElectronicItineraryGetApplyResultResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, ElectronicItineraryGetApplyResultResponseBody::Module) };
    inline ElectronicItineraryGetApplyResultResponseBody& setModule(const ElectronicItineraryGetApplyResultResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline ElectronicItineraryGetApplyResultResponseBody& setModule(ElectronicItineraryGetApplyResultResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ElectronicItineraryGetApplyResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ElectronicItineraryGetApplyResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ElectronicItineraryGetApplyResultResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ElectronicItineraryGetApplyResultResponseBody::Module> module_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
