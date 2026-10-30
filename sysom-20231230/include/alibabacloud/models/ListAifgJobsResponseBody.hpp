// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIFGJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIFGJOBSRESPONSEBODY_HPP_
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
  class ListAifgJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAifgJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAifgJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAifgJobsResponseBody() = default ;
    ListAifgJobsResponseBody(const ListAifgJobsResponseBody &) = default ;
    ListAifgJobsResponseBody(ListAifgJobsResponseBody &&) = default ;
    ListAifgJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAifgJobsResponseBody() = default ;
    ListAifgJobsResponseBody& operator=(const ListAifgJobsResponseBody &) = default ;
    ListAifgJobsResponseBody& operator=(ListAifgJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(command, command_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_ANY_TO_JSON(params, params_);
        DARABONBA_ANY_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(subStatus, subStatus_);
        DARABONBA_PTR_TO_JSON(submitTime, submitTime_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(traceTaskId, traceTaskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(command, command_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_ANY_FROM_JSON(params, params_);
        DARABONBA_ANY_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(subStatus, subStatus_);
        DARABONBA_PTR_FROM_JSON(submitTime, submitTime_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(traceTaskId, traceTaskId_);
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
      virtual bool empty() const override { return this->command_ == nullptr
        && this->id_ == nullptr && this->params_ == nullptr && this->result_ == nullptr && this->serviceName_ == nullptr && this->status_ == nullptr
        && this->subStatus_ == nullptr && this->submitTime_ == nullptr && this->taskId_ == nullptr && this->traceTaskId_ == nullptr; };
      // command Field Functions 
      bool hasCommand() const { return this->command_ != nullptr;};
      void deleteCommand() { this->command_ = nullptr;};
      inline       const Darabonba::Json & getCommand() const { DARABONBA_GET(command_) };
      Darabonba::Json & getCommand() { DARABONBA_GET(command_) };
      inline Data& setCommand(const Darabonba::Json & command) { DARABONBA_SET_VALUE(command_, command) };
      inline Data& setCommand(Darabonba::Json && command) { DARABONBA_SET_RVALUE(command_, command) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


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


      // subStatus Field Functions 
      bool hasSubStatus() const { return this->subStatus_ != nullptr;};
      void deleteSubStatus() { this->subStatus_ = nullptr;};
      inline string getSubStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
      inline Data& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


      // submitTime Field Functions 
      bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
      void deleteSubmitTime() { this->submitTime_ = nullptr;};
      inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
      inline Data& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // traceTaskId Field Functions 
      bool hasTraceTaskId() const { return this->traceTaskId_ != nullptr;};
      void deleteTraceTaskId() { this->traceTaskId_ = nullptr;};
      inline string getTraceTaskId() const { DARABONBA_PTR_GET_DEFAULT(traceTaskId_, "") };
      inline Data& setTraceTaskId(string traceTaskId) { DARABONBA_PTR_SET_VALUE(traceTaskId_, traceTaskId) };


    protected:
      // The first command in the data list.
      Darabonba::Json command_ {};
      // The ID of the first element in the data list.
      shared_ptr<int64_t> id_ {};
      // The first parameter in the root data.
      Darabonba::Json params_ {};
      // The first result in the root data.
      Darabonba::Json result_ {};
      // The service name.
      shared_ptr<string> serviceName_ {};
      // The status of the data item.
      shared_ptr<string> status_ {};
      // The sub-status of data item 0.
      shared_ptr<string> subStatus_ {};
      // The time when the data was submitted.
      shared_ptr<string> submitTime_ {};
      // The ID of the task.
      shared_ptr<string> taskId_ {};
      // The unique identifier of the trace task.
      shared_ptr<string> traceTaskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAifgJobsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAifgJobsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAifgJobsResponseBody::Data>) };
    inline vector<ListAifgJobsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAifgJobsResponseBody::Data>) };
    inline ListAifgJobsResponseBody& setData(const vector<ListAifgJobsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAifgJobsResponseBody& setData(vector<ListAifgJobsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAifgJobsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAifgJobsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAifgJobsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAifgJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListAifgJobsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The data under the root node.
    shared_ptr<vector<ListAifgJobsResponseBody::Data>> data_ {};
    // The maximum number of records to retrieve at a time.
    shared_ptr<int32_t> maxResults_ {};
    // Indicates the read position returned by the current call. An empty value indicates that all data has been read.
    // 
    // This parameter is required.
    shared_ptr<string> message_ {};
    // The pagination cursor. A non-empty value indicates that more data is available.
    shared_ptr<string> nextToken_ {};
    // The unique identifier of the request.
    shared_ptr<string> requestId_ {};
    // The total count.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
