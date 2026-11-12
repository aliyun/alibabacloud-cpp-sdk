// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHCCNINSTANCEFROMCENSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHCCNINSTANCEFROMCENSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DetachCcnInstanceFromCenShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachCcnInstanceFromCenShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CcnId, ccnId_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(RegionBindingList, regionBindingListShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachCcnInstanceFromCenShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CcnId, ccnId_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(RegionBindingList, regionBindingListShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DetachCcnInstanceFromCenShrinkRequest() = default ;
    DetachCcnInstanceFromCenShrinkRequest(const DetachCcnInstanceFromCenShrinkRequest &) = default ;
    DetachCcnInstanceFromCenShrinkRequest(DetachCcnInstanceFromCenShrinkRequest &&) = default ;
    DetachCcnInstanceFromCenShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachCcnInstanceFromCenShrinkRequest() = default ;
    DetachCcnInstanceFromCenShrinkRequest& operator=(const DetachCcnInstanceFromCenShrinkRequest &) = default ;
    DetachCcnInstanceFromCenShrinkRequest& operator=(DetachCcnInstanceFromCenShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ccnId_ == nullptr
        && this->cenId_ == nullptr && this->regionBindingListShrink_ == nullptr && this->regionId_ == nullptr; };
    // ccnId Field Functions 
    bool hasCcnId() const { return this->ccnId_ != nullptr;};
    void deleteCcnId() { this->ccnId_ = nullptr;};
    inline string getCcnId() const { DARABONBA_PTR_GET_DEFAULT(ccnId_, "") };
    inline DetachCcnInstanceFromCenShrinkRequest& setCcnId(string ccnId) { DARABONBA_PTR_SET_VALUE(ccnId_, ccnId) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DetachCcnInstanceFromCenShrinkRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // regionBindingListShrink Field Functions 
    bool hasRegionBindingListShrink() const { return this->regionBindingListShrink_ != nullptr;};
    void deleteRegionBindingListShrink() { this->regionBindingListShrink_ = nullptr;};
    inline string getRegionBindingListShrink() const { DARABONBA_PTR_GET_DEFAULT(regionBindingListShrink_, "") };
    inline DetachCcnInstanceFromCenShrinkRequest& setRegionBindingListShrink(string regionBindingListShrink) { DARABONBA_PTR_SET_VALUE(regionBindingListShrink_, regionBindingListShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachCcnInstanceFromCenShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the attached Cloud Connect Network (CCN).
    shared_ptr<string> ccnId_ {};
    // The ID of the CEN instance from which you want to revoke authorization.
    shared_ptr<string> cenId_ {};
    // The list of transit routers to be disassociated from the CCN.
    shared_ptr<string> regionBindingListShrink_ {};
    // The region ID of the Smart Access Gateway instance. You can call the DescribeRegions operation to query the regions supported by Smart Access Gateway and the corresponding region IDs.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
