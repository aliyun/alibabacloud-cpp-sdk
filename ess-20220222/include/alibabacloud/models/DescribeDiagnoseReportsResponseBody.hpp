// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSEREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSEREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeDiagnoseReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnoseReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Reports, reports_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnoseReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Reports, reports_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDiagnoseReportsResponseBody() = default ;
    DescribeDiagnoseReportsResponseBody(const DescribeDiagnoseReportsResponseBody &) = default ;
    DescribeDiagnoseReportsResponseBody(DescribeDiagnoseReportsResponseBody &&) = default ;
    DescribeDiagnoseReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnoseReportsResponseBody() = default ;
    DescribeDiagnoseReportsResponseBody& operator=(const DescribeDiagnoseReportsResponseBody &) = default ;
    DescribeDiagnoseReportsResponseBody& operator=(DescribeDiagnoseReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Reports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Reports& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Details, details_);
        DARABONBA_PTR_TO_JSON(DiagnoseStatus, diagnoseStatus_);
        DARABONBA_PTR_TO_JSON(ProcessStatus, processStatus_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ReportId, reportId_);
        DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Reports& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Details, details_);
        DARABONBA_PTR_FROM_JSON(DiagnoseStatus, diagnoseStatus_);
        DARABONBA_PTR_FROM_JSON(ProcessStatus, processStatus_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
        DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      class Details : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Details& obj) { 
          DARABONBA_PTR_TO_JSON(DiagnoseType, diagnoseType_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Details& obj) { 
          DARABONBA_PTR_FROM_JSON(DiagnoseType, diagnoseType_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Details() = default ;
        Details(const Details &) = default ;
        Details(Details &&) = default ;
        Details(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Details() = default ;
        Details& operator=(const Details &) = default ;
        Details& operator=(Details &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->diagnoseType_ == nullptr
        && this->errorCode_ == nullptr && this->resourceId_ == nullptr && this->status_ == nullptr; };
        // diagnoseType Field Functions 
        bool hasDiagnoseType() const { return this->diagnoseType_ != nullptr;};
        void deleteDiagnoseType() { this->diagnoseType_ = nullptr;};
        inline string getDiagnoseType() const { DARABONBA_PTR_GET_DEFAULT(diagnoseType_, "") };
        inline Details& setDiagnoseType(string diagnoseType) { DARABONBA_PTR_SET_VALUE(diagnoseType_, diagnoseType) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline Details& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Details& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Details& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The type of the diagnostic item. Valid values:
        // 
        // *   AccountArrearage: Checks whether your Alibaba Cloud account has overdue payments.
        // *   AccountNotEnoughBalance: Checks whether the balance of your Alibaba Cloud account at the China site (aliyun.com) is greater than or equal to CNY 100.
        // *   ElasticStrength: Checks whether the instance types that are specified in the scaling configuration are sufficient.
        // *   VSwitch: Checks whether a specific vSwitch can work as expected. For example, if a vSwitch is deleted, the vSwitch cannot provide services and an exception occurs.
        // *   SecurityGroup: Checks whether a specific security group can work as expected. For example, if a security group is deleted, the security group cannot provide services and an exception occurs.
        // *   KeyPair: Checks whether the key pair is available. If the specified key pair is deleted, specify another key pair for the scaling group.
        // *   SlbBackendServerQuota: Checks whether the number of ECS instances that are added to the default server group and the vServer groups of the SLB instances associated with the scaling group has reached the upper limit.
        // *   AlbBackendServerQuota: Checks whether the number of ECS instances that are added to the backend server groups of the ALB instances associated with the scaling group has reached the upper limit.
        // *   NlbBackendServerQuota: Checks whether the number of ECS instances that are added to the backend server groups of the NLB instances associated with the scaling group has reached the upper limit.
        shared_ptr<string> diagnoseType_ {};
        // The error code of the diagnostic item. Valid values:
        // 
        // *   VSwitchIdNotFound: The vSwitch does not exist.
        // *   SecurityGroupNotFound: The security group does not exist.
        // *   KeyPairNotFound: The key pair does not exist.
        // *   SlbBackendServerQuotaExceeded: The number of ECS instances that are added to the default server group and the vServer groups of the SLB instances associated with the scaling group has reached the upper limit.
        // *   AlbBackendServerQuotaExceeded: The number of ECS instances that are attached to the ALB instances of the scaling group has reached the upper limit.
        // *   NlbBackendServerQuotaExceeded: The number of ECS instances that are attached to the NLB instances of the scaling group has reached the upper limit.
        // *   AccountArrearage: Your account has overdue payments.
        // *   AccountNotEnoughBalance: The balance of your Alibaba Cloud account is less than CNY 100.
        // *   ElasticStrengthAlert: The inventory levels are lower than expected.
        shared_ptr<string> errorCode_ {};
        // The ID of the resource.
        shared_ptr<string> resourceId_ {};
        // The status of the diagnostic item. Valid values:
        // 
        // *   Normal: The diagnostic result is normal.
        // *   Warn: The diagnostic result is warning.
        // *   Critical: The diagnostic result is critical.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->details_ == nullptr && this->diagnoseStatus_ == nullptr && this->processStatus_ == nullptr && this->regionId_ == nullptr && this->reportId_ == nullptr
        && this->scalingGroupId_ == nullptr && this->userId_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Reports& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // details Field Functions 
      bool hasDetails() const { return this->details_ != nullptr;};
      void deleteDetails() { this->details_ = nullptr;};
      inline const vector<Reports::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<Reports::Details>) };
      inline vector<Reports::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<Reports::Details>) };
      inline Reports& setDetails(const vector<Reports::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
      inline Reports& setDetails(vector<Reports::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


      // diagnoseStatus Field Functions 
      bool hasDiagnoseStatus() const { return this->diagnoseStatus_ != nullptr;};
      void deleteDiagnoseStatus() { this->diagnoseStatus_ = nullptr;};
      inline string getDiagnoseStatus() const { DARABONBA_PTR_GET_DEFAULT(diagnoseStatus_, "") };
      inline Reports& setDiagnoseStatus(string diagnoseStatus) { DARABONBA_PTR_SET_VALUE(diagnoseStatus_, diagnoseStatus) };


      // processStatus Field Functions 
      bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
      void deleteProcessStatus() { this->processStatus_ = nullptr;};
      inline string getProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, "") };
      inline Reports& setProcessStatus(string processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Reports& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
      inline Reports& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      // scalingGroupId Field Functions 
      bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
      void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
      inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
      inline Reports& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Reports& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The time when the diagnostic report was created.
      shared_ptr<string> creationTime_ {};
      // The details of the diagnostic report.
      shared_ptr<vector<Reports::Details>> details_ {};
      // The status of the diagnostic item. Only the severe status is displayed in the diagnostic report. Valid values:
      // 
      // *   Normal: The diagnostic result is normal.
      // *   Warn: The diagnostic result is warning.
      // *   Critical: The diagnostic result is critical.
      shared_ptr<string> diagnoseStatus_ {};
      // The status of the diagnostic report. Valid values:
      // 
      // *   processing: The diagnosis is in progress.
      // *   Finished: The diagnosis is complete.
      shared_ptr<string> processStatus_ {};
      // The ID of the region.
      shared_ptr<string> regionId_ {};
      // The ID of the diagnostic report.
      shared_ptr<string> reportId_ {};
      // The ID of the scaling group.
      shared_ptr<string> scalingGroupId_ {};
      // The user ID of the scaling group.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->reports_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDiagnoseReportsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDiagnoseReportsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reports Field Functions 
    bool hasReports() const { return this->reports_ != nullptr;};
    void deleteReports() { this->reports_ = nullptr;};
    inline const vector<DescribeDiagnoseReportsResponseBody::Reports> & getReports() const { DARABONBA_PTR_GET_CONST(reports_, vector<DescribeDiagnoseReportsResponseBody::Reports>) };
    inline vector<DescribeDiagnoseReportsResponseBody::Reports> getReports() { DARABONBA_PTR_GET(reports_, vector<DescribeDiagnoseReportsResponseBody::Reports>) };
    inline DescribeDiagnoseReportsResponseBody& setReports(const vector<DescribeDiagnoseReportsResponseBody::Reports> & reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };
    inline DescribeDiagnoseReportsResponseBody& setReports(vector<DescribeDiagnoseReportsResponseBody::Reports> && reports) { DARABONBA_PTR_SET_RVALUE(reports_, reports) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnoseReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDiagnoseReportsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The diagnostic reports.
    shared_ptr<vector<DescribeDiagnoseReportsResponseBody::Reports>> reports_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of diagnostic reports.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
