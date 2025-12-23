// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIPAMPOOLALLOCATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIPAMPOOLALLOCATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class UpdateIpamPoolAllocationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIpamPoolAllocationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(IpamPoolAllocationDescription, ipamPoolAllocationDescription_);
      DARABONBA_PTR_TO_JSON(IpamPoolAllocationId, ipamPoolAllocationId_);
      DARABONBA_PTR_TO_JSON(IpamPoolAllocationName, ipamPoolAllocationName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIpamPoolAllocationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(IpamPoolAllocationDescription, ipamPoolAllocationDescription_);
      DARABONBA_PTR_FROM_JSON(IpamPoolAllocationId, ipamPoolAllocationId_);
      DARABONBA_PTR_FROM_JSON(IpamPoolAllocationName, ipamPoolAllocationName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateIpamPoolAllocationRequest() = default ;
    UpdateIpamPoolAllocationRequest(const UpdateIpamPoolAllocationRequest &) = default ;
    UpdateIpamPoolAllocationRequest(UpdateIpamPoolAllocationRequest &&) = default ;
    UpdateIpamPoolAllocationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIpamPoolAllocationRequest() = default ;
    UpdateIpamPoolAllocationRequest& operator=(const UpdateIpamPoolAllocationRequest &) = default ;
    UpdateIpamPoolAllocationRequest& operator=(UpdateIpamPoolAllocationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->dryRun_ == nullptr && return this->ipamPoolAllocationDescription_ == nullptr && return this->ipamPoolAllocationId_ == nullptr && return this->ipamPoolAllocationName_ == nullptr && return this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateIpamPoolAllocationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateIpamPoolAllocationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipamPoolAllocationDescription Field Functions 
    bool hasIpamPoolAllocationDescription() const { return this->ipamPoolAllocationDescription_ != nullptr;};
    void deleteIpamPoolAllocationDescription() { this->ipamPoolAllocationDescription_ = nullptr;};
    inline string ipamPoolAllocationDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationDescription_, "") };
    inline UpdateIpamPoolAllocationRequest& setIpamPoolAllocationDescription(string ipamPoolAllocationDescription) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationDescription_, ipamPoolAllocationDescription) };


    // ipamPoolAllocationId Field Functions 
    bool hasIpamPoolAllocationId() const { return this->ipamPoolAllocationId_ != nullptr;};
    void deleteIpamPoolAllocationId() { this->ipamPoolAllocationId_ = nullptr;};
    inline string ipamPoolAllocationId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationId_, "") };
    inline UpdateIpamPoolAllocationRequest& setIpamPoolAllocationId(string ipamPoolAllocationId) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationId_, ipamPoolAllocationId) };


    // ipamPoolAllocationName Field Functions 
    bool hasIpamPoolAllocationName() const { return this->ipamPoolAllocationName_ != nullptr;};
    void deleteIpamPoolAllocationName() { this->ipamPoolAllocationName_ = nullptr;};
    inline string ipamPoolAllocationName() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationName_, "") };
    inline UpdateIpamPoolAllocationRequest& setIpamPoolAllocationName(string ipamPoolAllocationName) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationName_, ipamPoolAllocationName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateIpamPoolAllocationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to precheck this request. Valid values:
    // 
    // *   **true**: performs a dry run without modifying the CIDR blocks of IPAM pools. The system checks the required parameters, request syntax, and limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // *   **false** (default): performs a dry run and the actual request. If the request passes the check, an HTTP 2xx status code is returned and the CIDR allocation information of the IPAM address pool is modified.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The description of the CIDR allocation of the IPAM pool.
    // 
    // The description must be 1 to 256 characters in length and start with a letter, but cannot start with a `http://` or `https://`. This parameter is empty by default.
    std::shared_ptr<string> ipamPoolAllocationDescription_ = nullptr;
    // The ID of the instance to which CIDR blocks are allocated from the IPAM pool.
    // 
    // This parameter is required.
    std::shared_ptr<string> ipamPoolAllocationId_ = nullptr;
    // The name of the CIDR allocation of the IPAM pool.
    // 
    // It must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> ipamPoolAllocationName_ = nullptr;
    // The ID of the region where you want to perform the operation. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
