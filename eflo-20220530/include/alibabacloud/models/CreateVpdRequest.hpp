// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateVpdRequestSubnets.hpp>
#include <alibabacloud/models/CreateVpdRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class CreateVpdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Subnets, subnets_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpdName, vpdName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Subnets, subnets_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpdName, vpdName_);
    };
    CreateVpdRequest() = default ;
    CreateVpdRequest(const CreateVpdRequest &) = default ;
    CreateVpdRequest(CreateVpdRequest &&) = default ;
    CreateVpdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpdRequest() = default ;
    CreateVpdRequest& operator=(const CreateVpdRequest &) = default ;
    CreateVpdRequest& operator=(CreateVpdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidr_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->subnets_ == nullptr && return this->tag_ == nullptr && return this->vpdName_ == nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline CreateVpdRequest& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVpdRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateVpdRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // subnets Field Functions 
    bool hasSubnets() const { return this->subnets_ != nullptr;};
    void deleteSubnets() { this->subnets_ = nullptr;};
    inline const vector<CreateVpdRequestSubnets> & subnets() const { DARABONBA_PTR_GET_CONST(subnets_, vector<CreateVpdRequestSubnets>) };
    inline vector<CreateVpdRequestSubnets> subnets() { DARABONBA_PTR_GET(subnets_, vector<CreateVpdRequestSubnets>) };
    inline CreateVpdRequest& setSubnets(const vector<CreateVpdRequestSubnets> & subnets) { DARABONBA_PTR_SET_VALUE(subnets_, subnets) };
    inline CreateVpdRequest& setSubnets(vector<CreateVpdRequestSubnets> && subnets) { DARABONBA_PTR_SET_RVALUE(subnets_, subnets) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateVpdRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateVpdRequestTag>) };
    inline vector<CreateVpdRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateVpdRequestTag>) };
    inline CreateVpdRequest& setTag(const vector<CreateVpdRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateVpdRequest& setTag(vector<CreateVpdRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpdName Field Functions 
    bool hasVpdName() const { return this->vpdName_ != nullptr;};
    void deleteVpdName() { this->vpdName_ = nullptr;};
    inline string vpdName() const { DARABONBA_PTR_GET_DEFAULT(vpdName_, "") };
    inline CreateVpdRequest& setVpdName(string vpdName) { DARABONBA_PTR_SET_VALUE(vpdName_, vpdName) };


  protected:
    // The CIDR block of the VPD.
    // 
    // *   We recommend that you use an RFC private endpoint as the Lingjun CIDR block, such as 10.0.0.0/8,172.16.0.0/12,192.168.0.0/16. In scenarios where the Doringjun CIDR block is connected to each other or where the Lingjun CIDR block is connected to a VPC, make sure that the addresses do not conflict with each other.
    // *   You can also use a custom CIDR block other than 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, or 169.254.0.0/16 and their subnets as the primary IPv4 CIDR block of the VPD.
    // 
    // This parameter is required.
    std::shared_ptr<string> cidr_ = nullptr;
    // The region ID of the disk.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    // 
    // For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/94475.htm?spm=a2c4g.11186623.0.0.29e15d7akXhpuu).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Lingjun subnet information list
    std::shared_ptr<vector<CreateVpdRequestSubnets>> subnets_ = nullptr;
    // A tag.
    std::shared_ptr<vector<CreateVpdRequestTag>> tag_ = nullptr;
    // Lingjun CIDR block instance name
    // 
    // This parameter is required.
    std::shared_ptr<string> vpdName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
