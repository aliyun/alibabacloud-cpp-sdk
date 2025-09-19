// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATIONSUSPEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATIONSUSPEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperationSuspEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperationSuspEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(SubOperation, subOperation_);
      DARABONBA_PTR_TO_JSON(SuspiciousEventIds, suspiciousEventIds_);
      DARABONBA_PTR_TO_JSON(WarnType, warnType_);
    };
    friend void from_json(const Darabonba::Json& j, OperationSuspEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(SubOperation, subOperation_);
      DARABONBA_PTR_FROM_JSON(SuspiciousEventIds, suspiciousEventIds_);
      DARABONBA_PTR_FROM_JSON(WarnType, warnType_);
    };
    OperationSuspEventsRequest() = default ;
    OperationSuspEventsRequest(const OperationSuspEventsRequest &) = default ;
    OperationSuspEventsRequest(OperationSuspEventsRequest &&) = default ;
    OperationSuspEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperationSuspEventsRequest() = default ;
    OperationSuspEventsRequest& operator=(const OperationSuspEventsRequest &) = default ;
    OperationSuspEventsRequest& operator=(OperationSuspEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->from_ != nullptr
        && this->operation_ != nullptr && this->sourceIp_ != nullptr && this->subOperation_ != nullptr && this->suspiciousEventIds_ != nullptr && this->warnType_ != nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline OperationSuspEventsRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline OperationSuspEventsRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline OperationSuspEventsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // subOperation Field Functions 
    bool hasSubOperation() const { return this->subOperation_ != nullptr;};
    void deleteSubOperation() { this->subOperation_ = nullptr;};
    inline string subOperation() const { DARABONBA_PTR_GET_DEFAULT(subOperation_, "") };
    inline OperationSuspEventsRequest& setSubOperation(string subOperation) { DARABONBA_PTR_SET_VALUE(subOperation_, subOperation) };


    // suspiciousEventIds Field Functions 
    bool hasSuspiciousEventIds() const { return this->suspiciousEventIds_ != nullptr;};
    void deleteSuspiciousEventIds() { this->suspiciousEventIds_ = nullptr;};
    inline string suspiciousEventIds() const { DARABONBA_PTR_GET_DEFAULT(suspiciousEventIds_, "") };
    inline OperationSuspEventsRequest& setSuspiciousEventIds(string suspiciousEventIds) { DARABONBA_PTR_SET_VALUE(suspiciousEventIds_, suspiciousEventIds) };


    // warnType Field Functions 
    bool hasWarnType() const { return this->warnType_ != nullptr;};
    void deleteWarnType() { this->warnType_ = nullptr;};
    inline string warnType() const { DARABONBA_PTR_GET_DEFAULT(warnType_, "") };
    inline OperationSuspEventsRequest& setWarnType(string warnType) { DARABONBA_PTR_SET_VALUE(warnType_, warnType) };


  protected:
    // The ID of the request source.
    // 
    // Set the value to **sas**, which indicates that the request is sent from Security Center.
    std::shared_ptr<string> from_ = nullptr;
    // The operation that you want to perform on alerts. Valid values:
    // 
    // *   **deal**: quarantines the source file of the malicious process.
    // *   **ignore**: ignores the alerts.
    // *   **mark_mis_info**: marks the alerts as false positives by adding the alerts to the whitelist.
    // *   **rm_mark_mis_info**: cancels false positives by removing the alerts from the whitelist.
    // *   **offline_handled**: marks the alerts as handled.
    // 
    // This parameter is required.
    std::shared_ptr<string> operation_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The suboperation that you want to perform when you quarantine the source file of the malicious process. Valid values:
    // 
    // *   **killAndQuaraFileByPidAndMd5andPath**: terminates the process based on its process ID (PID) and quarantines the source file of the process.
    // *   **quaraFileByMd5andPath**: quarantines the source file of the process.
    // *   **killAndQuaraFileByMd5andPath**: terminates the process and quarantines the source file of the process.
    std::shared_ptr<string> subOperation_ = nullptr;
    // The IDs of alert events.
    // 
    // > You can call the [DescribeSuspEvents](~~DescribeSuspEvents~~) operation to obtain the IDs of alert events from the SecurityEventIds response parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> suspiciousEventIds_ = nullptr;
    // The type of the exceptions. Valid values:
    // 
    // *   **alarm**: alerts
    // *   **null**: exceptions
    std::shared_ptr<string> warnType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
