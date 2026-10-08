// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKCONNECTIVITYJOBBYJOBIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKCONNECTIVITYJOBBYJOBIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetCheckConnectivityJobByJobIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckConnectivityJobByJobIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckConnectivityJobByJobIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCheckConnectivityJobByJobIdResponseBody() = default ;
    GetCheckConnectivityJobByJobIdResponseBody(const GetCheckConnectivityJobByJobIdResponseBody &) = default ;
    GetCheckConnectivityJobByJobIdResponseBody(GetCheckConnectivityJobByJobIdResponseBody &&) = default ;
    GetCheckConnectivityJobByJobIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckConnectivityJobByJobIdResponseBody() = default ;
    GetCheckConnectivityJobByJobIdResponseBody& operator=(const GetCheckConnectivityJobByJobIdResponseBody &) = default ;
    GetCheckConnectivityJobByJobIdResponseBody& operator=(GetCheckConnectivityJobByJobIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobType, jobType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(VoldemortTaskId, voldemortTaskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobType, jobType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(VoldemortTaskId, voldemortTaskId_);
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
      virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && this->errorMsg_ == nullptr && this->jobId_ == nullptr && this->jobType_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr
        && this->voldemortTaskId_ == nullptr; };
      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
      inline Data& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline Data& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Data& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline Data& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Data& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // voldemortTaskId Field Functions 
      bool hasVoldemortTaskId() const { return this->voldemortTaskId_ != nullptr;};
      void deleteVoldemortTaskId() { this->voldemortTaskId_ = nullptr;};
      inline string getVoldemortTaskId() const { DARABONBA_PTR_GET_DEFAULT(voldemortTaskId_, "") };
      inline Data& setVoldemortTaskId(string voldemortTaskId) { DARABONBA_PTR_SET_VALUE(voldemortTaskId_, voldemortTaskId) };


    protected:
      shared_ptr<string> dataSourceId_ {};
      shared_ptr<string> errorMsg_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<string> jobType_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> tenantId_ {};
      shared_ptr<string> voldemortTaskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCheckConnectivityJobByJobIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCheckConnectivityJobByJobIdResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCheckConnectivityJobByJobIdResponseBody::Data) };
    inline GetCheckConnectivityJobByJobIdResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCheckConnectivityJobByJobIdResponseBody::Data) };
    inline GetCheckConnectivityJobByJobIdResponseBody& setData(const GetCheckConnectivityJobByJobIdResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCheckConnectivityJobByJobIdResponseBody& setData(GetCheckConnectivityJobByJobIdResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetCheckConnectivityJobByJobIdResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCheckConnectivityJobByJobIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCheckConnectivityJobByJobIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCheckConnectivityJobByJobIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetCheckConnectivityJobByJobIdResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
