// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESENTINELBLOCKFALLBACKDEFINITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESENTINELBLOCKFALLBACKDEFINITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateSentinelBlockFallbackDefinitionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSentinelBlockFallbackDefinitionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSentinelBlockFallbackDefinitionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateSentinelBlockFallbackDefinitionResponseBody() = default ;
    CreateSentinelBlockFallbackDefinitionResponseBody(const CreateSentinelBlockFallbackDefinitionResponseBody &) = default ;
    CreateSentinelBlockFallbackDefinitionResponseBody(CreateSentinelBlockFallbackDefinitionResponseBody &&) = default ;
    CreateSentinelBlockFallbackDefinitionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSentinelBlockFallbackDefinitionResponseBody() = default ;
    CreateSentinelBlockFallbackDefinitionResponseBody& operator=(const CreateSentinelBlockFallbackDefinitionResponseBody &) = default ;
    CreateSentinelBlockFallbackDefinitionResponseBody& operator=(CreateSentinelBlockFallbackDefinitionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(FallbackBehavior, fallbackBehavior_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(ResourceClassification, resourceClassification_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(FallbackBehavior, fallbackBehavior_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(ResourceClassification, resourceClassification_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      virtual bool empty() const override { return this->appName_ == nullptr
        && this->fallbackBehavior_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->resourceClassification_ == nullptr
        && this->userId_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // fallbackBehavior Field Functions 
      bool hasFallbackBehavior() const { return this->fallbackBehavior_ != nullptr;};
      void deleteFallbackBehavior() { this->fallbackBehavior_ = nullptr;};
      inline string getFallbackBehavior() const { DARABONBA_PTR_GET_DEFAULT(fallbackBehavior_, "") };
      inline Data& setFallbackBehavior(string fallbackBehavior) { DARABONBA_PTR_SET_VALUE(fallbackBehavior_, fallbackBehavior) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Data& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // resourceClassification Field Functions 
      bool hasResourceClassification() const { return this->resourceClassification_ != nullptr;};
      void deleteResourceClassification() { this->resourceClassification_ = nullptr;};
      inline int32_t getResourceClassification() const { DARABONBA_PTR_GET_DEFAULT(resourceClassification_, 0) };
      inline Data& setResourceClassification(int32_t resourceClassification) { DARABONBA_PTR_SET_VALUE(resourceClassification_, resourceClassification) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> appName_ {};
      shared_ptr<string> fallbackBehavior_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> namespace_ {};
      shared_ptr<int32_t> resourceClassification_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline CreateSentinelBlockFallbackDefinitionResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateSentinelBlockFallbackDefinitionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateSentinelBlockFallbackDefinitionResponseBody::Data) };
    inline CreateSentinelBlockFallbackDefinitionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateSentinelBlockFallbackDefinitionResponseBody::Data) };
    inline CreateSentinelBlockFallbackDefinitionResponseBody& setData(const CreateSentinelBlockFallbackDefinitionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateSentinelBlockFallbackDefinitionResponseBody& setData(CreateSentinelBlockFallbackDefinitionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateSentinelBlockFallbackDefinitionResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateSentinelBlockFallbackDefinitionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSentinelBlockFallbackDefinitionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline CreateSentinelBlockFallbackDefinitionResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<CreateSentinelBlockFallbackDefinitionResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
