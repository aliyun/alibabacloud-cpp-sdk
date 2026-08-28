// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECHANNELDRAFTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVECHANNELDRAFTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SaveChannelDraftRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveChannelDraftRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdaptedContent, adaptedContent_);
      DARABONBA_PTR_TO_JSON(AdaptedTitle, adaptedTitle_);
      DARABONBA_PTR_TO_JSON(CoverImages, coverImages_);
      DARABONBA_PTR_TO_JSON(DraftId, draftId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveChannelDraftRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdaptedContent, adaptedContent_);
      DARABONBA_PTR_FROM_JSON(AdaptedTitle, adaptedTitle_);
      DARABONBA_PTR_FROM_JSON(CoverImages, coverImages_);
      DARABONBA_PTR_FROM_JSON(DraftId, draftId_);
    };
    SaveChannelDraftRequest() = default ;
    SaveChannelDraftRequest(const SaveChannelDraftRequest &) = default ;
    SaveChannelDraftRequest(SaveChannelDraftRequest &&) = default ;
    SaveChannelDraftRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveChannelDraftRequest() = default ;
    SaveChannelDraftRequest& operator=(const SaveChannelDraftRequest &) = default ;
    SaveChannelDraftRequest& operator=(SaveChannelDraftRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CoverImages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CoverImages& obj) { 
        DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_TO_JSON(MaterialFileId, materialFileId_);
        DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      };
      friend void from_json(const Darabonba::Json& j, CoverImages& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_FROM_JSON(MaterialFileId, materialFileId_);
        DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      };
      CoverImages() = default ;
      CoverImages(const CoverImages &) = default ;
      CoverImages(CoverImages &&) = default ;
      CoverImages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CoverImages() = default ;
      CoverImages& operator=(const CoverImages &) = default ;
      CoverImages& operator=(CoverImages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->materialFileId_ == nullptr && this->sortOrder_ == nullptr; };
      // imageUrl Field Functions 
      bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
      void deleteImageUrl() { this->imageUrl_ = nullptr;};
      inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
      inline CoverImages& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


      // materialFileId Field Functions 
      bool hasMaterialFileId() const { return this->materialFileId_ != nullptr;};
      void deleteMaterialFileId() { this->materialFileId_ = nullptr;};
      inline string getMaterialFileId() const { DARABONBA_PTR_GET_DEFAULT(materialFileId_, "") };
      inline CoverImages& setMaterialFileId(string materialFileId) { DARABONBA_PTR_SET_VALUE(materialFileId_, materialFileId) };


      // sortOrder Field Functions 
      bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
      void deleteSortOrder() { this->sortOrder_ = nullptr;};
      inline int32_t getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, 0) };
      inline CoverImages& setSortOrder(int32_t sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    protected:
      // The image URL.
      // 
      // This parameter is required.
      shared_ptr<string> imageUrl_ {};
      // The file ID in the material center (optional).
      shared_ptr<string> materialFileId_ {};
      // The sort order.
      // 
      // This parameter is required.
      shared_ptr<int32_t> sortOrder_ {};
    };

    virtual bool empty() const override { return this->adaptedContent_ == nullptr
        && this->adaptedTitle_ == nullptr && this->coverImages_ == nullptr && this->draftId_ == nullptr; };
    // adaptedContent Field Functions 
    bool hasAdaptedContent() const { return this->adaptedContent_ != nullptr;};
    void deleteAdaptedContent() { this->adaptedContent_ = nullptr;};
    inline string getAdaptedContent() const { DARABONBA_PTR_GET_DEFAULT(adaptedContent_, "") };
    inline SaveChannelDraftRequest& setAdaptedContent(string adaptedContent) { DARABONBA_PTR_SET_VALUE(adaptedContent_, adaptedContent) };


    // adaptedTitle Field Functions 
    bool hasAdaptedTitle() const { return this->adaptedTitle_ != nullptr;};
    void deleteAdaptedTitle() { this->adaptedTitle_ = nullptr;};
    inline string getAdaptedTitle() const { DARABONBA_PTR_GET_DEFAULT(adaptedTitle_, "") };
    inline SaveChannelDraftRequest& setAdaptedTitle(string adaptedTitle) { DARABONBA_PTR_SET_VALUE(adaptedTitle_, adaptedTitle) };


    // coverImages Field Functions 
    bool hasCoverImages() const { return this->coverImages_ != nullptr;};
    void deleteCoverImages() { this->coverImages_ = nullptr;};
    inline const vector<SaveChannelDraftRequest::CoverImages> & getCoverImages() const { DARABONBA_PTR_GET_CONST(coverImages_, vector<SaveChannelDraftRequest::CoverImages>) };
    inline vector<SaveChannelDraftRequest::CoverImages> getCoverImages() { DARABONBA_PTR_GET(coverImages_, vector<SaveChannelDraftRequest::CoverImages>) };
    inline SaveChannelDraftRequest& setCoverImages(const vector<SaveChannelDraftRequest::CoverImages> & coverImages) { DARABONBA_PTR_SET_VALUE(coverImages_, coverImages) };
    inline SaveChannelDraftRequest& setCoverImages(vector<SaveChannelDraftRequest::CoverImages> && coverImages) { DARABONBA_PTR_SET_RVALUE(coverImages_, coverImages) };


    // draftId Field Functions 
    bool hasDraftId() const { return this->draftId_ != nullptr;};
    void deleteDraftId() { this->draftId_ = nullptr;};
    inline string getDraftId() const { DARABONBA_PTR_GET_DEFAULT(draftId_, "") };
    inline SaveChannelDraftRequest& setDraftId(string draftId) { DARABONBA_PTR_SET_VALUE(draftId_, draftId) };


  protected:
    // The channel content (overseas only).
    shared_ptr<string> adaptedContent_ {};
    // The channel title.
    shared_ptr<string> adaptedTitle_ {};
    // The collection of channel cover images (full overwrite).
    shared_ptr<vector<SaveChannelDraftRequest::CoverImages>> coverImages_ {};
    // The ID of the channel draft.
    // 
    // This parameter is required.
    shared_ptr<string> draftId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
