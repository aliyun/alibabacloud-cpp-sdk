// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJMETERLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETJMETERLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetJMeterLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJMeterLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentIndex, agentIndex_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(Thread, thread_);
    };
    friend void from_json(const Darabonba::Json& j, GetJMeterLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentIndex, agentIndex_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(Thread, thread_);
    };
    GetJMeterLogsRequest() = default ;
    GetJMeterLogsRequest(const GetJMeterLogsRequest &) = default ;
    GetJMeterLogsRequest(GetJMeterLogsRequest &&) = default ;
    GetJMeterLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJMeterLogsRequest() = default ;
    GetJMeterLogsRequest& operator=(const GetJMeterLogsRequest &) = default ;
    GetJMeterLogsRequest& operator=(GetJMeterLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentIndex_ == nullptr
        && return this->beginTime_ == nullptr && return this->endTime_ == nullptr && return this->keyword_ == nullptr && return this->level_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->reportId_ == nullptr && return this->thread_ == nullptr; };
    // agentIndex Field Functions 
    bool hasAgentIndex() const { return this->agentIndex_ != nullptr;};
    void deleteAgentIndex() { this->agentIndex_ = nullptr;};
    inline int32_t agentIndex() const { DARABONBA_PTR_GET_DEFAULT(agentIndex_, 0) };
    inline GetJMeterLogsRequest& setAgentIndex(int32_t agentIndex) { DARABONBA_PTR_SET_VALUE(agentIndex_, agentIndex) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetJMeterLogsRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetJMeterLogsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline GetJMeterLogsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetJMeterLogsRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetJMeterLogsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetJMeterLogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GetJMeterLogsRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // thread Field Functions 
    bool hasThread() const { return this->thread_ != nullptr;};
    void deleteThread() { this->thread_ = nullptr;};
    inline string thread() const { DARABONBA_PTR_GET_DEFAULT(thread_, "") };
    inline GetJMeterLogsRequest& setThread(string thread) { DARABONBA_PTR_SET_VALUE(thread_, thread) };


  protected:
    // Specifies that the operational logs of the stress tester identified as number 0 are returned if the agent index is invalid.
    std::shared_ptr<int32_t> agentIndex_ = nullptr;
    // The beginning of the time range to query. Unit: seconds.
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    // The end of the time range to query. Unit: seconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The keyword.
    std::shared_ptr<string> keyword_ = nullptr;
    // The log level. Valid values:
    // 
    // *   ERROR
    // *   WARN
    // *   INFO (default)
    // *   DEBUG
    // *   TRACE
    std::shared_ptr<string> level_ = nullptr;
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return per page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The report ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> reportId_ = nullptr;
    // The thread name.
    std::shared_ptr<string> thread_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
