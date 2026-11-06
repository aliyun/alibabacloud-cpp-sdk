// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONAVAILABLEMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONAVAILABLEMODELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationAvailableModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationAvailableModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AsrModels, asrModels_);
      DARABONBA_PTR_TO_JSON(DefaultEmbeddingModel, defaultEmbeddingModel_);
      DARABONBA_PTR_TO_JSON(DefaultGraphLLMModel, defaultGraphLLMModel_);
      DARABONBA_PTR_TO_JSON(DefaultLLMModel, defaultLLMModel_);
      DARABONBA_PTR_TO_JSON(DefaultMemoryType, defaultMemoryType_);
      DARABONBA_PTR_TO_JSON(DefaultRerankModel, defaultRerankModel_);
      DARABONBA_PTR_TO_JSON(DefaultVLModel, defaultVLModel_);
      DARABONBA_PTR_TO_JSON(DefaultVisualEmbedderModel, defaultVisualEmbedderModel_);
      DARABONBA_PTR_TO_JSON(DefaultVisualLlmModel, defaultVisualLlmModel_);
      DARABONBA_PTR_TO_JSON(EmbeddingModels, embeddingModels_);
      DARABONBA_PTR_TO_JSON(GraphLlmModels, graphLlmModels_);
      DARABONBA_PTR_TO_JSON(LlmModels, llmModels_);
      DARABONBA_PTR_TO_JSON(MemoryTypes, memoryTypes_);
      DARABONBA_PTR_TO_JSON(MultimodalSupported, multimodalSupported_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RerankModels, rerankModels_);
      DARABONBA_PTR_TO_JSON(VLModels, VLModels_);
      DARABONBA_PTR_TO_JSON(VisualEmbedderModels, visualEmbedderModels_);
      DARABONBA_PTR_TO_JSON(VisualLlmModels, visualLlmModels_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationAvailableModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrModels, asrModels_);
      DARABONBA_PTR_FROM_JSON(DefaultEmbeddingModel, defaultEmbeddingModel_);
      DARABONBA_PTR_FROM_JSON(DefaultGraphLLMModel, defaultGraphLLMModel_);
      DARABONBA_PTR_FROM_JSON(DefaultLLMModel, defaultLLMModel_);
      DARABONBA_PTR_FROM_JSON(DefaultMemoryType, defaultMemoryType_);
      DARABONBA_PTR_FROM_JSON(DefaultRerankModel, defaultRerankModel_);
      DARABONBA_PTR_FROM_JSON(DefaultVLModel, defaultVLModel_);
      DARABONBA_PTR_FROM_JSON(DefaultVisualEmbedderModel, defaultVisualEmbedderModel_);
      DARABONBA_PTR_FROM_JSON(DefaultVisualLlmModel, defaultVisualLlmModel_);
      DARABONBA_PTR_FROM_JSON(EmbeddingModels, embeddingModels_);
      DARABONBA_PTR_FROM_JSON(GraphLlmModels, graphLlmModels_);
      DARABONBA_PTR_FROM_JSON(LlmModels, llmModels_);
      DARABONBA_PTR_FROM_JSON(MemoryTypes, memoryTypes_);
      DARABONBA_PTR_FROM_JSON(MultimodalSupported, multimodalSupported_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RerankModels, rerankModels_);
      DARABONBA_PTR_FROM_JSON(VLModels, VLModels_);
      DARABONBA_PTR_FROM_JSON(VisualEmbedderModels, visualEmbedderModels_);
      DARABONBA_PTR_FROM_JSON(VisualLlmModels, visualLlmModels_);
    };
    DescribeApplicationAvailableModelsResponseBody() = default ;
    DescribeApplicationAvailableModelsResponseBody(const DescribeApplicationAvailableModelsResponseBody &) = default ;
    DescribeApplicationAvailableModelsResponseBody(DescribeApplicationAvailableModelsResponseBody &&) = default ;
    DescribeApplicationAvailableModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationAvailableModelsResponseBody() = default ;
    DescribeApplicationAvailableModelsResponseBody& operator=(const DescribeApplicationAvailableModelsResponseBody &) = default ;
    DescribeApplicationAvailableModelsResponseBody& operator=(DescribeApplicationAvailableModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VisualLlmModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VisualLlmModels& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SupportedModalities, supportedModalities_);
      };
      friend void from_json(const Darabonba::Json& j, VisualLlmModels& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SupportedModalities, supportedModalities_);
      };
      VisualLlmModels() = default ;
      VisualLlmModels(const VisualLlmModels &) = default ;
      VisualLlmModels(VisualLlmModels &&) = default ;
      VisualLlmModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VisualLlmModels() = default ;
      VisualLlmModels& operator=(const VisualLlmModels &) = default ;
      VisualLlmModels& operator=(VisualLlmModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->supportedModalities_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline VisualLlmModels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // supportedModalities Field Functions 
      bool hasSupportedModalities() const { return this->supportedModalities_ != nullptr;};
      void deleteSupportedModalities() { this->supportedModalities_ = nullptr;};
      inline const vector<string> & getSupportedModalities() const { DARABONBA_PTR_GET_CONST(supportedModalities_, vector<string>) };
      inline vector<string> getSupportedModalities() { DARABONBA_PTR_GET(supportedModalities_, vector<string>) };
      inline VisualLlmModels& setSupportedModalities(const vector<string> & supportedModalities) { DARABONBA_PTR_SET_VALUE(supportedModalities_, supportedModalities) };
      inline VisualLlmModels& setSupportedModalities(vector<string> && supportedModalities) { DARABONBA_PTR_SET_RVALUE(supportedModalities_, supportedModalities) };


    protected:
      // The model name.
      shared_ptr<string> name_ {};
      // The supported modalities.
      shared_ptr<vector<string>> supportedModalities_ {};
    };

    class VisualEmbedderModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VisualEmbedderModels& obj) { 
        DARABONBA_PTR_TO_JSON(Dimension, dimension_);
        DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, VisualEmbedderModels& obj) { 
        DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
        DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      VisualEmbedderModels() = default ;
      VisualEmbedderModels(const VisualEmbedderModels &) = default ;
      VisualEmbedderModels(VisualEmbedderModels &&) = default ;
      VisualEmbedderModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VisualEmbedderModels() = default ;
      VisualEmbedderModels& operator=(const VisualEmbedderModels &) = default ;
      VisualEmbedderModels& operator=(VisualEmbedderModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dimension_ == nullptr
        && this->dimensions_ == nullptr && this->name_ == nullptr; };
      // dimension Field Functions 
      bool hasDimension() const { return this->dimension_ != nullptr;};
      void deleteDimension() { this->dimension_ = nullptr;};
      inline int32_t getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0) };
      inline VisualEmbedderModels& setDimension(int32_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline const vector<int32_t> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<int32_t>) };
      inline vector<int32_t> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<int32_t>) };
      inline VisualEmbedderModels& setDimensions(const vector<int32_t> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
      inline VisualEmbedderModels& setDimensions(vector<int32_t> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline VisualEmbedderModels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The default dimension.
      shared_ptr<int32_t> dimension_ {};
      // The available dimensions.
      shared_ptr<vector<int32_t>> dimensions_ {};
      // The model name.
      shared_ptr<string> name_ {};
    };

    class VLModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VLModels& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, VLModels& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      VLModels() = default ;
      VLModels(const VLModels &) = default ;
      VLModels(VLModels &&) = default ;
      VLModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VLModels() = default ;
      VLModels& operator=(const VLModels &) = default ;
      VLModels& operator=(VLModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline VLModels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The model name.
      shared_ptr<string> name_ {};
    };

    class RerankModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RerankModels& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, RerankModels& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      RerankModels() = default ;
      RerankModels(const RerankModels &) = default ;
      RerankModels(RerankModels &&) = default ;
      RerankModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RerankModels() = default ;
      RerankModels& operator=(const RerankModels &) = default ;
      RerankModels& operator=(RerankModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RerankModels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The model name.
      shared_ptr<string> name_ {};
    };

    class LlmModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LlmModels& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, LlmModels& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline LlmModels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The model name.
      shared_ptr<string> name_ {};
    };

    class GraphLlmModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GraphLlmModels& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, GraphLlmModels& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      GraphLlmModels() = default ;
      GraphLlmModels(const GraphLlmModels &) = default ;
      GraphLlmModels(GraphLlmModels &&) = default ;
      GraphLlmModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GraphLlmModels() = default ;
      GraphLlmModels& operator=(const GraphLlmModels &) = default ;
      GraphLlmModels& operator=(GraphLlmModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline GraphLlmModels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The model name.
      shared_ptr<string> name_ {};
    };

    class EmbeddingModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EmbeddingModels& obj) { 
        DARABONBA_PTR_TO_JSON(Dimension, dimension_);
        DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, EmbeddingModels& obj) { 
        DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
        DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      EmbeddingModels() = default ;
      EmbeddingModels(const EmbeddingModels &) = default ;
      EmbeddingModels(EmbeddingModels &&) = default ;
      EmbeddingModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EmbeddingModels() = default ;
      EmbeddingModels& operator=(const EmbeddingModels &) = default ;
      EmbeddingModels& operator=(EmbeddingModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dimension_ == nullptr
        && this->dimensions_ == nullptr && this->name_ == nullptr; };
      // dimension Field Functions 
      bool hasDimension() const { return this->dimension_ != nullptr;};
      void deleteDimension() { this->dimension_ = nullptr;};
      inline int32_t getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0) };
      inline EmbeddingModels& setDimension(int32_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline const vector<int32_t> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<int32_t>) };
      inline vector<int32_t> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<int32_t>) };
      inline EmbeddingModels& setDimensions(const vector<int32_t> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
      inline EmbeddingModels& setDimensions(vector<int32_t> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline EmbeddingModels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The default vector dimensions of the model.
      shared_ptr<int32_t> dimension_ {};
      // The list of vector dimensions supported by the model.
      shared_ptr<vector<int32_t>> dimensions_ {};
      // The model name.
      shared_ptr<string> name_ {};
    };

    class DefaultVisualLlmModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultVisualLlmModel& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SupportedModalities, supportedModalities_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultVisualLlmModel& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SupportedModalities, supportedModalities_);
      };
      DefaultVisualLlmModel() = default ;
      DefaultVisualLlmModel(const DefaultVisualLlmModel &) = default ;
      DefaultVisualLlmModel(DefaultVisualLlmModel &&) = default ;
      DefaultVisualLlmModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultVisualLlmModel() = default ;
      DefaultVisualLlmModel& operator=(const DefaultVisualLlmModel &) = default ;
      DefaultVisualLlmModel& operator=(DefaultVisualLlmModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->supportedModalities_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DefaultVisualLlmModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // supportedModalities Field Functions 
      bool hasSupportedModalities() const { return this->supportedModalities_ != nullptr;};
      void deleteSupportedModalities() { this->supportedModalities_ = nullptr;};
      inline const vector<string> & getSupportedModalities() const { DARABONBA_PTR_GET_CONST(supportedModalities_, vector<string>) };
      inline vector<string> getSupportedModalities() { DARABONBA_PTR_GET(supportedModalities_, vector<string>) };
      inline DefaultVisualLlmModel& setSupportedModalities(const vector<string> & supportedModalities) { DARABONBA_PTR_SET_VALUE(supportedModalities_, supportedModalities) };
      inline DefaultVisualLlmModel& setSupportedModalities(vector<string> && supportedModalities) { DARABONBA_PTR_SET_RVALUE(supportedModalities_, supportedModalities) };


    protected:
      // The model name.
      shared_ptr<string> name_ {};
      // The supported modalities.
      shared_ptr<vector<string>> supportedModalities_ {};
    };

    class DefaultVisualEmbedderModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultVisualEmbedderModel& obj) { 
        DARABONBA_PTR_TO_JSON(Dimension, dimension_);
        DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultVisualEmbedderModel& obj) { 
        DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
        DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      DefaultVisualEmbedderModel() = default ;
      DefaultVisualEmbedderModel(const DefaultVisualEmbedderModel &) = default ;
      DefaultVisualEmbedderModel(DefaultVisualEmbedderModel &&) = default ;
      DefaultVisualEmbedderModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultVisualEmbedderModel() = default ;
      DefaultVisualEmbedderModel& operator=(const DefaultVisualEmbedderModel &) = default ;
      DefaultVisualEmbedderModel& operator=(DefaultVisualEmbedderModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dimension_ == nullptr
        && this->dimensions_ == nullptr && this->name_ == nullptr; };
      // dimension Field Functions 
      bool hasDimension() const { return this->dimension_ != nullptr;};
      void deleteDimension() { this->dimension_ = nullptr;};
      inline int32_t getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0) };
      inline DefaultVisualEmbedderModel& setDimension(int32_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline const vector<int32_t> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<int32_t>) };
      inline vector<int32_t> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<int32_t>) };
      inline DefaultVisualEmbedderModel& setDimensions(const vector<int32_t> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
      inline DefaultVisualEmbedderModel& setDimensions(vector<int32_t> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DefaultVisualEmbedderModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The default dimension.
      shared_ptr<int32_t> dimension_ {};
      // The available dimensions.
      shared_ptr<vector<int32_t>> dimensions_ {};
      // The model name.
      shared_ptr<string> name_ {};
    };

    class DefaultVLModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultVLModel& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultVLModel& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      DefaultVLModel() = default ;
      DefaultVLModel(const DefaultVLModel &) = default ;
      DefaultVLModel(DefaultVLModel &&) = default ;
      DefaultVLModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultVLModel() = default ;
      DefaultVLModel& operator=(const DefaultVLModel &) = default ;
      DefaultVLModel& operator=(DefaultVLModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DefaultVLModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The model name.
      shared_ptr<string> name_ {};
    };

    class DefaultRerankModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultRerankModel& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultRerankModel& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      DefaultRerankModel() = default ;
      DefaultRerankModel(const DefaultRerankModel &) = default ;
      DefaultRerankModel(DefaultRerankModel &&) = default ;
      DefaultRerankModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultRerankModel() = default ;
      DefaultRerankModel& operator=(const DefaultRerankModel &) = default ;
      DefaultRerankModel& operator=(DefaultRerankModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DefaultRerankModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The model name.
      shared_ptr<string> name_ {};
    };

    class DefaultLLMModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultLLMModel& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultLLMModel& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      DefaultLLMModel() = default ;
      DefaultLLMModel(const DefaultLLMModel &) = default ;
      DefaultLLMModel(DefaultLLMModel &&) = default ;
      DefaultLLMModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultLLMModel() = default ;
      DefaultLLMModel& operator=(const DefaultLLMModel &) = default ;
      DefaultLLMModel& operator=(DefaultLLMModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DefaultLLMModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The model name.
      shared_ptr<string> name_ {};
    };

    class DefaultGraphLLMModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultGraphLLMModel& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultGraphLLMModel& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      DefaultGraphLLMModel() = default ;
      DefaultGraphLLMModel(const DefaultGraphLLMModel &) = default ;
      DefaultGraphLLMModel(DefaultGraphLLMModel &&) = default ;
      DefaultGraphLLMModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultGraphLLMModel() = default ;
      DefaultGraphLLMModel& operator=(const DefaultGraphLLMModel &) = default ;
      DefaultGraphLLMModel& operator=(DefaultGraphLLMModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DefaultGraphLLMModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The model name.
      shared_ptr<string> name_ {};
    };

    class DefaultEmbeddingModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultEmbeddingModel& obj) { 
        DARABONBA_PTR_TO_JSON(Dimension, dimension_);
        DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultEmbeddingModel& obj) { 
        DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
        DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      DefaultEmbeddingModel() = default ;
      DefaultEmbeddingModel(const DefaultEmbeddingModel &) = default ;
      DefaultEmbeddingModel(DefaultEmbeddingModel &&) = default ;
      DefaultEmbeddingModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultEmbeddingModel() = default ;
      DefaultEmbeddingModel& operator=(const DefaultEmbeddingModel &) = default ;
      DefaultEmbeddingModel& operator=(DefaultEmbeddingModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dimension_ == nullptr
        && this->dimensions_ == nullptr && this->name_ == nullptr; };
      // dimension Field Functions 
      bool hasDimension() const { return this->dimension_ != nullptr;};
      void deleteDimension() { this->dimension_ = nullptr;};
      inline int32_t getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0) };
      inline DefaultEmbeddingModel& setDimension(int32_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline const vector<int32_t> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<int32_t>) };
      inline vector<int32_t> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<int32_t>) };
      inline DefaultEmbeddingModel& setDimensions(const vector<int32_t> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
      inline DefaultEmbeddingModel& setDimensions(vector<int32_t> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DefaultEmbeddingModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The default vector dimensions of the model.
      shared_ptr<int32_t> dimension_ {};
      // The list of vector dimensions supported by the model.
      shared_ptr<vector<int32_t>> dimensions_ {};
      // The model name.
      shared_ptr<string> name_ {};
    };

    class AsrModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AsrModels& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, AsrModels& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      };
      AsrModels() = default ;
      AsrModels(const AsrModels &) = default ;
      AsrModels(AsrModels &&) = default ;
      AsrModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AsrModels() = default ;
      AsrModels& operator=(const AsrModels &) = default ;
      AsrModels& operator=(AsrModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->protocol_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AsrModels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline AsrModels& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      // The model name.
      shared_ptr<string> name_ {};
      // The protocol used by the speech recognition model.
      shared_ptr<string> protocol_ {};
    };

    virtual bool empty() const override { return this->asrModels_ == nullptr
        && this->defaultEmbeddingModel_ == nullptr && this->defaultGraphLLMModel_ == nullptr && this->defaultLLMModel_ == nullptr && this->defaultMemoryType_ == nullptr && this->defaultRerankModel_ == nullptr
        && this->defaultVLModel_ == nullptr && this->defaultVisualEmbedderModel_ == nullptr && this->defaultVisualLlmModel_ == nullptr && this->embeddingModels_ == nullptr && this->graphLlmModels_ == nullptr
        && this->llmModels_ == nullptr && this->memoryTypes_ == nullptr && this->multimodalSupported_ == nullptr && this->requestId_ == nullptr && this->rerankModels_ == nullptr
        && this->VLModels_ == nullptr && this->visualEmbedderModels_ == nullptr && this->visualLlmModels_ == nullptr; };
    // asrModels Field Functions 
    bool hasAsrModels() const { return this->asrModels_ != nullptr;};
    void deleteAsrModels() { this->asrModels_ = nullptr;};
    inline const vector<DescribeApplicationAvailableModelsResponseBody::AsrModels> & getAsrModels() const { DARABONBA_PTR_GET_CONST(asrModels_, vector<DescribeApplicationAvailableModelsResponseBody::AsrModels>) };
    inline vector<DescribeApplicationAvailableModelsResponseBody::AsrModels> getAsrModels() { DARABONBA_PTR_GET(asrModels_, vector<DescribeApplicationAvailableModelsResponseBody::AsrModels>) };
    inline DescribeApplicationAvailableModelsResponseBody& setAsrModels(const vector<DescribeApplicationAvailableModelsResponseBody::AsrModels> & asrModels) { DARABONBA_PTR_SET_VALUE(asrModels_, asrModels) };
    inline DescribeApplicationAvailableModelsResponseBody& setAsrModels(vector<DescribeApplicationAvailableModelsResponseBody::AsrModels> && asrModels) { DARABONBA_PTR_SET_RVALUE(asrModels_, asrModels) };


    // defaultEmbeddingModel Field Functions 
    bool hasDefaultEmbeddingModel() const { return this->defaultEmbeddingModel_ != nullptr;};
    void deleteDefaultEmbeddingModel() { this->defaultEmbeddingModel_ = nullptr;};
    inline const DescribeApplicationAvailableModelsResponseBody::DefaultEmbeddingModel & getDefaultEmbeddingModel() const { DARABONBA_PTR_GET_CONST(defaultEmbeddingModel_, DescribeApplicationAvailableModelsResponseBody::DefaultEmbeddingModel) };
    inline DescribeApplicationAvailableModelsResponseBody::DefaultEmbeddingModel getDefaultEmbeddingModel() { DARABONBA_PTR_GET(defaultEmbeddingModel_, DescribeApplicationAvailableModelsResponseBody::DefaultEmbeddingModel) };
    inline DescribeApplicationAvailableModelsResponseBody& setDefaultEmbeddingModel(const DescribeApplicationAvailableModelsResponseBody::DefaultEmbeddingModel & defaultEmbeddingModel) { DARABONBA_PTR_SET_VALUE(defaultEmbeddingModel_, defaultEmbeddingModel) };
    inline DescribeApplicationAvailableModelsResponseBody& setDefaultEmbeddingModel(DescribeApplicationAvailableModelsResponseBody::DefaultEmbeddingModel && defaultEmbeddingModel) { DARABONBA_PTR_SET_RVALUE(defaultEmbeddingModel_, defaultEmbeddingModel) };


    // defaultGraphLLMModel Field Functions 
    bool hasDefaultGraphLLMModel() const { return this->defaultGraphLLMModel_ != nullptr;};
    void deleteDefaultGraphLLMModel() { this->defaultGraphLLMModel_ = nullptr;};
    inline const DescribeApplicationAvailableModelsResponseBody::DefaultGraphLLMModel & getDefaultGraphLLMModel() const { DARABONBA_PTR_GET_CONST(defaultGraphLLMModel_, DescribeApplicationAvailableModelsResponseBody::DefaultGraphLLMModel) };
    inline DescribeApplicationAvailableModelsResponseBody::DefaultGraphLLMModel getDefaultGraphLLMModel() { DARABONBA_PTR_GET(defaultGraphLLMModel_, DescribeApplicationAvailableModelsResponseBody::DefaultGraphLLMModel) };
    inline DescribeApplicationAvailableModelsResponseBody& setDefaultGraphLLMModel(const DescribeApplicationAvailableModelsResponseBody::DefaultGraphLLMModel & defaultGraphLLMModel) { DARABONBA_PTR_SET_VALUE(defaultGraphLLMModel_, defaultGraphLLMModel) };
    inline DescribeApplicationAvailableModelsResponseBody& setDefaultGraphLLMModel(DescribeApplicationAvailableModelsResponseBody::DefaultGraphLLMModel && defaultGraphLLMModel) { DARABONBA_PTR_SET_RVALUE(defaultGraphLLMModel_, defaultGraphLLMModel) };


    // defaultLLMModel Field Functions 
    bool hasDefaultLLMModel() const { return this->defaultLLMModel_ != nullptr;};
    void deleteDefaultLLMModel() { this->defaultLLMModel_ = nullptr;};
    inline const DescribeApplicationAvailableModelsResponseBody::DefaultLLMModel & getDefaultLLMModel() const { DARABONBA_PTR_GET_CONST(defaultLLMModel_, DescribeApplicationAvailableModelsResponseBody::DefaultLLMModel) };
    inline DescribeApplicationAvailableModelsResponseBody::DefaultLLMModel getDefaultLLMModel() { DARABONBA_PTR_GET(defaultLLMModel_, DescribeApplicationAvailableModelsResponseBody::DefaultLLMModel) };
    inline DescribeApplicationAvailableModelsResponseBody& setDefaultLLMModel(const DescribeApplicationAvailableModelsResponseBody::DefaultLLMModel & defaultLLMModel) { DARABONBA_PTR_SET_VALUE(defaultLLMModel_, defaultLLMModel) };
    inline DescribeApplicationAvailableModelsResponseBody& setDefaultLLMModel(DescribeApplicationAvailableModelsResponseBody::DefaultLLMModel && defaultLLMModel) { DARABONBA_PTR_SET_RVALUE(defaultLLMModel_, defaultLLMModel) };


    // defaultMemoryType Field Functions 
    bool hasDefaultMemoryType() const { return this->defaultMemoryType_ != nullptr;};
    void deleteDefaultMemoryType() { this->defaultMemoryType_ = nullptr;};
    inline string getDefaultMemoryType() const { DARABONBA_PTR_GET_DEFAULT(defaultMemoryType_, "") };
    inline DescribeApplicationAvailableModelsResponseBody& setDefaultMemoryType(string defaultMemoryType) { DARABONBA_PTR_SET_VALUE(defaultMemoryType_, defaultMemoryType) };


    // defaultRerankModel Field Functions 
    bool hasDefaultRerankModel() const { return this->defaultRerankModel_ != nullptr;};
    void deleteDefaultRerankModel() { this->defaultRerankModel_ = nullptr;};
    inline const DescribeApplicationAvailableModelsResponseBody::DefaultRerankModel & getDefaultRerankModel() const { DARABONBA_PTR_GET_CONST(defaultRerankModel_, DescribeApplicationAvailableModelsResponseBody::DefaultRerankModel) };
    inline DescribeApplicationAvailableModelsResponseBody::DefaultRerankModel getDefaultRerankModel() { DARABONBA_PTR_GET(defaultRerankModel_, DescribeApplicationAvailableModelsResponseBody::DefaultRerankModel) };
    inline DescribeApplicationAvailableModelsResponseBody& setDefaultRerankModel(const DescribeApplicationAvailableModelsResponseBody::DefaultRerankModel & defaultRerankModel) { DARABONBA_PTR_SET_VALUE(defaultRerankModel_, defaultRerankModel) };
    inline DescribeApplicationAvailableModelsResponseBody& setDefaultRerankModel(DescribeApplicationAvailableModelsResponseBody::DefaultRerankModel && defaultRerankModel) { DARABONBA_PTR_SET_RVALUE(defaultRerankModel_, defaultRerankModel) };


    // defaultVLModel Field Functions 
    bool hasDefaultVLModel() const { return this->defaultVLModel_ != nullptr;};
    void deleteDefaultVLModel() { this->defaultVLModel_ = nullptr;};
    inline const DescribeApplicationAvailableModelsResponseBody::DefaultVLModel & getDefaultVLModel() const { DARABONBA_PTR_GET_CONST(defaultVLModel_, DescribeApplicationAvailableModelsResponseBody::DefaultVLModel) };
    inline DescribeApplicationAvailableModelsResponseBody::DefaultVLModel getDefaultVLModel() { DARABONBA_PTR_GET(defaultVLModel_, DescribeApplicationAvailableModelsResponseBody::DefaultVLModel) };
    inline DescribeApplicationAvailableModelsResponseBody& setDefaultVLModel(const DescribeApplicationAvailableModelsResponseBody::DefaultVLModel & defaultVLModel) { DARABONBA_PTR_SET_VALUE(defaultVLModel_, defaultVLModel) };
    inline DescribeApplicationAvailableModelsResponseBody& setDefaultVLModel(DescribeApplicationAvailableModelsResponseBody::DefaultVLModel && defaultVLModel) { DARABONBA_PTR_SET_RVALUE(defaultVLModel_, defaultVLModel) };


    // defaultVisualEmbedderModel Field Functions 
    bool hasDefaultVisualEmbedderModel() const { return this->defaultVisualEmbedderModel_ != nullptr;};
    void deleteDefaultVisualEmbedderModel() { this->defaultVisualEmbedderModel_ = nullptr;};
    inline const DescribeApplicationAvailableModelsResponseBody::DefaultVisualEmbedderModel & getDefaultVisualEmbedderModel() const { DARABONBA_PTR_GET_CONST(defaultVisualEmbedderModel_, DescribeApplicationAvailableModelsResponseBody::DefaultVisualEmbedderModel) };
    inline DescribeApplicationAvailableModelsResponseBody::DefaultVisualEmbedderModel getDefaultVisualEmbedderModel() { DARABONBA_PTR_GET(defaultVisualEmbedderModel_, DescribeApplicationAvailableModelsResponseBody::DefaultVisualEmbedderModel) };
    inline DescribeApplicationAvailableModelsResponseBody& setDefaultVisualEmbedderModel(const DescribeApplicationAvailableModelsResponseBody::DefaultVisualEmbedderModel & defaultVisualEmbedderModel) { DARABONBA_PTR_SET_VALUE(defaultVisualEmbedderModel_, defaultVisualEmbedderModel) };
    inline DescribeApplicationAvailableModelsResponseBody& setDefaultVisualEmbedderModel(DescribeApplicationAvailableModelsResponseBody::DefaultVisualEmbedderModel && defaultVisualEmbedderModel) { DARABONBA_PTR_SET_RVALUE(defaultVisualEmbedderModel_, defaultVisualEmbedderModel) };


    // defaultVisualLlmModel Field Functions 
    bool hasDefaultVisualLlmModel() const { return this->defaultVisualLlmModel_ != nullptr;};
    void deleteDefaultVisualLlmModel() { this->defaultVisualLlmModel_ = nullptr;};
    inline const DescribeApplicationAvailableModelsResponseBody::DefaultVisualLlmModel & getDefaultVisualLlmModel() const { DARABONBA_PTR_GET_CONST(defaultVisualLlmModel_, DescribeApplicationAvailableModelsResponseBody::DefaultVisualLlmModel) };
    inline DescribeApplicationAvailableModelsResponseBody::DefaultVisualLlmModel getDefaultVisualLlmModel() { DARABONBA_PTR_GET(defaultVisualLlmModel_, DescribeApplicationAvailableModelsResponseBody::DefaultVisualLlmModel) };
    inline DescribeApplicationAvailableModelsResponseBody& setDefaultVisualLlmModel(const DescribeApplicationAvailableModelsResponseBody::DefaultVisualLlmModel & defaultVisualLlmModel) { DARABONBA_PTR_SET_VALUE(defaultVisualLlmModel_, defaultVisualLlmModel) };
    inline DescribeApplicationAvailableModelsResponseBody& setDefaultVisualLlmModel(DescribeApplicationAvailableModelsResponseBody::DefaultVisualLlmModel && defaultVisualLlmModel) { DARABONBA_PTR_SET_RVALUE(defaultVisualLlmModel_, defaultVisualLlmModel) };


    // embeddingModels Field Functions 
    bool hasEmbeddingModels() const { return this->embeddingModels_ != nullptr;};
    void deleteEmbeddingModels() { this->embeddingModels_ = nullptr;};
    inline const vector<DescribeApplicationAvailableModelsResponseBody::EmbeddingModels> & getEmbeddingModels() const { DARABONBA_PTR_GET_CONST(embeddingModels_, vector<DescribeApplicationAvailableModelsResponseBody::EmbeddingModels>) };
    inline vector<DescribeApplicationAvailableModelsResponseBody::EmbeddingModels> getEmbeddingModels() { DARABONBA_PTR_GET(embeddingModels_, vector<DescribeApplicationAvailableModelsResponseBody::EmbeddingModels>) };
    inline DescribeApplicationAvailableModelsResponseBody& setEmbeddingModels(const vector<DescribeApplicationAvailableModelsResponseBody::EmbeddingModels> & embeddingModels) { DARABONBA_PTR_SET_VALUE(embeddingModels_, embeddingModels) };
    inline DescribeApplicationAvailableModelsResponseBody& setEmbeddingModels(vector<DescribeApplicationAvailableModelsResponseBody::EmbeddingModels> && embeddingModels) { DARABONBA_PTR_SET_RVALUE(embeddingModels_, embeddingModels) };


    // graphLlmModels Field Functions 
    bool hasGraphLlmModels() const { return this->graphLlmModels_ != nullptr;};
    void deleteGraphLlmModels() { this->graphLlmModels_ = nullptr;};
    inline const vector<DescribeApplicationAvailableModelsResponseBody::GraphLlmModels> & getGraphLlmModels() const { DARABONBA_PTR_GET_CONST(graphLlmModels_, vector<DescribeApplicationAvailableModelsResponseBody::GraphLlmModels>) };
    inline vector<DescribeApplicationAvailableModelsResponseBody::GraphLlmModels> getGraphLlmModels() { DARABONBA_PTR_GET(graphLlmModels_, vector<DescribeApplicationAvailableModelsResponseBody::GraphLlmModels>) };
    inline DescribeApplicationAvailableModelsResponseBody& setGraphLlmModels(const vector<DescribeApplicationAvailableModelsResponseBody::GraphLlmModels> & graphLlmModels) { DARABONBA_PTR_SET_VALUE(graphLlmModels_, graphLlmModels) };
    inline DescribeApplicationAvailableModelsResponseBody& setGraphLlmModels(vector<DescribeApplicationAvailableModelsResponseBody::GraphLlmModels> && graphLlmModels) { DARABONBA_PTR_SET_RVALUE(graphLlmModels_, graphLlmModels) };


    // llmModels Field Functions 
    bool hasLlmModels() const { return this->llmModels_ != nullptr;};
    void deleteLlmModels() { this->llmModels_ = nullptr;};
    inline const vector<DescribeApplicationAvailableModelsResponseBody::LlmModels> & getLlmModels() const { DARABONBA_PTR_GET_CONST(llmModels_, vector<DescribeApplicationAvailableModelsResponseBody::LlmModels>) };
    inline vector<DescribeApplicationAvailableModelsResponseBody::LlmModels> getLlmModels() { DARABONBA_PTR_GET(llmModels_, vector<DescribeApplicationAvailableModelsResponseBody::LlmModels>) };
    inline DescribeApplicationAvailableModelsResponseBody& setLlmModels(const vector<DescribeApplicationAvailableModelsResponseBody::LlmModels> & llmModels) { DARABONBA_PTR_SET_VALUE(llmModels_, llmModels) };
    inline DescribeApplicationAvailableModelsResponseBody& setLlmModels(vector<DescribeApplicationAvailableModelsResponseBody::LlmModels> && llmModels) { DARABONBA_PTR_SET_RVALUE(llmModels_, llmModels) };


    // memoryTypes Field Functions 
    bool hasMemoryTypes() const { return this->memoryTypes_ != nullptr;};
    void deleteMemoryTypes() { this->memoryTypes_ = nullptr;};
    inline const vector<string> & getMemoryTypes() const { DARABONBA_PTR_GET_CONST(memoryTypes_, vector<string>) };
    inline vector<string> getMemoryTypes() { DARABONBA_PTR_GET(memoryTypes_, vector<string>) };
    inline DescribeApplicationAvailableModelsResponseBody& setMemoryTypes(const vector<string> & memoryTypes) { DARABONBA_PTR_SET_VALUE(memoryTypes_, memoryTypes) };
    inline DescribeApplicationAvailableModelsResponseBody& setMemoryTypes(vector<string> && memoryTypes) { DARABONBA_PTR_SET_RVALUE(memoryTypes_, memoryTypes) };


    // multimodalSupported Field Functions 
    bool hasMultimodalSupported() const { return this->multimodalSupported_ != nullptr;};
    void deleteMultimodalSupported() { this->multimodalSupported_ = nullptr;};
    inline bool getMultimodalSupported() const { DARABONBA_PTR_GET_DEFAULT(multimodalSupported_, false) };
    inline DescribeApplicationAvailableModelsResponseBody& setMultimodalSupported(bool multimodalSupported) { DARABONBA_PTR_SET_VALUE(multimodalSupported_, multimodalSupported) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationAvailableModelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rerankModels Field Functions 
    bool hasRerankModels() const { return this->rerankModels_ != nullptr;};
    void deleteRerankModels() { this->rerankModels_ = nullptr;};
    inline const vector<DescribeApplicationAvailableModelsResponseBody::RerankModels> & getRerankModels() const { DARABONBA_PTR_GET_CONST(rerankModels_, vector<DescribeApplicationAvailableModelsResponseBody::RerankModels>) };
    inline vector<DescribeApplicationAvailableModelsResponseBody::RerankModels> getRerankModels() { DARABONBA_PTR_GET(rerankModels_, vector<DescribeApplicationAvailableModelsResponseBody::RerankModels>) };
    inline DescribeApplicationAvailableModelsResponseBody& setRerankModels(const vector<DescribeApplicationAvailableModelsResponseBody::RerankModels> & rerankModels) { DARABONBA_PTR_SET_VALUE(rerankModels_, rerankModels) };
    inline DescribeApplicationAvailableModelsResponseBody& setRerankModels(vector<DescribeApplicationAvailableModelsResponseBody::RerankModels> && rerankModels) { DARABONBA_PTR_SET_RVALUE(rerankModels_, rerankModels) };


    // VLModels Field Functions 
    bool hasVLModels() const { return this->VLModels_ != nullptr;};
    void deleteVLModels() { this->VLModels_ = nullptr;};
    inline const vector<DescribeApplicationAvailableModelsResponseBody::VLModels> & getVLModels() const { DARABONBA_PTR_GET_CONST(VLModels_, vector<DescribeApplicationAvailableModelsResponseBody::VLModels>) };
    inline vector<DescribeApplicationAvailableModelsResponseBody::VLModels> getVLModels() { DARABONBA_PTR_GET(VLModels_, vector<DescribeApplicationAvailableModelsResponseBody::VLModels>) };
    inline DescribeApplicationAvailableModelsResponseBody& setVLModels(const vector<DescribeApplicationAvailableModelsResponseBody::VLModels> & vLModels) { DARABONBA_PTR_SET_VALUE(VLModels_, vLModels) };
    inline DescribeApplicationAvailableModelsResponseBody& setVLModels(vector<DescribeApplicationAvailableModelsResponseBody::VLModels> && vLModels) { DARABONBA_PTR_SET_RVALUE(VLModels_, vLModels) };


    // visualEmbedderModels Field Functions 
    bool hasVisualEmbedderModels() const { return this->visualEmbedderModels_ != nullptr;};
    void deleteVisualEmbedderModels() { this->visualEmbedderModels_ = nullptr;};
    inline const vector<DescribeApplicationAvailableModelsResponseBody::VisualEmbedderModels> & getVisualEmbedderModels() const { DARABONBA_PTR_GET_CONST(visualEmbedderModels_, vector<DescribeApplicationAvailableModelsResponseBody::VisualEmbedderModels>) };
    inline vector<DescribeApplicationAvailableModelsResponseBody::VisualEmbedderModels> getVisualEmbedderModels() { DARABONBA_PTR_GET(visualEmbedderModels_, vector<DescribeApplicationAvailableModelsResponseBody::VisualEmbedderModels>) };
    inline DescribeApplicationAvailableModelsResponseBody& setVisualEmbedderModels(const vector<DescribeApplicationAvailableModelsResponseBody::VisualEmbedderModels> & visualEmbedderModels) { DARABONBA_PTR_SET_VALUE(visualEmbedderModels_, visualEmbedderModels) };
    inline DescribeApplicationAvailableModelsResponseBody& setVisualEmbedderModels(vector<DescribeApplicationAvailableModelsResponseBody::VisualEmbedderModels> && visualEmbedderModels) { DARABONBA_PTR_SET_RVALUE(visualEmbedderModels_, visualEmbedderModels) };


    // visualLlmModels Field Functions 
    bool hasVisualLlmModels() const { return this->visualLlmModels_ != nullptr;};
    void deleteVisualLlmModels() { this->visualLlmModels_ = nullptr;};
    inline const vector<DescribeApplicationAvailableModelsResponseBody::VisualLlmModels> & getVisualLlmModels() const { DARABONBA_PTR_GET_CONST(visualLlmModels_, vector<DescribeApplicationAvailableModelsResponseBody::VisualLlmModels>) };
    inline vector<DescribeApplicationAvailableModelsResponseBody::VisualLlmModels> getVisualLlmModels() { DARABONBA_PTR_GET(visualLlmModels_, vector<DescribeApplicationAvailableModelsResponseBody::VisualLlmModels>) };
    inline DescribeApplicationAvailableModelsResponseBody& setVisualLlmModels(const vector<DescribeApplicationAvailableModelsResponseBody::VisualLlmModels> & visualLlmModels) { DARABONBA_PTR_SET_VALUE(visualLlmModels_, visualLlmModels) };
    inline DescribeApplicationAvailableModelsResponseBody& setVisualLlmModels(vector<DescribeApplicationAvailableModelsResponseBody::VisualLlmModels> && visualLlmModels) { DARABONBA_PTR_SET_RVALUE(visualLlmModels_, visualLlmModels) };


  protected:
    // The list of speech recognition models.
    shared_ptr<vector<DescribeApplicationAvailableModelsResponseBody::AsrModels>> asrModels_ {};
    // The default text embedding model.
    shared_ptr<DescribeApplicationAvailableModelsResponseBody::DefaultEmbeddingModel> defaultEmbeddingModel_ {};
    // The default graph large language model.
    shared_ptr<DescribeApplicationAvailableModelsResponseBody::DefaultGraphLLMModel> defaultGraphLLMModel_ {};
    // The default large language model.
    shared_ptr<DescribeApplicationAvailableModelsResponseBody::DefaultLLMModel> defaultLLMModel_ {};
    // The default memory type.
    shared_ptr<string> defaultMemoryType_ {};
    // The default reranking model.
    shared_ptr<DescribeApplicationAvailableModelsResponseBody::DefaultRerankModel> defaultRerankModel_ {};
    // The default vision-language model.
    shared_ptr<DescribeApplicationAvailableModelsResponseBody::DefaultVLModel> defaultVLModel_ {};
    // The default VisualEmbedder model.
    shared_ptr<DescribeApplicationAvailableModelsResponseBody::DefaultVisualEmbedderModel> defaultVisualEmbedderModel_ {};
    // The default VisualLLM model.
    shared_ptr<DescribeApplicationAvailableModelsResponseBody::DefaultVisualLlmModel> defaultVisualLlmModel_ {};
    // The list of available text embedding models.
    shared_ptr<vector<DescribeApplicationAvailableModelsResponseBody::EmbeddingModels>> embeddingModels_ {};
    // The list of available graph large language models.
    shared_ptr<vector<DescribeApplicationAvailableModelsResponseBody::GraphLlmModels>> graphLlmModels_ {};
    // The list of available large language models.
    shared_ptr<vector<DescribeApplicationAvailableModelsResponseBody::LlmModels>> llmModels_ {};
    // The available memory types.
    shared_ptr<vector<string>> memoryTypes_ {};
    // Indicates whether the current account supports Mem0 multimodal.
    shared_ptr<bool> multimodalSupported_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of available reranking models.
    shared_ptr<vector<DescribeApplicationAvailableModelsResponseBody::RerankModels>> rerankModels_ {};
    // The list of available vision-language models.
    shared_ptr<vector<DescribeApplicationAvailableModelsResponseBody::VLModels>> VLModels_ {};
    // The list of available VisualEmbedder models.
    shared_ptr<vector<DescribeApplicationAvailableModelsResponseBody::VisualEmbedderModels>> visualEmbedderModels_ {};
    // The list of available VisualLLM models.
    shared_ptr<vector<DescribeApplicationAvailableModelsResponseBody::VisualLlmModels>> visualLlmModels_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
