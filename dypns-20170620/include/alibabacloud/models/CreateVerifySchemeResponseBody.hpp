// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVERIFYSCHEMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVERIFYSCHEMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class CreateVerifySchemeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVerifySchemeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(GateVerifySchemeDTO, gateVerifySchemeDTO_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVerifySchemeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(GateVerifySchemeDTO, gateVerifySchemeDTO_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateVerifySchemeResponseBody() = default ;
    CreateVerifySchemeResponseBody(const CreateVerifySchemeResponseBody &) = default ;
    CreateVerifySchemeResponseBody(CreateVerifySchemeResponseBody &&) = default ;
    CreateVerifySchemeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVerifySchemeResponseBody() = default ;
    CreateVerifySchemeResponseBody& operator=(const CreateVerifySchemeResponseBody &) = default ;
    CreateVerifySchemeResponseBody& operator=(CreateVerifySchemeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GateVerifySchemeDTO : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GateVerifySchemeDTO& obj) { 
        DARABONBA_PTR_TO_JSON(SchemeCode, schemeCode_);
      };
      friend void from_json(const Darabonba::Json& j, GateVerifySchemeDTO& obj) { 
        DARABONBA_PTR_FROM_JSON(SchemeCode, schemeCode_);
      };
      GateVerifySchemeDTO() = default ;
      GateVerifySchemeDTO(const GateVerifySchemeDTO &) = default ;
      GateVerifySchemeDTO(GateVerifySchemeDTO &&) = default ;
      GateVerifySchemeDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GateVerifySchemeDTO() = default ;
      GateVerifySchemeDTO& operator=(const GateVerifySchemeDTO &) = default ;
      GateVerifySchemeDTO& operator=(GateVerifySchemeDTO &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->schemeCode_ == nullptr; };
      // schemeCode Field Functions 
      bool hasSchemeCode() const { return this->schemeCode_ != nullptr;};
      void deleteSchemeCode() { this->schemeCode_ = nullptr;};
      inline string getSchemeCode() const { DARABONBA_PTR_GET_DEFAULT(schemeCode_, "") };
      inline GateVerifySchemeDTO& setSchemeCode(string schemeCode) { DARABONBA_PTR_SET_VALUE(schemeCode_, schemeCode) };


    protected:
      shared_ptr<string> schemeCode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->gateVerifySchemeDTO_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateVerifySchemeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // gateVerifySchemeDTO Field Functions 
    bool hasGateVerifySchemeDTO() const { return this->gateVerifySchemeDTO_ != nullptr;};
    void deleteGateVerifySchemeDTO() { this->gateVerifySchemeDTO_ = nullptr;};
    inline const CreateVerifySchemeResponseBody::GateVerifySchemeDTO & getGateVerifySchemeDTO() const { DARABONBA_PTR_GET_CONST(gateVerifySchemeDTO_, CreateVerifySchemeResponseBody::GateVerifySchemeDTO) };
    inline CreateVerifySchemeResponseBody::GateVerifySchemeDTO getGateVerifySchemeDTO() { DARABONBA_PTR_GET(gateVerifySchemeDTO_, CreateVerifySchemeResponseBody::GateVerifySchemeDTO) };
    inline CreateVerifySchemeResponseBody& setGateVerifySchemeDTO(const CreateVerifySchemeResponseBody::GateVerifySchemeDTO & gateVerifySchemeDTO) { DARABONBA_PTR_SET_VALUE(gateVerifySchemeDTO_, gateVerifySchemeDTO) };
    inline CreateVerifySchemeResponseBody& setGateVerifySchemeDTO(CreateVerifySchemeResponseBody::GateVerifySchemeDTO && gateVerifySchemeDTO) { DARABONBA_PTR_SET_RVALUE(gateVerifySchemeDTO_, gateVerifySchemeDTO) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline CreateVerifySchemeResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateVerifySchemeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVerifySchemeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateVerifySchemeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<CreateVerifySchemeResponseBody::GateVerifySchemeDTO> gateVerifySchemeDTO_ {};
    shared_ptr<int64_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
