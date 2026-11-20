// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPHONENOABYTRACKNORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPHONENOABYTRACKNORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QueryPhoneNoAByTrackNoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPhoneNoAByTrackNoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPhoneNoAByTrackNoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryPhoneNoAByTrackNoResponseBody() = default ;
    QueryPhoneNoAByTrackNoResponseBody(const QueryPhoneNoAByTrackNoResponseBody &) = default ;
    QueryPhoneNoAByTrackNoResponseBody(QueryPhoneNoAByTrackNoResponseBody &&) = default ;
    QueryPhoneNoAByTrackNoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPhoneNoAByTrackNoResponseBody() = default ;
    QueryPhoneNoAByTrackNoResponseBody& operator=(const QueryPhoneNoAByTrackNoResponseBody &) = default ;
    QueryPhoneNoAByTrackNoResponseBody& operator=(QueryPhoneNoAByTrackNoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(Extension, extension_);
        DARABONBA_PTR_TO_JSON(PhoneNoA, phoneNoA_);
        DARABONBA_PTR_TO_JSON(PhoneNoX, phoneNoX_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(Extension, extension_);
        DARABONBA_PTR_FROM_JSON(PhoneNoA, phoneNoA_);
        DARABONBA_PTR_FROM_JSON(PhoneNoX, phoneNoX_);
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
      virtual bool empty() const override { return this->extension_ == nullptr
        && this->phoneNoA_ == nullptr && this->phoneNoX_ == nullptr; };
      // extension Field Functions 
      bool hasExtension() const { return this->extension_ != nullptr;};
      void deleteExtension() { this->extension_ = nullptr;};
      inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
      inline Module& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


      // phoneNoA Field Functions 
      bool hasPhoneNoA() const { return this->phoneNoA_ != nullptr;};
      void deletePhoneNoA() { this->phoneNoA_ = nullptr;};
      inline string getPhoneNoA() const { DARABONBA_PTR_GET_DEFAULT(phoneNoA_, "") };
      inline Module& setPhoneNoA(string phoneNoA) { DARABONBA_PTR_SET_VALUE(phoneNoA_, phoneNoA) };


      // phoneNoX Field Functions 
      bool hasPhoneNoX() const { return this->phoneNoX_ != nullptr;};
      void deletePhoneNoX() { this->phoneNoX_ = nullptr;};
      inline string getPhoneNoX() const { DARABONBA_PTR_GET_DEFAULT(phoneNoX_, "") };
      inline Module& setPhoneNoX(string phoneNoX) { DARABONBA_PTR_SET_VALUE(phoneNoX_, phoneNoX) };


    protected:
      // The extension of phone number X.
      shared_ptr<string> extension_ {};
      // Phone number A.
      shared_ptr<string> phoneNoA_ {};
      // The private number, that is, phone number X.
      shared_ptr<string> phoneNoX_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryPhoneNoAByTrackNoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryPhoneNoAByTrackNoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<QueryPhoneNoAByTrackNoResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<QueryPhoneNoAByTrackNoResponseBody::Module>) };
    inline vector<QueryPhoneNoAByTrackNoResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<QueryPhoneNoAByTrackNoResponseBody::Module>) };
    inline QueryPhoneNoAByTrackNoResponseBody& setModule(const vector<QueryPhoneNoAByTrackNoResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline QueryPhoneNoAByTrackNoResponseBody& setModule(vector<QueryPhoneNoAByTrackNoResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPhoneNoAByTrackNoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other status codes indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/109196.html).
    shared_ptr<string> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The information returned after the phone numbers were bound.
    shared_ptr<vector<QueryPhoneNoAByTrackNoResponseBody::Module>> module_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
