// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYMODIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_APPLYMODIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyModifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyModifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyModifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    ApplyModifyResponseBody() = default ;
    ApplyModifyResponseBody(const ApplyModifyResponseBody &) = default ;
    ApplyModifyResponseBody(ApplyModifyResponseBody &&) = default ;
    ApplyModifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyModifyResponseBody() = default ;
    ApplyModifyResponseBody& operator=(const ApplyModifyResponseBody &) = default ;
    ApplyModifyResponseBody& operator=(ApplyModifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(apply_id, applyId_);
        DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
        DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
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
      virtual bool empty() const override { return this->applyId_ == nullptr
        && this->thirdpartApplyId_ == nullptr && this->thirdpartBusinessId_ == nullptr; };
      // applyId Field Functions 
      bool hasApplyId() const { return this->applyId_ != nullptr;};
      void deleteApplyId() { this->applyId_ = nullptr;};
      inline int64_t getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
      inline Module& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


      // thirdpartApplyId Field Functions 
      bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
      void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
      inline string getThirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
      inline Module& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


      // thirdpartBusinessId Field Functions 
      bool hasThirdpartBusinessId() const { return this->thirdpartBusinessId_ != nullptr;};
      void deleteThirdpartBusinessId() { this->thirdpartBusinessId_ = nullptr;};
      inline string getThirdpartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartBusinessId_, "") };
      inline Module& setThirdpartBusinessId(string thirdpartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdpartBusinessId_, thirdpartBusinessId) };


    protected:
      shared_ptr<int64_t> applyId_ {};
      shared_ptr<string> thirdpartApplyId_ {};
      shared_ptr<string> thirdpartBusinessId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ApplyModifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ApplyModifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const ApplyModifyResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, ApplyModifyResponseBody::Module) };
    inline ApplyModifyResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, ApplyModifyResponseBody::Module) };
    inline ApplyModifyResponseBody& setModule(const ApplyModifyResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline ApplyModifyResponseBody& setModule(ApplyModifyResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ApplyModifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ApplyModifyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ApplyModifyResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ApplyModifyResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
