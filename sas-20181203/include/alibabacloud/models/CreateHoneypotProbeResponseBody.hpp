// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHONEYPOTPROBERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEHONEYPOTPROBERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateHoneypotProbeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHoneypotProbeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HoneypotProbe, honeypotProbe_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHoneypotProbeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HoneypotProbe, honeypotProbe_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateHoneypotProbeResponseBody() = default ;
    CreateHoneypotProbeResponseBody(const CreateHoneypotProbeResponseBody &) = default ;
    CreateHoneypotProbeResponseBody(CreateHoneypotProbeResponseBody &&) = default ;
    CreateHoneypotProbeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHoneypotProbeResponseBody() = default ;
    CreateHoneypotProbeResponseBody& operator=(const CreateHoneypotProbeResponseBody &) = default ;
    CreateHoneypotProbeResponseBody& operator=(CreateHoneypotProbeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HoneypotProbe : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HoneypotProbe& obj) { 
        DARABONBA_PTR_TO_JSON(ProbeId, probeId_);
      };
      friend void from_json(const Darabonba::Json& j, HoneypotProbe& obj) { 
        DARABONBA_PTR_FROM_JSON(ProbeId, probeId_);
      };
      HoneypotProbe() = default ;
      HoneypotProbe(const HoneypotProbe &) = default ;
      HoneypotProbe(HoneypotProbe &&) = default ;
      HoneypotProbe(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HoneypotProbe() = default ;
      HoneypotProbe& operator=(const HoneypotProbe &) = default ;
      HoneypotProbe& operator=(HoneypotProbe &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->probeId_ == nullptr; };
      // probeId Field Functions 
      bool hasProbeId() const { return this->probeId_ != nullptr;};
      void deleteProbeId() { this->probeId_ = nullptr;};
      inline string getProbeId() const { DARABONBA_PTR_GET_DEFAULT(probeId_, "") };
      inline HoneypotProbe& setProbeId(string probeId) { DARABONBA_PTR_SET_VALUE(probeId_, probeId) };


    protected:
      // The ID of the probe.
      shared_ptr<string> probeId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->honeypotProbe_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateHoneypotProbeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // honeypotProbe Field Functions 
    bool hasHoneypotProbe() const { return this->honeypotProbe_ != nullptr;};
    void deleteHoneypotProbe() { this->honeypotProbe_ = nullptr;};
    inline const CreateHoneypotProbeResponseBody::HoneypotProbe & getHoneypotProbe() const { DARABONBA_PTR_GET_CONST(honeypotProbe_, CreateHoneypotProbeResponseBody::HoneypotProbe) };
    inline CreateHoneypotProbeResponseBody::HoneypotProbe getHoneypotProbe() { DARABONBA_PTR_GET(honeypotProbe_, CreateHoneypotProbeResponseBody::HoneypotProbe) };
    inline CreateHoneypotProbeResponseBody& setHoneypotProbe(const CreateHoneypotProbeResponseBody::HoneypotProbe & honeypotProbe) { DARABONBA_PTR_SET_VALUE(honeypotProbe_, honeypotProbe) };
    inline CreateHoneypotProbeResponseBody& setHoneypotProbe(CreateHoneypotProbeResponseBody::HoneypotProbe && honeypotProbe) { DARABONBA_PTR_SET_RVALUE(honeypotProbe_, honeypotProbe) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateHoneypotProbeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateHoneypotProbeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateHoneypotProbeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateHoneypotProbeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The information about the probe.
    shared_ptr<CreateHoneypotProbeResponseBody::HoneypotProbe> honeypotProbe_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
