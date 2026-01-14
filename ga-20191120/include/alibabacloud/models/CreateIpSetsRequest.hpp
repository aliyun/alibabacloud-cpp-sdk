// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class CreateIpSetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpSetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerateRegion, accelerateRegion_);
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpSetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerateRegion, accelerateRegion_);
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateIpSetsRequest() = default ;
    CreateIpSetsRequest(const CreateIpSetsRequest &) = default ;
    CreateIpSetsRequest(CreateIpSetsRequest &&) = default ;
    CreateIpSetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpSetsRequest() = default ;
    CreateIpSetsRequest& operator=(const CreateIpSetsRequest &) = default ;
    CreateIpSetsRequest& operator=(CreateIpSetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccelerateRegion : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccelerateRegion& obj) { 
        DARABONBA_PTR_TO_JSON(AccelerateRegionId, accelerateRegionId_);
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_TO_JSON(IspType, ispType_);
      };
      friend void from_json(const Darabonba::Json& j, AccelerateRegion& obj) { 
        DARABONBA_PTR_FROM_JSON(AccelerateRegionId, accelerateRegionId_);
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_FROM_JSON(IspType, ispType_);
      };
      AccelerateRegion() = default ;
      AccelerateRegion(const AccelerateRegion &) = default ;
      AccelerateRegion(AccelerateRegion &&) = default ;
      AccelerateRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccelerateRegion() = default ;
      AccelerateRegion& operator=(const AccelerateRegion &) = default ;
      AccelerateRegion& operator=(AccelerateRegion &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accelerateRegionId_ == nullptr
        && this->bandwidth_ == nullptr && this->ipVersion_ == nullptr && this->ispType_ == nullptr; };
      // accelerateRegionId Field Functions 
      bool hasAccelerateRegionId() const { return this->accelerateRegionId_ != nullptr;};
      void deleteAccelerateRegionId() { this->accelerateRegionId_ = nullptr;};
      inline string getAccelerateRegionId() const { DARABONBA_PTR_GET_DEFAULT(accelerateRegionId_, "") };
      inline AccelerateRegion& setAccelerateRegionId(string accelerateRegionId) { DARABONBA_PTR_SET_VALUE(accelerateRegionId_, accelerateRegionId) };


      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline AccelerateRegion& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // ipVersion Field Functions 
      bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
      void deleteIpVersion() { this->ipVersion_ = nullptr;};
      inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
      inline AccelerateRegion& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


      // ispType Field Functions 
      bool hasIspType() const { return this->ispType_ != nullptr;};
      void deleteIspType() { this->ispType_ = nullptr;};
      inline string getIspType() const { DARABONBA_PTR_GET_DEFAULT(ispType_, "") };
      inline AccelerateRegion& setIspType(string ispType) { DARABONBA_PTR_SET_VALUE(ispType_, ispType) };


    protected:
      // The ID of the acceleration region.
      // 
      // The number of regions that you can add varies based on the specification of the GA instance. For more information, see [Overview](https://help.aliyun.com/document_detail/153127.html).
      // 
      // This parameter is required.
      shared_ptr<string> accelerateRegionId_ {};
      // The bandwidth that you want to allocate to the acceleration region. Unit: **Mbit/s**.
      // 
      // >*  This parameter is required.
      // >*   You must allocate at least 2 Mbit/s of bandwidth to each acceleration region.
      // >*   The total bandwidth of all acceleration regions cannot exceed the bandwidth limit of your basic bandwidth plan.
      shared_ptr<int32_t> bandwidth_ {};
      // The IP version used to connect to the GA instance. Valid values:
      // 
      // *   **IPv4** (default)
      // *   **IPv6**
      // *   **DUAL_STACK**: IPv4 and IPv6
      // 
      // > Only pay-as-you-go standard GA instances support DUAL_STACK.
      shared_ptr<string> ipVersion_ {};
      // The line type of the elastic IP address (EIP) in the acceleration region. Valid values:
      // 
      // *   **BGP**: BGP (Multi-ISP) lines.
      // *   **BGP_PRO**: BGP (Multi-ISP) Pro lines
      // 
      // > *   This parameter is required only if the bandwidth metering method of the GA instance is **pay-by-data transfer**.
      // >*   Different acceleration regions support different line types of EIPs.
      shared_ptr<string> ispType_ {};
    };

    virtual bool empty() const override { return this->accelerateRegion_ == nullptr
        && this->acceleratorId_ == nullptr && this->clientToken_ == nullptr && this->regionId_ == nullptr; };
    // accelerateRegion Field Functions 
    bool hasAccelerateRegion() const { return this->accelerateRegion_ != nullptr;};
    void deleteAccelerateRegion() { this->accelerateRegion_ = nullptr;};
    inline const vector<CreateIpSetsRequest::AccelerateRegion> & getAccelerateRegion() const { DARABONBA_PTR_GET_CONST(accelerateRegion_, vector<CreateIpSetsRequest::AccelerateRegion>) };
    inline vector<CreateIpSetsRequest::AccelerateRegion> getAccelerateRegion() { DARABONBA_PTR_GET(accelerateRegion_, vector<CreateIpSetsRequest::AccelerateRegion>) };
    inline CreateIpSetsRequest& setAccelerateRegion(const vector<CreateIpSetsRequest::AccelerateRegion> & accelerateRegion) { DARABONBA_PTR_SET_VALUE(accelerateRegion_, accelerateRegion) };
    inline CreateIpSetsRequest& setAccelerateRegion(vector<CreateIpSetsRequest::AccelerateRegion> && accelerateRegion) { DARABONBA_PTR_SET_RVALUE(accelerateRegion_, accelerateRegion) };


    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline CreateIpSetsRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateIpSetsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateIpSetsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The information about the acceleration regions.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateIpSetsRequest::AccelerateRegion>> accelerateRegion_ {};
    // The GA instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
