// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTINSTANCETOVBRSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTINSTANCETOVBRSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GrantInstanceToVbrShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantInstanceToVbrShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GrantType, grantType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VbrInstanceIds, vbrInstanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(VbrOwnerUid, vbrOwnerUid_);
      DARABONBA_PTR_TO_JSON(VbrRegionNo, vbrRegionNo_);
    };
    friend void from_json(const Darabonba::Json& j, GrantInstanceToVbrShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantType, grantType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VbrInstanceIds, vbrInstanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(VbrOwnerUid, vbrOwnerUid_);
      DARABONBA_PTR_FROM_JSON(VbrRegionNo, vbrRegionNo_);
    };
    GrantInstanceToVbrShrinkRequest() = default ;
    GrantInstanceToVbrShrinkRequest(const GrantInstanceToVbrShrinkRequest &) = default ;
    GrantInstanceToVbrShrinkRequest(GrantInstanceToVbrShrinkRequest &&) = default ;
    GrantInstanceToVbrShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantInstanceToVbrShrinkRequest() = default ;
    GrantInstanceToVbrShrinkRequest& operator=(const GrantInstanceToVbrShrinkRequest &) = default ;
    GrantInstanceToVbrShrinkRequest& operator=(GrantInstanceToVbrShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->grantType_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->vbrInstanceIdsShrink_ == nullptr && this->vbrOwnerUid_ == nullptr && this->vbrRegionNo_ == nullptr; };
    // grantType Field Functions 
    bool hasGrantType() const { return this->grantType_ != nullptr;};
    void deleteGrantType() { this->grantType_ = nullptr;};
    inline string getGrantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
    inline GrantInstanceToVbrShrinkRequest& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GrantInstanceToVbrShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GrantInstanceToVbrShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vbrInstanceIdsShrink Field Functions 
    bool hasVbrInstanceIdsShrink() const { return this->vbrInstanceIdsShrink_ != nullptr;};
    void deleteVbrInstanceIdsShrink() { this->vbrInstanceIdsShrink_ = nullptr;};
    inline string getVbrInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(vbrInstanceIdsShrink_, "") };
    inline GrantInstanceToVbrShrinkRequest& setVbrInstanceIdsShrink(string vbrInstanceIdsShrink) { DARABONBA_PTR_SET_VALUE(vbrInstanceIdsShrink_, vbrInstanceIdsShrink) };


    // vbrOwnerUid Field Functions 
    bool hasVbrOwnerUid() const { return this->vbrOwnerUid_ != nullptr;};
    void deleteVbrOwnerUid() { this->vbrOwnerUid_ = nullptr;};
    inline int64_t getVbrOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(vbrOwnerUid_, 0L) };
    inline GrantInstanceToVbrShrinkRequest& setVbrOwnerUid(int64_t vbrOwnerUid) { DARABONBA_PTR_SET_VALUE(vbrOwnerUid_, vbrOwnerUid) };


    // vbrRegionNo Field Functions 
    bool hasVbrRegionNo() const { return this->vbrRegionNo_ != nullptr;};
    void deleteVbrRegionNo() { this->vbrRegionNo_ = nullptr;};
    inline string getVbrRegionNo() const { DARABONBA_PTR_GET_DEFAULT(vbrRegionNo_, "") };
    inline GrantInstanceToVbrShrinkRequest& setVbrRegionNo(string vbrRegionNo) { DARABONBA_PTR_SET_VALUE(vbrRegionNo_, vbrRegionNo) };


  protected:
    // The scope of VBR instances that accept the authorization. Valid values:
    // 
    // - **All**: Grants authorization of the VPC instance to all VBR instances in the specified region under the specified Alibaba Cloud account. In this case, the **VbrInstanceIds** parameter can be left empty.
    // - **Specify**: Grants authorization of the VPC instance to the specified VBR instances. In this case, the **VbrInstanceIds** parameter is required.
    // 
    // This parameter is required.
    shared_ptr<string> grantType_ {};
    // The ID of the VPC instance for which authorization is to be granted.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the VPC instance for which authorization is to be granted.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The list of VBR instances to be granted authorization.
    shared_ptr<string> vbrInstanceIdsShrink_ {};
    // The Alibaba Cloud account ID that owns the VBR instance to be granted authorization.
    // 
    // This parameter is required.
    shared_ptr<int64_t> vbrOwnerUid_ {};
    // The region ID of the VBR instance to be granted authorization.
    // 
    // This parameter is required.
    shared_ptr<string> vbrRegionNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
