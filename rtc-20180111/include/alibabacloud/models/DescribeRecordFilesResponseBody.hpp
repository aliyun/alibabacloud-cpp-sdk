// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRecordFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordFiles, recordFiles_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordFiles, recordFiles_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeRecordFilesResponseBody() = default ;
    DescribeRecordFilesResponseBody(const DescribeRecordFilesResponseBody &) = default ;
    DescribeRecordFilesResponseBody(DescribeRecordFilesResponseBody &&) = default ;
    DescribeRecordFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordFilesResponseBody() = default ;
    DescribeRecordFilesResponseBody& operator=(const DescribeRecordFilesResponseBody &) = default ;
    DescribeRecordFilesResponseBody& operator=(DescribeRecordFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordFiles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordFiles& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, RecordFiles& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      RecordFiles() = default ;
      RecordFiles(const RecordFiles &) = default ;
      RecordFiles(RecordFiles &&) = default ;
      RecordFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordFiles() = default ;
      RecordFiles& operator=(const RecordFiles &) = default ;
      RecordFiles& operator=(RecordFiles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->channelId_ == nullptr && this->createTime_ == nullptr && this->duration_ == nullptr && this->startTime_ == nullptr && this->stopTime_ == nullptr
        && this->taskId_ == nullptr && this->url_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline RecordFiles& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // channelId Field Functions 
      bool hasChannelId() const { return this->channelId_ != nullptr;};
      void deleteChannelId() { this->channelId_ = nullptr;};
      inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
      inline RecordFiles& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline RecordFiles& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline float getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
      inline RecordFiles& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline RecordFiles& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // stopTime Field Functions 
      bool hasStopTime() const { return this->stopTime_ != nullptr;};
      void deleteStopTime() { this->stopTime_ = nullptr;};
      inline string getStopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
      inline RecordFiles& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline RecordFiles& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline RecordFiles& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> channelId_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<float> duration_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> stopTime_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->recordFiles_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr && this->totalPage_ == nullptr; };
    // recordFiles Field Functions 
    bool hasRecordFiles() const { return this->recordFiles_ != nullptr;};
    void deleteRecordFiles() { this->recordFiles_ = nullptr;};
    inline const vector<DescribeRecordFilesResponseBody::RecordFiles> & getRecordFiles() const { DARABONBA_PTR_GET_CONST(recordFiles_, vector<DescribeRecordFilesResponseBody::RecordFiles>) };
    inline vector<DescribeRecordFilesResponseBody::RecordFiles> getRecordFiles() { DARABONBA_PTR_GET(recordFiles_, vector<DescribeRecordFilesResponseBody::RecordFiles>) };
    inline DescribeRecordFilesResponseBody& setRecordFiles(const vector<DescribeRecordFilesResponseBody::RecordFiles> & recordFiles) { DARABONBA_PTR_SET_VALUE(recordFiles_, recordFiles) };
    inline DescribeRecordFilesResponseBody& setRecordFiles(vector<DescribeRecordFilesResponseBody::RecordFiles> && recordFiles) { DARABONBA_PTR_SET_RVALUE(recordFiles_, recordFiles) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecordFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline DescribeRecordFilesResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline DescribeRecordFilesResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<vector<DescribeRecordFilesResponseBody::RecordFiles>> recordFiles_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalNum_ {};
    shared_ptr<int64_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
