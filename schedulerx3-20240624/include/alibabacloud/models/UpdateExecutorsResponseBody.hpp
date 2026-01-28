// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEXECUTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEXECUTORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class UpdateExecutorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateExecutorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateExecutorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateExecutorsResponseBody() = default ;
    UpdateExecutorsResponseBody(const UpdateExecutorsResponseBody &) = default ;
    UpdateExecutorsResponseBody(UpdateExecutorsResponseBody &&) = default ;
    UpdateExecutorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateExecutorsResponseBody() = default ;
    UpdateExecutorsResponseBody& operator=(const UpdateExecutorsResponseBody &) = default ;
    UpdateExecutorsResponseBody& operator=(UpdateExecutorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppGroupId, appGroupId_);
        DARABONBA_PTR_TO_JSON(AppType, appType_);
        DARABONBA_PTR_TO_JSON(FailedService, failedService_);
        DARABONBA_PTR_TO_JSON(WorkId, workId_);
        DARABONBA_PTR_TO_JSON(WorkerType, workerType_);
        DARABONBA_PTR_TO_JSON(Workers, workers_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppGroupId, appGroupId_);
        DARABONBA_PTR_FROM_JSON(AppType, appType_);
        DARABONBA_PTR_FROM_JSON(FailedService, failedService_);
        DARABONBA_PTR_FROM_JSON(WorkId, workId_);
        DARABONBA_PTR_FROM_JSON(WorkerType, workerType_);
        DARABONBA_PTR_FROM_JSON(Workers, workers_);
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
      virtual bool empty() const override { return this->appGroupId_ == nullptr
        && this->appType_ == nullptr && this->failedService_ == nullptr && this->workId_ == nullptr && this->workerType_ == nullptr && this->workers_ == nullptr; };
      // appGroupId Field Functions 
      bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
      void deleteAppGroupId() { this->appGroupId_ = nullptr;};
      inline int64_t getAppGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, 0L) };
      inline Data& setAppGroupId(int64_t appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline int32_t getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, 0) };
      inline Data& setAppType(int32_t appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // failedService Field Functions 
      bool hasFailedService() const { return this->failedService_ != nullptr;};
      void deleteFailedService() { this->failedService_ = nullptr;};
      inline string getFailedService() const { DARABONBA_PTR_GET_DEFAULT(failedService_, "") };
      inline Data& setFailedService(string failedService) { DARABONBA_PTR_SET_VALUE(failedService_, failedService) };


      // workId Field Functions 
      bool hasWorkId() const { return this->workId_ != nullptr;};
      void deleteWorkId() { this->workId_ = nullptr;};
      inline int32_t getWorkId() const { DARABONBA_PTR_GET_DEFAULT(workId_, 0) };
      inline Data& setWorkId(int32_t workId) { DARABONBA_PTR_SET_VALUE(workId_, workId) };


      // workerType Field Functions 
      bool hasWorkerType() const { return this->workerType_ != nullptr;};
      void deleteWorkerType() { this->workerType_ = nullptr;};
      inline string getWorkerType() const { DARABONBA_PTR_GET_DEFAULT(workerType_, "") };
      inline Data& setWorkerType(string workerType) { DARABONBA_PTR_SET_VALUE(workerType_, workerType) };


      // workers Field Functions 
      bool hasWorkers() const { return this->workers_ != nullptr;};
      void deleteWorkers() { this->workers_ = nullptr;};
      inline string getWorkers() const { DARABONBA_PTR_GET_DEFAULT(workers_, "") };
      inline Data& setWorkers(string workers) { DARABONBA_PTR_SET_VALUE(workers_, workers) };


    protected:
      shared_ptr<int64_t> appGroupId_ {};
      shared_ptr<int32_t> appType_ {};
      shared_ptr<string> failedService_ {};
      shared_ptr<int32_t> workId_ {};
      shared_ptr<string> workerType_ {};
      shared_ptr<string> workers_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdateExecutorsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateExecutorsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateExecutorsResponseBody::Data) };
    inline UpdateExecutorsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateExecutorsResponseBody::Data) };
    inline UpdateExecutorsResponseBody& setData(const UpdateExecutorsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateExecutorsResponseBody& setData(UpdateExecutorsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateExecutorsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateExecutorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateExecutorsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    // -
    shared_ptr<UpdateExecutorsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
