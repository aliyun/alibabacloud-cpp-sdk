// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPPIPELINEINTEGRATEDTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STOPPIPELINEINTEGRATEDTASKRESPONSEBODY_HPP_
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
  class StopPipelineIntegratedTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopPipelineIntegratedTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, StopPipelineIntegratedTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    StopPipelineIntegratedTaskResponseBody() = default ;
    StopPipelineIntegratedTaskResponseBody(const StopPipelineIntegratedTaskResponseBody &) = default ;
    StopPipelineIntegratedTaskResponseBody(StopPipelineIntegratedTaskResponseBody &&) = default ;
    StopPipelineIntegratedTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopPipelineIntegratedTaskResponseBody() = default ;
    StopPipelineIntegratedTaskResponseBody& operator=(const StopPipelineIntegratedTaskResponseBody &) = default ;
    StopPipelineIntegratedTaskResponseBody& operator=(StopPipelineIntegratedTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DevOpsActionResDTOList, devOpsActionResDTOList_);
        DARABONBA_PTR_TO_JSON(Fail, fail_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DevOpsActionResDTOList, devOpsActionResDTOList_);
        DARABONBA_PTR_FROM_JSON(Fail, fail_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      class DevOpsActionResDTOList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DevOpsActionResDTOList& obj) { 
          DARABONBA_PTR_TO_JSON(JobName, jobName_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DevOpsActionResDTOList& obj) { 
          DARABONBA_PTR_FROM_JSON(JobName, jobName_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DevOpsActionResDTOList() = default ;
        DevOpsActionResDTOList(const DevOpsActionResDTOList &) = default ;
        DevOpsActionResDTOList(DevOpsActionResDTOList &&) = default ;
        DevOpsActionResDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DevOpsActionResDTOList() = default ;
        DevOpsActionResDTOList& operator=(const DevOpsActionResDTOList &) = default ;
        DevOpsActionResDTOList& operator=(DevOpsActionResDTOList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->jobName_ == nullptr
        && this->owner_ == nullptr && this->status_ == nullptr; };
        // jobName Field Functions 
        bool hasJobName() const { return this->jobName_ != nullptr;};
        void deleteJobName() { this->jobName_ = nullptr;};
        inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
        inline DevOpsActionResDTOList& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline DevOpsActionResDTOList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DevOpsActionResDTOList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> jobName_ {};
        shared_ptr<string> owner_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->devOpsActionResDTOList_ == nullptr
        && this->fail_ == nullptr && this->success_ == nullptr; };
      // devOpsActionResDTOList Field Functions 
      bool hasDevOpsActionResDTOList() const { return this->devOpsActionResDTOList_ != nullptr;};
      void deleteDevOpsActionResDTOList() { this->devOpsActionResDTOList_ = nullptr;};
      inline const vector<Data::DevOpsActionResDTOList> & getDevOpsActionResDTOList() const { DARABONBA_PTR_GET_CONST(devOpsActionResDTOList_, vector<Data::DevOpsActionResDTOList>) };
      inline vector<Data::DevOpsActionResDTOList> getDevOpsActionResDTOList() { DARABONBA_PTR_GET(devOpsActionResDTOList_, vector<Data::DevOpsActionResDTOList>) };
      inline Data& setDevOpsActionResDTOList(const vector<Data::DevOpsActionResDTOList> & devOpsActionResDTOList) { DARABONBA_PTR_SET_VALUE(devOpsActionResDTOList_, devOpsActionResDTOList) };
      inline Data& setDevOpsActionResDTOList(vector<Data::DevOpsActionResDTOList> && devOpsActionResDTOList) { DARABONBA_PTR_SET_RVALUE(devOpsActionResDTOList_, devOpsActionResDTOList) };


      // fail Field Functions 
      bool hasFail() const { return this->fail_ != nullptr;};
      void deleteFail() { this->fail_ = nullptr;};
      inline int64_t getFail() const { DARABONBA_PTR_GET_DEFAULT(fail_, 0L) };
      inline Data& setFail(int64_t fail) { DARABONBA_PTR_SET_VALUE(fail_, fail) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline int64_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
      inline Data& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<vector<Data::DevOpsActionResDTOList>> devOpsActionResDTOList_ {};
      shared_ptr<int64_t> fail_ {};
      shared_ptr<int64_t> success_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline StopPipelineIntegratedTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const StopPipelineIntegratedTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, StopPipelineIntegratedTaskResponseBody::Data) };
    inline StopPipelineIntegratedTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, StopPipelineIntegratedTaskResponseBody::Data) };
    inline StopPipelineIntegratedTaskResponseBody& setData(const StopPipelineIntegratedTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline StopPipelineIntegratedTaskResponseBody& setData(StopPipelineIntegratedTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline StopPipelineIntegratedTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline StopPipelineIntegratedTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StopPipelineIntegratedTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline StopPipelineIntegratedTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<StopPipelineIntegratedTaskResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
