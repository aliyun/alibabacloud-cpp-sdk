// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHCCNINSTANCETOCENSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHCCNINSTANCETOCENSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class AttachCcnInstanceToCenShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachCcnInstanceToCenShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CcnId, ccnId_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CidrAllocationMode, cidrAllocationMode_);
      DARABONBA_PTR_TO_JSON(RegionBindingList, regionBindingListShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Subnet, subnet_);
    };
    friend void from_json(const Darabonba::Json& j, AttachCcnInstanceToCenShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CcnId, ccnId_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CidrAllocationMode, cidrAllocationMode_);
      DARABONBA_PTR_FROM_JSON(RegionBindingList, regionBindingListShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Subnet, subnet_);
    };
    AttachCcnInstanceToCenShrinkRequest() = default ;
    AttachCcnInstanceToCenShrinkRequest(const AttachCcnInstanceToCenShrinkRequest &) = default ;
    AttachCcnInstanceToCenShrinkRequest(AttachCcnInstanceToCenShrinkRequest &&) = default ;
    AttachCcnInstanceToCenShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachCcnInstanceToCenShrinkRequest() = default ;
    AttachCcnInstanceToCenShrinkRequest& operator=(const AttachCcnInstanceToCenShrinkRequest &) = default ;
    AttachCcnInstanceToCenShrinkRequest& operator=(AttachCcnInstanceToCenShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ccnId_ == nullptr
        && this->cenId_ == nullptr && this->cidrAllocationMode_ == nullptr && this->regionBindingListShrink_ == nullptr && this->regionId_ == nullptr && this->subnet_ == nullptr; };
    // ccnId Field Functions 
    bool hasCcnId() const { return this->ccnId_ != nullptr;};
    void deleteCcnId() { this->ccnId_ = nullptr;};
    inline string getCcnId() const { DARABONBA_PTR_GET_DEFAULT(ccnId_, "") };
    inline AttachCcnInstanceToCenShrinkRequest& setCcnId(string ccnId) { DARABONBA_PTR_SET_VALUE(ccnId_, ccnId) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline AttachCcnInstanceToCenShrinkRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cidrAllocationMode Field Functions 
    bool hasCidrAllocationMode() const { return this->cidrAllocationMode_ != nullptr;};
    void deleteCidrAllocationMode() { this->cidrAllocationMode_ = nullptr;};
    inline string getCidrAllocationMode() const { DARABONBA_PTR_GET_DEFAULT(cidrAllocationMode_, "") };
    inline AttachCcnInstanceToCenShrinkRequest& setCidrAllocationMode(string cidrAllocationMode) { DARABONBA_PTR_SET_VALUE(cidrAllocationMode_, cidrAllocationMode) };


    // regionBindingListShrink Field Functions 
    bool hasRegionBindingListShrink() const { return this->regionBindingListShrink_ != nullptr;};
    void deleteRegionBindingListShrink() { this->regionBindingListShrink_ = nullptr;};
    inline string getRegionBindingListShrink() const { DARABONBA_PTR_GET_DEFAULT(regionBindingListShrink_, "") };
    inline AttachCcnInstanceToCenShrinkRequest& setRegionBindingListShrink(string regionBindingListShrink) { DARABONBA_PTR_SET_VALUE(regionBindingListShrink_, regionBindingListShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachCcnInstanceToCenShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // subnet Field Functions 
    bool hasSubnet() const { return this->subnet_ != nullptr;};
    void deleteSubnet() { this->subnet_ = nullptr;};
    inline string getSubnet() const { DARABONBA_PTR_GET_DEFAULT(subnet_, "") };
    inline AttachCcnInstanceToCenShrinkRequest& setSubnet(string subnet) { DARABONBA_PTR_SET_VALUE(subnet_, subnet) };


  protected:
    // The ID of the Cloud Connect Network (CCN) to attach.
    shared_ptr<string> ccnId_ {};
    // The ID of the CEN instance to which you want to attach the CCN instance.
    shared_ptr<string> cenId_ {};
    // The CIDR block allocation mode. Valid values: - PER_REGION: Custom CIDR blocks are allocated for each region. - UNIFIED: A unified CIDR block is allocated.
    shared_ptr<string> cidrAllocationMode_ {};
    // The list of transit routers to be newly attached to the CCN instance.
    shared_ptr<string> regionBindingListShrink_ {};
    // The region ID of the Cloud Connect Network (CCN) instance. You can invoke the DescribeRegions operation to query the regions supported by Smart Access Gateway and the corresponding region IDs.
    shared_ptr<string> regionId_ {};
    // The Internet CIDR block used to attach the Cloud Connect Network (CCN) to the Cloud Enterprise Network (CEN).
    shared_ptr<string> subnet_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
