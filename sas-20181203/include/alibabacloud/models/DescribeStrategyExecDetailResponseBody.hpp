// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRATEGYEXECDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRATEGYEXECDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStrategyExecDetailResponseBodyFailedEcsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeStrategyExecDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStrategyExecDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(FailedEcsList, failedEcsList_);
      DARABONBA_PTR_TO_JSON(InProcessCount, inProcessCount_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStrategyExecDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(FailedEcsList, failedEcsList_);
      DARABONBA_PTR_FROM_JSON(InProcessCount, inProcessCount_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
    };
    DescribeStrategyExecDetailResponseBody() = default ;
    DescribeStrategyExecDetailResponseBody(const DescribeStrategyExecDetailResponseBody &) = default ;
    DescribeStrategyExecDetailResponseBody(DescribeStrategyExecDetailResponseBody &&) = default ;
    DescribeStrategyExecDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStrategyExecDetailResponseBody() = default ;
    DescribeStrategyExecDetailResponseBody& operator=(const DescribeStrategyExecDetailResponseBody &) = default ;
    DescribeStrategyExecDetailResponseBody& operator=(DescribeStrategyExecDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->failCount_ == nullptr && return this->failedEcsList_ == nullptr && return this->inProcessCount_ == nullptr && return this->percent_ == nullptr && return this->requestId_ == nullptr
        && return this->source_ == nullptr && return this->startTime_ == nullptr && return this->successCount_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeStrategyExecDetailResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t failCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline DescribeStrategyExecDetailResponseBody& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // failedEcsList Field Functions 
    bool hasFailedEcsList() const { return this->failedEcsList_ != nullptr;};
    void deleteFailedEcsList() { this->failedEcsList_ = nullptr;};
    inline const vector<DescribeStrategyExecDetailResponseBodyFailedEcsList> & failedEcsList() const { DARABONBA_PTR_GET_CONST(failedEcsList_, vector<DescribeStrategyExecDetailResponseBodyFailedEcsList>) };
    inline vector<DescribeStrategyExecDetailResponseBodyFailedEcsList> failedEcsList() { DARABONBA_PTR_GET(failedEcsList_, vector<DescribeStrategyExecDetailResponseBodyFailedEcsList>) };
    inline DescribeStrategyExecDetailResponseBody& setFailedEcsList(const vector<DescribeStrategyExecDetailResponseBodyFailedEcsList> & failedEcsList) { DARABONBA_PTR_SET_VALUE(failedEcsList_, failedEcsList) };
    inline DescribeStrategyExecDetailResponseBody& setFailedEcsList(vector<DescribeStrategyExecDetailResponseBodyFailedEcsList> && failedEcsList) { DARABONBA_PTR_SET_RVALUE(failedEcsList_, failedEcsList) };


    // inProcessCount Field Functions 
    bool hasInProcessCount() const { return this->inProcessCount_ != nullptr;};
    void deleteInProcessCount() { this->inProcessCount_ = nullptr;};
    inline int32_t inProcessCount() const { DARABONBA_PTR_GET_DEFAULT(inProcessCount_, 0) };
    inline DescribeStrategyExecDetailResponseBody& setInProcessCount(int32_t inProcessCount) { DARABONBA_PTR_SET_VALUE(inProcessCount_, inProcessCount) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline DescribeStrategyExecDetailResponseBody& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStrategyExecDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeStrategyExecDetailResponseBody& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeStrategyExecDetailResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline DescribeStrategyExecDetailResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


  protected:
    // The time when the baseline check ends.
    std::shared_ptr<string> endTime_ = nullptr;
    // The number of check items that failed to pass the baseline check. This type of check item is considered risk items.
    std::shared_ptr<int32_t> failCount_ = nullptr;
    // The servers on which risk items were detected.
    std::shared_ptr<vector<DescribeStrategyExecDetailResponseBodyFailedEcsList>> failedEcsList_ = nullptr;
    // The number of tasks that are **running **based on the baseline check policy.
    std::shared_ptr<int32_t> inProcessCount_ = nullptr;
    // The execution progress of the baseline check policy.
    std::shared_ptr<string> percent_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The type of the baseline check. Valid values:
    // 
    // *   **Schedule**: automatic check that periodically runs
    // *   **Manual**: intermediate check that is manually performed
    std::shared_ptr<string> source_ = nullptr;
    // The time when the baseline check starts.
    std::shared_ptr<string> startTime_ = nullptr;
    // The number of check items that **passed** the baseline check.
    std::shared_ptr<int32_t> successCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
