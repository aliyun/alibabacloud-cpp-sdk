// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWDATASETVERSIONRESPONSEBODYPREVIEWRESULT_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWDATASETVERSIONRESPONSEBODYPREVIEWRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class PreviewDatasetVersionResponseBodyPreviewResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewDatasetVersionResponseBodyPreviewResult& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(MimeType, mimeType_);
      DARABONBA_PTR_TO_JSON(SupportPreview, supportPreview_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewDatasetVersionResponseBodyPreviewResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(MimeType, mimeType_);
      DARABONBA_PTR_FROM_JSON(SupportPreview, supportPreview_);
    };
    PreviewDatasetVersionResponseBodyPreviewResult() = default ;
    PreviewDatasetVersionResponseBodyPreviewResult(const PreviewDatasetVersionResponseBodyPreviewResult &) = default ;
    PreviewDatasetVersionResponseBodyPreviewResult(PreviewDatasetVersionResponseBodyPreviewResult &&) = default ;
    PreviewDatasetVersionResponseBodyPreviewResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewDatasetVersionResponseBodyPreviewResult() = default ;
    PreviewDatasetVersionResponseBodyPreviewResult& operator=(const PreviewDatasetVersionResponseBodyPreviewResult &) = default ;
    PreviewDatasetVersionResponseBodyPreviewResult& operator=(PreviewDatasetVersionResponseBodyPreviewResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->fileName_ == nullptr && return this->mimeType_ == nullptr && return this->supportPreview_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline PreviewDatasetVersionResponseBodyPreviewResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline PreviewDatasetVersionResponseBodyPreviewResult& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // mimeType Field Functions 
    bool hasMimeType() const { return this->mimeType_ != nullptr;};
    void deleteMimeType() { this->mimeType_ = nullptr;};
    inline string mimeType() const { DARABONBA_PTR_GET_DEFAULT(mimeType_, "") };
    inline PreviewDatasetVersionResponseBodyPreviewResult& setMimeType(string mimeType) { DARABONBA_PTR_SET_VALUE(mimeType_, mimeType) };


    // supportPreview Field Functions 
    bool hasSupportPreview() const { return this->supportPreview_ != nullptr;};
    void deleteSupportPreview() { this->supportPreview_ = nullptr;};
    inline bool supportPreview() const { DARABONBA_PTR_GET_DEFAULT(supportPreview_, false) };
    inline PreviewDatasetVersionResponseBodyPreviewResult& setSupportPreview(bool supportPreview) { DARABONBA_PTR_SET_VALUE(supportPreview_, supportPreview) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> mimeType_ = nullptr;
    std::shared_ptr<bool> supportPreview_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
