// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRTCASRTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRTCASRTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class QueryRtcAsrTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRtcAsrTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
      DARABONBA_ANY_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRtcAsrTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
      DARABONBA_ANY_FROM_JSON(Tasks, tasks_);
    };
    QueryRtcAsrTasksResponseBody() = default ;
    QueryRtcAsrTasksResponseBody(const QueryRtcAsrTasksResponseBody &) = default ;
    QueryRtcAsrTasksResponseBody(QueryRtcAsrTasksResponseBody &&) = default ;
    QueryRtcAsrTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRtcAsrTasksResponseBody() = default ;
    QueryRtcAsrTasksResponseBody& operator=(const QueryRtcAsrTasksResponseBody &) = default ;
    QueryRtcAsrTasksResponseBody& operator=(QueryRtcAsrTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->requestId_ == nullptr && return this->retCode_ == nullptr && return this->tasks_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryRtcAsrTasksResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRtcAsrTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline int64_t retCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0L) };
    inline QueryRtcAsrTasksResponseBody& setRetCode(int64_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline     const Darabonba::Json & tasks() const { DARABONBA_GET(tasks_) };
    Darabonba::Json & tasks() { DARABONBA_GET(tasks_) };
    inline QueryRtcAsrTasksResponseBody& setTasks(const Darabonba::Json & tasks) { DARABONBA_SET_VALUE(tasks_, tasks) };
    inline QueryRtcAsrTasksResponseBody& setTasks(Darabonba::Json & tasks) { DARABONBA_SET_RVALUE(tasks_, tasks) };


  protected:
    // The result of the request. If success is returned, the request was successful. If an error message is returned, the request failed.
    std::shared_ptr<string> description_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The HTTP status code. HTTP status code 2000 indicates that the request was successful. Other HTTP status codes indicate that the request failed.
    std::shared_ptr<int64_t> retCode_ = nullptr;
    // The results returned for the tasks.
    Darabonba::Json tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
