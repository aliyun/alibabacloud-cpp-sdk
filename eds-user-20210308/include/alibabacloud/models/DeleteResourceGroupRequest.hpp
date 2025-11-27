// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DeleteResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIds, resourceGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIds, resourceGroupIds_);
    };
    DeleteResourceGroupRequest() = default ;
    DeleteResourceGroupRequest(const DeleteResourceGroupRequest &) = default ;
    DeleteResourceGroupRequest(DeleteResourceGroupRequest &&) = default ;
    DeleteResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteResourceGroupRequest() = default ;
    DeleteResourceGroupRequest& operator=(const DeleteResourceGroupRequest &) = default ;
    DeleteResourceGroupRequest& operator=(DeleteResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceGroupId_ == nullptr
        && return this->resourceGroupIds_ == nullptr; };
    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DeleteResourceGroupRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceGroupIds Field Functions 
    bool hasResourceGroupIds() const { return this->resourceGroupIds_ != nullptr;};
    void deleteResourceGroupIds() { this->resourceGroupIds_ = nullptr;};
    inline const vector<string> & resourceGroupIds() const { DARABONBA_PTR_GET_CONST(resourceGroupIds_, vector<string>) };
    inline vector<string> resourceGroupIds() { DARABONBA_PTR_GET(resourceGroupIds_, vector<string>) };
    inline DeleteResourceGroupRequest& setResourceGroupIds(const vector<string> & resourceGroupIds) { DARABONBA_PTR_SET_VALUE(resourceGroupIds_, resourceGroupIds) };
    inline DeleteResourceGroupRequest& setResourceGroupIds(vector<string> && resourceGroupIds) { DARABONBA_PTR_SET_RVALUE(resourceGroupIds_, resourceGroupIds) };


  protected:
    // >  The ID of the resource group that you want to delete.
    // 
    // *   If you also specify ResourceGroupIds, both parameters take effect.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // >  The IDs of the resource groups that you want to delete.
    // 
    // *   If you also specify ResourceGroupId, both parameters take effect.
    std::shared_ptr<vector<string>> resourceGroupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
