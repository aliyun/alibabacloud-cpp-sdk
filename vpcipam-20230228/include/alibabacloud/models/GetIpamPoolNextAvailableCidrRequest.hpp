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
    virtual bool empty() const override { this->cidrBlock_ != nullptr
        && this->cidrMask_ != nullptr && this->clientToken_ != nullptr && this->ipamPoolId_ != nullptr && this->regionId_ != nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline GetIpamPoolNextAvailableCidrRequest& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // cidrMask Field Functions 
    bool hasCidrMask() const { return this->cidrMask_ != nullptr;};
    void deleteCidrMask() { this->cidrMask_ = nullptr;};
    inline int32_t cidrMask() const { DARABONBA_PTR_GET_DEFAULT(cidrMask_, 0) };
    inline GetIpamPoolNextAvailableCidrRequest& setCidrMask(int32_t cidrMask) { DARABONBA_PTR_SET_VALUE(cidrMask_, cidrMask) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetIpamPoolNextAvailableCidrRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ipamPoolId Field Functions 
    bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
    void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
    inline string ipamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
    inline GetIpamPoolNextAvailableCidrRequest& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetIpamPoolNextAvailableCidrRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // CIDR to be allocated.
    // 
    // >  You must enter at least one of the CidrBlock and CidrMask fields.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The length of the CIDR mask to be allocated.
    // 
    // >  You must enter at least one of the CidrBlock and CidrMask fields.
    std::shared_ptr<int32_t> cidrMask_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the IPAM pool.
    // 
    // This parameter is required.
    std::shared_ptr<string> ipamPoolId_ = nullptr;
    // The region of the IPAM pool.
    // 
    // >  If the IPAM pool has the region attribute, this parameter is set to the effective region of the IPAM pool. If not, this is set to the hosted region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
