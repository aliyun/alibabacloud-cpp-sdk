// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListSecretsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Secrets, secrets_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Secrets, secrets_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListSecretsResponseBody() = default ;
    ListSecretsResponseBody(const ListSecretsResponseBody &) = default ;
    ListSecretsResponseBody(ListSecretsResponseBody &&) = default ;
    ListSecretsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretsResponseBody() = default ;
    ListSecretsResponseBody& operator=(const ListSecretsResponseBody &) = default ;
    ListSecretsResponseBody& operator=(ListSecretsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Secrets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Secrets& obj) { 
        DARABONBA_PTR_TO_JSON(Secrets, secrets_);
      };
      friend void from_json(const Darabonba::Json& j, Secrets& obj) { 
        DARABONBA_PTR_FROM_JSON(Secrets, secrets_);
      };
      Secrets() = default ;
      Secrets(const Secrets &) = default ;
      Secrets(Secrets &&) = default ;
      Secrets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Secrets() = default ;
      Secrets& operator=(const Secrets &) = default ;
      Secrets& operator=(Secrets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SecretsItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecretsItem& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SecretArn, secretArn_);
          DARABONBA_PTR_TO_JSON(SecretName, secretName_);
          DARABONBA_PTR_TO_JSON(Username, username_);
        };
        friend void from_json(const Darabonba::Json& j, SecretsItem& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SecretArn, secretArn_);
          DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
        };
        SecretsItem() = default ;
        SecretsItem(const SecretsItem &) = default ;
        SecretsItem(SecretsItem &&) = default ;
        SecretsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecretsItem() = default ;
        SecretsItem& operator=(const SecretsItem &) = default ;
        SecretsItem& operator=(SecretsItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->DBInstanceId_ == nullptr && this->description_ == nullptr && this->regionId_ == nullptr && this->secretArn_ == nullptr && this->secretName_ == nullptr
        && this->username_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
        inline SecretsItem& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline SecretsItem& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline SecretsItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SecretsItem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // secretArn Field Functions 
        bool hasSecretArn() const { return this->secretArn_ != nullptr;};
        void deleteSecretArn() { this->secretArn_ = nullptr;};
        inline string getSecretArn() const { DARABONBA_PTR_GET_DEFAULT(secretArn_, "") };
        inline SecretsItem& setSecretArn(string secretArn) { DARABONBA_PTR_SET_VALUE(secretArn_, secretArn) };


        // secretName Field Functions 
        bool hasSecretName() const { return this->secretName_ != nullptr;};
        void deleteSecretName() { this->secretName_ = nullptr;};
        inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
        inline SecretsItem& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline SecretsItem& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      protected:
        // The ID of the Alibaba Cloud account.
        shared_ptr<string> accountId_ {};
        // The instance ID.
        shared_ptr<string> DBInstanceId_ {};
        // The description of the access credential.
        shared_ptr<string> description_ {};
        // The region ID of the instance.
        shared_ptr<string> regionId_ {};
        // The Alibaba Cloud Resource Name (ARN) of the access credential for the created Data API account. Format: `acs:gpdb:{{region}}:{{accountId}}:secret/{{secretName}}-{{32 digits random string}`.
        shared_ptr<string> secretArn_ {};
        // The name of the access credential.
        shared_ptr<string> secretName_ {};
        // The name of the database account.
        shared_ptr<string> username_ {};
      };

      virtual bool empty() const override { return this->secrets_ == nullptr; };
      // secrets Field Functions 
      bool hasSecrets() const { return this->secrets_ != nullptr;};
      void deleteSecrets() { this->secrets_ = nullptr;};
      inline const vector<Secrets::SecretsItem> & getSecrets() const { DARABONBA_PTR_GET_CONST(secrets_, vector<Secrets::SecretsItem>) };
      inline vector<Secrets::SecretsItem> getSecrets() { DARABONBA_PTR_GET(secrets_, vector<Secrets::SecretsItem>) };
      inline Secrets& setSecrets(const vector<Secrets::SecretsItem> & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
      inline Secrets& setSecrets(vector<Secrets::SecretsItem> && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


    protected:
      shared_ptr<vector<Secrets::SecretsItem>> secrets_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->secrets_ == nullptr && this->status_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListSecretsResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSecretsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSecretsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secrets Field Functions 
    bool hasSecrets() const { return this->secrets_ != nullptr;};
    void deleteSecrets() { this->secrets_ = nullptr;};
    inline const ListSecretsResponseBody::Secrets & getSecrets() const { DARABONBA_PTR_GET_CONST(secrets_, ListSecretsResponseBody::Secrets) };
    inline ListSecretsResponseBody::Secrets getSecrets() { DARABONBA_PTR_GET(secrets_, ListSecretsResponseBody::Secrets) };
    inline ListSecretsResponseBody& setSecrets(const ListSecretsResponseBody::Secrets & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
    inline ListSecretsResponseBody& setSecrets(ListSecretsResponseBody::Secrets && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListSecretsResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of access credentials.
    shared_ptr<int64_t> count_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried access credentials.
    shared_ptr<ListSecretsResponseBody::Secrets> secrets_ {};
    // The status of the operation. Valid values:
    // 
    // *   **success**
    // *   **fail**
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
