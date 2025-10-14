// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITIMAGETRANSLATETASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITIMAGETRANSLATETASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class SubmitImageTranslateTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitImageTranslateTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ext, extShrink_);
      DARABONBA_PTR_TO_JSON(format, format_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(sourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(targetLanguage, targetLanguageShrink_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitImageTranslateTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ext, extShrink_);
      DARABONBA_PTR_FROM_JSON(format, format_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(sourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(targetLanguage, targetLanguageShrink_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    SubmitImageTranslateTaskShrinkRequest() = default ;
    SubmitImageTranslateTaskShrinkRequest(const SubmitImageTranslateTaskShrinkRequest &) = default ;
    SubmitImageTranslateTaskShrinkRequest(SubmitImageTranslateTaskShrinkRequest &&) = default ;
    SubmitImageTranslateTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitImageTranslateTaskShrinkRequest() = default ;
    SubmitImageTranslateTaskShrinkRequest& operator=(const SubmitImageTranslateTaskShrinkRequest &) = default ;
    SubmitImageTranslateTaskShrinkRequest& operator=(SubmitImageTranslateTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extShrink_ == nullptr
        && return this->format_ == nullptr && return this->scene_ == nullptr && return this->sourceLanguage_ == nullptr && return this->targetLanguageShrink_ == nullptr && return this->text_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // extShrink Field Functions 
    bool hasExtShrink() const { return this->extShrink_ != nullptr;};
    void deleteExtShrink() { this->extShrink_ = nullptr;};
    inline string extShrink() const { DARABONBA_PTR_GET_DEFAULT(extShrink_, "") };
    inline SubmitImageTranslateTaskShrinkRequest& setExtShrink(string extShrink) { DARABONBA_PTR_SET_VALUE(extShrink_, extShrink) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline SubmitImageTranslateTaskShrinkRequest& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline SubmitImageTranslateTaskShrinkRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string sourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline SubmitImageTranslateTaskShrinkRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguageShrink Field Functions 
    bool hasTargetLanguageShrink() const { return this->targetLanguageShrink_ != nullptr;};
    void deleteTargetLanguageShrink() { this->targetLanguageShrink_ = nullptr;};
    inline string targetLanguageShrink() const { DARABONBA_PTR_GET_DEFAULT(targetLanguageShrink_, "") };
    inline SubmitImageTranslateTaskShrinkRequest& setTargetLanguageShrink(string targetLanguageShrink) { DARABONBA_PTR_SET_VALUE(targetLanguageShrink_, targetLanguageShrink) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SubmitImageTranslateTaskShrinkRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitImageTranslateTaskShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> extShrink_ = nullptr;
    std::shared_ptr<string> format_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scene_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceLanguage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetLanguageShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> text_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
