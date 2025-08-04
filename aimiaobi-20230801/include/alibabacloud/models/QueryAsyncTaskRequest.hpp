// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYASYNCTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYASYNCTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class QueryAsyncTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAsyncTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAsyncTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    QueryAsyncTaskRequest() = default ;
    QueryAsyncTaskRequest(const QueryAsyncTaskRequest &) = default ;
    QueryAsyncTaskRequest(QueryAsyncTaskRequest &&) = default ;
    QueryAsyncTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAsyncTaskRequest() = default ;
    QueryAsyncTaskRequest& operator=(const QueryAsyncTaskRequest &) = default ;
    QueryAsyncTaskRequest& operator=(QueryAsyncTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->taskId_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline QueryAsyncTaskRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryAsyncTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
