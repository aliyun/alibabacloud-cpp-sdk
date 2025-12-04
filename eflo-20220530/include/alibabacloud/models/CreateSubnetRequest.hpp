// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUBNETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUBNETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateSubnetRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class CreateSubnetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSubnetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SubnetName, subnetName_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSubnetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SubnetName, subnetName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateSubnetRequest() = default ;
    CreateSubnetRequest(const CreateSubnetRequest &) = default ;
    CreateSubnetRequest(CreateSubnetRequest &&) = default ;
    CreateSubnetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSubnetRequest() = default ;
    CreateSubnetRequest& operator=(const CreateSubnetRequest &) = default ;
    CreateSubnetRequest& operator=(CreateSubnetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidr_ == nullptr
        && return this->regionId_ == nullptr && return this->subnetName_ == nullptr && return this->tag_ == nullptr && return this->type_ == nullptr && return this->vpdId_ == nullptr
        && return this->zoneId_ == nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline CreateSubnetRequest& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSubnetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // subnetName Field Functions 
    bool hasSubnetName() const { return this->subnetName_ != nullptr;};
    void deleteSubnetName() { this->subnetName_ = nullptr;};
    inline string subnetName() const { DARABONBA_PTR_GET_DEFAULT(subnetName_, "") };
    inline CreateSubnetRequest& setSubnetName(string subnetName) { DARABONBA_PTR_SET_VALUE(subnetName_, subnetName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateSubnetRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateSubnetRequestTag>) };
    inline vector<CreateSubnetRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateSubnetRequestTag>) };
    inline CreateSubnetRequest& setTag(const vector<CreateSubnetRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateSubnetRequest& setTag(vector<CreateSubnetRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateSubnetRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline CreateSubnetRequest& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateSubnetRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The CIDR block of the Subnet.
    // 
    // *   The network segment of the subnet must be a proper subset of the network segment of Lingjun to which it belongs, and the mask must be between 16 bits and 29 bits, which can provide 8 to 65536 addresses. For example, the CIDR block of the Lingjun CIDR block is 192.168.0.0/16, and the CIDR blocks of the subnets under the Lingjun CIDR block are 192.168.0.0/17 to 192.168.0.0/29.
    // *   The first and last three IP addresses of each subnet segment are reserved by the system. For example, the CIDR blocks of the subnet are 192.168.1.0/24,192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255.
    // 
    // This parameter is required.
    std::shared_ptr<string> cidr_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Lingjun subnet instance name
    // 
    // This parameter is required.
    std::shared_ptr<string> subnetName_ = nullptr;
    // The tag information.
    // 
    // You can specify up to 20 tags.
    std::shared_ptr<vector<CreateSubnetRequestTag>> tag_ = nullptr;
    // Lingjun Subnet Usage Type; optional; optional. Valid values:
    // 
    // *   **If you do not set this field for a common type**
    // *   **OOB** :OOB type
    // *   **LB**: LB type
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the Lingjun CIDR block.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpdId_ = nullptr;
    // The zone ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
