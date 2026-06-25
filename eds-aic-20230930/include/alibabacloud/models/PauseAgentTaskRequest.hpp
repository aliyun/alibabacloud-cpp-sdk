// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAUSEAGENTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PAUSEAGENTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class PauseAgentTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PauseAgentTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, PauseAgentTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
    };
    PauseAgentTaskRequest() = default ;
    PauseAgentTaskRequest(const PauseAgentTaskRequest &) = default ;
    PauseAgentTaskRequest(PauseAgentTaskRequest &&) = default ;
    PauseAgentTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PauseAgentTaskRequest() = default ;
    PauseAgentTaskRequest& operator=(const PauseAgentTaskRequest &) = default ;
    PauseAgentTaskRequest& operator=(PauseAgentTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskIds_ == nullptr; };
    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<string> & getTaskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
    inline vector<string> getTaskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
    inline PauseAgentTaskRequest& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline PauseAgentTaskRequest& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


  protected:
    // A list of task IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> taskIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
