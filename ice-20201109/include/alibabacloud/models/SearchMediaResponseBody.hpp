// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODY_HPP_
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
  class SearchMediaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MediaInfoList, mediaInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MediaInfoList, mediaInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    SearchMediaResponseBody() = default ;
    SearchMediaResponseBody(const SearchMediaResponseBody &) = default ;
    SearchMediaResponseBody(SearchMediaResponseBody &&) = default ;
    SearchMediaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBody() = default ;
    SearchMediaResponseBody& operator=(const SearchMediaResponseBody &) = default ;
    SearchMediaResponseBody& operator=(SearchMediaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(AiData, aiData_);
        DARABONBA_PTR_TO_JSON(AiRoughData, aiRoughData_);
        DARABONBA_PTR_TO_JSON(CustomFields, customFields_);
        DARABONBA_PTR_TO_JSON(FileInfoList, fileInfoList_);
        DARABONBA_PTR_TO_JSON(IndexStatusList, indexStatusList_);
        DARABONBA_PTR_TO_JSON(MediaBasicInfo, mediaBasicInfo_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      };
      friend void from_json(const Darabonba::Json& j, MediaInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(AiData, aiData_);
        DARABONBA_PTR_FROM_JSON(AiRoughData, aiRoughData_);
        DARABONBA_PTR_FROM_JSON(CustomFields, customFields_);
        DARABONBA_PTR_FROM_JSON(FileInfoList, fileInfoList_);
        DARABONBA_PTR_FROM_JSON(IndexStatusList, indexStatusList_);
        DARABONBA_PTR_FROM_JSON(MediaBasicInfo, mediaBasicInfo_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      };
      MediaInfoList() = default ;
      MediaInfoList(const MediaInfoList &) = default ;
      MediaInfoList(MediaInfoList &&) = default ;
      MediaInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaInfoList() = default ;
      MediaInfoList& operator=(const MediaInfoList &) = default ;
      MediaInfoList& operator=(MediaInfoList &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
          DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(SpriteImages, spriteImages_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StreamStatus, streamStatus_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(TranscodeStatus, transcodeStatus_);
          DARABONBA_PTR_TO_JSON(UploadSource, uploadSource_);
          DARABONBA_PTR_TO_JSON(UserData, userData_);
          DARABONBA_PTR_TO_JSON(VisionDescription, visionDescription_);
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
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
          DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(SpriteImages, spriteImages_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StreamStatus, streamStatus_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(TranscodeStatus, transcodeStatus_);
          DARABONBA_PTR_FROM_JSON(UploadSource, uploadSource_);
          DARABONBA_PTR_FROM_JSON(UserData, userData_);
          DARABONBA_PTR_FROM_JSON(VisionDescription, visionDescription_);
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
        && this->mediaTags_ == nullptr && this->mediaType_ == nullptr && this->modifiedTime_ == nullptr && this->namespace_ == nullptr && this->referenceId_ == nullptr
        && this->snapshots_ == nullptr && this->source_ == nullptr && this->spriteImages_ == nullptr && this->status_ == nullptr && this->streamStatus_ == nullptr
        && this->title_ == nullptr && this->transcodeStatus_ == nullptr && this->uploadSource_ == nullptr && this->userData_ == nullptr && this->visionDescription_ == nullptr; };
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


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline MediaBasicInfo& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


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


        // streamStatus Field Functions 
        bool hasStreamStatus() const { return this->streamStatus_ != nullptr;};
        void deleteStreamStatus() { this->streamStatus_ = nullptr;};
        inline string getStreamStatus() const { DARABONBA_PTR_GET_DEFAULT(streamStatus_, "") };
        inline MediaBasicInfo& setStreamStatus(string streamStatus) { DARABONBA_PTR_SET_VALUE(streamStatus_, streamStatus) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline MediaBasicInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // transcodeStatus Field Functions 
        bool hasTranscodeStatus() const { return this->transcodeStatus_ != nullptr;};
        void deleteTranscodeStatus() { this->transcodeStatus_ = nullptr;};
        inline string getTranscodeStatus() const { DARABONBA_PTR_GET_DEFAULT(transcodeStatus_, "") };
        inline MediaBasicInfo& setTranscodeStatus(string transcodeStatus) { DARABONBA_PTR_SET_VALUE(transcodeStatus_, transcodeStatus) };


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


        // visionDescription Field Functions 
        bool hasVisionDescription() const { return this->visionDescription_ != nullptr;};
        void deleteVisionDescription() { this->visionDescription_ = nullptr;};
        inline string getVisionDescription() const { DARABONBA_PTR_GET_DEFAULT(visionDescription_, "") };
        inline MediaBasicInfo& setVisionDescription(string visionDescription) { DARABONBA_PTR_SET_VALUE(visionDescription_, visionDescription) };


      protected:
        // The business to which the media asset belongs.
        shared_ptr<string> biz_ {};
        // The business type of the media asset.
        shared_ptr<string> businessType_ {};
        // The ID of the category.
        shared_ptr<int64_t> cateId_ {};
        // The name of the category.
        shared_ptr<string> cateName_ {};
        // The category of the media asset.
        shared_ptr<string> category_ {};
        // The thumbnail URL of the media asset.
        shared_ptr<string> coverURL_ {};
        // The time when the media asset was created.
        shared_ptr<string> createTime_ {};
        // The time when the media asset was deleted.
        shared_ptr<string> deletedTime_ {};
        // The description of the media asset.
        shared_ptr<string> description_ {};
        // The address of the media asset that is waiting to be registered.
        shared_ptr<string> inputURL_ {};
        // The ID of the media asset.
        shared_ptr<string> mediaId_ {};
        // The tags of the media asset.
        shared_ptr<string> mediaTags_ {};
        // The type of the media asset.
        shared_ptr<string> mediaType_ {};
        // The time when the media asset was modified.
        shared_ptr<string> modifiedTime_ {};
        shared_ptr<string> namespace_ {};
        // The custom ID of the media asset. The ID is a string that contains 6 to 64 characters. Only letters, digits, hyphens (-), and underscores (_) are supported. Each custom ID is unique.
        shared_ptr<string> referenceId_ {};
        // The snapshots of the media asset.
        shared_ptr<string> snapshots_ {};
        // The source of the media asset.
        shared_ptr<string> source_ {};
        // The image sprite of the media asset
        shared_ptr<string> spriteImages_ {};
        // The state of the media asset.
        shared_ptr<string> status_ {};
        shared_ptr<string> streamStatus_ {};
        // The title of the media asset.
        shared_ptr<string> title_ {};
        // The transcoding status of the media asset.
        shared_ptr<string> transcodeStatus_ {};
        // The upload source of the media asset.
        shared_ptr<string> uploadSource_ {};
        // The user data.
        shared_ptr<string> userData_ {};
        shared_ptr<string> visionDescription_ {};
      };

      class IndexStatusList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IndexStatusList& obj) { 
          DARABONBA_PTR_TO_JSON(IndexStatus, indexStatus_);
          DARABONBA_PTR_TO_JSON(IndexType, indexType_);
        };
        friend void from_json(const Darabonba::Json& j, IndexStatusList& obj) { 
          DARABONBA_PTR_FROM_JSON(IndexStatus, indexStatus_);
          DARABONBA_PTR_FROM_JSON(IndexType, indexType_);
        };
        IndexStatusList() = default ;
        IndexStatusList(const IndexStatusList &) = default ;
        IndexStatusList(IndexStatusList &&) = default ;
        IndexStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IndexStatusList() = default ;
        IndexStatusList& operator=(const IndexStatusList &) = default ;
        IndexStatusList& operator=(IndexStatusList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->indexStatus_ == nullptr
        && this->indexType_ == nullptr; };
        // indexStatus Field Functions 
        bool hasIndexStatus() const { return this->indexStatus_ != nullptr;};
        void deleteIndexStatus() { this->indexStatus_ = nullptr;};
        inline string getIndexStatus() const { DARABONBA_PTR_GET_DEFAULT(indexStatus_, "") };
        inline IndexStatusList& setIndexStatus(string indexStatus) { DARABONBA_PTR_SET_VALUE(indexStatus_, indexStatus) };


        // indexType Field Functions 
        bool hasIndexType() const { return this->indexType_ != nullptr;};
        void deleteIndexType() { this->indexType_ = nullptr;};
        inline string getIndexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
        inline IndexStatusList& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


      protected:
        shared_ptr<string> indexStatus_ {};
        shared_ptr<string> indexType_ {};
      };

      class FileInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
        };
        friend void from_json(const Darabonba::Json& j, FileInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
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
            DARABONBA_PTR_TO_JSON(ImagesInput, imagesInput_);
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
            DARABONBA_PTR_FROM_JSON(ImagesInput, imagesInput_);
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
        && this->fileType_ == nullptr && this->fileUrl_ == nullptr && this->formatName_ == nullptr && this->height_ == nullptr && this->imagesInput_ == nullptr
        && this->modifiedTime_ == nullptr && this->region_ == nullptr && this->width_ == nullptr; };
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


          // imagesInput Field Functions 
          bool hasImagesInput() const { return this->imagesInput_ != nullptr;};
          void deleteImagesInput() { this->imagesInput_ = nullptr;};
          inline string getImagesInput() const { DARABONBA_PTR_GET_DEFAULT(imagesInput_, "") };
          inline FileBasicInfo& setImagesInput(string imagesInput) { DARABONBA_PTR_SET_VALUE(imagesInput_, imagesInput) };


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
          // The bitrate of the file.
          shared_ptr<string> bitrate_ {};
          // The time when the file was created.
          shared_ptr<string> createTime_ {};
          // The duration of the file.
          shared_ptr<string> duration_ {};
          // The name of the file.
          shared_ptr<string> fileName_ {};
          // The size of the file in bytes.
          shared_ptr<string> fileSize_ {};
          // The status of the file.
          shared_ptr<string> fileStatus_ {};
          // The type of the file.
          shared_ptr<string> fileType_ {};
          // The Object Storage Service (OSS) URL of the file.
          shared_ptr<string> fileUrl_ {};
          // The encapsulation format of the file.
          shared_ptr<string> formatName_ {};
          // The height of the file.
          shared_ptr<string> height_ {};
          shared_ptr<string> imagesInput_ {};
          // The time when the file was last modified.
          shared_ptr<string> modifiedTime_ {};
          // The region in which the file is stored.
          shared_ptr<string> region_ {};
          // The width of the file.
          shared_ptr<string> width_ {};
        };

        virtual bool empty() const override { return this->fileBasicInfo_ == nullptr; };
        // fileBasicInfo Field Functions 
        bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
        void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
        inline const FileInfoList::FileBasicInfo & getFileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, FileInfoList::FileBasicInfo) };
        inline FileInfoList::FileBasicInfo getFileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, FileInfoList::FileBasicInfo) };
        inline FileInfoList& setFileBasicInfo(const FileInfoList::FileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
        inline FileInfoList& setFileBasicInfo(FileInfoList::FileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


      protected:
        // The basic information about the file, such as the duration and size.
        shared_ptr<FileInfoList::FileBasicInfo> fileBasicInfo_ {};
      };

      class AiRoughData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiRoughData& obj) { 
          DARABONBA_PTR_TO_JSON(AiCategory, aiCategory_);
          DARABONBA_PTR_TO_JSON(AiJobId, aiJobId_);
          DARABONBA_PTR_TO_JSON(Result, result_);
          DARABONBA_PTR_TO_JSON(SaveType, saveType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, AiRoughData& obj) { 
          DARABONBA_PTR_FROM_JSON(AiCategory, aiCategory_);
          DARABONBA_PTR_FROM_JSON(AiJobId, aiJobId_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
          DARABONBA_PTR_FROM_JSON(SaveType, saveType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        AiRoughData() = default ;
        AiRoughData(const AiRoughData &) = default ;
        AiRoughData(AiRoughData &&) = default ;
        AiRoughData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiRoughData() = default ;
        AiRoughData& operator=(const AiRoughData &) = default ;
        AiRoughData& operator=(AiRoughData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aiCategory_ == nullptr
        && this->aiJobId_ == nullptr && this->result_ == nullptr && this->saveType_ == nullptr && this->status_ == nullptr; };
        // aiCategory Field Functions 
        bool hasAiCategory() const { return this->aiCategory_ != nullptr;};
        void deleteAiCategory() { this->aiCategory_ = nullptr;};
        inline string getAiCategory() const { DARABONBA_PTR_GET_DEFAULT(aiCategory_, "") };
        inline AiRoughData& setAiCategory(string aiCategory) { DARABONBA_PTR_SET_VALUE(aiCategory_, aiCategory) };


        // aiJobId Field Functions 
        bool hasAiJobId() const { return this->aiJobId_ != nullptr;};
        void deleteAiJobId() { this->aiJobId_ = nullptr;};
        inline string getAiJobId() const { DARABONBA_PTR_GET_DEFAULT(aiJobId_, "") };
        inline AiRoughData& setAiJobId(string aiJobId) { DARABONBA_PTR_SET_VALUE(aiJobId_, aiJobId) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline AiRoughData& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


        // saveType Field Functions 
        bool hasSaveType() const { return this->saveType_ != nullptr;};
        void deleteSaveType() { this->saveType_ = nullptr;};
        inline string getSaveType() const { DARABONBA_PTR_GET_DEFAULT(saveType_, "") };
        inline AiRoughData& setSaveType(string saveType) { DARABONBA_PTR_SET_VALUE(saveType_, saveType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AiRoughData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // TV Series
        shared_ptr<string> aiCategory_ {};
        // The ID of the AI job.
        shared_ptr<string> aiJobId_ {};
        // The results of the AI job.
        shared_ptr<string> result_ {};
        // The save type.
        shared_ptr<string> saveType_ {};
        // The data status.
        shared_ptr<string> status_ {};
      };

      class AiData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiData& obj) { 
          DARABONBA_PTR_TO_JSON(AiLabelInfo, aiLabelInfo_);
          DARABONBA_PTR_TO_JSON(AsrInfo, asrInfo_);
          DARABONBA_PTR_TO_JSON(OcrInfo, ocrInfo_);
        };
        friend void from_json(const Darabonba::Json& j, AiData& obj) { 
          DARABONBA_PTR_FROM_JSON(AiLabelInfo, aiLabelInfo_);
          DARABONBA_PTR_FROM_JSON(AsrInfo, asrInfo_);
          DARABONBA_PTR_FROM_JSON(OcrInfo, ocrInfo_);
        };
        AiData() = default ;
        AiData(const AiData &) = default ;
        AiData(AiData &&) = default ;
        AiData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiData() = default ;
        AiData& operator=(const AiData &) = default ;
        AiData& operator=(AiData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OcrInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OcrInfo& obj) { 
            DARABONBA_PTR_TO_JSON(ClipId, clipId_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(From, from_);
            DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
            DARABONBA_PTR_TO_JSON(To, to_);
          };
          friend void from_json(const Darabonba::Json& j, OcrInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(ClipId, clipId_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(From, from_);
            DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
            DARABONBA_PTR_FROM_JSON(To, to_);
          };
          OcrInfo() = default ;
          OcrInfo(const OcrInfo &) = default ;
          OcrInfo(OcrInfo &&) = default ;
          OcrInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OcrInfo() = default ;
          OcrInfo& operator=(const OcrInfo &) = default ;
          OcrInfo& operator=(OcrInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->clipId_ == nullptr
        && this->content_ == nullptr && this->from_ == nullptr && this->timestamp_ == nullptr && this->to_ == nullptr; };
          // clipId Field Functions 
          bool hasClipId() const { return this->clipId_ != nullptr;};
          void deleteClipId() { this->clipId_ = nullptr;};
          inline string getClipId() const { DARABONBA_PTR_GET_DEFAULT(clipId_, "") };
          inline OcrInfo& setClipId(string clipId) { DARABONBA_PTR_SET_VALUE(clipId_, clipId) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline OcrInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // from Field Functions 
          bool hasFrom() const { return this->from_ != nullptr;};
          void deleteFrom() { this->from_ = nullptr;};
          inline double getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
          inline OcrInfo& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


          // timestamp Field Functions 
          bool hasTimestamp() const { return this->timestamp_ != nullptr;};
          void deleteTimestamp() { this->timestamp_ = nullptr;};
          inline double getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0.0) };
          inline OcrInfo& setTimestamp(double timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


          // to Field Functions 
          bool hasTo() const { return this->to_ != nullptr;};
          void deleteTo() { this->to_ = nullptr;};
          inline double getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
          inline OcrInfo& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


        protected:
          // The ID of the clip.
          shared_ptr<string> clipId_ {};
          // The text content.
          shared_ptr<string> content_ {};
          // The start time of the clip.
          shared_ptr<double> from_ {};
          // The timestamp of the clip.
          shared_ptr<double> timestamp_ {};
          // The end time of the clip.
          shared_ptr<double> to_ {};
        };

        class AsrInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AsrInfo& obj) { 
            DARABONBA_PTR_TO_JSON(ClipId, clipId_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(From, from_);
            DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
            DARABONBA_PTR_TO_JSON(To, to_);
          };
          friend void from_json(const Darabonba::Json& j, AsrInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(ClipId, clipId_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(From, from_);
            DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
            DARABONBA_PTR_FROM_JSON(To, to_);
          };
          AsrInfo() = default ;
          AsrInfo(const AsrInfo &) = default ;
          AsrInfo(AsrInfo &&) = default ;
          AsrInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AsrInfo() = default ;
          AsrInfo& operator=(const AsrInfo &) = default ;
          AsrInfo& operator=(AsrInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->clipId_ == nullptr
        && this->content_ == nullptr && this->from_ == nullptr && this->timestamp_ == nullptr && this->to_ == nullptr; };
          // clipId Field Functions 
          bool hasClipId() const { return this->clipId_ != nullptr;};
          void deleteClipId() { this->clipId_ = nullptr;};
          inline string getClipId() const { DARABONBA_PTR_GET_DEFAULT(clipId_, "") };
          inline AsrInfo& setClipId(string clipId) { DARABONBA_PTR_SET_VALUE(clipId_, clipId) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline AsrInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // from Field Functions 
          bool hasFrom() const { return this->from_ != nullptr;};
          void deleteFrom() { this->from_ = nullptr;};
          inline double getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
          inline AsrInfo& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


          // timestamp Field Functions 
          bool hasTimestamp() const { return this->timestamp_ != nullptr;};
          void deleteTimestamp() { this->timestamp_ = nullptr;};
          inline double getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0.0) };
          inline AsrInfo& setTimestamp(double timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


          // to Field Functions 
          bool hasTo() const { return this->to_ != nullptr;};
          void deleteTo() { this->to_ = nullptr;};
          inline double getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
          inline AsrInfo& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


        protected:
          // The ID of the clip.
          shared_ptr<string> clipId_ {};
          // The text content.
          shared_ptr<string> content_ {};
          // The start time of the clip.
          shared_ptr<double> from_ {};
          // The timestamp of the clip.
          shared_ptr<double> timestamp_ {};
          // The end time of the clip.
          shared_ptr<double> to_ {};
        };

        class AiLabelInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AiLabelInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(FaceId, faceId_);
            DARABONBA_PTR_TO_JSON(LabelId, labelId_);
            DARABONBA_PTR_TO_JSON(LabelName, labelName_);
            DARABONBA_PTR_TO_JSON(LabelType, labelType_);
            DARABONBA_PTR_TO_JSON(Occurrences, occurrences_);
            DARABONBA_PTR_TO_JSON(Source, source_);
          };
          friend void from_json(const Darabonba::Json& j, AiLabelInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(FaceId, faceId_);
            DARABONBA_PTR_FROM_JSON(LabelId, labelId_);
            DARABONBA_PTR_FROM_JSON(LabelName, labelName_);
            DARABONBA_PTR_FROM_JSON(LabelType, labelType_);
            DARABONBA_PTR_FROM_JSON(Occurrences, occurrences_);
            DARABONBA_PTR_FROM_JSON(Source, source_);
          };
          AiLabelInfo() = default ;
          AiLabelInfo(const AiLabelInfo &) = default ;
          AiLabelInfo(AiLabelInfo &&) = default ;
          AiLabelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AiLabelInfo() = default ;
          AiLabelInfo& operator=(const AiLabelInfo &) = default ;
          AiLabelInfo& operator=(AiLabelInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Occurrences : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Occurrences& obj) { 
              DARABONBA_PTR_TO_JSON(Content, content_);
              DARABONBA_PTR_TO_JSON(FinegrainId, finegrainId_);
              DARABONBA_PTR_TO_JSON(FinegrainName, finegrainName_);
              DARABONBA_PTR_TO_JSON(From, from_);
              DARABONBA_PTR_TO_JSON(Image, image_);
              DARABONBA_PTR_TO_JSON(Score, score_);
              DARABONBA_PTR_TO_JSON(TableBatchSeqId, tableBatchSeqId_);
              DARABONBA_PTR_TO_JSON(To, to_);
              DARABONBA_PTR_TO_JSON(Tracks, tracks_);
              DARABONBA_PTR_TO_JSON(clipId, clipId_);
            };
            friend void from_json(const Darabonba::Json& j, Occurrences& obj) { 
              DARABONBA_PTR_FROM_JSON(Content, content_);
              DARABONBA_PTR_FROM_JSON(FinegrainId, finegrainId_);
              DARABONBA_PTR_FROM_JSON(FinegrainName, finegrainName_);
              DARABONBA_PTR_FROM_JSON(From, from_);
              DARABONBA_PTR_FROM_JSON(Image, image_);
              DARABONBA_PTR_FROM_JSON(Score, score_);
              DARABONBA_PTR_FROM_JSON(TableBatchSeqId, tableBatchSeqId_);
              DARABONBA_PTR_FROM_JSON(To, to_);
              DARABONBA_PTR_FROM_JSON(Tracks, tracks_);
              DARABONBA_PTR_FROM_JSON(clipId, clipId_);
            };
            Occurrences() = default ;
            Occurrences(const Occurrences &) = default ;
            Occurrences(Occurrences &&) = default ;
            Occurrences(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Occurrences() = default ;
            Occurrences& operator=(const Occurrences &) = default ;
            Occurrences& operator=(Occurrences &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Tracks : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Tracks& obj) { 
                DARABONBA_PTR_TO_JSON(Position, position_);
                DARABONBA_PTR_TO_JSON(Size, size_);
                DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
              };
              friend void from_json(const Darabonba::Json& j, Tracks& obj) { 
                DARABONBA_PTR_FROM_JSON(Position, position_);
                DARABONBA_PTR_FROM_JSON(Size, size_);
                DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
              };
              Tracks() = default ;
              Tracks(const Tracks &) = default ;
              Tracks(Tracks &&) = default ;
              Tracks(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Tracks() = default ;
              Tracks& operator=(const Tracks &) = default ;
              Tracks& operator=(Tracks &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->position_ == nullptr
        && this->size_ == nullptr && this->timestamp_ == nullptr; };
              // position Field Functions 
              bool hasPosition() const { return this->position_ != nullptr;};
              void deletePosition() { this->position_ = nullptr;};
              inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
              inline Tracks& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


              // size Field Functions 
              bool hasSize() const { return this->size_ != nullptr;};
              void deleteSize() { this->size_ = nullptr;};
              inline double getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0.0) };
              inline Tracks& setSize(double size) { DARABONBA_PTR_SET_VALUE(size_, size) };


              // timestamp Field Functions 
              bool hasTimestamp() const { return this->timestamp_ != nullptr;};
              void deleteTimestamp() { this->timestamp_ = nullptr;};
              inline double getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0.0) };
              inline Tracks& setTimestamp(double timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


            protected:
              // The coordinates of the bounding box.
              shared_ptr<string> position_ {};
              // The size of the bounding box.
              shared_ptr<double> size_ {};
              // The timestamp of the track.
              shared_ptr<double> timestamp_ {};
            };

            virtual bool empty() const override { return this->content_ == nullptr
        && this->finegrainId_ == nullptr && this->finegrainName_ == nullptr && this->from_ == nullptr && this->image_ == nullptr && this->score_ == nullptr
        && this->tableBatchSeqId_ == nullptr && this->to_ == nullptr && this->tracks_ == nullptr && this->clipId_ == nullptr; };
            // content Field Functions 
            bool hasContent() const { return this->content_ != nullptr;};
            void deleteContent() { this->content_ = nullptr;};
            inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
            inline Occurrences& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


            // finegrainId Field Functions 
            bool hasFinegrainId() const { return this->finegrainId_ != nullptr;};
            void deleteFinegrainId() { this->finegrainId_ = nullptr;};
            inline string getFinegrainId() const { DARABONBA_PTR_GET_DEFAULT(finegrainId_, "") };
            inline Occurrences& setFinegrainId(string finegrainId) { DARABONBA_PTR_SET_VALUE(finegrainId_, finegrainId) };


            // finegrainName Field Functions 
            bool hasFinegrainName() const { return this->finegrainName_ != nullptr;};
            void deleteFinegrainName() { this->finegrainName_ = nullptr;};
            inline string getFinegrainName() const { DARABONBA_PTR_GET_DEFAULT(finegrainName_, "") };
            inline Occurrences& setFinegrainName(string finegrainName) { DARABONBA_PTR_SET_VALUE(finegrainName_, finegrainName) };


            // from Field Functions 
            bool hasFrom() const { return this->from_ != nullptr;};
            void deleteFrom() { this->from_ = nullptr;};
            inline double getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
            inline Occurrences& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


            // image Field Functions 
            bool hasImage() const { return this->image_ != nullptr;};
            void deleteImage() { this->image_ = nullptr;};
            inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
            inline Occurrences& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


            // score Field Functions 
            bool hasScore() const { return this->score_ != nullptr;};
            void deleteScore() { this->score_ = nullptr;};
            inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
            inline Occurrences& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


            // tableBatchSeqId Field Functions 
            bool hasTableBatchSeqId() const { return this->tableBatchSeqId_ != nullptr;};
            void deleteTableBatchSeqId() { this->tableBatchSeqId_ = nullptr;};
            inline string getTableBatchSeqId() const { DARABONBA_PTR_GET_DEFAULT(tableBatchSeqId_, "") };
            inline Occurrences& setTableBatchSeqId(string tableBatchSeqId) { DARABONBA_PTR_SET_VALUE(tableBatchSeqId_, tableBatchSeqId) };


            // to Field Functions 
            bool hasTo() const { return this->to_ != nullptr;};
            void deleteTo() { this->to_ = nullptr;};
            inline double getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
            inline Occurrences& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


            // tracks Field Functions 
            bool hasTracks() const { return this->tracks_ != nullptr;};
            void deleteTracks() { this->tracks_ = nullptr;};
            inline const vector<Occurrences::Tracks> & getTracks() const { DARABONBA_PTR_GET_CONST(tracks_, vector<Occurrences::Tracks>) };
            inline vector<Occurrences::Tracks> getTracks() { DARABONBA_PTR_GET(tracks_, vector<Occurrences::Tracks>) };
            inline Occurrences& setTracks(const vector<Occurrences::Tracks> & tracks) { DARABONBA_PTR_SET_VALUE(tracks_, tracks) };
            inline Occurrences& setTracks(vector<Occurrences::Tracks> && tracks) { DARABONBA_PTR_SET_RVALUE(tracks_, tracks) };


            // clipId Field Functions 
            bool hasClipId() const { return this->clipId_ != nullptr;};
            void deleteClipId() { this->clipId_ = nullptr;};
            inline string getClipId() const { DARABONBA_PTR_GET_DEFAULT(clipId_, "") };
            inline Occurrences& setClipId(string clipId) { DARABONBA_PTR_SET_VALUE(clipId_, clipId) };


          protected:
            // The text content.
            shared_ptr<string> content_ {};
            // The fine-grained ID of the entity.
            shared_ptr<string> finegrainId_ {};
            // The fine-grained name of the entity.
            shared_ptr<string> finegrainName_ {};
            // The start time of the clip.
            shared_ptr<double> from_ {};
            // The optimal face image encoded in Base64.
            shared_ptr<string> image_ {};
            // The score.
            shared_ptr<double> score_ {};
            // The sequence ID of the vector table.
            shared_ptr<string> tableBatchSeqId_ {};
            // The end time of the clip.
            shared_ptr<double> to_ {};
            // The track sequence.
            shared_ptr<vector<Occurrences::Tracks>> tracks_ {};
            // The ID of the clip.
            shared_ptr<string> clipId_ {};
          };

          virtual bool empty() const override { return this->category_ == nullptr
        && this->faceId_ == nullptr && this->labelId_ == nullptr && this->labelName_ == nullptr && this->labelType_ == nullptr && this->occurrences_ == nullptr
        && this->source_ == nullptr; };
          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline AiLabelInfo& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // faceId Field Functions 
          bool hasFaceId() const { return this->faceId_ != nullptr;};
          void deleteFaceId() { this->faceId_ = nullptr;};
          inline string getFaceId() const { DARABONBA_PTR_GET_DEFAULT(faceId_, "") };
          inline AiLabelInfo& setFaceId(string faceId) { DARABONBA_PTR_SET_VALUE(faceId_, faceId) };


          // labelId Field Functions 
          bool hasLabelId() const { return this->labelId_ != nullptr;};
          void deleteLabelId() { this->labelId_ = nullptr;};
          inline string getLabelId() const { DARABONBA_PTR_GET_DEFAULT(labelId_, "") };
          inline AiLabelInfo& setLabelId(string labelId) { DARABONBA_PTR_SET_VALUE(labelId_, labelId) };


          // labelName Field Functions 
          bool hasLabelName() const { return this->labelName_ != nullptr;};
          void deleteLabelName() { this->labelName_ = nullptr;};
          inline string getLabelName() const { DARABONBA_PTR_GET_DEFAULT(labelName_, "") };
          inline AiLabelInfo& setLabelName(string labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };


          // labelType Field Functions 
          bool hasLabelType() const { return this->labelType_ != nullptr;};
          void deleteLabelType() { this->labelType_ = nullptr;};
          inline string getLabelType() const { DARABONBA_PTR_GET_DEFAULT(labelType_, "") };
          inline AiLabelInfo& setLabelType(string labelType) { DARABONBA_PTR_SET_VALUE(labelType_, labelType) };


          // occurrences Field Functions 
          bool hasOccurrences() const { return this->occurrences_ != nullptr;};
          void deleteOccurrences() { this->occurrences_ = nullptr;};
          inline const vector<AiLabelInfo::Occurrences> & getOccurrences() const { DARABONBA_PTR_GET_CONST(occurrences_, vector<AiLabelInfo::Occurrences>) };
          inline vector<AiLabelInfo::Occurrences> getOccurrences() { DARABONBA_PTR_GET(occurrences_, vector<AiLabelInfo::Occurrences>) };
          inline AiLabelInfo& setOccurrences(const vector<AiLabelInfo::Occurrences> & occurrences) { DARABONBA_PTR_SET_VALUE(occurrences_, occurrences) };
          inline AiLabelInfo& setOccurrences(vector<AiLabelInfo::Occurrences> && occurrences) { DARABONBA_PTR_SET_RVALUE(occurrences_, occurrences) };


          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
          inline AiLabelInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        protected:
          // The category.
          shared_ptr<string> category_ {};
          // The face ID.
          shared_ptr<string> faceId_ {};
          // The ID of the entity.
          shared_ptr<string> labelId_ {};
          // The name of the entity.
          shared_ptr<string> labelName_ {};
          // The type of the tag.
          shared_ptr<string> labelType_ {};
          // The clips.
          shared_ptr<vector<AiLabelInfo::Occurrences>> occurrences_ {};
          // The source.
          shared_ptr<string> source_ {};
        };

        virtual bool empty() const override { return this->aiLabelInfo_ == nullptr
        && this->asrInfo_ == nullptr && this->ocrInfo_ == nullptr; };
        // aiLabelInfo Field Functions 
        bool hasAiLabelInfo() const { return this->aiLabelInfo_ != nullptr;};
        void deleteAiLabelInfo() { this->aiLabelInfo_ = nullptr;};
        inline const vector<AiData::AiLabelInfo> & getAiLabelInfo() const { DARABONBA_PTR_GET_CONST(aiLabelInfo_, vector<AiData::AiLabelInfo>) };
        inline vector<AiData::AiLabelInfo> getAiLabelInfo() { DARABONBA_PTR_GET(aiLabelInfo_, vector<AiData::AiLabelInfo>) };
        inline AiData& setAiLabelInfo(const vector<AiData::AiLabelInfo> & aiLabelInfo) { DARABONBA_PTR_SET_VALUE(aiLabelInfo_, aiLabelInfo) };
        inline AiData& setAiLabelInfo(vector<AiData::AiLabelInfo> && aiLabelInfo) { DARABONBA_PTR_SET_RVALUE(aiLabelInfo_, aiLabelInfo) };


        // asrInfo Field Functions 
        bool hasAsrInfo() const { return this->asrInfo_ != nullptr;};
        void deleteAsrInfo() { this->asrInfo_ = nullptr;};
        inline const vector<AiData::AsrInfo> & getAsrInfo() const { DARABONBA_PTR_GET_CONST(asrInfo_, vector<AiData::AsrInfo>) };
        inline vector<AiData::AsrInfo> getAsrInfo() { DARABONBA_PTR_GET(asrInfo_, vector<AiData::AsrInfo>) };
        inline AiData& setAsrInfo(const vector<AiData::AsrInfo> & asrInfo) { DARABONBA_PTR_SET_VALUE(asrInfo_, asrInfo) };
        inline AiData& setAsrInfo(vector<AiData::AsrInfo> && asrInfo) { DARABONBA_PTR_SET_RVALUE(asrInfo_, asrInfo) };


        // ocrInfo Field Functions 
        bool hasOcrInfo() const { return this->ocrInfo_ != nullptr;};
        void deleteOcrInfo() { this->ocrInfo_ = nullptr;};
        inline const vector<AiData::OcrInfo> & getOcrInfo() const { DARABONBA_PTR_GET_CONST(ocrInfo_, vector<AiData::OcrInfo>) };
        inline vector<AiData::OcrInfo> getOcrInfo() { DARABONBA_PTR_GET(ocrInfo_, vector<AiData::OcrInfo>) };
        inline AiData& setOcrInfo(const vector<AiData::OcrInfo> & ocrInfo) { DARABONBA_PTR_SET_VALUE(ocrInfo_, ocrInfo) };
        inline AiData& setOcrInfo(vector<AiData::OcrInfo> && ocrInfo) { DARABONBA_PTR_SET_RVALUE(ocrInfo_, ocrInfo) };


      protected:
        // The tags of the intelligent AI job.
        shared_ptr<vector<AiData::AiLabelInfo>> aiLabelInfo_ {};
        // The information about audio files.
        shared_ptr<vector<AiData::AsrInfo>> asrInfo_ {};
        // The subtitles.
        shared_ptr<vector<AiData::OcrInfo>> ocrInfo_ {};
      };

      virtual bool empty() const override { return this->aiData_ == nullptr
        && this->aiRoughData_ == nullptr && this->customFields_ == nullptr && this->fileInfoList_ == nullptr && this->indexStatusList_ == nullptr && this->mediaBasicInfo_ == nullptr
        && this->mediaId_ == nullptr; };
      // aiData Field Functions 
      bool hasAiData() const { return this->aiData_ != nullptr;};
      void deleteAiData() { this->aiData_ = nullptr;};
      inline const MediaInfoList::AiData & getAiData() const { DARABONBA_PTR_GET_CONST(aiData_, MediaInfoList::AiData) };
      inline MediaInfoList::AiData getAiData() { DARABONBA_PTR_GET(aiData_, MediaInfoList::AiData) };
      inline MediaInfoList& setAiData(const MediaInfoList::AiData & aiData) { DARABONBA_PTR_SET_VALUE(aiData_, aiData) };
      inline MediaInfoList& setAiData(MediaInfoList::AiData && aiData) { DARABONBA_PTR_SET_RVALUE(aiData_, aiData) };


      // aiRoughData Field Functions 
      bool hasAiRoughData() const { return this->aiRoughData_ != nullptr;};
      void deleteAiRoughData() { this->aiRoughData_ = nullptr;};
      inline const MediaInfoList::AiRoughData & getAiRoughData() const { DARABONBA_PTR_GET_CONST(aiRoughData_, MediaInfoList::AiRoughData) };
      inline MediaInfoList::AiRoughData getAiRoughData() { DARABONBA_PTR_GET(aiRoughData_, MediaInfoList::AiRoughData) };
      inline MediaInfoList& setAiRoughData(const MediaInfoList::AiRoughData & aiRoughData) { DARABONBA_PTR_SET_VALUE(aiRoughData_, aiRoughData) };
      inline MediaInfoList& setAiRoughData(MediaInfoList::AiRoughData && aiRoughData) { DARABONBA_PTR_SET_RVALUE(aiRoughData_, aiRoughData) };


      // customFields Field Functions 
      bool hasCustomFields() const { return this->customFields_ != nullptr;};
      void deleteCustomFields() { this->customFields_ = nullptr;};
      inline string getCustomFields() const { DARABONBA_PTR_GET_DEFAULT(customFields_, "") };
      inline MediaInfoList& setCustomFields(string customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };


      // fileInfoList Field Functions 
      bool hasFileInfoList() const { return this->fileInfoList_ != nullptr;};
      void deleteFileInfoList() { this->fileInfoList_ = nullptr;};
      inline const vector<MediaInfoList::FileInfoList> & getFileInfoList() const { DARABONBA_PTR_GET_CONST(fileInfoList_, vector<MediaInfoList::FileInfoList>) };
      inline vector<MediaInfoList::FileInfoList> getFileInfoList() { DARABONBA_PTR_GET(fileInfoList_, vector<MediaInfoList::FileInfoList>) };
      inline MediaInfoList& setFileInfoList(const vector<MediaInfoList::FileInfoList> & fileInfoList) { DARABONBA_PTR_SET_VALUE(fileInfoList_, fileInfoList) };
      inline MediaInfoList& setFileInfoList(vector<MediaInfoList::FileInfoList> && fileInfoList) { DARABONBA_PTR_SET_RVALUE(fileInfoList_, fileInfoList) };


      // indexStatusList Field Functions 
      bool hasIndexStatusList() const { return this->indexStatusList_ != nullptr;};
      void deleteIndexStatusList() { this->indexStatusList_ = nullptr;};
      inline const vector<MediaInfoList::IndexStatusList> & getIndexStatusList() const { DARABONBA_PTR_GET_CONST(indexStatusList_, vector<MediaInfoList::IndexStatusList>) };
      inline vector<MediaInfoList::IndexStatusList> getIndexStatusList() { DARABONBA_PTR_GET(indexStatusList_, vector<MediaInfoList::IndexStatusList>) };
      inline MediaInfoList& setIndexStatusList(const vector<MediaInfoList::IndexStatusList> & indexStatusList) { DARABONBA_PTR_SET_VALUE(indexStatusList_, indexStatusList) };
      inline MediaInfoList& setIndexStatusList(vector<MediaInfoList::IndexStatusList> && indexStatusList) { DARABONBA_PTR_SET_RVALUE(indexStatusList_, indexStatusList) };


      // mediaBasicInfo Field Functions 
      bool hasMediaBasicInfo() const { return this->mediaBasicInfo_ != nullptr;};
      void deleteMediaBasicInfo() { this->mediaBasicInfo_ = nullptr;};
      inline const MediaInfoList::MediaBasicInfo & getMediaBasicInfo() const { DARABONBA_PTR_GET_CONST(mediaBasicInfo_, MediaInfoList::MediaBasicInfo) };
      inline MediaInfoList::MediaBasicInfo getMediaBasicInfo() { DARABONBA_PTR_GET(mediaBasicInfo_, MediaInfoList::MediaBasicInfo) };
      inline MediaInfoList& setMediaBasicInfo(const MediaInfoList::MediaBasicInfo & mediaBasicInfo) { DARABONBA_PTR_SET_VALUE(mediaBasicInfo_, mediaBasicInfo) };
      inline MediaInfoList& setMediaBasicInfo(MediaInfoList::MediaBasicInfo && mediaBasicInfo) { DARABONBA_PTR_SET_RVALUE(mediaBasicInfo_, mediaBasicInfo) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline MediaInfoList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    protected:
      // The details of the intelligent AI job.
      shared_ptr<MediaInfoList::AiData> aiData_ {};
      // The description of the AI job.
      shared_ptr<MediaInfoList::AiRoughData> aiRoughData_ {};
      shared_ptr<string> customFields_ {};
      // The information about the files.
      shared_ptr<vector<MediaInfoList::FileInfoList>> fileInfoList_ {};
      shared_ptr<vector<MediaInfoList::IndexStatusList>> indexStatusList_ {};
      // The basic information about the media asset.
      shared_ptr<MediaInfoList::MediaBasicInfo> mediaBasicInfo_ {};
      // The ID of the media asset.
      shared_ptr<string> mediaId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->mediaInfoList_ == nullptr && this->requestId_ == nullptr && this->scrollToken_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchMediaResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // mediaInfoList Field Functions 
    bool hasMediaInfoList() const { return this->mediaInfoList_ != nullptr;};
    void deleteMediaInfoList() { this->mediaInfoList_ = nullptr;};
    inline const vector<SearchMediaResponseBody::MediaInfoList> & getMediaInfoList() const { DARABONBA_PTR_GET_CONST(mediaInfoList_, vector<SearchMediaResponseBody::MediaInfoList>) };
    inline vector<SearchMediaResponseBody::MediaInfoList> getMediaInfoList() { DARABONBA_PTR_GET(mediaInfoList_, vector<SearchMediaResponseBody::MediaInfoList>) };
    inline SearchMediaResponseBody& setMediaInfoList(const vector<SearchMediaResponseBody::MediaInfoList> & mediaInfoList) { DARABONBA_PTR_SET_VALUE(mediaInfoList_, mediaInfoList) };
    inline SearchMediaResponseBody& setMediaInfoList(vector<SearchMediaResponseBody::MediaInfoList> && mediaInfoList) { DARABONBA_PTR_SET_RVALUE(mediaInfoList_, mediaInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scrollToken Field Functions 
    bool hasScrollToken() const { return this->scrollToken_ != nullptr;};
    void deleteScrollToken() { this->scrollToken_ = nullptr;};
    inline string getScrollToken() const { DARABONBA_PTR_GET_DEFAULT(scrollToken_, "") };
    inline SearchMediaResponseBody& setScrollToken(string scrollToken) { DARABONBA_PTR_SET_VALUE(scrollToken_, scrollToken) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline SearchMediaResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline SearchMediaResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The media assets that meet the requirements.
    shared_ptr<vector<SearchMediaResponseBody::MediaInfoList>> mediaInfoList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The pagination identifier.
    shared_ptr<string> scrollToken_ {};
    // Indicates whether the request was successful.
    shared_ptr<string> success_ {};
    // The total number of media assets that meet the conditions.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
