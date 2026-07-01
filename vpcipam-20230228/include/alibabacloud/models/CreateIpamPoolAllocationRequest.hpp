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
        && this->cidrMask_ == nullptr && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->ipamPoolAllocationDescription_ == nullptr && this->ipamPoolAllocationName_ == nullptr
        && this->ipamPoolId_ == nullptr && this->regionId_ == nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline CreateIpamPoolAllocationRequest& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // cidrMask Field Functions 
    bool hasCidrMask() const { return this->cidrMask_ != nullptr;};
    void deleteCidrMask() { this->cidrMask_ = nullptr;};
    inline int32_t getCidrMask() const { DARABONBA_PTR_GET_DEFAULT(cidrMask_, 0) };
    inline CreateIpamPoolAllocationRequest& setCidrMask(int32_t cidrMask) { DARABONBA_PTR_SET_VALUE(cidrMask_, cidrMask) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateIpamPoolAllocationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateIpamPoolAllocationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipamPoolAllocationDescription Field Functions 
    bool hasIpamPoolAllocationDescription() const { return this->ipamPoolAllocationDescription_ != nullptr;};
    void deleteIpamPoolAllocationDescription() { this->ipamPoolAllocationDescription_ = nullptr;};
    inline string getIpamPoolAllocationDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationDescription_, "") };
    inline CreateIpamPoolAllocationRequest& setIpamPoolAllocationDescription(string ipamPoolAllocationDescription) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationDescription_, ipamPoolAllocationDescription) };


    // ipamPoolAllocationName Field Functions 
    bool hasIpamPoolAllocationName() const { return this->ipamPoolAllocationName_ != nullptr;};
    void deleteIpamPoolAllocationName() { this->ipamPoolAllocationName_ = nullptr;};
    inline string getIpamPoolAllocationName() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationName_, "") };
    inline CreateIpamPoolAllocationRequest& setIpamPoolAllocationName(string ipamPoolAllocationName) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationName_, ipamPoolAllocationName) };


    // ipamPoolId Field Functions 
    bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
    void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
    inline string getIpamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
    inline CreateIpamPoolAllocationRequest& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateIpamPoolAllocationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The CIDR block to allocate from the IPAM pool.
    // 
    // > You must specify either the **Cidr** or **CidrMask** parameter.
    shared_ptr<string> cidr_ {};
    // The mask of the CIDR block to allocate from the IPAM pool.
    // 
    // > You must specify either the **Cidr** or **CidrMask** parameter.
    shared_ptr<int32_t> cidrMask_ {};
    // The client token that is used to ensure the idempotence of the request. Generate a value on your client to make sure that the value is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the request as the ClientToken. The RequestId may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: Sends a check request. The custom reserved CIDR block is not created. The system checks for required parameters, request format, and service limits. If the check fails, an error is returned. If the check passes, the DryRunOperation error code is returned.
    // 
    // - **false** (default): Sends a normal request. After the request passes the check, a 2xx HTTP status code is returned and the custom reserved CIDR block is created.
    shared_ptr<bool> dryRun_ {};
    // The description of the custom reserved CIDR block.
    // 
    // The description must be 1 to 256 characters in length. It must start with a letter or a Chinese character and cannot start with `http://` or `https://`. The default value is an empty string.
    shared_ptr<string> ipamPoolAllocationDescription_ {};
    // The name of the custom reserved CIDR block.
    // 
    // The name must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> ipamPoolAllocationName_ {};
    // The ID of the IPAM pool.
    // 
    // This parameter is required.
    shared_ptr<string> ipamPoolId_ {};
    // The ID of the region where you want to create the custom reserved CIDR block.
    // 
    // You can call [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) to obtain the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
