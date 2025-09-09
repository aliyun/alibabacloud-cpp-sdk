// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEGROUPATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEGROUPATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class UpdateResourceGroupAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceGroupAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(NewResourceGroupId, newResourceGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceGroupAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(NewResourceGroupId, newResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateResourceGroupAttributeRequest() = default ;
    UpdateResourceGroupAttributeRequest(const UpdateResourceGroupAttributeRequest &) = default ;
    UpdateResourceGroupAttributeRequest(UpdateResourceGroupAttributeRequest &&) = default ;
    UpdateResourceGroupAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceGroupAttributeRequest() = default ;
    UpdateResourceGroupAttributeRequest& operator=(const UpdateResourceGroupAttributeRequest &) = default ;
    UpdateResourceGroupAttributeRequest& operator=(UpdateResourceGroupAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->drdsInstanceId_ != nullptr
        && this->newResourceGroupId_ != nullptr && this->regionId_ != nullptr; };
    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline UpdateResourceGroupAttributeRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // newResourceGroupId Field Functions 
    bool hasNewResourceGroupId() const { return this->newResourceGroupId_ != nullptr;};
    void deleteNewResourceGroupId() { this->newResourceGroupId_ = nullptr;};
    inline string newResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(newResourceGroupId_, "") };
    inline UpdateResourceGroupAttributeRequest& setNewResourceGroupId(string newResourceGroupId) { DARABONBA_PTR_SET_VALUE(newResourceGroupId_, newResourceGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateResourceGroupAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the instance that you want to transfer.
    // 
    // >  You can call the [DescribeDrdsInstances](https://help.aliyun.com/document_detail/139284.html) operation to view the details of the instances under the account, including the instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The ID of the resource group that you want to specify.
    // 
    // >  You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to view the details of the resource groups, including the resource group IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> newResourceGroupId_ = nullptr;
    // The ID of the region where the instance you want to transfer is located.
    // 
    // >  You can call the [DescribeDrdsInstances](https://help.aliyun.com/document_detail/139284.html) operation to view the details of the instances under the account, including the region IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
