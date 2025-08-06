// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIALISTATTACHEDMEDIA_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIALISTATTACHEDMEDIA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaResponseBodyMediaListAttachedMediaCategories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SearchMediaResponseBodyMediaListAttachedMedia : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBodyMediaListAttachedMedia& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(URL, URL_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBodyMediaListAttachedMedia& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(URL, URL_);
    };
    SearchMediaResponseBodyMediaListAttachedMedia() = default ;
    SearchMediaResponseBodyMediaListAttachedMedia(const SearchMediaResponseBodyMediaListAttachedMedia &) = default ;
    SearchMediaResponseBodyMediaListAttachedMedia(SearchMediaResponseBodyMediaListAttachedMedia &&) = default ;
    SearchMediaResponseBodyMediaListAttachedMedia(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBodyMediaListAttachedMedia() = default ;
    SearchMediaResponseBodyMediaListAttachedMedia& operator=(const SearchMediaResponseBodyMediaListAttachedMedia &) = default ;
    SearchMediaResponseBodyMediaListAttachedMedia& operator=(SearchMediaResponseBodyMediaListAttachedMedia &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->businessType_ != nullptr && this->categories_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->mediaId_ != nullptr
        && this->modificationTime_ != nullptr && this->status_ != nullptr && this->storageLocation_ != nullptr && this->tags_ != nullptr && this->title_ != nullptr
        && this->URL_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SearchMediaResponseBodyMediaListAttachedMedia& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline SearchMediaResponseBodyMediaListAttachedMedia& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<Models::SearchMediaResponseBodyMediaListAttachedMediaCategories> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<Models::SearchMediaResponseBodyMediaListAttachedMediaCategories>) };
    inline vector<Models::SearchMediaResponseBodyMediaListAttachedMediaCategories> categories() { DARABONBA_PTR_GET(categories_, vector<Models::SearchMediaResponseBodyMediaListAttachedMediaCategories>) };
    inline SearchMediaResponseBodyMediaListAttachedMedia& setCategories(const vector<Models::SearchMediaResponseBodyMediaListAttachedMediaCategories> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline SearchMediaResponseBodyMediaListAttachedMedia& setCategories(vector<Models::SearchMediaResponseBodyMediaListAttachedMediaCategories> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline SearchMediaResponseBodyMediaListAttachedMedia& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SearchMediaResponseBodyMediaListAttachedMedia& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SearchMediaResponseBodyMediaListAttachedMedia& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline SearchMediaResponseBodyMediaListAttachedMedia& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SearchMediaResponseBodyMediaListAttachedMedia& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string storageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline SearchMediaResponseBodyMediaListAttachedMedia& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline SearchMediaResponseBodyMediaListAttachedMedia& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SearchMediaResponseBodyMediaListAttachedMedia& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // URL Field Functions 
    bool hasURL() const { return this->URL_ != nullptr;};
    void deleteURL() { this->URL_ = nullptr;};
    inline string URL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
    inline SearchMediaResponseBodyMediaListAttachedMedia& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The type of the auxiliary media asset. Valid values:
    // 
    // *   **watermark**
    // *   **subtitle**
    // *   **material**
    std::shared_ptr<string> businessType_ = nullptr;
    // The list of category IDs.
    std::shared_ptr<vector<Models::SearchMediaResponseBodyMediaListAttachedMediaCategories>> categories_ = nullptr;
    // The time when the auxiliary media asset was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*hh:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the auxiliary media asset.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the auxiliary media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The time when the auxiliary media asset was updated. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*hh:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> modificationTime_ = nullptr;
    // The status of the auxiliary media asset. Valid values:
    // 
    // *   **Uploading**
    // *   **Normal**
    // *   **UploadFail**
    std::shared_ptr<string> status_ = nullptr;
    // The region in which the auxiliary media asset is stored.
    std::shared_ptr<string> storageLocation_ = nullptr;
    // The tags of the auxiliary media asset.
    std::shared_ptr<string> tags_ = nullptr;
    // The title of the auxiliary media asset.
    std::shared_ptr<string> title_ = nullptr;
    // The URL of the auxiliary media asset.
    std::shared_ptr<string> URL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
