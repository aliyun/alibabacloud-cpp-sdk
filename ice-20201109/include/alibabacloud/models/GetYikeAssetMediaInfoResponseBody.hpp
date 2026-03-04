// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYIKEASSETMEDIAINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETYIKEASSETMEDIAINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetYikeAssetMediaInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYikeAssetMediaInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaInfo, mediaInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetYikeAssetMediaInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaInfo, mediaInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetYikeAssetMediaInfoResponseBody() = default ;
    GetYikeAssetMediaInfoResponseBody(const GetYikeAssetMediaInfoResponseBody &) = default ;
    GetYikeAssetMediaInfoResponseBody(GetYikeAssetMediaInfoResponseBody &&) = default ;
    GetYikeAssetMediaInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYikeAssetMediaInfoResponseBody() = default ;
    GetYikeAssetMediaInfoResponseBody& operator=(const GetYikeAssetMediaInfoResponseBody &) = default ;
    GetYikeAssetMediaInfoResponseBody& operator=(GetYikeAssetMediaInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaInfo& obj) { 
        DARABONBA_PTR_TO_JSON(BizData, bizData_);
        DARABONBA_PTR_TO_JSON(FileInfoList, fileInfoList_);
        DARABONBA_PTR_TO_JSON(MediaBasicInfo, mediaBasicInfo_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      };
      friend void from_json(const Darabonba::Json& j, MediaInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(BizData, bizData_);
        DARABONBA_PTR_FROM_JSON(FileInfoList, fileInfoList_);
        DARABONBA_PTR_FROM_JSON(MediaBasicInfo, mediaBasicInfo_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      };
      MediaInfo() = default ;
      MediaInfo(const MediaInfo &) = default ;
      MediaInfo(MediaInfo &&) = default ;
      MediaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaInfo() = default ;
      MediaInfo& operator=(const MediaInfo &) = default ;
      MediaInfo& operator=(MediaInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MediaBasicInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MediaBasicInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Biz, biz_);
          DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
          DARABONBA_PTR_TO_JSON(CateId, cateId_);
          DARABONBA_PTR_TO_JSON(CateName, cateName_);
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DeletedTime, deletedTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(InputURL, inputURL_);
          DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
          DARABONBA_PTR_TO_JSON(MediaTags, mediaTags_);
          DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
          DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(SpriteImages, spriteImages_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(ThumbURL240P, thumbURL240P_);
          DARABONBA_PTR_TO_JSON(ThumbURLWebp, thumbURLWebp_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(UploadSource, uploadSource_);
          DARABONBA_PTR_TO_JSON(UserData, userData_);
        };
        friend void from_json(const Darabonba::Json& j, MediaBasicInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Biz, biz_);
          DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
          DARABONBA_PTR_FROM_JSON(CateId, cateId_);
          DARABONBA_PTR_FROM_JSON(CateName, cateName_);
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DeletedTime, deletedTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(InputURL, inputURL_);
          DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
          DARABONBA_PTR_FROM_JSON(MediaTags, mediaTags_);
          DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
          DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(SpriteImages, spriteImages_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(ThumbURL240P, thumbURL240P_);
          DARABONBA_PTR_FROM_JSON(ThumbURLWebp, thumbURLWebp_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(UploadSource, uploadSource_);
          DARABONBA_PTR_FROM_JSON(UserData, userData_);
        };
        MediaBasicInfo() = default ;
        MediaBasicInfo(const MediaBasicInfo &) = default ;
        MediaBasicInfo(MediaBasicInfo &&) = default ;
        MediaBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MediaBasicInfo() = default ;
        MediaBasicInfo& operator=(const MediaBasicInfo &) = default ;
        MediaBasicInfo& operator=(MediaBasicInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->biz_ == nullptr
        && this->businessType_ == nullptr && this->cateId_ == nullptr && this->cateName_ == nullptr && this->category_ == nullptr && this->coverURL_ == nullptr
        && this->createTime_ == nullptr && this->deletedTime_ == nullptr && this->description_ == nullptr && this->inputURL_ == nullptr && this->mediaId_ == nullptr
        && this->mediaTags_ == nullptr && this->mediaType_ == nullptr && this->modifiedTime_ == nullptr && this->referenceId_ == nullptr && this->snapshots_ == nullptr
        && this->source_ == nullptr && this->spriteImages_ == nullptr && this->status_ == nullptr && this->thumbURL240P_ == nullptr && this->thumbURLWebp_ == nullptr
        && this->title_ == nullptr && this->uploadSource_ == nullptr && this->userData_ == nullptr; };
        // biz Field Functions 
        bool hasBiz() const { return this->biz_ != nullptr;};
        void deleteBiz() { this->biz_ = nullptr;};
        inline string getBiz() const { DARABONBA_PTR_GET_DEFAULT(biz_, "") };
        inline MediaBasicInfo& setBiz(string biz) { DARABONBA_PTR_SET_VALUE(biz_, biz) };


        // businessType Field Functions 
        bool hasBusinessType() const { return this->businessType_ != nullptr;};
        void deleteBusinessType() { this->businessType_ = nullptr;};
        inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
        inline MediaBasicInfo& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


        // cateId Field Functions 
        bool hasCateId() const { return this->cateId_ != nullptr;};
        void deleteCateId() { this->cateId_ = nullptr;};
        inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
        inline MediaBasicInfo& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


        // cateName Field Functions 
        bool hasCateName() const { return this->cateName_ != nullptr;};
        void deleteCateName() { this->cateName_ = nullptr;};
        inline string getCateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
        inline MediaBasicInfo& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline MediaBasicInfo& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // coverURL Field Functions 
        bool hasCoverURL() const { return this->coverURL_ != nullptr;};
        void deleteCoverURL() { this->coverURL_ = nullptr;};
        inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
        inline MediaBasicInfo& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline MediaBasicInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // deletedTime Field Functions 
        bool hasDeletedTime() const { return this->deletedTime_ != nullptr;};
        void deleteDeletedTime() { this->deletedTime_ = nullptr;};
        inline string getDeletedTime() const { DARABONBA_PTR_GET_DEFAULT(deletedTime_, "") };
        inline MediaBasicInfo& setDeletedTime(string deletedTime) { DARABONBA_PTR_SET_VALUE(deletedTime_, deletedTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline MediaBasicInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // inputURL Field Functions 
        bool hasInputURL() const { return this->inputURL_ != nullptr;};
        void deleteInputURL() { this->inputURL_ = nullptr;};
        inline string getInputURL() const { DARABONBA_PTR_GET_DEFAULT(inputURL_, "") };
        inline MediaBasicInfo& setInputURL(string inputURL) { DARABONBA_PTR_SET_VALUE(inputURL_, inputURL) };


        // mediaId Field Functions 
        bool hasMediaId() const { return this->mediaId_ != nullptr;};
        void deleteMediaId() { this->mediaId_ = nullptr;};
        inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
        inline MediaBasicInfo& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


        // mediaTags Field Functions 
        bool hasMediaTags() const { return this->mediaTags_ != nullptr;};
        void deleteMediaTags() { this->mediaTags_ = nullptr;};
        inline string getMediaTags() const { DARABONBA_PTR_GET_DEFAULT(mediaTags_, "") };
        inline MediaBasicInfo& setMediaTags(string mediaTags) { DARABONBA_PTR_SET_VALUE(mediaTags_, mediaTags) };


        // mediaType Field Functions 
        bool hasMediaType() const { return this->mediaType_ != nullptr;};
        void deleteMediaType() { this->mediaType_ = nullptr;};
        inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
        inline MediaBasicInfo& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline MediaBasicInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // referenceId Field Functions 
        bool hasReferenceId() const { return this->referenceId_ != nullptr;};
        void deleteReferenceId() { this->referenceId_ = nullptr;};
        inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
        inline MediaBasicInfo& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


        // snapshots Field Functions 
        bool hasSnapshots() const { return this->snapshots_ != nullptr;};
        void deleteSnapshots() { this->snapshots_ = nullptr;};
        inline string getSnapshots() const { DARABONBA_PTR_GET_DEFAULT(snapshots_, "") };
        inline MediaBasicInfo& setSnapshots(string snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline MediaBasicInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // spriteImages Field Functions 
        bool hasSpriteImages() const { return this->spriteImages_ != nullptr;};
        void deleteSpriteImages() { this->spriteImages_ = nullptr;};
        inline string getSpriteImages() const { DARABONBA_PTR_GET_DEFAULT(spriteImages_, "") };
        inline MediaBasicInfo& setSpriteImages(string spriteImages) { DARABONBA_PTR_SET_VALUE(spriteImages_, spriteImages) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline MediaBasicInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // thumbURL240P Field Functions 
        bool hasThumbURL240P() const { return this->thumbURL240P_ != nullptr;};
        void deleteThumbURL240P() { this->thumbURL240P_ = nullptr;};
        inline string getThumbURL240P() const { DARABONBA_PTR_GET_DEFAULT(thumbURL240P_, "") };
        inline MediaBasicInfo& setThumbURL240P(string thumbURL240P) { DARABONBA_PTR_SET_VALUE(thumbURL240P_, thumbURL240P) };


        // thumbURLWebp Field Functions 
        bool hasThumbURLWebp() const { return this->thumbURLWebp_ != nullptr;};
        void deleteThumbURLWebp() { this->thumbURLWebp_ = nullptr;};
        inline string getThumbURLWebp() const { DARABONBA_PTR_GET_DEFAULT(thumbURLWebp_, "") };
        inline MediaBasicInfo& setThumbURLWebp(string thumbURLWebp) { DARABONBA_PTR_SET_VALUE(thumbURLWebp_, thumbURLWebp) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline MediaBasicInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // uploadSource Field Functions 
        bool hasUploadSource() const { return this->uploadSource_ != nullptr;};
        void deleteUploadSource() { this->uploadSource_ = nullptr;};
        inline string getUploadSource() const { DARABONBA_PTR_GET_DEFAULT(uploadSource_, "") };
        inline MediaBasicInfo& setUploadSource(string uploadSource) { DARABONBA_PTR_SET_VALUE(uploadSource_, uploadSource) };


        // userData Field Functions 
        bool hasUserData() const { return this->userData_ != nullptr;};
        void deleteUserData() { this->userData_ = nullptr;};
        inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
        inline MediaBasicInfo& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      protected:
        shared_ptr<string> biz_ {};
        shared_ptr<string> businessType_ {};
        shared_ptr<int64_t> cateId_ {};
        shared_ptr<string> cateName_ {};
        shared_ptr<string> category_ {};
        shared_ptr<string> coverURL_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> deletedTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> inputURL_ {};
        shared_ptr<string> mediaId_ {};
        shared_ptr<string> mediaTags_ {};
        shared_ptr<string> mediaType_ {};
        shared_ptr<string> modifiedTime_ {};
        shared_ptr<string> referenceId_ {};
        shared_ptr<string> snapshots_ {};
        shared_ptr<string> source_ {};
        shared_ptr<string> spriteImages_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> thumbURL240P_ {};
        shared_ptr<string> thumbURLWebp_ {};
        shared_ptr<string> title_ {};
        shared_ptr<string> uploadSource_ {};
        shared_ptr<string> userData_ {};
      };

      class FileInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(AudioStreamInfoList, audioStreamInfoList_);
          DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
          DARABONBA_PTR_TO_JSON(SubtitleStreamInfoList, subtitleStreamInfoList_);
          DARABONBA_PTR_TO_JSON(VideoStreamInfoList, videoStreamInfoList_);
        };
        friend void from_json(const Darabonba::Json& j, FileInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioStreamInfoList, audioStreamInfoList_);
          DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
          DARABONBA_PTR_FROM_JSON(SubtitleStreamInfoList, subtitleStreamInfoList_);
          DARABONBA_PTR_FROM_JSON(VideoStreamInfoList, videoStreamInfoList_);
        };
        FileInfoList() = default ;
        FileInfoList(const FileInfoList &) = default ;
        FileInfoList(FileInfoList &&) = default ;
        FileInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileInfoList() = default ;
        FileInfoList& operator=(const FileInfoList &) = default ;
        FileInfoList& operator=(FileInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VideoStreamInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VideoStreamInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(AvgFPS, avgFPS_);
            DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_TO_JSON(CodecLongName, codecLongName_);
            DARABONBA_PTR_TO_JSON(CodecName, codecName_);
            DARABONBA_PTR_TO_JSON(CodecTag, codecTag_);
            DARABONBA_PTR_TO_JSON(CodecTagString, codecTagString_);
            DARABONBA_PTR_TO_JSON(CodecTimeBase, codecTimeBase_);
            DARABONBA_PTR_TO_JSON(Dar, dar_);
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(Fps, fps_);
            DARABONBA_PTR_TO_JSON(HasBFrames, hasBFrames_);
            DARABONBA_PTR_TO_JSON(Height, height_);
            DARABONBA_PTR_TO_JSON(Index, index_);
            DARABONBA_PTR_TO_JSON(Lang, lang_);
            DARABONBA_PTR_TO_JSON(Level, level_);
            DARABONBA_PTR_TO_JSON(NumFrames, numFrames_);
            DARABONBA_PTR_TO_JSON(PixFmt, pixFmt_);
            DARABONBA_PTR_TO_JSON(Profile, profile_);
            DARABONBA_PTR_TO_JSON(Rotate, rotate_);
            DARABONBA_PTR_TO_JSON(Sar, sar_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Timebase, timebase_);
            DARABONBA_PTR_TO_JSON(Width, width_);
          };
          friend void from_json(const Darabonba::Json& j, VideoStreamInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(AvgFPS, avgFPS_);
            DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_FROM_JSON(CodecLongName, codecLongName_);
            DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
            DARABONBA_PTR_FROM_JSON(CodecTag, codecTag_);
            DARABONBA_PTR_FROM_JSON(CodecTagString, codecTagString_);
            DARABONBA_PTR_FROM_JSON(CodecTimeBase, codecTimeBase_);
            DARABONBA_PTR_FROM_JSON(Dar, dar_);
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(Fps, fps_);
            DARABONBA_PTR_FROM_JSON(HasBFrames, hasBFrames_);
            DARABONBA_PTR_FROM_JSON(Height, height_);
            DARABONBA_PTR_FROM_JSON(Index, index_);
            DARABONBA_PTR_FROM_JSON(Lang, lang_);
            DARABONBA_PTR_FROM_JSON(Level, level_);
            DARABONBA_PTR_FROM_JSON(NumFrames, numFrames_);
            DARABONBA_PTR_FROM_JSON(PixFmt, pixFmt_);
            DARABONBA_PTR_FROM_JSON(Profile, profile_);
            DARABONBA_PTR_FROM_JSON(Rotate, rotate_);
            DARABONBA_PTR_FROM_JSON(Sar, sar_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
            DARABONBA_PTR_FROM_JSON(Width, width_);
          };
          VideoStreamInfoList() = default ;
          VideoStreamInfoList(const VideoStreamInfoList &) = default ;
          VideoStreamInfoList(VideoStreamInfoList &&) = default ;
          VideoStreamInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VideoStreamInfoList() = default ;
          VideoStreamInfoList& operator=(const VideoStreamInfoList &) = default ;
          VideoStreamInfoList& operator=(VideoStreamInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->avgFPS_ == nullptr
        && this->bitrate_ == nullptr && this->codecLongName_ == nullptr && this->codecName_ == nullptr && this->codecTag_ == nullptr && this->codecTagString_ == nullptr
        && this->codecTimeBase_ == nullptr && this->dar_ == nullptr && this->duration_ == nullptr && this->fps_ == nullptr && this->hasBFrames_ == nullptr
        && this->height_ == nullptr && this->index_ == nullptr && this->lang_ == nullptr && this->level_ == nullptr && this->numFrames_ == nullptr
        && this->pixFmt_ == nullptr && this->profile_ == nullptr && this->rotate_ == nullptr && this->sar_ == nullptr && this->startTime_ == nullptr
        && this->timebase_ == nullptr && this->width_ == nullptr; };
          // avgFPS Field Functions 
          bool hasAvgFPS() const { return this->avgFPS_ != nullptr;};
          void deleteAvgFPS() { this->avgFPS_ = nullptr;};
          inline string getAvgFPS() const { DARABONBA_PTR_GET_DEFAULT(avgFPS_, "") };
          inline VideoStreamInfoList& setAvgFPS(string avgFPS) { DARABONBA_PTR_SET_VALUE(avgFPS_, avgFPS) };


          // bitrate Field Functions 
          bool hasBitrate() const { return this->bitrate_ != nullptr;};
          void deleteBitrate() { this->bitrate_ = nullptr;};
          inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
          inline VideoStreamInfoList& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


          // codecLongName Field Functions 
          bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
          void deleteCodecLongName() { this->codecLongName_ = nullptr;};
          inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
          inline VideoStreamInfoList& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


          // codecName Field Functions 
          bool hasCodecName() const { return this->codecName_ != nullptr;};
          void deleteCodecName() { this->codecName_ = nullptr;};
          inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
          inline VideoStreamInfoList& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


          // codecTag Field Functions 
          bool hasCodecTag() const { return this->codecTag_ != nullptr;};
          void deleteCodecTag() { this->codecTag_ = nullptr;};
          inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
          inline VideoStreamInfoList& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


          // codecTagString Field Functions 
          bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
          void deleteCodecTagString() { this->codecTagString_ = nullptr;};
          inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
          inline VideoStreamInfoList& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


          // codecTimeBase Field Functions 
          bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
          void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
          inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
          inline VideoStreamInfoList& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


          // dar Field Functions 
          bool hasDar() const { return this->dar_ != nullptr;};
          void deleteDar() { this->dar_ = nullptr;};
          inline string getDar() const { DARABONBA_PTR_GET_DEFAULT(dar_, "") };
          inline VideoStreamInfoList& setDar(string dar) { DARABONBA_PTR_SET_VALUE(dar_, dar) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
          inline VideoStreamInfoList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // fps Field Functions 
          bool hasFps() const { return this->fps_ != nullptr;};
          void deleteFps() { this->fps_ = nullptr;};
          inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
          inline VideoStreamInfoList& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


          // hasBFrames Field Functions 
          bool hasHasBFrames() const { return this->hasBFrames_ != nullptr;};
          void deleteHasBFrames() { this->hasBFrames_ = nullptr;};
          inline string getHasBFrames() const { DARABONBA_PTR_GET_DEFAULT(hasBFrames_, "") };
          inline VideoStreamInfoList& setHasBFrames(string hasBFrames) { DARABONBA_PTR_SET_VALUE(hasBFrames_, hasBFrames) };


          // height Field Functions 
          bool hasHeight() const { return this->height_ != nullptr;};
          void deleteHeight() { this->height_ = nullptr;};
          inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
          inline VideoStreamInfoList& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


          // index Field Functions 
          bool hasIndex() const { return this->index_ != nullptr;};
          void deleteIndex() { this->index_ = nullptr;};
          inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
          inline VideoStreamInfoList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          // lang Field Functions 
          bool hasLang() const { return this->lang_ != nullptr;};
          void deleteLang() { this->lang_ = nullptr;};
          inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
          inline VideoStreamInfoList& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
          inline VideoStreamInfoList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


          // numFrames Field Functions 
          bool hasNumFrames() const { return this->numFrames_ != nullptr;};
          void deleteNumFrames() { this->numFrames_ = nullptr;};
          inline string getNumFrames() const { DARABONBA_PTR_GET_DEFAULT(numFrames_, "") };
          inline VideoStreamInfoList& setNumFrames(string numFrames) { DARABONBA_PTR_SET_VALUE(numFrames_, numFrames) };


          // pixFmt Field Functions 
          bool hasPixFmt() const { return this->pixFmt_ != nullptr;};
          void deletePixFmt() { this->pixFmt_ = nullptr;};
          inline string getPixFmt() const { DARABONBA_PTR_GET_DEFAULT(pixFmt_, "") };
          inline VideoStreamInfoList& setPixFmt(string pixFmt) { DARABONBA_PTR_SET_VALUE(pixFmt_, pixFmt) };


          // profile Field Functions 
          bool hasProfile() const { return this->profile_ != nullptr;};
          void deleteProfile() { this->profile_ = nullptr;};
          inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
          inline VideoStreamInfoList& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


          // rotate Field Functions 
          bool hasRotate() const { return this->rotate_ != nullptr;};
          void deleteRotate() { this->rotate_ = nullptr;};
          inline string getRotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, "") };
          inline VideoStreamInfoList& setRotate(string rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


          // sar Field Functions 
          bool hasSar() const { return this->sar_ != nullptr;};
          void deleteSar() { this->sar_ = nullptr;};
          inline string getSar() const { DARABONBA_PTR_GET_DEFAULT(sar_, "") };
          inline VideoStreamInfoList& setSar(string sar) { DARABONBA_PTR_SET_VALUE(sar_, sar) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline VideoStreamInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // timebase Field Functions 
          bool hasTimebase() const { return this->timebase_ != nullptr;};
          void deleteTimebase() { this->timebase_ = nullptr;};
          inline string getTimebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
          inline VideoStreamInfoList& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


          // width Field Functions 
          bool hasWidth() const { return this->width_ != nullptr;};
          void deleteWidth() { this->width_ = nullptr;};
          inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
          inline VideoStreamInfoList& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        protected:
          shared_ptr<string> avgFPS_ {};
          shared_ptr<string> bitrate_ {};
          shared_ptr<string> codecLongName_ {};
          shared_ptr<string> codecName_ {};
          shared_ptr<string> codecTag_ {};
          shared_ptr<string> codecTagString_ {};
          shared_ptr<string> codecTimeBase_ {};
          shared_ptr<string> dar_ {};
          shared_ptr<string> duration_ {};
          shared_ptr<string> fps_ {};
          shared_ptr<string> hasBFrames_ {};
          shared_ptr<string> height_ {};
          shared_ptr<string> index_ {};
          shared_ptr<string> lang_ {};
          shared_ptr<string> level_ {};
          shared_ptr<string> numFrames_ {};
          shared_ptr<string> pixFmt_ {};
          shared_ptr<string> profile_ {};
          shared_ptr<string> rotate_ {};
          shared_ptr<string> sar_ {};
          shared_ptr<string> startTime_ {};
          shared_ptr<string> timebase_ {};
          shared_ptr<string> width_ {};
        };

        class SubtitleStreamInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubtitleStreamInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(CodecLongName, codecLongName_);
            DARABONBA_PTR_TO_JSON(CodecName, codecName_);
            DARABONBA_PTR_TO_JSON(CodecTag, codecTag_);
            DARABONBA_PTR_TO_JSON(CodecTagString, codecTagString_);
            DARABONBA_PTR_TO_JSON(CodecTimeBase, codecTimeBase_);
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(Index, index_);
            DARABONBA_PTR_TO_JSON(Lang, lang_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Timebase, timebase_);
          };
          friend void from_json(const Darabonba::Json& j, SubtitleStreamInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(CodecLongName, codecLongName_);
            DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
            DARABONBA_PTR_FROM_JSON(CodecTag, codecTag_);
            DARABONBA_PTR_FROM_JSON(CodecTagString, codecTagString_);
            DARABONBA_PTR_FROM_JSON(CodecTimeBase, codecTimeBase_);
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(Index, index_);
            DARABONBA_PTR_FROM_JSON(Lang, lang_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
          };
          SubtitleStreamInfoList() = default ;
          SubtitleStreamInfoList(const SubtitleStreamInfoList &) = default ;
          SubtitleStreamInfoList(SubtitleStreamInfoList &&) = default ;
          SubtitleStreamInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubtitleStreamInfoList() = default ;
          SubtitleStreamInfoList& operator=(const SubtitleStreamInfoList &) = default ;
          SubtitleStreamInfoList& operator=(SubtitleStreamInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->codecLongName_ == nullptr
        && this->codecName_ == nullptr && this->codecTag_ == nullptr && this->codecTagString_ == nullptr && this->codecTimeBase_ == nullptr && this->duration_ == nullptr
        && this->index_ == nullptr && this->lang_ == nullptr && this->startTime_ == nullptr && this->timebase_ == nullptr; };
          // codecLongName Field Functions 
          bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
          void deleteCodecLongName() { this->codecLongName_ = nullptr;};
          inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
          inline SubtitleStreamInfoList& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


          // codecName Field Functions 
          bool hasCodecName() const { return this->codecName_ != nullptr;};
          void deleteCodecName() { this->codecName_ = nullptr;};
          inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
          inline SubtitleStreamInfoList& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


          // codecTag Field Functions 
          bool hasCodecTag() const { return this->codecTag_ != nullptr;};
          void deleteCodecTag() { this->codecTag_ = nullptr;};
          inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
          inline SubtitleStreamInfoList& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


          // codecTagString Field Functions 
          bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
          void deleteCodecTagString() { this->codecTagString_ = nullptr;};
          inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
          inline SubtitleStreamInfoList& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


          // codecTimeBase Field Functions 
          bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
          void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
          inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
          inline SubtitleStreamInfoList& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
          inline SubtitleStreamInfoList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // index Field Functions 
          bool hasIndex() const { return this->index_ != nullptr;};
          void deleteIndex() { this->index_ = nullptr;};
          inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
          inline SubtitleStreamInfoList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          // lang Field Functions 
          bool hasLang() const { return this->lang_ != nullptr;};
          void deleteLang() { this->lang_ = nullptr;};
          inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
          inline SubtitleStreamInfoList& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline SubtitleStreamInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // timebase Field Functions 
          bool hasTimebase() const { return this->timebase_ != nullptr;};
          void deleteTimebase() { this->timebase_ = nullptr;};
          inline string getTimebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
          inline SubtitleStreamInfoList& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


        protected:
          shared_ptr<string> codecLongName_ {};
          shared_ptr<string> codecName_ {};
          shared_ptr<string> codecTag_ {};
          shared_ptr<string> codecTagString_ {};
          shared_ptr<string> codecTimeBase_ {};
          shared_ptr<string> duration_ {};
          shared_ptr<string> index_ {};
          shared_ptr<string> lang_ {};
          shared_ptr<string> startTime_ {};
          shared_ptr<string> timebase_ {};
        };

        class FileBasicInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FileBasicInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(FileName, fileName_);
            DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
            DARABONBA_PTR_TO_JSON(FileStatus, fileStatus_);
            DARABONBA_PTR_TO_JSON(FileType, fileType_);
            DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
            DARABONBA_PTR_TO_JSON(FormatName, formatName_);
            DARABONBA_PTR_TO_JSON(Height, height_);
            DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(Width, width_);
          };
          friend void from_json(const Darabonba::Json& j, FileBasicInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(FileName, fileName_);
            DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
            DARABONBA_PTR_FROM_JSON(FileStatus, fileStatus_);
            DARABONBA_PTR_FROM_JSON(FileType, fileType_);
            DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
            DARABONBA_PTR_FROM_JSON(FormatName, formatName_);
            DARABONBA_PTR_FROM_JSON(Height, height_);
            DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(Width, width_);
          };
          FileBasicInfo() = default ;
          FileBasicInfo(const FileBasicInfo &) = default ;
          FileBasicInfo(FileBasicInfo &&) = default ;
          FileBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FileBasicInfo() = default ;
          FileBasicInfo& operator=(const FileBasicInfo &) = default ;
          FileBasicInfo& operator=(FileBasicInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->createTime_ == nullptr && this->duration_ == nullptr && this->fileName_ == nullptr && this->fileSize_ == nullptr && this->fileStatus_ == nullptr
        && this->fileType_ == nullptr && this->fileUrl_ == nullptr && this->formatName_ == nullptr && this->height_ == nullptr && this->modifiedTime_ == nullptr
        && this->region_ == nullptr && this->width_ == nullptr; };
          // bitrate Field Functions 
          bool hasBitrate() const { return this->bitrate_ != nullptr;};
          void deleteBitrate() { this->bitrate_ = nullptr;};
          inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
          inline FileBasicInfo& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline FileBasicInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
          inline FileBasicInfo& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // fileName Field Functions 
          bool hasFileName() const { return this->fileName_ != nullptr;};
          void deleteFileName() { this->fileName_ = nullptr;};
          inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
          inline FileBasicInfo& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


          // fileSize Field Functions 
          bool hasFileSize() const { return this->fileSize_ != nullptr;};
          void deleteFileSize() { this->fileSize_ = nullptr;};
          inline string getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
          inline FileBasicInfo& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


          // fileStatus Field Functions 
          bool hasFileStatus() const { return this->fileStatus_ != nullptr;};
          void deleteFileStatus() { this->fileStatus_ = nullptr;};
          inline string getFileStatus() const { DARABONBA_PTR_GET_DEFAULT(fileStatus_, "") };
          inline FileBasicInfo& setFileStatus(string fileStatus) { DARABONBA_PTR_SET_VALUE(fileStatus_, fileStatus) };


          // fileType Field Functions 
          bool hasFileType() const { return this->fileType_ != nullptr;};
          void deleteFileType() { this->fileType_ = nullptr;};
          inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
          inline FileBasicInfo& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


          // fileUrl Field Functions 
          bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
          void deleteFileUrl() { this->fileUrl_ = nullptr;};
          inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
          inline FileBasicInfo& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


          // formatName Field Functions 
          bool hasFormatName() const { return this->formatName_ != nullptr;};
          void deleteFormatName() { this->formatName_ = nullptr;};
          inline string getFormatName() const { DARABONBA_PTR_GET_DEFAULT(formatName_, "") };
          inline FileBasicInfo& setFormatName(string formatName) { DARABONBA_PTR_SET_VALUE(formatName_, formatName) };


          // height Field Functions 
          bool hasHeight() const { return this->height_ != nullptr;};
          void deleteHeight() { this->height_ = nullptr;};
          inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
          inline FileBasicInfo& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


          // modifiedTime Field Functions 
          bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
          void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
          inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
          inline FileBasicInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline FileBasicInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // width Field Functions 
          bool hasWidth() const { return this->width_ != nullptr;};
          void deleteWidth() { this->width_ = nullptr;};
          inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
          inline FileBasicInfo& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        protected:
          shared_ptr<string> bitrate_ {};
          shared_ptr<string> createTime_ {};
          shared_ptr<string> duration_ {};
          shared_ptr<string> fileName_ {};
          shared_ptr<string> fileSize_ {};
          shared_ptr<string> fileStatus_ {};
          shared_ptr<string> fileType_ {};
          shared_ptr<string> fileUrl_ {};
          shared_ptr<string> formatName_ {};
          shared_ptr<string> height_ {};
          shared_ptr<string> modifiedTime_ {};
          shared_ptr<string> region_ {};
          shared_ptr<string> width_ {};
        };

        class AudioStreamInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AudioStreamInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_TO_JSON(ChannelLayout, channelLayout_);
            DARABONBA_PTR_TO_JSON(Channels, channels_);
            DARABONBA_PTR_TO_JSON(CodecLongName, codecLongName_);
            DARABONBA_PTR_TO_JSON(CodecName, codecName_);
            DARABONBA_PTR_TO_JSON(CodecTag, codecTag_);
            DARABONBA_PTR_TO_JSON(CodecTagString, codecTagString_);
            DARABONBA_PTR_TO_JSON(CodecTimeBase, codecTimeBase_);
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(Fps, fps_);
            DARABONBA_PTR_TO_JSON(Index, index_);
            DARABONBA_PTR_TO_JSON(Lang, lang_);
            DARABONBA_PTR_TO_JSON(NumFrames, numFrames_);
            DARABONBA_PTR_TO_JSON(Profile, profile_);
            DARABONBA_PTR_TO_JSON(SampleFmt, sampleFmt_);
            DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Timebase, timebase_);
          };
          friend void from_json(const Darabonba::Json& j, AudioStreamInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_FROM_JSON(ChannelLayout, channelLayout_);
            DARABONBA_PTR_FROM_JSON(Channels, channels_);
            DARABONBA_PTR_FROM_JSON(CodecLongName, codecLongName_);
            DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
            DARABONBA_PTR_FROM_JSON(CodecTag, codecTag_);
            DARABONBA_PTR_FROM_JSON(CodecTagString, codecTagString_);
            DARABONBA_PTR_FROM_JSON(CodecTimeBase, codecTimeBase_);
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(Fps, fps_);
            DARABONBA_PTR_FROM_JSON(Index, index_);
            DARABONBA_PTR_FROM_JSON(Lang, lang_);
            DARABONBA_PTR_FROM_JSON(NumFrames, numFrames_);
            DARABONBA_PTR_FROM_JSON(Profile, profile_);
            DARABONBA_PTR_FROM_JSON(SampleFmt, sampleFmt_);
            DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
          };
          AudioStreamInfoList() = default ;
          AudioStreamInfoList(const AudioStreamInfoList &) = default ;
          AudioStreamInfoList(AudioStreamInfoList &&) = default ;
          AudioStreamInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AudioStreamInfoList() = default ;
          AudioStreamInfoList& operator=(const AudioStreamInfoList &) = default ;
          AudioStreamInfoList& operator=(AudioStreamInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->channelLayout_ == nullptr && this->channels_ == nullptr && this->codecLongName_ == nullptr && this->codecName_ == nullptr && this->codecTag_ == nullptr
        && this->codecTagString_ == nullptr && this->codecTimeBase_ == nullptr && this->duration_ == nullptr && this->fps_ == nullptr && this->index_ == nullptr
        && this->lang_ == nullptr && this->numFrames_ == nullptr && this->profile_ == nullptr && this->sampleFmt_ == nullptr && this->sampleRate_ == nullptr
        && this->startTime_ == nullptr && this->timebase_ == nullptr; };
          // bitrate Field Functions 
          bool hasBitrate() const { return this->bitrate_ != nullptr;};
          void deleteBitrate() { this->bitrate_ = nullptr;};
          inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
          inline AudioStreamInfoList& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


          // channelLayout Field Functions 
          bool hasChannelLayout() const { return this->channelLayout_ != nullptr;};
          void deleteChannelLayout() { this->channelLayout_ = nullptr;};
          inline string getChannelLayout() const { DARABONBA_PTR_GET_DEFAULT(channelLayout_, "") };
          inline AudioStreamInfoList& setChannelLayout(string channelLayout) { DARABONBA_PTR_SET_VALUE(channelLayout_, channelLayout) };


          // channels Field Functions 
          bool hasChannels() const { return this->channels_ != nullptr;};
          void deleteChannels() { this->channels_ = nullptr;};
          inline string getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
          inline AudioStreamInfoList& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


          // codecLongName Field Functions 
          bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
          void deleteCodecLongName() { this->codecLongName_ = nullptr;};
          inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
          inline AudioStreamInfoList& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


          // codecName Field Functions 
          bool hasCodecName() const { return this->codecName_ != nullptr;};
          void deleteCodecName() { this->codecName_ = nullptr;};
          inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
          inline AudioStreamInfoList& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


          // codecTag Field Functions 
          bool hasCodecTag() const { return this->codecTag_ != nullptr;};
          void deleteCodecTag() { this->codecTag_ = nullptr;};
          inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
          inline AudioStreamInfoList& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


          // codecTagString Field Functions 
          bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
          void deleteCodecTagString() { this->codecTagString_ = nullptr;};
          inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
          inline AudioStreamInfoList& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


          // codecTimeBase Field Functions 
          bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
          void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
          inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
          inline AudioStreamInfoList& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
          inline AudioStreamInfoList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // fps Field Functions 
          bool hasFps() const { return this->fps_ != nullptr;};
          void deleteFps() { this->fps_ = nullptr;};
          inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
          inline AudioStreamInfoList& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


          // index Field Functions 
          bool hasIndex() const { return this->index_ != nullptr;};
          void deleteIndex() { this->index_ = nullptr;};
          inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
          inline AudioStreamInfoList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          // lang Field Functions 
          bool hasLang() const { return this->lang_ != nullptr;};
          void deleteLang() { this->lang_ = nullptr;};
          inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
          inline AudioStreamInfoList& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


          // numFrames Field Functions 
          bool hasNumFrames() const { return this->numFrames_ != nullptr;};
          void deleteNumFrames() { this->numFrames_ = nullptr;};
          inline string getNumFrames() const { DARABONBA_PTR_GET_DEFAULT(numFrames_, "") };
          inline AudioStreamInfoList& setNumFrames(string numFrames) { DARABONBA_PTR_SET_VALUE(numFrames_, numFrames) };


          // profile Field Functions 
          bool hasProfile() const { return this->profile_ != nullptr;};
          void deleteProfile() { this->profile_ = nullptr;};
          inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
          inline AudioStreamInfoList& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


          // sampleFmt Field Functions 
          bool hasSampleFmt() const { return this->sampleFmt_ != nullptr;};
          void deleteSampleFmt() { this->sampleFmt_ = nullptr;};
          inline string getSampleFmt() const { DARABONBA_PTR_GET_DEFAULT(sampleFmt_, "") };
          inline AudioStreamInfoList& setSampleFmt(string sampleFmt) { DARABONBA_PTR_SET_VALUE(sampleFmt_, sampleFmt) };


          // sampleRate Field Functions 
          bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
          void deleteSampleRate() { this->sampleRate_ = nullptr;};
          inline string getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, "") };
          inline AudioStreamInfoList& setSampleRate(string sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline AudioStreamInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // timebase Field Functions 
          bool hasTimebase() const { return this->timebase_ != nullptr;};
          void deleteTimebase() { this->timebase_ = nullptr;};
          inline string getTimebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
          inline AudioStreamInfoList& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


        protected:
          shared_ptr<string> bitrate_ {};
          shared_ptr<string> channelLayout_ {};
          shared_ptr<string> channels_ {};
          shared_ptr<string> codecLongName_ {};
          shared_ptr<string> codecName_ {};
          shared_ptr<string> codecTag_ {};
          shared_ptr<string> codecTagString_ {};
          shared_ptr<string> codecTimeBase_ {};
          shared_ptr<string> duration_ {};
          shared_ptr<string> fps_ {};
          shared_ptr<string> index_ {};
          shared_ptr<string> lang_ {};
          shared_ptr<string> numFrames_ {};
          shared_ptr<string> profile_ {};
          shared_ptr<string> sampleFmt_ {};
          shared_ptr<string> sampleRate_ {};
          shared_ptr<string> startTime_ {};
          shared_ptr<string> timebase_ {};
        };

        virtual bool empty() const override { return this->audioStreamInfoList_ == nullptr
        && this->fileBasicInfo_ == nullptr && this->subtitleStreamInfoList_ == nullptr && this->videoStreamInfoList_ == nullptr; };
        // audioStreamInfoList Field Functions 
        bool hasAudioStreamInfoList() const { return this->audioStreamInfoList_ != nullptr;};
        void deleteAudioStreamInfoList() { this->audioStreamInfoList_ = nullptr;};
        inline const vector<FileInfoList::AudioStreamInfoList> & getAudioStreamInfoList() const { DARABONBA_PTR_GET_CONST(audioStreamInfoList_, vector<FileInfoList::AudioStreamInfoList>) };
        inline vector<FileInfoList::AudioStreamInfoList> getAudioStreamInfoList() { DARABONBA_PTR_GET(audioStreamInfoList_, vector<FileInfoList::AudioStreamInfoList>) };
        inline FileInfoList& setAudioStreamInfoList(const vector<FileInfoList::AudioStreamInfoList> & audioStreamInfoList) { DARABONBA_PTR_SET_VALUE(audioStreamInfoList_, audioStreamInfoList) };
        inline FileInfoList& setAudioStreamInfoList(vector<FileInfoList::AudioStreamInfoList> && audioStreamInfoList) { DARABONBA_PTR_SET_RVALUE(audioStreamInfoList_, audioStreamInfoList) };


        // fileBasicInfo Field Functions 
        bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
        void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
        inline const FileInfoList::FileBasicInfo & getFileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, FileInfoList::FileBasicInfo) };
        inline FileInfoList::FileBasicInfo getFileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, FileInfoList::FileBasicInfo) };
        inline FileInfoList& setFileBasicInfo(const FileInfoList::FileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
        inline FileInfoList& setFileBasicInfo(FileInfoList::FileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


        // subtitleStreamInfoList Field Functions 
        bool hasSubtitleStreamInfoList() const { return this->subtitleStreamInfoList_ != nullptr;};
        void deleteSubtitleStreamInfoList() { this->subtitleStreamInfoList_ = nullptr;};
        inline const vector<FileInfoList::SubtitleStreamInfoList> & getSubtitleStreamInfoList() const { DARABONBA_PTR_GET_CONST(subtitleStreamInfoList_, vector<FileInfoList::SubtitleStreamInfoList>) };
        inline vector<FileInfoList::SubtitleStreamInfoList> getSubtitleStreamInfoList() { DARABONBA_PTR_GET(subtitleStreamInfoList_, vector<FileInfoList::SubtitleStreamInfoList>) };
        inline FileInfoList& setSubtitleStreamInfoList(const vector<FileInfoList::SubtitleStreamInfoList> & subtitleStreamInfoList) { DARABONBA_PTR_SET_VALUE(subtitleStreamInfoList_, subtitleStreamInfoList) };
        inline FileInfoList& setSubtitleStreamInfoList(vector<FileInfoList::SubtitleStreamInfoList> && subtitleStreamInfoList) { DARABONBA_PTR_SET_RVALUE(subtitleStreamInfoList_, subtitleStreamInfoList) };


        // videoStreamInfoList Field Functions 
        bool hasVideoStreamInfoList() const { return this->videoStreamInfoList_ != nullptr;};
        void deleteVideoStreamInfoList() { this->videoStreamInfoList_ = nullptr;};
        inline const vector<FileInfoList::VideoStreamInfoList> & getVideoStreamInfoList() const { DARABONBA_PTR_GET_CONST(videoStreamInfoList_, vector<FileInfoList::VideoStreamInfoList>) };
        inline vector<FileInfoList::VideoStreamInfoList> getVideoStreamInfoList() { DARABONBA_PTR_GET(videoStreamInfoList_, vector<FileInfoList::VideoStreamInfoList>) };
        inline FileInfoList& setVideoStreamInfoList(const vector<FileInfoList::VideoStreamInfoList> & videoStreamInfoList) { DARABONBA_PTR_SET_VALUE(videoStreamInfoList_, videoStreamInfoList) };
        inline FileInfoList& setVideoStreamInfoList(vector<FileInfoList::VideoStreamInfoList> && videoStreamInfoList) { DARABONBA_PTR_SET_RVALUE(videoStreamInfoList_, videoStreamInfoList) };


      protected:
        shared_ptr<vector<FileInfoList::AudioStreamInfoList>> audioStreamInfoList_ {};
        shared_ptr<FileInfoList::FileBasicInfo> fileBasicInfo_ {};
        shared_ptr<vector<FileInfoList::SubtitleStreamInfoList>> subtitleStreamInfoList_ {};
        shared_ptr<vector<FileInfoList::VideoStreamInfoList>> videoStreamInfoList_ {};
      };

      class BizData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BizData& obj) { 
          DARABONBA_PTR_TO_JSON(AuditBlockedLabel, auditBlockedLabel_);
          DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
          DARABONBA_PTR_TO_JSON(CreationJobId, creationJobId_);
          DARABONBA_PTR_TO_JSON(FolderId, folderId_);
          DARABONBA_PTR_TO_JSON(IsFavorite, isFavorite_);
          DARABONBA_PTR_TO_JSON(IsLogicalDeleted, isLogicalDeleted_);
          DARABONBA_PTR_TO_JSON(MediaAssetSubType, mediaAssetSubType_);
          DARABONBA_PTR_TO_JSON(MediaAssetType, mediaAssetType_);
          DARABONBA_PTR_TO_JSON(ProductionId, productionId_);
          DARABONBA_PTR_TO_JSON(Prompt, prompt_);
          DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
          DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        };
        friend void from_json(const Darabonba::Json& j, BizData& obj) { 
          DARABONBA_PTR_FROM_JSON(AuditBlockedLabel, auditBlockedLabel_);
          DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
          DARABONBA_PTR_FROM_JSON(CreationJobId, creationJobId_);
          DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
          DARABONBA_PTR_FROM_JSON(IsFavorite, isFavorite_);
          DARABONBA_PTR_FROM_JSON(IsLogicalDeleted, isLogicalDeleted_);
          DARABONBA_PTR_FROM_JSON(MediaAssetSubType, mediaAssetSubType_);
          DARABONBA_PTR_FROM_JSON(MediaAssetType, mediaAssetType_);
          DARABONBA_PTR_FROM_JSON(ProductionId, productionId_);
          DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
          DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
          DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        };
        BizData() = default ;
        BizData(const BizData &) = default ;
        BizData(BizData &&) = default ;
        BizData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BizData() = default ;
        BizData& operator=(const BizData &) = default ;
        BizData& operator=(BizData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->auditBlockedLabel_ == nullptr
        && this->auditStatus_ == nullptr && this->creationJobId_ == nullptr && this->folderId_ == nullptr && this->isFavorite_ == nullptr && this->isLogicalDeleted_ == nullptr
        && this->mediaAssetSubType_ == nullptr && this->mediaAssetType_ == nullptr && this->productionId_ == nullptr && this->prompt_ == nullptr && this->sourceId_ == nullptr
        && this->sourceName_ == nullptr && this->sourceType_ == nullptr; };
        // auditBlockedLabel Field Functions 
        bool hasAuditBlockedLabel() const { return this->auditBlockedLabel_ != nullptr;};
        void deleteAuditBlockedLabel() { this->auditBlockedLabel_ = nullptr;};
        inline string getAuditBlockedLabel() const { DARABONBA_PTR_GET_DEFAULT(auditBlockedLabel_, "") };
        inline BizData& setAuditBlockedLabel(string auditBlockedLabel) { DARABONBA_PTR_SET_VALUE(auditBlockedLabel_, auditBlockedLabel) };


        // auditStatus Field Functions 
        bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
        void deleteAuditStatus() { this->auditStatus_ = nullptr;};
        inline string getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
        inline BizData& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


        // creationJobId Field Functions 
        bool hasCreationJobId() const { return this->creationJobId_ != nullptr;};
        void deleteCreationJobId() { this->creationJobId_ = nullptr;};
        inline string getCreationJobId() const { DARABONBA_PTR_GET_DEFAULT(creationJobId_, "") };
        inline BizData& setCreationJobId(string creationJobId) { DARABONBA_PTR_SET_VALUE(creationJobId_, creationJobId) };


        // folderId Field Functions 
        bool hasFolderId() const { return this->folderId_ != nullptr;};
        void deleteFolderId() { this->folderId_ = nullptr;};
        inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
        inline BizData& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


        // isFavorite Field Functions 
        bool hasIsFavorite() const { return this->isFavorite_ != nullptr;};
        void deleteIsFavorite() { this->isFavorite_ = nullptr;};
        inline string getIsFavorite() const { DARABONBA_PTR_GET_DEFAULT(isFavorite_, "") };
        inline BizData& setIsFavorite(string isFavorite) { DARABONBA_PTR_SET_VALUE(isFavorite_, isFavorite) };


        // isLogicalDeleted Field Functions 
        bool hasIsLogicalDeleted() const { return this->isLogicalDeleted_ != nullptr;};
        void deleteIsLogicalDeleted() { this->isLogicalDeleted_ = nullptr;};
        inline string getIsLogicalDeleted() const { DARABONBA_PTR_GET_DEFAULT(isLogicalDeleted_, "") };
        inline BizData& setIsLogicalDeleted(string isLogicalDeleted) { DARABONBA_PTR_SET_VALUE(isLogicalDeleted_, isLogicalDeleted) };


        // mediaAssetSubType Field Functions 
        bool hasMediaAssetSubType() const { return this->mediaAssetSubType_ != nullptr;};
        void deleteMediaAssetSubType() { this->mediaAssetSubType_ = nullptr;};
        inline string getMediaAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(mediaAssetSubType_, "") };
        inline BizData& setMediaAssetSubType(string mediaAssetSubType) { DARABONBA_PTR_SET_VALUE(mediaAssetSubType_, mediaAssetSubType) };


        // mediaAssetType Field Functions 
        bool hasMediaAssetType() const { return this->mediaAssetType_ != nullptr;};
        void deleteMediaAssetType() { this->mediaAssetType_ = nullptr;};
        inline string getMediaAssetType() const { DARABONBA_PTR_GET_DEFAULT(mediaAssetType_, "") };
        inline BizData& setMediaAssetType(string mediaAssetType) { DARABONBA_PTR_SET_VALUE(mediaAssetType_, mediaAssetType) };


        // productionId Field Functions 
        bool hasProductionId() const { return this->productionId_ != nullptr;};
        void deleteProductionId() { this->productionId_ = nullptr;};
        inline string getProductionId() const { DARABONBA_PTR_GET_DEFAULT(productionId_, "") };
        inline BizData& setProductionId(string productionId) { DARABONBA_PTR_SET_VALUE(productionId_, productionId) };


        // prompt Field Functions 
        bool hasPrompt() const { return this->prompt_ != nullptr;};
        void deletePrompt() { this->prompt_ = nullptr;};
        inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
        inline BizData& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
        inline BizData& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


        // sourceName Field Functions 
        bool hasSourceName() const { return this->sourceName_ != nullptr;};
        void deleteSourceName() { this->sourceName_ = nullptr;};
        inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
        inline BizData& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline BizData& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      protected:
        shared_ptr<string> auditBlockedLabel_ {};
        shared_ptr<string> auditStatus_ {};
        shared_ptr<string> creationJobId_ {};
        shared_ptr<string> folderId_ {};
        shared_ptr<string> isFavorite_ {};
        shared_ptr<string> isLogicalDeleted_ {};
        shared_ptr<string> mediaAssetSubType_ {};
        shared_ptr<string> mediaAssetType_ {};
        shared_ptr<string> productionId_ {};
        shared_ptr<string> prompt_ {};
        shared_ptr<string> sourceId_ {};
        shared_ptr<string> sourceName_ {};
        shared_ptr<string> sourceType_ {};
      };

      virtual bool empty() const override { return this->bizData_ == nullptr
        && this->fileInfoList_ == nullptr && this->mediaBasicInfo_ == nullptr && this->mediaId_ == nullptr; };
      // bizData Field Functions 
      bool hasBizData() const { return this->bizData_ != nullptr;};
      void deleteBizData() { this->bizData_ = nullptr;};
      inline const MediaInfo::BizData & getBizData() const { DARABONBA_PTR_GET_CONST(bizData_, MediaInfo::BizData) };
      inline MediaInfo::BizData getBizData() { DARABONBA_PTR_GET(bizData_, MediaInfo::BizData) };
      inline MediaInfo& setBizData(const MediaInfo::BizData & bizData) { DARABONBA_PTR_SET_VALUE(bizData_, bizData) };
      inline MediaInfo& setBizData(MediaInfo::BizData && bizData) { DARABONBA_PTR_SET_RVALUE(bizData_, bizData) };


      // fileInfoList Field Functions 
      bool hasFileInfoList() const { return this->fileInfoList_ != nullptr;};
      void deleteFileInfoList() { this->fileInfoList_ = nullptr;};
      inline const vector<MediaInfo::FileInfoList> & getFileInfoList() const { DARABONBA_PTR_GET_CONST(fileInfoList_, vector<MediaInfo::FileInfoList>) };
      inline vector<MediaInfo::FileInfoList> getFileInfoList() { DARABONBA_PTR_GET(fileInfoList_, vector<MediaInfo::FileInfoList>) };
      inline MediaInfo& setFileInfoList(const vector<MediaInfo::FileInfoList> & fileInfoList) { DARABONBA_PTR_SET_VALUE(fileInfoList_, fileInfoList) };
      inline MediaInfo& setFileInfoList(vector<MediaInfo::FileInfoList> && fileInfoList) { DARABONBA_PTR_SET_RVALUE(fileInfoList_, fileInfoList) };


      // mediaBasicInfo Field Functions 
      bool hasMediaBasicInfo() const { return this->mediaBasicInfo_ != nullptr;};
      void deleteMediaBasicInfo() { this->mediaBasicInfo_ = nullptr;};
      inline const MediaInfo::MediaBasicInfo & getMediaBasicInfo() const { DARABONBA_PTR_GET_CONST(mediaBasicInfo_, MediaInfo::MediaBasicInfo) };
      inline MediaInfo::MediaBasicInfo getMediaBasicInfo() { DARABONBA_PTR_GET(mediaBasicInfo_, MediaInfo::MediaBasicInfo) };
      inline MediaInfo& setMediaBasicInfo(const MediaInfo::MediaBasicInfo & mediaBasicInfo) { DARABONBA_PTR_SET_VALUE(mediaBasicInfo_, mediaBasicInfo) };
      inline MediaInfo& setMediaBasicInfo(MediaInfo::MediaBasicInfo && mediaBasicInfo) { DARABONBA_PTR_SET_RVALUE(mediaBasicInfo_, mediaBasicInfo) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline MediaInfo& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    protected:
      shared_ptr<MediaInfo::BizData> bizData_ {};
      shared_ptr<vector<MediaInfo::FileInfoList>> fileInfoList_ {};
      shared_ptr<MediaInfo::MediaBasicInfo> mediaBasicInfo_ {};
      shared_ptr<string> mediaId_ {};
    };

    virtual bool empty() const override { return this->mediaInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // mediaInfo Field Functions 
    bool hasMediaInfo() const { return this->mediaInfo_ != nullptr;};
    void deleteMediaInfo() { this->mediaInfo_ = nullptr;};
    inline const GetYikeAssetMediaInfoResponseBody::MediaInfo & getMediaInfo() const { DARABONBA_PTR_GET_CONST(mediaInfo_, GetYikeAssetMediaInfoResponseBody::MediaInfo) };
    inline GetYikeAssetMediaInfoResponseBody::MediaInfo getMediaInfo() { DARABONBA_PTR_GET(mediaInfo_, GetYikeAssetMediaInfoResponseBody::MediaInfo) };
    inline GetYikeAssetMediaInfoResponseBody& setMediaInfo(const GetYikeAssetMediaInfoResponseBody::MediaInfo & mediaInfo) { DARABONBA_PTR_SET_VALUE(mediaInfo_, mediaInfo) };
    inline GetYikeAssetMediaInfoResponseBody& setMediaInfo(GetYikeAssetMediaInfoResponseBody::MediaInfo && mediaInfo) { DARABONBA_PTR_SET_RVALUE(mediaInfo_, mediaInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetYikeAssetMediaInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetYikeAssetMediaInfoResponseBody::MediaInfo> mediaInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
