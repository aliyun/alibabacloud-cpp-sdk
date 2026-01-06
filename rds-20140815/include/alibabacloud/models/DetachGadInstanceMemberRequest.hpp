// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHGADINSTANCEMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHGADINSTANCEMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DetachGadInstanceMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachGadInstanceMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GadInstanceName, gadInstanceName_);
      DARABONBA_PTR_TO_JSON(MemberInstanceName, memberInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachGadInstanceMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GadInstanceName, gadInstanceName_);
      DARABONBA_PTR_FROM_JSON(MemberInstanceName, memberInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DetachGadInstanceMemberRequest() = default ;
    DetachGadInstanceMemberRequest(const DetachGadInstanceMemberRequest &) = default ;
    DetachGadInstanceMemberRequest(DetachGadInstanceMemberRequest &&) = default ;
    DetachGadInstanceMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachGadInstanceMemberRequest() = default ;
    DetachGadInstanceMemberRequest& operator=(const DetachGadInstanceMemberRequest &) = default ;
    DetachGadInstanceMemberRequest& operator=(DetachGadInstanceMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gadInstanceName_ == nullptr
        && this->memberInstanceName_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // gadInstanceName Field Functions 
    bool hasGadInstanceName() const { return this->gadInstanceName_ != nullptr;};
    void deleteGadInstanceName() { this->gadInstanceName_ = nullptr;};
    inline string getGadInstanceName() const { DARABONBA_PTR_GET_DEFAULT(gadInstanceName_, "") };
    inline DetachGadInstanceMemberRequest& setGadInstanceName(string gadInstanceName) { DARABONBA_PTR_SET_VALUE(gadInstanceName_, gadInstanceName) };


    // memberInstanceName Field Functions 
    bool hasMemberInstanceName() const { return this->memberInstanceName_ != nullptr;};
    void deleteMemberInstanceName() { this->memberInstanceName_ = nullptr;};
    inline string getMemberInstanceName() const { DARABONBA_PTR_GET_DEFAULT(memberInstanceName_, "") };
    inline DetachGadInstanceMemberRequest& setMemberInstanceName(string memberInstanceName) { DARABONBA_PTR_SET_VALUE(memberInstanceName_, memberInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachGadInstanceMemberRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DetachGadInstanceMemberRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the global active database cluster.
    // 
    // This parameter is required.
    shared_ptr<string> gadInstanceName_ {};
    // The ID of the instance that serves as the unit node you want to remove. You can call the DescribeGadInstances query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> memberInstanceName_ {};
    // The region ID of the central node. You can call the DescribeGadInstances operation to query the region ID.
    shared_ptr<string> regionId_ {};
    // The resource group ID. You can call the DescribeDBInstanceAttribute operation to query the resource group ID.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
