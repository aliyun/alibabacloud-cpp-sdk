// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWDATASETVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWDATASETVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class PreviewDatasetVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewDatasetVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PreviewResult, previewResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewDatasetVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PreviewResult, previewResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PreviewDatasetVersionResponseBody() = default ;
    PreviewDatasetVersionResponseBody(const PreviewDatasetVersionResponseBody &) = default ;
    PreviewDatasetVersionResponseBody(PreviewDatasetVersionResponseBody &&) = default ;
    PreviewDatasetVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewDatasetVersionResponseBody() = default ;
    PreviewDatasetVersionResponseBody& operator=(const PreviewDatasetVersionResponseBody &) = default ;
    PreviewDatasetVersionResponseBody& operator=(PreviewDatasetVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PreviewResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PreviewResult& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(MimeType, mimeType_);
        DARABONBA_PTR_TO_JSON(SupportPreview, supportPreview_);
      };
      friend void from_json(const Darabonba::Json& j, PreviewResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(MimeType, mimeType_);
        DARABONBA_PTR_FROM_JSON(SupportPreview, supportPreview_);
      };
      PreviewResult() = default ;
      PreviewResult(const PreviewResult &) = default ;
      PreviewResult(PreviewResult &&) = default ;
      PreviewResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PreviewResult() = default ;
      PreviewResult& operator=(const PreviewResult &) = default ;
      PreviewResult& operator=(PreviewResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->fileName_ == nullptr && this->mimeType_ == nullptr && this->supportPreview_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline PreviewResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline PreviewResult& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // mimeType Field Functions 
      bool hasMimeType() const { return this->mimeType_ != nullptr;};
      void deleteMimeType() { this->mimeType_ = nullptr;};
      inline string getMimeType() const { DARABONBA_PTR_GET_DEFAULT(mimeType_, "") };
      inline PreviewResult& setMimeType(string mimeType) { DARABONBA_PTR_SET_VALUE(mimeType_, mimeType) };


      // supportPreview Field Functions 
      bool hasSupportPreview() const { return this->supportPreview_ != nullptr;};
      void deleteSupportPreview() { this->supportPreview_ = nullptr;};
      inline bool getSupportPreview() const { DARABONBA_PTR_GET_DEFAULT(supportPreview_, false) };
      inline PreviewResult& setSupportPreview(bool supportPreview) { DARABONBA_PTR_SET_VALUE(supportPreview_, supportPreview) };


    protected:
      // Content
      shared_ptr<string> content_ {};
      // File name
      shared_ptr<string> fileName_ {};
      // The MIME type
      shared_ptr<string> mimeType_ {};
      // Preview availability
      shared_ptr<bool> supportPreview_ {};
    };

    virtual bool empty() const override { return this->previewResult_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // previewResult Field Functions 
    bool hasPreviewResult() const { return this->previewResult_ != nullptr;};
    void deletePreviewResult() { this->previewResult_ = nullptr;};
    inline const PreviewDatasetVersionResponseBody::PreviewResult & getPreviewResult() const { DARABONBA_PTR_GET_CONST(previewResult_, PreviewDatasetVersionResponseBody::PreviewResult) };
    inline PreviewDatasetVersionResponseBody::PreviewResult getPreviewResult() { DARABONBA_PTR_GET(previewResult_, PreviewDatasetVersionResponseBody::PreviewResult) };
    inline PreviewDatasetVersionResponseBody& setPreviewResult(const PreviewDatasetVersionResponseBody::PreviewResult & previewResult) { DARABONBA_PTR_SET_VALUE(previewResult_, previewResult) };
    inline PreviewDatasetVersionResponseBody& setPreviewResult(PreviewDatasetVersionResponseBody::PreviewResult && previewResult) { DARABONBA_PTR_SET_RVALUE(previewResult_, previewResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreviewDatasetVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PreviewDatasetVersionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Preview results
    shared_ptr<PreviewDatasetVersionResponseBody::PreviewResult> previewResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
