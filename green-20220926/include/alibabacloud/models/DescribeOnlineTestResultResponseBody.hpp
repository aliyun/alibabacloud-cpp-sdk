// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEONLINETESTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEONLINETESTRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeOnlineTestResultResponseBodyAudioData.hpp>
#include <alibabacloud/models/DescribeOnlineTestResultResponseBodyFrameData.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOnlineTestResultResponseBodySummaryList.hpp>
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
    virtual bool empty() const override { return this->audioData_ == nullptr
        && return this->frameData_ == nullptr && return this->moderationTime_ == nullptr && return this->requestId_ == nullptr && return this->riskLevel_ == nullptr && return this->serviceCode_ == nullptr
        && return this->summaryList_ == nullptr && return this->taskId_ == nullptr && return this->taskStatus_ == nullptr && return this->url_ == nullptr; };
    // audioData Field Functions 
    bool hasAudioData() const { return this->audioData_ != nullptr;};
    void deleteAudioData() { this->audioData_ = nullptr;};
    inline const DescribeOnlineTestResultResponseBodyAudioData & audioData() const { DARABONBA_PTR_GET_CONST(audioData_, DescribeOnlineTestResultResponseBodyAudioData) };
    inline DescribeOnlineTestResultResponseBodyAudioData audioData() { DARABONBA_PTR_GET(audioData_, DescribeOnlineTestResultResponseBodyAudioData) };
    inline DescribeOnlineTestResultResponseBody& setAudioData(const DescribeOnlineTestResultResponseBodyAudioData & audioData) { DARABONBA_PTR_SET_VALUE(audioData_, audioData) };
    inline DescribeOnlineTestResultResponseBody& setAudioData(DescribeOnlineTestResultResponseBodyAudioData && audioData) { DARABONBA_PTR_SET_RVALUE(audioData_, audioData) };


    // frameData Field Functions 
    bool hasFrameData() const { return this->frameData_ != nullptr;};
    void deleteFrameData() { this->frameData_ = nullptr;};
    inline const DescribeOnlineTestResultResponseBodyFrameData & frameData() const { DARABONBA_PTR_GET_CONST(frameData_, DescribeOnlineTestResultResponseBodyFrameData) };
    inline DescribeOnlineTestResultResponseBodyFrameData frameData() { DARABONBA_PTR_GET(frameData_, DescribeOnlineTestResultResponseBodyFrameData) };
    inline DescribeOnlineTestResultResponseBody& setFrameData(const DescribeOnlineTestResultResponseBodyFrameData & frameData) { DARABONBA_PTR_SET_VALUE(frameData_, frameData) };
    inline DescribeOnlineTestResultResponseBody& setFrameData(DescribeOnlineTestResultResponseBodyFrameData && frameData) { DARABONBA_PTR_SET_RVALUE(frameData_, frameData) };


    // moderationTime Field Functions 
    bool hasModerationTime() const { return this->moderationTime_ != nullptr;};
    void deleteModerationTime() { this->moderationTime_ = nullptr;};
    inline string moderationTime() const { DARABONBA_PTR_GET_DEFAULT(moderationTime_, "") };
    inline DescribeOnlineTestResultResponseBody& setModerationTime(string moderationTime) { DARABONBA_PTR_SET_VALUE(moderationTime_, moderationTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOnlineTestResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeOnlineTestResultResponseBody& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline DescribeOnlineTestResultResponseBody& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // summaryList Field Functions 
    bool hasSummaryList() const { return this->summaryList_ != nullptr;};
    void deleteSummaryList() { this->summaryList_ = nullptr;};
    inline const vector<DescribeOnlineTestResultResponseBodySummaryList> & summaryList() const { DARABONBA_PTR_GET_CONST(summaryList_, vector<DescribeOnlineTestResultResponseBodySummaryList>) };
    inline vector<DescribeOnlineTestResultResponseBodySummaryList> summaryList() { DARABONBA_PTR_GET(summaryList_, vector<DescribeOnlineTestResultResponseBodySummaryList>) };
    inline DescribeOnlineTestResultResponseBody& setSummaryList(const vector<DescribeOnlineTestResultResponseBodySummaryList> & summaryList) { DARABONBA_PTR_SET_VALUE(summaryList_, summaryList) };
    inline DescribeOnlineTestResultResponseBody& setSummaryList(vector<DescribeOnlineTestResultResponseBodySummaryList> && summaryList) { DARABONBA_PTR_SET_RVALUE(summaryList_, summaryList) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeOnlineTestResultResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeOnlineTestResultResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeOnlineTestResultResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<DescribeOnlineTestResultResponseBodyAudioData> audioData_ = nullptr;
    std::shared_ptr<DescribeOnlineTestResultResponseBodyFrameData> frameData_ = nullptr;
    std::shared_ptr<string> moderationTime_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> riskLevel_ = nullptr;
    std::shared_ptr<string> serviceCode_ = nullptr;
    std::shared_ptr<vector<DescribeOnlineTestResultResponseBodySummaryList>> summaryList_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
