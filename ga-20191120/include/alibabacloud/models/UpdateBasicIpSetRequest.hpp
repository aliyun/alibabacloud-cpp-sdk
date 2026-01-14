// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBASICIPSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBASICIPSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class UpdateBasicIpSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBasicIpSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(IpSetId, ipSetId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBasicIpSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(IpSetId, ipSetId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateBasicIpSetRequest() = default ;
    UpdateBasicIpSetRequest(const UpdateBasicIpSetRequest &) = default ;
    UpdateBasicIpSetRequest(UpdateBasicIpSetRequest &&) = default ;
    UpdateBasicIpSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBasicIpSetRequest() = default ;
    UpdateBasicIpSetRequest& operator=(const UpdateBasicIpSetRequest &) = default ;
    UpdateBasicIpSetRequest& operator=(UpdateBasicIpSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->clientToken_ == nullptr && this->ipSetId_ == nullptr && this->regionId_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline UpdateBasicIpSetRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateBasicIpSetRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ipSetId Field Functions 
    bool hasIpSetId() const { return this->ipSetId_ != nullptr;};
    void deleteIpSetId() { this->ipSetId_ = nullptr;};
    inline string getIpSetId() const { DARABONBA_PTR_GET_DEFAULT(ipSetId_, "") };
    inline UpdateBasicIpSetRequest& setIpSetId(string ipSetId) { DARABONBA_PTR_SET_VALUE(ipSetId_, ipSetId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateBasicIpSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The bandwidth of the acceleration region. Unit: Mbit/s.
    // 
    // The minimum bandwidth is 2 Mbit/s.
    // 
    // This parameter is required.
    shared_ptr<int32_t> bandwidth_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The ID of the acceleration region of the basic GA instance.
    // 
    // This parameter is required.
    shared_ptr<string> ipSetId_ {};
    // The ID of the region where the basic GA instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
