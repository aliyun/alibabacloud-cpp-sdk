// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMINUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMINUTESRESPONSEBODY_HPP_
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
  class QueryMinutesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMinutesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(audioList, audioList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMinutesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(audioList, audioList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    QueryMinutesResponseBody() = default ;
    QueryMinutesResponseBody(const QueryMinutesResponseBody &) = default ;
    QueryMinutesResponseBody(QueryMinutesResponseBody &&) = default ;
    QueryMinutesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMinutesResponseBody() = default ;
    QueryMinutesResponseBody& operator=(const QueryMinutesResponseBody &) = default ;
    QueryMinutesResponseBody& operator=(QueryMinutesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AudioList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AudioList& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(PlayUrl, playUrl_);
        DARABONBA_PTR_TO_JSON(RecordId, recordId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, AudioList& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(PlayUrl, playUrl_);
        DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      AudioList() = default ;
      AudioList(const AudioList &) = default ;
      AudioList(AudioList &&) = default ;
      AudioList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AudioList() = default ;
      AudioList& operator=(const AudioList &) = default ;
      AudioList& operator=(AudioList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->duration_ == nullptr
        && this->endTime_ == nullptr && this->fileSize_ == nullptr && this->playUrl_ == nullptr && this->recordId_ == nullptr && this->startTime_ == nullptr
        && this->userId_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline AudioList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline AudioList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
      inline AudioList& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // playUrl Field Functions 
      bool hasPlayUrl() const { return this->playUrl_ != nullptr;};
      void deletePlayUrl() { this->playUrl_ = nullptr;};
      inline string getPlayUrl() const { DARABONBA_PTR_GET_DEFAULT(playUrl_, "") };
      inline AudioList& setPlayUrl(string playUrl) { DARABONBA_PTR_SET_VALUE(playUrl_, playUrl) };


      // recordId Field Functions 
      bool hasRecordId() const { return this->recordId_ != nullptr;};
      void deleteRecordId() { this->recordId_ = nullptr;};
      inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
      inline AudioList& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline AudioList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline AudioList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<int64_t> duration_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<int64_t> fileSize_ {};
      shared_ptr<string> playUrl_ {};
      shared_ptr<string> recordId_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->audioList_ == nullptr
        && this->requestId_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // audioList Field Functions 
    bool hasAudioList() const { return this->audioList_ != nullptr;};
    void deleteAudioList() { this->audioList_ = nullptr;};
    inline const vector<QueryMinutesResponseBody::AudioList> & getAudioList() const { DARABONBA_PTR_GET_CONST(audioList_, vector<QueryMinutesResponseBody::AudioList>) };
    inline vector<QueryMinutesResponseBody::AudioList> getAudioList() { DARABONBA_PTR_GET(audioList_, vector<QueryMinutesResponseBody::AudioList>) };
    inline QueryMinutesResponseBody& setAudioList(const vector<QueryMinutesResponseBody::AudioList> & audioList) { DARABONBA_PTR_SET_VALUE(audioList_, audioList) };
    inline QueryMinutesResponseBody& setAudioList(vector<QueryMinutesResponseBody::AudioList> && audioList) { DARABONBA_PTR_SET_RVALUE(audioList_, audioList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMinutesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline QueryMinutesResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline QueryMinutesResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<vector<QueryMinutesResponseBody::AudioList>> audioList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
