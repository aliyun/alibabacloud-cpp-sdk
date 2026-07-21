// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEMODELITEMDTO_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEMODELITEMDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class BatchCreateModelItemDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateModelItemDTO& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(extensions, extensions_);
      DARABONBA_PTR_TO_JSON(inOut, inOut_);
      DARABONBA_PTR_TO_JSON(maxInputLength, maxInputLength_);
      DARABONBA_PTR_TO_JSON(maxOutputLength, maxOutputLength_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateModelItemDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(extensions, extensions_);
      DARABONBA_PTR_FROM_JSON(inOut, inOut_);
      DARABONBA_PTR_FROM_JSON(maxInputLength, maxInputLength_);
      DARABONBA_PTR_FROM_JSON(maxOutputLength, maxOutputLength_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    BatchCreateModelItemDTO() = default ;
    BatchCreateModelItemDTO(const BatchCreateModelItemDTO &) = default ;
    BatchCreateModelItemDTO(BatchCreateModelItemDTO &&) = default ;
    BatchCreateModelItemDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateModelItemDTO() = default ;
    BatchCreateModelItemDTO& operator=(const BatchCreateModelItemDTO &) = default ;
    BatchCreateModelItemDTO& operator=(BatchCreateModelItemDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->extensions_ == nullptr && this->inOut_ == nullptr && this->maxInputLength_ == nullptr && this->maxOutputLength_ == nullptr && this->modelId_ == nullptr
        && this->modelType_ == nullptr && this->name_ == nullptr && this->tags_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline BatchCreateModelItemDTO& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extensions Field Functions 
    bool hasExtensions() const { return this->extensions_ != nullptr;};
    void deleteExtensions() { this->extensions_ = nullptr;};
    inline string getExtensions() const { DARABONBA_PTR_GET_DEFAULT(extensions_, "") };
    inline BatchCreateModelItemDTO& setExtensions(string extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };


    // inOut Field Functions 
    bool hasInOut() const { return this->inOut_ != nullptr;};
    void deleteInOut() { this->inOut_ = nullptr;};
    inline string getInOut() const { DARABONBA_PTR_GET_DEFAULT(inOut_, "") };
    inline BatchCreateModelItemDTO& setInOut(string inOut) { DARABONBA_PTR_SET_VALUE(inOut_, inOut) };


    // maxInputLength Field Functions 
    bool hasMaxInputLength() const { return this->maxInputLength_ != nullptr;};
    void deleteMaxInputLength() { this->maxInputLength_ = nullptr;};
    inline string getMaxInputLength() const { DARABONBA_PTR_GET_DEFAULT(maxInputLength_, "") };
    inline BatchCreateModelItemDTO& setMaxInputLength(string maxInputLength) { DARABONBA_PTR_SET_VALUE(maxInputLength_, maxInputLength) };


    // maxOutputLength Field Functions 
    bool hasMaxOutputLength() const { return this->maxOutputLength_ != nullptr;};
    void deleteMaxOutputLength() { this->maxOutputLength_ = nullptr;};
    inline string getMaxOutputLength() const { DARABONBA_PTR_GET_DEFAULT(maxOutputLength_, "") };
    inline BatchCreateModelItemDTO& setMaxOutputLength(string maxOutputLength) { DARABONBA_PTR_SET_VALUE(maxOutputLength_, maxOutputLength) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline BatchCreateModelItemDTO& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline BatchCreateModelItemDTO& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline BatchCreateModelItemDTO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline BatchCreateModelItemDTO& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> extensions_ {};
    shared_ptr<string> inOut_ {};
    shared_ptr<string> maxInputLength_ {};
    shared_ptr<string> maxOutputLength_ {};
    // This parameter is required.
    shared_ptr<string> modelId_ {};
    // This parameter is required.
    shared_ptr<string> modelType_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
