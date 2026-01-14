// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBASICIPSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBASICIPSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class CreateBasicIpSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBasicIpSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerateRegionId, accelerateRegionId_);
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(IspType, ispType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBasicIpSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerateRegionId, accelerateRegionId_);
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(IspType, ispType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateBasicIpSetRequest() = default ;
    CreateBasicIpSetRequest(const CreateBasicIpSetRequest &) = default ;
    CreateBasicIpSetRequest(CreateBasicIpSetRequest &&) = default ;
    CreateBasicIpSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBasicIpSetRequest() = default ;
    CreateBasicIpSetRequest& operator=(const CreateBasicIpSetRequest &) = default ;
    CreateBasicIpSetRequest& operator=(CreateBasicIpSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accelerateRegionId_ == nullptr
        && this->acceleratorId_ == nullptr && this->bandwidth_ == nullptr && this->clientToken_ == nullptr && this->ispType_ == nullptr && this->regionId_ == nullptr; };
    // accelerateRegionId Field Functions 
    bool hasAccelerateRegionId() const { return this->accelerateRegionId_ != nullptr;};
    void deleteAccelerateRegionId() { this->accelerateRegionId_ = nullptr;};
    inline string getAccelerateRegionId() const { DARABONBA_PTR_GET_DEFAULT(accelerateRegionId_, "") };
    inline CreateBasicIpSetRequest& setAccelerateRegionId(string accelerateRegionId) { DARABONBA_PTR_SET_VALUE(accelerateRegionId_, accelerateRegionId) };


    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline CreateBasicIpSetRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline CreateBasicIpSetRequest& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateBasicIpSetRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ispType Field Functions 
    bool hasIspType() const { return this->ispType_ != nullptr;};
    void deleteIspType() { this->ispType_ = nullptr;};
    inline string getIspType() const { DARABONBA_PTR_GET_DEFAULT(ispType_, "") };
    inline CreateBasicIpSetRequest& setIspType(string ispType) { DARABONBA_PTR_SET_VALUE(ispType_, ispType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateBasicIpSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the acceleration region.
    // 
    // You can call the [ListAvailableBusiRegions](https://help.aliyun.com/document_detail/261190.html) operation to query the most recent acceleration region list.
    // 
    // This parameter is required.
    shared_ptr<string> accelerateRegionId_ {};
    // The ID of the basic GA instance.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The bandwidth that you want to allocate to the acceleration region. Unit: **Mbit/s**.
    // 
    // You must allocate at least 2 Mbit/s of bandwidth to the acceleration region.
    shared_ptr<int64_t> bandwidth_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The line type of the elastic IP address (EIP) in the acceleration region. Valid values:
    // 
    // *   **BGP** (default): BGP (Multi-ISP) lines.
    // *   **BGP_PRO**: BGP (Multi-ISP) Pro lines.
    // 
    // Valid values if you are allowed to use single-ISP bandwidth:
    // 
    // *   **ChinaTelecom**
    // *   **ChinaUnicom**
    // *   **ChinaMobile**
    // *   **ChinaTelecom_L2**
    // *   **ChinaUnicom_L2**
    // *   **ChinaMobile_L2**
    // 
    // > 
    // 
    // *   If the bandwidth metering method of the GA instance is **pay-by-data-transfer**, this parameter is required.
    // 
    // *   If the acceleration region is China (Hong Kong) and a basic bandwidth plan whose bandwidth type is Premium is associated with the GA instance, the default value of IspType is BGP_PRO.
    // 
    // *   The supported single-ISP type varies based on the acceleration region.
    shared_ptr<string> ispType_ {};
    // The region ID of the basic GA instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
