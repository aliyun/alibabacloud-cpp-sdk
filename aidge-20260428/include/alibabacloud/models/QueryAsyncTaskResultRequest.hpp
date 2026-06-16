// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYASYNCTASKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYASYNCTASKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class QueryAsyncTaskResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAsyncTaskResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAsyncTaskResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    QueryAsyncTaskResultRequest() = default ;
    QueryAsyncTaskResultRequest(const QueryAsyncTaskResultRequest &) = default ;
    QueryAsyncTaskResultRequest(QueryAsyncTaskResultRequest &&) = default ;
    QueryAsyncTaskResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAsyncTaskResultRequest() = default ;
    QueryAsyncTaskResultRequest& operator=(const QueryAsyncTaskResultRequest &) = default ;
    QueryAsyncTaskResultRequest& operator=(QueryAsyncTaskResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryAsyncTaskResultRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the asynchronous task. This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
