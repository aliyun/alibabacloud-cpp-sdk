// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWTASKSRESPONSEBODYTASKLISTWORKFLOW_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWTASKSRESPONSEBODYTASKLISTWORKFLOW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListWorkflowTasksResponseBodyTaskListWorkflow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowTasksResponseBodyTaskListWorkflow& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowTasksResponseBodyTaskListWorkflow& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    ListWorkflowTasksResponseBodyTaskListWorkflow() = default ;
    ListWorkflowTasksResponseBodyTaskListWorkflow(const ListWorkflowTasksResponseBodyTaskListWorkflow &) = default ;
    ListWorkflowTasksResponseBodyTaskListWorkflow(ListWorkflowTasksResponseBodyTaskListWorkflow &&) = default ;
    ListWorkflowTasksResponseBodyTaskListWorkflow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowTasksResponseBodyTaskListWorkflow() = default ;
    ListWorkflowTasksResponseBodyTaskListWorkflow& operator=(const ListWorkflowTasksResponseBodyTaskListWorkflow &) = default ;
    ListWorkflowTasksResponseBodyTaskListWorkflow& operator=(ListWorkflowTasksResponseBodyTaskListWorkflow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->mediaType_ != nullptr && this->modifiedTime_ != nullptr && this->name_ != nullptr && this->status_ != nullptr && this->type_ != nullptr
        && this->workflowId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListWorkflowTasksResponseBodyTaskListWorkflow& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline ListWorkflowTasksResponseBodyTaskListWorkflow& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListWorkflowTasksResponseBodyTaskListWorkflow& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWorkflowTasksResponseBodyTaskListWorkflow& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListWorkflowTasksResponseBodyTaskListWorkflow& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListWorkflowTasksResponseBodyTaskListWorkflow& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline ListWorkflowTasksResponseBodyTaskListWorkflow& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> mediaType_ = nullptr;
    std::shared_ptr<string> modifiedTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> workflowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
