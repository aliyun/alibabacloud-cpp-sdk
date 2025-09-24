// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKSPACERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKSPACERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateWorkspaceResourceRequestLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class UpdateWorkspaceResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkspaceResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_ANY_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkspaceResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_ANY_FROM_JSON(Spec, spec_);
    };
    UpdateWorkspaceResourceRequest() = default ;
    UpdateWorkspaceResourceRequest(const UpdateWorkspaceResourceRequest &) = default ;
    UpdateWorkspaceResourceRequest(UpdateWorkspaceResourceRequest &&) = default ;
    UpdateWorkspaceResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkspaceResourceRequest() = default ;
    UpdateWorkspaceResourceRequest& operator=(const UpdateWorkspaceResourceRequest &) = default ;
    UpdateWorkspaceResourceRequest& operator=(UpdateWorkspaceResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupName_ != nullptr
        && this->isDefault_ != nullptr && this->labels_ != nullptr && this->productType_ != nullptr && this->resourceIds_ != nullptr && this->resourceType_ != nullptr
        && this->spec_ != nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateWorkspaceResourceRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline UpdateWorkspaceResourceRequest& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<UpdateWorkspaceResourceRequestLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<UpdateWorkspaceResourceRequestLabels>) };
    inline vector<UpdateWorkspaceResourceRequestLabels> labels() { DARABONBA_PTR_GET(labels_, vector<UpdateWorkspaceResourceRequestLabels>) };
    inline UpdateWorkspaceResourceRequest& setLabels(const vector<UpdateWorkspaceResourceRequestLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline UpdateWorkspaceResourceRequest& setLabels(vector<UpdateWorkspaceResourceRequestLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline UpdateWorkspaceResourceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & resourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> resourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline UpdateWorkspaceResourceRequest& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline UpdateWorkspaceResourceRequest& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UpdateWorkspaceResourceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline     const Darabonba::Json & spec() const { DARABONBA_GET(spec_) };
    Darabonba::Json & spec() { DARABONBA_GET(spec_) };
    inline UpdateWorkspaceResourceRequest& setSpec(const Darabonba::Json & spec) { DARABONBA_SET_VALUE(spec_, spec) };
    inline UpdateWorkspaceResourceRequest& setSpec(Darabonba::Json & spec) { DARABONBA_SET_RVALUE(spec_, spec) };


  protected:
    // The group name.
    std::shared_ptr<string> groupName_ = nullptr;
    // Specifies whether the resource is the default resource. This parameter can only be set to true and cannot be set to false.
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The resource tags. If you specify multiple tags, only resources that meet all the specified tag-based filter conditions are returned.
    std::shared_ptr<vector<UpdateWorkspaceResourceRequestLabels>> labels_ = nullptr;
    // **This field is no longer used and will be removed. Use the ResourceType field.
    std::shared_ptr<string> productType_ = nullptr;
    // The resource IDs.
    // 
    // You cannot leave both GroupName and ResourceIds empty. If you specify both the parameters, the value of GroupName of each resource ID in the dataset must be the same.
    std::shared_ptr<vector<string>> resourceIds_ = nullptr;
    // The resource type. Valid values:
    // 
    // *   MaxCompute
    // *   ECS
    // *   Lingjun
    // *   ACS
    // *   FLINK
    std::shared_ptr<string> resourceType_ = nullptr;
    // The specification of the resource.
    Darabonba::Json spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
