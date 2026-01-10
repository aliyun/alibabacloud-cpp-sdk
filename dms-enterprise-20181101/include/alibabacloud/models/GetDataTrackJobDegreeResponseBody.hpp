// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATATRACKJOBDEGREERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATATRACKJOBDEGREERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataTrackJobDegreeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataTrackJobDegreeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(JobDegree, jobDegree_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataTrackJobDegreeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(JobDegree, jobDegree_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataTrackJobDegreeResponseBody() = default ;
    GetDataTrackJobDegreeResponseBody(const GetDataTrackJobDegreeResponseBody &) = default ;
    GetDataTrackJobDegreeResponseBody(GetDataTrackJobDegreeResponseBody &&) = default ;
    GetDataTrackJobDegreeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataTrackJobDegreeResponseBody() = default ;
    GetDataTrackJobDegreeResponseBody& operator=(const GetDataTrackJobDegreeResponseBody &) = default ;
    GetDataTrackJobDegreeResponseBody& operator=(GetDataTrackJobDegreeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobDegree : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobDegree& obj) { 
        DARABONBA_PTR_TO_JSON(DownloadCompletionDegree, downloadCompletionDegree_);
        DARABONBA_PTR_TO_JSON(FilterCompletionDegree, filterCompletionDegree_);
        DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
        DARABONBA_PTR_TO_JSON(ListCompletionDegree, listCompletionDegree_);
        DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      };
      friend void from_json(const Darabonba::Json& j, JobDegree& obj) { 
        DARABONBA_PTR_FROM_JSON(DownloadCompletionDegree, downloadCompletionDegree_);
        DARABONBA_PTR_FROM_JSON(FilterCompletionDegree, filterCompletionDegree_);
        DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
        DARABONBA_PTR_FROM_JSON(ListCompletionDegree, listCompletionDegree_);
        DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      };
      JobDegree() = default ;
      JobDegree(const JobDegree &) = default ;
      JobDegree(JobDegree &&) = default ;
      JobDegree(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobDegree() = default ;
      JobDegree& operator=(const JobDegree &) = default ;
      JobDegree& operator=(JobDegree &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->downloadCompletionDegree_ == nullptr
        && this->filterCompletionDegree_ == nullptr && this->jobStatus_ == nullptr && this->listCompletionDegree_ == nullptr && this->statusDesc_ == nullptr; };
      // downloadCompletionDegree Field Functions 
      bool hasDownloadCompletionDegree() const { return this->downloadCompletionDegree_ != nullptr;};
      void deleteDownloadCompletionDegree() { this->downloadCompletionDegree_ = nullptr;};
      inline double getDownloadCompletionDegree() const { DARABONBA_PTR_GET_DEFAULT(downloadCompletionDegree_, 0.0) };
      inline JobDegree& setDownloadCompletionDegree(double downloadCompletionDegree) { DARABONBA_PTR_SET_VALUE(downloadCompletionDegree_, downloadCompletionDegree) };


      // filterCompletionDegree Field Functions 
      bool hasFilterCompletionDegree() const { return this->filterCompletionDegree_ != nullptr;};
      void deleteFilterCompletionDegree() { this->filterCompletionDegree_ = nullptr;};
      inline double getFilterCompletionDegree() const { DARABONBA_PTR_GET_DEFAULT(filterCompletionDegree_, 0.0) };
      inline JobDegree& setFilterCompletionDegree(double filterCompletionDegree) { DARABONBA_PTR_SET_VALUE(filterCompletionDegree_, filterCompletionDegree) };


      // jobStatus Field Functions 
      bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
      void deleteJobStatus() { this->jobStatus_ = nullptr;};
      inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
      inline JobDegree& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


      // listCompletionDegree Field Functions 
      bool hasListCompletionDegree() const { return this->listCompletionDegree_ != nullptr;};
      void deleteListCompletionDegree() { this->listCompletionDegree_ = nullptr;};
      inline double getListCompletionDegree() const { DARABONBA_PTR_GET_DEFAULT(listCompletionDegree_, 0.0) };
      inline JobDegree& setListCompletionDegree(double listCompletionDegree) { DARABONBA_PTR_SET_VALUE(listCompletionDegree_, listCompletionDegree) };


      // statusDesc Field Functions 
      bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
      void deleteStatusDesc() { this->statusDesc_ = nullptr;};
      inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
      inline JobDegree& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    protected:
      // The progress of binary log download. Valid values: 0 to 1. A value of 1 indicates that binary log download is complete.
      shared_ptr<double> downloadCompletionDegree_ {};
      // The progress of binary log parsing. Valid values: 0 to 1. A value of 1 indicates that binary log parsing is complete.
      shared_ptr<double> filterCompletionDegree_ {};
      // The status of the data tracking task. Valid values:
      // 
      // *   **INIT**: The task is being initialized.
      // *   **LISTING**: The binary logs are being obtained.
      // *   **LIST_SUCCESS**: The binary logs are successfully obtained.
      // *   **DOWNLOADING**: The binary logs are being downloaded.
      // *   **DOWNLOAD_FAIL**: The binary logs failed to be downloaded.
      // *   **DOWNLOAD_SUCCESS**: The binary logs are successfully downloaded.
      // *   **FILTERING**: The binary logs are being parsed.
      // *   **FILTER_FAIL**: The binary logs failed to be parsed.
      // *   **FILTER_SUCCESS**: The binary logs are successfully parsed.
      shared_ptr<string> jobStatus_ {};
      // The progress of binary log obtaining. Valid values: 0 to 1. A value of 1 indicates that binary log obtaining is complete.
      shared_ptr<double> listCompletionDegree_ {};
      // The description of the task status.
      shared_ptr<string> statusDesc_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->jobDegree_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataTrackJobDegreeResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataTrackJobDegreeResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // jobDegree Field Functions 
    bool hasJobDegree() const { return this->jobDegree_ != nullptr;};
    void deleteJobDegree() { this->jobDegree_ = nullptr;};
    inline const GetDataTrackJobDegreeResponseBody::JobDegree & getJobDegree() const { DARABONBA_PTR_GET_CONST(jobDegree_, GetDataTrackJobDegreeResponseBody::JobDegree) };
    inline GetDataTrackJobDegreeResponseBody::JobDegree getJobDegree() { DARABONBA_PTR_GET(jobDegree_, GetDataTrackJobDegreeResponseBody::JobDegree) };
    inline GetDataTrackJobDegreeResponseBody& setJobDegree(const GetDataTrackJobDegreeResponseBody::JobDegree & jobDegree) { DARABONBA_PTR_SET_VALUE(jobDegree_, jobDegree) };
    inline GetDataTrackJobDegreeResponseBody& setJobDegree(GetDataTrackJobDegreeResponseBody::JobDegree && jobDegree) { DARABONBA_PTR_SET_RVALUE(jobDegree_, jobDegree) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataTrackJobDegreeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataTrackJobDegreeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The progress details of the data tracking task.
    shared_ptr<GetDataTrackJobDegreeResponseBody::JobDegree> jobDegree_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
