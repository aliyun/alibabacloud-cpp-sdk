// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TBACCOUNTINFOQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TBACCOUNTINFOQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TBAccountInfoQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TBAccountInfoQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TBAccountInfoQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TBAccountInfoQueryResponseBody() = default ;
    TBAccountInfoQueryResponseBody(const TBAccountInfoQueryResponseBody &) = default ;
    TBAccountInfoQueryResponseBody(TBAccountInfoQueryResponseBody &&) = default ;
    TBAccountInfoQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TBAccountInfoQueryResponseBody() = default ;
    TBAccountInfoQueryResponseBody& operator=(const TBAccountInfoQueryResponseBody &) = default ;
    TBAccountInfoQueryResponseBody& operator=(TBAccountInfoQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(tb_account, tbAccount_);
        DARABONBA_PTR_TO_JSON(tb_bond, tbBond_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(tb_account, tbAccount_);
        DARABONBA_PTR_FROM_JSON(tb_bond, tbBond_);
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
      virtual bool empty() const override { return this->tbAccount_ == nullptr
        && this->tbBond_ == nullptr; };
      // tbAccount Field Functions 
      bool hasTbAccount() const { return this->tbAccount_ != nullptr;};
      void deleteTbAccount() { this->tbAccount_ = nullptr;};
      inline string getTbAccount() const { DARABONBA_PTR_GET_DEFAULT(tbAccount_, "") };
      inline Module& setTbAccount(string tbAccount) { DARABONBA_PTR_SET_VALUE(tbAccount_, tbAccount) };


      // tbBond Field Functions 
      bool hasTbBond() const { return this->tbBond_ != nullptr;};
      void deleteTbBond() { this->tbBond_ = nullptr;};
      inline bool getTbBond() const { DARABONBA_PTR_GET_DEFAULT(tbBond_, false) };
      inline Module& setTbBond(bool tbBond) { DARABONBA_PTR_SET_VALUE(tbBond_, tbBond) };


    protected:
      shared_ptr<string> tbAccount_ {};
      shared_ptr<bool> tbBond_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TBAccountInfoQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TBAccountInfoQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TBAccountInfoQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TBAccountInfoQueryResponseBody::Module) };
    inline TBAccountInfoQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TBAccountInfoQueryResponseBody::Module) };
    inline TBAccountInfoQueryResponseBody& setModule(const TBAccountInfoQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TBAccountInfoQueryResponseBody& setModule(TBAccountInfoQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TBAccountInfoQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TBAccountInfoQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TBAccountInfoQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<TBAccountInfoQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
