// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAEVENTSELECTORSRESPONSEBODYDATADATAEVENTSELECTORINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAEVENTSELECTORSRESPONSEBODYDATADATAEVENTSELECTORINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataEventSelectorsResponseBodyDataDataEventSelectorInfosSlsDeliveryConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos& obj) { 
      DARABONBA_PTR_TO_JSON(EventSelectors, eventSelectors_);
      DARABONBA_PTR_TO_JSON(IsTrailAllRegion, isTrailAllRegion_);
      DARABONBA_PTR_TO_JSON(SlsDeliveryConfigs, slsDeliveryConfigs_);
      DARABONBA_PTR_TO_JSON(TrailArn, trailArn_);
      DARABONBA_PTR_TO_JSON(TrailName, trailName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(EventSelectors, eventSelectors_);
      DARABONBA_PTR_FROM_JSON(IsTrailAllRegion, isTrailAllRegion_);
      DARABONBA_PTR_FROM_JSON(SlsDeliveryConfigs, slsDeliveryConfigs_);
      DARABONBA_PTR_FROM_JSON(TrailArn, trailArn_);
      DARABONBA_PTR_FROM_JSON(TrailName, trailName_);
    };
    ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos() = default ;
    ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos(const ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos &) = default ;
    ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos(ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos &&) = default ;
    ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos() = default ;
    ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos& operator=(const ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos &) = default ;
    ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos& operator=(ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventSelectors_ == nullptr
        && return this->isTrailAllRegion_ == nullptr && return this->slsDeliveryConfigs_ == nullptr && return this->trailArn_ == nullptr && return this->trailName_ == nullptr; };
    // eventSelectors Field Functions 
    bool hasEventSelectors() const { return this->eventSelectors_ != nullptr;};
    void deleteEventSelectors() { this->eventSelectors_ = nullptr;};
    inline string eventSelectors() const { DARABONBA_PTR_GET_DEFAULT(eventSelectors_, "") };
    inline ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos& setEventSelectors(string eventSelectors) { DARABONBA_PTR_SET_VALUE(eventSelectors_, eventSelectors) };


    // isTrailAllRegion Field Functions 
    bool hasIsTrailAllRegion() const { return this->isTrailAllRegion_ != nullptr;};
    void deleteIsTrailAllRegion() { this->isTrailAllRegion_ = nullptr;};
    inline bool isTrailAllRegion() const { DARABONBA_PTR_GET_DEFAULT(isTrailAllRegion_, false) };
    inline ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos& setIsTrailAllRegion(bool isTrailAllRegion) { DARABONBA_PTR_SET_VALUE(isTrailAllRegion_, isTrailAllRegion) };


    // slsDeliveryConfigs Field Functions 
    bool hasSlsDeliveryConfigs() const { return this->slsDeliveryConfigs_ != nullptr;};
    void deleteSlsDeliveryConfigs() { this->slsDeliveryConfigs_ = nullptr;};
    inline const vector<Models::ListDataEventSelectorsResponseBodyDataDataEventSelectorInfosSlsDeliveryConfigs> & slsDeliveryConfigs() const { DARABONBA_PTR_GET_CONST(slsDeliveryConfigs_, vector<Models::ListDataEventSelectorsResponseBodyDataDataEventSelectorInfosSlsDeliveryConfigs>) };
    inline vector<Models::ListDataEventSelectorsResponseBodyDataDataEventSelectorInfosSlsDeliveryConfigs> slsDeliveryConfigs() { DARABONBA_PTR_GET(slsDeliveryConfigs_, vector<Models::ListDataEventSelectorsResponseBodyDataDataEventSelectorInfosSlsDeliveryConfigs>) };
    inline ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos& setSlsDeliveryConfigs(const vector<Models::ListDataEventSelectorsResponseBodyDataDataEventSelectorInfosSlsDeliveryConfigs> & slsDeliveryConfigs) { DARABONBA_PTR_SET_VALUE(slsDeliveryConfigs_, slsDeliveryConfigs) };
    inline ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos& setSlsDeliveryConfigs(vector<Models::ListDataEventSelectorsResponseBodyDataDataEventSelectorInfosSlsDeliveryConfigs> && slsDeliveryConfigs) { DARABONBA_PTR_SET_RVALUE(slsDeliveryConfigs_, slsDeliveryConfigs) };


    // trailArn Field Functions 
    bool hasTrailArn() const { return this->trailArn_ != nullptr;};
    void deleteTrailArn() { this->trailArn_ = nullptr;};
    inline string trailArn() const { DARABONBA_PTR_GET_DEFAULT(trailArn_, "") };
    inline ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos& setTrailArn(string trailArn) { DARABONBA_PTR_SET_VALUE(trailArn_, trailArn) };


    // trailName Field Functions 
    bool hasTrailName() const { return this->trailName_ != nullptr;};
    void deleteTrailName() { this->trailName_ = nullptr;};
    inline string trailName() const { DARABONBA_PTR_GET_DEFAULT(trailName_, "") };
    inline ListDataEventSelectorsResponseBodyDataDataEventSelectorInfos& setTrailName(string trailName) { DARABONBA_PTR_SET_VALUE(trailName_, trailName) };


  protected:
    std::shared_ptr<string> eventSelectors_ = nullptr;
    std::shared_ptr<bool> isTrailAllRegion_ = nullptr;
    std::shared_ptr<vector<Models::ListDataEventSelectorsResponseBodyDataDataEventSelectorInfosSlsDeliveryConfigs>> slsDeliveryConfigs_ = nullptr;
    std::shared_ptr<string> trailArn_ = nullptr;
    std::shared_ptr<string> trailName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
