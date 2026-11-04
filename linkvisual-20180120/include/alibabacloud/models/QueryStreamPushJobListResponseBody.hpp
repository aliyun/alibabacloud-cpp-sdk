// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSTREAMPUSHJOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSTREAMPUSHJOBLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryStreamPushJobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryStreamPushJobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryStreamPushJobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryStreamPushJobListResponseBody() = default ;
    QueryStreamPushJobListResponseBody(const QueryStreamPushJobListResponseBody &) = default ;
    QueryStreamPushJobListResponseBody(QueryStreamPushJobListResponseBody &&) = default ;
    QueryStreamPushJobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryStreamPushJobListResponseBody() = default ;
    QueryStreamPushJobListResponseBody& operator=(const QueryStreamPushJobListResponseBody &) = default ;
    QueryStreamPushJobListResponseBody& operator=(QueryStreamPushJobListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(JobList, jobList_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(JobList, jobList_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class JobList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobList& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(JobType, jobType_);
          DARABONBA_PTR_TO_JSON(PushStatus, pushStatus_);
          DARABONBA_PTR_TO_JSON(PushUrl, pushUrl_);
          DARABONBA_PTR_TO_JSON(StreamType, streamType_);
        };
        friend void from_json(const Darabonba::Json& j, JobList& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(JobType, jobType_);
          DARABONBA_PTR_FROM_JSON(PushStatus, pushStatus_);
          DARABONBA_PTR_FROM_JSON(PushUrl, pushUrl_);
          DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
        };
        JobList() = default ;
        JobList(const JobList &) = default ;
        JobList(JobList &&) = default ;
        JobList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobList() = default ;
        JobList& operator=(const JobList &) = default ;
        JobList& operator=(JobList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->jobId_ == nullptr && this->jobType_ == nullptr && this->pushStatus_ == nullptr && this->pushUrl_ == nullptr && this->streamType_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int32_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0) };
        inline JobList& setCreateTime(int32_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline JobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // jobType Field Functions 
        bool hasJobType() const { return this->jobType_ != nullptr;};
        void deleteJobType() { this->jobType_ = nullptr;};
        inline int32_t getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, 0) };
        inline JobList& setJobType(int32_t jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


        // pushStatus Field Functions 
        bool hasPushStatus() const { return this->pushStatus_ != nullptr;};
        void deletePushStatus() { this->pushStatus_ = nullptr;};
        inline int32_t getPushStatus() const { DARABONBA_PTR_GET_DEFAULT(pushStatus_, 0) };
        inline JobList& setPushStatus(int32_t pushStatus) { DARABONBA_PTR_SET_VALUE(pushStatus_, pushStatus) };


        // pushUrl Field Functions 
        bool hasPushUrl() const { return this->pushUrl_ != nullptr;};
        void deletePushUrl() { this->pushUrl_ = nullptr;};
        inline string getPushUrl() const { DARABONBA_PTR_GET_DEFAULT(pushUrl_, "") };
        inline JobList& setPushUrl(string pushUrl) { DARABONBA_PTR_SET_VALUE(pushUrl_, pushUrl) };


        // streamType Field Functions 
        bool hasStreamType() const { return this->streamType_ != nullptr;};
        void deleteStreamType() { this->streamType_ = nullptr;};
        inline int32_t getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
        inline JobList& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


      protected:
        // The time when the job was created. Unit: seconds.
        shared_ptr<int32_t> createTime_ {};
        // The ID of the job.
        shared_ptr<string> jobId_ {};
        // The type of the stream push job. Valid values:
        // 
        // - **1**: continuous job.
        // - **2**: triggered job. The job ends after it is interrupted.
        shared_ptr<int32_t> jobType_ {};
        // The current stream push status. Valid values:
        // 
        // - **1**: pushing.
        // - **2**: waiting to push.
        // - **3**: push ended.
        shared_ptr<int32_t> pushStatus_ {};
        // The stream push URL.
        shared_ptr<string> pushUrl_ {};
        // The stream type. Valid values:
        // 
        // - **0**: main stream.
        // - **1**: sub stream.
        shared_ptr<int32_t> streamType_ {};
      };

      virtual bool empty() const override { return this->jobList_ == nullptr
        && this->total_ == nullptr; };
      // jobList Field Functions 
      bool hasJobList() const { return this->jobList_ != nullptr;};
      void deleteJobList() { this->jobList_ = nullptr;};
      inline const vector<Data::JobList> & getJobList() const { DARABONBA_PTR_GET_CONST(jobList_, vector<Data::JobList>) };
      inline vector<Data::JobList> getJobList() { DARABONBA_PTR_GET(jobList_, vector<Data::JobList>) };
      inline Data& setJobList(const vector<Data::JobList> & jobList) { DARABONBA_PTR_SET_VALUE(jobList_, jobList) };
      inline Data& setJobList(vector<Data::JobList> && jobList) { DARABONBA_PTR_SET_RVALUE(jobList_, jobList) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The job list information.
      shared_ptr<vector<Data::JobList>> jobList_ {};
      // The total number of jobs.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryStreamPushJobListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryStreamPushJobListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryStreamPushJobListResponseBody::Data) };
    inline QueryStreamPushJobListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryStreamPushJobListResponseBody::Data) };
    inline QueryStreamPushJobListResponseBody& setData(const QueryStreamPushJobListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryStreamPushJobListResponseBody& setData(QueryStreamPushJobListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryStreamPushJobListResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryStreamPushJobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryStreamPushJobListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. Valid values:
    // 
    // - **200**: The call was successful.
    // - Other values: error codes. For more information, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    // The data returned if the call is successful.
    shared_ptr<QueryStreamPushJobListResponseBody::Data> data_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
