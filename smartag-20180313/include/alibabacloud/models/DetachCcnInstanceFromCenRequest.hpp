// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHCCNINSTANCEFROMCENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHCCNINSTANCEFROMCENREQUEST_HPP_
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
  class DetachCcnInstanceFromCenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachCcnInstanceFromCenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CcnId, ccnId_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(RegionBindingList, regionBindingList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachCcnInstanceFromCenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CcnId, ccnId_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(RegionBindingList, regionBindingList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DetachCcnInstanceFromCenRequest() = default ;
    DetachCcnInstanceFromCenRequest(const DetachCcnInstanceFromCenRequest &) = default ;
    DetachCcnInstanceFromCenRequest(DetachCcnInstanceFromCenRequest &&) = default ;
    DetachCcnInstanceFromCenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachCcnInstanceFromCenRequest() = default ;
    DetachCcnInstanceFromCenRequest& operator=(const DetachCcnInstanceFromCenRequest &) = default ;
    DetachCcnInstanceFromCenRequest& operator=(DetachCcnInstanceFromCenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegionBindingList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionBindingList& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      };
      friend void from_json(const Darabonba::Json& j, RegionBindingList& obj) { 
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
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->transitRouterId_ == nullptr; };
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
      // The region ID of the transit router to be disassociated.
      shared_ptr<string> regionId_ {};
      // The instance ID of the forward routing transit router.
      shared_ptr<string> transitRouterId_ {};
    };

    virtual bool empty() const override { return this->ccnId_ == nullptr
        && this->cenId_ == nullptr && this->regionBindingList_ == nullptr && this->regionId_ == nullptr; };
    // ccnId Field Functions 
    bool hasCcnId() const { return this->ccnId_ != nullptr;};
    void deleteCcnId() { this->ccnId_ = nullptr;};
    inline string getCcnId() const { DARABONBA_PTR_GET_DEFAULT(ccnId_, "") };
    inline DetachCcnInstanceFromCenRequest& setCcnId(string ccnId) { DARABONBA_PTR_SET_VALUE(ccnId_, ccnId) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DetachCcnInstanceFromCenRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // regionBindingList Field Functions 
    bool hasRegionBindingList() const { return this->regionBindingList_ != nullptr;};
    void deleteRegionBindingList() { this->regionBindingList_ = nullptr;};
    inline const vector<DetachCcnInstanceFromCenRequest::RegionBindingList> & getRegionBindingList() const { DARABONBA_PTR_GET_CONST(regionBindingList_, vector<DetachCcnInstanceFromCenRequest::RegionBindingList>) };
    inline vector<DetachCcnInstanceFromCenRequest::RegionBindingList> getRegionBindingList() { DARABONBA_PTR_GET(regionBindingList_, vector<DetachCcnInstanceFromCenRequest::RegionBindingList>) };
    inline DetachCcnInstanceFromCenRequest& setRegionBindingList(const vector<DetachCcnInstanceFromCenRequest::RegionBindingList> & regionBindingList) { DARABONBA_PTR_SET_VALUE(regionBindingList_, regionBindingList) };
    inline DetachCcnInstanceFromCenRequest& setRegionBindingList(vector<DetachCcnInstanceFromCenRequest::RegionBindingList> && regionBindingList) { DARABONBA_PTR_SET_RVALUE(regionBindingList_, regionBindingList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachCcnInstanceFromCenRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the attached Cloud Connect Network (CCN).
    shared_ptr<string> ccnId_ {};
    // The ID of the CEN instance from which you want to revoke authorization.
    shared_ptr<string> cenId_ {};
    // The list of transit routers to be disassociated from the CCN.
    shared_ptr<vector<DetachCcnInstanceFromCenRequest::RegionBindingList>> regionBindingList_ {};
    // The region ID of the Smart Access Gateway instance. You can call the DescribeRegions operation to query the regions supported by Smart Access Gateway and the corresponding region IDs.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
