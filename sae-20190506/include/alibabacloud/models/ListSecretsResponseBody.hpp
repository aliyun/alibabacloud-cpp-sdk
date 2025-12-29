// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListSecretsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Secrets, secrets_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Secrets, secrets_);
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
      class Secrets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Secrets& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_TO_JSON(RelateApps, relateApps_);
          DARABONBA_PTR_TO_JSON(SecretId, secretId_);
          DARABONBA_PTR_TO_JSON(SecretName, secretName_);
          DARABONBA_PTR_TO_JSON(SecretType, secretType_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Secrets& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_FROM_JSON(RelateApps, relateApps_);
          DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
          DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
          DARABONBA_PTR_FROM_JSON(SecretType, secretType_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
        class RelateApps : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RelateApps& obj) { 
            DARABONBA_PTR_TO_JSON(AppId, appId_);
            DARABONBA_PTR_TO_JSON(AppName, appName_);
          };
          friend void from_json(const Darabonba::Json& j, RelateApps& obj) { 
            DARABONBA_PTR_FROM_JSON(AppId, appId_);
            DARABONBA_PTR_FROM_JSON(AppName, appName_);
          };
          RelateApps() = default ;
          RelateApps(const RelateApps &) = default ;
          RelateApps(RelateApps &&) = default ;
          RelateApps(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RelateApps() = default ;
          RelateApps& operator=(const RelateApps &) = default ;
          RelateApps& operator=(RelateApps &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr; };
          // appId Field Functions 
          bool hasAppId() const { return this->appId_ != nullptr;};
          void deleteAppId() { this->appId_ = nullptr;};
          inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
          inline RelateApps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


          // appName Field Functions 
          bool hasAppName() const { return this->appName_ != nullptr;};
          void deleteAppName() { this->appName_ = nullptr;};
          inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
          inline RelateApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        protected:
          // The application ID.
          shared_ptr<string> appId_ {};
          // The application name.
          shared_ptr<string> appName_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->namespaceId_ == nullptr && this->relateApps_ == nullptr && this->secretId_ == nullptr && this->secretName_ == nullptr && this->secretType_ == nullptr
        && this->updateTime_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Secrets& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // namespaceId Field Functions 
        bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
        void deleteNamespaceId() { this->namespaceId_ = nullptr;};
        inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
        inline Secrets& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


        // relateApps Field Functions 
        bool hasRelateApps() const { return this->relateApps_ != nullptr;};
        void deleteRelateApps() { this->relateApps_ = nullptr;};
        inline const vector<Secrets::RelateApps> & getRelateApps() const { DARABONBA_PTR_GET_CONST(relateApps_, vector<Secrets::RelateApps>) };
        inline vector<Secrets::RelateApps> getRelateApps() { DARABONBA_PTR_GET(relateApps_, vector<Secrets::RelateApps>) };
        inline Secrets& setRelateApps(const vector<Secrets::RelateApps> & relateApps) { DARABONBA_PTR_SET_VALUE(relateApps_, relateApps) };
        inline Secrets& setRelateApps(vector<Secrets::RelateApps> && relateApps) { DARABONBA_PTR_SET_RVALUE(relateApps_, relateApps) };


        // secretId Field Functions 
        bool hasSecretId() const { return this->secretId_ != nullptr;};
        void deleteSecretId() { this->secretId_ = nullptr;};
        inline int64_t getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, 0L) };
        inline Secrets& setSecretId(int64_t secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


        // secretName Field Functions 
        bool hasSecretName() const { return this->secretName_ != nullptr;};
        void deleteSecretName() { this->secretName_ = nullptr;};
        inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
        inline Secrets& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


        // secretType Field Functions 
        bool hasSecretType() const { return this->secretType_ != nullptr;};
        void deleteSecretType() { this->secretType_ = nullptr;};
        inline string getSecretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
        inline Secrets& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Secrets& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The time when the Secret was created.
        shared_ptr<int64_t> createTime_ {};
        // The namespace ID.
        shared_ptr<string> namespaceId_ {};
        // The associated applications.
        shared_ptr<vector<Secrets::RelateApps>> relateApps_ {};
        // The Secret ID.
        shared_ptr<int64_t> secretId_ {};
        // The Secret name.
        shared_ptr<string> secretName_ {};
        // The Secret type.
        // 
        // Set the value to **kubernetes.io/dockerconfigjson**. The value indicates the secret for the username and password of the image repository and is used for authentication when images are pulled during application deployment.
        shared_ptr<string> secretType_ {};
        // The time when the Secret was updated.
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->secrets_ == nullptr; };
      // secrets Field Functions 
      bool hasSecrets() const { return this->secrets_ != nullptr;};
      void deleteSecrets() { this->secrets_ = nullptr;};
      inline const vector<Data::Secrets> & getSecrets() const { DARABONBA_PTR_GET_CONST(secrets_, vector<Data::Secrets>) };
      inline vector<Data::Secrets> getSecrets() { DARABONBA_PTR_GET(secrets_, vector<Data::Secrets>) };
      inline Data& setSecrets(const vector<Data::Secrets> & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
      inline Data& setSecrets(vector<Data::Secrets> && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


    protected:
      // The Secrets.
      shared_ptr<vector<Data::Secrets>> secrets_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSecretsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSecretsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSecretsResponseBody::Data) };
    inline ListSecretsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSecretsResponseBody::Data) };
    inline ListSecretsResponseBody& setData(const ListSecretsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSecretsResponseBody& setData(ListSecretsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListSecretsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


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


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSecretsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ListSecretsResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<ListSecretsResponseBody::Data> data_ {};
    // The error code returned. Take note of the following rules:
    // 
    // *   If the call is successful, the **ErrorCode** parameter is not returned.
    // *   If the call fails, the **ErrorCode** parameter is returned. For more information, see the "**Error codes**" section in this topic.
    shared_ptr<string> errorCode_ {};
    // The returned message. Take note of the following rules:
    // 
    // *   If the call is successful, **success** is returned.
    // *   If the call fails, an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
    // The trace ID that is used to query the details of the request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
