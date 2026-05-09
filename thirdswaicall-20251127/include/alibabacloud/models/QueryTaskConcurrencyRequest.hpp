// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKCONCURRENCYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKCONCURRENCYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ThirdswAicall20251127
{
namespace Models
{
  class QueryTaskConcurrencyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskConcurrencyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskConcurrencyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    QueryTaskConcurrencyRequest() = default ;
    QueryTaskConcurrencyRequest(const QueryTaskConcurrencyRequest &) = default ;
    QueryTaskConcurrencyRequest(QueryTaskConcurrencyRequest &&) = default ;
    QueryTaskConcurrencyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskConcurrencyRequest() = default ;
    QueryTaskConcurrencyRequest& operator=(const QueryTaskConcurrencyRequest &) = default ;
    QueryTaskConcurrencyRequest& operator=(QueryTaskConcurrencyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline QueryTaskConcurrencyRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ThirdswAicall20251127
#endif
