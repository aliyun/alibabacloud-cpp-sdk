// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATUREVIEWFIELDRELATIONSHIPSRESPONSEBODYRELATIONSHIPSMODELS_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATUREVIEWFIELDRELATIONSHIPSRESPONSEBODYRELATIONSHIPSMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureAliasName, featureAliasName_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureAliasName, featureAliasName_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
    };
    ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels() = default ;
    ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels(const ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels &) = default ;
    ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels(ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels &&) = default ;
    ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels() = default ;
    ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels& operator=(const ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels &) = default ;
    ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels& operator=(ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->featureAliasName_ != nullptr
        && this->modelId_ != nullptr && this->modelName_ != nullptr; };
    // featureAliasName Field Functions 
    bool hasFeatureAliasName() const { return this->featureAliasName_ != nullptr;};
    void deleteFeatureAliasName() { this->featureAliasName_ = nullptr;};
    inline string featureAliasName() const { DARABONBA_PTR_GET_DEFAULT(featureAliasName_, "") };
    inline ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels& setFeatureAliasName(string featureAliasName) { DARABONBA_PTR_SET_VALUE(featureAliasName_, featureAliasName) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


  protected:
    std::shared_ptr<string> featureAliasName_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
