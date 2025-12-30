// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLICMEDIABASICINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLICMEDIABASICINFOSRESPONSEBODY_HPP_
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
  class ListPublicMediaBasicInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublicMediaBasicInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MediaInfos, mediaInfos_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublicMediaBasicInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MediaInfos, mediaInfos_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPublicMediaBasicInfosResponseBody() = default ;
    ListPublicMediaBasicInfosResponseBody(const ListPublicMediaBasicInfosResponseBody &) = default ;
    ListPublicMediaBasicInfosResponseBody(ListPublicMediaBasicInfosResponseBody &&) = default ;
    ListPublicMediaBasicInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublicMediaBasicInfosResponseBody() = default ;
    ListPublicMediaBasicInfosResponseBody& operator=(const ListPublicMediaBasicInfosResponseBody &) = default ;
    ListPublicMediaBasicInfosResponseBody& operator=(ListPublicMediaBasicInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaInfos& obj) { 
        DARABONBA_PTR_TO_JSON(FileInfoList, fileInfoList_);
        DARABONBA_PTR_TO_JSON(MediaBasicInfo, mediaBasicInfo_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      };
      friend void from_json(const Darabonba::Json& j, MediaInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(FileInfoList, fileInfoList_);
        DARABONBA_PTR_FROM_JSON(MediaBasicInfo, mediaBasicInfo_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      };
      MediaInfos() = default ;
      MediaInfos(const MediaInfos &) = default ;
      MediaInfos(MediaInfos &&) = default ;
      MediaInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaInfos() = default ;
      MediaInfos& operator=(const MediaInfos &) = default ;
      MediaInfos& operator=(MediaInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MediaBasicInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MediaBasicInfo& obj) { 
          DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
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
          DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(TranscodeStatus, transcodeStatus_);
          DARABONBA_PTR_TO_JSON(UserData, userData_);
        };
        friend void from_json(const Darabonba::Json& j, MediaBasicInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
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
          DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(TranscodeStatus, transcodeStatus_);
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
        virtual bool empty() const override { return this->businessType_ == nullptr
        && this->category_ == nullptr && this->coverURL_ == nullptr && this->createTime_ == nullptr && this->deletedTime_ == nullptr && this->description_ == nullptr
        && this->inputURL_ == nullptr && this->mediaId_ == nullptr && this->mediaTags_ == nullptr && this->mediaType_ == nullptr && this->modifiedTime_ == nullptr
        && this->snapshots_ == nullptr && this->source_ == nullptr && this->status_ == nullptr && this->title_ == nullptr && this->transcodeStatus_ == nullptr
        && this->userData_ == nullptr; };
        // businessType Field Functions 
        bool hasBusinessType() const { return this->businessType_ != nullptr;};
        void deleteBusinessType() { this->businessType_ = nullptr;};
        inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
        inline MediaBasicInfo& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


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


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline MediaBasicInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


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


        // userData Field Functions 
        bool hasUserData() const { return this->userData_ != nullptr;};
        void deleteUserData() { this->userData_ = nullptr;};
        inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
        inline MediaBasicInfo& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      protected:
        // The business type of the media asset.
        shared_ptr<string> businessType_ {};
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
        // The URL of the media asset in another service.
        shared_ptr<string> inputURL_ {};
        // The ID of the media asset.
        shared_ptr<string> mediaId_ {};
        // The tags of the media asset.
        shared_ptr<string> mediaTags_ {};
        // The type of the media asset.
        shared_ptr<string> mediaType_ {};
        // The time when the media asset was last modified.
        shared_ptr<string> modifiedTime_ {};
        // The snapshots of the media asset.
        shared_ptr<string> snapshots_ {};
        // The source of the media asset.
        shared_ptr<string> source_ {};
        // The status of the media asset.
        shared_ptr<string> status_ {};
        // The title of the media asset.
        shared_ptr<string> title_ {};
        // The transcoding status of the media asset.
        shared_ptr<string> transcodeStatus_ {};
        // The user data.
        shared_ptr<string> userData_ {};
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
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(FileName, fileName_);
            DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
            DARABONBA_PTR_TO_JSON(FileStatus, fileStatus_);
            DARABONBA_PTR_TO_JSON(FileType, fileType_);
            DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
            DARABONBA_PTR_TO_JSON(FormatName, formatName_);
            DARABONBA_PTR_TO_JSON(Height, height_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(Width, width_);
          };
          friend void from_json(const Darabonba::Json& j, FileBasicInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(FileName, fileName_);
            DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
            DARABONBA_PTR_FROM_JSON(FileStatus, fileStatus_);
            DARABONBA_PTR_FROM_JSON(FileType, fileType_);
            DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
            DARABONBA_PTR_FROM_JSON(FormatName, formatName_);
            DARABONBA_PTR_FROM_JSON(Height, height_);
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
        && this->duration_ == nullptr && this->fileName_ == nullptr && this->fileSize_ == nullptr && this->fileStatus_ == nullptr && this->fileType_ == nullptr
        && this->fileUrl_ == nullptr && this->formatName_ == nullptr && this->height_ == nullptr && this->region_ == nullptr && this->width_ == nullptr; };
          // bitrate Field Functions 
          bool hasBitrate() const { return this->bitrate_ != nullptr;};
          void deleteBitrate() { this->bitrate_ = nullptr;};
          inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
          inline FileBasicInfo& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


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
          // The bitrate.
          shared_ptr<string> bitrate_ {};
          // The duration.
          shared_ptr<string> duration_ {};
          // The file name.
          shared_ptr<string> fileName_ {};
          // The file size. Unit: bytes.
          shared_ptr<string> fileSize_ {};
          // The file status.
          shared_ptr<string> fileStatus_ {};
          // The file type.
          shared_ptr<string> fileType_ {};
          // The Object Storage Service (OSS) URL of the file.
          shared_ptr<string> fileUrl_ {};
          // The container format.
          shared_ptr<string> formatName_ {};
          // The height.
          shared_ptr<string> height_ {};
          // The region in which the file resides.
          shared_ptr<string> region_ {};
          // The width.
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
        // The basic information of the file, such as the duration and size.
        shared_ptr<FileInfoList::FileBasicInfo> fileBasicInfo_ {};
      };

      virtual bool empty() const override { return this->fileInfoList_ == nullptr
        && this->mediaBasicInfo_ == nullptr && this->mediaId_ == nullptr; };
      // fileInfoList Field Functions 
      bool hasFileInfoList() const { return this->fileInfoList_ != nullptr;};
      void deleteFileInfoList() { this->fileInfoList_ = nullptr;};
      inline const vector<MediaInfos::FileInfoList> & getFileInfoList() const { DARABONBA_PTR_GET_CONST(fileInfoList_, vector<MediaInfos::FileInfoList>) };
      inline vector<MediaInfos::FileInfoList> getFileInfoList() { DARABONBA_PTR_GET(fileInfoList_, vector<MediaInfos::FileInfoList>) };
      inline MediaInfos& setFileInfoList(const vector<MediaInfos::FileInfoList> & fileInfoList) { DARABONBA_PTR_SET_VALUE(fileInfoList_, fileInfoList) };
      inline MediaInfos& setFileInfoList(vector<MediaInfos::FileInfoList> && fileInfoList) { DARABONBA_PTR_SET_RVALUE(fileInfoList_, fileInfoList) };


      // mediaBasicInfo Field Functions 
      bool hasMediaBasicInfo() const { return this->mediaBasicInfo_ != nullptr;};
      void deleteMediaBasicInfo() { this->mediaBasicInfo_ = nullptr;};
      inline const MediaInfos::MediaBasicInfo & getMediaBasicInfo() const { DARABONBA_PTR_GET_CONST(mediaBasicInfo_, MediaInfos::MediaBasicInfo) };
      inline MediaInfos::MediaBasicInfo getMediaBasicInfo() { DARABONBA_PTR_GET(mediaBasicInfo_, MediaInfos::MediaBasicInfo) };
      inline MediaInfos& setMediaBasicInfo(const MediaInfos::MediaBasicInfo & mediaBasicInfo) { DARABONBA_PTR_SET_VALUE(mediaBasicInfo_, mediaBasicInfo) };
      inline MediaInfos& setMediaBasicInfo(MediaInfos::MediaBasicInfo && mediaBasicInfo) { DARABONBA_PTR_SET_RVALUE(mediaBasicInfo_, mediaBasicInfo) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline MediaInfos& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    protected:
      // The file information of the media asset.
      shared_ptr<vector<MediaInfos::FileInfoList>> fileInfoList_ {};
      // The basic information of the media asset.
      shared_ptr<MediaInfos::MediaBasicInfo> mediaBasicInfo_ {};
      // The ID of the media asset.
      shared_ptr<string> mediaId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->mediaInfos_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPublicMediaBasicInfosResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // mediaInfos Field Functions 
    bool hasMediaInfos() const { return this->mediaInfos_ != nullptr;};
    void deleteMediaInfos() { this->mediaInfos_ = nullptr;};
    inline const vector<ListPublicMediaBasicInfosResponseBody::MediaInfos> & getMediaInfos() const { DARABONBA_PTR_GET_CONST(mediaInfos_, vector<ListPublicMediaBasicInfosResponseBody::MediaInfos>) };
    inline vector<ListPublicMediaBasicInfosResponseBody::MediaInfos> getMediaInfos() { DARABONBA_PTR_GET(mediaInfos_, vector<ListPublicMediaBasicInfosResponseBody::MediaInfos>) };
    inline ListPublicMediaBasicInfosResponseBody& setMediaInfos(const vector<ListPublicMediaBasicInfosResponseBody::MediaInfos> & mediaInfos) { DARABONBA_PTR_SET_VALUE(mediaInfos_, mediaInfos) };
    inline ListPublicMediaBasicInfosResponseBody& setMediaInfos(vector<ListPublicMediaBasicInfosResponseBody::MediaInfos> && mediaInfos) { DARABONBA_PTR_SET_RVALUE(mediaInfos_, mediaInfos) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPublicMediaBasicInfosResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPublicMediaBasicInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListPublicMediaBasicInfosResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // The media assets that meet the specified conditions.
    shared_ptr<vector<ListPublicMediaBasicInfosResponseBody::MediaInfos>> mediaInfos_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of media assets that meet the specified conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
