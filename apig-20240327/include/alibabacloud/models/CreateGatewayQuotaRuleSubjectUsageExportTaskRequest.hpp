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
    shared_ptr<string> clientToken_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<bool> filterFailedRequests_ {};
    shared_ptr<string> format_ {};
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
