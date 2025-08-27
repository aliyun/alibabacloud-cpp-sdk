// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNETWORKSNEWVPDINFOVPDSUBNETS_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNETWORKSNEWVPDINFOVPDSUBNETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateClusterRequestNetworksNewVpdInfoVpdSubnets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestNetworksNewVpdInfoVpdSubnets& obj) { 
      DARABONBA_PTR_TO_JSON(SubnetCidr, subnetCidr_);
      DARABONBA_PTR_TO_JSON(SubnetType, subnetType_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestNetworksNewVpdInfoVpdSubnets& obj) { 
      DARABONBA_PTR_FROM_JSON(SubnetCidr, subnetCidr_);
      DARABONBA_PTR_FROM_JSON(SubnetType, subnetType_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateClusterRequestNetworksNewVpdInfoVpdSubnets() = default ;
    CreateClusterRequestNetworksNewVpdInfoVpdSubnets(const CreateClusterRequestNetworksNewVpdInfoVpdSubnets &) = default ;
    CreateClusterRequestNetworksNewVpdInfoVpdSubnets(CreateClusterRequestNetworksNewVpdInfoVpdSubnets &&) = default ;
    CreateClusterRequestNetworksNewVpdInfoVpdSubnets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestNetworksNewVpdInfoVpdSubnets() = default ;
    CreateClusterRequestNetworksNewVpdInfoVpdSubnets& operator=(const CreateClusterRequestNetworksNewVpdInfoVpdSubnets &) = default ;
    CreateClusterRequestNetworksNewVpdInfoVpdSubnets& operator=(CreateClusterRequestNetworksNewVpdInfoVpdSubnets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->subnetCidr_ != nullptr
        && this->subnetType_ != nullptr && this->zoneId_ != nullptr; };
    // subnetCidr Field Functions 
    bool hasSubnetCidr() const { return this->subnetCidr_ != nullptr;};
    void deleteSubnetCidr() { this->subnetCidr_ = nullptr;};
    inline string subnetCidr() const { DARABONBA_PTR_GET_DEFAULT(subnetCidr_, "") };
    inline CreateClusterRequestNetworksNewVpdInfoVpdSubnets& setSubnetCidr(string subnetCidr) { DARABONBA_PTR_SET_VALUE(subnetCidr_, subnetCidr) };


    // subnetType Field Functions 
    bool hasSubnetType() const { return this->subnetType_ != nullptr;};
    void deleteSubnetType() { this->subnetType_ = nullptr;};
    inline string subnetType() const { DARABONBA_PTR_GET_DEFAULT(subnetType_, "") };
    inline CreateClusterRequestNetworksNewVpdInfoVpdSubnets& setSubnetType(string subnetType) { DARABONBA_PTR_SET_VALUE(subnetType_, subnetType) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateClusterRequestNetworksNewVpdInfoVpdSubnets& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Subnet CIDR
    std::shared_ptr<string> subnetCidr_ = nullptr;
    // Subnet type
    std::shared_ptr<string> subnetType_ = nullptr;
    // Zone ID
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
