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
        && this->dryRun_ == nullptr && this->ipamPoolAllocationDescription_ == nullptr && this->ipamPoolAllocationId_ == nullptr && this->ipamPoolAllocationName_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateIpamPoolAllocationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateIpamPoolAllocationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipamPoolAllocationDescription Field Functions 
    bool hasIpamPoolAllocationDescription() const { return this->ipamPoolAllocationDescription_ != nullptr;};
    void deleteIpamPoolAllocationDescription() { this->ipamPoolAllocationDescription_ = nullptr;};
    inline string getIpamPoolAllocationDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationDescription_, "") };
    inline UpdateIpamPoolAllocationRequest& setIpamPoolAllocationDescription(string ipamPoolAllocationDescription) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationDescription_, ipamPoolAllocationDescription) };


    // ipamPoolAllocationId Field Functions 
    bool hasIpamPoolAllocationId() const { return this->ipamPoolAllocationId_ != nullptr;};
    void deleteIpamPoolAllocationId() { this->ipamPoolAllocationId_ = nullptr;};
    inline string getIpamPoolAllocationId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationId_, "") };
    inline UpdateIpamPoolAllocationRequest& setIpamPoolAllocationId(string ipamPoolAllocationId) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationId_, ipamPoolAllocationId) };


    // ipamPoolAllocationName Field Functions 
    bool hasIpamPoolAllocationName() const { return this->ipamPoolAllocationName_ != nullptr;};
    void deleteIpamPoolAllocationName() { this->ipamPoolAllocationName_ = nullptr;};
    inline string getIpamPoolAllocationName() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationName_, "") };
    inline UpdateIpamPoolAllocationRequest& setIpamPoolAllocationName(string ipamPoolAllocationName) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationName_, ipamPoolAllocationName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateIpamPoolAllocationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // A client token to ensure the idempotence of the request. Generate a unique value from your client for each request. ClientToken supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system uses the request ID as the client token. The request ID is different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: Sends a check request without modifying the CIDR allocation. The system checks for required parameters, request format, and service limits. If the check fails, an error is returned. If the check passes, the DryRunOperation error code is returned.
    // 
    // - **false** (default): Sends a normal request. After the check passes, an HTTP 2xx status code is returned and the CIDR allocation is modified.
    shared_ptr<bool> dryRun_ {};
    // The description of the CIDR allocation.
    // 
    // The description must be 1 to 256 characters long and must start with a letter or a Chinese character. It cannot start with `http://` or `https://`. If you do not specify this parameter, the description is empty.
    shared_ptr<string> ipamPoolAllocationDescription_ {};
    // The ID of the CIDR allocation.
    // 
    // This parameter is required.
    shared_ptr<string> ipamPoolAllocationId_ {};
    // The name of the CIDR allocation.
    // 
    // The name must be 1 to 128 characters long. It cannot start with `http://` or `https://`.
    shared_ptr<string> ipamPoolAllocationName_ {};
    // The ID of the region where the CIDR allocation is located. To obtain a region ID, call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
