// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWGROUPSOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWGROUPSOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class PreviewGroupSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewGroupSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(degraded, degraded_);
      DARABONBA_PTR_TO_JSON(fileExt, fileExt_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(previewType, previewType_);
      DARABONBA_PTR_TO_JSON(previewUrl, previewUrl_);
      DARABONBA_PTR_TO_JSON(publicUrl, publicUrl_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewGroupSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(degraded, degraded_);
      DARABONBA_PTR_FROM_JSON(fileExt, fileExt_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(previewType, previewType_);
      DARABONBA_PTR_FROM_JSON(previewUrl, previewUrl_);
      DARABONBA_PTR_FROM_JSON(publicUrl, publicUrl_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    PreviewGroupSourceResponseBody() = default ;
    PreviewGroupSourceResponseBody(const PreviewGroupSourceResponseBody &) = default ;
    PreviewGroupSourceResponseBody(PreviewGroupSourceResponseBody &&) = default ;
    PreviewGroupSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewGroupSourceResponseBody() = default ;
    PreviewGroupSourceResponseBody& operator=(const PreviewGroupSourceResponseBody &) = default ;
    PreviewGroupSourceResponseBody& operator=(PreviewGroupSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->content_ == nullptr && this->degraded_ == nullptr && this->fileExt_ == nullptr && this->fileName_ == nullptr && this->message_ == nullptr
        && this->previewType_ == nullptr && this->previewUrl_ == nullptr && this->publicUrl_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PreviewGroupSourceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline PreviewGroupSourceResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // degraded Field Functions 
    bool hasDegraded() const { return this->degraded_ != nullptr;};
    void deleteDegraded() { this->degraded_ = nullptr;};
    inline bool getDegraded() const { DARABONBA_PTR_GET_DEFAULT(degraded_, false) };
    inline PreviewGroupSourceResponseBody& setDegraded(bool degraded) { DARABONBA_PTR_SET_VALUE(degraded_, degraded) };


    // fileExt Field Functions 
    bool hasFileExt() const { return this->fileExt_ != nullptr;};
    void deleteFileExt() { this->fileExt_ = nullptr;};
    inline string getFileExt() const { DARABONBA_PTR_GET_DEFAULT(fileExt_, "") };
    inline PreviewGroupSourceResponseBody& setFileExt(string fileExt) { DARABONBA_PTR_SET_VALUE(fileExt_, fileExt) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline PreviewGroupSourceResponseBody& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PreviewGroupSourceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // previewType Field Functions 
    bool hasPreviewType() const { return this->previewType_ != nullptr;};
    void deletePreviewType() { this->previewType_ = nullptr;};
    inline string getPreviewType() const { DARABONBA_PTR_GET_DEFAULT(previewType_, "") };
    inline PreviewGroupSourceResponseBody& setPreviewType(string previewType) { DARABONBA_PTR_SET_VALUE(previewType_, previewType) };


    // previewUrl Field Functions 
    bool hasPreviewUrl() const { return this->previewUrl_ != nullptr;};
    void deletePreviewUrl() { this->previewUrl_ = nullptr;};
    inline string getPreviewUrl() const { DARABONBA_PTR_GET_DEFAULT(previewUrl_, "") };
    inline PreviewGroupSourceResponseBody& setPreviewUrl(string previewUrl) { DARABONBA_PTR_SET_VALUE(previewUrl_, previewUrl) };


    // publicUrl Field Functions 
    bool hasPublicUrl() const { return this->publicUrl_ != nullptr;};
    void deletePublicUrl() { this->publicUrl_ = nullptr;};
    inline string getPublicUrl() const { DARABONBA_PTR_GET_DEFAULT(publicUrl_, "") };
    inline PreviewGroupSourceResponseBody& setPublicUrl(string publicUrl) { DARABONBA_PTR_SET_VALUE(publicUrl_, publicUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreviewGroupSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The text content. This field is used for the CONTENT preview type.
    shared_ptr<string> content_ {};
    // Indicates whether the preview is degraded to a download, meaning the resource cannot be opened in the online previewer. Valid values:
    // - true: The preview is degraded to a download.
    // - false: The resource can be previewed online.
    shared_ptr<bool> degraded_ {};
    // The file name extension. This field is used for the OSS_IMM preview type.
    shared_ptr<string> fileExt_ {};
    // The file name. This field is used for the OSS_IMM preview type.
    shared_ptr<string> fileName_ {};
    // The error details.
    shared_ptr<string> message_ {};
    // The preview type. Valid values: OSS_IMM, IMAGE, AUDIO, VIDEO, HTML, DING_TALK, VOICE_MEETING, and CONTENT.
    shared_ptr<string> previewType_ {};
    // The preview URL. This field is used for the OSS_IMM, DING_TALK, and VOICE_MEETING preview types.
    shared_ptr<string> previewUrl_ {};
    // The public download URL of the file.
    shared_ptr<string> publicUrl_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
