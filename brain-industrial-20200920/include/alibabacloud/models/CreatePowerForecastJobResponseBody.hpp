// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOWERFORECASTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOWERFORECASTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class CreatePowerForecastJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePowerForecastJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePowerForecastJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreatePowerForecastJobResponseBody() = default ;
    CreatePowerForecastJobResponseBody(const CreatePowerForecastJobResponseBody &) = default ;
    CreatePowerForecastJobResponseBody(CreatePowerForecastJobResponseBody &&) = default ;
    CreatePowerForecastJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePowerForecastJobResponseBody() = default ;
    CreatePowerForecastJobResponseBody& operator=(const CreatePowerForecastJobResponseBody &) = default ;
    CreatePowerForecastJobResponseBody& operator=(CreatePowerForecastJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Completed, completed_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(Response, response_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Completed, completed_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(Response, response_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class Response : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Response& obj) { 
          DARABONBA_ANY_TO_JSON(DebugInfo, debugInfo_);
          DARABONBA_PTR_TO_JSON(JobType, jobType_);
          DARABONBA_ANY_TO_JSON(Result, result_);
        };
        friend void from_json(const Darabonba::Json& j, Response& obj) { 
          DARABONBA_ANY_FROM_JSON(DebugInfo, debugInfo_);
          DARABONBA_PTR_FROM_JSON(JobType, jobType_);
          DARABONBA_ANY_FROM_JSON(Result, result_);
        };
        Response() = default ;
        Response(const Response &) = default ;
        Response(Response &&) = default ;
        Response(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Response() = default ;
        Response& operator=(const Response &) = default ;
        Response& operator=(Response &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->debugInfo_ == nullptr
        && this->jobType_ == nullptr && this->result_ == nullptr; };
        // debugInfo Field Functions 
        bool hasDebugInfo() const { return this->debugInfo_ != nullptr;};
        void deleteDebugInfo() { this->debugInfo_ = nullptr;};
        inline         const Darabonba::Json & getDebugInfo() const { DARABONBA_GET(debugInfo_) };
        Darabonba::Json & getDebugInfo() { DARABONBA_GET(debugInfo_) };
        inline Response& setDebugInfo(const Darabonba::Json & debugInfo) { DARABONBA_SET_VALUE(debugInfo_, debugInfo) };
        inline Response& setDebugInfo(Darabonba::Json && debugInfo) { DARABONBA_SET_RVALUE(debugInfo_, debugInfo) };


        // jobType Field Functions 
        bool hasJobType() const { return this->jobType_ != nullptr;};
        void deleteJobType() { this->jobType_ = nullptr;};
        inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
        inline Response& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline         const Darabonba::Json & getResult() const { DARABONBA_GET(result_) };
        Darabonba::Json & getResult() { DARABONBA_GET(result_) };
        inline Response& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
        inline Response& setResult(Darabonba::Json && result) { DARABONBA_SET_RVALUE(result_, result) };


      protected:
        Darabonba::Json debugInfo_ {};
        shared_ptr<string> jobType_ {};
        Darabonba::Json result_ {};
      };

      virtual bool empty() const override { return this->completed_ == nullptr
        && this->createTime_ == nullptr && this->error_ == nullptr && this->jobId_ == nullptr && this->progress_ == nullptr && this->response_ == nullptr
        && this->status_ == nullptr; };
      // completed Field Functions 
      bool hasCompleted() const { return this->completed_ != nullptr;};
      void deleteCompleted() { this->completed_ = nullptr;};
      inline bool getCompleted() const { DARABONBA_PTR_GET_DEFAULT(completed_, false) };
      inline Data& setCompleted(bool completed) { DARABONBA_PTR_SET_VALUE(completed_, completed) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
      inline Data& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Data& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
      inline Data& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // response Field Functions 
      bool hasResponse() const { return this->response_ != nullptr;};
      void deleteResponse() { this->response_ = nullptr;};
      inline const Data::Response & getResponse() const { DARABONBA_PTR_GET_CONST(response_, Data::Response) };
      inline Data::Response getResponse() { DARABONBA_PTR_GET(response_, Data::Response) };
      inline Data& setResponse(const Data::Response & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
      inline Data& setResponse(Data::Response && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<bool> completed_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> error_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<int32_t> progress_ {};
      shared_ptr<Data::Response> response_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreatePowerForecastJobResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreatePowerForecastJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreatePowerForecastJobResponseBody::Data) };
    inline CreatePowerForecastJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreatePowerForecastJobResponseBody::Data) };
    inline CreatePowerForecastJobResponseBody& setData(const CreatePowerForecastJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreatePowerForecastJobResponseBody& setData(CreatePowerForecastJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreatePowerForecastJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePowerForecastJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline CreatePowerForecastJobResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<CreatePowerForecastJobResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
