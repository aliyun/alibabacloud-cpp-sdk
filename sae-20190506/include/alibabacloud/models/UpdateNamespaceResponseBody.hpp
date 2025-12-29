// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENAMESPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATENAMESPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateNamespaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNamespaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNamespaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    UpdateNamespaceResponseBody() = default ;
    UpdateNamespaceResponseBody(const UpdateNamespaceResponseBody &) = default ;
    UpdateNamespaceResponseBody(UpdateNamespaceResponseBody &&) = default ;
    UpdateNamespaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNamespaceResponseBody() = default ;
    UpdateNamespaceResponseBody& operator=(const UpdateNamespaceResponseBody &) = default ;
    UpdateNamespaceResponseBody& operator=(UpdateNamespaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EnableMicroRegistration, enableMicroRegistration_);
        DARABONBA_PTR_TO_JSON(NameSpaceShortId, nameSpaceShortId_);
        DARABONBA_PTR_TO_JSON(NamespaceDescription, namespaceDescription_);
        DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableMicroRegistration, enableMicroRegistration_);
        DARABONBA_PTR_FROM_JSON(NameSpaceShortId, nameSpaceShortId_);
        DARABONBA_PTR_FROM_JSON(NamespaceDescription, namespaceDescription_);
        DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
      virtual bool empty() const override { return this->enableMicroRegistration_ == nullptr
        && this->nameSpaceShortId_ == nullptr && this->namespaceDescription_ == nullptr && this->namespaceId_ == nullptr && this->namespaceName_ == nullptr && this->regionId_ == nullptr; };
      // enableMicroRegistration Field Functions 
      bool hasEnableMicroRegistration() const { return this->enableMicroRegistration_ != nullptr;};
      void deleteEnableMicroRegistration() { this->enableMicroRegistration_ = nullptr;};
      inline bool getEnableMicroRegistration() const { DARABONBA_PTR_GET_DEFAULT(enableMicroRegistration_, false) };
      inline Data& setEnableMicroRegistration(bool enableMicroRegistration) { DARABONBA_PTR_SET_VALUE(enableMicroRegistration_, enableMicroRegistration) };


      // nameSpaceShortId Field Functions 
      bool hasNameSpaceShortId() const { return this->nameSpaceShortId_ != nullptr;};
      void deleteNameSpaceShortId() { this->nameSpaceShortId_ = nullptr;};
      inline string getNameSpaceShortId() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceShortId_, "") };
      inline Data& setNameSpaceShortId(string nameSpaceShortId) { DARABONBA_PTR_SET_VALUE(nameSpaceShortId_, nameSpaceShortId) };


      // namespaceDescription Field Functions 
      bool hasNamespaceDescription() const { return this->namespaceDescription_ != nullptr;};
      void deleteNamespaceDescription() { this->namespaceDescription_ = nullptr;};
      inline string getNamespaceDescription() const { DARABONBA_PTR_GET_DEFAULT(namespaceDescription_, "") };
      inline Data& setNamespaceDescription(string namespaceDescription) { DARABONBA_PTR_SET_VALUE(namespaceDescription_, namespaceDescription) };


      // namespaceId Field Functions 
      bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
      void deleteNamespaceId() { this->namespaceId_ = nullptr;};
      inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
      inline Data& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


      // namespaceName Field Functions 
      bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
      void deleteNamespaceName() { this->namespaceName_ = nullptr;};
      inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
      inline Data& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // Indicates whether to enable SAE built-in registry:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> enableMicroRegistration_ {};
      // The short ID of the namespace.
      shared_ptr<string> nameSpaceShortId_ {};
      // The description of the namespace.
      shared_ptr<string> namespaceDescription_ {};
      // The ID of the namespace.
      shared_ptr<string> namespaceId_ {};
      // The name of the namespace.
      shared_ptr<string> namespaceName_ {};
      // The region where the namespace resides.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateNamespaceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateNamespaceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateNamespaceResponseBody::Data) };
    inline UpdateNamespaceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateNamespaceResponseBody::Data) };
    inline UpdateNamespaceResponseBody& setData(const UpdateNamespaceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateNamespaceResponseBody& setData(UpdateNamespaceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline UpdateNamespaceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateNamespaceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateNamespaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateNamespaceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline UpdateNamespaceResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The information about a namespace.
    shared_ptr<UpdateNamespaceResponseBody::Data> data_ {};
    // The error code returned. Take note of the following rules:
    // 
    // *   The **ErrorCode** parameter is not returned if the request succeeds.
    // *   If the call fails, the **ErrorCode** parameter is returned. For more information, see the "**Error codes**" section of this topic.
    shared_ptr<string> errorCode_ {};
    // The message returned for the operation.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the information about the namespace was updated. Valid values:
    // 
    // *   **true**: The instance was updated.
    // *   **false**: The instance failed to be updated.
    shared_ptr<bool> success_ {};
    // The trace ID that is used to query the details of the request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
