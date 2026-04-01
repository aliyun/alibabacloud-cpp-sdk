// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGADINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEGADINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DeleteGadInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGadInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GadInstanceName, gadInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGadInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GadInstanceName, gadInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DeleteGadInstanceRequest() = default ;
    DeleteGadInstanceRequest(const DeleteGadInstanceRequest &) = default ;
    DeleteGadInstanceRequest(DeleteGadInstanceRequest &&) = default ;
    DeleteGadInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGadInstanceRequest() = default ;
    DeleteGadInstanceRequest& operator=(const DeleteGadInstanceRequest &) = default ;
    DeleteGadInstanceRequest& operator=(DeleteGadInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gadInstanceName_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // gadInstanceName Field Functions 
    bool hasGadInstanceName() const { return this->gadInstanceName_ != nullptr;};
    void deleteGadInstanceName() { this->gadInstanceName_ = nullptr;};
    inline string getGadInstanceName() const { DARABONBA_PTR_GET_DEFAULT(gadInstanceName_, "") };
    inline DeleteGadInstanceRequest& setGadInstanceName(string gadInstanceName) { DARABONBA_PTR_SET_VALUE(gadInstanceName_, gadInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteGadInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DeleteGadInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the global active database cluster. You can call the GadInstanceName operation to query the cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> gadInstanceName_ {};
    // The region ID of the central node of the global active database cluster. The central node refers to the primary node. You can call the DescribeGadInstances operation to query the region ID.
    shared_ptr<string> regionId_ {};
    // The resource group ID. You can call the DescribeDBInstanceAttribute operation to query the resource group ID.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
