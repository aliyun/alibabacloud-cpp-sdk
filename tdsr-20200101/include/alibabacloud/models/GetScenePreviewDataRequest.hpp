// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENEPREVIEWDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCENEPREVIEWDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetScenePreviewDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScenePreviewDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(PreviewToken, previewToken_);
      DARABONBA_PTR_TO_JSON(ShowTag, showTag_);
    };
    friend void from_json(const Darabonba::Json& j, GetScenePreviewDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(PreviewToken, previewToken_);
      DARABONBA_PTR_FROM_JSON(ShowTag, showTag_);
    };
    GetScenePreviewDataRequest() = default ;
    GetScenePreviewDataRequest(const GetScenePreviewDataRequest &) = default ;
    GetScenePreviewDataRequest(GetScenePreviewDataRequest &&) = default ;
    GetScenePreviewDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScenePreviewDataRequest() = default ;
    GetScenePreviewDataRequest& operator=(const GetScenePreviewDataRequest &) = default ;
    GetScenePreviewDataRequest& operator=(GetScenePreviewDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->enabled_ == nullptr && return this->previewToken_ == nullptr && return this->showTag_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetScenePreviewDataRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetScenePreviewDataRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // previewToken Field Functions 
    bool hasPreviewToken() const { return this->previewToken_ != nullptr;};
    void deletePreviewToken() { this->previewToken_ = nullptr;};
    inline string previewToken() const { DARABONBA_PTR_GET_DEFAULT(previewToken_, "") };
    inline GetScenePreviewDataRequest& setPreviewToken(string previewToken) { DARABONBA_PTR_SET_VALUE(previewToken_, previewToken) };


    // showTag Field Functions 
    bool hasShowTag() const { return this->showTag_ != nullptr;};
    void deleteShowTag() { this->showTag_ = nullptr;};
    inline bool showTag() const { DARABONBA_PTR_GET_DEFAULT(showTag_, false) };
    inline GetScenePreviewDataRequest& setShowTag(bool showTag) { DARABONBA_PTR_SET_VALUE(showTag_, showTag) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> previewToken_ = nullptr;
    std::shared_ptr<bool> showTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
