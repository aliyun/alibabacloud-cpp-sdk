// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMAGENTDEBUGTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMAGENTDEBUGTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateCustomAgentDebugTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomAgentDebugTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomAgentDebugTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreateCustomAgentDebugTokenResponseBody() = default ;
    CreateCustomAgentDebugTokenResponseBody(const CreateCustomAgentDebugTokenResponseBody &) = default ;
    CreateCustomAgentDebugTokenResponseBody(CreateCustomAgentDebugTokenResponseBody &&) = default ;
    CreateCustomAgentDebugTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomAgentDebugTokenResponseBody() = default ;
    CreateCustomAgentDebugTokenResponseBody& operator=(const CreateCustomAgentDebugTokenResponseBody &) = default ;
    CreateCustomAgentDebugTokenResponseBody& operator=(CreateCustomAgentDebugTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(agentId, agentId_);
        DARABONBA_PTR_TO_JSON(bootstrapToken, bootstrapToken_);
        DARABONBA_PTR_TO_JSON(networkType, networkType_);
        DARABONBA_PTR_TO_JSON(tokenFingerprint, tokenFingerprint_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(agentId, agentId_);
        DARABONBA_PTR_FROM_JSON(bootstrapToken, bootstrapToken_);
        DARABONBA_PTR_FROM_JSON(networkType, networkType_);
        DARABONBA_PTR_FROM_JSON(tokenFingerprint, tokenFingerprint_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
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
      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->bootstrapToken_ == nullptr && this->networkType_ == nullptr && this->tokenFingerprint_ == nullptr && this->workspaceId_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Data& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // bootstrapToken Field Functions 
      bool hasBootstrapToken() const { return this->bootstrapToken_ != nullptr;};
      void deleteBootstrapToken() { this->bootstrapToken_ = nullptr;};
      inline string getBootstrapToken() const { DARABONBA_PTR_GET_DEFAULT(bootstrapToken_, "") };
      inline Data& setBootstrapToken(string bootstrapToken) { DARABONBA_PTR_SET_VALUE(bootstrapToken_, bootstrapToken) };


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline Data& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      // tokenFingerprint Field Functions 
      bool hasTokenFingerprint() const { return this->tokenFingerprint_ != nullptr;};
      void deleteTokenFingerprint() { this->tokenFingerprint_ = nullptr;};
      inline string getTokenFingerprint() const { DARABONBA_PTR_GET_DEFAULT(tokenFingerprint_, "") };
      inline Data& setTokenFingerprint(string tokenFingerprint) { DARABONBA_PTR_SET_VALUE(tokenFingerprint_, tokenFingerprint) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The ID of the high-code agent corresponding to the token.
      shared_ptr<string> agentId_ {};
      // The token used by the AgentCore SDK for local debugging. Keep the token secure. Do not write it to logs or commit it to code repositories.
      shared_ptr<string> bootstrapToken_ {};
      // The network type used for the token, which is the same as the networkType parameter in the request.
      shared_ptr<string> networkType_ {};
      // The fingerprint used to identify the issued token, which can be used to troubleshoot issuance records.
      shared_ptr<string> tokenFingerprint_ {};
      // The ID of the workspace corresponding to the token.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateCustomAgentDebugTokenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateCustomAgentDebugTokenResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateCustomAgentDebugTokenResponseBody::Data) };
    inline CreateCustomAgentDebugTokenResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateCustomAgentDebugTokenResponseBody::Data) };
    inline CreateCustomAgentDebugTokenResponseBody& setData(const CreateCustomAgentDebugTokenResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateCustomAgentDebugTokenResponseBody& setData(CreateCustomAgentDebugTokenResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateCustomAgentDebugTokenResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateCustomAgentDebugTokenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCustomAgentDebugTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateCustomAgentDebugTokenResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code. SUCCESS is returned if the call is successful.
    shared_ptr<string> code_ {};
    // The debug token issued in this request, the token fingerprint, and the corresponding resource and network information.
    shared_ptr<CreateCustomAgentDebugTokenResponseBody::Data> data_ {};
    // The HTTP status code of the request.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The description of the request processing result.
    shared_ptr<string> message_ {};
    // The unique identifier of the request, which can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. A value of true indicates success. A value of false indicates failure.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
