// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListDiagnosisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnosisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnosisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListDiagnosisResponseBody() = default ;
    ListDiagnosisResponseBody(const ListDiagnosisResponseBody &) = default ;
    ListDiagnosisResponseBody(ListDiagnosisResponseBody &&) = default ;
    ListDiagnosisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnosisResponseBody() = default ;
    ListDiagnosisResponseBody& operator=(const ListDiagnosisResponseBody &) = default ;
    ListDiagnosisResponseBody& operator=(ListDiagnosisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_ANY_TO_JSON(command, command_);
        DARABONBA_PTR_TO_JSON(created_at, createdAt_);
        DARABONBA_PTR_TO_JSON(err_msg, errMsg_);
        DARABONBA_ANY_TO_JSON(params, params_);
        DARABONBA_ANY_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(service_name, serviceName_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(task_id, taskId_);
        DARABONBA_PTR_TO_JSON(updated_at, updatedAt_);
        DARABONBA_PTR_TO_JSON(url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_ANY_FROM_JSON(command, command_);
        DARABONBA_PTR_FROM_JSON(created_at, createdAt_);
        DARABONBA_PTR_FROM_JSON(err_msg, errMsg_);
        DARABONBA_ANY_FROM_JSON(params, params_);
        DARABONBA_ANY_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(service_name, serviceName_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(task_id, taskId_);
        DARABONBA_PTR_FROM_JSON(updated_at, updatedAt_);
        DARABONBA_PTR_FROM_JSON(url, url_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->command_ == nullptr && this->createdAt_ == nullptr && this->errMsg_ == nullptr && this->params_ == nullptr && this->result_ == nullptr
        && this->serviceName_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->updatedAt_ == nullptr && this->url_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
      inline Data& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // command Field Functions 
      bool hasCommand() const { return this->command_ != nullptr;};
      void deleteCommand() { this->command_ = nullptr;};
      inline       const Darabonba::Json & getCommand() const { DARABONBA_GET(command_) };
      Darabonba::Json & getCommand() { DARABONBA_GET(command_) };
      inline Data& setCommand(const Darabonba::Json & command) { DARABONBA_SET_VALUE(command_, command) };
      inline Data& setCommand(Darabonba::Json && command) { DARABONBA_SET_RVALUE(command_, command) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // errMsg Field Functions 
      bool hasErrMsg() const { return this->errMsg_ != nullptr;};
      void deleteErrMsg() { this->errMsg_ = nullptr;};
      inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
      inline Data& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


      // params Field Functions 
      bool hasParams() const { return this->params_ != nullptr;};
      void deleteParams() { this->params_ = nullptr;};
      inline       const Darabonba::Json & getParams() const { DARABONBA_GET(params_) };
      Darabonba::Json & getParams() { DARABONBA_GET(params_) };
      inline Data& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
      inline Data& setParams(Darabonba::Json && params) { DARABONBA_SET_RVALUE(params_, params) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline       const Darabonba::Json & getResult() const { DARABONBA_GET(result_) };
      Darabonba::Json & getResult() { DARABONBA_GET(result_) };
      inline Data& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
      inline Data& setResult(Darabonba::Json && result) { DARABONBA_SET_RVALUE(result_, result) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Data& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<int32_t> code_ {};
      Darabonba::Json command_ {};
      shared_ptr<string> createdAt_ {};
      shared_ptr<string> errMsg_ {};
      Darabonba::Json params_ {};
      Darabonba::Json result_ {};
      shared_ptr<string> serviceName_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> updatedAt_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->total_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDiagnosisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDiagnosisResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDiagnosisResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDiagnosisResponseBody::Data>) };
    inline vector<ListDiagnosisResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDiagnosisResponseBody::Data>) };
    inline ListDiagnosisResponseBody& setData(const vector<ListDiagnosisResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDiagnosisResponseBody& setData(vector<ListDiagnosisResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDiagnosisResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListDiagnosisResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListDiagnosisResponseBody::Data>> data_ {};
    // This parameter is required.
    shared_ptr<string> message_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
