// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYOFFICESITEACCELERATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYOFFICESITEACCELERATORREQUEST_HPP_
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
  class ModifyOfficeSiteAcceleratorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyOfficeSiteAcceleratorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerateRegion, accelerateRegion_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyOfficeSiteAcceleratorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerateRegion, accelerateRegion_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyOfficeSiteAcceleratorRequest() = default ;
    ModifyOfficeSiteAcceleratorRequest(const ModifyOfficeSiteAcceleratorRequest &) = default ;
    ModifyOfficeSiteAcceleratorRequest(ModifyOfficeSiteAcceleratorRequest &&) = default ;
    ModifyOfficeSiteAcceleratorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyOfficeSiteAcceleratorRequest() = default ;
    ModifyOfficeSiteAcceleratorRequest& operator=(const ModifyOfficeSiteAcceleratorRequest &) = default ;
    ModifyOfficeSiteAcceleratorRequest& operator=(ModifyOfficeSiteAcceleratorRequest &&) = default ;
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
      // The ID of the region to accelerate.
      // 
      // The number of regions that you can add is limited by the total bandwidth and the instance type of the GA instance. For more information about the number of access regions supported by each instance type, see [Overview of GA instances](t1855472.xdita#).
      // 
      // This parameter is required.
      shared_ptr<string> accelerateRegionId_ {};
      // The peak public bandwidth. Unit: Mbps.
      // 
      // > For the pay-by-bandwidth metering method, the value ranges from 10 to 1000.
      // 
      // This parameter is required.
      shared_ptr<int32_t> bandwidth_ {};
      // The IP protocol version used to access GA instances. Valid values:
      // 
      // - **IPv4** (default)
      // 
      // - **IPv6**
      // 
      // - **DUAL_STACK**: IPv4 and IPv6
      // 
      // > * Only standard pay-as-you-go GA instances support the DUAL_STACK option.
      shared_ptr<string> ipVersion_ {};
      // The Internet line type in the acceleration region. Valid values:
      // 
      // - **BGP**: BGP (Multi-ISP) lines.
      // 
      // - **BGP_PRO**: BGP (Multi-ISP) Pro lines.
      // 
      // > * This parameter is required for GA instances that use the pay-by-data-transfer metering method.
      // >
      // > * The supported line types vary based on the acceleration region.
      // 
      // This parameter is required.
      shared_ptr<string> ispType_ {};
    };

    virtual bool empty() const override { return this->accelerateRegion_ == nullptr
        && this->officeSiteId_ == nullptr && this->regionId_ == nullptr; };
    // accelerateRegion Field Functions 
    bool hasAccelerateRegion() const { return this->accelerateRegion_ != nullptr;};
    void deleteAccelerateRegion() { this->accelerateRegion_ = nullptr;};
    inline const vector<ModifyOfficeSiteAcceleratorRequest::AccelerateRegion> & getAccelerateRegion() const { DARABONBA_PTR_GET_CONST(accelerateRegion_, vector<ModifyOfficeSiteAcceleratorRequest::AccelerateRegion>) };
    inline vector<ModifyOfficeSiteAcceleratorRequest::AccelerateRegion> getAccelerateRegion() { DARABONBA_PTR_GET(accelerateRegion_, vector<ModifyOfficeSiteAcceleratorRequest::AccelerateRegion>) };
    inline ModifyOfficeSiteAcceleratorRequest& setAccelerateRegion(const vector<ModifyOfficeSiteAcceleratorRequest::AccelerateRegion> & accelerateRegion) { DARABONBA_PTR_SET_VALUE(accelerateRegion_, accelerateRegion) };
    inline ModifyOfficeSiteAcceleratorRequest& setAccelerateRegion(vector<ModifyOfficeSiteAcceleratorRequest::AccelerateRegion> && accelerateRegion) { DARABONBA_PTR_SET_RVALUE(accelerateRegion_, accelerateRegion) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ModifyOfficeSiteAcceleratorRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyOfficeSiteAcceleratorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The information about the regions to accelerate.
    shared_ptr<vector<ModifyOfficeSiteAcceleratorRequest::AccelerateRegion>> accelerateRegion_ {};
    // The office network ID.
    // 
    // This parameter is required.
    shared_ptr<string> officeSiteId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
