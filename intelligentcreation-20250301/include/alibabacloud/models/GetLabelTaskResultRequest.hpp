// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLABELTASKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLABELTASKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20250301
{
namespace Models
{
  class GetLabelTaskResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLabelTaskResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLabelTaskResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetLabelTaskResultRequest() = default ;
    GetLabelTaskResultRequest(const GetLabelTaskResultRequest &) = default ;
    GetLabelTaskResultRequest(GetLabelTaskResultRequest &&) = default ;
    GetLabelTaskResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLabelTaskResultRequest() = default ;
    GetLabelTaskResultRequest& operator=(const GetLabelTaskResultRequest &) = default ;
    GetLabelTaskResultRequest& operator=(GetLabelTaskResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectId_ == nullptr
        && this->taskId_ == nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetLabelTaskResultRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetLabelTaskResultRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<int64_t> projectId_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20250301
#endif
