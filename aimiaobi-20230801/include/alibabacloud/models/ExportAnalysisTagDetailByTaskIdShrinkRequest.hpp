// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTANALYSISTAGDETAILBYTASKIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTANALYSISTAGDETAILBYTASKIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ExportAnalysisTagDetailByTaskIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportAnalysisTagDetailByTaskIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categoriesShrink_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportAnalysisTagDetailByTaskIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categoriesShrink_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ExportAnalysisTagDetailByTaskIdShrinkRequest() = default ;
    ExportAnalysisTagDetailByTaskIdShrinkRequest(const ExportAnalysisTagDetailByTaskIdShrinkRequest &) = default ;
    ExportAnalysisTagDetailByTaskIdShrinkRequest(ExportAnalysisTagDetailByTaskIdShrinkRequest &&) = default ;
    ExportAnalysisTagDetailByTaskIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportAnalysisTagDetailByTaskIdShrinkRequest() = default ;
    ExportAnalysisTagDetailByTaskIdShrinkRequest& operator=(const ExportAnalysisTagDetailByTaskIdShrinkRequest &) = default ;
    ExportAnalysisTagDetailByTaskIdShrinkRequest& operator=(ExportAnalysisTagDetailByTaskIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoriesShrink_ == nullptr
        && return this->taskId_ == nullptr && return this->workspaceId_ == nullptr; };
    // categoriesShrink Field Functions 
    bool hasCategoriesShrink() const { return this->categoriesShrink_ != nullptr;};
    void deleteCategoriesShrink() { this->categoriesShrink_ = nullptr;};
    inline string categoriesShrink() const { DARABONBA_PTR_GET_DEFAULT(categoriesShrink_, "") };
    inline ExportAnalysisTagDetailByTaskIdShrinkRequest& setCategoriesShrink(string categoriesShrink) { DARABONBA_PTR_SET_VALUE(categoriesShrink_, categoriesShrink) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ExportAnalysisTagDetailByTaskIdShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ExportAnalysisTagDetailByTaskIdShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> categoriesShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
