// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXTERNALAGENTBOOTSTRAPTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXTERNALAGENTBOOTSTRAPTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateExternalAgentBootstrapTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExternalAgentBootstrapTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExternalAgentBootstrapTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreateExternalAgentBootstrapTokenResponseBody() = default ;
    CreateExternalAgentBootstrapTokenResponseBody(const CreateExternalAgentBootstrapTokenResponseBody &) = default ;
    CreateExternalAgentBootstrapTokenResponseBody(CreateExternalAgentBootstrapTokenResponseBody &&) = default ;
    CreateExternalAgentBootstrapTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExternalAgentBootstrapTokenResponseBody() = default ;
    CreateExternalAgentBootstrapTokenResponseBody& operator=(const CreateExternalAgentBootstrapTokenResponseBody &) = default ;
    CreateExternalAgentBootstrapTokenResponseBody& operator=(CreateExternalAgentBootstrapTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(agentId, agentId_);
        DARABONBA_PTR_TO_JSON(bootstrapToken, bootstrapToken_);
        DARABONBA_PTR_TO_JSON(cms, cms_);
        DARABONBA_PTR_TO_JSON(networkType, networkType_);
        DARABONBA_PTR_TO_JSON(tokenFingerprint, tokenFingerprint_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(agentId, agentId_);
        DARABONBA_PTR_FROM_JSON(bootstrapToken, bootstrapToken_);
        DARABONBA_PTR_FROM_JSON(cms, cms_);
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
      class Cms : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Cms& obj) { 
          DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(licenseKey, licenseKey_);
          DARABONBA_PTR_TO_JSON(workspace, workspace_);
        };
        friend void from_json(const Darabonba::Json& j, Cms& obj) { 
          DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(licenseKey, licenseKey_);
          DARABONBA_PTR_FROM_JSON(workspace, workspace_);
        };
        Cms() = default ;
        Cms(const Cms &) = default ;
        Cms(Cms &&) = default ;
        Cms(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Cms() = default ;
        Cms& operator=(const Cms &) = default ;
        Cms& operator=(Cms &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->licenseKey_ == nullptr && this->workspace_ == nullptr; };
        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline Cms& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // licenseKey Field Functions 
        bool hasLicenseKey() const { return this->licenseKey_ != nullptr;};
        void deleteLicenseKey() { this->licenseKey_ = nullptr;};
        inline string getLicenseKey() const { DARABONBA_PTR_GET_DEFAULT(licenseKey_, "") };
        inline Cms& setLicenseKey(string licenseKey) { DARABONBA_PTR_SET_VALUE(licenseKey_, licenseKey) };


        // workspace Field Functions 
        bool hasWorkspace() const { return this->workspace_ != nullptr;};
        void deleteWorkspace() { this->workspace_ = nullptr;};
        inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
        inline Cms& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


      protected:
        // The CMS reporting endpoint.
        shared_ptr<string> endpoint_ {};
        // The license key used for CMS connection.
        shared_ptr<string> licenseKey_ {};
        // The CMS workspace name.
        shared_ptr<string> workspace_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->bootstrapToken_ == nullptr && this->cms_ == nullptr && this->networkType_ == nullptr && this->tokenFingerprint_ == nullptr && this->workspaceId_ == nullptr; };
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


      // cms Field Functions 
      bool hasCms() const { return this->cms_ != nullptr;};
      void deleteCms() { this->cms_ = nullptr;};
      inline const Data::Cms & getCms() const { DARABONBA_PTR_GET_CONST(cms_, Data::Cms) };
      inline Data::Cms getCms() { DARABONBA_PTR_GET(cms_, Data::Cms) };
      inline Data& setCms(const Data::Cms & cms) { DARABONBA_PTR_SET_VALUE(cms_, cms) };
      inline Data& setCms(Data::Cms && cms) { DARABONBA_PTR_SET_RVALUE(cms_, cms) };


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
      // The external agent ID.
      shared_ptr<string> agentId_ {};
      // The Bootstrap Token used for connecting the external agent.
      shared_ptr<string> bootstrapToken_ {};
      // The CMS configuration used for connecting the external agent.
      shared_ptr<Data::Cms> cms_ {};
      // The network type for connection. Valid values:
      // - INTERNET: public network
      // - INTRANET: internal network
      shared_ptr<string> networkType_ {};
      // The fingerprint of the Bootstrap Token.
      shared_ptr<string> tokenFingerprint_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateExternalAgentBootstrapTokenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateExternalAgentBootstrapTokenResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateExternalAgentBootstrapTokenResponseBody::Data) };
    inline CreateExternalAgentBootstrapTokenResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateExternalAgentBootstrapTokenResponseBody::Data) };
    inline CreateExternalAgentBootstrapTokenResponseBody& setData(const CreateExternalAgentBootstrapTokenResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateExternalAgentBootstrapTokenResponseBody& setData(CreateExternalAgentBootstrapTokenResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateExternalAgentBootstrapTokenResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateExternalAgentBootstrapTokenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateExternalAgentBootstrapTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateExternalAgentBootstrapTokenResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code. The value SUCCESS indicates success.
    shared_ptr<string> code_ {};
    // The Bootstrap Token and CMS configuration required for connecting the external agent.
    shared_ptr<CreateExternalAgentBootstrapTokenResponseBody::Data> data_ {};
    // The HTTP status code. The value 200 indicates success.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message indicating the request processing result.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
