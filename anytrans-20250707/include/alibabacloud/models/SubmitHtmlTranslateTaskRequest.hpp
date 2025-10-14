// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITHTMLTRANSLATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITHTMLTRANSLATETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitHtmlTranslateTaskRequestExt.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class SubmitHtmlTranslateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitHtmlTranslateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ext, ext_);
      DARABONBA_PTR_TO_JSON(format, format_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(sourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(targetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitHtmlTranslateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ext, ext_);
      DARABONBA_PTR_FROM_JSON(format, format_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(sourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(targetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    SubmitHtmlTranslateTaskRequest() = default ;
    SubmitHtmlTranslateTaskRequest(const SubmitHtmlTranslateTaskRequest &) = default ;
    SubmitHtmlTranslateTaskRequest(SubmitHtmlTranslateTaskRequest &&) = default ;
    SubmitHtmlTranslateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitHtmlTranslateTaskRequest() = default ;
    SubmitHtmlTranslateTaskRequest& operator=(const SubmitHtmlTranslateTaskRequest &) = default ;
    SubmitHtmlTranslateTaskRequest& operator=(SubmitHtmlTranslateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ext_ == nullptr
        && return this->format_ == nullptr && return this->scene_ == nullptr && return this->sourceLanguage_ == nullptr && return this->targetLanguage_ == nullptr && return this->text_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline const SubmitHtmlTranslateTaskRequestExt & ext() const { DARABONBA_PTR_GET_CONST(ext_, SubmitHtmlTranslateTaskRequestExt) };
    inline SubmitHtmlTranslateTaskRequestExt ext() { DARABONBA_PTR_GET(ext_, SubmitHtmlTranslateTaskRequestExt) };
    inline SubmitHtmlTranslateTaskRequest& setExt(const SubmitHtmlTranslateTaskRequestExt & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
    inline SubmitHtmlTranslateTaskRequest& setExt(SubmitHtmlTranslateTaskRequestExt && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline SubmitHtmlTranslateTaskRequest& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline SubmitHtmlTranslateTaskRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string sourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline SubmitHtmlTranslateTaskRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string targetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline SubmitHtmlTranslateTaskRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SubmitHtmlTranslateTaskRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitHtmlTranslateTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<SubmitHtmlTranslateTaskRequestExt> ext_ = nullptr;
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<string> sourceLanguage_ = nullptr;
    std::shared_ptr<string> targetLanguage_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
