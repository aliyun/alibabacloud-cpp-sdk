// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(APSJobs, APSJobs_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(APSJobs, APSJobs_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApsJobsResponseBody() = default ;
    DescribeApsJobsResponseBody(const DescribeApsJobsResponseBody &) = default ;
    DescribeApsJobsResponseBody(DescribeApsJobsResponseBody &&) = default ;
    DescribeApsJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsJobsResponseBody() = default ;
    DescribeApsJobsResponseBody& operator=(const DescribeApsJobsResponseBody &) = default ;
    DescribeApsJobsResponseBody& operator=(DescribeApsJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class APSJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const APSJobs& obj) { 
        DARABONBA_PTR_TO_JSON(ApsJobId, apsJobId_);
        DARABONBA_PTR_TO_JSON(ApsJobName, apsJobName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Delay, delay_);
        DARABONBA_PTR_TO_JSON(DestinationInstanceID, destinationInstanceID_);
        DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
        DARABONBA_PTR_TO_JSON(Projress, projress_);
        DARABONBA_PTR_TO_JSON(SourceInstanceID, sourceInstanceID_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
      };
      friend void from_json(const Darabonba::Json& j, APSJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(ApsJobId, apsJobId_);
        DARABONBA_PTR_FROM_JSON(ApsJobName, apsJobName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Delay, delay_);
        DARABONBA_PTR_FROM_JSON(DestinationInstanceID, destinationInstanceID_);
        DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
        DARABONBA_PTR_FROM_JSON(Projress, projress_);
        DARABONBA_PTR_FROM_JSON(SourceInstanceID, sourceInstanceID_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
      };
      APSJobs() = default ;
      APSJobs(const APSJobs &) = default ;
      APSJobs(APSJobs &&) = default ;
      APSJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~APSJobs() = default ;
      APSJobs& operator=(const APSJobs &) = default ;
      APSJobs& operator=(APSJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apsJobId_ == nullptr
        && this->apsJobName_ == nullptr && this->createTime_ == nullptr && this->delay_ == nullptr && this->destinationInstanceID_ == nullptr && this->errMessage_ == nullptr
        && this->projress_ == nullptr && this->sourceInstanceID_ == nullptr && this->status_ == nullptr && this->subStatus_ == nullptr; };
      // apsJobId Field Functions 
      bool hasApsJobId() const { return this->apsJobId_ != nullptr;};
      void deleteApsJobId() { this->apsJobId_ = nullptr;};
      inline string getApsJobId() const { DARABONBA_PTR_GET_DEFAULT(apsJobId_, "") };
      inline APSJobs& setApsJobId(string apsJobId) { DARABONBA_PTR_SET_VALUE(apsJobId_, apsJobId) };


      // apsJobName Field Functions 
      bool hasApsJobName() const { return this->apsJobName_ != nullptr;};
      void deleteApsJobName() { this->apsJobName_ = nullptr;};
      inline string getApsJobName() const { DARABONBA_PTR_GET_DEFAULT(apsJobName_, "") };
      inline APSJobs& setApsJobName(string apsJobName) { DARABONBA_PTR_SET_VALUE(apsJobName_, apsJobName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline APSJobs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // delay Field Functions 
      bool hasDelay() const { return this->delay_ != nullptr;};
      void deleteDelay() { this->delay_ = nullptr;};
      inline int64_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
      inline APSJobs& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


      // destinationInstanceID Field Functions 
      bool hasDestinationInstanceID() const { return this->destinationInstanceID_ != nullptr;};
      void deleteDestinationInstanceID() { this->destinationInstanceID_ = nullptr;};
      inline string getDestinationInstanceID() const { DARABONBA_PTR_GET_DEFAULT(destinationInstanceID_, "") };
      inline APSJobs& setDestinationInstanceID(string destinationInstanceID) { DARABONBA_PTR_SET_VALUE(destinationInstanceID_, destinationInstanceID) };


      // errMessage Field Functions 
      bool hasErrMessage() const { return this->errMessage_ != nullptr;};
      void deleteErrMessage() { this->errMessage_ = nullptr;};
      inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
      inline APSJobs& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


      // projress Field Functions 
      bool hasProjress() const { return this->projress_ != nullptr;};
      void deleteProjress() { this->projress_ = nullptr;};
      inline string getProjress() const { DARABONBA_PTR_GET_DEFAULT(projress_, "") };
      inline APSJobs& setProjress(string projress) { DARABONBA_PTR_SET_VALUE(projress_, projress) };


      // sourceInstanceID Field Functions 
      bool hasSourceInstanceID() const { return this->sourceInstanceID_ != nullptr;};
      void deleteSourceInstanceID() { this->sourceInstanceID_ = nullptr;};
      inline string getSourceInstanceID() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceID_, "") };
      inline APSJobs& setSourceInstanceID(string sourceInstanceID) { DARABONBA_PTR_SET_VALUE(sourceInstanceID_, sourceInstanceID) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline APSJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subStatus Field Functions 
      bool hasSubStatus() const { return this->subStatus_ != nullptr;};
      void deleteSubStatus() { this->subStatus_ = nullptr;};
      inline string getSubStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
      inline APSJobs& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


    protected:
      // The job ID.
      shared_ptr<string> apsJobId_ {};
      // The name of the APS job.
      shared_ptr<string> apsJobName_ {};
      // The time when the APS job was created.
      shared_ptr<string> createTime_ {};
      // The synchronization latency.
      shared_ptr<int64_t> delay_ {};
      // The destination cluster ID.
      shared_ptr<string> destinationInstanceID_ {};
      // The error message.
      shared_ptr<string> errMessage_ {};
      // The progress.
      shared_ptr<string> projress_ {};
      // The ID of the source instance or cluster.
      shared_ptr<string> sourceInstanceID_ {};
      // The status of the APS job.
      shared_ptr<string> status_ {};
      // The status of the task.
      shared_ptr<string> subStatus_ {};
    };

    virtual bool empty() const override { return this->APSJobs_ == nullptr
        && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // APSJobs Field Functions 
    bool hasAPSJobs() const { return this->APSJobs_ != nullptr;};
    void deleteAPSJobs() { this->APSJobs_ = nullptr;};
    inline const vector<DescribeApsJobsResponseBody::APSJobs> & getAPSJobs() const { DARABONBA_PTR_GET_CONST(APSJobs_, vector<DescribeApsJobsResponseBody::APSJobs>) };
    inline vector<DescribeApsJobsResponseBody::APSJobs> getAPSJobs() { DARABONBA_PTR_GET(APSJobs_, vector<DescribeApsJobsResponseBody::APSJobs>) };
    inline DescribeApsJobsResponseBody& setAPSJobs(const vector<DescribeApsJobsResponseBody::APSJobs> & aPSJobs) { DARABONBA_PTR_SET_VALUE(APSJobs_, aPSJobs) };
    inline DescribeApsJobsResponseBody& setAPSJobs(vector<DescribeApsJobsResponseBody::APSJobs> && aPSJobs) { DARABONBA_PTR_SET_RVALUE(APSJobs_, aPSJobs) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeApsJobsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeApsJobsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeApsJobsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeApsJobsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeApsJobsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApsJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeApsJobsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeApsJobsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried APS jobs.
    shared_ptr<vector<DescribeApsJobsResponseBody::APSJobs>> APSJobs_ {};
    // The HTTP status code.
    shared_ptr<string> code_ {};
    // The status code. A value of 200 indicates that the request was successful.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message. Valid values:
    // 
    // *   If the request was successful, a success message is returned.****
    // *   If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
