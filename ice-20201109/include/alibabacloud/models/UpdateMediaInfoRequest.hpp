// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIAINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIAINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppendTags, appendTags_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InputURL, inputURL_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaTags, mediaTags_);
      DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppendTags, appendTags_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InputURL, inputURL_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaTags, mediaTags_);
      DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    UpdateMediaInfoRequest() = default ;
    UpdateMediaInfoRequest(const UpdateMediaInfoRequest &) = default ;
    UpdateMediaInfoRequest(UpdateMediaInfoRequest &&) = default ;
    UpdateMediaInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaInfoRequest() = default ;
    UpdateMediaInfoRequest& operator=(const UpdateMediaInfoRequest &) = default ;
    UpdateMediaInfoRequest& operator=(UpdateMediaInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appendTags_ != nullptr
        && this->businessType_ != nullptr && this->cateId_ != nullptr && this->category_ != nullptr && this->coverURL_ != nullptr && this->description_ != nullptr
        && this->inputURL_ != nullptr && this->mediaId_ != nullptr && this->mediaTags_ != nullptr && this->referenceId_ != nullptr && this->title_ != nullptr
        && this->userData_ != nullptr; };
    // appendTags Field Functions 
    bool hasAppendTags() const { return this->appendTags_ != nullptr;};
    void deleteAppendTags() { this->appendTags_ = nullptr;};
    inline bool appendTags() const { DARABONBA_PTR_GET_DEFAULT(appendTags_, false) };
    inline UpdateMediaInfoRequest& setAppendTags(bool appendTags) { DARABONBA_PTR_SET_VALUE(appendTags_, appendTags) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline UpdateMediaInfoRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline UpdateMediaInfoRequest& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline UpdateMediaInfoRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline UpdateMediaInfoRequest& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateMediaInfoRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // inputURL Field Functions 
    bool hasInputURL() const { return this->inputURL_ != nullptr;};
    void deleteInputURL() { this->inputURL_ = nullptr;};
    inline string inputURL() const { DARABONBA_PTR_GET_DEFAULT(inputURL_, "") };
    inline UpdateMediaInfoRequest& setInputURL(string inputURL) { DARABONBA_PTR_SET_VALUE(inputURL_, inputURL) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline UpdateMediaInfoRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaTags Field Functions 
    bool hasMediaTags() const { return this->mediaTags_ != nullptr;};
    void deleteMediaTags() { this->mediaTags_ = nullptr;};
    inline string mediaTags() const { DARABONBA_PTR_GET_DEFAULT(mediaTags_, "") };
    inline UpdateMediaInfoRequest& setMediaTags(string mediaTags) { DARABONBA_PTR_SET_VALUE(mediaTags_, mediaTags) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string referenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline UpdateMediaInfoRequest& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateMediaInfoRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline UpdateMediaInfoRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // Specifies whether to append tags. Default value: false. Valid values:
    // 
    // *   true: updates the MediaTags parameter by appending new tags.
    // *   false: updates the MediaTags parameter by overwriting existing tags with new tags.
    std::shared_ptr<bool> appendTags_ = nullptr;
    // The business type. Valid values:
    // 
    // *   subtitles
    // *   watermark
    // *   opening
    // *   ending
    // *   general
    std::shared_ptr<string> businessType_ = nullptr;
    // The category ID.
    std::shared_ptr<int64_t> cateId_ = nullptr;
    // The category.
    // 
    // *   The value can be up to 64 bytes in length.
    // *   The value must be encoded in UTF-8.
    std::shared_ptr<string> category_ = nullptr;
    // The URL of the thumbnail.
    // 
    // *   The value can be up to 128 bytes in length.
    // *   The value must be encoded in UTF-8.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The content description.
    // 
    // *   The value can be up to 1,024 bytes in length.
    // *   The value must be encoded in UTF-8.
    std::shared_ptr<string> description_ = nullptr;
    // The input URL of the media asset in another service. The URL must be bound to the ID of the media asset in IMS. The URL cannot be modified once registered.
    // 
    // For a media asset from Object Storage Service (OSS), the URL may have one of the following formats:
    // 
    // 1\\. http(s)://example-bucket.oss-cn-shanghai.aliyuncs.com/example.mp4
    // 
    // 2\\. oss://example-bucket/example.mp4. This format indicates that the region in which the OSS bucket of the media asset resides is the same as the region in which OSS is activated.
    std::shared_ptr<string> inputURL_ = nullptr;
    // The ID of the media asset. If this parameter is left empty, you must specify the input URL of the media asset, which has been registered in the IMS content library.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The tags.
    // 
    // *   Up to 16 tags are supported.
    // *   Separate multiple tags with commas (,).
    // *   Each tag can be up to 32 bytes in length.
    // *   The value must be encoded in UTF-8.
    std::shared_ptr<string> mediaTags_ = nullptr;
    // The custom ID. The ID can be 6 to 64 characters in length and can contain only letters, digits, hyphens (-), and underscores (_). Make sure that the ID is unique among users.
    std::shared_ptr<string> referenceId_ = nullptr;
    // The title.
    // 
    // *   The value can be up to 128 bytes in length.
    // *   The value must be encoded in UTF-8.
    std::shared_ptr<string> title_ = nullptr;
    // The user data. It can be up to 1,024 bytes in size.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
