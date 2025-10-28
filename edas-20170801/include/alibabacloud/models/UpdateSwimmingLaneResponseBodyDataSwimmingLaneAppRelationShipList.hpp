// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESWIMMINGLANERESPONSEBODYDATASWIMMINGLANEAPPRELATIONSHIPLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESWIMMINGLANERESPONSEBODYDATASWIMMINGLANEAPPRELATIONSHIPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(LaneId, laneId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(LaneId, laneId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList() = default ;
    UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList(const UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList &) = default ;
    UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList(UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList &&) = default ;
    UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList() = default ;
    UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList& operator=(const UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList &) = default ;
    UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList& operator=(UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->laneId_ == nullptr && return this->rules_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // laneId Field Functions 
    bool hasLaneId() const { return this->laneId_ != nullptr;};
    void deleteLaneId() { this->laneId_ = nullptr;};
    inline int64_t laneId() const { DARABONBA_PTR_GET_DEFAULT(laneId_, 0L) };
    inline UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList& setLaneId(int64_t laneId) { DARABONBA_PTR_SET_VALUE(laneId_, laneId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string rules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The ID of the lane.
    std::shared_ptr<int64_t> laneId_ = nullptr;
    // The association rule.
    std::shared_ptr<string> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
