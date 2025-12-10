// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MoveResourcesRequestResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class MoveResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, MoveResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    MoveResourcesRequest() = default ;
    MoveResourcesRequest(const MoveResourcesRequest &) = default ;
    MoveResourcesRequest(MoveResourcesRequest &&) = default ;
    MoveResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveResourcesRequest() = default ;
    MoveResourcesRequest& operator=(const MoveResourcesRequest &) = default ;
    MoveResourcesRequest& operator=(MoveResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceGroupId_ == nullptr
        && return this->resources_ == nullptr; };
    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline MoveResourcesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<MoveResourcesRequestResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<MoveResourcesRequestResources>) };
    inline vector<MoveResourcesRequestResources> resources() { DARABONBA_PTR_GET(resources_, vector<MoveResourcesRequestResources>) };
    inline MoveResourcesRequest& setResources(const vector<MoveResourcesRequestResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline MoveResourcesRequest& setResources(vector<MoveResourcesRequestResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The ID of the resource group to which you want to move the resources.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The resources that you want to move.
    // 
    // >  You can move a maximum of 10 resources at a time. If you want to move more than 10 resources, move them in batches.
    // 
    // This parameter is required.
    std::shared_ptr<vector<MoveResourcesRequestResources>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
