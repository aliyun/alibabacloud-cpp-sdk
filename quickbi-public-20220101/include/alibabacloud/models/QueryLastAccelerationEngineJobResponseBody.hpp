// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLASTACCELERATIONENGINEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYLASTACCELERATIONENGINEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryLastAccelerationEngineJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLastAccelerationEngineJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLastAccelerationEngineJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryLastAccelerationEngineJobResponseBody() = default ;
    QueryLastAccelerationEngineJobResponseBody(const QueryLastAccelerationEngineJobResponseBody &) = default ;
    QueryLastAccelerationEngineJobResponseBody(QueryLastAccelerationEngineJobResponseBody &&) = default ;
    QueryLastAccelerationEngineJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLastAccelerationEngineJobResponseBody() = default ;
    QueryLastAccelerationEngineJobResponseBody& operator=(const QueryLastAccelerationEngineJobResponseBody &) = default ;
    QueryLastAccelerationEngineJobResponseBody& operator=(QueryLastAccelerationEngineJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(JobHistoryId, jobHistoryId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(JobHistoryId, jobHistoryId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->jobHistoryId_ == nullptr && this->status_ == nullptr; };
      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Result& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Result& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // jobHistoryId Field Functions 
      bool hasJobHistoryId() const { return this->jobHistoryId_ != nullptr;};
      void deleteJobHistoryId() { this->jobHistoryId_ = nullptr;};
      inline string getJobHistoryId() const { DARABONBA_PTR_GET_DEFAULT(jobHistoryId_, "") };
      inline Result& setJobHistoryId(string jobHistoryId) { DARABONBA_PTR_SET_VALUE(jobHistoryId_, jobHistoryId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Execution time, in the format yyyy-MM-dd hh:mm:ss.
      shared_ptr<string> gmtCreate_ {};
      // Completion time, in the format yyyy-MM-dd hh:mm:ss.
      shared_ptr<string> gmtModified_ {};
      // Acceleration task ID.
      shared_ptr<string> jobHistoryId_ {};
      // Task status. Possible values:
      // 
      // - TODO -- To be run
      // - RUNNING -- Running
      // - SUCCESS -- Successfully completed
      // - FAILURE -- Abnormally terminated
      // - CANCELED -- Canceled
      // - CHECK_DEPENDENCY -- Checking dependencies
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryLastAccelerationEngineJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryLastAccelerationEngineJobResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryLastAccelerationEngineJobResponseBody::Result) };
    inline QueryLastAccelerationEngineJobResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryLastAccelerationEngineJobResponseBody::Result) };
    inline QueryLastAccelerationEngineJobResponseBody& setResult(const QueryLastAccelerationEngineJobResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryLastAccelerationEngineJobResponseBody& setResult(QueryLastAccelerationEngineJobResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryLastAccelerationEngineJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // The entity of the most recent acceleration task.
    shared_ptr<QueryLastAccelerationEngineJobResponseBody::Result> result_ {};
    // Indicates whether the request was successful. Possible values:
    // 
    // - true: The request was successful.
    // - false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
