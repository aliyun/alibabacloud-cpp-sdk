// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERVPCRESPONSEBODYUSERVPCINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERVPCRESPONSEBODYUSERVPCINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListUserVpcResponseBodyUserVpcInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserVpcResponseBodyUserVpcInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Default, default_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VRouterId, VRouterId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserVpcResponseBodyUserVpcInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Default, default_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VRouterId, VRouterId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    ListUserVpcResponseBodyUserVpcInfos() = default ;
    ListUserVpcResponseBodyUserVpcInfos(const ListUserVpcResponseBodyUserVpcInfos &) = default ;
    ListUserVpcResponseBodyUserVpcInfos(ListUserVpcResponseBodyUserVpcInfos &&) = default ;
    ListUserVpcResponseBodyUserVpcInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserVpcResponseBodyUserVpcInfos() = default ;
    ListUserVpcResponseBodyUserVpcInfos& operator=(const ListUserVpcResponseBodyUserVpcInfos &) = default ;
    ListUserVpcResponseBodyUserVpcInfos& operator=(ListUserVpcResponseBodyUserVpcInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidrBlock_ != nullptr
        && this->creationTime_ != nullptr && this->default_ != nullptr && this->description_ != nullptr && this->modifyTime_ != nullptr && this->regionId_ != nullptr
        && this->status_ != nullptr && this->VRouterId_ != nullptr && this->vpcId_ != nullptr && this->vpcName_ != nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline ListUserVpcResponseBodyUserVpcInfos& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListUserVpcResponseBodyUserVpcInfos& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // default Field Functions 
    bool hasDefault() const { return this->default_ != nullptr;};
    void deleteDefault() { this->default_ = nullptr;};
    inline bool _default() const { DARABONBA_PTR_GET_DEFAULT(default_, false) };
    inline ListUserVpcResponseBodyUserVpcInfos& setDefault(bool _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListUserVpcResponseBodyUserVpcInfos& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListUserVpcResponseBodyUserVpcInfos& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListUserVpcResponseBodyUserVpcInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListUserVpcResponseBodyUserVpcInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // VRouterId Field Functions 
    bool hasVRouterId() const { return this->VRouterId_ != nullptr;};
    void deleteVRouterId() { this->VRouterId_ = nullptr;};
    inline string VRouterId() const { DARABONBA_PTR_GET_DEFAULT(VRouterId_, "") };
    inline ListUserVpcResponseBodyUserVpcInfos& setVRouterId(string VRouterId) { DARABONBA_PTR_SET_VALUE(VRouterId_, VRouterId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListUserVpcResponseBodyUserVpcInfos& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline ListUserVpcResponseBodyUserVpcInfos& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // IPv4 network segment of the VPC.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // Creation time.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Indicates whether it is the default VPC in the region. Values:
    // - **true**: Yes - **false**: No
    std::shared_ptr<bool> default_ = nullptr;
    // Description of the VPC.
    std::shared_ptr<string> description_ = nullptr;
    // Modification time.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // Region
    std::shared_ptr<string> regionId_ = nullptr;
    // Status of the VPC. Values:
    // 
    // - **Pending**: Configuring
    // - **Available**: Available
    std::shared_ptr<string> status_ = nullptr;
    // ID of the VPC router.
    std::shared_ptr<string> VRouterId_ = nullptr;
    // ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // Name of the VPC.
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
