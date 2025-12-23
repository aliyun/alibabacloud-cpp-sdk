// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPAMPOOLALLOCATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPAMPOOLALLOCATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class CreateIpamPoolAllocationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpamPoolAllocationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(CidrMask, cidrMask_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(IpamPoolAllocationDescription, ipamPoolAllocationDescription_);
      DARABONBA_PTR_TO_JSON(IpamPoolAllocationName, ipamPoolAllocationName_);
      DARABONBA_PTR_TO_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpamPoolAllocationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(CidrMask, cidrMask_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(IpamPoolAllocationDescription, ipamPoolAllocationDescription_);
      DARABONBA_PTR_FROM_JSON(IpamPoolAllocationName, ipamPoolAllocationName_);
      DARABONBA_PTR_FROM_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateIpamPoolAllocationRequest() = default ;
    CreateIpamPoolAllocationRequest(const CreateIpamPoolAllocationRequest &) = default ;
    CreateIpamPoolAllocationRequest(CreateIpamPoolAllocationRequest &&) = default ;
    CreateIpamPoolAllocationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpamPoolAllocationRequest() = default ;
    CreateIpamPoolAllocationRequest& operator=(const CreateIpamPoolAllocationRequest &) = default ;
    CreateIpamPoolAllocationRequest& operator=(CreateIpamPoolAllocationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidr_ == nullptr
        && return this->cidrMask_ == nullptr && return this->clientToken_ == nullptr && return this->dryRun_ == nullptr && return this->ipamPoolAllocationDescription_ == nullptr && return this->ipamPoolAllocationName_ == nullptr
        && return this->ipamPoolId_ == nullptr && return this->regionId_ == nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline CreateIpamPoolAllocationRequest& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // cidrMask Field Functions 
    bool hasCidrMask() const { return this->cidrMask_ != nullptr;};
    void deleteCidrMask() { this->cidrMask_ = nullptr;};
    inline int32_t cidrMask() const { DARABONBA_PTR_GET_DEFAULT(cidrMask_, 0) };
    inline CreateIpamPoolAllocationRequest& setCidrMask(int32_t cidrMask) { DARABONBA_PTR_SET_VALUE(cidrMask_, cidrMask) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateIpamPoolAllocationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateIpamPoolAllocationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipamPoolAllocationDescription Field Functions 
    bool hasIpamPoolAllocationDescription() const { return this->ipamPoolAllocationDescription_ != nullptr;};
    void deleteIpamPoolAllocationDescription() { this->ipamPoolAllocationDescription_ = nullptr;};
    inline string ipamPoolAllocationDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationDescription_, "") };
    inline CreateIpamPoolAllocationRequest& setIpamPoolAllocationDescription(string ipamPoolAllocationDescription) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationDescription_, ipamPoolAllocationDescription) };


    // ipamPoolAllocationName Field Functions 
    bool hasIpamPoolAllocationName() const { return this->ipamPoolAllocationName_ != nullptr;};
    void deleteIpamPoolAllocationName() { this->ipamPoolAllocationName_ = nullptr;};
    inline string ipamPoolAllocationName() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationName_, "") };
    inline CreateIpamPoolAllocationRequest& setIpamPoolAllocationName(string ipamPoolAllocationName) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationName_, ipamPoolAllocationName) };


    // ipamPoolId Field Functions 
    bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
    void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
    inline string ipamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
    inline CreateIpamPoolAllocationRequest& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateIpamPoolAllocationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Enter a CIDR block to reserve a custom CIDR block.
    // 
    // **Usage notes** Specify at least one of **Cidr** and **CidrMask** .
    std::shared_ptr<string> cidr_ = nullptr;
    // Enter a mask to reserve a custom CIDR block.
    // 
    // **Usage notes** Specify at least one of **Cidr** and **CidrMask** .
    std::shared_ptr<int32_t> cidrMask_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // **Usage notes** If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The description of the allocation.
    std::shared_ptr<string> ipamPoolAllocationDescription_ = nullptr;
    // The name of the allocation.
    std::shared_ptr<string> ipamPoolAllocationName_ = nullptr;
    // The ID of the IPAM pool.
    // 
    // This parameter is required.
    std::shared_ptr<string> ipamPoolId_ = nullptr;
    // The region ID of the custom CIDR block that you want to reserve.
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
