// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJMETERSAMPLINGLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETJMETERSAMPLINGLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetJMeterSamplingLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJMeterSamplingLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MaxRT, maxRT_);
      DARABONBA_PTR_TO_JSON(MinRT, minRT_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(ResponseCode, responseCode_);
      DARABONBA_PTR_TO_JSON(SamplerId, samplerId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Thread, thread_);
    };
    friend void from_json(const Darabonba::Json& j, GetJMeterSamplingLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MaxRT, maxRT_);
      DARABONBA_PTR_FROM_JSON(MinRT, minRT_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(ResponseCode, responseCode_);
      DARABONBA_PTR_FROM_JSON(SamplerId, samplerId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Thread, thread_);
    };
    GetJMeterSamplingLogsRequest() = default ;
    GetJMeterSamplingLogsRequest(const GetJMeterSamplingLogsRequest &) = default ;
    GetJMeterSamplingLogsRequest(GetJMeterSamplingLogsRequest &&) = default ;
    GetJMeterSamplingLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJMeterSamplingLogsRequest() = default ;
    GetJMeterSamplingLogsRequest& operator=(const GetJMeterSamplingLogsRequest &) = default ;
    GetJMeterSamplingLogsRequest& operator=(GetJMeterSamplingLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->beginTime_ == nullptr && return this->endTime_ == nullptr && return this->keyword_ == nullptr && return this->maxRT_ == nullptr && return this->minRT_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->reportId_ == nullptr && return this->responseCode_ == nullptr && return this->samplerId_ == nullptr
        && return this->success_ == nullptr && return this->thread_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline int64_t agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
    inline GetJMeterSamplingLogsRequest& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetJMeterSamplingLogsRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetJMeterSamplingLogsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline GetJMeterSamplingLogsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxRT Field Functions 
    bool hasMaxRT() const { return this->maxRT_ != nullptr;};
    void deleteMaxRT() { this->maxRT_ = nullptr;};
    inline int32_t maxRT() const { DARABONBA_PTR_GET_DEFAULT(maxRT_, 0) };
    inline GetJMeterSamplingLogsRequest& setMaxRT(int32_t maxRT) { DARABONBA_PTR_SET_VALUE(maxRT_, maxRT) };


    // minRT Field Functions 
    bool hasMinRT() const { return this->minRT_ != nullptr;};
    void deleteMinRT() { this->minRT_ = nullptr;};
    inline int32_t minRT() const { DARABONBA_PTR_GET_DEFAULT(minRT_, 0) };
    inline GetJMeterSamplingLogsRequest& setMinRT(int32_t minRT) { DARABONBA_PTR_SET_VALUE(minRT_, minRT) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetJMeterSamplingLogsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetJMeterSamplingLogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GetJMeterSamplingLogsRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // responseCode Field Functions 
    bool hasResponseCode() const { return this->responseCode_ != nullptr;};
    void deleteResponseCode() { this->responseCode_ = nullptr;};
    inline string responseCode() const { DARABONBA_PTR_GET_DEFAULT(responseCode_, "") };
    inline GetJMeterSamplingLogsRequest& setResponseCode(string responseCode) { DARABONBA_PTR_SET_VALUE(responseCode_, responseCode) };


    // samplerId Field Functions 
    bool hasSamplerId() const { return this->samplerId_ != nullptr;};
    void deleteSamplerId() { this->samplerId_ = nullptr;};
    inline int32_t samplerId() const { DARABONBA_PTR_GET_DEFAULT(samplerId_, 0) };
    inline GetJMeterSamplingLogsRequest& setSamplerId(int32_t samplerId) { DARABONBA_PTR_SET_VALUE(samplerId_, samplerId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetJMeterSamplingLogsRequest& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // thread Field Functions 
    bool hasThread() const { return this->thread_ != nullptr;};
    void deleteThread() { this->thread_ = nullptr;};
    inline string thread() const { DARABONBA_PTR_GET_DEFAULT(thread_, "") };
    inline GetJMeterSamplingLogsRequest& setThread(string thread) { DARABONBA_PTR_SET_VALUE(thread_, thread) };


  protected:
    // The ID of the load generator. This parameter is disabled.
    std::shared_ptr<int64_t> agentId_ = nullptr;
    // The beginning of the time range to query. Unit: milliseconds.
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    // The end of the time range to query. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The keyword. You can use the keyword in the value of **SceneName** for fuzzy searching or use the value of **SceneID** for exact searching.
    std::shared_ptr<string> keyword_ = nullptr;
    // The maximum response time. Unit: ms.
    std::shared_ptr<int32_t> maxRT_ = nullptr;
    // The minimum response time. Unit: ms.
    std::shared_ptr<int32_t> minRT_ = nullptr;
    // The page number.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the report.
    // 
    // This parameter is required.
    std::shared_ptr<string> reportId_ = nullptr;
    // The response code.
    std::shared_ptr<string> responseCode_ = nullptr;
    // The ID of the sampler. The value starts from 0.
    std::shared_ptr<int32_t> samplerId_ = nullptr;
    // Specifies whether the sampling is successful.
    std::shared_ptr<bool> success_ = nullptr;
    // The name of the thread. Fuzzy searching is supported. If you specify multiple threads, separate the threads with spaces.
    std::shared_ptr<string> thread_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
