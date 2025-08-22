// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEBUGGERJOBISSUE_HPP_
#define ALIBABACLOUD_MODELS_DEBUGGERJOBISSUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class DebuggerJobIssue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DebuggerJobIssue& obj) { 
      DARABONBA_PTR_TO_JSON(DebuggerJobIssue, debuggerJobIssue_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(JobDebuggerIssueId, jobDebuggerIssueId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, DebuggerJobIssue& obj) { 
      DARABONBA_PTR_FROM_JSON(DebuggerJobIssue, debuggerJobIssue_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(JobDebuggerIssueId, jobDebuggerIssueId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    DebuggerJobIssue() = default ;
    DebuggerJobIssue(const DebuggerJobIssue &) = default ;
    DebuggerJobIssue(DebuggerJobIssue &&) = default ;
    DebuggerJobIssue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DebuggerJobIssue() = default ;
    DebuggerJobIssue& operator=(const DebuggerJobIssue &) = default ;
    DebuggerJobIssue& operator=(DebuggerJobIssue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->debuggerJobIssue_ != nullptr
        && this->gmtCreateTime_ != nullptr && this->jobDebuggerIssueId_ != nullptr && this->jobId_ != nullptr && this->reasonCode_ != nullptr && this->reasonMessage_ != nullptr
        && this->ruleName_ != nullptr; };
    // debuggerJobIssue Field Functions 
    bool hasDebuggerJobIssue() const { return this->debuggerJobIssue_ != nullptr;};
    void deleteDebuggerJobIssue() { this->debuggerJobIssue_ = nullptr;};
    inline string debuggerJobIssue() const { DARABONBA_PTR_GET_DEFAULT(debuggerJobIssue_, "") };
    inline DebuggerJobIssue& setDebuggerJobIssue(string debuggerJobIssue) { DARABONBA_PTR_SET_VALUE(debuggerJobIssue_, debuggerJobIssue) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline DebuggerJobIssue& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // jobDebuggerIssueId Field Functions 
    bool hasJobDebuggerIssueId() const { return this->jobDebuggerIssueId_ != nullptr;};
    void deleteJobDebuggerIssueId() { this->jobDebuggerIssueId_ = nullptr;};
    inline string jobDebuggerIssueId() const { DARABONBA_PTR_GET_DEFAULT(jobDebuggerIssueId_, "") };
    inline DebuggerJobIssue& setJobDebuggerIssueId(string jobDebuggerIssueId) { DARABONBA_PTR_SET_VALUE(jobDebuggerIssueId_, jobDebuggerIssueId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DebuggerJobIssue& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline DebuggerJobIssue& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string reasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline DebuggerJobIssue& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DebuggerJobIssue& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    std::shared_ptr<string> debuggerJobIssue_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> jobDebuggerIssueId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> reasonCode_ = nullptr;
    std::shared_ptr<string> reasonMessage_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
