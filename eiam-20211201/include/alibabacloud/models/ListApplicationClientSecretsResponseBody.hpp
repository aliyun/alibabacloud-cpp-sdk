// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONCLIENTSECRETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONCLIENTSECRETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationClientSecretsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationClientSecretsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationClientSecrets, applicationClientSecrets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationClientSecretsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationClientSecrets, applicationClientSecrets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationClientSecretsResponseBody() = default ;
    ListApplicationClientSecretsResponseBody(const ListApplicationClientSecretsResponseBody &) = default ;
    ListApplicationClientSecretsResponseBody(ListApplicationClientSecretsResponseBody &&) = default ;
    ListApplicationClientSecretsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationClientSecretsResponseBody() = default ;
    ListApplicationClientSecretsResponseBody& operator=(const ListApplicationClientSecretsResponseBody &) = default ;
    ListApplicationClientSecretsResponseBody& operator=(ListApplicationClientSecretsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationClientSecrets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationClientSecrets& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
        DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LastUsedTime, lastUsedTime_);
        DARABONBA_PTR_TO_JSON(SecretId, secretId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationClientSecrets& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
        DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LastUsedTime, lastUsedTime_);
        DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ApplicationClientSecrets() = default ;
      ApplicationClientSecrets(const ApplicationClientSecrets &) = default ;
      ApplicationClientSecrets(ApplicationClientSecrets &&) = default ;
      ApplicationClientSecrets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationClientSecrets() = default ;
      ApplicationClientSecrets& operator=(const ApplicationClientSecrets &) = default ;
      ApplicationClientSecrets& operator=(ApplicationClientSecrets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->clientId_ == nullptr && this->clientSecret_ == nullptr && this->expirationTime_ == nullptr && this->instanceId_ == nullptr && this->lastUsedTime_ == nullptr
        && this->secretId_ == nullptr && this->status_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline ApplicationClientSecrets& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline ApplicationClientSecrets& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // clientSecret Field Functions 
      bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
      void deleteClientSecret() { this->clientSecret_ = nullptr;};
      inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
      inline ApplicationClientSecrets& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline int64_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
      inline ApplicationClientSecrets& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ApplicationClientSecrets& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lastUsedTime Field Functions 
      bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
      void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
      inline int64_t getLastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
      inline ApplicationClientSecrets& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


      // secretId Field Functions 
      bool hasSecretId() const { return this->secretId_ != nullptr;};
      void deleteSecretId() { this->secretId_ = nullptr;};
      inline string getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
      inline ApplicationClientSecrets& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ApplicationClientSecrets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the application that you want to query.
      shared_ptr<string> applicationId_ {};
      // The client ID of the application.
      shared_ptr<string> clientId_ {};
      // The client key secret of the application. The value is not masked.
      shared_ptr<string> clientSecret_ {};
      shared_ptr<int64_t> expirationTime_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The time when the client key was last used. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> lastUsedTime_ {};
      // The client key ID of the application.
      shared_ptr<string> secretId_ {};
      // The status of the client key. Valid values:
      // 
      // *   Enabled: The client key is enabled.
      // *   Disabled: The client key is disabled.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->applicationClientSecrets_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applicationClientSecrets Field Functions 
    bool hasApplicationClientSecrets() const { return this->applicationClientSecrets_ != nullptr;};
    void deleteApplicationClientSecrets() { this->applicationClientSecrets_ = nullptr;};
    inline const vector<ListApplicationClientSecretsResponseBody::ApplicationClientSecrets> & getApplicationClientSecrets() const { DARABONBA_PTR_GET_CONST(applicationClientSecrets_, vector<ListApplicationClientSecretsResponseBody::ApplicationClientSecrets>) };
    inline vector<ListApplicationClientSecretsResponseBody::ApplicationClientSecrets> getApplicationClientSecrets() { DARABONBA_PTR_GET(applicationClientSecrets_, vector<ListApplicationClientSecretsResponseBody::ApplicationClientSecrets>) };
    inline ListApplicationClientSecretsResponseBody& setApplicationClientSecrets(const vector<ListApplicationClientSecretsResponseBody::ApplicationClientSecrets> & applicationClientSecrets) { DARABONBA_PTR_SET_VALUE(applicationClientSecrets_, applicationClientSecrets) };
    inline ListApplicationClientSecretsResponseBody& setApplicationClientSecrets(vector<ListApplicationClientSecretsResponseBody::ApplicationClientSecrets> && applicationClientSecrets) { DARABONBA_PTR_SET_RVALUE(applicationClientSecrets_, applicationClientSecrets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationClientSecretsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListApplicationClientSecretsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the client keys.
    shared_ptr<vector<ListApplicationClientSecretsResponseBody::ApplicationClientSecrets>> applicationClientSecrets_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
