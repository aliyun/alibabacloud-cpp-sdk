// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HANDLESECURITYEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HANDLESECURITYEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
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
      DARABONBA_PTR_TO_JSON(SecurityEventIds, securityEventIds_);
    };
    friend void from_json(const Darabonba::Json& j, HandleSecurityEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MarkBatch, markBatch_);
      DARABONBA_PTR_FROM_JSON(MarkMissParam, markMissParam_);
      DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_FROM_JSON(OperationParams, operationParams_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SecurityEventIds, securityEventIds_);
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
        && this->markMissParam_ == nullptr && this->operationCode_ == nullptr && this->operationParams_ == nullptr && this->remark_ == nullptr && this->securityEventIds_ == nullptr; };
    // markBatch Field Functions 
    bool hasMarkBatch() const { return this->markBatch_ != nullptr;};
    void deleteMarkBatch() { this->markBatch_ = nullptr;};
    inline bool getMarkBatch() const { DARABONBA_PTR_GET_DEFAULT(markBatch_, false) };
    inline HandleSecurityEventsRequest& setMarkBatch(bool markBatch) { DARABONBA_PTR_SET_VALUE(markBatch_, markBatch) };


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


    // securityEventIds Field Functions 
    bool hasSecurityEventIds() const { return this->securityEventIds_ != nullptr;};
    void deleteSecurityEventIds() { this->securityEventIds_ = nullptr;};
    inline const vector<int64_t> & getSecurityEventIds() const { DARABONBA_PTR_GET_CONST(securityEventIds_, vector<int64_t>) };
    inline vector<int64_t> getSecurityEventIds() { DARABONBA_PTR_GET(securityEventIds_, vector<int64_t>) };
    inline HandleSecurityEventsRequest& setSecurityEventIds(const vector<int64_t> & securityEventIds) { DARABONBA_PTR_SET_VALUE(securityEventIds_, securityEventIds) };
    inline HandleSecurityEventsRequest& setSecurityEventIds(vector<int64_t> && securityEventIds) { DARABONBA_PTR_SET_RVALUE(securityEventIds_, securityEventIds) };


  protected:
    // Specifies whether to add to the whitelist in batches. Valid values:
    // - true: Yes.
    // - false: No.
    shared_ptr<bool> markBatch_ {};
    // The JSON array string used when adding an advanced whitelist or precise defense whitelist rule. This parameter applies only when OperationCode is set to `advance_mark_mis_info` or `defense_mark_mis_info`. Do not pass this parameter for other operations.
    // 
    // Each rule contains the following fields:
    // - `field`: The matching field, which is obtained from the FiledName in MarkFieldsSource returned by DescribeSecurityEventOperations.
    // - `fieldValue`: The user-defined matching value, which does not need to be equal to the original field value of the current alert.
    // - `operate`: The matching operator, which must belong to the SupportedMisType list returned for the field. Do not use a general fixed enumeration instead of the supported range for the current field.
    // - `assetScope`: The effective scope object of the whitelist rule, which includes matchMode (scope mode) and the corresponding matchTargetIds (scope target list).
    // 
    // The assetScope parameter specifies the effective scope of the rule. If you only handle the alert and do not add a whitelist rule, you can omit this parameter or pass an empty array string `[]`.
    shared_ptr<string> markMissParam_ {};
    // The operation code for handling the endpoint alert. Valid values:
    // - advance_mark_mis_info: Adds to the advanced whitelist.
    // - defense_mark_mis_info: Adds to the precise defense whitelist.
    // - mark_mis_info: Marks as a false positive (standard whitelisting).
    // - rm_mark_mis_info: Removes from the standard or advanced whitelist.
    // - rm_defense_mark_mis_info: Removes from the precise defense whitelist.
    // - ignore: Ignores the alert.
    // - manual_handled: Marks as manually handled.
    // - cancle_manual: Cancels the manually handled status.
    // The preceding list is not a fixed set of operations that can be performed on every alert. The actual available operations are also restricted by feature switches, dynamic whitelists, alert operation configurations, and the current status. Before you call this operation, call DescribeSecurityEventOperations to query the currently available operations for the alert and check UserCanOperate. Use only the OperationCode values that are allowed in the query result.
    // 
    // This parameter is required.
    shared_ptr<string> operationCode_ {};
    // The operation parameters, represented as a JSON object string. If this parameter is not passed or an empty string is passed, the backend processes it as `{}`. The specific parameters must correspond to the OperationCode and are subject to the OperationParams returned by DescribeSecurityEventOperations.
    shared_ptr<string> operationParams_ {};
    // The remark for the handling operation.
    shared_ptr<string> remark_ {};
    // The IDs of the security alert events to handle.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> securityEventIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
