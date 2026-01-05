// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMRECORDCONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMRECORDCONTENTRESPONSEBODY_HPP_
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
  class DescribeLiveStreamRecordContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamRecordContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordContentInfoList, recordContentInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamRecordContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordContentInfoList, recordContentInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveStreamRecordContentResponseBody() = default ;
    DescribeLiveStreamRecordContentResponseBody(const DescribeLiveStreamRecordContentResponseBody &) = default ;
    DescribeLiveStreamRecordContentResponseBody(DescribeLiveStreamRecordContentResponseBody &&) = default ;
    DescribeLiveStreamRecordContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamRecordContentResponseBody() = default ;
    DescribeLiveStreamRecordContentResponseBody& operator=(const DescribeLiveStreamRecordContentResponseBody &) = default ;
    DescribeLiveStreamRecordContentResponseBody& operator=(DescribeLiveStreamRecordContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordContentInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordContentInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(RecordContentInfo, recordContentInfo_);
      };
      friend void from_json(const Darabonba::Json& j, RecordContentInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(RecordContentInfo, recordContentInfo_);
      };
      RecordContentInfoList() = default ;
      RecordContentInfoList(const RecordContentInfoList &) = default ;
      RecordContentInfoList(RecordContentInfoList &&) = default ;
      RecordContentInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordContentInfoList() = default ;
      RecordContentInfoList& operator=(const RecordContentInfoList &) = default ;
      RecordContentInfoList& operator=(RecordContentInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecordContentInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordContentInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
          DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
          DARABONBA_PTR_TO_JSON(OssObjectPrefix, ossObjectPrefix_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, RecordContentInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
          DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
          DARABONBA_PTR_FROM_JSON(OssObjectPrefix, ossObjectPrefix_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        RecordContentInfo() = default ;
        RecordContentInfo(const RecordContentInfo &) = default ;
        RecordContentInfo(RecordContentInfo &&) = default ;
        RecordContentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordContentInfo() = default ;
        RecordContentInfo& operator=(const RecordContentInfo &) = default ;
        RecordContentInfo& operator=(RecordContentInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->duration_ == nullptr
        && this->endTime_ == nullptr && this->ossBucket_ == nullptr && this->ossEndpoint_ == nullptr && this->ossObjectPrefix_ == nullptr && this->startTime_ == nullptr; };
        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline float getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
        inline RecordContentInfo& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline RecordContentInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // ossBucket Field Functions 
        bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
        void deleteOssBucket() { this->ossBucket_ = nullptr;};
        inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
        inline RecordContentInfo& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


        // ossEndpoint Field Functions 
        bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
        void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
        inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
        inline RecordContentInfo& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


        // ossObjectPrefix Field Functions 
        bool hasOssObjectPrefix() const { return this->ossObjectPrefix_ != nullptr;};
        void deleteOssObjectPrefix() { this->ossObjectPrefix_ = nullptr;};
        inline string getOssObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(ossObjectPrefix_, "") };
        inline RecordContentInfo& setOssObjectPrefix(string ossObjectPrefix) { DARABONBA_PTR_SET_VALUE(ossObjectPrefix_, ossObjectPrefix) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline RecordContentInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The beginning of the time range for which the recordings were queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<float> duration_ {};
        // The recordings.
        shared_ptr<string> endTime_ {};
        // The recording length. Unit: seconds.
        shared_ptr<string> ossBucket_ {};
        // The naming rule of recordings in OSS.
        shared_ptr<string> ossEndpoint_ {};
        // The name of the Object Storage Service (OSS) bucket.
        shared_ptr<string> ossObjectPrefix_ {};
        // The end of the time range for which the recordings were queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->recordContentInfo_ == nullptr; };
      // recordContentInfo Field Functions 
      bool hasRecordContentInfo() const { return this->recordContentInfo_ != nullptr;};
      void deleteRecordContentInfo() { this->recordContentInfo_ = nullptr;};
      inline const vector<RecordContentInfoList::RecordContentInfo> & getRecordContentInfo() const { DARABONBA_PTR_GET_CONST(recordContentInfo_, vector<RecordContentInfoList::RecordContentInfo>) };
      inline vector<RecordContentInfoList::RecordContentInfo> getRecordContentInfo() { DARABONBA_PTR_GET(recordContentInfo_, vector<RecordContentInfoList::RecordContentInfo>) };
      inline RecordContentInfoList& setRecordContentInfo(const vector<RecordContentInfoList::RecordContentInfo> & recordContentInfo) { DARABONBA_PTR_SET_VALUE(recordContentInfo_, recordContentInfo) };
      inline RecordContentInfoList& setRecordContentInfo(vector<RecordContentInfoList::RecordContentInfo> && recordContentInfo) { DARABONBA_PTR_SET_RVALUE(recordContentInfo_, recordContentInfo) };


    protected:
      shared_ptr<vector<RecordContentInfoList::RecordContentInfo>> recordContentInfo_ {};
    };

    virtual bool empty() const override { return this->recordContentInfoList_ == nullptr
        && this->requestId_ == nullptr; };
    // recordContentInfoList Field Functions 
    bool hasRecordContentInfoList() const { return this->recordContentInfoList_ != nullptr;};
    void deleteRecordContentInfoList() { this->recordContentInfoList_ = nullptr;};
    inline const DescribeLiveStreamRecordContentResponseBody::RecordContentInfoList & getRecordContentInfoList() const { DARABONBA_PTR_GET_CONST(recordContentInfoList_, DescribeLiveStreamRecordContentResponseBody::RecordContentInfoList) };
    inline DescribeLiveStreamRecordContentResponseBody::RecordContentInfoList getRecordContentInfoList() { DARABONBA_PTR_GET(recordContentInfoList_, DescribeLiveStreamRecordContentResponseBody::RecordContentInfoList) };
    inline DescribeLiveStreamRecordContentResponseBody& setRecordContentInfoList(const DescribeLiveStreamRecordContentResponseBody::RecordContentInfoList & recordContentInfoList) { DARABONBA_PTR_SET_VALUE(recordContentInfoList_, recordContentInfoList) };
    inline DescribeLiveStreamRecordContentResponseBody& setRecordContentInfoList(DescribeLiveStreamRecordContentResponseBody::RecordContentInfoList && recordContentInfoList) { DARABONBA_PTR_SET_RVALUE(recordContentInfoList_, recordContentInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamRecordContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    shared_ptr<DescribeLiveStreamRecordContentResponseBody::RecordContentInfoList> recordContentInfoList_ {};
    // The end of the time range to query. The time range that is specified by the StartTime and EndTime parameters cannot exceed 4 days. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
