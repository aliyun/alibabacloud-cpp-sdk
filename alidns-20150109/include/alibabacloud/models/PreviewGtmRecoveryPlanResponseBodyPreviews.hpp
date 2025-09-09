// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWGTMRECOVERYPLANRESPONSEBODYPREVIEWS_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWGTMRECOVERYPLANRESPONSEBODYPREVIEWS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PreviewGtmRecoveryPlanResponseBodyPreviewsPreview.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class PreviewGtmRecoveryPlanResponseBodyPreviews : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewGtmRecoveryPlanResponseBodyPreviews& obj) { 
      DARABONBA_PTR_TO_JSON(Preview, preview_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewGtmRecoveryPlanResponseBodyPreviews& obj) { 
      DARABONBA_PTR_FROM_JSON(Preview, preview_);
    };
    PreviewGtmRecoveryPlanResponseBodyPreviews() = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviews(const PreviewGtmRecoveryPlanResponseBodyPreviews &) = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviews(PreviewGtmRecoveryPlanResponseBodyPreviews &&) = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviews(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewGtmRecoveryPlanResponseBodyPreviews() = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviews& operator=(const PreviewGtmRecoveryPlanResponseBodyPreviews &) = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviews& operator=(PreviewGtmRecoveryPlanResponseBodyPreviews &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->preview_ != nullptr; };
    // preview Field Functions 
    bool hasPreview() const { return this->preview_ != nullptr;};
    void deletePreview() { this->preview_ = nullptr;};
    inline const vector<Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreview> & preview() const { DARABONBA_PTR_GET_CONST(preview_, vector<Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreview>) };
    inline vector<Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreview> preview() { DARABONBA_PTR_GET(preview_, vector<Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreview>) };
    inline PreviewGtmRecoveryPlanResponseBodyPreviews& setPreview(const vector<Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreview> & preview) { DARABONBA_PTR_SET_VALUE(preview_, preview) };
    inline PreviewGtmRecoveryPlanResponseBodyPreviews& setPreview(vector<Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreview> && preview) { DARABONBA_PTR_SET_RVALUE(preview_, preview) };


  protected:
    std::shared_ptr<vector<Models::PreviewGtmRecoveryPlanResponseBodyPreviewsPreview>> preview_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
