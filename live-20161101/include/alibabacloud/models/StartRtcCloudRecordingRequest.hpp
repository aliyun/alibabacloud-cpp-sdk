// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartRtcCloudRecordingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRtcCloudRecordingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_TO_JSON(MixLayoutParams, mixLayoutParams_);
      DARABONBA_PTR_TO_JSON(MixTranscodeParams, mixTranscodeParams_);
      DARABONBA_PTR_TO_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_TO_JSON(NotifyFileUploadedFormat, notifyFileUploadedFormat_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(RecordParams, recordParams_);
      DARABONBA_PTR_TO_JSON(StorageParams, storageParams_);
      DARABONBA_PTR_TO_JSON(SubscribeParams, subscribeParams_);
    };
    friend void from_json(const Darabonba::Json& j, StartRtcCloudRecordingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_FROM_JSON(MixLayoutParams, mixLayoutParams_);
      DARABONBA_PTR_FROM_JSON(MixTranscodeParams, mixTranscodeParams_);
      DARABONBA_PTR_FROM_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_FROM_JSON(NotifyFileUploadedFormat, notifyFileUploadedFormat_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(RecordParams, recordParams_);
      DARABONBA_PTR_FROM_JSON(StorageParams, storageParams_);
      DARABONBA_PTR_FROM_JSON(SubscribeParams, subscribeParams_);
    };
    StartRtcCloudRecordingRequest() = default ;
    StartRtcCloudRecordingRequest(const StartRtcCloudRecordingRequest &) = default ;
    StartRtcCloudRecordingRequest(StartRtcCloudRecordingRequest &&) = default ;
    StartRtcCloudRecordingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRtcCloudRecordingRequest() = default ;
    StartRtcCloudRecordingRequest& operator=(const StartRtcCloudRecordingRequest &) = default ;
    StartRtcCloudRecordingRequest& operator=(StartRtcCloudRecordingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubscribeParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubscribeParams& obj) { 
        DARABONBA_PTR_TO_JSON(SubscribeUserIdList, subscribeUserIdList_);
      };
      friend void from_json(const Darabonba::Json& j, SubscribeParams& obj) { 
        DARABONBA_PTR_FROM_JSON(SubscribeUserIdList, subscribeUserIdList_);
      };
      SubscribeParams() = default ;
      SubscribeParams(const SubscribeParams &) = default ;
      SubscribeParams(SubscribeParams &&) = default ;
      SubscribeParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubscribeParams() = default ;
      SubscribeParams& operator=(const SubscribeParams &) = default ;
      SubscribeParams& operator=(SubscribeParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubscribeUserIdList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubscribeUserIdList& obj) { 
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(StreamType, streamType_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, SubscribeUserIdList& obj) { 
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        SubscribeUserIdList() = default ;
        SubscribeUserIdList(const SubscribeUserIdList &) = default ;
        SubscribeUserIdList(SubscribeUserIdList &&) = default ;
        SubscribeUserIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubscribeUserIdList() = default ;
        SubscribeUserIdList& operator=(const SubscribeUserIdList &) = default ;
        SubscribeUserIdList& operator=(SubscribeUserIdList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sourceType_ == nullptr
        && this->streamType_ == nullptr && this->userId_ == nullptr; };
        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline int32_t getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, 0) };
        inline SubscribeUserIdList& setSourceType(int32_t sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // streamType Field Functions 
        bool hasStreamType() const { return this->streamType_ != nullptr;};
        void deleteStreamType() { this->streamType_ = nullptr;};
        inline int32_t getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
        inline SubscribeUserIdList& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline SubscribeUserIdList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<int32_t> sourceType_ {};
        shared_ptr<int32_t> streamType_ {};
        // This parameter is required.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->subscribeUserIdList_ == nullptr; };
      // subscribeUserIdList Field Functions 
      bool hasSubscribeUserIdList() const { return this->subscribeUserIdList_ != nullptr;};
      void deleteSubscribeUserIdList() { this->subscribeUserIdList_ = nullptr;};
      inline const vector<SubscribeParams::SubscribeUserIdList> & getSubscribeUserIdList() const { DARABONBA_PTR_GET_CONST(subscribeUserIdList_, vector<SubscribeParams::SubscribeUserIdList>) };
      inline vector<SubscribeParams::SubscribeUserIdList> getSubscribeUserIdList() { DARABONBA_PTR_GET(subscribeUserIdList_, vector<SubscribeParams::SubscribeUserIdList>) };
      inline SubscribeParams& setSubscribeUserIdList(const vector<SubscribeParams::SubscribeUserIdList> & subscribeUserIdList) { DARABONBA_PTR_SET_VALUE(subscribeUserIdList_, subscribeUserIdList) };
      inline SubscribeParams& setSubscribeUserIdList(vector<SubscribeParams::SubscribeUserIdList> && subscribeUserIdList) { DARABONBA_PTR_SET_RVALUE(subscribeUserIdList_, subscribeUserIdList) };


    protected:
      // This parameter is required.
      shared_ptr<vector<SubscribeParams::SubscribeUserIdList>> subscribeUserIdList_ {};
    };

    class StorageParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StorageParams& obj) { 
        DARABONBA_PTR_TO_JSON(FileInfo, fileInfo_);
        DARABONBA_PTR_TO_JSON(OSSParams, OSSParams_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(VodParams, vodParams_);
      };
      friend void from_json(const Darabonba::Json& j, StorageParams& obj) { 
        DARABONBA_PTR_FROM_JSON(FileInfo, fileInfo_);
        DARABONBA_PTR_FROM_JSON(OSSParams, OSSParams_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(VodParams, vodParams_);
      };
      StorageParams() = default ;
      StorageParams(const StorageParams &) = default ;
      StorageParams(StorageParams &&) = default ;
      StorageParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StorageParams() = default ;
      StorageParams& operator=(const StorageParams &) = default ;
      StorageParams& operator=(StorageParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VodParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VodParams& obj) { 
          DARABONBA_PTR_TO_JSON(AutoCompose, autoCompose_);
          DARABONBA_PTR_TO_JSON(ComposeVodTranscodeGroupId, composeVodTranscodeGroupId_);
          DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_TO_JSON(VodTranscodeGroupId, vodTranscodeGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, VodParams& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoCompose, autoCompose_);
          DARABONBA_PTR_FROM_JSON(ComposeVodTranscodeGroupId, composeVodTranscodeGroupId_);
          DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_FROM_JSON(VodTranscodeGroupId, vodTranscodeGroupId_);
        };
        VodParams() = default ;
        VodParams(const VodParams &) = default ;
        VodParams(VodParams &&) = default ;
        VodParams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VodParams() = default ;
        VodParams& operator=(const VodParams &) = default ;
        VodParams& operator=(VodParams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoCompose_ == nullptr
        && this->composeVodTranscodeGroupId_ == nullptr && this->storageLocation_ == nullptr && this->vodTranscodeGroupId_ == nullptr; };
        // autoCompose Field Functions 
        bool hasAutoCompose() const { return this->autoCompose_ != nullptr;};
        void deleteAutoCompose() { this->autoCompose_ = nullptr;};
        inline int32_t getAutoCompose() const { DARABONBA_PTR_GET_DEFAULT(autoCompose_, 0) };
        inline VodParams& setAutoCompose(int32_t autoCompose) { DARABONBA_PTR_SET_VALUE(autoCompose_, autoCompose) };


        // composeVodTranscodeGroupId Field Functions 
        bool hasComposeVodTranscodeGroupId() const { return this->composeVodTranscodeGroupId_ != nullptr;};
        void deleteComposeVodTranscodeGroupId() { this->composeVodTranscodeGroupId_ = nullptr;};
        inline string getComposeVodTranscodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(composeVodTranscodeGroupId_, "") };
        inline VodParams& setComposeVodTranscodeGroupId(string composeVodTranscodeGroupId) { DARABONBA_PTR_SET_VALUE(composeVodTranscodeGroupId_, composeVodTranscodeGroupId) };


        // storageLocation Field Functions 
        bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
        void deleteStorageLocation() { this->storageLocation_ = nullptr;};
        inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
        inline VodParams& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


        // vodTranscodeGroupId Field Functions 
        bool hasVodTranscodeGroupId() const { return this->vodTranscodeGroupId_ != nullptr;};
        void deleteVodTranscodeGroupId() { this->vodTranscodeGroupId_ = nullptr;};
        inline string getVodTranscodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(vodTranscodeGroupId_, "") };
        inline VodParams& setVodTranscodeGroupId(string vodTranscodeGroupId) { DARABONBA_PTR_SET_VALUE(vodTranscodeGroupId_, vodTranscodeGroupId) };


      protected:
        shared_ptr<int32_t> autoCompose_ {};
        shared_ptr<string> composeVodTranscodeGroupId_ {};
        shared_ptr<string> storageLocation_ {};
        shared_ptr<string> vodTranscodeGroupId_ {};
      };

      class OSSParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OSSParams& obj) { 
          DARABONBA_PTR_TO_JSON(OSSBucket, OSSBucket_);
          DARABONBA_PTR_TO_JSON(OSSEndpoint, OSSEndpoint_);
        };
        friend void from_json(const Darabonba::Json& j, OSSParams& obj) { 
          DARABONBA_PTR_FROM_JSON(OSSBucket, OSSBucket_);
          DARABONBA_PTR_FROM_JSON(OSSEndpoint, OSSEndpoint_);
        };
        OSSParams() = default ;
        OSSParams(const OSSParams &) = default ;
        OSSParams(OSSParams &&) = default ;
        OSSParams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OSSParams() = default ;
        OSSParams& operator=(const OSSParams &) = default ;
        OSSParams& operator=(OSSParams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->OSSBucket_ == nullptr
        && this->OSSEndpoint_ == nullptr; };
        // OSSBucket Field Functions 
        bool hasOSSBucket() const { return this->OSSBucket_ != nullptr;};
        void deleteOSSBucket() { this->OSSBucket_ = nullptr;};
        inline string getOSSBucket() const { DARABONBA_PTR_GET_DEFAULT(OSSBucket_, "") };
        inline OSSParams& setOSSBucket(string OSSBucket) { DARABONBA_PTR_SET_VALUE(OSSBucket_, OSSBucket) };


        // OSSEndpoint Field Functions 
        bool hasOSSEndpoint() const { return this->OSSEndpoint_ != nullptr;};
        void deleteOSSEndpoint() { this->OSSEndpoint_ = nullptr;};
        inline string getOSSEndpoint() const { DARABONBA_PTR_GET_DEFAULT(OSSEndpoint_, "") };
        inline OSSParams& setOSSEndpoint(string OSSEndpoint) { DARABONBA_PTR_SET_VALUE(OSSEndpoint_, OSSEndpoint) };


      protected:
        // This parameter is required.
        shared_ptr<string> OSSBucket_ {};
        // This parameter is required.
        shared_ptr<string> OSSEndpoint_ {};
      };

      class FileInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileInfo& obj) { 
          DARABONBA_PTR_TO_JSON(FileNamePattern, fileNamePattern_);
          DARABONBA_PTR_TO_JSON(FilePathPrefix, filePathPrefix_);
          DARABONBA_PTR_TO_JSON(Format, format_);
          DARABONBA_PTR_TO_JSON(SliceDuration, sliceDuration_);
          DARABONBA_PTR_TO_JSON(SliceNamePattern, sliceNamePattern_);
        };
        friend void from_json(const Darabonba::Json& j, FileInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(FileNamePattern, fileNamePattern_);
          DARABONBA_PTR_FROM_JSON(FilePathPrefix, filePathPrefix_);
          DARABONBA_PTR_FROM_JSON(Format, format_);
          DARABONBA_PTR_FROM_JSON(SliceDuration, sliceDuration_);
          DARABONBA_PTR_FROM_JSON(SliceNamePattern, sliceNamePattern_);
        };
        FileInfo() = default ;
        FileInfo(const FileInfo &) = default ;
        FileInfo(FileInfo &&) = default ;
        FileInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileInfo() = default ;
        FileInfo& operator=(const FileInfo &) = default ;
        FileInfo& operator=(FileInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileNamePattern_ == nullptr
        && this->filePathPrefix_ == nullptr && this->format_ == nullptr && this->sliceDuration_ == nullptr && this->sliceNamePattern_ == nullptr; };
        // fileNamePattern Field Functions 
        bool hasFileNamePattern() const { return this->fileNamePattern_ != nullptr;};
        void deleteFileNamePattern() { this->fileNamePattern_ = nullptr;};
        inline string getFileNamePattern() const { DARABONBA_PTR_GET_DEFAULT(fileNamePattern_, "") };
        inline FileInfo& setFileNamePattern(string fileNamePattern) { DARABONBA_PTR_SET_VALUE(fileNamePattern_, fileNamePattern) };


        // filePathPrefix Field Functions 
        bool hasFilePathPrefix() const { return this->filePathPrefix_ != nullptr;};
        void deleteFilePathPrefix() { this->filePathPrefix_ = nullptr;};
        inline const vector<string> & getFilePathPrefix() const { DARABONBA_PTR_GET_CONST(filePathPrefix_, vector<string>) };
        inline vector<string> getFilePathPrefix() { DARABONBA_PTR_GET(filePathPrefix_, vector<string>) };
        inline FileInfo& setFilePathPrefix(const vector<string> & filePathPrefix) { DARABONBA_PTR_SET_VALUE(filePathPrefix_, filePathPrefix) };
        inline FileInfo& setFilePathPrefix(vector<string> && filePathPrefix) { DARABONBA_PTR_SET_RVALUE(filePathPrefix_, filePathPrefix) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline FileInfo& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // sliceDuration Field Functions 
        bool hasSliceDuration() const { return this->sliceDuration_ != nullptr;};
        void deleteSliceDuration() { this->sliceDuration_ = nullptr;};
        inline int64_t getSliceDuration() const { DARABONBA_PTR_GET_DEFAULT(sliceDuration_, 0L) };
        inline FileInfo& setSliceDuration(int64_t sliceDuration) { DARABONBA_PTR_SET_VALUE(sliceDuration_, sliceDuration) };


        // sliceNamePattern Field Functions 
        bool hasSliceNamePattern() const { return this->sliceNamePattern_ != nullptr;};
        void deleteSliceNamePattern() { this->sliceNamePattern_ = nullptr;};
        inline string getSliceNamePattern() const { DARABONBA_PTR_GET_DEFAULT(sliceNamePattern_, "") };
        inline FileInfo& setSliceNamePattern(string sliceNamePattern) { DARABONBA_PTR_SET_VALUE(sliceNamePattern_, sliceNamePattern) };


      protected:
        shared_ptr<string> fileNamePattern_ {};
        shared_ptr<vector<string>> filePathPrefix_ {};
        // This parameter is required.
        shared_ptr<string> format_ {};
        shared_ptr<int64_t> sliceDuration_ {};
        shared_ptr<string> sliceNamePattern_ {};
      };

      virtual bool empty() const override { return this->fileInfo_ == nullptr
        && this->OSSParams_ == nullptr && this->storageType_ == nullptr && this->vodParams_ == nullptr; };
      // fileInfo Field Functions 
      bool hasFileInfo() const { return this->fileInfo_ != nullptr;};
      void deleteFileInfo() { this->fileInfo_ = nullptr;};
      inline const vector<StorageParams::FileInfo> & getFileInfo() const { DARABONBA_PTR_GET_CONST(fileInfo_, vector<StorageParams::FileInfo>) };
      inline vector<StorageParams::FileInfo> getFileInfo() { DARABONBA_PTR_GET(fileInfo_, vector<StorageParams::FileInfo>) };
      inline StorageParams& setFileInfo(const vector<StorageParams::FileInfo> & fileInfo) { DARABONBA_PTR_SET_VALUE(fileInfo_, fileInfo) };
      inline StorageParams& setFileInfo(vector<StorageParams::FileInfo> && fileInfo) { DARABONBA_PTR_SET_RVALUE(fileInfo_, fileInfo) };


      // OSSParams Field Functions 
      bool hasOSSParams() const { return this->OSSParams_ != nullptr;};
      void deleteOSSParams() { this->OSSParams_ = nullptr;};
      inline const StorageParams::OSSParams & getOSSParams() const { DARABONBA_PTR_GET_CONST(OSSParams_, StorageParams::OSSParams) };
      inline StorageParams::OSSParams getOSSParams() { DARABONBA_PTR_GET(OSSParams_, StorageParams::OSSParams) };
      inline StorageParams& setOSSParams(const StorageParams::OSSParams & oSSParams) { DARABONBA_PTR_SET_VALUE(OSSParams_, oSSParams) };
      inline StorageParams& setOSSParams(StorageParams::OSSParams && oSSParams) { DARABONBA_PTR_SET_RVALUE(OSSParams_, oSSParams) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline int32_t getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, 0) };
      inline StorageParams& setStorageType(int32_t storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // vodParams Field Functions 
      bool hasVodParams() const { return this->vodParams_ != nullptr;};
      void deleteVodParams() { this->vodParams_ = nullptr;};
      inline const StorageParams::VodParams & getVodParams() const { DARABONBA_PTR_GET_CONST(vodParams_, StorageParams::VodParams) };
      inline StorageParams::VodParams getVodParams() { DARABONBA_PTR_GET(vodParams_, StorageParams::VodParams) };
      inline StorageParams& setVodParams(const StorageParams::VodParams & vodParams) { DARABONBA_PTR_SET_VALUE(vodParams_, vodParams) };
      inline StorageParams& setVodParams(StorageParams::VodParams && vodParams) { DARABONBA_PTR_SET_RVALUE(vodParams_, vodParams) };


    protected:
      shared_ptr<vector<StorageParams::FileInfo>> fileInfo_ {};
      shared_ptr<StorageParams::OSSParams> OSSParams_ {};
      // This parameter is required.
      shared_ptr<int32_t> storageType_ {};
      shared_ptr<StorageParams::VodParams> vodParams_ {};
    };

    class RecordParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordParams& obj) { 
        DARABONBA_PTR_TO_JSON(MaxFileDuration, maxFileDuration_);
        DARABONBA_PTR_TO_JSON(RecordMode, recordMode_);
        DARABONBA_PTR_TO_JSON(StreamType, streamType_);
      };
      friend void from_json(const Darabonba::Json& j, RecordParams& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxFileDuration, maxFileDuration_);
        DARABONBA_PTR_FROM_JSON(RecordMode, recordMode_);
        DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
      };
      RecordParams() = default ;
      RecordParams(const RecordParams &) = default ;
      RecordParams(RecordParams &&) = default ;
      RecordParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordParams() = default ;
      RecordParams& operator=(const RecordParams &) = default ;
      RecordParams& operator=(RecordParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->maxFileDuration_ == nullptr
        && this->recordMode_ == nullptr && this->streamType_ == nullptr; };
      // maxFileDuration Field Functions 
      bool hasMaxFileDuration() const { return this->maxFileDuration_ != nullptr;};
      void deleteMaxFileDuration() { this->maxFileDuration_ = nullptr;};
      inline int64_t getMaxFileDuration() const { DARABONBA_PTR_GET_DEFAULT(maxFileDuration_, 0L) };
      inline RecordParams& setMaxFileDuration(int64_t maxFileDuration) { DARABONBA_PTR_SET_VALUE(maxFileDuration_, maxFileDuration) };


      // recordMode Field Functions 
      bool hasRecordMode() const { return this->recordMode_ != nullptr;};
      void deleteRecordMode() { this->recordMode_ = nullptr;};
      inline int32_t getRecordMode() const { DARABONBA_PTR_GET_DEFAULT(recordMode_, 0) };
      inline RecordParams& setRecordMode(int32_t recordMode) { DARABONBA_PTR_SET_VALUE(recordMode_, recordMode) };


      // streamType Field Functions 
      bool hasStreamType() const { return this->streamType_ != nullptr;};
      void deleteStreamType() { this->streamType_ = nullptr;};
      inline int32_t getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
      inline RecordParams& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    protected:
      shared_ptr<int64_t> maxFileDuration_ {};
      // This parameter is required.
      shared_ptr<int32_t> recordMode_ {};
      shared_ptr<int32_t> streamType_ {};
    };

    class MixTranscodeParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MixTranscodeParams& obj) { 
        DARABONBA_PTR_TO_JSON(AudioBitrate, audioBitrate_);
        DARABONBA_PTR_TO_JSON(AudioChannels, audioChannels_);
        DARABONBA_PTR_TO_JSON(AudioSampleRate, audioSampleRate_);
        DARABONBA_PTR_TO_JSON(FrameFillType, frameFillType_);
        DARABONBA_PTR_TO_JSON(VideoBitrate, videoBitrate_);
        DARABONBA_PTR_TO_JSON(VideoCodec, videoCodec_);
        DARABONBA_PTR_TO_JSON(VideoFramerate, videoFramerate_);
        DARABONBA_PTR_TO_JSON(VideoGop, videoGop_);
        DARABONBA_PTR_TO_JSON(VideoHeight, videoHeight_);
        DARABONBA_PTR_TO_JSON(VideoWidth, videoWidth_);
      };
      friend void from_json(const Darabonba::Json& j, MixTranscodeParams& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioBitrate, audioBitrate_);
        DARABONBA_PTR_FROM_JSON(AudioChannels, audioChannels_);
        DARABONBA_PTR_FROM_JSON(AudioSampleRate, audioSampleRate_);
        DARABONBA_PTR_FROM_JSON(FrameFillType, frameFillType_);
        DARABONBA_PTR_FROM_JSON(VideoBitrate, videoBitrate_);
        DARABONBA_PTR_FROM_JSON(VideoCodec, videoCodec_);
        DARABONBA_PTR_FROM_JSON(VideoFramerate, videoFramerate_);
        DARABONBA_PTR_FROM_JSON(VideoGop, videoGop_);
        DARABONBA_PTR_FROM_JSON(VideoHeight, videoHeight_);
        DARABONBA_PTR_FROM_JSON(VideoWidth, videoWidth_);
      };
      MixTranscodeParams() = default ;
      MixTranscodeParams(const MixTranscodeParams &) = default ;
      MixTranscodeParams(MixTranscodeParams &&) = default ;
      MixTranscodeParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MixTranscodeParams() = default ;
      MixTranscodeParams& operator=(const MixTranscodeParams &) = default ;
      MixTranscodeParams& operator=(MixTranscodeParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->audioBitrate_ == nullptr
        && this->audioChannels_ == nullptr && this->audioSampleRate_ == nullptr && this->frameFillType_ == nullptr && this->videoBitrate_ == nullptr && this->videoCodec_ == nullptr
        && this->videoFramerate_ == nullptr && this->videoGop_ == nullptr && this->videoHeight_ == nullptr && this->videoWidth_ == nullptr; };
      // audioBitrate Field Functions 
      bool hasAudioBitrate() const { return this->audioBitrate_ != nullptr;};
      void deleteAudioBitrate() { this->audioBitrate_ = nullptr;};
      inline int64_t getAudioBitrate() const { DARABONBA_PTR_GET_DEFAULT(audioBitrate_, 0L) };
      inline MixTranscodeParams& setAudioBitrate(int64_t audioBitrate) { DARABONBA_PTR_SET_VALUE(audioBitrate_, audioBitrate) };


      // audioChannels Field Functions 
      bool hasAudioChannels() const { return this->audioChannels_ != nullptr;};
      void deleteAudioChannels() { this->audioChannels_ = nullptr;};
      inline int32_t getAudioChannels() const { DARABONBA_PTR_GET_DEFAULT(audioChannels_, 0) };
      inline MixTranscodeParams& setAudioChannels(int32_t audioChannels) { DARABONBA_PTR_SET_VALUE(audioChannels_, audioChannels) };


      // audioSampleRate Field Functions 
      bool hasAudioSampleRate() const { return this->audioSampleRate_ != nullptr;};
      void deleteAudioSampleRate() { this->audioSampleRate_ = nullptr;};
      inline int64_t getAudioSampleRate() const { DARABONBA_PTR_GET_DEFAULT(audioSampleRate_, 0L) };
      inline MixTranscodeParams& setAudioSampleRate(int64_t audioSampleRate) { DARABONBA_PTR_SET_VALUE(audioSampleRate_, audioSampleRate) };


      // frameFillType Field Functions 
      bool hasFrameFillType() const { return this->frameFillType_ != nullptr;};
      void deleteFrameFillType() { this->frameFillType_ = nullptr;};
      inline int32_t getFrameFillType() const { DARABONBA_PTR_GET_DEFAULT(frameFillType_, 0) };
      inline MixTranscodeParams& setFrameFillType(int32_t frameFillType) { DARABONBA_PTR_SET_VALUE(frameFillType_, frameFillType) };


      // videoBitrate Field Functions 
      bool hasVideoBitrate() const { return this->videoBitrate_ != nullptr;};
      void deleteVideoBitrate() { this->videoBitrate_ = nullptr;};
      inline int32_t getVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(videoBitrate_, 0) };
      inline MixTranscodeParams& setVideoBitrate(int32_t videoBitrate) { DARABONBA_PTR_SET_VALUE(videoBitrate_, videoBitrate) };


      // videoCodec Field Functions 
      bool hasVideoCodec() const { return this->videoCodec_ != nullptr;};
      void deleteVideoCodec() { this->videoCodec_ = nullptr;};
      inline string getVideoCodec() const { DARABONBA_PTR_GET_DEFAULT(videoCodec_, "") };
      inline MixTranscodeParams& setVideoCodec(string videoCodec) { DARABONBA_PTR_SET_VALUE(videoCodec_, videoCodec) };


      // videoFramerate Field Functions 
      bool hasVideoFramerate() const { return this->videoFramerate_ != nullptr;};
      void deleteVideoFramerate() { this->videoFramerate_ = nullptr;};
      inline int32_t getVideoFramerate() const { DARABONBA_PTR_GET_DEFAULT(videoFramerate_, 0) };
      inline MixTranscodeParams& setVideoFramerate(int32_t videoFramerate) { DARABONBA_PTR_SET_VALUE(videoFramerate_, videoFramerate) };


      // videoGop Field Functions 
      bool hasVideoGop() const { return this->videoGop_ != nullptr;};
      void deleteVideoGop() { this->videoGop_ = nullptr;};
      inline int32_t getVideoGop() const { DARABONBA_PTR_GET_DEFAULT(videoGop_, 0) };
      inline MixTranscodeParams& setVideoGop(int32_t videoGop) { DARABONBA_PTR_SET_VALUE(videoGop_, videoGop) };


      // videoHeight Field Functions 
      bool hasVideoHeight() const { return this->videoHeight_ != nullptr;};
      void deleteVideoHeight() { this->videoHeight_ = nullptr;};
      inline int32_t getVideoHeight() const { DARABONBA_PTR_GET_DEFAULT(videoHeight_, 0) };
      inline MixTranscodeParams& setVideoHeight(int32_t videoHeight) { DARABONBA_PTR_SET_VALUE(videoHeight_, videoHeight) };


      // videoWidth Field Functions 
      bool hasVideoWidth() const { return this->videoWidth_ != nullptr;};
      void deleteVideoWidth() { this->videoWidth_ = nullptr;};
      inline int32_t getVideoWidth() const { DARABONBA_PTR_GET_DEFAULT(videoWidth_, 0) };
      inline MixTranscodeParams& setVideoWidth(int32_t videoWidth) { DARABONBA_PTR_SET_VALUE(videoWidth_, videoWidth) };


    protected:
      // This parameter is required.
      shared_ptr<int64_t> audioBitrate_ {};
      // This parameter is required.
      shared_ptr<int32_t> audioChannels_ {};
      // This parameter is required.
      shared_ptr<int64_t> audioSampleRate_ {};
      shared_ptr<int32_t> frameFillType_ {};
      shared_ptr<int32_t> videoBitrate_ {};
      shared_ptr<string> videoCodec_ {};
      shared_ptr<int32_t> videoFramerate_ {};
      shared_ptr<int32_t> videoGop_ {};
      shared_ptr<int32_t> videoHeight_ {};
      shared_ptr<int32_t> videoWidth_ {};
    };

    class MixLayoutParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MixLayoutParams& obj) { 
        DARABONBA_PTR_TO_JSON(MixBackground, mixBackground_);
        DARABONBA_PTR_TO_JSON(UserPanes, userPanes_);
      };
      friend void from_json(const Darabonba::Json& j, MixLayoutParams& obj) { 
        DARABONBA_PTR_FROM_JSON(MixBackground, mixBackground_);
        DARABONBA_PTR_FROM_JSON(UserPanes, userPanes_);
      };
      MixLayoutParams() = default ;
      MixLayoutParams(const MixLayoutParams &) = default ;
      MixLayoutParams(MixLayoutParams &&) = default ;
      MixLayoutParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MixLayoutParams() = default ;
      MixLayoutParams& operator=(const MixLayoutParams &) = default ;
      MixLayoutParams& operator=(MixLayoutParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserPanes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserPanes& obj) { 
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(SubBackground, subBackground_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(Width, width_);
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
          DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
        };
        friend void from_json(const Darabonba::Json& j, UserPanes& obj) { 
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(SubBackground, subBackground_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
          DARABONBA_PTR_FROM_JSON(X, x_);
          DARABONBA_PTR_FROM_JSON(Y, y_);
          DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
        };
        UserPanes() = default ;
        UserPanes(const UserPanes &) = default ;
        UserPanes(UserPanes &&) = default ;
        UserPanes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserPanes() = default ;
        UserPanes& operator=(const UserPanes &) = default ;
        UserPanes& operator=(UserPanes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SubBackground : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubBackground& obj) { 
            DARABONBA_PTR_TO_JSON(RenderMode, renderMode_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, SubBackground& obj) { 
            DARABONBA_PTR_FROM_JSON(RenderMode, renderMode_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          SubBackground() = default ;
          SubBackground(const SubBackground &) = default ;
          SubBackground(SubBackground &&) = default ;
          SubBackground(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubBackground() = default ;
          SubBackground& operator=(const SubBackground &) = default ;
          SubBackground& operator=(SubBackground &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->renderMode_ == nullptr
        && this->url_ == nullptr; };
          // renderMode Field Functions 
          bool hasRenderMode() const { return this->renderMode_ != nullptr;};
          void deleteRenderMode() { this->renderMode_ = nullptr;};
          inline int32_t getRenderMode() const { DARABONBA_PTR_GET_DEFAULT(renderMode_, 0) };
          inline SubBackground& setRenderMode(int32_t renderMode) { DARABONBA_PTR_SET_VALUE(renderMode_, renderMode) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline SubBackground& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<int32_t> renderMode_ {};
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->height_ == nullptr
        && this->sourceType_ == nullptr && this->subBackground_ == nullptr && this->userId_ == nullptr && this->width_ == nullptr && this->x_ == nullptr
        && this->y_ == nullptr && this->ZOrder_ == nullptr; };
        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
        inline UserPanes& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline int32_t getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, 0) };
        inline UserPanes& setSourceType(int32_t sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // subBackground Field Functions 
        bool hasSubBackground() const { return this->subBackground_ != nullptr;};
        void deleteSubBackground() { this->subBackground_ = nullptr;};
        inline const UserPanes::SubBackground & getSubBackground() const { DARABONBA_PTR_GET_CONST(subBackground_, UserPanes::SubBackground) };
        inline UserPanes::SubBackground getSubBackground() { DARABONBA_PTR_GET(subBackground_, UserPanes::SubBackground) };
        inline UserPanes& setSubBackground(const UserPanes::SubBackground & subBackground) { DARABONBA_PTR_SET_VALUE(subBackground_, subBackground) };
        inline UserPanes& setSubBackground(UserPanes::SubBackground && subBackground) { DARABONBA_PTR_SET_RVALUE(subBackground_, subBackground) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserPanes& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
        inline UserPanes& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline string getX() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
        inline UserPanes& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline string getY() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
        inline UserPanes& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


        // ZOrder Field Functions 
        bool hasZOrder() const { return this->ZOrder_ != nullptr;};
        void deleteZOrder() { this->ZOrder_ = nullptr;};
        inline int32_t getZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
        inline UserPanes& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


      protected:
        shared_ptr<string> height_ {};
        shared_ptr<int32_t> sourceType_ {};
        shared_ptr<UserPanes::SubBackground> subBackground_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> width_ {};
        shared_ptr<string> x_ {};
        shared_ptr<string> y_ {};
        shared_ptr<int32_t> ZOrder_ {};
      };

      class MixBackground : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MixBackground& obj) { 
          DARABONBA_PTR_TO_JSON(RenderMode, renderMode_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, MixBackground& obj) { 
          DARABONBA_PTR_FROM_JSON(RenderMode, renderMode_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        MixBackground() = default ;
        MixBackground(const MixBackground &) = default ;
        MixBackground(MixBackground &&) = default ;
        MixBackground(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MixBackground() = default ;
        MixBackground& operator=(const MixBackground &) = default ;
        MixBackground& operator=(MixBackground &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->renderMode_ == nullptr
        && this->url_ == nullptr; };
        // renderMode Field Functions 
        bool hasRenderMode() const { return this->renderMode_ != nullptr;};
        void deleteRenderMode() { this->renderMode_ = nullptr;};
        inline int32_t getRenderMode() const { DARABONBA_PTR_GET_DEFAULT(renderMode_, 0) };
        inline MixBackground& setRenderMode(int32_t renderMode) { DARABONBA_PTR_SET_VALUE(renderMode_, renderMode) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline MixBackground& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<int32_t> renderMode_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->mixBackground_ == nullptr
        && this->userPanes_ == nullptr; };
      // mixBackground Field Functions 
      bool hasMixBackground() const { return this->mixBackground_ != nullptr;};
      void deleteMixBackground() { this->mixBackground_ = nullptr;};
      inline const MixLayoutParams::MixBackground & getMixBackground() const { DARABONBA_PTR_GET_CONST(mixBackground_, MixLayoutParams::MixBackground) };
      inline MixLayoutParams::MixBackground getMixBackground() { DARABONBA_PTR_GET(mixBackground_, MixLayoutParams::MixBackground) };
      inline MixLayoutParams& setMixBackground(const MixLayoutParams::MixBackground & mixBackground) { DARABONBA_PTR_SET_VALUE(mixBackground_, mixBackground) };
      inline MixLayoutParams& setMixBackground(MixLayoutParams::MixBackground && mixBackground) { DARABONBA_PTR_SET_RVALUE(mixBackground_, mixBackground) };


      // userPanes Field Functions 
      bool hasUserPanes() const { return this->userPanes_ != nullptr;};
      void deleteUserPanes() { this->userPanes_ = nullptr;};
      inline const vector<MixLayoutParams::UserPanes> & getUserPanes() const { DARABONBA_PTR_GET_CONST(userPanes_, vector<MixLayoutParams::UserPanes>) };
      inline vector<MixLayoutParams::UserPanes> getUserPanes() { DARABONBA_PTR_GET(userPanes_, vector<MixLayoutParams::UserPanes>) };
      inline MixLayoutParams& setUserPanes(const vector<MixLayoutParams::UserPanes> & userPanes) { DARABONBA_PTR_SET_VALUE(userPanes_, userPanes) };
      inline MixLayoutParams& setUserPanes(vector<MixLayoutParams::UserPanes> && userPanes) { DARABONBA_PTR_SET_RVALUE(userPanes_, userPanes) };


    protected:
      shared_ptr<MixLayoutParams::MixBackground> mixBackground_ {};
      shared_ptr<vector<MixLayoutParams::UserPanes>> userPanes_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->channelId_ == nullptr && this->maxIdleTime_ == nullptr && this->mixLayoutParams_ == nullptr && this->mixTranscodeParams_ == nullptr && this->notifyAuthKey_ == nullptr
        && this->notifyFileUploadedFormat_ == nullptr && this->notifyUrl_ == nullptr && this->recordParams_ == nullptr && this->storageParams_ == nullptr && this->subscribeParams_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartRtcCloudRecordingRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartRtcCloudRecordingRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // maxIdleTime Field Functions 
    bool hasMaxIdleTime() const { return this->maxIdleTime_ != nullptr;};
    void deleteMaxIdleTime() { this->maxIdleTime_ = nullptr;};
    inline int64_t getMaxIdleTime() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTime_, 0L) };
    inline StartRtcCloudRecordingRequest& setMaxIdleTime(int64_t maxIdleTime) { DARABONBA_PTR_SET_VALUE(maxIdleTime_, maxIdleTime) };


    // mixLayoutParams Field Functions 
    bool hasMixLayoutParams() const { return this->mixLayoutParams_ != nullptr;};
    void deleteMixLayoutParams() { this->mixLayoutParams_ = nullptr;};
    inline const StartRtcCloudRecordingRequest::MixLayoutParams & getMixLayoutParams() const { DARABONBA_PTR_GET_CONST(mixLayoutParams_, StartRtcCloudRecordingRequest::MixLayoutParams) };
    inline StartRtcCloudRecordingRequest::MixLayoutParams getMixLayoutParams() { DARABONBA_PTR_GET(mixLayoutParams_, StartRtcCloudRecordingRequest::MixLayoutParams) };
    inline StartRtcCloudRecordingRequest& setMixLayoutParams(const StartRtcCloudRecordingRequest::MixLayoutParams & mixLayoutParams) { DARABONBA_PTR_SET_VALUE(mixLayoutParams_, mixLayoutParams) };
    inline StartRtcCloudRecordingRequest& setMixLayoutParams(StartRtcCloudRecordingRequest::MixLayoutParams && mixLayoutParams) { DARABONBA_PTR_SET_RVALUE(mixLayoutParams_, mixLayoutParams) };


    // mixTranscodeParams Field Functions 
    bool hasMixTranscodeParams() const { return this->mixTranscodeParams_ != nullptr;};
    void deleteMixTranscodeParams() { this->mixTranscodeParams_ = nullptr;};
    inline const StartRtcCloudRecordingRequest::MixTranscodeParams & getMixTranscodeParams() const { DARABONBA_PTR_GET_CONST(mixTranscodeParams_, StartRtcCloudRecordingRequest::MixTranscodeParams) };
    inline StartRtcCloudRecordingRequest::MixTranscodeParams getMixTranscodeParams() { DARABONBA_PTR_GET(mixTranscodeParams_, StartRtcCloudRecordingRequest::MixTranscodeParams) };
    inline StartRtcCloudRecordingRequest& setMixTranscodeParams(const StartRtcCloudRecordingRequest::MixTranscodeParams & mixTranscodeParams) { DARABONBA_PTR_SET_VALUE(mixTranscodeParams_, mixTranscodeParams) };
    inline StartRtcCloudRecordingRequest& setMixTranscodeParams(StartRtcCloudRecordingRequest::MixTranscodeParams && mixTranscodeParams) { DARABONBA_PTR_SET_RVALUE(mixTranscodeParams_, mixTranscodeParams) };


    // notifyAuthKey Field Functions 
    bool hasNotifyAuthKey() const { return this->notifyAuthKey_ != nullptr;};
    void deleteNotifyAuthKey() { this->notifyAuthKey_ = nullptr;};
    inline string getNotifyAuthKey() const { DARABONBA_PTR_GET_DEFAULT(notifyAuthKey_, "") };
    inline StartRtcCloudRecordingRequest& setNotifyAuthKey(string notifyAuthKey) { DARABONBA_PTR_SET_VALUE(notifyAuthKey_, notifyAuthKey) };


    // notifyFileUploadedFormat Field Functions 
    bool hasNotifyFileUploadedFormat() const { return this->notifyFileUploadedFormat_ != nullptr;};
    void deleteNotifyFileUploadedFormat() { this->notifyFileUploadedFormat_ = nullptr;};
    inline const vector<string> & getNotifyFileUploadedFormat() const { DARABONBA_PTR_GET_CONST(notifyFileUploadedFormat_, vector<string>) };
    inline vector<string> getNotifyFileUploadedFormat() { DARABONBA_PTR_GET(notifyFileUploadedFormat_, vector<string>) };
    inline StartRtcCloudRecordingRequest& setNotifyFileUploadedFormat(const vector<string> & notifyFileUploadedFormat) { DARABONBA_PTR_SET_VALUE(notifyFileUploadedFormat_, notifyFileUploadedFormat) };
    inline StartRtcCloudRecordingRequest& setNotifyFileUploadedFormat(vector<string> && notifyFileUploadedFormat) { DARABONBA_PTR_SET_RVALUE(notifyFileUploadedFormat_, notifyFileUploadedFormat) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string getNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline StartRtcCloudRecordingRequest& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // recordParams Field Functions 
    bool hasRecordParams() const { return this->recordParams_ != nullptr;};
    void deleteRecordParams() { this->recordParams_ = nullptr;};
    inline const StartRtcCloudRecordingRequest::RecordParams & getRecordParams() const { DARABONBA_PTR_GET_CONST(recordParams_, StartRtcCloudRecordingRequest::RecordParams) };
    inline StartRtcCloudRecordingRequest::RecordParams getRecordParams() { DARABONBA_PTR_GET(recordParams_, StartRtcCloudRecordingRequest::RecordParams) };
    inline StartRtcCloudRecordingRequest& setRecordParams(const StartRtcCloudRecordingRequest::RecordParams & recordParams) { DARABONBA_PTR_SET_VALUE(recordParams_, recordParams) };
    inline StartRtcCloudRecordingRequest& setRecordParams(StartRtcCloudRecordingRequest::RecordParams && recordParams) { DARABONBA_PTR_SET_RVALUE(recordParams_, recordParams) };


    // storageParams Field Functions 
    bool hasStorageParams() const { return this->storageParams_ != nullptr;};
    void deleteStorageParams() { this->storageParams_ = nullptr;};
    inline const StartRtcCloudRecordingRequest::StorageParams & getStorageParams() const { DARABONBA_PTR_GET_CONST(storageParams_, StartRtcCloudRecordingRequest::StorageParams) };
    inline StartRtcCloudRecordingRequest::StorageParams getStorageParams() { DARABONBA_PTR_GET(storageParams_, StartRtcCloudRecordingRequest::StorageParams) };
    inline StartRtcCloudRecordingRequest& setStorageParams(const StartRtcCloudRecordingRequest::StorageParams & storageParams) { DARABONBA_PTR_SET_VALUE(storageParams_, storageParams) };
    inline StartRtcCloudRecordingRequest& setStorageParams(StartRtcCloudRecordingRequest::StorageParams && storageParams) { DARABONBA_PTR_SET_RVALUE(storageParams_, storageParams) };


    // subscribeParams Field Functions 
    bool hasSubscribeParams() const { return this->subscribeParams_ != nullptr;};
    void deleteSubscribeParams() { this->subscribeParams_ = nullptr;};
    inline const StartRtcCloudRecordingRequest::SubscribeParams & getSubscribeParams() const { DARABONBA_PTR_GET_CONST(subscribeParams_, StartRtcCloudRecordingRequest::SubscribeParams) };
    inline StartRtcCloudRecordingRequest::SubscribeParams getSubscribeParams() { DARABONBA_PTR_GET(subscribeParams_, StartRtcCloudRecordingRequest::SubscribeParams) };
    inline StartRtcCloudRecordingRequest& setSubscribeParams(const StartRtcCloudRecordingRequest::SubscribeParams & subscribeParams) { DARABONBA_PTR_SET_VALUE(subscribeParams_, subscribeParams) };
    inline StartRtcCloudRecordingRequest& setSubscribeParams(StartRtcCloudRecordingRequest::SubscribeParams && subscribeParams) { DARABONBA_PTR_SET_RVALUE(subscribeParams_, subscribeParams) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    shared_ptr<int64_t> maxIdleTime_ {};
    shared_ptr<StartRtcCloudRecordingRequest::MixLayoutParams> mixLayoutParams_ {};
    shared_ptr<StartRtcCloudRecordingRequest::MixTranscodeParams> mixTranscodeParams_ {};
    shared_ptr<string> notifyAuthKey_ {};
    shared_ptr<vector<string>> notifyFileUploadedFormat_ {};
    shared_ptr<string> notifyUrl_ {};
    // This parameter is required.
    shared_ptr<StartRtcCloudRecordingRequest::RecordParams> recordParams_ {};
    // This parameter is required.
    shared_ptr<StartRtcCloudRecordingRequest::StorageParams> storageParams_ {};
    // This parameter is required.
    shared_ptr<StartRtcCloudRecordingRequest::SubscribeParams> subscribeParams_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
