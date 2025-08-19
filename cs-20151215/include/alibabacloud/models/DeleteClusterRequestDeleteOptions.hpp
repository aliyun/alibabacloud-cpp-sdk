// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLUSTERREQUESTDELETEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DELETECLUSTERREQUESTDELETEOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DeleteClusterRequestDeleteOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteClusterRequestDeleteOptions& obj) { 
      DARABONBA_PTR_TO_JSON(delete_mode, deleteMode_);
      DARABONBA_PTR_TO_JSON(resource_type, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteClusterRequestDeleteOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(delete_mode, deleteMode_);
      DARABONBA_PTR_FROM_JSON(resource_type, resourceType_);
    };
    DeleteClusterRequestDeleteOptions() = default ;
    DeleteClusterRequestDeleteOptions(const DeleteClusterRequestDeleteOptions &) = default ;
    DeleteClusterRequestDeleteOptions(DeleteClusterRequestDeleteOptions &&) = default ;
    DeleteClusterRequestDeleteOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteClusterRequestDeleteOptions() = default ;
    DeleteClusterRequestDeleteOptions& operator=(const DeleteClusterRequestDeleteOptions &) = default ;
    DeleteClusterRequestDeleteOptions& operator=(DeleteClusterRequestDeleteOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deleteMode_ != nullptr
        && this->resourceType_ != nullptr; };
    // deleteMode Field Functions 
    bool hasDeleteMode() const { return this->deleteMode_ != nullptr;};
    void deleteDeleteMode() { this->deleteMode_ = nullptr;};
    inline string deleteMode() const { DARABONBA_PTR_GET_DEFAULT(deleteMode_, "") };
    inline DeleteClusterRequestDeleteOptions& setDeleteMode(string deleteMode) { DARABONBA_PTR_SET_VALUE(deleteMode_, deleteMode) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DeleteClusterRequestDeleteOptions& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The deletion policy for the specified type of resource. Valid values:
    // 
    // *   delete: deletes the specified type of resource.
    // *   retain: retains the specified type of resource.
    std::shared_ptr<string> deleteMode_ = nullptr;
    // The type of the resource. Valid values:
    // 
    // *   SLB: SLB resources created for Services. By default, the SLB resources are automatically deleted.
    // *   ALB: Application Load Balancer (ALB) resources created by the ALB Ingress controller. By default, the ALB resources are retained.
    // *   SLS_Data: Simple Log Service projects used by the cluster logging feature. By default, the Simple Log Service projects are retained.
    // *   SLS_ControlPlane: Simple Log Service projects used to store the logs of control planes in ACK managed clusters. By default, the Simple Log Service projects are retained.
    // *   PrivateZone: PrivateZone resources created by ACK Serverless clusters. By default, the PrivateZone resources are retained.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
