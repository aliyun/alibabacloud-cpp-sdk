// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWDEFINITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWDEFINITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetWorkflowDefinitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowDefinitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IncludeScriptContent, includeScriptContent_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowDefinitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IncludeScriptContent, includeScriptContent_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetWorkflowDefinitionRequest() = default ;
    GetWorkflowDefinitionRequest(const GetWorkflowDefinitionRequest &) = default ;
    GetWorkflowDefinitionRequest(GetWorkflowDefinitionRequest &&) = default ;
    GetWorkflowDefinitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowDefinitionRequest() = default ;
    GetWorkflowDefinitionRequest& operator=(const GetWorkflowDefinitionRequest &) = default ;
    GetWorkflowDefinitionRequest& operator=(GetWorkflowDefinitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->includeScriptContent_ == nullptr && return this->projectId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetWorkflowDefinitionRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // includeScriptContent Field Functions 
    bool hasIncludeScriptContent() const { return this->includeScriptContent_ != nullptr;};
    void deleteIncludeScriptContent() { this->includeScriptContent_ = nullptr;};
    inline bool includeScriptContent() const { DARABONBA_PTR_GET_DEFAULT(includeScriptContent_, false) };
    inline GetWorkflowDefinitionRequest& setIncludeScriptContent(bool includeScriptContent) { DARABONBA_PTR_SET_VALUE(includeScriptContent_, includeScriptContent) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetWorkflowDefinitionRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The ID of the workflow.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // 查询结果是否包含工作流内部节点的脚本内容（对于内容较多的节点，可能存在较长的网络传输延时）。
    std::shared_ptr<bool> includeScriptContent_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // You must configure this parameter to specify the DataWorks workspace to which the API operation is applied.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
