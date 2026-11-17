// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYQUOTARULESUBJECTUSAGEEXPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYQUOTARULESUBJECTUSAGEEXPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateGatewayQuotaRuleSubjectUsageExportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayQuotaRuleSubjectUsageExportTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(filterFailedRequests, filterFailedRequests_);
      DARABONBA_PTR_TO_JSON(format, format_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayQuotaRuleSubjectUsageExportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(filterFailedRequests, filterFailedRequests_);
      DARABONBA_PTR_FROM_JSON(format, format_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    CreateGatewayQuotaRuleSubjectUsageExportTaskRequest() = default ;
    CreateGatewayQuotaRuleSubjectUsageExportTaskRequest(const CreateGatewayQuotaRuleSubjectUsageExportTaskRequest &) = default ;
    CreateGatewayQuotaRuleSubjectUsageExportTaskRequest(CreateGatewayQuotaRuleSubjectUsageExportTaskRequest &&) = default ;
    CreateGatewayQuotaRuleSubjectUsageExportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayQuotaRuleSubjectUsageExportTaskRequest() = default ;
    CreateGatewayQuotaRuleSubjectUsageExportTaskRequest& operator=(const CreateGatewayQuotaRuleSubjectUsageExportTaskRequest &) = default ;
    CreateGatewayQuotaRuleSubjectUsageExportTaskRequest& operator=(CreateGatewayQuotaRuleSubjectUsageExportTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->endTime_ == nullptr && this->filterFailedRequests_ == nullptr && this->format_ == nullptr && this->startTime_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateGatewayQuotaRuleSubjectUsageExportTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateGatewayQuotaRuleSubjectUsageExportTaskRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filterFailedRequests Field Functions 
    bool hasFilterFailedRequests() const { return this->filterFailedRequests_ != nullptr;};
    void deleteFilterFailedRequests() { this->filterFailedRequests_ = nullptr;};
    inline bool getFilterFailedRequests() const { DARABONBA_PTR_GET_DEFAULT(filterFailedRequests_, false) };
    inline CreateGatewayQuotaRuleSubjectUsageExportTaskRequest& setFilterFailedRequests(bool filterFailedRequests) { DARABONBA_PTR_SET_VALUE(filterFailedRequests_, filterFailedRequests) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline CreateGatewayQuotaRuleSubjectUsageExportTaskRequest& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateGatewayQuotaRuleSubjectUsageExportTaskRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The optional token used for request idempotency. It can be up to 128 bytes in length after leading and trailing whitespaces are removed. We recommend that you use ASCII characters.
    // 
    // When the same user retries with the same token and identical request parameters in the current region, the existing task is reused and its current status is returned. If the same token corresponds to different parameters, a parameter error is returned. The compared parameters include gatewayId, ruleId, subjectId, filterFailedRequests, format, and whether startTime and endTime are passed and their values. Omitting the time is not equivalent to explicitly passing 0.
    // 
    // Reusing a task does not recalculate the time range or regenerate the file. When you need to re-export data (including when the original task fails or the file expires), use a new token.
    shared_ptr<string> clientToken_ {};
    // The end time of the export time range. Use a non-negative Unix timestamp in seconds. This time is exclusive.
    // 
    // If only endTime is specified, one rule period is deduced forward from this time as the startTime. If neither is specified, the end time is the task creation time. If both are specified, endTime must be greater than or equal to startTime, and the span cannot exceed one rule period.
    shared_ptr<int64_t> endTime_ {};
    // Specifies whether to export only consumption details with valid usage. Default value: false.
    // 
    // - false: Does not filter records by usage.
    // - true: Filters out records with zero usage based on the token or credit metering dimension of the rule, and retains only records with usage.
    shared_ptr<bool> filterFailedRequests_ {};
    // The format of the exported file. Currently, only CSV_GZIP is supported. If omitted or an empty string is passed, this format is used by default. The file is a GZIP-compressed CSV file named `{taskId}.csv.gz` and must be decompressed before reading.
    shared_ptr<string> format_ {};
    // The start time of the export time range. Use a non-negative Unix timestamp in seconds. This time is inclusive.
    // 
    // - If neither startTime nor endTime is specified: The start point of the current rule epoch to the node creation time is used.
    // - If only startTime is specified: One rule epoch is deduced backward from this time as the endTime.
    // - If both are specified: endTime must be greater than or equal to startTime, and the span cannot exceed one rule epoch.
    // 
    // The actual export start point is also limited by the rule creation time, rule reset, or the effective start point of purge history records. You can confirm this by querying the effectiveWindowStart returned by the node.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
