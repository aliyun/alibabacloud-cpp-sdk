// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDCUSTOMAGENTIMAGEPREPARATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FINDCUSTOMAGENTIMAGEPREPARATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class FindCustomAgentImagePreparationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindCustomAgentImagePreparationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, FindCustomAgentImagePreparationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    FindCustomAgentImagePreparationResponseBody() = default ;
    FindCustomAgentImagePreparationResponseBody(const FindCustomAgentImagePreparationResponseBody &) = default ;
    FindCustomAgentImagePreparationResponseBody(FindCustomAgentImagePreparationResponseBody &&) = default ;
    FindCustomAgentImagePreparationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindCustomAgentImagePreparationResponseBody() = default ;
    FindCustomAgentImagePreparationResponseBody& operator=(const FindCustomAgentImagePreparationResponseBody &) = default ;
    FindCustomAgentImagePreparationResponseBody& operator=(FindCustomAgentImagePreparationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(agentId, agentId_);
        DARABONBA_PTR_TO_JSON(error, error_);
        DARABONBA_PTR_TO_JSON(failedPhase, failedPhase_);
        DARABONBA_PTR_TO_JSON(phase, phase_);
        DARABONBA_PTR_TO_JSON(preparationId, preparationId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(agentId, agentId_);
        DARABONBA_PTR_FROM_JSON(error, error_);
        DARABONBA_PTR_FROM_JSON(failedPhase, failedPhase_);
        DARABONBA_PTR_FROM_JSON(phase, phase_);
        DARABONBA_PTR_FROM_JSON(preparationId, preparationId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Error : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Error& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(message, message_);
        };
        friend void from_json(const Darabonba::Json& j, Error& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(message, message_);
        };
        Error() = default ;
        Error(const Error &) = default ;
        Error(Error &&) = default ;
        Error(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Error() = default ;
        Error& operator=(const Error &) = default ;
        Error& operator=(Error &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Error& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Error& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The business error code for image preparation. This code is used to identify the failure type. For the specific cause, refer to the message.
        shared_ptr<string> code_ {};
        // The specific cause of the failure. This may include underlying errors such as image not found, authentication failure, network timeout, or certificate verification error. Passwords, tokens, or authentication headers are not returned. If the underlying system does not provide a cause, a general description is returned.
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->error_ == nullptr && this->failedPhase_ == nullptr && this->phase_ == nullptr && this->preparationId_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Data& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline const Data::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, Data::Error) };
      inline Data::Error getError() { DARABONBA_PTR_GET(error_, Data::Error) };
      inline Data& setError(const Data::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
      inline Data& setError(Data::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


      // failedPhase Field Functions 
      bool hasFailedPhase() const { return this->failedPhase_ != nullptr;};
      void deleteFailedPhase() { this->failedPhase_ = nullptr;};
      inline string getFailedPhase() const { DARABONBA_PTR_GET_DEFAULT(failedPhase_, "") };
      inline Data& setFailedPhase(string failedPhase) { DARABONBA_PTR_SET_VALUE(failedPhase_, failedPhase) };


      // phase Field Functions 
      bool hasPhase() const { return this->phase_ != nullptr;};
      void deletePhase() { this->phase_ = nullptr;};
      inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
      inline Data& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


      // preparationId Field Functions 
      bool hasPreparationId() const { return this->preparationId_ != nullptr;};
      void deletePreparationId() { this->preparationId_ = nullptr;};
      inline string getPreparationId() const { DARABONBA_PTR_GET_DEFAULT(preparationId_, "") };
      inline Data& setPreparationId(string preparationId) { DARABONBA_PTR_SET_VALUE(preparationId_, preparationId) };


    protected:
      // The ID of the target agent.
      shared_ptr<string> agentId_ {};
      // The security error. This parameter is returned only when the task fails. Otherwise, the value is null.
      shared_ptr<Data::Error> error_ {};
      // The phase where the failure occurred. This parameter is returned only when the phase is FAILED. Otherwise, the value is null.
      shared_ptr<string> failedPhase_ {};
      // The current phase. Only SUCCEEDED indicates that the target version is deployed successfully.
      shared_ptr<string> phase_ {};
      // The ID of the task submitted in the console.
      shared_ptr<string> preparationId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FindCustomAgentImagePreparationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const FindCustomAgentImagePreparationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, FindCustomAgentImagePreparationResponseBody::Data) };
    inline FindCustomAgentImagePreparationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, FindCustomAgentImagePreparationResponseBody::Data) };
    inline FindCustomAgentImagePreparationResponseBody& setData(const FindCustomAgentImagePreparationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline FindCustomAgentImagePreparationResponseBody& setData(FindCustomAgentImagePreparationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline FindCustomAgentImagePreparationResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FindCustomAgentImagePreparationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FindCustomAgentImagePreparationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FindCustomAgentImagePreparationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The preparation query result. For the asynchronous execution status, refer to the phase.
    shared_ptr<FindCustomAgentImagePreparationResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
