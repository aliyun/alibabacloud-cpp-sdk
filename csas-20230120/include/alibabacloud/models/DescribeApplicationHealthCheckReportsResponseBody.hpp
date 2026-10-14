// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONHEALTHCHECKREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONHEALTHCHECKREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class DescribeApplicationHealthCheckReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationHealthCheckReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Reports, reports_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationHealthCheckReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Reports, reports_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApplicationHealthCheckReportsResponseBody() = default ;
    DescribeApplicationHealthCheckReportsResponseBody(const DescribeApplicationHealthCheckReportsResponseBody &) = default ;
    DescribeApplicationHealthCheckReportsResponseBody(DescribeApplicationHealthCheckReportsResponseBody &&) = default ;
    DescribeApplicationHealthCheckReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationHealthCheckReportsResponseBody() = default ;
    DescribeApplicationHealthCheckReportsResponseBody& operator=(const DescribeApplicationHealthCheckReportsResponseBody &) = default ;
    DescribeApplicationHealthCheckReportsResponseBody& operator=(DescribeApplicationHealthCheckReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Reports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Reports& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(FailedAddresses, failedAddresses_);
        DARABONBA_PTR_TO_JSON(FailedRegions, failedRegions_);
        DARABONBA_PTR_TO_JSON(FailureCount, failureCount_);
        DARABONBA_PTR_TO_JSON(FailureReasons, failureReasons_);
        DARABONBA_PTR_TO_JSON(HealthCheckStatus, healthCheckStatus_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      };
      friend void from_json(const Darabonba::Json& j, Reports& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(FailedAddresses, failedAddresses_);
        DARABONBA_PTR_FROM_JSON(FailedRegions, failedRegions_);
        DARABONBA_PTR_FROM_JSON(FailureCount, failureCount_);
        DARABONBA_PTR_FROM_JSON(FailureReasons, failureReasons_);
        DARABONBA_PTR_FROM_JSON(HealthCheckStatus, healthCheckStatus_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      };
      Reports() = default ;
      Reports(const Reports &) = default ;
      Reports(Reports &&) = default ;
      Reports(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Reports() = default ;
      Reports& operator=(const Reports &) = default ;
      Reports& operator=(Reports &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->failedAddresses_ == nullptr && this->failedRegions_ == nullptr && this->failureCount_ == nullptr && this->failureReasons_ == nullptr && this->healthCheckStatus_ == nullptr
        && this->mode_ == nullptr && this->successCount_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline Reports& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // failedAddresses Field Functions 
      bool hasFailedAddresses() const { return this->failedAddresses_ != nullptr;};
      void deleteFailedAddresses() { this->failedAddresses_ = nullptr;};
      inline const vector<string> & getFailedAddresses() const { DARABONBA_PTR_GET_CONST(failedAddresses_, vector<string>) };
      inline vector<string> getFailedAddresses() { DARABONBA_PTR_GET(failedAddresses_, vector<string>) };
      inline Reports& setFailedAddresses(const vector<string> & failedAddresses) { DARABONBA_PTR_SET_VALUE(failedAddresses_, failedAddresses) };
      inline Reports& setFailedAddresses(vector<string> && failedAddresses) { DARABONBA_PTR_SET_RVALUE(failedAddresses_, failedAddresses) };


      // failedRegions Field Functions 
      bool hasFailedRegions() const { return this->failedRegions_ != nullptr;};
      void deleteFailedRegions() { this->failedRegions_ = nullptr;};
      inline const vector<string> & getFailedRegions() const { DARABONBA_PTR_GET_CONST(failedRegions_, vector<string>) };
      inline vector<string> getFailedRegions() { DARABONBA_PTR_GET(failedRegions_, vector<string>) };
      inline Reports& setFailedRegions(const vector<string> & failedRegions) { DARABONBA_PTR_SET_VALUE(failedRegions_, failedRegions) };
      inline Reports& setFailedRegions(vector<string> && failedRegions) { DARABONBA_PTR_SET_RVALUE(failedRegions_, failedRegions) };


      // failureCount Field Functions 
      bool hasFailureCount() const { return this->failureCount_ != nullptr;};
      void deleteFailureCount() { this->failureCount_ = nullptr;};
      inline int64_t getFailureCount() const { DARABONBA_PTR_GET_DEFAULT(failureCount_, 0L) };
      inline Reports& setFailureCount(int64_t failureCount) { DARABONBA_PTR_SET_VALUE(failureCount_, failureCount) };


      // failureReasons Field Functions 
      bool hasFailureReasons() const { return this->failureReasons_ != nullptr;};
      void deleteFailureReasons() { this->failureReasons_ = nullptr;};
      inline const vector<string> & getFailureReasons() const { DARABONBA_PTR_GET_CONST(failureReasons_, vector<string>) };
      inline vector<string> getFailureReasons() { DARABONBA_PTR_GET(failureReasons_, vector<string>) };
      inline Reports& setFailureReasons(const vector<string> & failureReasons) { DARABONBA_PTR_SET_VALUE(failureReasons_, failureReasons) };
      inline Reports& setFailureReasons(vector<string> && failureReasons) { DARABONBA_PTR_SET_RVALUE(failureReasons_, failureReasons) };


      // healthCheckStatus Field Functions 
      bool hasHealthCheckStatus() const { return this->healthCheckStatus_ != nullptr;};
      void deleteHealthCheckStatus() { this->healthCheckStatus_ = nullptr;};
      inline string getHealthCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(healthCheckStatus_, "") };
      inline Reports& setHealthCheckStatus(string healthCheckStatus) { DARABONBA_PTR_SET_VALUE(healthCheckStatus_, healthCheckStatus) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Reports& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int64_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0L) };
      inline Reports& setSuccessCount(int64_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    protected:
      // The ID of the internal-facing application.
      shared_ptr<string> applicationId_ {};
      // The list of addresses where health checks failed.
      shared_ptr<vector<string>> failedAddresses_ {};
      // The list of regions where health checks failed.
      shared_ptr<vector<string>> failedRegions_ {};
      // The number of failed health checks within the query time range.
      shared_ptr<int64_t> failureCount_ {};
      // The list of reasons for health check failures.
      shared_ptr<vector<string>> failureReasons_ {};
      // The status calculated based on the latest check result. Valid values:
      // * normal: The success rate of the latest check is greater than or equal to 95%.
      // * partialError: The success rate of the latest check is greater than 0 and less than 95%.
      // * error: The success rate of the latest check is 0.
      // * uncompleted: No check results are available.
      shared_ptr<string> healthCheckStatus_ {};
      // The health check mode. Valid values:
      // * OnAccess: on-access check
      // * Continuous: continuous check
      shared_ptr<string> mode_ {};
      // The number of successful health checks within the query time range.
      shared_ptr<int64_t> successCount_ {};
    };

    virtual bool empty() const override { return this->reports_ == nullptr
        && this->requestId_ == nullptr; };
    // reports Field Functions 
    bool hasReports() const { return this->reports_ != nullptr;};
    void deleteReports() { this->reports_ = nullptr;};
    inline const vector<DescribeApplicationHealthCheckReportsResponseBody::Reports> & getReports() const { DARABONBA_PTR_GET_CONST(reports_, vector<DescribeApplicationHealthCheckReportsResponseBody::Reports>) };
    inline vector<DescribeApplicationHealthCheckReportsResponseBody::Reports> getReports() { DARABONBA_PTR_GET(reports_, vector<DescribeApplicationHealthCheckReportsResponseBody::Reports>) };
    inline DescribeApplicationHealthCheckReportsResponseBody& setReports(const vector<DescribeApplicationHealthCheckReportsResponseBody::Reports> & reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };
    inline DescribeApplicationHealthCheckReportsResponseBody& setReports(vector<DescribeApplicationHealthCheckReportsResponseBody::Reports> && reports) { DARABONBA_PTR_SET_RVALUE(reports_, reports) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationHealthCheckReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of health check reports.
    shared_ptr<vector<DescribeApplicationHealthCheckReportsResponseBody::Reports>> reports_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
