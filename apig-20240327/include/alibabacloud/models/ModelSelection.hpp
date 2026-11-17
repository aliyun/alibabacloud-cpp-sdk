// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELSELECTION_HPP_
#define ALIBABACLOUD_MODELS_MODELSELECTION_HPP_
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
  class ModelSelection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelSelection& obj) { 
      DARABONBA_PTR_TO_JSON(convenienceAliasEnabled, convenienceAliasEnabled_);
      DARABONBA_PTR_TO_JSON(endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(fallbackChains, fallbackChains_);
      DARABONBA_PTR_TO_JSON(modelGroupIds, modelGroupIds_);
      DARABONBA_PTR_TO_JSON(models, models_);
    };
    friend void from_json(const Darabonba::Json& j, ModelSelection& obj) { 
      DARABONBA_PTR_FROM_JSON(convenienceAliasEnabled, convenienceAliasEnabled_);
      DARABONBA_PTR_FROM_JSON(endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(fallbackChains, fallbackChains_);
      DARABONBA_PTR_FROM_JSON(modelGroupIds, modelGroupIds_);
      DARABONBA_PTR_FROM_JSON(models, models_);
    };
    ModelSelection() = default ;
    ModelSelection(const ModelSelection &) = default ;
    ModelSelection(ModelSelection &&) = default ;
    ModelSelection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelSelection() = default ;
    ModelSelection& operator=(const ModelSelection &) = default ;
    ModelSelection& operator=(ModelSelection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Models : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Models& obj) { 
        DARABONBA_PTR_TO_JSON(modelCardId, modelCardId_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      };
      friend void from_json(const Darabonba::Json& j, Models& obj) { 
        DARABONBA_PTR_FROM_JSON(modelCardId, modelCardId_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      };
      Models() = default ;
      Models(const Models &) = default ;
      Models(Models &&) = default ;
      Models(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Models() = default ;
      Models& operator=(const Models &) = default ;
      Models& operator=(Models &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modelCardId_ == nullptr
        && this->serviceId_ == nullptr; };
      // modelCardId Field Functions 
      bool hasModelCardId() const { return this->modelCardId_ != nullptr;};
      void deleteModelCardId() { this->modelCardId_ = nullptr;};
      inline string getModelCardId() const { DARABONBA_PTR_GET_DEFAULT(modelCardId_, "") };
      inline Models& setModelCardId(string modelCardId) { DARABONBA_PTR_SET_VALUE(modelCardId_, modelCardId) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Models& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    protected:
      // The model card ID.
      shared_ptr<string> modelCardId_ {};
      // The explicit execution target AI service ID for the model. This parameter is optional and takes precedence over the provider default.
      shared_ptr<string> serviceId_ {};
    };

    class FallbackChains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FallbackChains& obj) { 
        DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(fallbackModelCardIds, fallbackModelCardIds_);
        DARABONBA_PTR_TO_JSON(sourceModelCardId, sourceModelCardId_);
      };
      friend void from_json(const Darabonba::Json& j, FallbackChains& obj) { 
        DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(fallbackModelCardIds, fallbackModelCardIds_);
        DARABONBA_PTR_FROM_JSON(sourceModelCardId, sourceModelCardId_);
      };
      FallbackChains() = default ;
      FallbackChains(const FallbackChains &) = default ;
      FallbackChains(FallbackChains &&) = default ;
      FallbackChains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FallbackChains() = default ;
      FallbackChains& operator=(const FallbackChains &) = default ;
      FallbackChains& operator=(FallbackChains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->fallbackModelCardIds_ == nullptr && this->sourceModelCardId_ == nullptr; };
      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline FallbackChains& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // fallbackModelCardIds Field Functions 
      bool hasFallbackModelCardIds() const { return this->fallbackModelCardIds_ != nullptr;};
      void deleteFallbackModelCardIds() { this->fallbackModelCardIds_ = nullptr;};
      inline const vector<string> & getFallbackModelCardIds() const { DARABONBA_PTR_GET_CONST(fallbackModelCardIds_, vector<string>) };
      inline vector<string> getFallbackModelCardIds() { DARABONBA_PTR_GET(fallbackModelCardIds_, vector<string>) };
      inline FallbackChains& setFallbackModelCardIds(const vector<string> & fallbackModelCardIds) { DARABONBA_PTR_SET_VALUE(fallbackModelCardIds_, fallbackModelCardIds) };
      inline FallbackChains& setFallbackModelCardIds(vector<string> && fallbackModelCardIds) { DARABONBA_PTR_SET_RVALUE(fallbackModelCardIds_, fallbackModelCardIds) };


      // sourceModelCardId Field Functions 
      bool hasSourceModelCardId() const { return this->sourceModelCardId_ != nullptr;};
      void deleteSourceModelCardId() { this->sourceModelCardId_ = nullptr;};
      inline string getSourceModelCardId() const { DARABONBA_PTR_GET_DEFAULT(sourceModelCardId_, "") };
      inline FallbackChains& setSourceModelCardId(string sourceModelCardId) { DARABONBA_PTR_SET_VALUE(sourceModelCardId_, sourceModelCardId) };


    protected:
      // The endpoint name to which the chain belongs. It must be one of the currently selected endpoints.
      shared_ptr<string> endpoint_ {};
      // The ordered collection of fallback model card IDs.
      shared_ptr<vector<string>> fallbackModelCardIds_ {};
      // The source model card ID.
      shared_ptr<string> sourceModelCardId_ {};
    };

    virtual bool empty() const override { return this->convenienceAliasEnabled_ == nullptr
        && this->endpoints_ == nullptr && this->fallbackChains_ == nullptr && this->modelGroupIds_ == nullptr && this->models_ == nullptr; };
    // convenienceAliasEnabled Field Functions 
    bool hasConvenienceAliasEnabled() const { return this->convenienceAliasEnabled_ != nullptr;};
    void deleteConvenienceAliasEnabled() { this->convenienceAliasEnabled_ = nullptr;};
    inline bool getConvenienceAliasEnabled() const { DARABONBA_PTR_GET_DEFAULT(convenienceAliasEnabled_, false) };
    inline ModelSelection& setConvenienceAliasEnabled(bool convenienceAliasEnabled) { DARABONBA_PTR_SET_VALUE(convenienceAliasEnabled_, convenienceAliasEnabled) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<string> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<string>) };
    inline vector<string> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<string>) };
    inline ModelSelection& setEndpoints(const vector<string> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline ModelSelection& setEndpoints(vector<string> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // fallbackChains Field Functions 
    bool hasFallbackChains() const { return this->fallbackChains_ != nullptr;};
    void deleteFallbackChains() { this->fallbackChains_ = nullptr;};
    inline const vector<ModelSelection::FallbackChains> & getFallbackChains() const { DARABONBA_PTR_GET_CONST(fallbackChains_, vector<ModelSelection::FallbackChains>) };
    inline vector<ModelSelection::FallbackChains> getFallbackChains() { DARABONBA_PTR_GET(fallbackChains_, vector<ModelSelection::FallbackChains>) };
    inline ModelSelection& setFallbackChains(const vector<ModelSelection::FallbackChains> & fallbackChains) { DARABONBA_PTR_SET_VALUE(fallbackChains_, fallbackChains) };
    inline ModelSelection& setFallbackChains(vector<ModelSelection::FallbackChains> && fallbackChains) { DARABONBA_PTR_SET_RVALUE(fallbackChains_, fallbackChains) };


    // modelGroupIds Field Functions 
    bool hasModelGroupIds() const { return this->modelGroupIds_ != nullptr;};
    void deleteModelGroupIds() { this->modelGroupIds_ = nullptr;};
    inline const vector<string> & getModelGroupIds() const { DARABONBA_PTR_GET_CONST(modelGroupIds_, vector<string>) };
    inline vector<string> getModelGroupIds() { DARABONBA_PTR_GET(modelGroupIds_, vector<string>) };
    inline ModelSelection& setModelGroupIds(const vector<string> & modelGroupIds) { DARABONBA_PTR_SET_VALUE(modelGroupIds_, modelGroupIds) };
    inline ModelSelection& setModelGroupIds(vector<string> && modelGroupIds) { DARABONBA_PTR_SET_RVALUE(modelGroupIds_, modelGroupIds) };


    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<ModelSelection::Models> & getModels() const { DARABONBA_PTR_GET_CONST(models_, vector<ModelSelection::Models>) };
    inline vector<ModelSelection::Models> getModels() { DARABONBA_PTR_GET(models_, vector<ModelSelection::Models>) };
    inline ModelSelection& setModels(const vector<ModelSelection::Models> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline ModelSelection& setModels(vector<ModelSelection::Models> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


  protected:
    // Specifies whether to enable convenience aliases. When enabled, all selected model names must be unique.
    shared_ptr<bool> convenienceAliasEnabled_ {};
    // The collection of explicitly selected built-in endpoint (route) names. This parameter is required and cannot be empty.
    shared_ptr<vector<string>> endpoints_ {};
    // The ordered fallback chains configured by endpoint and initial model.
    shared_ptr<vector<ModelSelection::FallbackChains>> fallbackChains_ {};
    // The selected model group IDs within the instance. Group identity is retained, the union of current members and single-selected models is calculated, and empty groups can be saved as drafts.
    shared_ptr<vector<string>> modelGroupIds_ {};
    // The selected model collection.
    shared_ptr<vector<ModelSelection::Models>> models_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
