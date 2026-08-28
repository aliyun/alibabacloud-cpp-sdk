// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECHANNELDRAFTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVECHANNELDRAFTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SaveChannelDraftShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveChannelDraftShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdaptedContent, adaptedContent_);
      DARABONBA_PTR_TO_JSON(AdaptedTitle, adaptedTitle_);
      DARABONBA_PTR_TO_JSON(CoverImages, coverImagesShrink_);
      DARABONBA_PTR_TO_JSON(DraftId, draftId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveChannelDraftShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdaptedContent, adaptedContent_);
      DARABONBA_PTR_FROM_JSON(AdaptedTitle, adaptedTitle_);
      DARABONBA_PTR_FROM_JSON(CoverImages, coverImagesShrink_);
      DARABONBA_PTR_FROM_JSON(DraftId, draftId_);
    };
    SaveChannelDraftShrinkRequest() = default ;
    SaveChannelDraftShrinkRequest(const SaveChannelDraftShrinkRequest &) = default ;
    SaveChannelDraftShrinkRequest(SaveChannelDraftShrinkRequest &&) = default ;
    SaveChannelDraftShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveChannelDraftShrinkRequest() = default ;
    SaveChannelDraftShrinkRequest& operator=(const SaveChannelDraftShrinkRequest &) = default ;
    SaveChannelDraftShrinkRequest& operator=(SaveChannelDraftShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adaptedContent_ == nullptr
        && this->adaptedTitle_ == nullptr && this->coverImagesShrink_ == nullptr && this->draftId_ == nullptr; };
    // adaptedContent Field Functions 
    bool hasAdaptedContent() const { return this->adaptedContent_ != nullptr;};
    void deleteAdaptedContent() { this->adaptedContent_ = nullptr;};
    inline string getAdaptedContent() const { DARABONBA_PTR_GET_DEFAULT(adaptedContent_, "") };
    inline SaveChannelDraftShrinkRequest& setAdaptedContent(string adaptedContent) { DARABONBA_PTR_SET_VALUE(adaptedContent_, adaptedContent) };


    // adaptedTitle Field Functions 
    bool hasAdaptedTitle() const { return this->adaptedTitle_ != nullptr;};
    void deleteAdaptedTitle() { this->adaptedTitle_ = nullptr;};
    inline string getAdaptedTitle() const { DARABONBA_PTR_GET_DEFAULT(adaptedTitle_, "") };
    inline SaveChannelDraftShrinkRequest& setAdaptedTitle(string adaptedTitle) { DARABONBA_PTR_SET_VALUE(adaptedTitle_, adaptedTitle) };


    // coverImagesShrink Field Functions 
    bool hasCoverImagesShrink() const { return this->coverImagesShrink_ != nullptr;};
    void deleteCoverImagesShrink() { this->coverImagesShrink_ = nullptr;};
    inline string getCoverImagesShrink() const { DARABONBA_PTR_GET_DEFAULT(coverImagesShrink_, "") };
    inline SaveChannelDraftShrinkRequest& setCoverImagesShrink(string coverImagesShrink) { DARABONBA_PTR_SET_VALUE(coverImagesShrink_, coverImagesShrink) };


    // draftId Field Functions 
    bool hasDraftId() const { return this->draftId_ != nullptr;};
    void deleteDraftId() { this->draftId_ = nullptr;};
    inline string getDraftId() const { DARABONBA_PTR_GET_DEFAULT(draftId_, "") };
    inline SaveChannelDraftShrinkRequest& setDraftId(string draftId) { DARABONBA_PTR_SET_VALUE(draftId_, draftId) };


  protected:
    // The channel content (overseas only).
    shared_ptr<string> adaptedContent_ {};
    // The channel title.
    shared_ptr<string> adaptedTitle_ {};
    // The collection of channel cover images (full overwrite).
    shared_ptr<string> coverImagesShrink_ {};
    // The ID of the channel draft.
    // 
    // This parameter is required.
    shared_ptr<string> draftId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
