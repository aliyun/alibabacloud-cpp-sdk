// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIPAMPOOLNEXTAVAILABLECIDRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIPAMPOOLNEXTAVAILABLECIDRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class GetIpamPoolNextAvailableCidrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIpamPoolNextAvailableCidrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(CidrMask, cidrMask_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIpamPoolNextAvailableCidrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(CidrMask, cidrMask_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetIpamPoolNextAvailableCidrRequest() = default ;
    GetIpamPoolNextAvailableCidrRequest(const GetIpamPoolNextAvailableCidrRequest &) = default ;
    GetIpamPoolNextAvailableCidrRequest(GetIpamPoolNextAvailableCidrRequest &&) = default ;
    GetIpamPoolNextAvailableCidrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIpamPoolNextAvailableCidrRequest() = default ;
    GetIpamPoolNextAvailableCidrRequest& operator=(const GetIpamPoolNextAvailableCidrRequest &) = default ;
    GetIpamPoolNextAvailableCidrRequest& operator=(GetIpamPoolNextAvailableCidrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->cidrMask_ == nullptr && this->clientToken_ == nullptr && this->ipamPoolId_ == nullptr && this->regionId_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline GetIpamPoolNextAvailableCidrRequest& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // cidrMask Field Functions 
    bool hasCidrMask() const { return this->cidrMask_ != nullptr;};
    void deleteCidrMask() { this->cidrMask_ = nullptr;};
    inline int32_t getCidrMask() const { DARABONBA_PTR_GET_DEFAULT(cidrMask_, 0) };
    inline GetIpamPoolNextAvailableCidrRequest& setCidrMask(int32_t cidrMask) { DARABONBA_PTR_SET_VALUE(cidrMask_, cidrMask) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetIpamPoolNextAvailableCidrRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ipamPoolId Field Functions 
    bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
    void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
    inline string getIpamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
    inline GetIpamPoolNextAvailableCidrRequest& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetIpamPoolNextAvailableCidrRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The CIDR block to be allocated.
    // 
    // > You must specify CidrBlock or CidrMask.
    shared_ptr<string> cidrBlock_ {};
    // The mask length of the CIDR block to be allocated.
    // 
    // > You must specify CidrBlock or CidrMask.
    shared_ptr<int32_t> cidrMask_ {};
    // The client token that is used to ensure the idempotence of the request. Generate a unique value for this parameter from your client. The ClientToken value can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system uses the RequestId as the ClientToken. The RequestId of each request is unique.
    shared_ptr<string> clientToken_ {};
    // The instance ID of the IPAM pool.
    // 
    // This parameter is required.
    shared_ptr<string> ipamPoolId_ {};
    // The region of the IPAM pool.
    // 
    // > If the IPAM pool has a region property, this parameter specifies the region where the pool is active. If the IPAM pool does not have a region property, this parameter specifies the managed region of IPAM.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
