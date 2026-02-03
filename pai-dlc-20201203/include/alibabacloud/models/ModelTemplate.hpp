// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_MODELTEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ModelTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(Collections, collections_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
    };
    friend void from_json(const Darabonba::Json& j, ModelTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(Collections, collections_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
    };
    ModelTemplate() = default ;
    ModelTemplate(const ModelTemplate &) = default ;
    ModelTemplate(ModelTemplate &&) = default ;
    ModelTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelTemplate() = default ;
    ModelTemplate& operator=(const ModelTemplate &) = default ;
    ModelTemplate& operator=(ModelTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collections_ == nullptr
        && this->modelName_ == nullptr && this->provider_ == nullptr; };
    // collections Field Functions 
    bool hasCollections() const { return this->collections_ != nullptr;};
    void deleteCollections() { this->collections_ = nullptr;};
    inline string getCollections() const { DARABONBA_PTR_GET_DEFAULT(collections_, "") };
    inline ModelTemplate& setCollections(string collections) { DARABONBA_PTR_SET_VALUE(collections_, collections) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ModelTemplate& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ModelTemplate& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


  protected:
    shared_ptr<string> collections_ {};
    shared_ptr<string> modelName_ {};
    shared_ptr<string> provider_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
