// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOFFICESITEACCELERATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOFFICESITEACCELERATORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateOfficeSiteAcceleratorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOfficeSiteAcceleratorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerateRegion, accelerateRegion_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOfficeSiteAcceleratorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerateRegion, accelerateRegion_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    CreateOfficeSiteAcceleratorRequest() = default ;
    CreateOfficeSiteAcceleratorRequest(const CreateOfficeSiteAcceleratorRequest &) = default ;
    CreateOfficeSiteAcceleratorRequest(CreateOfficeSiteAcceleratorRequest &&) = default ;
    CreateOfficeSiteAcceleratorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOfficeSiteAcceleratorRequest() = default ;
    CreateOfficeSiteAcceleratorRequest& operator=(const CreateOfficeSiteAcceleratorRequest &) = default ;
    CreateOfficeSiteAcceleratorRequest& operator=(CreateOfficeSiteAcceleratorRequest &&) = default ;
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
      // The ID of the region to include in global acceleration.
      // 
      // This parameter is required.
      shared_ptr<string> accelerateRegionId_ {};
      // The bandwidth that you want to allocate to the acceleration region. Unit: Mbit/s.
      // 
      // This parameter is required.
      shared_ptr<int32_t> bandwidth_ {};
      // The IP version used to connect to the GA instance.
      // 
      // >  Only pay-as-you-go standard GA instances support `DUAL_STACK`.
      // 
      // Valid values:
      // 
      // *   DUAL_STACK: IPv4 and IPv6.
      // *   IPv6: IPv6.
      // *   IPv4 (default): IPv4.
      shared_ptr<string> ipVersion_ {};
      // The line type of the elastic IP address (EIP) in the acceleration region.
      // 
      // > 
      // 
      // *   This parameter is required only if the bandwidth metering method of the GA instance is **pay-by-data transfer**.
      // 
      // *   Different acceleration regions support different line types of EIPs.
      // 
      // Valid values:
      // 
      // *   BGP: BGP (Multi-ISP) lines.
      // *   BGP_PRO: BGP (Multi-ISP) Pro.
      // 
      // This parameter is required.
      shared_ptr<string> ispType_ {};
    };

    virtual bool empty() const override { return this->accelerateRegion_ == nullptr
        && this->name_ == nullptr && this->officeSiteId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // accelerateRegion Field Functions 
    bool hasAccelerateRegion() const { return this->accelerateRegion_ != nullptr;};
    void deleteAccelerateRegion() { this->accelerateRegion_ = nullptr;};
    inline const vector<CreateOfficeSiteAcceleratorRequest::AccelerateRegion> & getAccelerateRegion() const { DARABONBA_PTR_GET_CONST(accelerateRegion_, vector<CreateOfficeSiteAcceleratorRequest::AccelerateRegion>) };
    inline vector<CreateOfficeSiteAcceleratorRequest::AccelerateRegion> getAccelerateRegion() { DARABONBA_PTR_GET(accelerateRegion_, vector<CreateOfficeSiteAcceleratorRequest::AccelerateRegion>) };
    inline CreateOfficeSiteAcceleratorRequest& setAccelerateRegion(const vector<CreateOfficeSiteAcceleratorRequest::AccelerateRegion> & accelerateRegion) { DARABONBA_PTR_SET_VALUE(accelerateRegion_, accelerateRegion) };
    inline CreateOfficeSiteAcceleratorRequest& setAccelerateRegion(vector<CreateOfficeSiteAcceleratorRequest::AccelerateRegion> && accelerateRegion) { DARABONBA_PTR_SET_RVALUE(accelerateRegion_, accelerateRegion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateOfficeSiteAcceleratorRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline CreateOfficeSiteAcceleratorRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateOfficeSiteAcceleratorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateOfficeSiteAcceleratorRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The regions to include in global acceleration.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateOfficeSiteAcceleratorRequest::AccelerateRegion>> accelerateRegion_ {};
    // The name of the GA instance.
    shared_ptr<string> name_ {};
    // The office network ID.
    // 
    // This parameter is required.
    shared_ptr<string> officeSiteId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
