// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class DeleteWorkflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    DeleteWorkflowRequest() = default ;
    DeleteWorkflowRequest(const DeleteWorkflowRequest &) = default ;
    DeleteWorkflowRequest(DeleteWorkflowRequest &&) = default ;
    DeleteWorkflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkflowRequest() = default ;
    DeleteWorkflowRequest& operator=(const DeleteWorkflowRequest &) = default ;
    DeleteWorkflowRequest& operator=(DeleteWorkflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->namespace_ == nullptr && this->namespaceSource_ == nullptr && this->regionId_ == nullptr && this->workflowId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DeleteWorkflowRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DeleteWorkflowRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceSource Field Functions 
    bool hasNamespaceSource() const { return this->namespaceSource_ != nullptr;};
    void deleteNamespaceSource() { this->namespaceSource_ = nullptr;};
    inline string getNamespaceSource() const { DARABONBA_PTR_GET_DEFAULT(namespaceSource_, "") };
    inline DeleteWorkflowRequest& setNamespaceSource(string namespaceSource) { DARABONBA_PTR_SET_VALUE(namespaceSource_, namespaceSource) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteWorkflowRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline DeleteWorkflowRequest& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The ID of the application group. You can find this ID on the **Application Management** page in the Console.
    shared_ptr<string> groupId_ {};
    // The ID of the namespace. You can find this ID on the **Namespace** page in the Console.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // Required only for specific third-party scenarios.
    shared_ptr<string> namespaceSource_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The workflow ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> workflowId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
