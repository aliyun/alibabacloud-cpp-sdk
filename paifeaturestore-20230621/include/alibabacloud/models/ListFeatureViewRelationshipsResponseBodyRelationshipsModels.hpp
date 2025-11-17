// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATUREVIEWRELATIONSHIPSRESPONSEBODYRELATIONSHIPSMODELS_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATUREVIEWRELATIONSHIPSRESPONSEBODYRELATIONSHIPSMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListFeatureViewRelationshipsResponseBodyRelationshipsModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureViewRelationshipsResponseBodyRelationshipsModels& obj) { 
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureViewRelationshipsResponseBodyRelationshipsModels& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
    };
    ListFeatureViewRelationshipsResponseBodyRelationshipsModels() = default ;
    ListFeatureViewRelationshipsResponseBodyRelationshipsModels(const ListFeatureViewRelationshipsResponseBodyRelationshipsModels &) = default ;
    ListFeatureViewRelationshipsResponseBodyRelationshipsModels(ListFeatureViewRelationshipsResponseBodyRelationshipsModels &&) = default ;
    ListFeatureViewRelationshipsResponseBodyRelationshipsModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureViewRelationshipsResponseBodyRelationshipsModels() = default ;
    ListFeatureViewRelationshipsResponseBodyRelationshipsModels& operator=(const ListFeatureViewRelationshipsResponseBodyRelationshipsModels &) = default ;
    ListFeatureViewRelationshipsResponseBodyRelationshipsModels& operator=(ListFeatureViewRelationshipsResponseBodyRelationshipsModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelId_ == nullptr
        && return this->modelName_ == nullptr; };
    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline ListFeatureViewRelationshipsResponseBodyRelationshipsModels& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ListFeatureViewRelationshipsResponseBodyRelationshipsModels& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


  protected:
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
