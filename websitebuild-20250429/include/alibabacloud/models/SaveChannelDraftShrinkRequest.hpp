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
      DARABONBA_PTR_TO_JSON(ChannelAccountName, channelAccountName_);
      DARABONBA_PTR_TO_JSON(CoverImages, coverImagesShrink_);
      DARABONBA_PTR_TO_JSON(DraftId, draftId_);
      DARABONBA_PTR_TO_JSON(WebsiteNavName, websiteNavName_);
    };
    friend void from_json(const Darabonba::Json& j, SaveChannelDraftShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdaptedContent, adaptedContent_);
      DARABONBA_PTR_FROM_JSON(AdaptedTitle, adaptedTitle_);
      DARABONBA_PTR_FROM_JSON(ChannelAccountName, channelAccountName_);
      DARABONBA_PTR_FROM_JSON(CoverImages, coverImagesShrink_);
      DARABONBA_PTR_FROM_JSON(DraftId, draftId_);
      DARABONBA_PTR_FROM_JSON(WebsiteNavName, websiteNavName_);
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
        && this->adaptedTitle_ == nullptr && this->channelAccountName_ == nullptr && this->coverImagesShrink_ == nullptr && this->draftId_ == nullptr && this->websiteNavName_ == nullptr; };
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


    // channelAccountName Field Functions 
    bool hasChannelAccountName() const { return this->channelAccountName_ != nullptr;};
    void deleteChannelAccountName() { this->channelAccountName_ = nullptr;};
    inline string getChannelAccountName() const { DARABONBA_PTR_GET_DEFAULT(channelAccountName_, "") };
    inline SaveChannelDraftShrinkRequest& setChannelAccountName(string channelAccountName) { DARABONBA_PTR_SET_VALUE(channelAccountName_, channelAccountName) };


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


    // websiteNavName Field Functions 
    bool hasWebsiteNavName() const { return this->websiteNavName_ != nullptr;};
    void deleteWebsiteNavName() { this->websiteNavName_ = nullptr;};
    inline string getWebsiteNavName() const { DARABONBA_PTR_GET_DEFAULT(websiteNavName_, "") };
    inline SaveChannelDraftShrinkRequest& setWebsiteNavName(string websiteNavName) { DARABONBA_PTR_SET_VALUE(websiteNavName_, websiteNavName) };


  protected:
    // The channel content (outside China only).
    shared_ptr<string> adaptedContent_ {};
    // The channel title.
    shared_ptr<string> adaptedTitle_ {};
    // The display name of the publishing account. A null value does not overwrite the original value. Maximum length: 256 characters.
    shared_ptr<string> channelAccountName_ {};
    // The collection of channel cover images (full overwrite).
    shared_ptr<string> coverImagesShrink_ {};
    // The channel draft ID.
    // 
    // This parameter is required.
    shared_ptr<string> draftId_ {};
    // The article column name for Wanxiaozhi 1.0. This parameter is required only when the website has not enabled an article column.
    shared_ptr<string> websiteNavName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
