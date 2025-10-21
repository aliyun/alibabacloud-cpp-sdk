// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELCATEGORYRESPONSEBODYMODELCATEGORYINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELCATEGORYRESPONSEBODYMODELCATEGORYINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ListModelCategoryResponseBodyModelCategoryInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelCategoryResponseBodyModelCategoryInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(ContentSafeImageSupported, contentSafeImageSupported_);
      DARABONBA_PTR_TO_JSON(ContentSafeTextSupported, contentSafeTextSupported_);
      DARABONBA_PTR_TO_JSON(ModelCategoryId, modelCategoryId_);
      DARABONBA_PTR_TO_JSON(ModelCategoryName, modelCategoryName_);
      DARABONBA_PTR_TO_JSON(ModelSource, modelSource_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(PromptAttackTextSupported, promptAttackTextSupported_);
      DARABONBA_PTR_TO_JSON(SensitiveTopicTextSupported, sensitiveTopicTextSupported_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelCategoryResponseBodyModelCategoryInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentSafeImageSupported, contentSafeImageSupported_);
      DARABONBA_PTR_FROM_JSON(ContentSafeTextSupported, contentSafeTextSupported_);
      DARABONBA_PTR_FROM_JSON(ModelCategoryId, modelCategoryId_);
      DARABONBA_PTR_FROM_JSON(ModelCategoryName, modelCategoryName_);
      DARABONBA_PTR_FROM_JSON(ModelSource, modelSource_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(PromptAttackTextSupported, promptAttackTextSupported_);
      DARABONBA_PTR_FROM_JSON(SensitiveTopicTextSupported, sensitiveTopicTextSupported_);
    };
    ListModelCategoryResponseBodyModelCategoryInfoList() = default ;
    ListModelCategoryResponseBodyModelCategoryInfoList(const ListModelCategoryResponseBodyModelCategoryInfoList &) = default ;
    ListModelCategoryResponseBodyModelCategoryInfoList(ListModelCategoryResponseBodyModelCategoryInfoList &&) = default ;
    ListModelCategoryResponseBodyModelCategoryInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelCategoryResponseBodyModelCategoryInfoList() = default ;
    ListModelCategoryResponseBodyModelCategoryInfoList& operator=(const ListModelCategoryResponseBodyModelCategoryInfoList &) = default ;
    ListModelCategoryResponseBodyModelCategoryInfoList& operator=(ListModelCategoryResponseBodyModelCategoryInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentSafeImageSupported_ == nullptr
        && return this->contentSafeTextSupported_ == nullptr && return this->modelCategoryId_ == nullptr && return this->modelCategoryName_ == nullptr && return this->modelSource_ == nullptr && return this->priority_ == nullptr
        && return this->promptAttackTextSupported_ == nullptr && return this->sensitiveTopicTextSupported_ == nullptr; };
    // contentSafeImageSupported Field Functions 
    bool hasContentSafeImageSupported() const { return this->contentSafeImageSupported_ != nullptr;};
    void deleteContentSafeImageSupported() { this->contentSafeImageSupported_ = nullptr;};
    inline int32_t contentSafeImageSupported() const { DARABONBA_PTR_GET_DEFAULT(contentSafeImageSupported_, 0) };
    inline ListModelCategoryResponseBodyModelCategoryInfoList& setContentSafeImageSupported(int32_t contentSafeImageSupported) { DARABONBA_PTR_SET_VALUE(contentSafeImageSupported_, contentSafeImageSupported) };


    // contentSafeTextSupported Field Functions 
    bool hasContentSafeTextSupported() const { return this->contentSafeTextSupported_ != nullptr;};
    void deleteContentSafeTextSupported() { this->contentSafeTextSupported_ = nullptr;};
    inline int32_t contentSafeTextSupported() const { DARABONBA_PTR_GET_DEFAULT(contentSafeTextSupported_, 0) };
    inline ListModelCategoryResponseBodyModelCategoryInfoList& setContentSafeTextSupported(int32_t contentSafeTextSupported) { DARABONBA_PTR_SET_VALUE(contentSafeTextSupported_, contentSafeTextSupported) };


    // modelCategoryId Field Functions 
    bool hasModelCategoryId() const { return this->modelCategoryId_ != nullptr;};
    void deleteModelCategoryId() { this->modelCategoryId_ = nullptr;};
    inline int64_t modelCategoryId() const { DARABONBA_PTR_GET_DEFAULT(modelCategoryId_, 0L) };
    inline ListModelCategoryResponseBodyModelCategoryInfoList& setModelCategoryId(int64_t modelCategoryId) { DARABONBA_PTR_SET_VALUE(modelCategoryId_, modelCategoryId) };


    // modelCategoryName Field Functions 
    bool hasModelCategoryName() const { return this->modelCategoryName_ != nullptr;};
    void deleteModelCategoryName() { this->modelCategoryName_ = nullptr;};
    inline string modelCategoryName() const { DARABONBA_PTR_GET_DEFAULT(modelCategoryName_, "") };
    inline ListModelCategoryResponseBodyModelCategoryInfoList& setModelCategoryName(string modelCategoryName) { DARABONBA_PTR_SET_VALUE(modelCategoryName_, modelCategoryName) };


    // modelSource Field Functions 
    bool hasModelSource() const { return this->modelSource_ != nullptr;};
    void deleteModelSource() { this->modelSource_ = nullptr;};
    inline int32_t modelSource() const { DARABONBA_PTR_GET_DEFAULT(modelSource_, 0) };
    inline ListModelCategoryResponseBodyModelCategoryInfoList& setModelSource(int32_t modelSource) { DARABONBA_PTR_SET_VALUE(modelSource_, modelSource) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListModelCategoryResponseBodyModelCategoryInfoList& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // promptAttackTextSupported Field Functions 
    bool hasPromptAttackTextSupported() const { return this->promptAttackTextSupported_ != nullptr;};
    void deletePromptAttackTextSupported() { this->promptAttackTextSupported_ = nullptr;};
    inline int32_t promptAttackTextSupported() const { DARABONBA_PTR_GET_DEFAULT(promptAttackTextSupported_, 0) };
    inline ListModelCategoryResponseBodyModelCategoryInfoList& setPromptAttackTextSupported(int32_t promptAttackTextSupported) { DARABONBA_PTR_SET_VALUE(promptAttackTextSupported_, promptAttackTextSupported) };


    // sensitiveTopicTextSupported Field Functions 
    bool hasSensitiveTopicTextSupported() const { return this->sensitiveTopicTextSupported_ != nullptr;};
    void deleteSensitiveTopicTextSupported() { this->sensitiveTopicTextSupported_ = nullptr;};
    inline int32_t sensitiveTopicTextSupported() const { DARABONBA_PTR_GET_DEFAULT(sensitiveTopicTextSupported_, 0) };
    inline ListModelCategoryResponseBodyModelCategoryInfoList& setSensitiveTopicTextSupported(int32_t sensitiveTopicTextSupported) { DARABONBA_PTR_SET_VALUE(sensitiveTopicTextSupported_, sensitiveTopicTextSupported) };


  protected:
    std::shared_ptr<int32_t> contentSafeImageSupported_ = nullptr;
    std::shared_ptr<int32_t> contentSafeTextSupported_ = nullptr;
    std::shared_ptr<int64_t> modelCategoryId_ = nullptr;
    std::shared_ptr<string> modelCategoryName_ = nullptr;
    std::shared_ptr<int32_t> modelSource_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<int32_t> promptAttackTextSupported_ = nullptr;
    std::shared_ptr<int32_t> sensitiveTopicTextSupported_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
