// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERSCIMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERSCIMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetIdentityProviderSCIMResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderSCIMResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderSCIMResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetIdentityProviderSCIMResponseBody() = default ;
    GetIdentityProviderSCIMResponseBody(const GetIdentityProviderSCIMResponseBody &) = default ;
    GetIdentityProviderSCIMResponseBody(GetIdentityProviderSCIMResponseBody &&) = default ;
    GetIdentityProviderSCIMResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderSCIMResponseBody() = default ;
    GetIdentityProviderSCIMResponseBody& operator=(const GetIdentityProviderSCIMResponseBody &) = default ;
    GetIdentityProviderSCIMResponseBody& operator=(GetIdentityProviderSCIMResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(configuration, configuration_);
        DARABONBA_PTR_TO_JSON(operationStatus, operationStatus_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(syncEnabled, syncEnabled_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(configuration, configuration_);
        DARABONBA_PTR_FROM_JSON(operationStatus, operationStatus_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(syncEnabled, syncEnabled_);
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
      class Configuration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Configuration& obj) { 
          DARABONBA_PTR_TO_JSON(baseUrl, baseUrl_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Configuration& obj) { 
          DARABONBA_PTR_FROM_JSON(baseUrl, baseUrl_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        Configuration() = default ;
        Configuration(const Configuration &) = default ;
        Configuration(Configuration &&) = default ;
        Configuration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Configuration() = default ;
        Configuration& operator=(const Configuration &) = default ;
        Configuration& operator=(Configuration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->baseUrl_ == nullptr
        && this->status_ == nullptr; };
        // baseUrl Field Functions 
        bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
        void deleteBaseUrl() { this->baseUrl_ = nullptr;};
        inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
        inline Configuration& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Configuration& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The URL configured for the external provisioning system. The presence of a URL does not mean that the external configuration is complete or that AC synchronization is enabled.
        shared_ptr<string> baseUrl_ {};
        // The receiving status of AgentIdentity. Valid values:
        // - Enabled: SCIM receiving is enabled.
        // - Disabled: SCIM receiving is disabled.
        // This is not equivalent to the expected value of syncEnabled for AC.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->configuration_ == nullptr
        && this->operationStatus_ == nullptr && this->status_ == nullptr && this->syncEnabled_ == nullptr; };
      // configuration Field Functions 
      bool hasConfiguration() const { return this->configuration_ != nullptr;};
      void deleteConfiguration() { this->configuration_ = nullptr;};
      inline const Data::Configuration & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, Data::Configuration) };
      inline Data::Configuration getConfiguration() { DARABONBA_PTR_GET(configuration_, Data::Configuration) };
      inline Data& setConfiguration(const Data::Configuration & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
      inline Data& setConfiguration(Data::Configuration && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


      // operationStatus Field Functions 
      bool hasOperationStatus() const { return this->operationStatus_ != nullptr;};
      void deleteOperationStatus() { this->operationStatus_ = nullptr;};
      inline string getOperationStatus() const { DARABONBA_PTR_GET_DEFAULT(operationStatus_, "") };
      inline Data& setOperationStatus(string operationStatus) { DARABONBA_PTR_SET_VALUE(operationStatus_, operationStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // syncEnabled Field Functions 
      bool hasSyncEnabled() const { return this->syncEnabled_ != nullptr;};
      void deleteSyncEnabled() { this->syncEnabled_ = nullptr;};
      inline bool getSyncEnabled() const { DARABONBA_PTR_GET_DEFAULT(syncEnabled_, false) };
      inline Data& setSyncEnabled(bool syncEnabled) { DARABONBA_PTR_SET_VALUE(syncEnabled_, syncEnabled) };


    protected:
      // The actual SAML configuration is read back on demand only in GetIdentityProvider. SCIM queries and preparations return the actual receiving status and URL.
      shared_ptr<Data::Configuration> configuration_ {};
      // Independent of the SAML logon binding status. Valid values:
      // - PENDING: Waiting to be executed.
      // - RUNNING: Being executed.
      // - PAUSED: Paused.
      // - SUCCESS: Succeeded.
      // - FAILED: Failed.
      // - CANCELED: Canceled.
      // If there are no tasks, null is returned or this parameter is not returned. This parameter only indicates the most recent SCIM switch and the first full import task when it is enabled. It does not indicate credential issuance, external provisioning connection tests, or the health of continuous incremental synchronization. The client polls this operation when the status is PENDING or RUNNING.
      shared_ptr<string> operationStatus_ {};
      // UNCONFIGURED：尚未准备完成；WAITING_CONFIGURATION：接收 Enabled、有效 HTTPS URL 和至少一个有效 Token 均已具备，等待外部配置并确认启用；UPDATING：启用或停用任务 PENDING/RUNNING；READY：同步已启用且本次启用任务成功，接收、URL 和 Token 仍可用；DISABLED：停用任务成功，保留配置、凭据和用户；UPDATE_FAILED：操作失败、暂停、取消，或期望启用时配置／凭据不可用。与 SAML/OIDC 状态独立，READY 不证明 Matrix 执行或持续增量链路已验收。
      shared_ptr<string> status_ {};
      // Specifies whether local synchronization is expected. Do not set this parameter to true during CustomSSO initialization. You can only update this parameter by calling UpdateIdentityProviderSCIM. Determine the result based on operationStatus.
      shared_ptr<bool> syncEnabled_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetIdentityProviderSCIMResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetIdentityProviderSCIMResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetIdentityProviderSCIMResponseBody::Data) };
    inline GetIdentityProviderSCIMResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetIdentityProviderSCIMResponseBody::Data) };
    inline GetIdentityProviderSCIMResponseBody& setData(const GetIdentityProviderSCIMResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetIdentityProviderSCIMResponseBody& setData(GetIdentityProviderSCIMResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetIdentityProviderSCIMResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetIdentityProviderSCIMResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIdentityProviderSCIMResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetIdentityProviderSCIMResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // If the request fails, handle the error based on the HTTP status code and the message.
    shared_ptr<string> code_ {};
    // The result structure. For details, see the response fields of this operation. The response of an asynchronous write operation indicates that the request is accepted, but does not guarantee that the background task is completed.
    shared_ptr<GetIdentityProviderSCIMResponseBody::Data> data_ {};
    // The processing status of the current request. This is not equivalent to the final result of the background task.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request acceptance or error message. For the results of an asynchronous task, check the corresponding query operation.
    shared_ptr<string> message_ {};
    // Used to associate the current call with troubleshooting. Retain this parameter when a failure occurs.
    shared_ptr<string> requestId_ {};
    // Indicates whether the current request is successful. A value of true indicates that the current request is processed successfully. For asynchronous writes, you still need to continue querying the task results.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
