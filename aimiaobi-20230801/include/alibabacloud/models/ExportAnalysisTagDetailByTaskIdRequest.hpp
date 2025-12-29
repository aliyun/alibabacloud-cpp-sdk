// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTANALYSISTAGDETAILBYTASKIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTANALYSISTAGDETAILBYTASKIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ExportAnalysisTagDetailByTaskIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportAnalysisTagDetailByTaskIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportAnalysisTagDetailByTaskIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ExportAnalysisTagDetailByTaskIdRequest() = default ;
    ExportAnalysisTagDetailByTaskIdRequest(const ExportAnalysisTagDetailByTaskIdRequest &) = default ;
    ExportAnalysisTagDetailByTaskIdRequest(ExportAnalysisTagDetailByTaskIdRequest &&) = default ;
    ExportAnalysisTagDetailByTaskIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportAnalysisTagDetailByTaskIdRequest() = default ;
    ExportAnalysisTagDetailByTaskIdRequest& operator=(const ExportAnalysisTagDetailByTaskIdRequest &) = default ;
    ExportAnalysisTagDetailByTaskIdRequest& operator=(ExportAnalysisTagDetailByTaskIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categories_ == nullptr
        && this->taskId_ == nullptr && this->workspaceId_ == nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<string> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
    inline vector<string> getCategories() { DARABONBA_PTR_GET(categories_, vector<string>) };
    inline ExportAnalysisTagDetailByTaskIdRequest& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline ExportAnalysisTagDetailByTaskIdRequest& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ExportAnalysisTagDetailByTaskIdRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ExportAnalysisTagDetailByTaskIdRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<vector<string>> categories_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
