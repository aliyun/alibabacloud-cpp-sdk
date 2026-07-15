// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKFLOWDAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKFLOWDAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class UpdateWorkflowDagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkflowDagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagJson, dagJson_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkflowDagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagJson, dagJson_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    UpdateWorkflowDagRequest() = default ;
    UpdateWorkflowDagRequest(const UpdateWorkflowDagRequest &) = default ;
    UpdateWorkflowDagRequest(UpdateWorkflowDagRequest &&) = default ;
    UpdateWorkflowDagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkflowDagRequest() = default ;
    UpdateWorkflowDagRequest& operator=(const UpdateWorkflowDagRequest &) = default ;
    UpdateWorkflowDagRequest& operator=(UpdateWorkflowDagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dagJson_ == nullptr
        && this->groupId_ == nullptr && this->namespace_ == nullptr && this->namespaceSource_ == nullptr && this->regionId_ == nullptr && this->workflowId_ == nullptr; };
    // dagJson Field Functions 
    bool hasDagJson() const { return this->dagJson_ != nullptr;};
    void deleteDagJson() { this->dagJson_ = nullptr;};
    inline string getDagJson() const { DARABONBA_PTR_GET_DEFAULT(dagJson_, "") };
    inline UpdateWorkflowDagRequest& setDagJson(string dagJson) { DARABONBA_PTR_SET_VALUE(dagJson_, dagJson) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateWorkflowDagRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateWorkflowDagRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceSource Field Functions 
    bool hasNamespaceSource() const { return this->namespaceSource_ != nullptr;};
    void deleteNamespaceSource() { this->namespaceSource_ = nullptr;};
    inline string getNamespaceSource() const { DARABONBA_PTR_GET_DEFAULT(namespaceSource_, "") };
    inline UpdateWorkflowDagRequest& setNamespaceSource(string namespaceSource) { DARABONBA_PTR_SET_VALUE(namespaceSource_, namespaceSource) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateWorkflowDagRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline UpdateWorkflowDagRequest& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The definition of the workflow\\"s directed acyclic graph (DAG), including nodes and edges, as a JSON string.
    // 
    // This parameter is required.
    shared_ptr<string> dagJson_ {};
    // The Application Group ID. You can find this ID on the **Application Management** page in the console.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The Namespace ID. You can obtain the ID on the **Namespaces** page in the console.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // This parameter is required only for specific third-party integrations.
    shared_ptr<string> namespaceSource_ {};
    // The Region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The Workflow ID.
    // 
    // This parameter is required.
    shared_ptr<string> workflowId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
