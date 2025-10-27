// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEWORKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEWORKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ExecuteWorkflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteWorkflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceParameters, instanceParameters_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteWorkflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceParameters, instanceParameters_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    ExecuteWorkflowRequest() = default ;
    ExecuteWorkflowRequest(const ExecuteWorkflowRequest &) = default ;
    ExecuteWorkflowRequest(ExecuteWorkflowRequest &&) = default ;
    ExecuteWorkflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteWorkflowRequest() = default ;
    ExecuteWorkflowRequest& operator=(const ExecuteWorkflowRequest &) = default ;
    ExecuteWorkflowRequest& operator=(ExecuteWorkflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->instanceParameters_ == nullptr && return this->namespace_ == nullptr && return this->namespaceSource_ == nullptr && return this->regionId_ == nullptr && return this->workflowId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ExecuteWorkflowRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceParameters Field Functions 
    bool hasInstanceParameters() const { return this->instanceParameters_ != nullptr;};
    void deleteInstanceParameters() { this->instanceParameters_ = nullptr;};
    inline string instanceParameters() const { DARABONBA_PTR_GET_DEFAULT(instanceParameters_, "") };
    inline ExecuteWorkflowRequest& setInstanceParameters(string instanceParameters) { DARABONBA_PTR_SET_VALUE(instanceParameters_, instanceParameters) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ExecuteWorkflowRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceSource Field Functions 
    bool hasNamespaceSource() const { return this->namespaceSource_ != nullptr;};
    void deleteNamespaceSource() { this->namespaceSource_ = nullptr;};
    inline string namespaceSource() const { DARABONBA_PTR_GET_DEFAULT(namespaceSource_, "") };
    inline ExecuteWorkflowRequest& setNamespaceSource(string namespaceSource) { DARABONBA_PTR_SET_VALUE(namespaceSource_, namespaceSource) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ExecuteWorkflowRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline ExecuteWorkflowRequest& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The application ID. You can obtain the application ID on the Application Management page in the SchedulerX console.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The dynamic parameter of the workflow instance. The value of the parameter can be up to 1,000 bytes in length.
    std::shared_ptr<string> instanceParameters_ = nullptr;
    // The namespace ID. You can obtain the namespace ID on the Namespace page in the SchedulerX console.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The source of the namespace. This parameter is required only for a special third party.
    std::shared_ptr<string> namespaceSource_ = nullptr;
    // The region information.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The workflow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> workflowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
