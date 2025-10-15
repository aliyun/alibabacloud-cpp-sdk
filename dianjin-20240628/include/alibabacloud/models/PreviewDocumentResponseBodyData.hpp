// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWDOCUMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWDOCUMENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class PreviewDocumentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewDocumentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(previewType, previewType_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(uploadTime, uploadTime_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewDocumentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(previewType, previewType_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(uploadTime, uploadTime_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    PreviewDocumentResponseBodyData() = default ;
    PreviewDocumentResponseBodyData(const PreviewDocumentResponseBodyData &) = default ;
    PreviewDocumentResponseBodyData(PreviewDocumentResponseBodyData &&) = default ;
    PreviewDocumentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewDocumentResponseBodyData() = default ;
    PreviewDocumentResponseBodyData& operator=(const PreviewDocumentResponseBodyData &) = default ;
    PreviewDocumentResponseBodyData& operator=(PreviewDocumentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->previewType_ == nullptr
        && return this->title_ == nullptr && return this->uploadTime_ == nullptr && return this->url_ == nullptr; };
    // previewType Field Functions 
    bool hasPreviewType() const { return this->previewType_ != nullptr;};
    void deletePreviewType() { this->previewType_ = nullptr;};
    inline string previewType() const { DARABONBA_PTR_GET_DEFAULT(previewType_, "") };
    inline PreviewDocumentResponseBodyData& setPreviewType(string previewType) { DARABONBA_PTR_SET_VALUE(previewType_, previewType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline PreviewDocumentResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // uploadTime Field Functions 
    bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
    void deleteUploadTime() { this->uploadTime_ = nullptr;};
    inline string uploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
    inline PreviewDocumentResponseBodyData& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline PreviewDocumentResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> previewType_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> uploadTime_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
