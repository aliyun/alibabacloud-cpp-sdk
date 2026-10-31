// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTREAMINSTANCERECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTREAMINSTANCERECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListStreamInstanceRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStreamInstanceRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListStreamInstanceRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListStreamInstanceRecordsResponseBody() = default ;
    ListStreamInstanceRecordsResponseBody(const ListStreamInstanceRecordsResponseBody &) = default ;
    ListStreamInstanceRecordsResponseBody(ListStreamInstanceRecordsResponseBody &&) = default ;
    ListStreamInstanceRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStreamInstanceRecordsResponseBody() = default ;
    ListStreamInstanceRecordsResponseBody& operator=(const ListStreamInstanceRecordsResponseBody &) = default ;
    ListStreamInstanceRecordsResponseBody& operator=(ListStreamInstanceRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DeploymentId, deploymentId_);
        DARABONBA_PTR_TO_JSON(DeploymentInstanceId, deploymentInstanceId_);
        DARABONBA_PTR_TO_JSON(ErrorDataPath, errorDataPath_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DeploymentId, deploymentId_);
        DARABONBA_PTR_FROM_JSON(DeploymentInstanceId, deploymentInstanceId_);
        DARABONBA_PTR_FROM_JSON(ErrorDataPath, errorDataPath_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(State, state_);
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
      virtual bool empty() const override { return this->deploymentId_ == nullptr
        && this->deploymentInstanceId_ == nullptr && this->errorDataPath_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr; };
      // deploymentId Field Functions 
      bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
      void deleteDeploymentId() { this->deploymentId_ = nullptr;};
      inline string getDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
      inline Data& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


      // deploymentInstanceId Field Functions 
      bool hasDeploymentInstanceId() const { return this->deploymentInstanceId_ != nullptr;};
      void deleteDeploymentInstanceId() { this->deploymentInstanceId_ = nullptr;};
      inline string getDeploymentInstanceId() const { DARABONBA_PTR_GET_DEFAULT(deploymentInstanceId_, "") };
      inline Data& setDeploymentInstanceId(string deploymentInstanceId) { DARABONBA_PTR_SET_VALUE(deploymentInstanceId_, deploymentInstanceId) };


      // errorDataPath Field Functions 
      bool hasErrorDataPath() const { return this->errorDataPath_ != nullptr;};
      void deleteErrorDataPath() { this->errorDataPath_ = nullptr;};
      inline string getErrorDataPath() const { DARABONBA_PTR_GET_DEFAULT(errorDataPath_, "") };
      inline Data& setErrorDataPath(string errorDataPath) { DARABONBA_PTR_SET_VALUE(errorDataPath_, errorDataPath) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The deployment ID of the task. A single deployment can be associated with multiple running instances.
      shared_ptr<string> deploymentId_ {};
      // The instance ID of the deployment running instance. This value corresponds to the DeploymentInstanceId request parameter in the log and TaskManager query operations.
      shared_ptr<string> deploymentInstanceId_ {};
      // The relative path for dirty data storage in this run, excluding the storage service domain name. A value of null indicates that no dirty data path exists.
      shared_ptr<string> errorDataPath_ {};
      // The start time of this run. Format: yyyy-MM-dd HH:mm:ss.
      shared_ptr<string> startTime_ {};
      // The running instance status returned by the engine, such as RUNNING, FINISHED, and TRANSITIONING. This status uses a different enumeration from the TaskStatusEnum returned by the GetStreamTask operation.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListStreamInstanceRecordsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListStreamInstanceRecordsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListStreamInstanceRecordsResponseBody::Data>) };
    inline vector<ListStreamInstanceRecordsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListStreamInstanceRecordsResponseBody::Data>) };
    inline ListStreamInstanceRecordsResponseBody& setData(const vector<ListStreamInstanceRecordsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListStreamInstanceRecordsResponseBody& setData(vector<ListStreamInstanceRecordsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListStreamInstanceRecordsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListStreamInstanceRecordsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStreamInstanceRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListStreamInstanceRecordsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The historical running instance records of the real-time task. You can use the deploymentInstanceId to query the logs of a specific run.
    shared_ptr<vector<ListStreamInstanceRecordsResponseBody::Data>> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The details of the backend response exception.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
