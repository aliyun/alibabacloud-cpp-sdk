// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKERBOOTSTRAPTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKERBOOTSTRAPTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class CreateWorkerBootstrapTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkerBootstrapTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkerBootstrapTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateWorkerBootstrapTokenResponseBody() = default ;
    CreateWorkerBootstrapTokenResponseBody(const CreateWorkerBootstrapTokenResponseBody &) = default ;
    CreateWorkerBootstrapTokenResponseBody(CreateWorkerBootstrapTokenResponseBody &&) = default ;
    CreateWorkerBootstrapTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkerBootstrapTokenResponseBody() = default ;
    CreateWorkerBootstrapTokenResponseBody& operator=(const CreateWorkerBootstrapTokenResponseBody &) = default ;
    CreateWorkerBootstrapTokenResponseBody& operator=(CreateWorkerBootstrapTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BootstrapToken, bootstrapToken_);
        DARABONBA_PTR_TO_JSON(Cms, cms_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
        DARABONBA_PTR_TO_JSON(TokenFingerprint, tokenFingerprint_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BootstrapToken, bootstrapToken_);
        DARABONBA_PTR_FROM_JSON(Cms, cms_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
        DARABONBA_PTR_FROM_JSON(TokenFingerprint, tokenFingerprint_);
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
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(LicenseKey, licenseKey_);
          DARABONBA_PTR_TO_JSON(Workspace, workspace_);
        };
        friend void from_json(const Darabonba::Json& j, Cms& obj) { 
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(LicenseKey, licenseKey_);
          DARABONBA_PTR_FROM_JSON(Workspace, workspace_);
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
        shared_ptr<string> endpoint_ {};
        shared_ptr<string> licenseKey_ {};
        shared_ptr<string> workspace_ {};
      };

      virtual bool empty() const override { return this->bootstrapToken_ == nullptr
        && this->cms_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->networkType_ == nullptr && this->tokenFingerprint_ == nullptr; };
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


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


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


    protected:
      shared_ptr<string> bootstrapToken_ {};
      shared_ptr<Data::Cms> cms_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> networkType_ {};
      shared_ptr<string> tokenFingerprint_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateWorkerBootstrapTokenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateWorkerBootstrapTokenResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateWorkerBootstrapTokenResponseBody::Data) };
    inline CreateWorkerBootstrapTokenResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateWorkerBootstrapTokenResponseBody::Data) };
    inline CreateWorkerBootstrapTokenResponseBody& setData(const CreateWorkerBootstrapTokenResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateWorkerBootstrapTokenResponseBody& setData(CreateWorkerBootstrapTokenResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateWorkerBootstrapTokenResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateWorkerBootstrapTokenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWorkerBootstrapTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateWorkerBootstrapTokenResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<CreateWorkerBootstrapTokenResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
