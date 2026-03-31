// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEOWNERUIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEOWNERUIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseResourceOwnerUidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseResourceOwnerUidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceNames, resourceNames_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseResourceOwnerUidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceNames, resourceNames_);
    };
    DescribeDefenseResourceOwnerUidRequest() = default ;
    DescribeDefenseResourceOwnerUidRequest(const DescribeDefenseResourceOwnerUidRequest &) = default ;
    DescribeDefenseResourceOwnerUidRequest(DescribeDefenseResourceOwnerUidRequest &&) = default ;
    DescribeDefenseResourceOwnerUidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseResourceOwnerUidRequest() = default ;
    DescribeDefenseResourceOwnerUidRequest& operator=(const DescribeDefenseResourceOwnerUidRequest &) = default ;
    DescribeDefenseResourceOwnerUidRequest& operator=(DescribeDefenseResourceOwnerUidRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->resourceNames_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDefenseResourceOwnerUidRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDefenseResourceOwnerUidRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeDefenseResourceOwnerUidRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // resourceNames Field Functions 
    bool hasResourceNames() const { return this->resourceNames_ != nullptr;};
    void deleteResourceNames() { this->resourceNames_ = nullptr;};
    inline string getResourceNames() const { DARABONBA_PTR_GET_DEFAULT(resourceNames_, "") };
    inline DescribeDefenseResourceOwnerUidRequest& setResourceNames(string resourceNames) { DARABONBA_PTR_SET_VALUE(resourceNames_, resourceNames) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // This parameter is required.
    shared_ptr<string> resourceNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
