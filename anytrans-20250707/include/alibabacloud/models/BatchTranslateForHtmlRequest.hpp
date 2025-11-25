// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHTRANSLATEFORHTMLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHTRANSLATEFORHTMLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchTranslateForHtmlRequestExt.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class BatchTranslateForHtmlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchTranslateForHtmlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appName, appName_);
      DARABONBA_PTR_TO_JSON(ext, ext_);
      DARABONBA_PTR_TO_JSON(format, format_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(sourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(targetLanguage, targetLanguage_);
      DARABONBA_ANY_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchTranslateForHtmlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appName, appName_);
      DARABONBA_PTR_FROM_JSON(ext, ext_);
      DARABONBA_PTR_FROM_JSON(format, format_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(sourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(targetLanguage, targetLanguage_);
      DARABONBA_ANY_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    BatchTranslateForHtmlRequest() = default ;
    BatchTranslateForHtmlRequest(const BatchTranslateForHtmlRequest &) = default ;
    BatchTranslateForHtmlRequest(BatchTranslateForHtmlRequest &&) = default ;
    BatchTranslateForHtmlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchTranslateForHtmlRequest() = default ;
    BatchTranslateForHtmlRequest& operator=(const BatchTranslateForHtmlRequest &) = default ;
    BatchTranslateForHtmlRequest& operator=(BatchTranslateForHtmlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->ext_ == nullptr && return this->format_ == nullptr && return this->scene_ == nullptr && return this->sourceLanguage_ == nullptr && return this->targetLanguage_ == nullptr
        && return this->text_ == nullptr && return this->workspaceId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline BatchTranslateForHtmlRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline const BatchTranslateForHtmlRequestExt & ext() const { DARABONBA_PTR_GET_CONST(ext_, BatchTranslateForHtmlRequestExt) };
    inline BatchTranslateForHtmlRequestExt ext() { DARABONBA_PTR_GET(ext_, BatchTranslateForHtmlRequestExt) };
    inline BatchTranslateForHtmlRequest& setExt(const BatchTranslateForHtmlRequestExt & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
    inline BatchTranslateForHtmlRequest& setExt(BatchTranslateForHtmlRequestExt && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline BatchTranslateForHtmlRequest& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline BatchTranslateForHtmlRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string sourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline BatchTranslateForHtmlRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string targetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline BatchTranslateForHtmlRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline     const Darabonba::Json & text() const { DARABONBA_GET(text_) };
    Darabonba::Json & text() { DARABONBA_GET(text_) };
    inline BatchTranslateForHtmlRequest& setText(const Darabonba::Json & text) { DARABONBA_SET_VALUE(text_, text) };
    inline BatchTranslateForHtmlRequest& setText(Darabonba::Json & text) { DARABONBA_SET_RVALUE(text_, text) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline BatchTranslateForHtmlRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<BatchTranslateForHtmlRequestExt> ext_ = nullptr;
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceLanguage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetLanguage_ = nullptr;
    // This parameter is required.
    Darabonba::Json text_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
