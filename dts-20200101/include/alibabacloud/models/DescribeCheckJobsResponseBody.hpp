// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeCheckJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckJobs, checkJobs_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckJobs, checkJobs_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeCheckJobsResponseBody() = default ;
    DescribeCheckJobsResponseBody(const DescribeCheckJobsResponseBody &) = default ;
    DescribeCheckJobsResponseBody(DescribeCheckJobsResponseBody &&) = default ;
    DescribeCheckJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckJobsResponseBody() = default ;
    DescribeCheckJobsResponseBody& operator=(const DescribeCheckJobsResponseBody &) = default ;
    DescribeCheckJobsResponseBody& operator=(DescribeCheckJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckJobs& obj) { 
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CheckPoint, checkPoint_);
        DARABONBA_PTR_TO_JSON(CheckType, checkType_);
        DARABONBA_PTR_TO_JSON(DiffCount, diffCount_);
        DARABONBA_PTR_TO_JSON(DiffSum, diffSum_);
        DARABONBA_PTR_TO_JSON(DtsInstanceID, dtsInstanceID_);
        DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
        DARABONBA_PTR_TO_JSON(FinishCount, finishCount_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(JobStepId, jobStepId_);
        DARABONBA_PTR_TO_JSON(ParentJobType, parentJobType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, CheckJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CheckPoint, checkPoint_);
        DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
        DARABONBA_PTR_FROM_JSON(DiffCount, diffCount_);
        DARABONBA_PTR_FROM_JSON(DiffSum, diffSum_);
        DARABONBA_PTR_FROM_JSON(DtsInstanceID, dtsInstanceID_);
        DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
        DARABONBA_PTR_FROM_JSON(FinishCount, finishCount_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(JobStepId, jobStepId_);
        DARABONBA_PTR_FROM_JSON(ParentJobType, parentJobType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      CheckJobs() = default ;
      CheckJobs(const CheckJobs &) = default ;
      CheckJobs(CheckJobs &&) = default ;
      CheckJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckJobs() = default ;
      CheckJobs& operator=(const CheckJobs &) = default ;
      CheckJobs& operator=(CheckJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->checkPoint_ == nullptr && this->checkType_ == nullptr && this->diffCount_ == nullptr && this->diffSum_ == nullptr && this->dtsInstanceID_ == nullptr
        && this->dtsJobId_ == nullptr && this->finishCount_ == nullptr && this->groupId_ == nullptr && this->instanceClass_ == nullptr && this->jobName_ == nullptr
        && this->jobStepId_ == nullptr && this->parentJobType_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->totalCount_ == nullptr; };
      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline CheckJobs& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // checkPoint Field Functions 
      bool hasCheckPoint() const { return this->checkPoint_ != nullptr;};
      void deleteCheckPoint() { this->checkPoint_ = nullptr;};
      inline int64_t getCheckPoint() const { DARABONBA_PTR_GET_DEFAULT(checkPoint_, 0L) };
      inline CheckJobs& setCheckPoint(int64_t checkPoint) { DARABONBA_PTR_SET_VALUE(checkPoint_, checkPoint) };


      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
      inline CheckJobs& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


      // diffCount Field Functions 
      bool hasDiffCount() const { return this->diffCount_ != nullptr;};
      void deleteDiffCount() { this->diffCount_ = nullptr;};
      inline int64_t getDiffCount() const { DARABONBA_PTR_GET_DEFAULT(diffCount_, 0L) };
      inline CheckJobs& setDiffCount(int64_t diffCount) { DARABONBA_PTR_SET_VALUE(diffCount_, diffCount) };


      // diffSum Field Functions 
      bool hasDiffSum() const { return this->diffSum_ != nullptr;};
      void deleteDiffSum() { this->diffSum_ = nullptr;};
      inline int64_t getDiffSum() const { DARABONBA_PTR_GET_DEFAULT(diffSum_, 0L) };
      inline CheckJobs& setDiffSum(int64_t diffSum) { DARABONBA_PTR_SET_VALUE(diffSum_, diffSum) };


      // dtsInstanceID Field Functions 
      bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
      void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
      inline string getDtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
      inline CheckJobs& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


      // dtsJobId Field Functions 
      bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
      void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
      inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
      inline CheckJobs& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


      // finishCount Field Functions 
      bool hasFinishCount() const { return this->finishCount_ != nullptr;};
      void deleteFinishCount() { this->finishCount_ = nullptr;};
      inline int64_t getFinishCount() const { DARABONBA_PTR_GET_DEFAULT(finishCount_, 0L) };
      inline CheckJobs& setFinishCount(int64_t finishCount) { DARABONBA_PTR_SET_VALUE(finishCount_, finishCount) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline CheckJobs& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // instanceClass Field Functions 
      bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
      void deleteInstanceClass() { this->instanceClass_ = nullptr;};
      inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
      inline CheckJobs& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline CheckJobs& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // jobStepId Field Functions 
      bool hasJobStepId() const { return this->jobStepId_ != nullptr;};
      void deleteJobStepId() { this->jobStepId_ = nullptr;};
      inline string getJobStepId() const { DARABONBA_PTR_GET_DEFAULT(jobStepId_, "") };
      inline CheckJobs& setJobStepId(string jobStepId) { DARABONBA_PTR_SET_VALUE(jobStepId_, jobStepId) };


      // parentJobType Field Functions 
      bool hasParentJobType() const { return this->parentJobType_ != nullptr;};
      void deleteParentJobType() { this->parentJobType_ = nullptr;};
      inline string getParentJobType() const { DARABONBA_PTR_GET_DEFAULT(parentJobType_, "") };
      inline CheckJobs& setParentJobType(string parentJobType) { DARABONBA_PTR_SET_VALUE(parentJobType_, parentJobType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline CheckJobs& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline CheckJobs& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline CheckJobs& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // Billing type, return values: - **POSTPAY**: Pay-as-you-go (postpaid). - **PREPAY**: Subscription (prepaid).
      shared_ptr<string> chargeType_ {};
      // checkpoint
      shared_ptr<int64_t> checkPoint_ {};
      // Data validation method, with values:
      // - **1**: Full validation. - **2**: Incremental validation.
      shared_ptr<int32_t> checkType_ {};
      // Number of rows with data inconsistency
      shared_ptr<int64_t> diffCount_ {};
      // Synchronization initialization progress, in percentage.
      shared_ptr<int64_t> diffSum_ {};
      // Migration, synchronization, or subscription instance ID.
      shared_ptr<string> dtsInstanceID_ {};
      // Migration, synchronization, or subscription task ID.
      shared_ptr<string> dtsJobId_ {};
      // The number of data rows in the table that have completed validation.
      shared_ptr<int64_t> finishCount_ {};
      // DTS task ID. In most cases, there is no need to set this parameter.
      shared_ptr<string> groupId_ {};
      // Instance specification.
      shared_ptr<string> instanceClass_ {};
      // Check the name of the task.
      shared_ptr<string> jobName_ {};
      // Task ID.
      shared_ptr<string> jobStepId_ {};
      // This parameter will be deprecated.
      shared_ptr<string> parentJobType_ {};
      // Region ID to which it belongs.
      shared_ptr<string> regionId_ {};
      // Check result, return values: -**0**: Check passed -**1**: Check failed
      shared_ptr<int32_t> status_ {};
      // Verify the total number of rows in the data.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->checkJobs_ == nullptr
        && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalRecordCount_ == nullptr; };
    // checkJobs Field Functions 
    bool hasCheckJobs() const { return this->checkJobs_ != nullptr;};
    void deleteCheckJobs() { this->checkJobs_ = nullptr;};
    inline const vector<DescribeCheckJobsResponseBody::CheckJobs> & getCheckJobs() const { DARABONBA_PTR_GET_CONST(checkJobs_, vector<DescribeCheckJobsResponseBody::CheckJobs>) };
    inline vector<DescribeCheckJobsResponseBody::CheckJobs> getCheckJobs() { DARABONBA_PTR_GET(checkJobs_, vector<DescribeCheckJobsResponseBody::CheckJobs>) };
    inline DescribeCheckJobsResponseBody& setCheckJobs(const vector<DescribeCheckJobsResponseBody::CheckJobs> & checkJobs) { DARABONBA_PTR_SET_VALUE(checkJobs_, checkJobs) };
    inline DescribeCheckJobsResponseBody& setCheckJobs(vector<DescribeCheckJobsResponseBody::CheckJobs> && checkJobs) { DARABONBA_PTR_SET_RVALUE(checkJobs_, checkJobs) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeCheckJobsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeCheckJobsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeCheckJobsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeCheckJobsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeCheckJobsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCheckJobsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int64_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0L) };
    inline DescribeCheckJobsResponseBody& setPageRecordCount(int64_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCheckJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCheckJobsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline DescribeCheckJobsResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // Item information check.
    shared_ptr<vector<DescribeCheckJobsResponseBody::CheckJobs>> checkJobs_ {};
    // Dynamic error code, this parameter will be deprecated soon.
    shared_ptr<string> dynamicCode_ {};
    // Dynamic error message, used to replace the **%s** in the **errmessage** return parameter. If **errmessage** returns **thevalueofinputparameter%sisnotvalid**, and **dynamicmessage** returns *[1,2,3]*, it indicates that the request parameter **dtsjobid** is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // Error code returned when the call fails.
    shared_ptr<string> errCode_ {};
    // Error message returned when the call fails.
    shared_ptr<string> errMessage_ {};
    // Status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // Current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The maximum number of records that can be displayed on the current page.
    shared_ptr<int64_t> pageRecordCount_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Whether the request was successful.
    shared_ptr<bool> success_ {};
    // Total number of records.
    shared_ptr<int64_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
