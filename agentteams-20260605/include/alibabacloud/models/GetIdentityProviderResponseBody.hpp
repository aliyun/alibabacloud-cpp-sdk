// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class GetIdentityProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
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
        DARABONBA_PTR_TO_JSON(EventSubscriptionCallbackUrl, eventSubscriptionCallbackUrl_);
        DARABONBA_PTR_TO_JSON(IdentityProviderType, identityProviderType_);
        DARABONBA_PTR_TO_JSON(IdpMetadata, idpMetadata_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LoginCallbackUrl, loginCallbackUrl_);
        DARABONBA_PTR_TO_JSON(LoginEnabled, loginEnabled_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SyncEnabled, syncEnabled_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EventSubscriptionCallbackUrl, eventSubscriptionCallbackUrl_);
        DARABONBA_PTR_FROM_JSON(IdentityProviderType, identityProviderType_);
        DARABONBA_PTR_FROM_JSON(IdpMetadata, idpMetadata_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LoginCallbackUrl, loginCallbackUrl_);
        DARABONBA_PTR_FROM_JSON(LoginEnabled, loginEnabled_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SyncEnabled, syncEnabled_);
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
      virtual bool empty() const override { return this->eventSubscriptionCallbackUrl_ == nullptr
        && this->identityProviderType_ == nullptr && this->idpMetadata_ == nullptr && this->instanceId_ == nullptr && this->loginCallbackUrl_ == nullptr && this->loginEnabled_ == nullptr
        && this->status_ == nullptr && this->syncEnabled_ == nullptr; };
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


      // idpMetadata Field Functions 
      bool hasIdpMetadata() const { return this->idpMetadata_ != nullptr;};
      void deleteIdpMetadata() { this->idpMetadata_ = nullptr;};
      inline const map<string, string> & getIdpMetadata() const { DARABONBA_PTR_GET_CONST(idpMetadata_, map<string, string>) };
      inline map<string, string> getIdpMetadata() { DARABONBA_PTR_GET(idpMetadata_, map<string, string>) };
      inline Data& setIdpMetadata(const map<string, string> & idpMetadata) { DARABONBA_PTR_SET_VALUE(idpMetadata_, idpMetadata) };
      inline Data& setIdpMetadata(map<string, string> && idpMetadata) { DARABONBA_PTR_SET_RVALUE(idpMetadata_, idpMetadata) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


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
      shared_ptr<string> eventSubscriptionCallbackUrl_ {};
      shared_ptr<string> identityProviderType_ {};
      shared_ptr<map<string, string>> idpMetadata_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> loginCallbackUrl_ {};
      shared_ptr<bool> loginEnabled_ {};
      shared_ptr<string> status_ {};
      shared_ptr<bool> syncEnabled_ {};
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
    shared_ptr<string> code_ {};
    shared_ptr<GetIdentityProviderResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
