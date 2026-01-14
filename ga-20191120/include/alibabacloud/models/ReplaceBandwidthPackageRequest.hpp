// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACEBANDWIDTHPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACEBANDWIDTHPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ReplaceBandwidthPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceBandwidthPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetBandwidthPackageId, targetBandwidthPackageId_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceBandwidthPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetBandwidthPackageId, targetBandwidthPackageId_);
    };
    ReplaceBandwidthPackageRequest() = default ;
    ReplaceBandwidthPackageRequest(const ReplaceBandwidthPackageRequest &) = default ;
    ReplaceBandwidthPackageRequest(ReplaceBandwidthPackageRequest &&) = default ;
    ReplaceBandwidthPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceBandwidthPackageRequest() = default ;
    ReplaceBandwidthPackageRequest& operator=(const ReplaceBandwidthPackageRequest &) = default ;
    ReplaceBandwidthPackageRequest& operator=(ReplaceBandwidthPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->bandwidthPackageId_ == nullptr && this->regionId_ == nullptr && this->targetBandwidthPackageId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline ReplaceBandwidthPackageRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline ReplaceBandwidthPackageRequest& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ReplaceBandwidthPackageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetBandwidthPackageId Field Functions 
    bool hasTargetBandwidthPackageId() const { return this->targetBandwidthPackageId_ != nullptr;};
    void deleteTargetBandwidthPackageId() { this->targetBandwidthPackageId_ = nullptr;};
    inline string getTargetBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(targetBandwidthPackageId_, "") };
    inline ReplaceBandwidthPackageRequest& setTargetBandwidthPackageId(string targetBandwidthPackageId) { DARABONBA_PTR_SET_VALUE(targetBandwidthPackageId_, targetBandwidthPackageId) };


  protected:
    // The GA instance ID.
    shared_ptr<string> acceleratorId_ {};
    // The ID of the required bandwidth plan. When you specify a replacement bandwidth plan, take note of the following items:
    // 
    // *   Only a bandwidth plan that is not associated with a GA instance can be specified.
    // *   If you want to replace a basic bandwidth plan, make sure that the bandwidth provided by the replacement bandwidth plan is not less than the total bandwidth allocated to the acceleration area.
    // 
    // This parameter is required.
    shared_ptr<string> bandwidthPackageId_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the bandwidth plan that you want to replace.
    // 
    // This parameter is required.
    shared_ptr<string> targetBandwidthPackageId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
