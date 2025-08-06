// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIALIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchMediaResponseBodyMediaListAiData.hpp>
#include <alibabacloud/models/SearchMediaResponseBodyMediaListAiRoughData.hpp>
#include <alibabacloud/models/SearchMediaResponseBodyMediaListAttachedMedia.hpp>
#include <alibabacloud/models/SearchMediaResponseBodyMediaListAudio.hpp>
#include <alibabacloud/models/SearchMediaResponseBodyMediaListImage.hpp>
#include <alibabacloud/models/SearchMediaResponseBodyMediaListVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SearchMediaResponseBodyMediaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBodyMediaList& obj) { 
      DARABONBA_PTR_TO_JSON(AiData, aiData_);
      DARABONBA_PTR_TO_JSON(AiRoughData, aiRoughData_);
      DARABONBA_PTR_TO_JSON(AttachedMedia, attachedMedia_);
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBodyMediaList& obj) { 
      DARABONBA_PTR_FROM_JSON(AiData, aiData_);
      DARABONBA_PTR_FROM_JSON(AiRoughData, aiRoughData_);
      DARABONBA_PTR_FROM_JSON(AttachedMedia, attachedMedia_);
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    SearchMediaResponseBodyMediaList() = default ;
    SearchMediaResponseBodyMediaList(const SearchMediaResponseBodyMediaList &) = default ;
    SearchMediaResponseBodyMediaList(SearchMediaResponseBodyMediaList &&) = default ;
    SearchMediaResponseBodyMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBodyMediaList() = default ;
    SearchMediaResponseBodyMediaList& operator=(const SearchMediaResponseBodyMediaList &) = default ;
    SearchMediaResponseBodyMediaList& operator=(SearchMediaResponseBodyMediaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aiData_ != nullptr
        && this->aiRoughData_ != nullptr && this->attachedMedia_ != nullptr && this->audio_ != nullptr && this->creationTime_ != nullptr && this->image_ != nullptr
        && this->mediaId_ != nullptr && this->mediaType_ != nullptr && this->video_ != nullptr; };
    // aiData Field Functions 
    bool hasAiData() const { return this->aiData_ != nullptr;};
    void deleteAiData() { this->aiData_ = nullptr;};
    inline const Models::SearchMediaResponseBodyMediaListAiData & aiData() const { DARABONBA_PTR_GET_CONST(aiData_, Models::SearchMediaResponseBodyMediaListAiData) };
    inline Models::SearchMediaResponseBodyMediaListAiData aiData() { DARABONBA_PTR_GET(aiData_, Models::SearchMediaResponseBodyMediaListAiData) };
    inline SearchMediaResponseBodyMediaList& setAiData(const Models::SearchMediaResponseBodyMediaListAiData & aiData) { DARABONBA_PTR_SET_VALUE(aiData_, aiData) };
    inline SearchMediaResponseBodyMediaList& setAiData(Models::SearchMediaResponseBodyMediaListAiData && aiData) { DARABONBA_PTR_SET_RVALUE(aiData_, aiData) };


    // aiRoughData Field Functions 
    bool hasAiRoughData() const { return this->aiRoughData_ != nullptr;};
    void deleteAiRoughData() { this->aiRoughData_ = nullptr;};
    inline const Models::SearchMediaResponseBodyMediaListAiRoughData & aiRoughData() const { DARABONBA_PTR_GET_CONST(aiRoughData_, Models::SearchMediaResponseBodyMediaListAiRoughData) };
    inline Models::SearchMediaResponseBodyMediaListAiRoughData aiRoughData() { DARABONBA_PTR_GET(aiRoughData_, Models::SearchMediaResponseBodyMediaListAiRoughData) };
    inline SearchMediaResponseBodyMediaList& setAiRoughData(const Models::SearchMediaResponseBodyMediaListAiRoughData & aiRoughData) { DARABONBA_PTR_SET_VALUE(aiRoughData_, aiRoughData) };
    inline SearchMediaResponseBodyMediaList& setAiRoughData(Models::SearchMediaResponseBodyMediaListAiRoughData && aiRoughData) { DARABONBA_PTR_SET_RVALUE(aiRoughData_, aiRoughData) };


    // attachedMedia Field Functions 
    bool hasAttachedMedia() const { return this->attachedMedia_ != nullptr;};
    void deleteAttachedMedia() { this->attachedMedia_ = nullptr;};
    inline const Models::SearchMediaResponseBodyMediaListAttachedMedia & attachedMedia() const { DARABONBA_PTR_GET_CONST(attachedMedia_, Models::SearchMediaResponseBodyMediaListAttachedMedia) };
    inline Models::SearchMediaResponseBodyMediaListAttachedMedia attachedMedia() { DARABONBA_PTR_GET(attachedMedia_, Models::SearchMediaResponseBodyMediaListAttachedMedia) };
    inline SearchMediaResponseBodyMediaList& setAttachedMedia(const Models::SearchMediaResponseBodyMediaListAttachedMedia & attachedMedia) { DARABONBA_PTR_SET_VALUE(attachedMedia_, attachedMedia) };
    inline SearchMediaResponseBodyMediaList& setAttachedMedia(Models::SearchMediaResponseBodyMediaListAttachedMedia && attachedMedia) { DARABONBA_PTR_SET_RVALUE(attachedMedia_, attachedMedia) };


    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline const Models::SearchMediaResponseBodyMediaListAudio & audio() const { DARABONBA_PTR_GET_CONST(audio_, Models::SearchMediaResponseBodyMediaListAudio) };
    inline Models::SearchMediaResponseBodyMediaListAudio audio() { DARABONBA_PTR_GET(audio_, Models::SearchMediaResponseBodyMediaListAudio) };
    inline SearchMediaResponseBodyMediaList& setAudio(const Models::SearchMediaResponseBodyMediaListAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
    inline SearchMediaResponseBodyMediaList& setAudio(Models::SearchMediaResponseBodyMediaListAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline SearchMediaResponseBodyMediaList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const Models::SearchMediaResponseBodyMediaListImage & image() const { DARABONBA_PTR_GET_CONST(image_, Models::SearchMediaResponseBodyMediaListImage) };
    inline Models::SearchMediaResponseBodyMediaListImage image() { DARABONBA_PTR_GET(image_, Models::SearchMediaResponseBodyMediaListImage) };
    inline SearchMediaResponseBodyMediaList& setImage(const Models::SearchMediaResponseBodyMediaListImage & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline SearchMediaResponseBodyMediaList& setImage(Models::SearchMediaResponseBodyMediaListImage && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SearchMediaResponseBodyMediaList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline SearchMediaResponseBodyMediaList& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::SearchMediaResponseBodyMediaListVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::SearchMediaResponseBodyMediaListVideo) };
    inline Models::SearchMediaResponseBodyMediaListVideo video() { DARABONBA_PTR_GET(video_, Models::SearchMediaResponseBodyMediaListVideo) };
    inline SearchMediaResponseBodyMediaList& setVideo(const Models::SearchMediaResponseBodyMediaListVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline SearchMediaResponseBodyMediaList& setVideo(Models::SearchMediaResponseBodyMediaListVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // Details about AI data.
    std::shared_ptr<Models::SearchMediaResponseBodyMediaListAiData> aiData_ = nullptr;
    // The basic information about AI data.
    std::shared_ptr<Models::SearchMediaResponseBodyMediaListAiRoughData> aiRoughData_ = nullptr;
    // [The information about the auxiliary media asset](https://help.aliyun.com/document_detail/86991.html).
    std::shared_ptr<Models::SearchMediaResponseBodyMediaListAttachedMedia> attachedMedia_ = nullptr;
    // [The information about the audio](https://help.aliyun.com/document_detail/86991.html).
    std::shared_ptr<Models::SearchMediaResponseBodyMediaListAudio> audio_ = nullptr;
    // The time when the media asset was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*hh:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // [The information about the image](https://help.aliyun.com/document_detail/86991.html).
    std::shared_ptr<Models::SearchMediaResponseBodyMediaListImage> image_ = nullptr;
    // The ID of the file.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The type of the media asset. Valid values:
    // 
    // *   **video**
    // *   **audio**
    // *   **image**
    // *   **attached**
    std::shared_ptr<string> mediaType_ = nullptr;
    // [The information about the video](https://help.aliyun.com/document_detail/86991.html).
    std::shared_ptr<Models::SearchMediaResponseBodyMediaListVideo> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
