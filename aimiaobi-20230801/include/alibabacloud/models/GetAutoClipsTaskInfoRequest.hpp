// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOCLIPSTASKINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOCLIPSTASKINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetAutoClipsTaskInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoClipsTaskInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ShowAnalysisResults, showAnalysisResults_);
      DARABONBA_PTR_TO_JSON(ShowResourceInfo, showResourceInfo_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoClipsTaskInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ShowAnalysisResults, showAnalysisResults_);
      DARABONBA_PTR_FROM_JSON(ShowResourceInfo, showResourceInfo_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetAutoClipsTaskInfoRequest() = default ;
    GetAutoClipsTaskInfoRequest(const GetAutoClipsTaskInfoRequest &) = default ;
    GetAutoClipsTaskInfoRequest(GetAutoClipsTaskInfoRequest &&) = default ;
    GetAutoClipsTaskInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoClipsTaskInfoRequest() = default ;
    GetAutoClipsTaskInfoRequest& operator=(const GetAutoClipsTaskInfoRequest &) = default ;
    GetAutoClipsTaskInfoRequest& operator=(GetAutoClipsTaskInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->showAnalysisResults_ == nullptr
        && this->showResourceInfo_ == nullptr && this->taskId_ == nullptr && this->workspaceId_ == nullptr; };
    // showAnalysisResults Field Functions 
    bool hasShowAnalysisResults() const { return this->showAnalysisResults_ != nullptr;};
    void deleteShowAnalysisResults() { this->showAnalysisResults_ = nullptr;};
    inline bool getShowAnalysisResults() const { DARABONBA_PTR_GET_DEFAULT(showAnalysisResults_, false) };
    inline GetAutoClipsTaskInfoRequest& setShowAnalysisResults(bool showAnalysisResults) { DARABONBA_PTR_SET_VALUE(showAnalysisResults_, showAnalysisResults) };


    // showResourceInfo Field Functions 
    bool hasShowResourceInfo() const { return this->showResourceInfo_ != nullptr;};
    void deleteShowResourceInfo() { this->showResourceInfo_ = nullptr;};
    inline bool getShowResourceInfo() const { DARABONBA_PTR_GET_DEFAULT(showResourceInfo_, false) };
    inline GetAutoClipsTaskInfoRequest& setShowResourceInfo(bool showResourceInfo) { DARABONBA_PTR_SET_VALUE(showResourceInfo_, showResourceInfo) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetAutoClipsTaskInfoRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetAutoClipsTaskInfoRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<bool> showAnalysisResults_ {};
    shared_ptr<bool> showResourceInfo_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
