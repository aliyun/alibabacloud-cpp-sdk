// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOICERULESAVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INVOICERULESAVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InvoiceRuleSaveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvoiceRuleSaveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, InvoiceRuleSaveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    InvoiceRuleSaveResponseBody() = default ;
    InvoiceRuleSaveResponseBody(const InvoiceRuleSaveResponseBody &) = default ;
    InvoiceRuleSaveResponseBody(InvoiceRuleSaveResponseBody &&) = default ;
    InvoiceRuleSaveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvoiceRuleSaveResponseBody() = default ;
    InvoiceRuleSaveResponseBody& operator=(const InvoiceRuleSaveResponseBody &) = default ;
    InvoiceRuleSaveResponseBody& operator=(InvoiceRuleSaveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(add_num, addNum_);
        DARABONBA_PTR_TO_JSON(remove_num, removeNum_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(add_num, addNum_);
        DARABONBA_PTR_FROM_JSON(remove_num, removeNum_);
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
      virtual bool empty() const override { return this->addNum_ == nullptr
        && this->removeNum_ == nullptr; };
      // addNum Field Functions 
      bool hasAddNum() const { return this->addNum_ != nullptr;};
      void deleteAddNum() { this->addNum_ = nullptr;};
      inline int32_t getAddNum() const { DARABONBA_PTR_GET_DEFAULT(addNum_, 0) };
      inline Module& setAddNum(int32_t addNum) { DARABONBA_PTR_SET_VALUE(addNum_, addNum) };


      // removeNum Field Functions 
      bool hasRemoveNum() const { return this->removeNum_ != nullptr;};
      void deleteRemoveNum() { this->removeNum_ = nullptr;};
      inline int32_t getRemoveNum() const { DARABONBA_PTR_GET_DEFAULT(removeNum_, 0) };
      inline Module& setRemoveNum(int32_t removeNum) { DARABONBA_PTR_SET_VALUE(removeNum_, removeNum) };


    protected:
      shared_ptr<int32_t> addNum_ {};
      shared_ptr<int32_t> removeNum_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InvoiceRuleSaveResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InvoiceRuleSaveResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const InvoiceRuleSaveResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, InvoiceRuleSaveResponseBody::Module) };
    inline InvoiceRuleSaveResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, InvoiceRuleSaveResponseBody::Module) };
    inline InvoiceRuleSaveResponseBody& setModule(const InvoiceRuleSaveResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline InvoiceRuleSaveResponseBody& setModule(InvoiceRuleSaveResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InvoiceRuleSaveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline InvoiceRuleSaveResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline InvoiceRuleSaveResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<InvoiceRuleSaveResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
