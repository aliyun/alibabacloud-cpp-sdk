// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ELECTRONICITINERARYBATCHAPPLYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ELECTRONICITINERARYBATCHAPPLYRESPONSEBODY_HPP_
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
  class ElectronicItineraryBatchApplyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ElectronicItineraryBatchApplyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ElectronicItineraryBatchApplyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    ElectronicItineraryBatchApplyResponseBody() = default ;
    ElectronicItineraryBatchApplyResponseBody(const ElectronicItineraryBatchApplyResponseBody &) = default ;
    ElectronicItineraryBatchApplyResponseBody(ElectronicItineraryBatchApplyResponseBody &&) = default ;
    ElectronicItineraryBatchApplyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ElectronicItineraryBatchApplyResponseBody() = default ;
    ElectronicItineraryBatchApplyResponseBody& operator=(const ElectronicItineraryBatchApplyResponseBody &) = default ;
    ElectronicItineraryBatchApplyResponseBody& operator=(ElectronicItineraryBatchApplyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(apply_failed_ticket_list, applyFailedTicketList_);
        DARABONBA_PTR_TO_JSON(batch_no, batchNo_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(apply_failed_ticket_list, applyFailedTicketList_);
        DARABONBA_PTR_FROM_JSON(batch_no, batchNo_);
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
      class ApplyFailedTicketList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplyFailedTicketList& obj) { 
          DARABONBA_PTR_TO_JSON(failed_code, failedCode_);
          DARABONBA_PTR_TO_JSON(failed_reason, failedReason_);
          DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
        };
        friend void from_json(const Darabonba::Json& j, ApplyFailedTicketList& obj) { 
          DARABONBA_PTR_FROM_JSON(failed_code, failedCode_);
          DARABONBA_PTR_FROM_JSON(failed_reason, failedReason_);
          DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
        };
        ApplyFailedTicketList() = default ;
        ApplyFailedTicketList(const ApplyFailedTicketList &) = default ;
        ApplyFailedTicketList(ApplyFailedTicketList &&) = default ;
        ApplyFailedTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplyFailedTicketList() = default ;
        ApplyFailedTicketList& operator=(const ApplyFailedTicketList &) = default ;
        ApplyFailedTicketList& operator=(ApplyFailedTicketList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->failedCode_ == nullptr
        && this->failedReason_ == nullptr && this->ticketNo_ == nullptr; };
        // failedCode Field Functions 
        bool hasFailedCode() const { return this->failedCode_ != nullptr;};
        void deleteFailedCode() { this->failedCode_ = nullptr;};
        inline int32_t getFailedCode() const { DARABONBA_PTR_GET_DEFAULT(failedCode_, 0) };
        inline ApplyFailedTicketList& setFailedCode(int32_t failedCode) { DARABONBA_PTR_SET_VALUE(failedCode_, failedCode) };


        // failedReason Field Functions 
        bool hasFailedReason() const { return this->failedReason_ != nullptr;};
        void deleteFailedReason() { this->failedReason_ = nullptr;};
        inline string getFailedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
        inline ApplyFailedTicketList& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


        // ticketNo Field Functions 
        bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
        void deleteTicketNo() { this->ticketNo_ = nullptr;};
        inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
        inline ApplyFailedTicketList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


      protected:
        shared_ptr<int32_t> failedCode_ {};
        shared_ptr<string> failedReason_ {};
        shared_ptr<string> ticketNo_ {};
      };

      virtual bool empty() const override { return this->applyFailedTicketList_ == nullptr
        && this->batchNo_ == nullptr; };
      // applyFailedTicketList Field Functions 
      bool hasApplyFailedTicketList() const { return this->applyFailedTicketList_ != nullptr;};
      void deleteApplyFailedTicketList() { this->applyFailedTicketList_ = nullptr;};
      inline const vector<Module::ApplyFailedTicketList> & getApplyFailedTicketList() const { DARABONBA_PTR_GET_CONST(applyFailedTicketList_, vector<Module::ApplyFailedTicketList>) };
      inline vector<Module::ApplyFailedTicketList> getApplyFailedTicketList() { DARABONBA_PTR_GET(applyFailedTicketList_, vector<Module::ApplyFailedTicketList>) };
      inline Module& setApplyFailedTicketList(const vector<Module::ApplyFailedTicketList> & applyFailedTicketList) { DARABONBA_PTR_SET_VALUE(applyFailedTicketList_, applyFailedTicketList) };
      inline Module& setApplyFailedTicketList(vector<Module::ApplyFailedTicketList> && applyFailedTicketList) { DARABONBA_PTR_SET_RVALUE(applyFailedTicketList_, applyFailedTicketList) };


      // batchNo Field Functions 
      bool hasBatchNo() const { return this->batchNo_ != nullptr;};
      void deleteBatchNo() { this->batchNo_ = nullptr;};
      inline string getBatchNo() const { DARABONBA_PTR_GET_DEFAULT(batchNo_, "") };
      inline Module& setBatchNo(string batchNo) { DARABONBA_PTR_SET_VALUE(batchNo_, batchNo) };


    protected:
      shared_ptr<vector<Module::ApplyFailedTicketList>> applyFailedTicketList_ {};
      shared_ptr<string> batchNo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ElectronicItineraryBatchApplyResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ElectronicItineraryBatchApplyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const ElectronicItineraryBatchApplyResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, ElectronicItineraryBatchApplyResponseBody::Module) };
    inline ElectronicItineraryBatchApplyResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, ElectronicItineraryBatchApplyResponseBody::Module) };
    inline ElectronicItineraryBatchApplyResponseBody& setModule(const ElectronicItineraryBatchApplyResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline ElectronicItineraryBatchApplyResponseBody& setModule(ElectronicItineraryBatchApplyResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ElectronicItineraryBatchApplyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ElectronicItineraryBatchApplyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ElectronicItineraryBatchApplyResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ElectronicItineraryBatchApplyResponseBody::Module> module_ {};
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
