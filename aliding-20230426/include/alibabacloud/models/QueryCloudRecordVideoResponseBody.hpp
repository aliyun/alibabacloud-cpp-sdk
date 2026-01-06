// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLOUDRECORDVIDEORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLOUDRECORDVIDEORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryCloudRecordVideoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCloudRecordVideoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(videoList, videoList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCloudRecordVideoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(videoList, videoList_);
    };
    QueryCloudRecordVideoResponseBody() = default ;
    QueryCloudRecordVideoResponseBody(const QueryCloudRecordVideoResponseBody &) = default ;
    QueryCloudRecordVideoResponseBody(QueryCloudRecordVideoResponseBody &&) = default ;
    QueryCloudRecordVideoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCloudRecordVideoResponseBody() = default ;
    QueryCloudRecordVideoResponseBody& operator=(const QueryCloudRecordVideoResponseBody &) = default ;
    QueryCloudRecordVideoResponseBody& operator=(QueryCloudRecordVideoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VideoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VideoList& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(RecordId, recordId_);
        DARABONBA_PTR_TO_JSON(RecordType, recordType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, VideoList& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
        DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      VideoList() = default ;
      VideoList(const VideoList &) = default ;
      VideoList(VideoList &&) = default ;
      VideoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VideoList() = default ;
      VideoList& operator=(const VideoList &) = default ;
      VideoList& operator=(VideoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->duration_ == nullptr
        && this->endTime_ == nullptr && this->fileSize_ == nullptr && this->mediaId_ == nullptr && this->recordId_ == nullptr && this->recordType_ == nullptr
        && this->regionId_ == nullptr && this->startTime_ == nullptr && this->userId_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline VideoList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline VideoList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
      inline VideoList& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline VideoList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // recordId Field Functions 
      bool hasRecordId() const { return this->recordId_ != nullptr;};
      void deleteRecordId() { this->recordId_ = nullptr;};
      inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
      inline VideoList& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


      // recordType Field Functions 
      bool hasRecordType() const { return this->recordType_ != nullptr;};
      void deleteRecordType() { this->recordType_ = nullptr;};
      inline int64_t getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, 0L) };
      inline VideoList& setRecordType(int64_t recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline VideoList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline VideoList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline VideoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<int64_t> duration_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<int64_t> fileSize_ {};
      shared_ptr<string> mediaId_ {};
      shared_ptr<string> recordId_ {};
      shared_ptr<int64_t> recordType_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->videoList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCloudRecordVideoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // videoList Field Functions 
    bool hasVideoList() const { return this->videoList_ != nullptr;};
    void deleteVideoList() { this->videoList_ = nullptr;};
    inline const vector<QueryCloudRecordVideoResponseBody::VideoList> & getVideoList() const { DARABONBA_PTR_GET_CONST(videoList_, vector<QueryCloudRecordVideoResponseBody::VideoList>) };
    inline vector<QueryCloudRecordVideoResponseBody::VideoList> getVideoList() { DARABONBA_PTR_GET(videoList_, vector<QueryCloudRecordVideoResponseBody::VideoList>) };
    inline QueryCloudRecordVideoResponseBody& setVideoList(const vector<QueryCloudRecordVideoResponseBody::VideoList> & videoList) { DARABONBA_PTR_SET_VALUE(videoList_, videoList) };
    inline QueryCloudRecordVideoResponseBody& setVideoList(vector<QueryCloudRecordVideoResponseBody::VideoList> && videoList) { DARABONBA_PTR_SET_RVALUE(videoList_, videoList) };


  protected:
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<QueryCloudRecordVideoResponseBody::VideoList>> videoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
