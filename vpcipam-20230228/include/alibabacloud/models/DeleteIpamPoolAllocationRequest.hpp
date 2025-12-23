// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIPAMPOOLALLOCATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIPAMPOOLALLOCATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class DeleteIpamPoolAllocationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIpamPoolAllocationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(IpamPoolAllocationId, ipamPoolAllocationId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIpamPoolAllocationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(IpamPoolAllocationId, ipamPoolAllocationId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteIpamPoolAllocationRequest() = default ;
    DeleteIpamPoolAllocationRequest(const DeleteIpamPoolAllocationRequest &) = default ;
    DeleteIpamPoolAllocationRequest(DeleteIpamPoolAllocationRequest &&) = default ;
    DeleteIpamPoolAllocationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIpamPoolAllocationRequest() = default ;
    DeleteIpamPoolAllocationRequest& operator=(const DeleteIpamPoolAllocationRequest &) = default ;
    DeleteIpamPoolAllocationRequest& operator=(DeleteIpamPoolAllocationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->dryRun_ == nullptr && return this->ipamPoolAllocationId_ == nullptr && return this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteIpamPoolAllocationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteIpamPoolAllocationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipamPoolAllocationId Field Functions 
    bool hasIpamPoolAllocationId() const { return this->ipamPoolAllocationId_ != nullptr;};
    void deleteIpamPoolAllocationId() { this->ipamPoolAllocationId_ = nullptr;};
    inline string ipamPoolAllocationId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationId_, "") };
    inline DeleteIpamPoolAllocationRequest& setIpamPoolAllocationId(string ipamPoolAllocationId) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationId_, ipamPoolAllocationId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteIpamPoolAllocationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // **Usage notes** If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // *   **false** (default): sends the API request. If the request passes the check, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ID of the custom reserved CIDR block to be deleted.
    // 
    // This parameter is required.
    std::shared_ptr<string> ipamPoolAllocationId_ = nullptr;
    // The region ID of the custom reserved CIDR block.
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
