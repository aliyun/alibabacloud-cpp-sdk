// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPRESPONSEBODYRESOURCEGROUPLISTRESGROUPENTITYECSLISTECSENTITYVPCENTITY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPRESPONSEBODYRESOURCEGROUPLISTRESGROUPENTITYECSLISTECSENTITYVPCENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity& obj) { 
      DARABONBA_PTR_TO_JSON(Cidrblock, cidrblock_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EcsNum, ecsNum_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidrblock, cidrblock_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EcsNum, ecsNum_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity() = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity(const ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity &) = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity(ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity &&) = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity() = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity& operator=(const ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity &) = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity& operator=(ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrblock_ == nullptr
        && return this->description_ == nullptr && return this->ecsNum_ == nullptr && return this->expired_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr
        && return this->userId_ == nullptr && return this->vpcId_ == nullptr && return this->vpcName_ == nullptr; };
    // cidrblock Field Functions 
    bool hasCidrblock() const { return this->cidrblock_ != nullptr;};
    void deleteCidrblock() { this->cidrblock_ = nullptr;};
    inline string cidrblock() const { DARABONBA_PTR_GET_DEFAULT(cidrblock_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity& setCidrblock(string cidrblock) { DARABONBA_PTR_SET_VALUE(cidrblock_, cidrblock) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecsNum Field Functions 
    bool hasEcsNum() const { return this->ecsNum_ != nullptr;};
    void deleteEcsNum() { this->ecsNum_ = nullptr;};
    inline int32_t ecsNum() const { DARABONBA_PTR_GET_DEFAULT(ecsNum_, 0) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity& setEcsNum(int32_t ecsNum) { DARABONBA_PTR_SET_VALUE(ecsNum_, ecsNum) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // The IPv4 CIDR block of the vSwitch.
    std::shared_ptr<string> cidrblock_ = nullptr;
    // The description of the VPC.
    std::shared_ptr<string> description_ = nullptr;
    // The number of ECS instances that run in the VPC.
    std::shared_ptr<int32_t> ecsNum_ = nullptr;
    // Indicates whether the VPC has expired. Valid values:
    // 
    // *   true: The VPC has expired.
    // *   false: The VPC has not expired.
    std::shared_ptr<bool> expired_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the VPC.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
    // The unique ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The name of the VPC.
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
