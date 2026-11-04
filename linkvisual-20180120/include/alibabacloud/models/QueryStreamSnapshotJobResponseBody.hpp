// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSTREAMSNAPSHOTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSTREAMSNAPSHOTJOBRESPONSEBODY_HPP_
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
  class QueryStreamSnapshotJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryStreamSnapshotJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryStreamSnapshotJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryStreamSnapshotJobResponseBody() = default ;
    QueryStreamSnapshotJobResponseBody(const QueryStreamSnapshotJobResponseBody &) = default ;
    QueryStreamSnapshotJobResponseBody(QueryStreamSnapshotJobResponseBody &&) = default ;
    QueryStreamSnapshotJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryStreamSnapshotJobResponseBody() = default ;
    QueryStreamSnapshotJobResponseBody& operator=(const QueryStreamSnapshotJobResponseBody &) = default ;
    QueryStreamSnapshotJobResponseBody& operator=(QueryStreamSnapshotJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(JobList, jobList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(JobList, jobList_);
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
          DARABONBA_PTR_TO_JSON(SnapshotInterval, snapshotInterval_);
          DARABONBA_PTR_TO_JSON(StreamType, streamType_);
        };
        friend void from_json(const Darabonba::Json& j, JobList& obj) { 
          DARABONBA_PTR_FROM_JSON(SnapshotInterval, snapshotInterval_);
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
        virtual bool empty() const override { return this->snapshotInterval_ == nullptr
        && this->streamType_ == nullptr; };
        // snapshotInterval Field Functions 
        bool hasSnapshotInterval() const { return this->snapshotInterval_ != nullptr;};
        void deleteSnapshotInterval() { this->snapshotInterval_ = nullptr;};
        inline int32_t getSnapshotInterval() const { DARABONBA_PTR_GET_DEFAULT(snapshotInterval_, 0) };
        inline JobList& setSnapshotInterval(int32_t snapshotInterval) { DARABONBA_PTR_SET_VALUE(snapshotInterval_, snapshotInterval) };


        // streamType Field Functions 
        bool hasStreamType() const { return this->streamType_ != nullptr;};
        void deleteStreamType() { this->streamType_ = nullptr;};
        inline int32_t getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
        inline JobList& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


      protected:
        // The snapshot interval.
        shared_ptr<int32_t> snapshotInterval_ {};
        // The stream type.
        // 
        // - **0**: Main stream.
        // - **1**: Sub stream.
        shared_ptr<int32_t> streamType_ {};
      };

      virtual bool empty() const override { return this->jobList_ == nullptr; };
      // jobList Field Functions 
      bool hasJobList() const { return this->jobList_ != nullptr;};
      void deleteJobList() { this->jobList_ = nullptr;};
      inline const vector<Data::JobList> & getJobList() const { DARABONBA_PTR_GET_CONST(jobList_, vector<Data::JobList>) };
      inline vector<Data::JobList> getJobList() { DARABONBA_PTR_GET(jobList_, vector<Data::JobList>) };
      inline Data& setJobList(const vector<Data::JobList> & jobList) { DARABONBA_PTR_SET_VALUE(jobList_, jobList) };
      inline Data& setJobList(vector<Data::JobList> && jobList) { DARABONBA_PTR_SET_RVALUE(jobList_, jobList) };


    protected:
      // The job information.
      shared_ptr<vector<Data::JobList>> jobList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryStreamSnapshotJobResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryStreamSnapshotJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryStreamSnapshotJobResponseBody::Data) };
    inline QueryStreamSnapshotJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryStreamSnapshotJobResponseBody::Data) };
    inline QueryStreamSnapshotJobResponseBody& setData(const QueryStreamSnapshotJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryStreamSnapshotJobResponseBody& setData(QueryStreamSnapshotJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryStreamSnapshotJobResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryStreamSnapshotJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryStreamSnapshotJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code:
    // 
    // - **200**: The call was successful.
    // - Other values: An error code is returned. For more information about error codes, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    // The result returned if the call is successful.
    shared_ptr<QueryStreamSnapshotJobResponseBody::Data> data_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The unique identifier generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
