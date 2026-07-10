// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPROJECTMANAGERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDPROJECTMANAGERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AddProjectManagerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddProjectManagerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddProjectManagerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    AddProjectManagerResponseBody() = default ;
    AddProjectManagerResponseBody(const AddProjectManagerResponseBody &) = default ;
    AddProjectManagerResponseBody(AddProjectManagerResponseBody &&) = default ;
    AddProjectManagerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddProjectManagerResponseBody() = default ;
    AddProjectManagerResponseBody& operator=(const AddProjectManagerResponseBody &) = default ;
    AddProjectManagerResponseBody& operator=(AddProjectManagerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(add_num, addNum_);
        DARABONBA_PTR_TO_JSON(remove_num, removeNum_);
        DARABONBA_PTR_TO_JSON(rule_code, ruleCode_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(add_num, addNum_);
        DARABONBA_PTR_FROM_JSON(remove_num, removeNum_);
        DARABONBA_PTR_FROM_JSON(rule_code, ruleCode_);
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
        && this->removeNum_ == nullptr && this->ruleCode_ == nullptr; };
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


      // ruleCode Field Functions 
      bool hasRuleCode() const { return this->ruleCode_ != nullptr;};
      void deleteRuleCode() { this->ruleCode_ = nullptr;};
      inline int64_t getRuleCode() const { DARABONBA_PTR_GET_DEFAULT(ruleCode_, 0L) };
      inline Module& setRuleCode(int64_t ruleCode) { DARABONBA_PTR_SET_VALUE(ruleCode_, ruleCode) };


    protected:
      shared_ptr<int32_t> addNum_ {};
      shared_ptr<int32_t> removeNum_ {};
      shared_ptr<int64_t> ruleCode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AddProjectManagerResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline AddProjectManagerResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddProjectManagerResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const AddProjectManagerResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, AddProjectManagerResponseBody::Module) };
    inline AddProjectManagerResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, AddProjectManagerResponseBody::Module) };
    inline AddProjectManagerResponseBody& setModule(const AddProjectManagerResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline AddProjectManagerResponseBody& setModule(AddProjectManagerResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddProjectManagerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddProjectManagerResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline AddProjectManagerResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<AddProjectManagerResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
