// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLAYINFORESPONSEBODYMEDIABASE_HPP_
#define ALIBABACLOUD_MODELS_GETPLAYINFORESPONSEBODYMEDIABASE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetPlayInfoResponseBodyMediaBase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPlayInfoResponseBodyMediaBase& obj) { 
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaTags, mediaTags_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlayInfoResponseBodyMediaBase& obj) { 
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaTags, mediaTags_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetPlayInfoResponseBodyMediaBase() = default ;
    GetPlayInfoResponseBodyMediaBase(const GetPlayInfoResponseBodyMediaBase &) = default ;
    GetPlayInfoResponseBodyMediaBase(GetPlayInfoResponseBodyMediaBase &&) = default ;
    GetPlayInfoResponseBodyMediaBase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPlayInfoResponseBodyMediaBase() = default ;
    GetPlayInfoResponseBodyMediaBase& operator=(const GetPlayInfoResponseBodyMediaBase &) = default ;
    GetPlayInfoResponseBodyMediaBase& operator=(GetPlayInfoResponseBodyMediaBase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cateId_ != nullptr
        && this->coverURL_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->mediaId_ != nullptr && this->mediaTags_ != nullptr
        && this->mediaType_ != nullptr && this->status_ != nullptr && this->title_ != nullptr; };
    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline GetPlayInfoResponseBodyMediaBase& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline GetPlayInfoResponseBodyMediaBase& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetPlayInfoResponseBodyMediaBase& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetPlayInfoResponseBodyMediaBase& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetPlayInfoResponseBodyMediaBase& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaTags Field Functions 
    bool hasMediaTags() const { return this->mediaTags_ != nullptr;};
    void deleteMediaTags() { this->mediaTags_ = nullptr;};
    inline string mediaTags() const { DARABONBA_PTR_GET_DEFAULT(mediaTags_, "") };
    inline GetPlayInfoResponseBodyMediaBase& setMediaTags(string mediaTags) { DARABONBA_PTR_SET_VALUE(mediaTags_, mediaTags) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline GetPlayInfoResponseBodyMediaBase& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPlayInfoResponseBodyMediaBase& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetPlayInfoResponseBodyMediaBase& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The category ID. You can use one of the following methods to obtain the ID:
    // 
    // *   Log on to the [Intelligent Media Services (IMS) console](https://ims.console.aliyun.com) and choose **Media Asset Management** > **Category Management** to view the category ID.
    // *   View the value of the CateId parameter returned by the AddCategory operation that you called to create a category.
    // *   View the value of the CateId parameter returned by the GetCategories operation that you called to query a category.
    std::shared_ptr<int64_t> cateId_ = nullptr;
    // The URL of the thumbnail.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The time when the media asset was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The content description.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The tags.
    // 
    // *   Up to 16 tags are supported.
    // *   Multiple tags are separated by commas (,).
    // *   Each tag can be up to 32 bytes in length.
    // *   The value is encoded in UTF-8.
    std::shared_ptr<string> mediaTags_ = nullptr;
    // The type of the media asset. Valid values:
    // 
    // video audio
    std::shared_ptr<string> mediaType_ = nullptr;
    // The resource status. Valid values:
    // 
    // Init: the initial state, which indicates that the source file is not ready.
    // 
    // Preparing: The source file is being prepared. For example, the file is being uploaded or edited.
    // 
    // PrepareFail: The source file failed to be prepared. For example, the information of the source file failed to be obtained.
    // 
    // Normal: The source file is ready.
    std::shared_ptr<string> status_ = nullptr;
    // The title.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
