// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDINVOICEENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDINVOICEENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AddInvoiceEntityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddInvoiceEntityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddInvoiceEntityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    AddInvoiceEntityResponseBody() = default ;
    AddInvoiceEntityResponseBody(const AddInvoiceEntityResponseBody &) = default ;
    AddInvoiceEntityResponseBody(AddInvoiceEntityResponseBody &&) = default ;
    AddInvoiceEntityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddInvoiceEntityResponseBody() = default ;
    AddInvoiceEntityResponseBody& operator=(const AddInvoiceEntityResponseBody &) = default ;
    AddInvoiceEntityResponseBody& operator=(AddInvoiceEntityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(add_num, addNum_);
        DARABONBA_PTR_TO_JSON(selected_user_num, selectedUserNum_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(add_num, addNum_);
        DARABONBA_PTR_FROM_JSON(selected_user_num, selectedUserNum_);
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
        && this->selectedUserNum_ == nullptr; };
      // addNum Field Functions 
      bool hasAddNum() const { return this->addNum_ != nullptr;};
      void deleteAddNum() { this->addNum_ = nullptr;};
      inline int32_t getAddNum() const { DARABONBA_PTR_GET_DEFAULT(addNum_, 0) };
      inline Module& setAddNum(int32_t addNum) { DARABONBA_PTR_SET_VALUE(addNum_, addNum) };


      // selectedUserNum Field Functions 
      bool hasSelectedUserNum() const { return this->selectedUserNum_ != nullptr;};
      void deleteSelectedUserNum() { this->selectedUserNum_ = nullptr;};
      inline int32_t getSelectedUserNum() const { DARABONBA_PTR_GET_DEFAULT(selectedUserNum_, 0) };
      inline Module& setSelectedUserNum(int32_t selectedUserNum) { DARABONBA_PTR_SET_VALUE(selectedUserNum_, selectedUserNum) };


    protected:
      // The number of added personnel, departments, or roles.
      shared_ptr<int32_t> addNum_ {};
      // The number of entities under the invoice header.
      shared_ptr<int32_t> selectedUserNum_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AddInvoiceEntityResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddInvoiceEntityResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const AddInvoiceEntityResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, AddInvoiceEntityResponseBody::Module) };
    inline AddInvoiceEntityResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, AddInvoiceEntityResponseBody::Module) };
    inline AddInvoiceEntityResponseBody& setModule(const AddInvoiceEntityResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline AddInvoiceEntityResponseBody& setModule(AddInvoiceEntityResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddInvoiceEntityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddInvoiceEntityResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline AddInvoiceEntityResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The result code.
    shared_ptr<string> code_ {};
    // The remarks on the result, such as a description of the result.
    shared_ptr<string> message_ {};
    // The return value from the server. This parameter is empty if no result is returned or an exception occurs.
    shared_ptr<AddInvoiceEntityResponseBody::Module> module_ {};
    // The unique request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. This parameter is set by the server. The value is false when an exception occurs or when the result is null.
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
