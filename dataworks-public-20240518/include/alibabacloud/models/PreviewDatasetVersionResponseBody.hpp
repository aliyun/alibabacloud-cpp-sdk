// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWDATASETVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWDATASETVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PreviewDatasetVersionResponseBodyPreviewResult.hpp>
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
    virtual bool empty() const override { return this->previewResult_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // previewResult Field Functions 
    bool hasPreviewResult() const { return this->previewResult_ != nullptr;};
    void deletePreviewResult() { this->previewResult_ = nullptr;};
    inline const PreviewDatasetVersionResponseBodyPreviewResult & previewResult() const { DARABONBA_PTR_GET_CONST(previewResult_, PreviewDatasetVersionResponseBodyPreviewResult) };
    inline PreviewDatasetVersionResponseBodyPreviewResult previewResult() { DARABONBA_PTR_GET(previewResult_, PreviewDatasetVersionResponseBodyPreviewResult) };
    inline PreviewDatasetVersionResponseBody& setPreviewResult(const PreviewDatasetVersionResponseBodyPreviewResult & previewResult) { DARABONBA_PTR_SET_VALUE(previewResult_, previewResult) };
    inline PreviewDatasetVersionResponseBody& setPreviewResult(PreviewDatasetVersionResponseBodyPreviewResult && previewResult) { DARABONBA_PTR_SET_RVALUE(previewResult_, previewResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreviewDatasetVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PreviewDatasetVersionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<PreviewDatasetVersionResponseBodyPreviewResult> previewResult_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
