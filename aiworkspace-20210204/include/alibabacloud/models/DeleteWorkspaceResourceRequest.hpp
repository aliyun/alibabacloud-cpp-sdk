// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKSPACERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKSPACERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class DeleteWorkspaceResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkspaceResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkspaceResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DeleteWorkspaceResourceRequest() = default ;
    DeleteWorkspaceResourceRequest(const DeleteWorkspaceResourceRequest &) = default ;
    DeleteWorkspaceResourceRequest(DeleteWorkspaceResourceRequest &&) = default ;
    DeleteWorkspaceResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkspaceResourceRequest() = default ;
    DeleteWorkspaceResourceRequest& operator=(const DeleteWorkspaceResourceRequest &) = default ;
    DeleteWorkspaceResourceRequest& operator=(DeleteWorkspaceResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && this->labels_ == nullptr && this->option_ == nullptr && this->productType_ == nullptr && this->resourceIds_ == nullptr && this->resourceType_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DeleteWorkspaceResourceRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline DeleteWorkspaceResourceRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string getOption() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline DeleteWorkspaceResourceRequest& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DeleteWorkspaceResourceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline string getResourceIds() const { DARABONBA_PTR_GET_DEFAULT(resourceIds_, "") };
    inline DeleteWorkspaceResourceRequest& setResourceIds(string resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DeleteWorkspaceResourceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The name of the resource group. To obtain the name of the resource group, see [ListResources](https://help.aliyun.com/document_detail/449143.html).
    shared_ptr<string> groupName_ {};
    // The list of tags, separated by commas.
    shared_ptr<string> labels_ {};
    // The deletion behavior. Valid values:
    // - DetachAndDelete: Unbinds the resources from the workspace and deletes the resources. This is the default value.
    // - Detach: Unbinds the resources from the workspace.
    shared_ptr<string> option_ {};
    // **[Deprecated]** This field is deprecated and will be retired. Use the ResourceType field.
    shared_ptr<string> productType_ {};
    // The IDs of the resources, separated by commas. The GroupName of these resource IDs must be the same. GroupName and ResourceIds cannot be empty at the same time, but both can be specified.
    shared_ptr<string> resourceIds_ {};
    // The list of resource types. Valid values:
    // - ECS: general computing resources
    // - Lingjun: Lingjun AI computing resources
    // - ACS: ACS computing resources
    // - FLINK: Flink resources
    // - MaxCompute: MaxCompute resources. Only the Detach option is supported. The DetachAndDelete option is not supported.
    // - SelfManagedAckPro: ACK Pro unified management cluster resources
    // - SelfManagedAckLingjun: ACK Lingjun unified management cluster resources
    // - SelfManagedASI: ASI unified management cluster resources (third-party cloud)
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
