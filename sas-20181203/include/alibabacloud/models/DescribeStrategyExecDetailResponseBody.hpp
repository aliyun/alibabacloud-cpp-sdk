// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRATEGYEXECDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRATEGYEXECDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class FailedEcsList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedEcsList& obj) { 
        DARABONBA_PTR_TO_JSON(IP, IP_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
      };
      friend void from_json(const Darabonba::Json& j, FailedEcsList& obj) { 
        DARABONBA_PTR_FROM_JSON(IP, IP_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
      };
      FailedEcsList() = default ;
      FailedEcsList(const FailedEcsList &) = default ;
      FailedEcsList(FailedEcsList &&) = default ;
      FailedEcsList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailedEcsList() = default ;
      FailedEcsList& operator=(const FailedEcsList &) = default ;
      FailedEcsList& operator=(FailedEcsList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->IP_ == nullptr
        && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->reason_ == nullptr; };
      // IP Field Functions 
      bool hasIP() const { return this->IP_ != nullptr;};
      void deleteIP() { this->IP_ = nullptr;};
      inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
      inline FailedEcsList& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline FailedEcsList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline FailedEcsList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline FailedEcsList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline FailedEcsList& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    protected:
      // The IP address of the server on which the baseline check was performed.
      shared_ptr<string> IP_ {};
      // The name of the instance.
      shared_ptr<string> instanceName_ {};
      // The public IP address.
      shared_ptr<string> internetIp_ {};
      // The private IP address.
      shared_ptr<string> intranetIp_ {};
      // The failure cause for the check item.
      shared_ptr<string> reason_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->failCount_ == nullptr && this->failedEcsList_ == nullptr && this->inProcessCount_ == nullptr && this->percent_ == nullptr && this->requestId_ == nullptr
        && this->source_ == nullptr && this->startTime_ == nullptr && this->successCount_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeStrategyExecDetailResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline DescribeStrategyExecDetailResponseBody& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // failedEcsList Field Functions 
    bool hasFailedEcsList() const { return this->failedEcsList_ != nullptr;};
    void deleteFailedEcsList() { this->failedEcsList_ = nullptr;};
    inline const vector<DescribeStrategyExecDetailResponseBody::FailedEcsList> & getFailedEcsList() const { DARABONBA_PTR_GET_CONST(failedEcsList_, vector<DescribeStrategyExecDetailResponseBody::FailedEcsList>) };
    inline vector<DescribeStrategyExecDetailResponseBody::FailedEcsList> getFailedEcsList() { DARABONBA_PTR_GET(failedEcsList_, vector<DescribeStrategyExecDetailResponseBody::FailedEcsList>) };
    inline DescribeStrategyExecDetailResponseBody& setFailedEcsList(const vector<DescribeStrategyExecDetailResponseBody::FailedEcsList> & failedEcsList) { DARABONBA_PTR_SET_VALUE(failedEcsList_, failedEcsList) };
    inline DescribeStrategyExecDetailResponseBody& setFailedEcsList(vector<DescribeStrategyExecDetailResponseBody::FailedEcsList> && failedEcsList) { DARABONBA_PTR_SET_RVALUE(failedEcsList_, failedEcsList) };


    // inProcessCount Field Functions 
    bool hasInProcessCount() const { return this->inProcessCount_ != nullptr;};
    void deleteInProcessCount() { this->inProcessCount_ = nullptr;};
    inline int32_t getInProcessCount() const { DARABONBA_PTR_GET_DEFAULT(inProcessCount_, 0) };
    inline DescribeStrategyExecDetailResponseBody& setInProcessCount(int32_t inProcessCount) { DARABONBA_PTR_SET_VALUE(inProcessCount_, inProcessCount) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline DescribeStrategyExecDetailResponseBody& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStrategyExecDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeStrategyExecDetailResponseBody& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeStrategyExecDetailResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline DescribeStrategyExecDetailResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


  protected:
    // The time when the baseline check ends.
    shared_ptr<string> endTime_ {};
    // The number of check items that failed to pass the baseline check. This type of check item is considered risk items.
    shared_ptr<int32_t> failCount_ {};
    // The servers on which risk items were detected.
    shared_ptr<vector<DescribeStrategyExecDetailResponseBody::FailedEcsList>> failedEcsList_ {};
    // The number of tasks that are **running **based on the baseline check policy.
    shared_ptr<int32_t> inProcessCount_ {};
    // The execution progress of the baseline check policy.
    shared_ptr<string> percent_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The type of the baseline check. Valid values:
    // 
    // *   **Schedule**: automatic check that periodically runs
    // *   **Manual**: intermediate check that is manually performed
    shared_ptr<string> source_ {};
    // The time when the baseline check starts.
    shared_ptr<string> startTime_ {};
    // The number of check items that **passed** the baseline check.
    shared_ptr<int32_t> successCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
