// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIPAMPOOLCIDRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDIPAMPOOLCIDRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class AddIpamPoolCidrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddIpamPoolCidrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_TO_JSON(NetmaskLength, netmaskLength_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddIpamPoolCidrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_FROM_JSON(NetmaskLength, netmaskLength_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddIpamPoolCidrRequest() = default ;
    AddIpamPoolCidrRequest(const AddIpamPoolCidrRequest &) = default ;
    AddIpamPoolCidrRequest(AddIpamPoolCidrRequest &&) = default ;
    AddIpamPoolCidrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddIpamPoolCidrRequest() = default ;
    AddIpamPoolCidrRequest& operator=(const AddIpamPoolCidrRequest &) = default ;
    AddIpamPoolCidrRequest& operator=(AddIpamPoolCidrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidr_ == nullptr
        && return this->clientToken_ == nullptr && return this->dryRun_ == nullptr && return this->ipamPoolId_ == nullptr && return this->netmaskLength_ == nullptr && return this->regionId_ == nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline AddIpamPoolCidrRequest& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddIpamPoolCidrRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AddIpamPoolCidrRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipamPoolId Field Functions 
    bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
    void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
    inline string ipamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
    inline AddIpamPoolCidrRequest& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


    // netmaskLength Field Functions 
    bool hasNetmaskLength() const { return this->netmaskLength_ != nullptr;};
    void deleteNetmaskLength() { this->netmaskLength_ = nullptr;};
    inline int32_t netmaskLength() const { DARABONBA_PTR_GET_DEFAULT(netmaskLength_, 0) };
    inline AddIpamPoolCidrRequest& setNetmaskLength(int32_t netmaskLength) { DARABONBA_PTR_SET_VALUE(netmaskLength_, netmaskLength) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddIpamPoolCidrRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The CIDR block to be provisioned. 
    // > For private top-level pools, provisioning can only be done by entering a CIDR block.
    std::shared_ptr<string> cidr_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ID of the IPAM pool.
    // 
    // This parameter is required.
    std::shared_ptr<string> ipamPoolId_ = nullptr;
    // Provision CIDR address segments through a mask method.  
    // > The public IPv6 top-level pool only supports provisioning via a mask.
    std::shared_ptr<int32_t> netmaskLength_ = nullptr;
    // The ID of the region where the IPAM instance is hosted.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
