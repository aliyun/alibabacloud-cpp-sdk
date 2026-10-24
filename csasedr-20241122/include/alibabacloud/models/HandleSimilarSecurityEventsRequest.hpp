// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HANDLESIMILARSECURITYEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HANDLESIMILARSECURITYEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class HandleSimilarSecurityEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HandleSimilarSecurityEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MarkMissParam, markMissParam_);
      DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_TO_JSON(OperationParams, operationParams_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, HandleSimilarSecurityEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MarkMissParam, markMissParam_);
      DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_FROM_JSON(OperationParams, operationParams_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    HandleSimilarSecurityEventsRequest() = default ;
    HandleSimilarSecurityEventsRequest(const HandleSimilarSecurityEventsRequest &) = default ;
    HandleSimilarSecurityEventsRequest(HandleSimilarSecurityEventsRequest &&) = default ;
    HandleSimilarSecurityEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HandleSimilarSecurityEventsRequest() = default ;
    HandleSimilarSecurityEventsRequest& operator=(const HandleSimilarSecurityEventsRequest &) = default ;
    HandleSimilarSecurityEventsRequest& operator=(HandleSimilarSecurityEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->markMissParam_ == nullptr
        && this->operationCode_ == nullptr && this->operationParams_ == nullptr && this->remark_ == nullptr && this->taskId_ == nullptr; };
    // markMissParam Field Functions 
    bool hasMarkMissParam() const { return this->markMissParam_ != nullptr;};
    void deleteMarkMissParam() { this->markMissParam_ = nullptr;};
    inline string getMarkMissParam() const { DARABONBA_PTR_GET_DEFAULT(markMissParam_, "") };
    inline HandleSimilarSecurityEventsRequest& setMarkMissParam(string markMissParam) { DARABONBA_PTR_SET_VALUE(markMissParam_, markMissParam) };


    // operationCode Field Functions 
    bool hasOperationCode() const { return this->operationCode_ != nullptr;};
    void deleteOperationCode() { this->operationCode_ = nullptr;};
    inline string getOperationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
    inline HandleSimilarSecurityEventsRequest& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


    // operationParams Field Functions 
    bool hasOperationParams() const { return this->operationParams_ != nullptr;};
    void deleteOperationParams() { this->operationParams_ = nullptr;};
    inline string getOperationParams() const { DARABONBA_PTR_GET_DEFAULT(operationParams_, "") };
    inline HandleSimilarSecurityEventsRequest& setOperationParams(string operationParams) { DARABONBA_PTR_SET_VALUE(operationParams_, operationParams) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline HandleSimilarSecurityEventsRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline HandleSimilarSecurityEventsRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The JSON array string used to add advanced whitelist or precise defense whitelist rules. This parameter applies only to scenarios where the OperationCode is `advance_mark_mis_info` or `defense_mark_mis_info`. Do not pass this parameter for other operations.
    // 
    // Each rule includes the following fields:
    // 
    // - `field`: The matching field, which is obtained from the FiledName field in the MarkFieldsSource returned by the DescribeSecurityEventOperations operation.
    // - `fieldValue`: The user-defined matching value, which does not need to equal the original field value of the current alert.
    // - `operate`: The matching operator, which must be included in the list returned by the SupportedMisType corresponding to the field. Do not use a common fixed enumeration to replace the supported scope of the current field.
    // - `assetScope`: The effective scope object of the whitelist rule, which includes matchMode (the scope mode) and the corresponding matchTargetIds (the list of scope targets).
    // 
    // The assetScope field specifies the effective scope of the rule. If you only process alerts and do not add whitelist rules, you can leave this parameter empty or pass an empty array string `[]`.
    shared_ptr<string> markMissParam_ {};
    // The operation code for processing endpoint alerts. The allowed operations for the code are as follows:
    // 
    // - `advance_mark_mis_info`: Adds the alert to the advanced whitelist.
    // - `defense_mark_mis_info`: Adds the alert to the precise defense whitelist.
    // - `mark_mis_info`: Marks the alert as a false positive and adds it to the common whitelist.
    // - `rm_mark_mis_info`: Removes the alert from the common or advanced whitelist.
    // - `rm_defense_mark_mis_info`: Removes the alert from the precise defense whitelist.
    // - `ignore`: Ignores the alert.
    // - `manual_handled`: Marks the alert as manually handled.
    // - `cancle_manual`: Cancels the manually handled status of the alert.
    // 
    // The preceding set is not a fixed list of operations that can be performed on every alert. The actual available operations are also restricted by conditions such as feature switches, dynamic whitelists, alert operation configurations, and the current status. Before calling this operation, call the DescribeSecurityEventOperations operation to query the currently available operations for the alert and check UserCanOperate. Use only the OperationCode values that are allowed in the query results.
    // 
    // This parameter is required.
    shared_ptr<string> operationCode_ {};
    // The operation parameters, represented as a JSON object string. If this parameter is not passed or an empty string is passed, the backend processes it as `{}`. The specific parameters must correspond to the OperationCode and are subject to the OperationParams returned by the DescribeSecurityEventOperations operation.
    shared_ptr<string> operationParams_ {};
    // The remark for the operation.
    shared_ptr<string> remark_ {};
    // The ID of the similar alert query task. You can obtain the ID by calling the CreateSimilarSecurityEventsQueryTask operation. The task must belong to the current calling account and must be a similar alert query task. Before calling this operation, call the DescribeSecurityEventOperationStatus operation to query the TaskStatus. Wait until the status reaches DataRetrieved before initiating the processing. The New or RetrievingData status indicates that data extraction is not complete.
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
