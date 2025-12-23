// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWDIRECTORIESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWDIRECTORIESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class ListWorkflowDirectoriesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowDirectoriesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(parentDirectoryId, parentDirectoryId_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(workflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowDirectoriesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(parentDirectoryId, parentDirectoryId_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(workflowId, workflowId_);
    };
    ListWorkflowDirectoriesResponseBodyData() = default ;
    ListWorkflowDirectoriesResponseBodyData(const ListWorkflowDirectoriesResponseBodyData &) = default ;
    ListWorkflowDirectoriesResponseBodyData(ListWorkflowDirectoriesResponseBodyData &&) = default ;
    ListWorkflowDirectoriesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowDirectoriesResponseBodyData() = default ;
    ListWorkflowDirectoriesResponseBodyData& operator=(const ListWorkflowDirectoriesResponseBodyData &) = default ;
    ListWorkflowDirectoriesResponseBodyData& operator=(ListWorkflowDirectoriesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && return this->name_ == nullptr && return this->parentDirectoryId_ == nullptr && return this->projectId_ == nullptr && return this->workflowId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline ListWorkflowDirectoriesResponseBodyData& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWorkflowDirectoriesResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentDirectoryId Field Functions 
    bool hasParentDirectoryId() const { return this->parentDirectoryId_ != nullptr;};
    void deleteParentDirectoryId() { this->parentDirectoryId_ = nullptr;};
    inline string parentDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(parentDirectoryId_, "") };
    inline ListWorkflowDirectoriesResponseBodyData& setParentDirectoryId(string parentDirectoryId) { DARABONBA_PTR_SET_VALUE(parentDirectoryId_, parentDirectoryId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListWorkflowDirectoriesResponseBodyData& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline ListWorkflowDirectoriesResponseBodyData& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    std::shared_ptr<string> directoryId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> parentDirectoryId_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> workflowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
