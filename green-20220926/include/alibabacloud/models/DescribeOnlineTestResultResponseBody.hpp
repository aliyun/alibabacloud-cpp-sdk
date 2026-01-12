// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEONLINETESTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEONLINETESTRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class DescribeOnlineTestResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOnlineTestResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AudioData, audioData_);
      DARABONBA_PTR_TO_JSON(FrameData, frameData_);
      DARABONBA_PTR_TO_JSON(ModerationTime, moderationTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(SummaryList, summaryList_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOnlineTestResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioData, audioData_);
      DARABONBA_PTR_FROM_JSON(FrameData, frameData_);
      DARABONBA_PTR_FROM_JSON(ModerationTime, moderationTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(SummaryList, summaryList_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeOnlineTestResultResponseBody() = default ;
    DescribeOnlineTestResultResponseBody(const DescribeOnlineTestResultResponseBody &) = default ;
    DescribeOnlineTestResultResponseBody(DescribeOnlineTestResultResponseBody &&) = default ;
    DescribeOnlineTestResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOnlineTestResultResponseBody() = default ;
    DescribeOnlineTestResultResponseBody& operator=(const DescribeOnlineTestResultResponseBody &) = default ;
    DescribeOnlineTestResultResponseBody& operator=(DescribeOnlineTestResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SummaryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SummaryList& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(RiskLevelSummary, riskLevelSummary_);
        DARABONBA_PTR_TO_JSON(SliceCount, sliceCount_);
      };
      friend void from_json(const Darabonba::Json& j, SummaryList& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(RiskLevelSummary, riskLevelSummary_);
        DARABONBA_PTR_FROM_JSON(SliceCount, sliceCount_);
      };
      SummaryList() = default ;
      SummaryList(const SummaryList &) = default ;
      SummaryList(SummaryList &&) = default ;
      SummaryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SummaryList() = default ;
      SummaryList& operator=(const SummaryList &) = default ;
      SummaryList& operator=(SummaryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceType_ == nullptr
        && this->riskLevel_ == nullptr && this->riskLevelSummary_ == nullptr && this->sliceCount_ == nullptr; };
      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline SummaryList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline SummaryList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // riskLevelSummary Field Functions 
      bool hasRiskLevelSummary() const { return this->riskLevelSummary_ != nullptr;};
      void deleteRiskLevelSummary() { this->riskLevelSummary_ = nullptr;};
      inline const map<string, int64_t> & getRiskLevelSummary() const { DARABONBA_PTR_GET_CONST(riskLevelSummary_, map<string, int64_t>) };
      inline map<string, int64_t> getRiskLevelSummary() { DARABONBA_PTR_GET(riskLevelSummary_, map<string, int64_t>) };
      inline SummaryList& setRiskLevelSummary(const map<string, int64_t> & riskLevelSummary) { DARABONBA_PTR_SET_VALUE(riskLevelSummary_, riskLevelSummary) };
      inline SummaryList& setRiskLevelSummary(map<string, int64_t> && riskLevelSummary) { DARABONBA_PTR_SET_RVALUE(riskLevelSummary_, riskLevelSummary) };


      // sliceCount Field Functions 
      bool hasSliceCount() const { return this->sliceCount_ != nullptr;};
      void deleteSliceCount() { this->sliceCount_ = nullptr;};
      inline int32_t getSliceCount() const { DARABONBA_PTR_GET_DEFAULT(sliceCount_, 0) };
      inline SummaryList& setSliceCount(int32_t sliceCount) { DARABONBA_PTR_SET_VALUE(sliceCount_, sliceCount) };


    protected:
      shared_ptr<string> resourceType_ {};
      shared_ptr<string> riskLevel_ {};
      shared_ptr<map<string, int64_t>> riskLevelSummary_ {};
      shared_ptr<int32_t> sliceCount_ {};
    };

    class FrameData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FrameData& obj) { 
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, FrameData& obj) { 
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      FrameData() = default ;
      FrameData(const FrameData &) = default ;
      FrameData(FrameData &&) = default ;
      FrameData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FrameData() = default ;
      FrameData& operator=(const FrameData &) = default ;
      FrameData& operator=(FrameData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->timeStamp_ == nullptr
        && this->url_ == nullptr; };
      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline FrameData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline FrameData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> timeStamp_ {};
      shared_ptr<string> url_ {};
    };

    class AudioData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AudioData& obj) { 
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      };
      friend void from_json(const Darabonba::Json& j, AudioData& obj) { 
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      };
      AudioData() = default ;
      AudioData(const AudioData &) = default ;
      AudioData(AudioData &&) = default ;
      AudioData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AudioData() = default ;
      AudioData& operator=(const AudioData &) = default ;
      AudioData& operator=(AudioData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->timeStamp_ == nullptr; };
      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline AudioData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    protected:
      shared_ptr<string> timeStamp_ {};
    };

    virtual bool empty() const override { return this->audioData_ == nullptr
        && this->frameData_ == nullptr && this->moderationTime_ == nullptr && this->requestId_ == nullptr && this->riskLevel_ == nullptr && this->serviceCode_ == nullptr
        && this->summaryList_ == nullptr && this->taskId_ == nullptr && this->taskStatus_ == nullptr && this->url_ == nullptr; };
    // audioData Field Functions 
    bool hasAudioData() const { return this->audioData_ != nullptr;};
    void deleteAudioData() { this->audioData_ = nullptr;};
    inline const DescribeOnlineTestResultResponseBody::AudioData & getAudioData() const { DARABONBA_PTR_GET_CONST(audioData_, DescribeOnlineTestResultResponseBody::AudioData) };
    inline DescribeOnlineTestResultResponseBody::AudioData getAudioData() { DARABONBA_PTR_GET(audioData_, DescribeOnlineTestResultResponseBody::AudioData) };
    inline DescribeOnlineTestResultResponseBody& setAudioData(const DescribeOnlineTestResultResponseBody::AudioData & audioData) { DARABONBA_PTR_SET_VALUE(audioData_, audioData) };
    inline DescribeOnlineTestResultResponseBody& setAudioData(DescribeOnlineTestResultResponseBody::AudioData && audioData) { DARABONBA_PTR_SET_RVALUE(audioData_, audioData) };


    // frameData Field Functions 
    bool hasFrameData() const { return this->frameData_ != nullptr;};
    void deleteFrameData() { this->frameData_ = nullptr;};
    inline const DescribeOnlineTestResultResponseBody::FrameData & getFrameData() const { DARABONBA_PTR_GET_CONST(frameData_, DescribeOnlineTestResultResponseBody::FrameData) };
    inline DescribeOnlineTestResultResponseBody::FrameData getFrameData() { DARABONBA_PTR_GET(frameData_, DescribeOnlineTestResultResponseBody::FrameData) };
    inline DescribeOnlineTestResultResponseBody& setFrameData(const DescribeOnlineTestResultResponseBody::FrameData & frameData) { DARABONBA_PTR_SET_VALUE(frameData_, frameData) };
    inline DescribeOnlineTestResultResponseBody& setFrameData(DescribeOnlineTestResultResponseBody::FrameData && frameData) { DARABONBA_PTR_SET_RVALUE(frameData_, frameData) };


    // moderationTime Field Functions 
    bool hasModerationTime() const { return this->moderationTime_ != nullptr;};
    void deleteModerationTime() { this->moderationTime_ = nullptr;};
    inline string getModerationTime() const { DARABONBA_PTR_GET_DEFAULT(moderationTime_, "") };
    inline DescribeOnlineTestResultResponseBody& setModerationTime(string moderationTime) { DARABONBA_PTR_SET_VALUE(moderationTime_, moderationTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOnlineTestResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeOnlineTestResultResponseBody& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline DescribeOnlineTestResultResponseBody& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // summaryList Field Functions 
    bool hasSummaryList() const { return this->summaryList_ != nullptr;};
    void deleteSummaryList() { this->summaryList_ = nullptr;};
    inline const vector<DescribeOnlineTestResultResponseBody::SummaryList> & getSummaryList() const { DARABONBA_PTR_GET_CONST(summaryList_, vector<DescribeOnlineTestResultResponseBody::SummaryList>) };
    inline vector<DescribeOnlineTestResultResponseBody::SummaryList> getSummaryList() { DARABONBA_PTR_GET(summaryList_, vector<DescribeOnlineTestResultResponseBody::SummaryList>) };
    inline DescribeOnlineTestResultResponseBody& setSummaryList(const vector<DescribeOnlineTestResultResponseBody::SummaryList> & summaryList) { DARABONBA_PTR_SET_VALUE(summaryList_, summaryList) };
    inline DescribeOnlineTestResultResponseBody& setSummaryList(vector<DescribeOnlineTestResultResponseBody::SummaryList> && summaryList) { DARABONBA_PTR_SET_RVALUE(summaryList_, summaryList) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeOnlineTestResultResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeOnlineTestResultResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeOnlineTestResultResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    shared_ptr<DescribeOnlineTestResultResponseBody::AudioData> audioData_ {};
    shared_ptr<DescribeOnlineTestResultResponseBody::FrameData> frameData_ {};
    shared_ptr<string> moderationTime_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> riskLevel_ {};
    shared_ptr<string> serviceCode_ {};
    shared_ptr<vector<DescribeOnlineTestResultResponseBody::SummaryList>> summaryList_ {};
    shared_ptr<string> taskId_ {};
    shared_ptr<string> taskStatus_ {};
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
