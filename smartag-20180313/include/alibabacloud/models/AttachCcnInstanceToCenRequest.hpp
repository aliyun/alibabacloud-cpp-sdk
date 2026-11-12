// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHCCNINSTANCETOCENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHCCNINSTANCETOCENREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class AttachCcnInstanceToCenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachCcnInstanceToCenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CcnId, ccnId_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CidrAllocationMode, cidrAllocationMode_);
      DARABONBA_PTR_TO_JSON(RegionBindingList, regionBindingList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Subnet, subnet_);
    };
    friend void from_json(const Darabonba::Json& j, AttachCcnInstanceToCenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CcnId, ccnId_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CidrAllocationMode, cidrAllocationMode_);
      DARABONBA_PTR_FROM_JSON(RegionBindingList, regionBindingList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Subnet, subnet_);
    };
    AttachCcnInstanceToCenRequest() = default ;
    AttachCcnInstanceToCenRequest(const AttachCcnInstanceToCenRequest &) = default ;
    AttachCcnInstanceToCenRequest(AttachCcnInstanceToCenRequest &&) = default ;
    AttachCcnInstanceToCenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachCcnInstanceToCenRequest() = default ;
    AttachCcnInstanceToCenRequest& operator=(const AttachCcnInstanceToCenRequest &) = default ;
    AttachCcnInstanceToCenRequest& operator=(AttachCcnInstanceToCenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegionBindingList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionBindingList& obj) { 
        DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      };
      friend void from_json(const Darabonba::Json& j, RegionBindingList& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      };
      RegionBindingList() = default ;
      RegionBindingList(const RegionBindingList &) = default ;
      RegionBindingList(RegionBindingList &&) = default ;
      RegionBindingList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionBindingList() = default ;
      RegionBindingList& operator=(const RegionBindingList &) = default ;
      RegionBindingList& operator=(RegionBindingList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->regionId_ == nullptr && this->transitRouterId_ == nullptr; };
      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline RegionBindingList& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline RegionBindingList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // transitRouterId Field Functions 
      bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
      void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
      inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
      inline RegionBindingList& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    protected:
      // The custom CIDR block for each region when the CidrAllocationMode parameter is set to PER_REGION.
      shared_ptr<string> cidrBlock_ {};
      // The region ID of the transit router.
      shared_ptr<string> regionId_ {};
      // The instance ID of the transit router used for forward routing.
      shared_ptr<string> transitRouterId_ {};
    };

    virtual bool empty() const override { return this->ccnId_ == nullptr
        && this->cenId_ == nullptr && this->cidrAllocationMode_ == nullptr && this->regionBindingList_ == nullptr && this->regionId_ == nullptr && this->subnet_ == nullptr; };
    // ccnId Field Functions 
    bool hasCcnId() const { return this->ccnId_ != nullptr;};
    void deleteCcnId() { this->ccnId_ = nullptr;};
    inline string getCcnId() const { DARABONBA_PTR_GET_DEFAULT(ccnId_, "") };
    inline AttachCcnInstanceToCenRequest& setCcnId(string ccnId) { DARABONBA_PTR_SET_VALUE(ccnId_, ccnId) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline AttachCcnInstanceToCenRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cidrAllocationMode Field Functions 
    bool hasCidrAllocationMode() const { return this->cidrAllocationMode_ != nullptr;};
    void deleteCidrAllocationMode() { this->cidrAllocationMode_ = nullptr;};
    inline string getCidrAllocationMode() const { DARABONBA_PTR_GET_DEFAULT(cidrAllocationMode_, "") };
    inline AttachCcnInstanceToCenRequest& setCidrAllocationMode(string cidrAllocationMode) { DARABONBA_PTR_SET_VALUE(cidrAllocationMode_, cidrAllocationMode) };


    // regionBindingList Field Functions 
    bool hasRegionBindingList() const { return this->regionBindingList_ != nullptr;};
    void deleteRegionBindingList() { this->regionBindingList_ = nullptr;};
    inline const vector<AttachCcnInstanceToCenRequest::RegionBindingList> & getRegionBindingList() const { DARABONBA_PTR_GET_CONST(regionBindingList_, vector<AttachCcnInstanceToCenRequest::RegionBindingList>) };
    inline vector<AttachCcnInstanceToCenRequest::RegionBindingList> getRegionBindingList() { DARABONBA_PTR_GET(regionBindingList_, vector<AttachCcnInstanceToCenRequest::RegionBindingList>) };
    inline AttachCcnInstanceToCenRequest& setRegionBindingList(const vector<AttachCcnInstanceToCenRequest::RegionBindingList> & regionBindingList) { DARABONBA_PTR_SET_VALUE(regionBindingList_, regionBindingList) };
    inline AttachCcnInstanceToCenRequest& setRegionBindingList(vector<AttachCcnInstanceToCenRequest::RegionBindingList> && regionBindingList) { DARABONBA_PTR_SET_RVALUE(regionBindingList_, regionBindingList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachCcnInstanceToCenRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // subnet Field Functions 
    bool hasSubnet() const { return this->subnet_ != nullptr;};
    void deleteSubnet() { this->subnet_ = nullptr;};
    inline string getSubnet() const { DARABONBA_PTR_GET_DEFAULT(subnet_, "") };
    inline AttachCcnInstanceToCenRequest& setSubnet(string subnet) { DARABONBA_PTR_SET_VALUE(subnet_, subnet) };


  protected:
    // The ID of the Cloud Connect Network (CCN) to attach.
    shared_ptr<string> ccnId_ {};
    // The ID of the CEN instance to which you want to attach the CCN instance.
    shared_ptr<string> cenId_ {};
    // The CIDR block allocation mode. Valid values: - PER_REGION: Custom CIDR blocks are allocated for each region. - UNIFIED: A unified CIDR block is allocated.
    shared_ptr<string> cidrAllocationMode_ {};
    // The list of transit routers to be newly attached to the CCN instance.
    shared_ptr<vector<AttachCcnInstanceToCenRequest::RegionBindingList>> regionBindingList_ {};
    // The region ID of the Cloud Connect Network (CCN) instance. You can invoke the DescribeRegions operation to query the regions supported by Smart Access Gateway and the corresponding region IDs.
    shared_ptr<string> regionId_ {};
    // The Internet CIDR block used to attach the Cloud Connect Network (CCN) to the Cloud Enterprise Network (CEN).
    shared_ptr<string> subnet_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
