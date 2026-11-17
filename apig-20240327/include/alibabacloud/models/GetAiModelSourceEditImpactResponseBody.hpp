// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIMODELSOURCEEDITIMPACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIMODELSOURCEEDITIMPACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetAiModelSourceEditImpactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiModelSourceEditImpactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiModelSourceEditImpactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAiModelSourceEditImpactResponseBody() = default ;
    GetAiModelSourceEditImpactResponseBody(const GetAiModelSourceEditImpactResponseBody &) = default ;
    GetAiModelSourceEditImpactResponseBody(GetAiModelSourceEditImpactResponseBody &&) = default ;
    GetAiModelSourceEditImpactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiModelSourceEditImpactResponseBody() = default ;
    GetAiModelSourceEditImpactResponseBody& operator=(const GetAiModelSourceEditImpactResponseBody &) = default ;
    GetAiModelSourceEditImpactResponseBody& operator=(GetAiModelSourceEditImpactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(cleanup, cleanup_);
        DARABONBA_PTR_TO_JSON(references, references_);
        DARABONBA_PTR_TO_JSON(sourceVersion, sourceVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(cleanup, cleanup_);
        DARABONBA_PTR_FROM_JSON(references, references_);
        DARABONBA_PTR_FROM_JSON(sourceVersion, sourceVersion_);
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
      class References : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const References& obj) { 
          DARABONBA_PTR_TO_JSON(apiId, apiId_);
          DARABONBA_PTR_TO_JSON(logicalModelId, logicalModelId_);
          DARABONBA_PTR_TO_JSON(modelCardId, modelCardId_);
          DARABONBA_PTR_TO_JSON(objectId, objectId_);
          DARABONBA_PTR_TO_JSON(objectType, objectType_);
          DARABONBA_PTR_TO_JSON(role, role_);
          DARABONBA_PTR_TO_JSON(routeId, routeId_);
          DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
          DARABONBA_PTR_TO_JSON(state, state_);
        };
        friend void from_json(const Darabonba::Json& j, References& obj) { 
          DARABONBA_PTR_FROM_JSON(apiId, apiId_);
          DARABONBA_PTR_FROM_JSON(logicalModelId, logicalModelId_);
          DARABONBA_PTR_FROM_JSON(modelCardId, modelCardId_);
          DARABONBA_PTR_FROM_JSON(objectId, objectId_);
          DARABONBA_PTR_FROM_JSON(objectType, objectType_);
          DARABONBA_PTR_FROM_JSON(role, role_);
          DARABONBA_PTR_FROM_JSON(routeId, routeId_);
          DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
          DARABONBA_PTR_FROM_JSON(state, state_);
        };
        References() = default ;
        References(const References &) = default ;
        References(References &&) = default ;
        References(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~References() = default ;
        References& operator=(const References &) = default ;
        References& operator=(References &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->logicalModelId_ == nullptr && this->modelCardId_ == nullptr && this->objectId_ == nullptr && this->objectType_ == nullptr && this->role_ == nullptr
        && this->routeId_ == nullptr && this->serviceId_ == nullptr && this->state_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline References& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // logicalModelId Field Functions 
        bool hasLogicalModelId() const { return this->logicalModelId_ != nullptr;};
        void deleteLogicalModelId() { this->logicalModelId_ = nullptr;};
        inline string getLogicalModelId() const { DARABONBA_PTR_GET_DEFAULT(logicalModelId_, "") };
        inline References& setLogicalModelId(string logicalModelId) { DARABONBA_PTR_SET_VALUE(logicalModelId_, logicalModelId) };


        // modelCardId Field Functions 
        bool hasModelCardId() const { return this->modelCardId_ != nullptr;};
        void deleteModelCardId() { this->modelCardId_ = nullptr;};
        inline string getModelCardId() const { DARABONBA_PTR_GET_DEFAULT(modelCardId_, "") };
        inline References& setModelCardId(string modelCardId) { DARABONBA_PTR_SET_VALUE(modelCardId_, modelCardId) };


        // objectId Field Functions 
        bool hasObjectId() const { return this->objectId_ != nullptr;};
        void deleteObjectId() { this->objectId_ = nullptr;};
        inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
        inline References& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline References& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline References& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // routeId Field Functions 
        bool hasRouteId() const { return this->routeId_ != nullptr;};
        void deleteRouteId() { this->routeId_ = nullptr;};
        inline string getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
        inline References& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


        // serviceId Field Functions 
        bool hasServiceId() const { return this->serviceId_ != nullptr;};
        void deleteServiceId() { this->serviceId_ = nullptr;};
        inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
        inline References& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline References& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      protected:
        // The ID of the API that references this model source.
        shared_ptr<string> apiId_ {};
        // The logical model ID. Use the vm- identifier returned by the API operation.
        shared_ptr<string> logicalModelId_ {};
        // The model identifier. The source model card ID is used for standard models, and the vm- identifier is used for logical model entries.
        shared_ptr<string> modelCardId_ {};
        // The identifier of the object that references this model source.
        shared_ptr<string> objectId_ {};
        // The new LogicalModel reference locator, which is optional for legacy API references.
        shared_ptr<string> objectType_ {};
        // The role of the model source in the reference configuration, such as the selected model, fallback model, or service binding.
        shared_ptr<string> role_ {};
        // The ID of the route where the published reference resides.
        shared_ptr<string> routeId_ {};
        // The ID of the actual AI service to which the model source is bound.
        shared_ptr<string> serviceId_ {};
        // Indicates whether the model source reference is from the saved configuration (Draft) or the published configuration (Published).
        shared_ptr<string> state_ {};
      };

      virtual bool empty() const override { return this->cleanup_ == nullptr
        && this->references_ == nullptr && this->sourceVersion_ == nullptr; };
      // cleanup Field Functions 
      bool hasCleanup() const { return this->cleanup_ != nullptr;};
      void deleteCleanup() { this->cleanup_ = nullptr;};
      inline const vector<string> & getCleanup() const { DARABONBA_PTR_GET_CONST(cleanup_, vector<string>) };
      inline vector<string> getCleanup() { DARABONBA_PTR_GET(cleanup_, vector<string>) };
      inline Data& setCleanup(const vector<string> & cleanup) { DARABONBA_PTR_SET_VALUE(cleanup_, cleanup) };
      inline Data& setCleanup(vector<string> && cleanup) { DARABONBA_PTR_SET_RVALUE(cleanup_, cleanup) };


      // references Field Functions 
      bool hasReferences() const { return this->references_ != nullptr;};
      void deleteReferences() { this->references_ = nullptr;};
      inline const vector<Data::References> & getReferences() const { DARABONBA_PTR_GET_CONST(references_, vector<Data::References>) };
      inline vector<Data::References> getReferences() { DARABONBA_PTR_GET(references_, vector<Data::References>) };
      inline Data& setReferences(const vector<Data::References> & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
      inline Data& setReferences(vector<Data::References> && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


      // sourceVersion Field Functions 
      bool hasSourceVersion() const { return this->sourceVersion_ != nullptr;};
      void deleteSourceVersion() { this->sourceVersion_ = nullptr;};
      inline int64_t getSourceVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceVersion_, 0L) };
      inline Data& setSourceVersion(int64_t sourceVersion) { DARABONBA_PTR_SET_VALUE(sourceVersion_, sourceVersion) };


    protected:
      // The items to be cleaned up that are returned by the impact query, including model sources, models within the source, licenses, and billing projections.
      shared_ptr<vector<string>> cleanup_ {};
      // The actual references to the model source in the current saved and published configurations.
      shared_ptr<vector<Data::References>> references_ {};
      // The model source version read when the impact is queried.
      shared_ptr<int64_t> sourceVersion_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAiModelSourceEditImpactResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAiModelSourceEditImpactResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAiModelSourceEditImpactResponseBody::Data) };
    inline GetAiModelSourceEditImpactResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAiModelSourceEditImpactResponseBody::Data) };
    inline GetAiModelSourceEditImpactResponseBody& setData(const GetAiModelSourceEditImpactResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAiModelSourceEditImpactResponseBody& setData(GetAiModelSourceEditImpactResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAiModelSourceEditImpactResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAiModelSourceEditImpactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code. Ok is returned upon success, and a specific business error code is returned upon failure.
    shared_ptr<string> code_ {};
    // The business result returned for the model source operation.
    shared_ptr<GetAiModelSourceEditImpactResponseBody::Data> data_ {};
    // The response message that describes the result of the request.
    shared_ptr<string> message_ {};
    // The request ID. This ID is generated by the system to trace the call.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
