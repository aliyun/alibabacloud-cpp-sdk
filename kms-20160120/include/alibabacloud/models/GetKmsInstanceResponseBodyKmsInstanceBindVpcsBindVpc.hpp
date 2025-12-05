// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKMSINSTANCERESPONSEBODYKMSINSTANCEBINDVPCSBINDVPC_HPP_
#define ALIBABACLOUD_MODELS_GETKMSINSTANCERESPONSEBODYKMSINSTANCEBINDVPCSBINDVPC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcOwnerId, vpcOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcOwnerId, vpcOwnerId_);
    };
    GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc() = default ;
    GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc(const GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc &) = default ;
    GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc(GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc &&) = default ;
    GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc() = default ;
    GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc& operator=(const GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc &) = default ;
    GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc& operator=(GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr && return this->vpcOwnerId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcOwnerId Field Functions 
    bool hasVpcOwnerId() const { return this->vpcOwnerId_ != nullptr;};
    void deleteVpcOwnerId() { this->vpcOwnerId_ = nullptr;};
    inline string vpcOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vpcOwnerId_, "") };
    inline GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc& setVpcOwnerId(string vpcOwnerId) { DARABONBA_PTR_SET_VALUE(vpcOwnerId_, vpcOwnerId) };


  protected:
    // The region to which the VPC belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The vSwitch in the VPC.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The Alibaba Cloud account to which the VPC belongs.
    std::shared_ptr<string> vpcOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
