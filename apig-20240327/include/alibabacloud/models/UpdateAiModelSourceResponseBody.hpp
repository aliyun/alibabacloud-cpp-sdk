// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAIMODELSOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAIMODELSOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateAiModelSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAiModelSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAiModelSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    UpdateAiModelSourceResponseBody() = default ;
    UpdateAiModelSourceResponseBody(const UpdateAiModelSourceResponseBody &) = default ;
    UpdateAiModelSourceResponseBody(UpdateAiModelSourceResponseBody &&) = default ;
    UpdateAiModelSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAiModelSourceResponseBody() = default ;
    UpdateAiModelSourceResponseBody& operator=(const UpdateAiModelSourceResponseBody &) = default ;
    UpdateAiModelSourceResponseBody& operator=(UpdateAiModelSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(callNamePrefix, callNamePrefix_);
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(modelCount, modelCount_);
        DARABONBA_PTR_TO_JSON(modelSourceId, modelSourceId_);
        DARABONBA_PTR_TO_JSON(provider, provider_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(callNamePrefix, callNamePrefix_);
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(modelCount, modelCount_);
        DARABONBA_PTR_FROM_JSON(modelSourceId, modelSourceId_);
        DARABONBA_PTR_FROM_JSON(provider, provider_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(version, version_);
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
      virtual bool empty() const override { return this->callNamePrefix_ == nullptr
        && this->displayName_ == nullptr && this->gatewayId_ == nullptr && this->modelCount_ == nullptr && this->modelSourceId_ == nullptr && this->provider_ == nullptr
        && this->serviceId_ == nullptr && this->updateTime_ == nullptr && this->version_ == nullptr; };
      // callNamePrefix Field Functions 
      bool hasCallNamePrefix() const { return this->callNamePrefix_ != nullptr;};
      void deleteCallNamePrefix() { this->callNamePrefix_ = nullptr;};
      inline string getCallNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(callNamePrefix_, "") };
      inline Data& setCallNamePrefix(string callNamePrefix) { DARABONBA_PTR_SET_VALUE(callNamePrefix_, callNamePrefix) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Data& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // modelCount Field Functions 
      bool hasModelCount() const { return this->modelCount_ != nullptr;};
      void deleteModelCount() { this->modelCount_ = nullptr;};
      inline int64_t getModelCount() const { DARABONBA_PTR_GET_DEFAULT(modelCount_, 0L) };
      inline Data& setModelCount(int64_t modelCount) { DARABONBA_PTR_SET_VALUE(modelCount_, modelCount) };


      // modelSourceId Field Functions 
      bool hasModelSourceId() const { return this->modelSourceId_ != nullptr;};
      void deleteModelSourceId() { this->modelSourceId_ = nullptr;};
      inline string getModelSourceId() const { DARABONBA_PTR_GET_DEFAULT(modelSourceId_, "") };
      inline Data& setModelSourceId(string modelSourceId) { DARABONBA_PTR_SET_VALUE(modelSourceId_, modelSourceId) };


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
      inline Data& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Data& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline Data& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> callNamePrefix_ {};
      // The display name of the model source or model provider.
      shared_ptr<string> displayName_ {};
      // The ID of the AI gateway instance to which the resource belongs.
      shared_ptr<string> gatewayId_ {};
      // The number of models.
      shared_ptr<int64_t> modelCount_ {};
      // The model source ID. Use the modelSourceId returned by CreateAiModelSource.
      shared_ptr<string> modelSourceId_ {};
      // The stable identifier of the model provider.
      shared_ptr<string> provider_ {};
      // The ID of the actual AI service bound to the model source.
      shared_ptr<string> serviceId_ {};
      // The time of the most recent business update. The time is in RFC 3339 format and in the UTC time zone.
      shared_ptr<string> updateTime_ {};
      // The current version of the object. This version is used for conditional validation during updates or deletions.
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateAiModelSourceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateAiModelSourceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateAiModelSourceResponseBody::Data) };
    inline UpdateAiModelSourceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateAiModelSourceResponseBody::Data) };
    inline UpdateAiModelSourceResponseBody& setData(const UpdateAiModelSourceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateAiModelSourceResponseBody& setData(UpdateAiModelSourceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateAiModelSourceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateAiModelSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code. Ok indicates success, and a specific business error code indicates failure.
    shared_ptr<string> code_ {};
    // The business result returned by the model source operation.
    shared_ptr<UpdateAiModelSourceResponseBody::Data> data_ {};
    // The response message that describes the request processing result.
    shared_ptr<string> message_ {};
    // The request ID generated by the system to trace the call.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
