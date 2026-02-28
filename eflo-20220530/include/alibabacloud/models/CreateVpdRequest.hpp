// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the VPN attachment.
      // 
      // You cannot specify an empty string as a tag key. It can be up to 64 characters in length and cannot start with aliyun or acs:. It cannot contain http:// or https://.
      // 
      // You can specify at most 20 tag keys in each call.
      shared_ptr<string> key_ {};
      // The tag value of the VPN connection.
      // 
      // The tag value can be empty or a string of up to 128 characters. It cannot start with aliyun or acs:, and cannot contain http:// or https://.
      // 
      // Each tag key corresponds to a tag value. You can enter a maximum of 20 tag values at a time.
      shared_ptr<string> value_ {};
    };

    class Subnets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Subnets& obj) { 
        DARABONBA_PTR_TO_JSON(Cidr, cidr_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SubnetName, subnetName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Subnets& obj) { 
        DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SubnetName, subnetName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      Subnets() = default ;
      Subnets(const Subnets &) = default ;
      Subnets(Subnets &&) = default ;
      Subnets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Subnets() = default ;
      Subnets& operator=(const Subnets &) = default ;
      Subnets& operator=(Subnets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidr_ == nullptr
        && this->regionId_ == nullptr && this->subnetName_ == nullptr && this->type_ == nullptr && this->zoneId_ == nullptr; };
      // cidr Field Functions 
      bool hasCidr() const { return this->cidr_ != nullptr;};
      void deleteCidr() { this->cidr_ = nullptr;};
      inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
      inline Subnets& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Subnets& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // subnetName Field Functions 
      bool hasSubnetName() const { return this->subnetName_ != nullptr;};
      void deleteSubnetName() { this->subnetName_ = nullptr;};
      inline string getSubnetName() const { DARABONBA_PTR_GET_DEFAULT(subnetName_, "") };
      inline Subnets& setSubnetName(string subnetName) { DARABONBA_PTR_SET_VALUE(subnetName_, subnetName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Subnets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Subnets& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The CIDR block of the Subnet.
      // 
      // *   The network segment of the subnet must be a proper subset of the network segment of Lingjun to which it belongs, and the mask must be between 16 bits and 29 bits, which can provide 8 to 65536 addresses. For example, the CIDR block of the Lingjun CIDR block is 192.168.0.0/16, and the CIDR blocks of the subnets under the Lingjun CIDR block are 192.168.0.0/17 to 192.168.0.0/29.
      // *   The first and last three IP addresses of each subnet segment are reserved by the system. For example, the CIDR blocks of the subnet are 192.168.1.0/24,192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255.
      shared_ptr<string> cidr_ {};
      // The region in which the instance resides.
      shared_ptr<string> regionId_ {};
      // Lingjun subnet instance name
      shared_ptr<string> subnetName_ {};
      // Lingjun Subnet Usage Type; optional; optional. Valid values:
      // 
      // *   **Generic type is not specified**.
      // *   **OOB** :OOB type
      // *   **LB**: LB type
      shared_ptr<string> type_ {};
      // The zone ID of the disk.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->cidr_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->subnets_ == nullptr && this->tag_ == nullptr && this->vpdName_ == nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline CreateVpdRequest& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVpdRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateVpdRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // subnets Field Functions 
    bool hasSubnets() const { return this->subnets_ != nullptr;};
    void deleteSubnets() { this->subnets_ = nullptr;};
    inline const vector<CreateVpdRequest::Subnets> & getSubnets() const { DARABONBA_PTR_GET_CONST(subnets_, vector<CreateVpdRequest::Subnets>) };
    inline vector<CreateVpdRequest::Subnets> getSubnets() { DARABONBA_PTR_GET(subnets_, vector<CreateVpdRequest::Subnets>) };
    inline CreateVpdRequest& setSubnets(const vector<CreateVpdRequest::Subnets> & subnets) { DARABONBA_PTR_SET_VALUE(subnets_, subnets) };
    inline CreateVpdRequest& setSubnets(vector<CreateVpdRequest::Subnets> && subnets) { DARABONBA_PTR_SET_RVALUE(subnets_, subnets) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateVpdRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateVpdRequest::Tag>) };
    inline vector<CreateVpdRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateVpdRequest::Tag>) };
    inline CreateVpdRequest& setTag(const vector<CreateVpdRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateVpdRequest& setTag(vector<CreateVpdRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpdName Field Functions 
    bool hasVpdName() const { return this->vpdName_ != nullptr;};
    void deleteVpdName() { this->vpdName_ = nullptr;};
    inline string getVpdName() const { DARABONBA_PTR_GET_DEFAULT(vpdName_, "") };
    inline CreateVpdRequest& setVpdName(string vpdName) { DARABONBA_PTR_SET_VALUE(vpdName_, vpdName) };


  protected:
    // The CIDR block of the VPD.
    // 
    // *   We recommend that you use an RFC private endpoint as the Lingjun CIDR block, such as 10.0.0.0/8,172.16.0.0/12,192.168.0.0/16. In scenarios where the Doringjun CIDR block is connected to each other or where the Lingjun CIDR block is connected to a VPC, make sure that the addresses do not conflict with each other.
    // *   You can also use a custom CIDR block other than 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, or 169.254.0.0/16 and their subnets as the primary IPv4 CIDR block of the VPD.
    // 
    // This parameter is required.
    shared_ptr<string> cidr_ {};
    // The region ID of the disk.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    // 
    // For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/94475.htm?spm=a2c4g.11186623.0.0.29e15d7akXhpuu).
    shared_ptr<string> resourceGroupId_ {};
    // Lingjun subnet information list
    shared_ptr<vector<CreateVpdRequest::Subnets>> subnets_ {};
    // A tag.
    shared_ptr<vector<CreateVpdRequest::Tag>> tag_ {};
    // Lingjun CIDR block instance name
    // 
    // This parameter is required.
    shared_ptr<string> vpdName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
