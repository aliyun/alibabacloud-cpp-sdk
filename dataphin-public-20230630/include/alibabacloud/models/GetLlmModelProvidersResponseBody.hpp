// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLLMMODELPROVIDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLLMMODELPROVIDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetLlmModelProvidersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLlmModelProvidersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetLlmModelProvidersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetLlmModelProvidersResponseBody() = default ;
    GetLlmModelProvidersResponseBody(const GetLlmModelProvidersResponseBody &) = default ;
    GetLlmModelProvidersResponseBody(GetLlmModelProvidersResponseBody &&) = default ;
    GetLlmModelProvidersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLlmModelProvidersResponseBody() = default ;
    GetLlmModelProvidersResponseBody& operator=(const GetLlmModelProvidersResponseBody &) = default ;
    GetLlmModelProvidersResponseBody& operator=(GetLlmModelProvidersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BaseUrl, baseUrl_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LlmModels, llmModels_);
        DARABONBA_PTR_TO_JSON(ProviderSource, providerSource_);
        DARABONBA_PTR_TO_JSON(ProviderType, providerType_);
        DARABONBA_PTR_TO_JSON(ServiceProvider, serviceProvider_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BaseUrl, baseUrl_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LlmModels, llmModels_);
        DARABONBA_PTR_FROM_JSON(ProviderSource, providerSource_);
        DARABONBA_PTR_FROM_JSON(ProviderType, providerType_);
        DARABONBA_PTR_FROM_JSON(ServiceProvider, serviceProvider_);
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
      class LlmModels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LlmModels& obj) { 
          DARABONBA_PTR_TO_JSON(CnName, cnName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EmbeddingDimensions, embeddingDimensions_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(InvokeType, invokeType_);
          DARABONBA_PTR_TO_JSON(ModelId, modelId_);
          DARABONBA_PTR_TO_JSON(ModelTypes, modelTypes_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ServiceProvider, serviceProvider_);
          DARABONBA_PTR_TO_JSON(Tasks, tasks_);
        };
        friend void from_json(const Darabonba::Json& j, LlmModels& obj) { 
          DARABONBA_PTR_FROM_JSON(CnName, cnName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EmbeddingDimensions, embeddingDimensions_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(InvokeType, invokeType_);
          DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
          DARABONBA_PTR_FROM_JSON(ModelTypes, modelTypes_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ServiceProvider, serviceProvider_);
          DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
        };
        LlmModels() = default ;
        LlmModels(const LlmModels &) = default ;
        LlmModels(LlmModels &&) = default ;
        LlmModels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LlmModels() = default ;
        LlmModels& operator=(const LlmModels &) = default ;
        LlmModels& operator=(LlmModels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cnName_ == nullptr
        && this->description_ == nullptr && this->embeddingDimensions_ == nullptr && this->enabled_ == nullptr && this->invokeType_ == nullptr && this->modelId_ == nullptr
        && this->modelTypes_ == nullptr && this->name_ == nullptr && this->serviceProvider_ == nullptr && this->tasks_ == nullptr; };
        // cnName Field Functions 
        bool hasCnName() const { return this->cnName_ != nullptr;};
        void deleteCnName() { this->cnName_ = nullptr;};
        inline string getCnName() const { DARABONBA_PTR_GET_DEFAULT(cnName_, "") };
        inline LlmModels& setCnName(string cnName) { DARABONBA_PTR_SET_VALUE(cnName_, cnName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline LlmModels& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // embeddingDimensions Field Functions 
        bool hasEmbeddingDimensions() const { return this->embeddingDimensions_ != nullptr;};
        void deleteEmbeddingDimensions() { this->embeddingDimensions_ = nullptr;};
        inline const vector<int32_t> & getEmbeddingDimensions() const { DARABONBA_PTR_GET_CONST(embeddingDimensions_, vector<int32_t>) };
        inline vector<int32_t> getEmbeddingDimensions() { DARABONBA_PTR_GET(embeddingDimensions_, vector<int32_t>) };
        inline LlmModels& setEmbeddingDimensions(const vector<int32_t> & embeddingDimensions) { DARABONBA_PTR_SET_VALUE(embeddingDimensions_, embeddingDimensions) };
        inline LlmModels& setEmbeddingDimensions(vector<int32_t> && embeddingDimensions) { DARABONBA_PTR_SET_RVALUE(embeddingDimensions_, embeddingDimensions) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline LlmModels& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // invokeType Field Functions 
        bool hasInvokeType() const { return this->invokeType_ != nullptr;};
        void deleteInvokeType() { this->invokeType_ = nullptr;};
        inline string getInvokeType() const { DARABONBA_PTR_GET_DEFAULT(invokeType_, "") };
        inline LlmModels& setInvokeType(string invokeType) { DARABONBA_PTR_SET_VALUE(invokeType_, invokeType) };


        // modelId Field Functions 
        bool hasModelId() const { return this->modelId_ != nullptr;};
        void deleteModelId() { this->modelId_ = nullptr;};
        inline int64_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
        inline LlmModels& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


        // modelTypes Field Functions 
        bool hasModelTypes() const { return this->modelTypes_ != nullptr;};
        void deleteModelTypes() { this->modelTypes_ = nullptr;};
        inline const vector<string> & getModelTypes() const { DARABONBA_PTR_GET_CONST(modelTypes_, vector<string>) };
        inline vector<string> getModelTypes() { DARABONBA_PTR_GET(modelTypes_, vector<string>) };
        inline LlmModels& setModelTypes(const vector<string> & modelTypes) { DARABONBA_PTR_SET_VALUE(modelTypes_, modelTypes) };
        inline LlmModels& setModelTypes(vector<string> && modelTypes) { DARABONBA_PTR_SET_RVALUE(modelTypes_, modelTypes) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline LlmModels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // serviceProvider Field Functions 
        bool hasServiceProvider() const { return this->serviceProvider_ != nullptr;};
        void deleteServiceProvider() { this->serviceProvider_ = nullptr;};
        inline string getServiceProvider() const { DARABONBA_PTR_GET_DEFAULT(serviceProvider_, "") };
        inline LlmModels& setServiceProvider(string serviceProvider) { DARABONBA_PTR_SET_VALUE(serviceProvider_, serviceProvider) };


        // tasks Field Functions 
        bool hasTasks() const { return this->tasks_ != nullptr;};
        void deleteTasks() { this->tasks_ = nullptr;};
        inline const vector<string> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<string>) };
        inline vector<string> getTasks() { DARABONBA_PTR_GET(tasks_, vector<string>) };
        inline LlmModels& setTasks(const vector<string> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
        inline LlmModels& setTasks(vector<string> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


      protected:
        shared_ptr<string> cnName_ {};
        shared_ptr<string> description_ {};
        shared_ptr<vector<int32_t>> embeddingDimensions_ {};
        shared_ptr<bool> enabled_ {};
        shared_ptr<string> invokeType_ {};
        shared_ptr<int64_t> modelId_ {};
        shared_ptr<vector<string>> modelTypes_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> serviceProvider_ {};
        shared_ptr<vector<string>> tasks_ {};
      };

      virtual bool empty() const override { return this->baseUrl_ == nullptr
        && this->enabled_ == nullptr && this->id_ == nullptr && this->llmModels_ == nullptr && this->providerSource_ == nullptr && this->providerType_ == nullptr
        && this->serviceProvider_ == nullptr; };
      // baseUrl Field Functions 
      bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
      void deleteBaseUrl() { this->baseUrl_ = nullptr;};
      inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
      inline Data& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Data& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // llmModels Field Functions 
      bool hasLlmModels() const { return this->llmModels_ != nullptr;};
      void deleteLlmModels() { this->llmModels_ = nullptr;};
      inline const vector<Data::LlmModels> & getLlmModels() const { DARABONBA_PTR_GET_CONST(llmModels_, vector<Data::LlmModels>) };
      inline vector<Data::LlmModels> getLlmModels() { DARABONBA_PTR_GET(llmModels_, vector<Data::LlmModels>) };
      inline Data& setLlmModels(const vector<Data::LlmModels> & llmModels) { DARABONBA_PTR_SET_VALUE(llmModels_, llmModels) };
      inline Data& setLlmModels(vector<Data::LlmModels> && llmModels) { DARABONBA_PTR_SET_RVALUE(llmModels_, llmModels) };


      // providerSource Field Functions 
      bool hasProviderSource() const { return this->providerSource_ != nullptr;};
      void deleteProviderSource() { this->providerSource_ = nullptr;};
      inline string getProviderSource() const { DARABONBA_PTR_GET_DEFAULT(providerSource_, "") };
      inline Data& setProviderSource(string providerSource) { DARABONBA_PTR_SET_VALUE(providerSource_, providerSource) };


      // providerType Field Functions 
      bool hasProviderType() const { return this->providerType_ != nullptr;};
      void deleteProviderType() { this->providerType_ = nullptr;};
      inline string getProviderType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
      inline Data& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


      // serviceProvider Field Functions 
      bool hasServiceProvider() const { return this->serviceProvider_ != nullptr;};
      void deleteServiceProvider() { this->serviceProvider_ = nullptr;};
      inline string getServiceProvider() const { DARABONBA_PTR_GET_DEFAULT(serviceProvider_, "") };
      inline Data& setServiceProvider(string serviceProvider) { DARABONBA_PTR_SET_VALUE(serviceProvider_, serviceProvider) };


    protected:
      shared_ptr<string> baseUrl_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<vector<Data::LlmModels>> llmModels_ {};
      shared_ptr<string> providerSource_ {};
      shared_ptr<string> providerType_ {};
      shared_ptr<string> serviceProvider_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetLlmModelProvidersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetLlmModelProvidersResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetLlmModelProvidersResponseBody::Data>) };
    inline vector<GetLlmModelProvidersResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetLlmModelProvidersResponseBody::Data>) };
    inline GetLlmModelProvidersResponseBody& setData(const vector<GetLlmModelProvidersResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetLlmModelProvidersResponseBody& setData(vector<GetLlmModelProvidersResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetLlmModelProvidersResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetLlmModelProvidersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLlmModelProvidersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetLlmModelProvidersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetLlmModelProvidersResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
