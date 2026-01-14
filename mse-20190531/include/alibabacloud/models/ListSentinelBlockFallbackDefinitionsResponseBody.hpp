// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENTINELBLOCKFALLBACKDEFINITIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSENTINELBLOCKFALLBACKDEFINITIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListSentinelBlockFallbackDefinitionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSentinelBlockFallbackDefinitionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSentinelBlockFallbackDefinitionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSentinelBlockFallbackDefinitionsResponseBody() = default ;
    ListSentinelBlockFallbackDefinitionsResponseBody(const ListSentinelBlockFallbackDefinitionsResponseBody &) = default ;
    ListSentinelBlockFallbackDefinitionsResponseBody(ListSentinelBlockFallbackDefinitionsResponseBody &&) = default ;
    ListSentinelBlockFallbackDefinitionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSentinelBlockFallbackDefinitionsResponseBody() = default ;
    ListSentinelBlockFallbackDefinitionsResponseBody& operator=(const ListSentinelBlockFallbackDefinitionsResponseBody &) = default ;
    ListSentinelBlockFallbackDefinitionsResponseBody& operator=(ListSentinelBlockFallbackDefinitionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_ANY_TO_JSON(FallbackBehavior, fallbackBehavior_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(ResourceClassification, resourceClassification_);
        DARABONBA_ANY_TO_JSON(TargetMap, targetMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_ANY_FROM_JSON(FallbackBehavior, fallbackBehavior_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(ResourceClassification, resourceClassification_);
        DARABONBA_ANY_FROM_JSON(TargetMap, targetMap_);
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
        && this->targetMap_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // fallbackBehavior Field Functions 
      bool hasFallbackBehavior() const { return this->fallbackBehavior_ != nullptr;};
      void deleteFallbackBehavior() { this->fallbackBehavior_ = nullptr;};
      inline       const Darabonba::Json & getFallbackBehavior() const { DARABONBA_GET(fallbackBehavior_) };
      Darabonba::Json & getFallbackBehavior() { DARABONBA_GET(fallbackBehavior_) };
      inline Data& setFallbackBehavior(const Darabonba::Json & fallbackBehavior) { DARABONBA_SET_VALUE(fallbackBehavior_, fallbackBehavior) };
      inline Data& setFallbackBehavior(Darabonba::Json && fallbackBehavior) { DARABONBA_SET_RVALUE(fallbackBehavior_, fallbackBehavior) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


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
      inline string getResourceClassification() const { DARABONBA_PTR_GET_DEFAULT(resourceClassification_, "") };
      inline Data& setResourceClassification(string resourceClassification) { DARABONBA_PTR_SET_VALUE(resourceClassification_, resourceClassification) };


      // targetMap Field Functions 
      bool hasTargetMap() const { return this->targetMap_ != nullptr;};
      void deleteTargetMap() { this->targetMap_ = nullptr;};
      inline       const Darabonba::Json & getTargetMap() const { DARABONBA_GET(targetMap_) };
      Darabonba::Json & getTargetMap() { DARABONBA_GET(targetMap_) };
      inline Data& setTargetMap(const Darabonba::Json & targetMap) { DARABONBA_SET_VALUE(targetMap_, targetMap) };
      inline Data& setTargetMap(Darabonba::Json && targetMap) { DARABONBA_SET_RVALUE(targetMap_, targetMap) };


    protected:
      // The name of the application.
      shared_ptr<string> appName_ {};
      // Behavior  detail.
      Darabonba::Json fallbackBehavior_ {};
      // Behavior Id
      shared_ptr<string> id_ {};
      // The name of the behavior.
      shared_ptr<string> name_ {};
      // The name of the Microservices namespace.
      shared_ptr<string> namespace_ {};
      // Behavior classification.
      shared_ptr<string> resourceClassification_ {};
      // Resource information bound to the behavior.
      Darabonba::Json targetMap_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListSentinelBlockFallbackDefinitionsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListSentinelBlockFallbackDefinitionsResponseBody::Data>) };
    inline vector<ListSentinelBlockFallbackDefinitionsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListSentinelBlockFallbackDefinitionsResponseBody::Data>) };
    inline ListSentinelBlockFallbackDefinitionsResponseBody& setData(const vector<ListSentinelBlockFallbackDefinitionsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSentinelBlockFallbackDefinitionsResponseBody& setData(vector<ListSentinelBlockFallbackDefinitionsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListSentinelBlockFallbackDefinitionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSentinelBlockFallbackDefinitionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSentinelBlockFallbackDefinitionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSentinelBlockFallbackDefinitionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the data.
    shared_ptr<vector<ListSentinelBlockFallbackDefinitionsResponseBody::Data>> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
