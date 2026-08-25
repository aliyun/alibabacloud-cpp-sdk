// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetIdentityProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetIdentityProviderResponseBody() = default ;
    GetIdentityProviderResponseBody(const GetIdentityProviderResponseBody &) = default ;
    GetIdentityProviderResponseBody(GetIdentityProviderResponseBody &&) = default ;
    GetIdentityProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderResponseBody() = default ;
    GetIdentityProviderResponseBody& operator=(const GetIdentityProviderResponseBody &) = default ;
    GetIdentityProviderResponseBody& operator=(GetIdentityProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(eventSubscriptionCallbackUrl, eventSubscriptionCallbackUrl_);
        DARABONBA_PTR_TO_JSON(identityProviderType, identityProviderType_);
        DARABONBA_PTR_TO_JSON(loginCallbackUrl, loginCallbackUrl_);
        DARABONBA_PTR_TO_JSON(loginEnabled, loginEnabled_);
        DARABONBA_PTR_TO_JSON(metadata, metadata_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(syncEnabled, syncEnabled_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(eventSubscriptionCallbackUrl, eventSubscriptionCallbackUrl_);
        DARABONBA_PTR_FROM_JSON(identityProviderType, identityProviderType_);
        DARABONBA_PTR_FROM_JSON(loginCallbackUrl, loginCallbackUrl_);
        DARABONBA_PTR_FROM_JSON(loginEnabled, loginEnabled_);
        DARABONBA_PTR_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(syncEnabled, syncEnabled_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
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
      class Metadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
          DARABONBA_PTR_TO_JSON(appId, appId_);
          DARABONBA_PTR_TO_JSON(appKey, appKey_);
          DARABONBA_PTR_TO_JSON(corpId, corpId_);
        };
        friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
          DARABONBA_PTR_FROM_JSON(appId, appId_);
          DARABONBA_PTR_FROM_JSON(appKey, appKey_);
          DARABONBA_PTR_FROM_JSON(corpId, corpId_);
        };
        Metadata() = default ;
        Metadata(const Metadata &) = default ;
        Metadata(Metadata &&) = default ;
        Metadata(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metadata() = default ;
        Metadata& operator=(const Metadata &) = default ;
        Metadata& operator=(Metadata &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appKey_ == nullptr && this->corpId_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Metadata& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appKey Field Functions 
        bool hasAppKey() const { return this->appKey_ != nullptr;};
        void deleteAppKey() { this->appKey_ = nullptr;};
        inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
        inline Metadata& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


        // corpId Field Functions 
        bool hasCorpId() const { return this->corpId_ != nullptr;};
        void deleteCorpId() { this->corpId_ = nullptr;};
        inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
        inline Metadata& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      protected:
        // The App ID of the Lark application. Required when the binding type is Feishu.
        shared_ptr<string> appId_ {};
        // The AppKey of the DingTalk application. Required when the binding type is DingTalk.
        shared_ptr<string> appKey_ {};
        // The CorpId of the DingTalk enterprise. Required when the binding type is DingTalk.
        shared_ptr<string> corpId_ {};
      };

      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->eventSubscriptionCallbackUrl_ == nullptr && this->identityProviderType_ == nullptr && this->loginCallbackUrl_ == nullptr && this->loginEnabled_ == nullptr && this->metadata_ == nullptr
        && this->status_ == nullptr && this->syncEnabled_ == nullptr && this->updatedAt_ == nullptr && this->workspaceId_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // eventSubscriptionCallbackUrl Field Functions 
      bool hasEventSubscriptionCallbackUrl() const { return this->eventSubscriptionCallbackUrl_ != nullptr;};
      void deleteEventSubscriptionCallbackUrl() { this->eventSubscriptionCallbackUrl_ = nullptr;};
      inline string getEventSubscriptionCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(eventSubscriptionCallbackUrl_, "") };
      inline Data& setEventSubscriptionCallbackUrl(string eventSubscriptionCallbackUrl) { DARABONBA_PTR_SET_VALUE(eventSubscriptionCallbackUrl_, eventSubscriptionCallbackUrl) };


      // identityProviderType Field Functions 
      bool hasIdentityProviderType() const { return this->identityProviderType_ != nullptr;};
      void deleteIdentityProviderType() { this->identityProviderType_ = nullptr;};
      inline string getIdentityProviderType() const { DARABONBA_PTR_GET_DEFAULT(identityProviderType_, "") };
      inline Data& setIdentityProviderType(string identityProviderType) { DARABONBA_PTR_SET_VALUE(identityProviderType_, identityProviderType) };


      // loginCallbackUrl Field Functions 
      bool hasLoginCallbackUrl() const { return this->loginCallbackUrl_ != nullptr;};
      void deleteLoginCallbackUrl() { this->loginCallbackUrl_ = nullptr;};
      inline string getLoginCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(loginCallbackUrl_, "") };
      inline Data& setLoginCallbackUrl(string loginCallbackUrl) { DARABONBA_PTR_SET_VALUE(loginCallbackUrl_, loginCallbackUrl) };


      // loginEnabled Field Functions 
      bool hasLoginEnabled() const { return this->loginEnabled_ != nullptr;};
      void deleteLoginEnabled() { this->loginEnabled_ = nullptr;};
      inline bool getLoginEnabled() const { DARABONBA_PTR_GET_DEFAULT(loginEnabled_, false) };
      inline Data& setLoginEnabled(bool loginEnabled) { DARABONBA_PTR_SET_VALUE(loginEnabled_, loginEnabled) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline const Data::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, Data::Metadata) };
      inline Data::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, Data::Metadata) };
      inline Data& setMetadata(const Data::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
      inline Data& setMetadata(Data::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


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


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The creation time in UTC, formatted according to RFC 3339.
      shared_ptr<string> createdAt_ {};
      // The event subscription callback URL. Configure this URL in the application on the external identity provider side to receive organization change events. An empty string is returned if the user pool has not been provisioned.
      shared_ptr<string> eventSubscriptionCallbackUrl_ {};
      // The type of the external identity provider. Valid values: DingTalk, Feishu.
      shared_ptr<string> identityProviderType_ {};
      // The logon callback URL. Configure this URL in the application on the external identity provider side. An empty string is returned if the user pool has not been provisioned.
      shared_ptr<string> loginCallbackUrl_ {};
      // Indicates whether workspace users are allowed to log on through this external identity provider.
      shared_ptr<bool> loginEnabled_ {};
      // The application configuration of the external identity provider. Application secret configurations are not returned.
      shared_ptr<Data::Metadata> metadata_ {};
      // The status. Valid values:
      // - CONFIGURED: The configuration has been accepted and is waiting for the user pool to be provisioned.
      // - SYNCING: Organization members are being synchronized.
      // - SYNCED: Organization member synchronization is complete.
      // - READY: The binding is active.
      // - SYNC_FAILED: Organization member synchronization failed.
      // - UPDATING: The configuration is being updated.
      // - UPDATE_FAILED: The configuration update failed.
      // - DISCONNECTING: The binding is being removed.
      // - DISCONNECT_FAILED: The unbinding failed.
      shared_ptr<string> status_ {};
      // Indicates whether organization member synchronization is enabled. When enabled, the external identity provider synchronizes organization members as workspace users.
      shared_ptr<bool> syncEnabled_ {};
      // The time of the last modification in UTC, formatted according to RFC 3339.
      shared_ptr<string> updatedAt_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetIdentityProviderResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetIdentityProviderResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetIdentityProviderResponseBody::Data) };
    inline GetIdentityProviderResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetIdentityProviderResponseBody::Data) };
    inline GetIdentityProviderResponseBody& setData(const GetIdentityProviderResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetIdentityProviderResponseBody& setData(GetIdentityProviderResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetIdentityProviderResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetIdentityProviderResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIdentityProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetIdentityProviderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The binding details of the external identity provider.
    shared_ptr<GetIdentityProviderResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message. An error description is returned if the request fails.
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
