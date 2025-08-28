// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEINSTANCEFROMVBRSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEINSTANCEFROMVBRSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class RevokeInstanceFromVbrShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeInstanceFromVbrShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GrantType, grantType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VbrInstanceIds, vbrInstanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(VbrOwnerUid, vbrOwnerUid_);
      DARABONBA_PTR_TO_JSON(VbrRegionNo, vbrRegionNo_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeInstanceFromVbrShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantType, grantType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VbrInstanceIds, vbrInstanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(VbrOwnerUid, vbrOwnerUid_);
      DARABONBA_PTR_FROM_JSON(VbrRegionNo, vbrRegionNo_);
    };
    RevokeInstanceFromVbrShrinkRequest() = default ;
    RevokeInstanceFromVbrShrinkRequest(const RevokeInstanceFromVbrShrinkRequest &) = default ;
    RevokeInstanceFromVbrShrinkRequest(RevokeInstanceFromVbrShrinkRequest &&) = default ;
    RevokeInstanceFromVbrShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeInstanceFromVbrShrinkRequest() = default ;
    RevokeInstanceFromVbrShrinkRequest& operator=(const RevokeInstanceFromVbrShrinkRequest &) = default ;
    RevokeInstanceFromVbrShrinkRequest& operator=(RevokeInstanceFromVbrShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->grantType_ != nullptr
        && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->vbrInstanceIdsShrink_ != nullptr && this->vbrOwnerUid_ != nullptr && this->vbrRegionNo_ != nullptr; };
    // grantType Field Functions 
    bool hasGrantType() const { return this->grantType_ != nullptr;};
    void deleteGrantType() { this->grantType_ = nullptr;};
    inline string grantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
    inline RevokeInstanceFromVbrShrinkRequest& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RevokeInstanceFromVbrShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RevokeInstanceFromVbrShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vbrInstanceIdsShrink Field Functions 
    bool hasVbrInstanceIdsShrink() const { return this->vbrInstanceIdsShrink_ != nullptr;};
    void deleteVbrInstanceIdsShrink() { this->vbrInstanceIdsShrink_ = nullptr;};
    inline string vbrInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(vbrInstanceIdsShrink_, "") };
    inline RevokeInstanceFromVbrShrinkRequest& setVbrInstanceIdsShrink(string vbrInstanceIdsShrink) { DARABONBA_PTR_SET_VALUE(vbrInstanceIdsShrink_, vbrInstanceIdsShrink) };


    // vbrOwnerUid Field Functions 
    bool hasVbrOwnerUid() const { return this->vbrOwnerUid_ != nullptr;};
    void deleteVbrOwnerUid() { this->vbrOwnerUid_ = nullptr;};
    inline string vbrOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(vbrOwnerUid_, "") };
    inline RevokeInstanceFromVbrShrinkRequest& setVbrOwnerUid(string vbrOwnerUid) { DARABONBA_PTR_SET_VALUE(vbrOwnerUid_, vbrOwnerUid) };


    // vbrRegionNo Field Functions 
    bool hasVbrRegionNo() const { return this->vbrRegionNo_ != nullptr;};
    void deleteVbrRegionNo() { this->vbrRegionNo_ = nullptr;};
    inline string vbrRegionNo() const { DARABONBA_PTR_GET_DEFAULT(vbrRegionNo_, "") };
    inline RevokeInstanceFromVbrShrinkRequest& setVbrRegionNo(string vbrRegionNo) { DARABONBA_PTR_SET_VALUE(vbrRegionNo_, vbrRegionNo) };


  protected:
    // The VBRs for which you want to revoke permissions on the VPC. Valid values:
    // 
    // *   **ALL**: Permissions on the VPC are revoked for all VBRs in the specified region. **VbrInstanceIds** can be left empty.
    // *   **Specify**: Permissions on the VPC are revoked for the specified VBRs. **VbrInstanceIds** must be assigned a value.
    // 
    // This parameter is required.
    std::shared_ptr<string> grantType_ = nullptr;
    // The VPC ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the region where the VPC is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IDs of the VBRs for which you want to revoke the permissions.
    std::shared_ptr<string> vbrInstanceIdsShrink_ = nullptr;
    // The ID of the Alibaba Cloud account to which the VBR belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> vbrOwnerUid_ = nullptr;
    // The ID of the region where the VBR is deployed.
    // 
    // This parameter is required.
    std::shared_ptr<string> vbrRegionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
