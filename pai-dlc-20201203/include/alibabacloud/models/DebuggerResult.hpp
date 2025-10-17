// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEBUGGERRESULT_HPP_
#define ALIBABACLOUD_MODELS_DEBUGGERRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class DebuggerResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DebuggerResult& obj) { 
      DARABONBA_PTR_TO_JSON(DebuggerConfigContent, debuggerConfigContent_);
      DARABONBA_PTR_TO_JSON(DebuggerJobIssues, debuggerJobIssues_);
      DARABONBA_PTR_TO_JSON(DebuggerJobStatus, debuggerJobStatus_);
      DARABONBA_PTR_TO_JSON(DebuggerReportURL, debuggerReportURL_);
      DARABONBA_PTR_TO_JSON(JobDisplayName, jobDisplayName_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobUserId, jobUserId_);
    };
    friend void from_json(const Darabonba::Json& j, DebuggerResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DebuggerConfigContent, debuggerConfigContent_);
      DARABONBA_PTR_FROM_JSON(DebuggerJobIssues, debuggerJobIssues_);
      DARABONBA_PTR_FROM_JSON(DebuggerJobStatus, debuggerJobStatus_);
      DARABONBA_PTR_FROM_JSON(DebuggerReportURL, debuggerReportURL_);
      DARABONBA_PTR_FROM_JSON(JobDisplayName, jobDisplayName_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobUserId, jobUserId_);
    };
    DebuggerResult() = default ;
    DebuggerResult(const DebuggerResult &) = default ;
    DebuggerResult(DebuggerResult &&) = default ;
    DebuggerResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DebuggerResult() = default ;
    DebuggerResult& operator=(const DebuggerResult &) = default ;
    DebuggerResult& operator=(DebuggerResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->debuggerConfigContent_ == nullptr
        && return this->debuggerJobIssues_ == nullptr && return this->debuggerJobStatus_ == nullptr && return this->debuggerReportURL_ == nullptr && return this->jobDisplayName_ == nullptr && return this->jobId_ == nullptr
        && return this->jobUserId_ == nullptr; };
    // debuggerConfigContent Field Functions 
    bool hasDebuggerConfigContent() const { return this->debuggerConfigContent_ != nullptr;};
    void deleteDebuggerConfigContent() { this->debuggerConfigContent_ = nullptr;};
    inline string debuggerConfigContent() const { DARABONBA_PTR_GET_DEFAULT(debuggerConfigContent_, "") };
    inline DebuggerResult& setDebuggerConfigContent(string debuggerConfigContent) { DARABONBA_PTR_SET_VALUE(debuggerConfigContent_, debuggerConfigContent) };


    // debuggerJobIssues Field Functions 
    bool hasDebuggerJobIssues() const { return this->debuggerJobIssues_ != nullptr;};
    void deleteDebuggerJobIssues() { this->debuggerJobIssues_ = nullptr;};
    inline string debuggerJobIssues() const { DARABONBA_PTR_GET_DEFAULT(debuggerJobIssues_, "") };
    inline DebuggerResult& setDebuggerJobIssues(string debuggerJobIssues) { DARABONBA_PTR_SET_VALUE(debuggerJobIssues_, debuggerJobIssues) };


    // debuggerJobStatus Field Functions 
    bool hasDebuggerJobStatus() const { return this->debuggerJobStatus_ != nullptr;};
    void deleteDebuggerJobStatus() { this->debuggerJobStatus_ = nullptr;};
    inline string debuggerJobStatus() const { DARABONBA_PTR_GET_DEFAULT(debuggerJobStatus_, "") };
    inline DebuggerResult& setDebuggerJobStatus(string debuggerJobStatus) { DARABONBA_PTR_SET_VALUE(debuggerJobStatus_, debuggerJobStatus) };


    // debuggerReportURL Field Functions 
    bool hasDebuggerReportURL() const { return this->debuggerReportURL_ != nullptr;};
    void deleteDebuggerReportURL() { this->debuggerReportURL_ = nullptr;};
    inline string debuggerReportURL() const { DARABONBA_PTR_GET_DEFAULT(debuggerReportURL_, "") };
    inline DebuggerResult& setDebuggerReportURL(string debuggerReportURL) { DARABONBA_PTR_SET_VALUE(debuggerReportURL_, debuggerReportURL) };


    // jobDisplayName Field Functions 
    bool hasJobDisplayName() const { return this->jobDisplayName_ != nullptr;};
    void deleteJobDisplayName() { this->jobDisplayName_ = nullptr;};
    inline string jobDisplayName() const { DARABONBA_PTR_GET_DEFAULT(jobDisplayName_, "") };
    inline DebuggerResult& setJobDisplayName(string jobDisplayName) { DARABONBA_PTR_SET_VALUE(jobDisplayName_, jobDisplayName) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DebuggerResult& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobUserId Field Functions 
    bool hasJobUserId() const { return this->jobUserId_ != nullptr;};
    void deleteJobUserId() { this->jobUserId_ = nullptr;};
    inline string jobUserId() const { DARABONBA_PTR_GET_DEFAULT(jobUserId_, "") };
    inline DebuggerResult& setJobUserId(string jobUserId) { DARABONBA_PTR_SET_VALUE(jobUserId_, jobUserId) };


  protected:
    std::shared_ptr<string> debuggerConfigContent_ = nullptr;
    std::shared_ptr<string> debuggerJobIssues_ = nullptr;
    std::shared_ptr<string> debuggerJobStatus_ = nullptr;
    std::shared_ptr<string> debuggerReportURL_ = nullptr;
    std::shared_ptr<string> jobDisplayName_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> jobUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
