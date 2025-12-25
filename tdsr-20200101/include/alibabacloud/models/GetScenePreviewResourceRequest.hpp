// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENEPREVIEWRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCENEPREVIEWRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetScenePreviewResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScenePreviewResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Draft, draft_);
      DARABONBA_PTR_TO_JSON(PreviewToken, previewToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetScenePreviewResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Draft, draft_);
      DARABONBA_PTR_FROM_JSON(PreviewToken, previewToken_);
    };
    GetScenePreviewResourceRequest() = default ;
    GetScenePreviewResourceRequest(const GetScenePreviewResourceRequest &) = default ;
    GetScenePreviewResourceRequest(GetScenePreviewResourceRequest &&) = default ;
    GetScenePreviewResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScenePreviewResourceRequest() = default ;
    GetScenePreviewResourceRequest& operator=(const GetScenePreviewResourceRequest &) = default ;
    GetScenePreviewResourceRequest& operator=(GetScenePreviewResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->draft_ == nullptr
        && return this->previewToken_ == nullptr; };
    // draft Field Functions 
    bool hasDraft() const { return this->draft_ != nullptr;};
    void deleteDraft() { this->draft_ = nullptr;};
    inline bool draft() const { DARABONBA_PTR_GET_DEFAULT(draft_, false) };
    inline GetScenePreviewResourceRequest& setDraft(bool draft) { DARABONBA_PTR_SET_VALUE(draft_, draft) };


    // previewToken Field Functions 
    bool hasPreviewToken() const { return this->previewToken_ != nullptr;};
    void deletePreviewToken() { this->previewToken_ = nullptr;};
    inline string previewToken() const { DARABONBA_PTR_GET_DEFAULT(previewToken_, "") };
    inline GetScenePreviewResourceRequest& setPreviewToken(string previewToken) { DARABONBA_PTR_SET_VALUE(previewToken_, previewToken) };


  protected:
    std::shared_ptr<bool> draft_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> previewToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
