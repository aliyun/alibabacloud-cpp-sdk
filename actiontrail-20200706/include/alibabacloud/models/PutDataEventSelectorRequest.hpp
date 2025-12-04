// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTDATAEVENTSELECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTDATAEVENTSELECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class PutDataEventSelectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutDataEventSelectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventSelectors, eventSelectors_);
      DARABONBA_PTR_TO_JSON(IsTrailAllRegion, isTrailAllRegion_);
      DARABONBA_PTR_TO_JSON(TrailName, trailName_);
      DARABONBA_PTR_TO_JSON(TrailRegionIds, trailRegionIds_);
    };
    friend void from_json(const Darabonba::Json& j, PutDataEventSelectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventSelectors, eventSelectors_);
      DARABONBA_PTR_FROM_JSON(IsTrailAllRegion, isTrailAllRegion_);
      DARABONBA_PTR_FROM_JSON(TrailName, trailName_);
      DARABONBA_PTR_FROM_JSON(TrailRegionIds, trailRegionIds_);
    };
    PutDataEventSelectorRequest() = default ;
    PutDataEventSelectorRequest(const PutDataEventSelectorRequest &) = default ;
    PutDataEventSelectorRequest(PutDataEventSelectorRequest &&) = default ;
    PutDataEventSelectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutDataEventSelectorRequest() = default ;
    PutDataEventSelectorRequest& operator=(const PutDataEventSelectorRequest &) = default ;
    PutDataEventSelectorRequest& operator=(PutDataEventSelectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventSelectors_ == nullptr
        && return this->isTrailAllRegion_ == nullptr && return this->trailName_ == nullptr && return this->trailRegionIds_ == nullptr; };
    // eventSelectors Field Functions 
    bool hasEventSelectors() const { return this->eventSelectors_ != nullptr;};
    void deleteEventSelectors() { this->eventSelectors_ = nullptr;};
    inline string eventSelectors() const { DARABONBA_PTR_GET_DEFAULT(eventSelectors_, "") };
    inline PutDataEventSelectorRequest& setEventSelectors(string eventSelectors) { DARABONBA_PTR_SET_VALUE(eventSelectors_, eventSelectors) };


    // isTrailAllRegion Field Functions 
    bool hasIsTrailAllRegion() const { return this->isTrailAllRegion_ != nullptr;};
    void deleteIsTrailAllRegion() { this->isTrailAllRegion_ = nullptr;};
    inline bool isTrailAllRegion() const { DARABONBA_PTR_GET_DEFAULT(isTrailAllRegion_, false) };
    inline PutDataEventSelectorRequest& setIsTrailAllRegion(bool isTrailAllRegion) { DARABONBA_PTR_SET_VALUE(isTrailAllRegion_, isTrailAllRegion) };


    // trailName Field Functions 
    bool hasTrailName() const { return this->trailName_ != nullptr;};
    void deleteTrailName() { this->trailName_ = nullptr;};
    inline string trailName() const { DARABONBA_PTR_GET_DEFAULT(trailName_, "") };
    inline PutDataEventSelectorRequest& setTrailName(string trailName) { DARABONBA_PTR_SET_VALUE(trailName_, trailName) };


    // trailRegionIds Field Functions 
    bool hasTrailRegionIds() const { return this->trailRegionIds_ != nullptr;};
    void deleteTrailRegionIds() { this->trailRegionIds_ = nullptr;};
    inline string trailRegionIds() const { DARABONBA_PTR_GET_DEFAULT(trailRegionIds_, "") };
    inline PutDataEventSelectorRequest& setTrailRegionIds(string trailRegionIds) { DARABONBA_PTR_SET_VALUE(trailRegionIds_, trailRegionIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> eventSelectors_ = nullptr;
    std::shared_ptr<bool> isTrailAllRegion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> trailName_ = nullptr;
    std::shared_ptr<string> trailRegionIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
