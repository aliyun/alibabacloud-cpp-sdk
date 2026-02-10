// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HANDLESECURITYEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HANDLESECURITYEVENTSREQUEST_HPP_
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
  class HandleSecurityEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HandleSecurityEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MarkBatch, markBatch_);
      DARABONBA_PTR_TO_JSON(MarkMissParam, markMissParam_);
      DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_TO_JSON(OperationParams, operationParams_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(SecurityEventIds, securityEventIds_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, HandleSecurityEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MarkBatch, markBatch_);
      DARABONBA_PTR_FROM_JSON(MarkMissParam, markMissParam_);
      DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_FROM_JSON(OperationParams, operationParams_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventIds, securityEventIds_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    HandleSecurityEventsRequest() = default ;
    HandleSecurityEventsRequest(const HandleSecurityEventsRequest &) = default ;
    HandleSecurityEventsRequest(HandleSecurityEventsRequest &&) = default ;
    HandleSecurityEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HandleSecurityEventsRequest() = default ;
    HandleSecurityEventsRequest& operator=(const HandleSecurityEventsRequest &) = default ;
    HandleSecurityEventsRequest& operator=(HandleSecurityEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->markBatch_ == nullptr
        && this->markMissParam_ == nullptr && this->operationCode_ == nullptr && this->operationParams_ == nullptr && this->remark_ == nullptr && this->resourceDirectoryAccountId_ == nullptr
        && this->securityEventIds_ == nullptr && this->sourceIp_ == nullptr; };
    // markBatch Field Functions 
    bool hasMarkBatch() const { return this->markBatch_ != nullptr;};
    void deleteMarkBatch() { this->markBatch_ = nullptr;};
    inline string getMarkBatch() const { DARABONBA_PTR_GET_DEFAULT(markBatch_, "") };
    inline HandleSecurityEventsRequest& setMarkBatch(string markBatch) { DARABONBA_PTR_SET_VALUE(markBatch_, markBatch) };


    // markMissParam Field Functions 
    bool hasMarkMissParam() const { return this->markMissParam_ != nullptr;};
    void deleteMarkMissParam() { this->markMissParam_ = nullptr;};
    inline string getMarkMissParam() const { DARABONBA_PTR_GET_DEFAULT(markMissParam_, "") };
    inline HandleSecurityEventsRequest& setMarkMissParam(string markMissParam) { DARABONBA_PTR_SET_VALUE(markMissParam_, markMissParam) };


    // operationCode Field Functions 
    bool hasOperationCode() const { return this->operationCode_ != nullptr;};
    void deleteOperationCode() { this->operationCode_ = nullptr;};
    inline string getOperationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
    inline HandleSecurityEventsRequest& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


    // operationParams Field Functions 
    bool hasOperationParams() const { return this->operationParams_ != nullptr;};
    void deleteOperationParams() { this->operationParams_ = nullptr;};
    inline string getOperationParams() const { DARABONBA_PTR_GET_DEFAULT(operationParams_, "") };
    inline HandleSecurityEventsRequest& setOperationParams(string operationParams) { DARABONBA_PTR_SET_VALUE(operationParams_, operationParams) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline HandleSecurityEventsRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline HandleSecurityEventsRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // securityEventIds Field Functions 
    bool hasSecurityEventIds() const { return this->securityEventIds_ != nullptr;};
    void deleteSecurityEventIds() { this->securityEventIds_ = nullptr;};
    inline const vector<string> & getSecurityEventIds() const { DARABONBA_PTR_GET_CONST(securityEventIds_, vector<string>) };
    inline vector<string> getSecurityEventIds() { DARABONBA_PTR_GET(securityEventIds_, vector<string>) };
    inline HandleSecurityEventsRequest& setSecurityEventIds(const vector<string> & securityEventIds) { DARABONBA_PTR_SET_VALUE(securityEventIds_, securityEventIds) };
    inline HandleSecurityEventsRequest& setSecurityEventIds(vector<string> && securityEventIds) { DARABONBA_PTR_SET_RVALUE(securityEventIds_, securityEventIds) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline HandleSecurityEventsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // Specifies whether to add multiple alert events to the whitelist at a time. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<string> markBatch_ {};
    // The whitelist rule. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **field**: The field based on which alert events are added to the whitelist.
    // 
    // *   **operate**: The method that is used to added alert events to the whitelist. Valid values:
    // 
    //     *   **notContains**: does not contain
    //     *   **contains**: contains
    //     *   **regex**: matches by regular expression
    //     *   **strEqual**: equals
    //     *   **strNotEqual**: does not equal
    // 
    // *   **fieldValue**: The value of the field based on which alert events are added to the whitelist.
    // 
    // *   **uuid**: The application scope of the whitelist rule. Valid values:
    // 
    //     *   **part**: the current asset
    //     *   **ALL**: all assets
    // 
    // >  You can call the [DescribeSecurityEventOperations](~~DescribeSecurityEventOperations~~) operation to obtain the fields that you can specify for **field**.
    shared_ptr<string> markMissParam_ {};
    // The operation that you want to perform to handle the alert events. Valid values:
    // 
    // *   **block_ip**: blocks the source IP address.
    // *   **advance_mark_mis_info**: adds the alert events to the whitelist.
    // *   **ignore**: ignores the alert events.
    // *   **manual_handled**: marks the alert events as manually handled.
    // *   **kill_process**: terminates the malicious process.
    // *   **cleanup**: performs in-depth virus detection and removal.
    // *   **kill_and_quara**: kills the malicious processes and quarantines the source file.
    // *   **disable_malicious_defense**: stops the container on which the alerting files or processes exist.
    // *   **client_problem_check**: performs troubleshooting.
    // *   **quara**: quarantines the source file of the malicious process.
    // 
    // This parameter is required.
    shared_ptr<string> operationCode_ {};
    // The configuration of the operation that you want to perform to handle the alert events.
    // 
    // >  If you set OperationCode to `kill_and_quara` or `block_ip`, you must specify OperationParams. If you set OperationCode to other values, you can leave OperationParams empty.
    shared_ptr<string> operationParams_ {};
    // The remarks of the handling operation.
    shared_ptr<string> remark_ {};
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain the IDs.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The IDs of the alert events.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> securityEventIds_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
