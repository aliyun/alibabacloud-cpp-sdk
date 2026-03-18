// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELDTO_HPP_
#define ALIBABACLOUD_MODELS_MODELDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelDTO& obj) { 
      DARABONBA_PTR_TO_JSON(apiKeyPreview, apiKeyPreview_);
      DARABONBA_PTR_TO_JSON(baseUrl, baseUrl_);
      DARABONBA_PTR_TO_JSON(deleteTag, deleteTag_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isCustom, isCustom_);
      DARABONBA_PTR_TO_JSON(maxInputLength, maxInputLength_);
      DARABONBA_PTR_TO_JSON(maxOutputLength, maxOutputLength_);
      DARABONBA_PTR_TO_JSON(modelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(symbol, symbol_);
      DARABONBA_PTR_TO_JSON(tagNames, tagNames_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ModelDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKeyPreview, apiKeyPreview_);
      DARABONBA_PTR_FROM_JSON(baseUrl, baseUrl_);
      DARABONBA_PTR_FROM_JSON(deleteTag, deleteTag_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isCustom, isCustom_);
      DARABONBA_PTR_FROM_JSON(maxInputLength, maxInputLength_);
      DARABONBA_PTR_FROM_JSON(maxOutputLength, maxOutputLength_);
      DARABONBA_PTR_FROM_JSON(modelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(symbol, symbol_);
      DARABONBA_PTR_FROM_JSON(tagNames, tagNames_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    ModelDTO() = default ;
    ModelDTO(const ModelDTO &) = default ;
    ModelDTO(ModelDTO &&) = default ;
    ModelDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelDTO() = default ;
    ModelDTO& operator=(const ModelDTO &) = default ;
    ModelDTO& operator=(ModelDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeyPreview_ == nullptr
        && this->baseUrl_ == nullptr && this->deleteTag_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->isCustom_ == nullptr && this->maxInputLength_ == nullptr && this->maxOutputLength_ == nullptr && this->modelCode_ == nullptr
        && this->modelType_ == nullptr && this->name_ == nullptr && this->symbol_ == nullptr && this->tagNames_ == nullptr && this->tags_ == nullptr; };
    // apiKeyPreview Field Functions 
    bool hasApiKeyPreview() const { return this->apiKeyPreview_ != nullptr;};
    void deleteApiKeyPreview() { this->apiKeyPreview_ = nullptr;};
    inline string getApiKeyPreview() const { DARABONBA_PTR_GET_DEFAULT(apiKeyPreview_, "") };
    inline ModelDTO& setApiKeyPreview(string apiKeyPreview) { DARABONBA_PTR_SET_VALUE(apiKeyPreview_, apiKeyPreview) };


    // baseUrl Field Functions 
    bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
    void deleteBaseUrl() { this->baseUrl_ = nullptr;};
    inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
    inline ModelDTO& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


    // deleteTag Field Functions 
    bool hasDeleteTag() const { return this->deleteTag_ != nullptr;};
    void deleteDeleteTag() { this->deleteTag_ = nullptr;};
    inline int32_t getDeleteTag() const { DARABONBA_PTR_GET_DEFAULT(deleteTag_, 0) };
    inline ModelDTO& setDeleteTag(int32_t deleteTag) { DARABONBA_PTR_SET_VALUE(deleteTag_, deleteTag) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModelDTO& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ModelDTO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ModelDTO& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModelDTO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isCustom Field Functions 
    bool hasIsCustom() const { return this->isCustom_ != nullptr;};
    void deleteIsCustom() { this->isCustom_ = nullptr;};
    inline bool getIsCustom() const { DARABONBA_PTR_GET_DEFAULT(isCustom_, false) };
    inline ModelDTO& setIsCustom(bool isCustom) { DARABONBA_PTR_SET_VALUE(isCustom_, isCustom) };


    // maxInputLength Field Functions 
    bool hasMaxInputLength() const { return this->maxInputLength_ != nullptr;};
    void deleteMaxInputLength() { this->maxInputLength_ = nullptr;};
    inline string getMaxInputLength() const { DARABONBA_PTR_GET_DEFAULT(maxInputLength_, "") };
    inline ModelDTO& setMaxInputLength(string maxInputLength) { DARABONBA_PTR_SET_VALUE(maxInputLength_, maxInputLength) };


    // maxOutputLength Field Functions 
    bool hasMaxOutputLength() const { return this->maxOutputLength_ != nullptr;};
    void deleteMaxOutputLength() { this->maxOutputLength_ = nullptr;};
    inline string getMaxOutputLength() const { DARABONBA_PTR_GET_DEFAULT(maxOutputLength_, "") };
    inline ModelDTO& setMaxOutputLength(string maxOutputLength) { DARABONBA_PTR_SET_VALUE(maxOutputLength_, maxOutputLength) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline ModelDTO& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ModelDTO& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModelDTO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // symbol Field Functions 
    bool hasSymbol() const { return this->symbol_ != nullptr;};
    void deleteSymbol() { this->symbol_ = nullptr;};
    inline string getSymbol() const { DARABONBA_PTR_GET_DEFAULT(symbol_, "") };
    inline ModelDTO& setSymbol(string symbol) { DARABONBA_PTR_SET_VALUE(symbol_, symbol) };


    // tagNames Field Functions 
    bool hasTagNames() const { return this->tagNames_ != nullptr;};
    void deleteTagNames() { this->tagNames_ = nullptr;};
    inline string getTagNames() const { DARABONBA_PTR_GET_DEFAULT(tagNames_, "") };
    inline ModelDTO& setTagNames(string tagNames) { DARABONBA_PTR_SET_VALUE(tagNames_, tagNames) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ModelDTO& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    shared_ptr<string> apiKeyPreview_ {};
    shared_ptr<string> baseUrl_ {};
    shared_ptr<int32_t> deleteTag_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<bool> isCustom_ {};
    shared_ptr<string> maxInputLength_ {};
    shared_ptr<string> maxOutputLength_ {};
    shared_ptr<string> modelCode_ {};
    shared_ptr<string> modelType_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> symbol_ {};
    shared_ptr<string> tagNames_ {};
    shared_ptr<string> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
