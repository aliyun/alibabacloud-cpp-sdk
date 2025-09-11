// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITIMAGETRANSLATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITIMAGETRANSLATETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitImageTranslateTaskRequestExt.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class SubmitImageTranslateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitImageTranslateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ext, ext_);
      DARABONBA_PTR_TO_JSON(format, format_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(sourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(targetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitImageTranslateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ext, ext_);
      DARABONBA_PTR_FROM_JSON(format, format_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(sourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(targetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    SubmitImageTranslateTaskRequest() = default ;
    SubmitImageTranslateTaskRequest(const SubmitImageTranslateTaskRequest &) = default ;
    SubmitImageTranslateTaskRequest(SubmitImageTranslateTaskRequest &&) = default ;
    SubmitImageTranslateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitImageTranslateTaskRequest() = default ;
    SubmitImageTranslateTaskRequest& operator=(const SubmitImageTranslateTaskRequest &) = default ;
    SubmitImageTranslateTaskRequest& operator=(SubmitImageTranslateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ext_ != nullptr
        && this->format_ != nullptr && this->scene_ != nullptr && this->sourceLanguage_ != nullptr && this->targetLanguage_ != nullptr && this->text_ != nullptr
        && this->workspaceId_ != nullptr; };
    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline const SubmitImageTranslateTaskRequestExt & ext() const { DARABONBA_PTR_GET_CONST(ext_, SubmitImageTranslateTaskRequestExt) };
    inline SubmitImageTranslateTaskRequestExt ext() { DARABONBA_PTR_GET(ext_, SubmitImageTranslateTaskRequestExt) };
    inline SubmitImageTranslateTaskRequest& setExt(const SubmitImageTranslateTaskRequestExt & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
    inline SubmitImageTranslateTaskRequest& setExt(SubmitImageTranslateTaskRequestExt && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline SubmitImageTranslateTaskRequest& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline SubmitImageTranslateTaskRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string sourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline SubmitImageTranslateTaskRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline const vector<string> & targetLanguage() const { DARABONBA_PTR_GET_CONST(targetLanguage_, vector<string>) };
    inline vector<string> targetLanguage() { DARABONBA_PTR_GET(targetLanguage_, vector<string>) };
    inline SubmitImageTranslateTaskRequest& setTargetLanguage(const vector<string> & targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };
    inline SubmitImageTranslateTaskRequest& setTargetLanguage(vector<string> && targetLanguage) { DARABONBA_PTR_SET_RVALUE(targetLanguage_, targetLanguage) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SubmitImageTranslateTaskRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitImageTranslateTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<SubmitImageTranslateTaskRequestExt> ext_ = nullptr;
    std::shared_ptr<string> format_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scene_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceLanguage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> targetLanguage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> text_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
