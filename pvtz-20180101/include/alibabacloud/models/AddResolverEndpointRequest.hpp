// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRESOLVERENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRESOLVERENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class AddResolverEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddResolverEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpConfig, ipConfig_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcRegionId, vpcRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddResolverEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpConfig, ipConfig_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcRegionId, vpcRegionId_);
    };
    AddResolverEndpointRequest() = default ;
    AddResolverEndpointRequest(const AddResolverEndpointRequest &) = default ;
    AddResolverEndpointRequest(AddResolverEndpointRequest &&) = default ;
    AddResolverEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddResolverEndpointRequest() = default ;
    AddResolverEndpointRequest& operator=(const AddResolverEndpointRequest &) = default ;
    AddResolverEndpointRequest& operator=(AddResolverEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AzId, azId_);
        DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      };
      friend void from_json(const Darabonba::Json& j, IpConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AzId, azId_);
        DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      };
      IpConfig() = default ;
      IpConfig(const IpConfig &) = default ;
      IpConfig(IpConfig &&) = default ;
      IpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpConfig() = default ;
      IpConfig& operator=(const IpConfig &) = default ;
      IpConfig& operator=(IpConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->azId_ == nullptr
        && this->cidrBlock_ == nullptr && this->ip_ == nullptr && this->vSwitchId_ == nullptr; };
      // azId Field Functions 
      bool hasAzId() const { return this->azId_ != nullptr;};
      void deleteAzId() { this->azId_ = nullptr;};
      inline string getAzId() const { DARABONBA_PTR_GET_DEFAULT(azId_, "") };
      inline IpConfig& setAzId(string azId) { DARABONBA_PTR_SET_VALUE(azId_, azId) };


      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline IpConfig& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline IpConfig& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline IpConfig& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    protected:
      // The ID of the zone where the vSwitch resides.
      // 
      // This parameter is required.
      shared_ptr<string> azId_ {};
      // The IPv4 CIDR block of the vSwitch.
      // 
      // This parameter is required.
      shared_ptr<string> cidrBlock_ {};
      // The IP address. The IP address must be within the specified CIDR block. If you leave this parameter empty, the system automatically assigns an IP address.
      shared_ptr<string> ip_ {};
      // The vSwitch ID.
      // 
      // This parameter is required.
      shared_ptr<string> vSwitchId_ {};
    };

    virtual bool empty() const override { return this->ipConfig_ == nullptr
        && this->lang_ == nullptr && this->name_ == nullptr && this->securityGroupId_ == nullptr && this->vpcId_ == nullptr && this->vpcRegionId_ == nullptr; };
    // ipConfig Field Functions 
    bool hasIpConfig() const { return this->ipConfig_ != nullptr;};
    void deleteIpConfig() { this->ipConfig_ = nullptr;};
    inline const vector<AddResolverEndpointRequest::IpConfig> & getIpConfig() const { DARABONBA_PTR_GET_CONST(ipConfig_, vector<AddResolverEndpointRequest::IpConfig>) };
    inline vector<AddResolverEndpointRequest::IpConfig> getIpConfig() { DARABONBA_PTR_GET(ipConfig_, vector<AddResolverEndpointRequest::IpConfig>) };
    inline AddResolverEndpointRequest& setIpConfig(const vector<AddResolverEndpointRequest::IpConfig> & ipConfig) { DARABONBA_PTR_SET_VALUE(ipConfig_, ipConfig) };
    inline AddResolverEndpointRequest& setIpConfig(vector<AddResolverEndpointRequest::IpConfig> && ipConfig) { DARABONBA_PTR_SET_RVALUE(ipConfig_, ipConfig) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddResolverEndpointRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddResolverEndpointRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline AddResolverEndpointRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline AddResolverEndpointRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcRegionId Field Functions 
    bool hasVpcRegionId() const { return this->vpcRegionId_ != nullptr;};
    void deleteVpcRegionId() { this->vpcRegionId_ = nullptr;};
    inline string getVpcRegionId() const { DARABONBA_PTR_GET_DEFAULT(vpcRegionId_, "") };
    inline AddResolverEndpointRequest& setVpcRegionId(string vpcRegionId) { DARABONBA_PTR_SET_VALUE(vpcRegionId_, vpcRegionId) };


  protected:
    // The list of source IP addresses for outbound traffic. You must add at least two IP addresses. You can add up to six IP addresses.
    // 
    // > To ensure high availability (HA), add at least two source IP addresses for the outbound endpoint. We recommend that you allocate these IP addresses in different zones. You can add a maximum of six source IP addresses.
    // 
    // This parameter is required.
    shared_ptr<vector<AddResolverEndpointRequest::IpConfig>> ipConfig_ {};
    // The language of the response. Valid values:
    // 
    // - zh: Chinese.
    // 
    // - en: English.
    // 
    // Default value: en
    shared_ptr<string> lang_ {};
    // The name of the endpoint. The name can be up to 20 characters long. An error is reported if the limit is exceeded.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The ID of the security group. The rules in the security group are applied to the outbound VPC.
    // 
    // > To prevent service interruptions, you cannot change this value after you create the outbound endpoint.
    // 
    // This parameter is required.
    shared_ptr<string> securityGroupId_ {};
    // The ID of the outbound virtual private cloud (VPC). All outbound DNS query traffic from the Resolver is forwarded through this VPC.
    // 
    // > To prevent service interruptions, you cannot change this value after you create the outbound endpoint.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The region ID of the outbound VPC.
    // 
    // This parameter is required.
    shared_ptr<string> vpcRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
