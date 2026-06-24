// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNTIMEMODELCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRUNTIMEMODELCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetRuntimeModelConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuntimeModelConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuntimeModelConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRuntimeModelConfigResponseBody() = default ;
    GetRuntimeModelConfigResponseBody(const GetRuntimeModelConfigResponseBody &) = default ;
    GetRuntimeModelConfigResponseBody(GetRuntimeModelConfigResponseBody &&) = default ;
    GetRuntimeModelConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuntimeModelConfigResponseBody() = default ;
    GetRuntimeModelConfigResponseBody& operator=(const GetRuntimeModelConfigResponseBody &) = default ;
    GetRuntimeModelConfigResponseBody& operator=(GetRuntimeModelConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultModel, defaultModel_);
        DARABONBA_PTR_TO_JSON(ModelProviderList, modelProviderList_);
        DARABONBA_PTR_TO_JSON(ModelTemplateId, modelTemplateId_);
        DARABONBA_PTR_TO_JSON(ModelTemplateName, modelTemplateName_);
        DARABONBA_PTR_TO_JSON(ModelTemplateRefType, modelTemplateRefType_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultModel, defaultModel_);
        DARABONBA_PTR_FROM_JSON(ModelProviderList, modelProviderList_);
        DARABONBA_PTR_FROM_JSON(ModelTemplateId, modelTemplateId_);
        DARABONBA_PTR_FROM_JSON(ModelTemplateName, modelTemplateName_);
        DARABONBA_PTR_FROM_JSON(ModelTemplateRefType, modelTemplateRefType_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
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
      class ModelProviderList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModelProviderList& obj) { 
          DARABONBA_PTR_TO_JSON(LlmInfoList, llmInfoList_);
          DARABONBA_PTR_TO_JSON(ModelProviderTemplateId, modelProviderTemplateId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
        };
        friend void from_json(const Darabonba::Json& j, ModelProviderList& obj) { 
          DARABONBA_PTR_FROM_JSON(LlmInfoList, llmInfoList_);
          DARABONBA_PTR_FROM_JSON(ModelProviderTemplateId, modelProviderTemplateId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
        };
        ModelProviderList() = default ;
        ModelProviderList(const ModelProviderList &) = default ;
        ModelProviderList(ModelProviderList &&) = default ;
        ModelProviderList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModelProviderList() = default ;
        ModelProviderList& operator=(const ModelProviderList &) = default ;
        ModelProviderList& operator=(ModelProviderList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LlmInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LlmInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Features, features_);
            DARABONBA_PTR_TO_JSON(InferenceMetadata, inferenceMetadata_);
            DARABONBA_PTR_TO_JSON(LlmCode, llmCode_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(PublishedTime, publishedTime_);
            DARABONBA_PTR_TO_JSON(RiskType, riskType_);
          };
          friend void from_json(const Darabonba::Json& j, LlmInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Features, features_);
            DARABONBA_PTR_FROM_JSON(InferenceMetadata, inferenceMetadata_);
            DARABONBA_PTR_FROM_JSON(LlmCode, llmCode_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(PublishedTime, publishedTime_);
            DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
          };
          LlmInfoList() = default ;
          LlmInfoList(const LlmInfoList &) = default ;
          LlmInfoList(LlmInfoList &&) = default ;
          LlmInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LlmInfoList() = default ;
          LlmInfoList& operator=(const LlmInfoList &) = default ;
          LlmInfoList& operator=(LlmInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class InferenceMetadata : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const InferenceMetadata& obj) { 
              DARABONBA_PTR_TO_JSON(RequestModality, requestModality_);
              DARABONBA_PTR_TO_JSON(ResponseModality, responseModality_);
            };
            friend void from_json(const Darabonba::Json& j, InferenceMetadata& obj) { 
              DARABONBA_PTR_FROM_JSON(RequestModality, requestModality_);
              DARABONBA_PTR_FROM_JSON(ResponseModality, responseModality_);
            };
            InferenceMetadata() = default ;
            InferenceMetadata(const InferenceMetadata &) = default ;
            InferenceMetadata(InferenceMetadata &&) = default ;
            InferenceMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~InferenceMetadata() = default ;
            InferenceMetadata& operator=(const InferenceMetadata &) = default ;
            InferenceMetadata& operator=(InferenceMetadata &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->requestModality_ == nullptr
        && this->responseModality_ == nullptr; };
            // requestModality Field Functions 
            bool hasRequestModality() const { return this->requestModality_ != nullptr;};
            void deleteRequestModality() { this->requestModality_ = nullptr;};
            inline const vector<string> & getRequestModality() const { DARABONBA_PTR_GET_CONST(requestModality_, vector<string>) };
            inline vector<string> getRequestModality() { DARABONBA_PTR_GET(requestModality_, vector<string>) };
            inline InferenceMetadata& setRequestModality(const vector<string> & requestModality) { DARABONBA_PTR_SET_VALUE(requestModality_, requestModality) };
            inline InferenceMetadata& setRequestModality(vector<string> && requestModality) { DARABONBA_PTR_SET_RVALUE(requestModality_, requestModality) };


            // responseModality Field Functions 
            bool hasResponseModality() const { return this->responseModality_ != nullptr;};
            void deleteResponseModality() { this->responseModality_ = nullptr;};
            inline const vector<string> & getResponseModality() const { DARABONBA_PTR_GET_CONST(responseModality_, vector<string>) };
            inline vector<string> getResponseModality() { DARABONBA_PTR_GET(responseModality_, vector<string>) };
            inline InferenceMetadata& setResponseModality(const vector<string> & responseModality) { DARABONBA_PTR_SET_VALUE(responseModality_, responseModality) };
            inline InferenceMetadata& setResponseModality(vector<string> && responseModality) { DARABONBA_PTR_SET_RVALUE(responseModality_, responseModality) };


          protected:
            // The list of request modalities, such as Text, Image, and Audio.
            shared_ptr<vector<string>> requestModality_ {};
            // The list of response modalities, such as Text, Image, and Audio.
            shared_ptr<vector<string>> responseModality_ {};
          };

          virtual bool empty() const override { return this->description_ == nullptr
        && this->features_ == nullptr && this->inferenceMetadata_ == nullptr && this->llmCode_ == nullptr && this->name_ == nullptr && this->publishedTime_ == nullptr
        && this->riskType_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline LlmInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // features Field Functions 
          bool hasFeatures() const { return this->features_ != nullptr;};
          void deleteFeatures() { this->features_ = nullptr;};
          inline const vector<string> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, vector<string>) };
          inline vector<string> getFeatures() { DARABONBA_PTR_GET(features_, vector<string>) };
          inline LlmInfoList& setFeatures(const vector<string> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
          inline LlmInfoList& setFeatures(vector<string> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


          // inferenceMetadata Field Functions 
          bool hasInferenceMetadata() const { return this->inferenceMetadata_ != nullptr;};
          void deleteInferenceMetadata() { this->inferenceMetadata_ = nullptr;};
          inline const LlmInfoList::InferenceMetadata & getInferenceMetadata() const { DARABONBA_PTR_GET_CONST(inferenceMetadata_, LlmInfoList::InferenceMetadata) };
          inline LlmInfoList::InferenceMetadata getInferenceMetadata() { DARABONBA_PTR_GET(inferenceMetadata_, LlmInfoList::InferenceMetadata) };
          inline LlmInfoList& setInferenceMetadata(const LlmInfoList::InferenceMetadata & inferenceMetadata) { DARABONBA_PTR_SET_VALUE(inferenceMetadata_, inferenceMetadata) };
          inline LlmInfoList& setInferenceMetadata(LlmInfoList::InferenceMetadata && inferenceMetadata) { DARABONBA_PTR_SET_RVALUE(inferenceMetadata_, inferenceMetadata) };


          // llmCode Field Functions 
          bool hasLlmCode() const { return this->llmCode_ != nullptr;};
          void deleteLlmCode() { this->llmCode_ = nullptr;};
          inline string getLlmCode() const { DARABONBA_PTR_GET_DEFAULT(llmCode_, "") };
          inline LlmInfoList& setLlmCode(string llmCode) { DARABONBA_PTR_SET_VALUE(llmCode_, llmCode) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline LlmInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // publishedTime Field Functions 
          bool hasPublishedTime() const { return this->publishedTime_ != nullptr;};
          void deletePublishedTime() { this->publishedTime_ = nullptr;};
          inline string getPublishedTime() const { DARABONBA_PTR_GET_DEFAULT(publishedTime_, "") };
          inline LlmInfoList& setPublishedTime(string publishedTime) { DARABONBA_PTR_SET_VALUE(publishedTime_, publishedTime) };


          // riskType Field Functions 
          bool hasRiskType() const { return this->riskType_ != nullptr;};
          void deleteRiskType() { this->riskType_ = nullptr;};
          inline string getRiskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
          inline LlmInfoList& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


        protected:
          // The model description.
          shared_ptr<string> description_ {};
          // The list of model features, such as function-calling, web-search, and structured-outputs.
          shared_ptr<vector<string>> features_ {};
          // The inference metadata, including request and response modalities.
          shared_ptr<LlmInfoList::InferenceMetadata> inferenceMetadata_ {};
          // The model code.
          shared_ptr<string> llmCode_ {};
          // The model name.
          shared_ptr<string> name_ {};
          // The publish time in ISO 8601 format.
          shared_ptr<string> publishedTime_ {};
          // The model risk type. This parameter is returned only when the request parameter IncludeRiskInfo is set to true.
          shared_ptr<string> riskType_ {};
        };

        virtual bool empty() const override { return this->llmInfoList_ == nullptr
        && this->modelProviderTemplateId_ == nullptr && this->name_ == nullptr && this->providerName_ == nullptr; };
        // llmInfoList Field Functions 
        bool hasLlmInfoList() const { return this->llmInfoList_ != nullptr;};
        void deleteLlmInfoList() { this->llmInfoList_ = nullptr;};
        inline const vector<ModelProviderList::LlmInfoList> & getLlmInfoList() const { DARABONBA_PTR_GET_CONST(llmInfoList_, vector<ModelProviderList::LlmInfoList>) };
        inline vector<ModelProviderList::LlmInfoList> getLlmInfoList() { DARABONBA_PTR_GET(llmInfoList_, vector<ModelProviderList::LlmInfoList>) };
        inline ModelProviderList& setLlmInfoList(const vector<ModelProviderList::LlmInfoList> & llmInfoList) { DARABONBA_PTR_SET_VALUE(llmInfoList_, llmInfoList) };
        inline ModelProviderList& setLlmInfoList(vector<ModelProviderList::LlmInfoList> && llmInfoList) { DARABONBA_PTR_SET_RVALUE(llmInfoList_, llmInfoList) };


        // modelProviderTemplateId Field Functions 
        bool hasModelProviderTemplateId() const { return this->modelProviderTemplateId_ != nullptr;};
        void deleteModelProviderTemplateId() { this->modelProviderTemplateId_ = nullptr;};
        inline string getModelProviderTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelProviderTemplateId_, "") };
        inline ModelProviderList& setModelProviderTemplateId(string modelProviderTemplateId) { DARABONBA_PTR_SET_VALUE(modelProviderTemplateId_, modelProviderTemplateId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ModelProviderList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // providerName Field Functions 
        bool hasProviderName() const { return this->providerName_ != nullptr;};
        void deleteProviderName() { this->providerName_ = nullptr;};
        inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
        inline ModelProviderList& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


      protected:
        // The list of model information.
        shared_ptr<vector<ModelProviderList::LlmInfoList>> llmInfoList_ {};
        // The model provider template ID.
        shared_ptr<string> modelProviderTemplateId_ {};
        // The model provider template name.
        shared_ptr<string> name_ {};
        // The model provider name.
        shared_ptr<string> providerName_ {};
      };

      virtual bool empty() const override { return this->defaultModel_ == nullptr
        && this->modelProviderList_ == nullptr && this->modelTemplateId_ == nullptr && this->modelTemplateName_ == nullptr && this->modelTemplateRefType_ == nullptr && this->resourceGroupId_ == nullptr; };
      // defaultModel Field Functions 
      bool hasDefaultModel() const { return this->defaultModel_ != nullptr;};
      void deleteDefaultModel() { this->defaultModel_ = nullptr;};
      inline string getDefaultModel() const { DARABONBA_PTR_GET_DEFAULT(defaultModel_, "") };
      inline Data& setDefaultModel(string defaultModel) { DARABONBA_PTR_SET_VALUE(defaultModel_, defaultModel) };


      // modelProviderList Field Functions 
      bool hasModelProviderList() const { return this->modelProviderList_ != nullptr;};
      void deleteModelProviderList() { this->modelProviderList_ = nullptr;};
      inline const vector<Data::ModelProviderList> & getModelProviderList() const { DARABONBA_PTR_GET_CONST(modelProviderList_, vector<Data::ModelProviderList>) };
      inline vector<Data::ModelProviderList> getModelProviderList() { DARABONBA_PTR_GET(modelProviderList_, vector<Data::ModelProviderList>) };
      inline Data& setModelProviderList(const vector<Data::ModelProviderList> & modelProviderList) { DARABONBA_PTR_SET_VALUE(modelProviderList_, modelProviderList) };
      inline Data& setModelProviderList(vector<Data::ModelProviderList> && modelProviderList) { DARABONBA_PTR_SET_RVALUE(modelProviderList_, modelProviderList) };


      // modelTemplateId Field Functions 
      bool hasModelTemplateId() const { return this->modelTemplateId_ != nullptr;};
      void deleteModelTemplateId() { this->modelTemplateId_ = nullptr;};
      inline string getModelTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateId_, "") };
      inline Data& setModelTemplateId(string modelTemplateId) { DARABONBA_PTR_SET_VALUE(modelTemplateId_, modelTemplateId) };


      // modelTemplateName Field Functions 
      bool hasModelTemplateName() const { return this->modelTemplateName_ != nullptr;};
      void deleteModelTemplateName() { this->modelTemplateName_ = nullptr;};
      inline string getModelTemplateName() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateName_, "") };
      inline Data& setModelTemplateName(string modelTemplateName) { DARABONBA_PTR_SET_VALUE(modelTemplateName_, modelTemplateName) };


      // modelTemplateRefType Field Functions 
      bool hasModelTemplateRefType() const { return this->modelTemplateRefType_ != nullptr;};
      void deleteModelTemplateRefType() { this->modelTemplateRefType_ = nullptr;};
      inline string getModelTemplateRefType() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateRefType_, "") };
      inline Data& setModelTemplateRefType(string modelTemplateRefType) { DARABONBA_PTR_SET_VALUE(modelTemplateRefType_, modelTemplateRefType) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    protected:
      // The default model (format: providerName/llmCode).
      shared_ptr<string> defaultModel_ {};
      // The list of model providers.
      shared_ptr<vector<Data::ModelProviderList>> modelProviderList_ {};
      // The configured model group ID.
      shared_ptr<string> modelTemplateId_ {};
      // The model group name.
      shared_ptr<string> modelTemplateName_ {};
      // The model template association type (returned only when an association exists).
      shared_ptr<string> modelTemplateRefType_ {};
      // The resource group ID to which the runtime belongs. The value is null if the runtime is not associated with a resource group.
      shared_ptr<string> resourceGroupId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRuntimeModelConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRuntimeModelConfigResponseBody::Data) };
    inline GetRuntimeModelConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRuntimeModelConfigResponseBody::Data) };
    inline GetRuntimeModelConfigResponseBody& setData(const GetRuntimeModelConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRuntimeModelConfigResponseBody& setData(GetRuntimeModelConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRuntimeModelConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result object.
    shared_ptr<GetRuntimeModelConfigResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
