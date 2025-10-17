// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODYVPCSVPC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODYVPCSVPC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpcsResponseBodyVpcsVpcUserCidrs.hpp>
#include <alibabacloud/models/DescribeVpcsResponseBodyVpcsVpcVSwitchIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeVpcsResponseBodyVpcsVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcsResponseBodyVpcsVpc& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserCidrs, userCidrs_);
      DARABONBA_PTR_TO_JSON(VRouterId, VRouterId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcsResponseBodyVpcsVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserCidrs, userCidrs_);
      DARABONBA_PTR_FROM_JSON(VRouterId, VRouterId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeVpcsResponseBodyVpcsVpc() = default ;
    DescribeVpcsResponseBodyVpcsVpc(const DescribeVpcsResponseBodyVpcsVpc &) = default ;
    DescribeVpcsResponseBodyVpcsVpc(DescribeVpcsResponseBodyVpcsVpc &&) = default ;
    DescribeVpcsResponseBodyVpcsVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcsResponseBodyVpcsVpc() = default ;
    DescribeVpcsResponseBodyVpcsVpc& operator=(const DescribeVpcsResponseBodyVpcsVpc &) = default ;
    DescribeVpcsResponseBodyVpcsVpc& operator=(DescribeVpcsResponseBodyVpcsVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->isDefault_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr
        && return this->userCidrs_ == nullptr && return this->VRouterId_ == nullptr && return this->vSwitchIds_ == nullptr && return this->vpcId_ == nullptr && return this->vpcName_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DescribeVpcsResponseBodyVpcsVpc& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userCidrs Field Functions 
    bool hasUserCidrs() const { return this->userCidrs_ != nullptr;};
    void deleteUserCidrs() { this->userCidrs_ = nullptr;};
    inline const Models::DescribeVpcsResponseBodyVpcsVpcUserCidrs & userCidrs() const { DARABONBA_PTR_GET_CONST(userCidrs_, Models::DescribeVpcsResponseBodyVpcsVpcUserCidrs) };
    inline Models::DescribeVpcsResponseBodyVpcsVpcUserCidrs userCidrs() { DARABONBA_PTR_GET(userCidrs_, Models::DescribeVpcsResponseBodyVpcsVpcUserCidrs) };
    inline DescribeVpcsResponseBodyVpcsVpc& setUserCidrs(const Models::DescribeVpcsResponseBodyVpcsVpcUserCidrs & userCidrs) { DARABONBA_PTR_SET_VALUE(userCidrs_, userCidrs) };
    inline DescribeVpcsResponseBodyVpcsVpc& setUserCidrs(Models::DescribeVpcsResponseBodyVpcsVpcUserCidrs && userCidrs) { DARABONBA_PTR_SET_RVALUE(userCidrs_, userCidrs) };


    // VRouterId Field Functions 
    bool hasVRouterId() const { return this->VRouterId_ != nullptr;};
    void deleteVRouterId() { this->VRouterId_ = nullptr;};
    inline string VRouterId() const { DARABONBA_PTR_GET_DEFAULT(VRouterId_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setVRouterId(string VRouterId) { DARABONBA_PTR_SET_VALUE(VRouterId_, VRouterId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const Models::DescribeVpcsResponseBodyVpcsVpcVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Models::DescribeVpcsResponseBodyVpcsVpcVSwitchIds) };
    inline Models::DescribeVpcsResponseBodyVpcsVpcVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Models::DescribeVpcsResponseBodyVpcsVpcVSwitchIds) };
    inline DescribeVpcsResponseBodyVpcsVpc& setVSwitchIds(const Models::DescribeVpcsResponseBodyVpcsVpcVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeVpcsResponseBodyVpcsVpc& setVSwitchIds(Models::DescribeVpcsResponseBodyVpcsVpcVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    std::shared_ptr<string> cidrBlock_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> isDefault_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::DescribeVpcsResponseBodyVpcsVpcUserCidrs> userCidrs_ = nullptr;
    std::shared_ptr<string> VRouterId_ = nullptr;
    std::shared_ptr<Models::DescribeVpcsResponseBodyVpcsVpcVSwitchIds> vSwitchIds_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
